#define VERSION MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR MAJOR,MINOR,PATCH

#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION_STR); versionAr[] = {VERSION_AR}

#ifndef PREFIX_BEAUTIFIED
  #define PREFIX_BEAUTIFIED PREFIX
#endif

#ifndef COMPONENT_BEAUTIFIED
  #define COMPONENT_BEAUTIFIED COMPONENT
#endif

#define ADDONOF(var1) DOUBLES(PREFIX,var1)
#define ADDON ADDONOF(COMPONENT)
#define ADDON_MAIN ADDONOF(main)

#define ADDON_NAME QUOTE(PREFIX_BEAUTIFIED - COMPONENT_BEAUTIFIED)

#define DOUBLES(var1,var2) var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#define QUOTE(var1) #var1

#ifndef COMPONENT
  #define COMPONENT SUPCOMPONENT##_##SUBCOMPONENT
  #define COMPONENT_PATH SUPCOMPONENT\SUBCOMPONENT
#else
  #define COMPONENT_PATH COMPONENT
#endif

#define PATHTO(var1) \MAINPREFIX\PREFIX\addons\COMPONENT_PATH\var1
#define QPATHTO(var1) QUOTE(PATHTO(var1))

#define PATHTOE(var1,var2) \MAINPREFIX\PREFIX\addons\var1\var2
#define QPATHTOE(var1,var2) QUOTE(PATHTOE(var1,var2))

#ifdef SUPCOMPONENT
  #define PATHTOP(var1) PATHTOE(SUPCOMPONENT,var1)
  #define QPATHTOP(var1) QUOTE(PATHTOP(var1))
#endif

#define QPATHTO_FUNCS QUOTE(PATHTO(functions))

#define GVAR(var1) DOUBLES(ADDON,var1)
#define QGVAR(var1) QUOTE(GVAR(var1))
#define QQGVAR(var1) QUOTE(QGVAR(var1))

#define EGVAR(var1,var2) DOUBLES(ADDONOF(var1),var2)
#define QEGVAR(var1,var2) QUOTE(EGVAR(var1,var2))
#define QQEGVAR(var1,var2) QUOTE(QEGVAR(var1,var2))

#define GVAR_CORE(var1) DOUBLES(PREFIX,var1)
#define QGVAR_CORE(var1) QUOTE(GVAR_CORE(var1))
#define QQGVAR_CORE(var1) QUOTE(QGVAR_CORE(var1))

#define FUNC(var1) TRIPLES(ADDON,fnc,var1)
#define QFUNC(var1) QUOTE(FUNC(var1))
#define QQFUNC(var1) QUOTE(QFUNC(var1))

#define EFUNC(var1,var2) TRIPLES(ADDONOF(var1),fnc,var2)
#define QEFUNC(var1,var2) QUOTE(EFUNC(var1,var2))
#define QQEFUNC(var1,var2) QUOTE(QEFUNC(var1,var2))

#define ISNIL(VARIABLE,DEFAULT_VALUE) if (isNil #VARIABLE) then { VARIABLE = DEFAULT_VALUE }

#define RETDEF(VARIABLE,DEFAULT_VALUE) (if (isNil {VARIABLE}) then [{DEFAULT_VALUE}, {VARIABLE}])
#define RETNIL(VARIABLE) RETDEF(VARIABLE,nil)

#define LIST2(var1) var1,var1
#define LIST3(var1) var1,var1,var1
#define LIST4(var1) var1,var1,var1,var1
#define LIST5(var1) var1,var1,var1,var1,var1
#define LIST6(var1) var1,var1,var1,var1,var1,var1
#define LIST7(var1) var1,var1,var1,var1,var1,var1,var1
#define LIST8(var1) var1,var1,var1,var1,var1,var1,var1,var1
#define LIST9(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1
