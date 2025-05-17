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

#ifndef COMPONENT
  #define COMPONENT SUPCOMPONENT##_##SUBCOMPONENT
  #define COMPONENT_PATH SUPCOMPONENT\SUBCOMPONENT
#else
  #define COMPONENT_PATH COMPONENT
#endif

#define ADDONOF(var1) DOUBLES(PREFIX,var1)
#define ADDON ADDONOF(COMPONENT)
#define ADDON_MAIN ADDONOF(main)

#define QADDONOF(var1) QUOTE(ADDONOF(var1))
#define QADDON QUOTE(ADDON)
#define QADDON_MAIN QUOTE(ADDON_MAIN)

#ifdef SUPCOMPONENT
  #define ADDON_PARENT ADDONOF(SUPCOMPONENT)
  #define QADDON_PARENT QUOTE(ADDON_PARENT)

  #define ADDON_SIBLING(var1) ADDONOF(DOUBLES(SUPCOMPONENT,var1))
  #define QADDON_SIBLING(var1) QUOTE(ADDON_SIBLING(var1))
#endif

#define ADDON_NAME QUOTE(PREFIX_BEAUTIFIED - COMPONENT_BEAUTIFIED)

#define DOUBLES(var1,var2) var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#define QUOTE(var1) #var1

#define PATHTO(var1) \sct\PREFIX\addons\COMPONENT_PATH\var1
#define QPATHTO(var1) QUOTE(PATHTO(var1))

#define PATHTOE(var1,var2) \sct\PREFIX\addons\var1\var2
#define QPATHTOE(var1,var2) QUOTE(PATHTOE(var1,var2))

#ifdef SUPCOMPONENT
  #define PATHTOP(var1) PATHTOE(SUPCOMPONENT,var1)
  #define QPATHTOP(var1) QUOTE(PATHTOP(var1))
#endif

#define LIST2(var1) var1,var1
#define LIST3(var1) var1,var1,var1
#define LIST4(var1) var1,var1,var1,var1
#define LIST5(var1) var1,var1,var1,var1,var1
#define LIST6(var1) var1,var1,var1,var1,var1,var1
#define LIST7(var1) var1,var1,var1,var1,var1,var1,var1
#define LIST8(var1) var1,var1,var1,var1,var1,var1,var1,var1
#define LIST9(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1
