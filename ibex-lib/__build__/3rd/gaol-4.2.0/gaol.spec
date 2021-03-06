%define name gaol
%define version "4.2.0"
%define release 1

Summary: An interval arithmetic C++ library
Name: %{name}
Version: %{version}
Release: %{release}
License: GNU LGPL
Group: Sciences/Libraries
Vendor: Laboratoire d'Informatique de Nantes-Atlantique, France
#Provides: %{name} = %{version}-%{release}
Source0: %{name}-%{version}.tar.gz
URL: ftp://gaol.sf.net/gaol-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-root
Prefix: %{_prefix}
Requires: mathlib /sbin/ldconfig
Packager: Frederic Goualard <goualard@users.sourceforge.net>

%description
Gaol is a C++ library that offers an "interval" data type 
to perform interval arithmetic. Its specificity is to implement
also "relational" interval arithmetic as needed by interval constraint
solvers.

See: 
- Interval Analysis, Ramon E. Moore, Prentice Hall, 1966
- Introduction to Numerical Analysis, Arnold Neumaier, 
  Cambridge Univ. Press, 2001
- Interval Computation Homepage 
  (http://www.cs.utep.edu/interval-comp/main.html)
- Logical Arithmetic, John G. Cleary,  Future Generation Computing 
  Systems 2(2):125-149
 

######################################################################
%prep
%setup -q

%build
%configure --enable-optimize
make 

%install
rm -rf ${RPM_BUILD_ROOT}
%makeinstall


%clean
rm -rf ${RPM_BUILD_ROOT}

######################################################################
%post 
/sbin/ldconfig


%postun 
/sbin/ldconfig


######################################################################
%files
%defattr(-,root,root)
%doc AUTHORS BUGS README TODO NEWS COPYING ChangeLog doc/gaol.pdf doc/html 
#%doc %{_infodir}/gaol.info*
%{_libdir}/*.so*
%{_libdir}/*.a
%{_libdir}/*.la
%{_includedir}/gaol/*.h
%{_includedir}/gaol/gaol
%{_includedir}/gaol/sysdeps/*.h


%changelog
* Fri Jul 15 2005 Frederic Goualard <Frederic.Goualard@univ-nantes.fr> %{version}
- modified %post and %postun rules
* Thu Oct 14 2004 Frederic Goualard <Frederic.Goualard@lina.univ-nantes.fr> %{version}
- changed the Vendor from IRIN to LINA
* Mon Aug 12 2002 Frederic Goualard <Frederic.Goualard@irin.univ-nantes.fr> %{version}
- initial build
# end of file
