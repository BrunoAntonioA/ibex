%define name mathlib
%define version 2.1.0
%define release 

Summary: IBM Accurate Portable Mathlib
Name: %{name}
Version: %{version}
Release: %{release}
Source0: %{name}-%{version}.tar.gz
URL: ftp://www-126.ibm.com/pub/mathlib/mathlib12.20.2001.tar.gz
Prereq: /sbin/install-info
License: GNU LGPL
Group: Sciences/Libraries
BuildRoot: %{_tmppath}/%{name}-buildroot
Prefix: %{_prefix}
Packager: Frederic Goualard <Frederic.Goualard@users.sourceforge.net>
#Provides: %{name} = %{version}-%{release}

%description
The IBM Accurate Portable Mathematical library (IBM APMathLib) 
consists of routines that compute some of the standard common 
transcendental functions. The computed results are the exact 
theoretical values correctly rounded (nearest or even) to the 
closest number representable by the IEEE 754 double format. 
The computations are bit-by-bit compatible upon porting among 
the supported platforms. Currently the supported platforms/compilers 
are: x86/Linux/gcc, x86/NT/[gcc| cl], Sparc/Solaris/gcc, 
PowerPC/AIX[32bit | 64bit]/[gcc | xlc]. 


%prep
%setup -q

%build
%configure
make

%install
rm -rf $RPM_BUILD_ROOT
%makeinstall

%clean
rm -rf $RPM_BUILD_ROOT

######################################################################
%post 
/sbin/ldconfig

%postun 
/sbin/ldconfig

%files
%defattr(-,root,root)
%doc AUTHORS README NEWS COPYING ChangeLog descriptions2.txt
%{_libdir}/*.so*
%{_libdir}/*.a
%{_libdir}/*.la
%{_includedir}/MathLib.h
%{_includedir}/mathlib_configuration.h
%{_includedir}/mathlib_config.h

%changelog
* Fri Jul 15 2005  Frederic Goualard <Frederic.Goualard@univ-nantes.fr> %{version}
* Tue Aug 13 2002 Frederic Goualard <Frederic.Goualard@irin.univ-nantes.fr> %{version}
- initial build

# end of file
