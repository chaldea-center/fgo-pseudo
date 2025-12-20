void AdjustSdk_Adjust___ctor(AdjustSdk_Adjust_o *this, const MethodInfo *method)
{
  this->fields.startManually = 1;
  this->fields.logLevel = 3;
  this->fields.launchDeferredDeeplink = 1;
  *(_WORD *)&this->fields.adServices = 257;
  this->fields.skanAttribution = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AdjustSdk_Adjust__AddGlobalCallbackParameter(
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_4D249E2 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249E2 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__AddGlobalCallbackParameter(key, value, method);
}


void AdjustSdk_Adjust__AddGlobalPartnerParameter(
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_4D249E1 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249E1 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__AddGlobalPartnerParameter(key, value, method);
}


void AdjustSdk_Adjust__Awake(AdjustSdk_Adjust_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x20
  AdjustSdk_Adjust___c_c *v5; // x0
  System_Action_object__o *_9__18_0; // x20
  Il2CppObject *v7; // x21
  struct AdjustSdk_Adjust___c_StaticFields *static_fields; // x0
  System_String_o *absoluteURL; // x0
  System_String_o *v10; // x20
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x1
  System_String_o *appToken; // x21
  int32_t environment; // w22
  int32_t logLevel; // w23
  __int64 v16; // x20
  const MethodInfo *v17; // x4
  int32_t v18; // w1
  System_Nullable_Int32Enum__o v19; // x0
  __int16 *v20; // x0
  bool sendInBackground; // w1
  __int16 *v22; // x0
  bool launchDeferredDeeplink; // w1
  struct System_String_o *defaultTracker; // x1
  bool coppaCompliance; // w1
  __int16 *v26; // x0
  __int16 *v27; // x0
  bool costDataInAttribution; // w1
  __int16 *v29; // x0
  bool preinstallTracking; // w1
  struct System_String_o *preinstallFilePath; // x1
  bool adServices; // w1
  __int16 *v33; // x0
  __int16 *v34; // x0
  bool idfaReading; // w1
  __int16 *v36; // x0
  bool linkMe; // w1
  __int16 *v38; // x0
  bool skanAttribution; // w1
  const MethodInfo *v40; // x1
  __int16 v41; // [xsp+4h] [xbp-5Ch] BYREF
  __int16 v42; // [xsp+8h] [xbp-58h] BYREF
  __int16 v43; // [xsp+Ch] [xbp-54h] BYREF
  __int16 v44; // [xsp+10h] [xbp-50h] BYREF
  __int16 v45; // [xsp+14h] [xbp-4Ch] BYREF
  __int16 v46; // [xsp+18h] [xbp-48h] BYREF
  __int16 v47; // [xsp+1Ch] [xbp-44h] BYREF
  __int16 v48; // [xsp+20h] [xbp-40h] BYREF
  __int16 v49; // [xsp+24h] [xbp-3Ch] BYREF
  __int64 v50; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4D249D6 & 1) == 0 )
  {
    sub_1C94098(&System_Action_string__TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustConfig_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustDeeplink_TypeInfo);
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&Method_System_Nullable_bool___ctor__);
    sub_1C94098(&Method_System_Nullable_AdjustLogLevel___ctor__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_Adjust___c__Awake_b__18_0__);
    sub_1C94098(&AdjustSdk_Adjust___c_TypeInfo);
    byte_4D249D6 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_22;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  v5 = AdjustSdk_Adjust___c_TypeInfo;
  if ( !AdjustSdk_Adjust___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_Adjust___c_TypeInfo);
    v5 = AdjustSdk_Adjust___c_TypeInfo;
  }
  _9__18_0 = (System_Action_object__o *)v5->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = AdjustSdk_Adjust___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__18_0 = (System_Action_object__o *)sub_1C942E4(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__18_0, v7, Method_AdjustSdk_Adjust___c__Awake_b__18_0__, 0);
    static_fields = AdjustSdk_Adjust___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Action_string__o *)_9__18_0;
    sub_1C9403C(&static_fields->__9__18_0, _9__18_0);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__add_deepLinkActivated((System_Action_string__o *)_9__18_0, 0);
  absoluteURL = UnityEngine_Application__get_absoluteURL(0);
  if ( !System_String__IsNullOrEmpty(absoluteURL, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    v10 = UnityEngine_Application__get_absoluteURL(0);
    v11 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustDeeplink_TypeInfo);
    System_Object___ctor(v11, 0);
    v11[1].klass = (Il2CppClass *)v10;
    sub_1C9403C(&v11[1], v10);
    AdjustSdk_Adjust__ProcessDeeplink((AdjustSdk_AdjustDeeplink_o *)v11, v12);
  }
  if ( !this->fields.startManually )
  {
    appToken = this->fields.appToken;
    environment = this->fields.environment;
    logLevel = this->fields.logLevel;
    v16 = sub_1C942E4(AdjustSdk_AdjustConfig_TypeInfo);
    AdjustSdk_AdjustConfig___ctor_30919960((AdjustSdk_AdjustConfig_o *)v16, appToken, environment, logLevel == 7, v17);
    v18 = this->fields.logLevel;
    v19 = (System_Nullable_Int32Enum__o)&v50;
    v50 = 0;
    System_Nullable_Int32Enum____ctor(
      v19,
      v18,
      (const MethodInfo_39937A8 *)Method_System_Nullable_AdjustLogLevel___ctor__);
    if ( v16 )
    {
      v20 = &v49;
      *(_QWORD *)(v16 + 80) = v50;
      sendInBackground = this->fields.sendInBackground;
      v49 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v20,
        sendInBackground,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      v22 = &v48;
      *(_WORD *)(v16 + 42) = v49;
      launchDeferredDeeplink = this->fields.launchDeferredDeeplink;
      v48 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v22,
        launchDeferredDeeplink,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      *(_WORD *)(v16 + 48) = v48;
      defaultTracker = this->fields.defaultTracker;
      *(_QWORD *)(v16 + 24) = defaultTracker;
      sub_1C9403C(v16 + 24, defaultTracker);
      coppaCompliance = this->fields.coppaCompliance;
      v26 = &v47;
      v47 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v26,
        coppaCompliance,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      v27 = &v46;
      *(_WORD *)(v16 + 40) = v47;
      costDataInAttribution = this->fields.costDataInAttribution;
      v46 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v27,
        costDataInAttribution,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      v29 = &v45;
      *(_WORD *)(v16 + 44) = v46;
      preinstallTracking = this->fields.preinstallTracking;
      v45 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v29,
        preinstallTracking,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      *(_WORD *)(v16 + 182) = v45;
      preinstallFilePath = this->fields.preinstallFilePath;
      *(_QWORD *)(v16 + 184) = preinstallFilePath;
      sub_1C9403C(v16 + 184, preinstallFilePath);
      adServices = this->fields.adServices;
      v33 = &v44;
      v44 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v33,
        adServices,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      v34 = &v43;
      *(_WORD *)(v16 + 160) = v44;
      idfaReading = this->fields.idfaReading;
      v43 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v34,
        idfaReading,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      v36 = &v42;
      *(_WORD *)(v16 + 162) = v43;
      linkMe = this->fields.linkMe;
      v42 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v36,
        linkMe,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      v38 = &v41;
      *(_WORD *)(v16 + 168) = v42;
      skanAttribution = this->fields.skanAttribution;
      v41 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v38,
        skanAttribution,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      *(_WORD *)(v16 + 166) = v41;
      AdjustSdk_Adjust__InitSdk((AdjustSdk_AdjustConfig_o *)v16, v40);
      return;
    }
LABEL_22:
    sub_1C942F0();
  }
}


void AdjustSdk_Adjust__Disable(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249DA & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249DA = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__Disable((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__DisableCoppaComplianceInDelay(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249FE & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249FE = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__DisableCoppaComplianceInDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__DisablePlayStoreKidsComplianceInDelay(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D24A00 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D24A00 = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__DisablePlayStoreKidsComplianceInDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__Enable(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249D9 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249D9 = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__Enable((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__EnableCoppaComplianceInDelay(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249FD & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249FD = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__EnableCoppaComplianceInDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__EnablePlayStoreKidsComplianceInDelay(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249FF & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249FF = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__EnablePlayStoreKidsComplianceInDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__EndFirstSessionDelay(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249FC & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249FC = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__EndFirstSessionDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__GdprForgetMe(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249DF & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249DF = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__GdprForgetMe((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__GetAdid(System_Action_string__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249EF & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249EF = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__GetAdid(callback, method);
}


void AdjustSdk_Adjust__GetAmazonAdId(System_Action_string__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249F4 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249F4 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__GetAmazonAdId(callback, method);
}


int32_t AdjustSdk_Adjust__GetAppTrackingAuthorizationStatus(const MethodInfo *method)
{
  if ( (byte_4D249EE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15939/*"[Adjust]: Error! App tracking authorization status is only supported for iOS platform."*/);
    byte_4D249EE = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15939/*"[Adjust]: Error! App tracking authorization status is only supported for iOS platform."*/, 0);
  return -1;
}


void AdjustSdk_Adjust__GetAttribution(System_Action_AdjustAttribution__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249F0 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249F0 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__GetAttribution(callback, method);
}


void AdjustSdk_Adjust__GetGoogleAdId(System_Action_string__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249F3 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249F3 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__GetGoogleAdId(callback, method);
}


void AdjustSdk_Adjust__GetIdfa(System_Action_string__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249F1 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15940/*"[Adjust]: Error! IDFA is not available on Android platform."*/);
    byte_4D249F1 = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15940/*"[Adjust]: Error! IDFA is not available on Android platform."*/, 0);
}


void AdjustSdk_Adjust__GetIdfv(System_Action_string__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249F2 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15941/*"[Adjust]: Error! IDFV is not available on Android platform."*/);
    byte_4D249F2 = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15941/*"[Adjust]: Error! IDFV is not available on Android platform."*/, 0);
}


void AdjustSdk_Adjust__GetLastDeeplink(System_Action_string__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249F6 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249F6 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__GetLastDeeplink(callback, method);
}


void AdjustSdk_Adjust__GetSdkVersion(System_Action_string__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249F5 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249F5 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__GetSdkVersion(callback, method);
}


void AdjustSdk_Adjust__InitSdk(AdjustSdk_AdjustConfig_o *adjustConfig, const MethodInfo *method)
{
  if ( (byte_4D249D7 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15942/*"[Adjust]: Missing config to start."*/);
    byte_4D249D7 = 1;
  }
  if ( adjustConfig )
  {
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    AdjustSdk_AdjustAndroid__InitSdk(adjustConfig, method);
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15942/*"[Adjust]: Missing config to start."*/, 0);
  }
}


bool AdjustSdk_Adjust__IsEditor(const MethodInfo *method)
{
  return 0;
}


void AdjustSdk_Adjust__IsEnabled(System_Action_bool__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249DB & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249DB = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__IsEnabled(callback, method);
}


void AdjustSdk_Adjust__ProcessAndResolveDeeplink(
        AdjustSdk_AdjustDeeplink_o *deeplink,
        System_Action_string__o *callback,
        const MethodInfo *method)
{
  if ( (byte_4D249F9 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249F9 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__ProcessAndResolveDeeplink(deeplink, callback, method);
}


void AdjustSdk_Adjust__ProcessDeeplink(AdjustSdk_AdjustDeeplink_o *deeplink, const MethodInfo *method)
{
  if ( (byte_4D249E0 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249E0 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__ProcessDeeplink(deeplink, method);
}


void AdjustSdk_Adjust__RemoveGlobalCallbackParameter(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4D249E4 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249E4 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__RemoveGlobalCallbackParameter(key, method);
}


void AdjustSdk_Adjust__RemoveGlobalCallbackParameters(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249E6 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249E6 = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__RemoveGlobalCallbackParameters((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__RemoveGlobalPartnerParameter(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4D249E3 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249E3 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__RemoveGlobalPartnerParameter(key, method);
}


void AdjustSdk_Adjust__RemoveGlobalPartnerParameters(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249E5 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249E5 = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__RemoveGlobalPartnerParameters((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__RequestAppTrackingAuthorization(System_Action_int__o *callback, const MethodInfo *method)
{
  if ( (byte_4D249EC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15944/*"[Adjust]: Requesting tracking authorization is only supported for iOS platform."*/);
    byte_4D249EC = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15944/*"[Adjust]: Requesting tracking authorization is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__SetExternalDeviceIdInDelay(System_String_o *externalDeviceId, const MethodInfo *method)
{
  if ( (byte_4D24A01 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D24A01 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__SetExternalDeviceIdInDelay(externalDeviceId, method);
}


void AdjustSdk_Adjust__SetPushToken(System_String_o *pushToken, const MethodInfo *method)
{
  if ( (byte_4D249DE & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249DE = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__SetPushToken(pushToken, method);
}


void AdjustSdk_Adjust__SetTestOptions(
        System_Collections_Generic_Dictionary_string__string__o *testOptions,
        const MethodInfo *method)
{
  if ( (byte_4D24A02 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D24A02 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__SetTestOptions(testOptions, method);
}


void AdjustSdk_Adjust__SwitchBackToOnlineMode(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249DD & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249DD = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__SwitchBackToOnlineMode((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__SwitchToOfflineMode(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_4D249DC & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249DC = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__SwitchToOfflineMode((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__TrackAdRevenue(AdjustSdk_AdjustAdRevenue_o *adRevenue, const MethodInfo *method)
{
  if ( (byte_4D249E7 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249E7 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__TrackAdRevenue(adRevenue, method);
}


void AdjustSdk_Adjust__TrackAppStoreSubscription(
        AdjustSdk_AdjustAppStoreSubscription_o *subscription,
        const MethodInfo *method)
{
  if ( (byte_4D249E8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15938/*"[Adjust]: App Store subscription tracking is only supported for iOS platform."*/);
    byte_4D249E8 = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15938/*"[Adjust]: App Store subscription tracking is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__TrackEvent(AdjustSdk_AdjustEvent_o *adjustEvent, const MethodInfo *method)
{
  if ( (byte_4D249D8 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15943/*"[Adjust]: Missing event to track."*/);
    byte_4D249D8 = 1;
  }
  if ( adjustEvent )
  {
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    AdjustSdk_AdjustAndroid__TrackEvent(adjustEvent, method);
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15943/*"[Adjust]: Missing event to track."*/, 0);
  }
}


void AdjustSdk_Adjust__TrackMeasurementConsent(bool measurementConsent, const MethodInfo *method)
{
  if ( (byte_4D249EB & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249EB = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__TrackMeasurementConsent(measurementConsent, method);
}


void AdjustSdk_Adjust__TrackPlayStoreSubscription(
        AdjustSdk_AdjustPlayStoreSubscription_o *subscription,
        const MethodInfo *method)
{
  if ( (byte_4D249E9 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249E9 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__TrackPlayStoreSubscription(subscription, method);
}


void AdjustSdk_Adjust__TrackThirdPartySharing(
        AdjustSdk_AdjustThirdPartySharing_o *thirdPartySharing,
        const MethodInfo *method)
{
  if ( (byte_4D249EA & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249EA = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__TrackThirdPartySharing(thirdPartySharing, method);
}


void AdjustSdk_Adjust__UpdateSkanConversionValue(
        int32_t conversionValue,
        System_String_o *coarseValue,
        bool lockWindow,
        System_Action_string__o *callback,
        const MethodInfo *method)
{
  if ( (byte_4D249ED & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15945/*"[Adjust]: Updating SKAdNetwork conversion value is only supported for iOS platform."*/);
    byte_4D249ED = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15945/*"[Adjust]: Updating SKAdNetwork conversion value is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__VerifyAndTrackAppStorePurchase(
        AdjustSdk_AdjustEvent_o *adjustEvent,
        System_Action_AdjustPurchaseVerificationResult__o *callback,
        const MethodInfo *method)
{
  if ( (byte_4D249FA & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15937/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/);
    byte_4D249FA = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15937/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__VerifyAndTrackPlayStorePurchase(
        AdjustSdk_AdjustEvent_o *adjustEvent,
        System_Action_AdjustPurchaseVerificationResult__o *verificationResultCallback,
        const MethodInfo *method)
{
  if ( (byte_4D249FB & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249FB = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__VerifyAndTrackPlayStorePurchase(adjustEvent, verificationResultCallback, method);
}


void AdjustSdk_Adjust__VerifyAppStorePurchase(
        AdjustSdk_AdjustAppStorePurchase_o *purchase,
        System_Action_AdjustPurchaseVerificationResult__o *callback,
        const MethodInfo *method)
{
  if ( (byte_4D249F7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15937/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/);
    byte_4D249F7 = 1;
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_15937/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__VerifyPlayStorePurchase(
        AdjustSdk_AdjustPlayStorePurchase_o *purchase,
        System_Action_AdjustPurchaseVerificationResult__o *verificationResultCallback,
        const MethodInfo *method)
{
  if ( (byte_4D249F8 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_4D249F8 = 1;
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  AdjustSdk_AdjustAndroid__VerifyPlayStorePurchase(purchase, verificationResultCallback, method);
}


void AdjustSdk_Adjust___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D24A03 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_Adjust___c_TypeInfo);
    byte_4D24A03 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(AdjustSdk_Adjust___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AdjustSdk_Adjust___c_TypeInfo->static_fields->__9 = (struct AdjustSdk_Adjust___c_o *)v1;
  sub_1C9403C(AdjustSdk_Adjust___c_TypeInfo->static_fields, v1);
}


void AdjustSdk_Adjust___c___ctor(AdjustSdk_Adjust___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_Adjust___c___Awake_b__18_0(
        AdjustSdk_Adjust___c_o *this,
        System_String_o *deeplink,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4D24A04 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustDeeplink_TypeInfo);
    byte_4D24A04 = 1;
  }
  v4 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustDeeplink_TypeInfo);
  System_Object___ctor(v4, 0);
  v4[1].klass = (Il2CppClass *)deeplink;
  sub_1C9403C(&v4[1], deeplink);
  AdjustSdk_Adjust__ProcessDeeplink((AdjustSdk_AdjustDeeplink_o *)v4, v5);
}


void AdjustSdk_AdjustAdRevenue___ctor(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *source,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Source_k__BackingField = source;
  sub_1C9403C(&this->fields._Source_k__BackingField, source);
}


void AdjustSdk_AdjustAdRevenue__AddCallbackParameter(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x0
  AdjustSdk_AdjustAdRevenue_Fields *p_fields; // x20
  struct System_Collections_Generic_List_string__o *innerCallbackParameters; // t1
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4D24A08 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A08 = 1;
  }
  innerCallbackParameters = this->fields.innerCallbackParameters;
  p_fields = &this->fields;
  v7 = (System_Collections_Generic_List_object__o *)innerCallbackParameters;
  if ( !innerCallbackParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerCallbackParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_1C9403C(p_fields, v10);
    v7 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
    if ( !p_fields->innerCallbackParameters )
      goto LABEL_14;
  }
  items = v7->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    sub_1C9403C(v14 + 4, key);
  }
  v7 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
  if ( !p_fields->innerCallbackParameters
    || (v15 = v7->fields._items, v16 = Method_System_Collections_Generic_List_string__Add__, ++v7->fields._version, !v15) )
  {
LABEL_14:
    sub_1C942F0(v7, key);
  }
  v17 = v7->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v7->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)value;
    sub_1C9403C(v18 + 4, value);
  }
}


void AdjustSdk_AdjustAdRevenue__AddPartnerParameter(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x0
  struct System_Collections_Generic_List_string__o **p_innerPartnerParameters; // x20
  struct System_Collections_Generic_List_string__o *innerPartnerParameters; // t1
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4D24A09 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A09 = 1;
  }
  innerPartnerParameters = this->fields.innerPartnerParameters;
  p_innerPartnerParameters = &this->fields.innerPartnerParameters;
  v7 = (System_Collections_Generic_List_object__o *)innerPartnerParameters;
  if ( !innerPartnerParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_1C9403C(p_innerPartnerParameters, v10);
    v7 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
    if ( !*p_innerPartnerParameters )
      goto LABEL_14;
  }
  items = v7->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    sub_1C9403C(v14 + 4, key);
  }
  v7 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
  if ( !*p_innerPartnerParameters
    || (v15 = v7->fields._items, v16 = Method_System_Collections_Generic_List_string__Add__, ++v7->fields._version, !v15) )
  {
LABEL_14:
    sub_1C942F0(v7, key);
  }
  v17 = v7->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v7->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)value;
    sub_1C9403C(v18 + 4, value);
  }
}


void AdjustSdk_AdjustAdRevenue__SetRevenue(
        AdjustSdk_AdjustAdRevenue_o *this,
        double revenue,
        System_String_o *currency,
        const MethodInfo *method)
{
  struct System_Nullable_double__o v7; // q0
  struct System_Nullable_double__o v8; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_double__o v9; // 0:x0.16

  if ( (byte_4D24A07 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_double___ctor__);
    byte_4D24A07 = 1;
  }
  *(_QWORD *)&v9.fields.value = Method_System_Nullable_double___ctor__;
  *(_QWORD *)&v9.fields.hasValue = &v8;
  v8 = (struct System_Nullable_double__o)0LL;
  System_Nullable_double____ctor(v9, revenue, (const MethodInfo_3992070 *)method);
  v7 = v8;
  this->fields._Currency_k__BackingField = currency;
  this->fields._Revenue_k__BackingField = v7;
  sub_1C9403C(&this->fields._Currency_k__BackingField, currency);
}


System_Nullable_int__o AdjustSdk_AdjustAdRevenue__get_AdImpressionsCount(
        AdjustSdk_AdjustAdRevenue_o *this,
        const MethodInfo *method)
{
  return this->fields._AdImpressionsCount_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAdRevenue__get_AdRevenueNetwork(
        AdjustSdk_AdjustAdRevenue_o *this,
        const MethodInfo *method)
{
  return this->fields._AdRevenueNetwork_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAdRevenue__get_AdRevenuePlacement(
        AdjustSdk_AdjustAdRevenue_o *this,
        const MethodInfo *method)
{
  return this->fields._AdRevenuePlacement_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAdRevenue__get_AdRevenueUnit(
        AdjustSdk_AdjustAdRevenue_o *this,
        const MethodInfo *method)
{
  return this->fields._AdRevenueUnit_k__BackingField;
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustAdRevenue__get_CallbackParameters(
        AdjustSdk_AdjustAdRevenue_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A05 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A05 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerCallbackParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


System_String_o *AdjustSdk_AdjustAdRevenue__get_Currency(AdjustSdk_AdjustAdRevenue_o *this, const MethodInfo *method)
{
  return this->fields._Currency_k__BackingField;
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustAdRevenue__get_PartnerParameters(
        AdjustSdk_AdjustAdRevenue_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A06 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A06 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_double__o AdjustSdk_AdjustAdRevenue__get_Revenue(
        AdjustSdk_AdjustAdRevenue_o *this,
        const MethodInfo *method)
{
  double value; // x1
  __int64 v3; // x0
  System_Nullable_double__o result; // 0:x0.16

  value = this->fields._Revenue_k__BackingField.fields.value;
  v3 = *(_QWORD *)&this->fields._Revenue_k__BackingField.fields.hasValue;
  result.fields.value = value;
  *(_QWORD *)&result.fields.hasValue = v3;
  return result;
}


System_String_o *AdjustSdk_AdjustAdRevenue__get_Source(AdjustSdk_AdjustAdRevenue_o *this, const MethodInfo *method)
{
  return this->fields._Source_k__BackingField;
}


void AdjustSdk_AdjustAdRevenue__set_AdImpressionsCount(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_Nullable_int__o value,
        const MethodInfo *method)
{
  this->fields._AdImpressionsCount_k__BackingField = value;
}


void AdjustSdk_AdjustAdRevenue__set_AdRevenueNetwork(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._AdRevenueNetwork_k__BackingField = value;
  sub_1C9403C(&this->fields._AdRevenueNetwork_k__BackingField, value);
}


void AdjustSdk_AdjustAdRevenue__set_AdRevenuePlacement(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._AdRevenuePlacement_k__BackingField = value;
  sub_1C9403C(&this->fields._AdRevenuePlacement_k__BackingField, value);
}


void AdjustSdk_AdjustAdRevenue__set_AdRevenueUnit(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._AdRevenueUnit_k__BackingField = value;
  sub_1C9403C(&this->fields._AdRevenueUnit_k__BackingField, value);
}


void AdjustSdk_AdjustAdRevenue__set_Currency(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Currency_k__BackingField = value;
  sub_1C9403C(&this->fields._Currency_k__BackingField, value);
}


void AdjustSdk_AdjustAdRevenue__set_Revenue(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_Nullable_double__o value,
        const MethodInfo *method)
{
  this->fields._Revenue_k__BackingField = value;
}


void AdjustSdk_AdjustAdRevenue__set_Source(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Source_k__BackingField = value;
  sub_1C9403C(&this->fields._Source_k__BackingField, value);
}


void AdjustSdk_AdjustAndroid___cctor(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaClass_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Static_object; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v7; // x8

  if ( (byte_4D24A34 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C94098(&StringLiteral_18217/*"com.unity3d.player.UnityPlayer"*/);
    sub_1C94098(&StringLiteral_18158/*"com.adjust.sdk.Adjust"*/);
    sub_1C94098(&StringLiteral_18513/*"currentActivity"*/);
    byte_4D24A34 = 1;
  }
  AdjustSdk_AdjustAndroid_TypeInfo->static_fields->isDeferredDeeplinkOpeningEnabled = 1;
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_18158/*"com.adjust.sdk.Adjust"*/, 0);
  static_fields = AdjustSdk_AdjustAndroid_TypeInfo->static_fields;
  static_fields->ajcAdjust = v1;
  sub_1C9403C(&static_fields->ajcAdjust, v1);
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_18217/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v3,
                    (System_String_o *)StringLiteral_18513/*"currentActivity"*/,
                    (const MethodInfo_30EB3E4 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo->static_fields;
  v7->ajoCurrentActivity = (struct UnityEngine_AndroidJavaObject_o *)Static_object;
  sub_1C9403C(&v7->ajoCurrentActivity, Static_object);
}


void AdjustSdk_AdjustAndroid___ctor(AdjustSdk_AdjustAndroid_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid__AddGlobalCallbackParameter(
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaClass_o *v6; // x21
  AdjustSdk_AdjustAndroid_c *v7; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Object_array *v12; // x22
  __int64 v13; // x0

  if ( (byte_4D24A17 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_16738/*"addGlobalCallbackParameter"*/);
    sub_1C94098(&StringLiteral_18158/*"com.adjust.sdk.Adjust"*/);
    byte_4D24A17 = 1;
  }
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v5->static_fields->ajcAdjust )
  {
    v6 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v6, (System_String_o *)StringLiteral_18158/*"com.adjust.sdk.Adjust"*/, 0);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->ajcAdjust = v6;
    sub_1C9403C(&static_fields->ajcAdjust, v6);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v10 = sub_1C94140(object___TypeInfo, 2);
  if ( !v10 )
LABEL_21:
    sub_1C942F0(v10, v11);
  v12 = (System_Object_array *)v10;
  if ( key )
  {
    v10 = sub_1C941D4(key, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
      goto LABEL_22;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_20;
  v12->m_Items[0] = (Il2CppObject *)key;
  v10 = sub_1C9403C(v12->m_Items, key);
  if ( value )
  {
    v10 = sub_1C941D4(value, v12->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_22:
      v13 = sub_1C94314();
      sub_1C941C0(v13, 0);
    }
  }
  if ( LODWORD(v12->max_length) <= 1 )
LABEL_20:
    sub_1C942F8(v10);
  v12->m_Items[1] = (Il2CppObject *)value;
  v10 = sub_1C9403C(&v12->m_Items[1], value);
  if ( !ajcAdjust )
    goto LABEL_21;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_16738/*"addGlobalCallbackParameter"*/, v12, 0);
}


void AdjustSdk_AdjustAndroid__AddGlobalPartnerParameter(
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaClass_o *v6; // x21
  AdjustSdk_AdjustAndroid_c *v7; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Object_array *v12; // x22
  __int64 v13; // x0

  if ( (byte_4D24A16 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_18158/*"com.adjust.sdk.Adjust"*/);
    sub_1C94098(&StringLiteral_16739/*"addGlobalPartnerParameter"*/);
    byte_4D24A16 = 1;
  }
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v5->static_fields->ajcAdjust )
  {
    v6 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v6, (System_String_o *)StringLiteral_18158/*"com.adjust.sdk.Adjust"*/, 0);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->ajcAdjust = v6;
    sub_1C9403C(&static_fields->ajcAdjust, v6);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v10 = sub_1C94140(object___TypeInfo, 2);
  if ( !v10 )
LABEL_21:
    sub_1C942F0(v10, v11);
  v12 = (System_Object_array *)v10;
  if ( key )
  {
    v10 = sub_1C941D4(key, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
      goto LABEL_22;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_20;
  v12->m_Items[0] = (Il2CppObject *)key;
  v10 = sub_1C9403C(v12->m_Items, key);
  if ( value )
  {
    v10 = sub_1C941D4(value, v12->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_22:
      v13 = sub_1C94314();
      sub_1C941C0(v13, 0);
    }
  }
  if ( LODWORD(v12->max_length) <= 1 )
LABEL_20:
    sub_1C942F8(v10);
  v12->m_Items[1] = (Il2CppObject *)value;
  v10 = sub_1C9403C(&v12->m_Items[1], value);
  if ( !ajcAdjust )
    goto LABEL_21;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_16739/*"addGlobalPartnerParameter"*/, v12, 0);
}


void AdjustSdk_AdjustAndroid__Disable(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4D24A0D & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_18742/*"disable"*/);
    byte_4D24A0D = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v4 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C();
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v7, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_18742/*"disable"*/,
    **(System_Object_array ***)(v7 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__DisableCoppaCompliance(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v1; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v7; // x0

  if ( (byte_4D24A11 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_18743/*"disableCoppaCompliance"*/);
    byte_4D24A11 = 1;
  }
  v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v1->static_fields->ajcAdjust;
  v3 = sub_1C94140(object___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_11;
  v5 = v3;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v3 = sub_1C941D4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v7 = sub_1C94314();
      sub_1C941C0(v7, 0);
    }
  }
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C942F8(v3);
  *(_QWORD *)(v5 + 32) = ajoCurrentActivity;
  v3 = sub_1C9403C(v5 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v3, v4);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_18743/*"disableCoppaCompliance"*/,
    (System_Object_array *)v5,
    0);
}


void AdjustSdk_AdjustAndroid__DisableCoppaComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4D24A28 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_18744/*"disableCoppaComplianceInDelay"*/);
    byte_4D24A28 = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v4 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C();
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v7, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_18744/*"disableCoppaComplianceInDelay"*/,
    **(System_Object_array ***)(v7 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__DisablePlayStoreKidsApp(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v1; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v7; // x0

  if ( (byte_4D24A13 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_18746/*"disablePlayStoreKidsApp"*/);
    byte_4D24A13 = 1;
  }
  v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v1->static_fields->ajcAdjust;
  v3 = sub_1C94140(object___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_11;
  v5 = v3;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v3 = sub_1C941D4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v7 = sub_1C94314();
      sub_1C941C0(v7, 0);
    }
  }
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C942F8(v3);
  *(_QWORD *)(v5 + 32) = ajoCurrentActivity;
  v3 = sub_1C9403C(v5 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v3, v4);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_18746/*"disablePlayStoreKidsApp"*/,
    (System_Object_array *)v5,
    0);
}


void AdjustSdk_AdjustAndroid__DisablePlayStoreKidsComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4D24A30 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_18747/*"disablePlayStoreKidsComplianceInDelay"*/);
    byte_4D24A30 = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v4 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C();
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v7, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_18747/*"disablePlayStoreKidsComplianceInDelay"*/,
    **(System_Object_array ***)(v7 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__Enable(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4D24A0C & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_19119/*"enable"*/);
    byte_4D24A0C = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v4 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C();
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v7, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19119/*"enable"*/,
    **(System_Object_array ***)(v7 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__EnableCoppaCompliance(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v1; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v7; // x0

  if ( (byte_4D24A10 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_19122/*"enableCoppaCompliance"*/);
    byte_4D24A10 = 1;
  }
  v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v1->static_fields->ajcAdjust;
  v3 = sub_1C94140(object___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_11;
  v5 = v3;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v3 = sub_1C941D4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v7 = sub_1C94314();
      sub_1C941C0(v7, 0);
    }
  }
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C942F8(v3);
  *(_QWORD *)(v5 + 32) = ajoCurrentActivity;
  v3 = sub_1C9403C(v5 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v3, v4);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19122/*"enableCoppaCompliance"*/,
    (System_Object_array *)v5,
    0);
}


void AdjustSdk_AdjustAndroid__EnableCoppaComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4D24A27 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_19123/*"enableCoppaComplianceInDelay"*/);
    byte_4D24A27 = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v4 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C();
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v7, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19123/*"enableCoppaComplianceInDelay"*/,
    **(System_Object_array ***)(v7 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__EnablePlayStoreKidsApp(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v1; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v7; // x0

  if ( (byte_4D24A12 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_19133/*"enablePlayStoreKidsApp"*/);
    byte_4D24A12 = 1;
  }
  v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v1->static_fields->ajcAdjust;
  v3 = sub_1C94140(object___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_11;
  v5 = v3;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v3 = sub_1C941D4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v7 = sub_1C94314();
      sub_1C941C0(v7, 0);
    }
  }
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C942F8(v3);
  *(_QWORD *)(v5 + 32) = ajoCurrentActivity;
  v3 = sub_1C9403C(v5 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v3, v4);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19133/*"enablePlayStoreKidsApp"*/,
    (System_Object_array *)v5,
    0);
}


void AdjustSdk_AdjustAndroid__EnablePlayStoreKidsComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4D24A2F & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_19135/*"enablePlayStoreKidsComplianceInDelay"*/);
    byte_4D24A2F = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v4 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C();
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v7, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19135/*"enablePlayStoreKidsComplianceInDelay"*/,
    **(System_Object_array ***)(v7 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__EndFirstSessionDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4D24A26 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_19155/*"endFirstSessionDelay"*/);
    byte_4D24A26 = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v4 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C();
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v7, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19155/*"endFirstSessionDelay"*/,
    **(System_Object_array ***)(v7 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__GdprForgetMe(const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v1; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v7; // x0

  if ( (byte_4D24A15 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_19918/*"gdprForgetMe"*/);
    byte_4D24A15 = 1;
  }
  v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v1 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v1->static_fields->ajcAdjust;
  v3 = sub_1C94140(object___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_11;
  v5 = v3;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v3 = sub_1C941D4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v7 = sub_1C94314();
      sub_1C941C0(v7, 0);
    }
  }
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C942F8(v3);
  *(_QWORD *)(v5 + 32) = ajoCurrentActivity;
  v3 = sub_1C9403C(v5 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v3, v4);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19918/*"gdprForgetMe"*/,
    (System_Object_array *)v5,
    0);
}


void AdjustSdk_AdjustAndroid__GetAdid(System_Action_string__o *onAdidRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_AdidReadListener_o *v3; // x19
  const MethodInfo *v4; // x2
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0

  if ( (byte_4D24A22 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_AdidReadListener_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_19932/*"getAdid"*/);
    byte_4D24A22 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_AdidReadListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_AdidReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_AdidReadListener___ctor(v3, onAdidRead, v4);
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v7 = sub_1C94140(object___TypeInfo, 1);
  if ( !v7 )
    goto LABEL_11;
  v9 = v7;
  if ( v3 )
  {
    v7 = sub_1C941D4(v3, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v10 = sub_1C94314();
      sub_1C941C0(v10, 0);
    }
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C942F8(v7);
  *(_QWORD *)(v9 + 32) = v3;
  v7 = sub_1C9403C(v9 + 32, v3);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v7, v8);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19932/*"getAdid"*/,
    (System_Object_array *)v9,
    0);
}


void AdjustSdk_AdjustAndroid__GetAmazonAdId(System_Action_string__o *onAmazonAdIdRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_o *v3; // x19
  const MethodInfo *v4; // x2
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Object_array *v9; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x22
  __int64 v11; // x0

  if ( (byte_4D24A2B & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_19935/*"getAmazonAdId"*/);
    byte_4D24A2B = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___ctor(v3, onAmazonAdIdRead, v4);
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v7 = sub_1C94140(object___TypeInfo, 2);
  if ( !v7 )
LABEL_15:
    sub_1C942F0(v7, v8);
  v9 = (System_Object_array *)v7;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v7 = sub_1C941D4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
      goto LABEL_16;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_14;
  v9->m_Items[0] = (Il2CppObject *)ajoCurrentActivity;
  v7 = sub_1C9403C(v9->m_Items, ajoCurrentActivity);
  if ( v3 )
  {
    v7 = sub_1C941D4(v3, v9->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_16:
      v11 = sub_1C94314();
      sub_1C941C0(v11, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 1 )
LABEL_14:
    sub_1C942F8(v7);
  v9->m_Items[1] = (Il2CppObject *)v3;
  v7 = sub_1C9403C(&v9->m_Items[1], v3);
  if ( !ajcAdjust )
    goto LABEL_15;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_19935/*"getAmazonAdId"*/, v9, 0);
}


void AdjustSdk_AdjustAndroid__GetAttribution(
        System_Action_AdjustAttribution__o *onAttributionRead,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_AttributionReadListener_o *v3; // x19
  const MethodInfo *v4; // x2
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0

  if ( (byte_4D24A23 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_AttributionReadListener_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_19938/*"getAttribution"*/);
    byte_4D24A23 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_AttributionReadListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_AttributionReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_AttributionReadListener___ctor(v3, onAttributionRead, v4);
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v7 = sub_1C94140(object___TypeInfo, 1);
  if ( !v7 )
    goto LABEL_11;
  v9 = v7;
  if ( v3 )
  {
    v7 = sub_1C941D4(v3, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v10 = sub_1C94314();
      sub_1C941C0(v10, 0);
    }
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C942F8(v7);
  *(_QWORD *)(v9 + 32) = v3;
  v7 = sub_1C9403C(v9 + 32, v3);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v7, v8);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19938/*"getAttribution"*/,
    (System_Object_array *)v9,
    0);
}


void AdjustSdk_AdjustAndroid__GetGoogleAdId(System_Action_string__o *onDeviceIdsRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_o *v3; // x19
  const MethodInfo *v4; // x2
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Object_array *v9; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x22
  __int64 v11; // x0

  if ( (byte_4D24A2A & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_19958/*"getGoogleAdId"*/);
    byte_4D24A2A = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___ctor(v3, onDeviceIdsRead, v4);
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v7 = sub_1C94140(object___TypeInfo, 2);
  if ( !v7 )
LABEL_15:
    sub_1C942F0(v7, v8);
  v9 = (System_Object_array *)v7;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v7 = sub_1C941D4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
      goto LABEL_16;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_14;
  v9->m_Items[0] = (Il2CppObject *)ajoCurrentActivity;
  v7 = sub_1C9403C(v9->m_Items, ajoCurrentActivity);
  if ( v3 )
  {
    v7 = sub_1C941D4(v3, v9->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_16:
      v11 = sub_1C94314();
      sub_1C941C0(v11, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 1 )
LABEL_14:
    sub_1C942F8(v7);
  v9->m_Items[1] = (Il2CppObject *)v3;
  v7 = sub_1C9403C(&v9->m_Items[1], v3);
  if ( !ajcAdjust )
    goto LABEL_15;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_19958/*"getGoogleAdId"*/, v9, 0);
}


void AdjustSdk_AdjustAndroid__GetLastDeeplink(System_Action_string__o *onLastDeeplinkRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_LastDeeplinkListener_o *v3; // x19
  const MethodInfo *v4; // x2
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Object_array *v9; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x22
  __int64 v11; // x0

  if ( (byte_4D24A25 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_LastDeeplinkListener_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_19964/*"getLastDeeplink"*/);
    byte_4D24A25 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_LastDeeplinkListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_LastDeeplinkListener_TypeInfo);
  AdjustSdk_AdjustAndroid_LastDeeplinkListener___ctor(v3, onLastDeeplinkRead, v4);
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v7 = sub_1C94140(object___TypeInfo, 2);
  if ( !v7 )
LABEL_15:
    sub_1C942F0(v7, v8);
  v9 = (System_Object_array *)v7;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v7 = sub_1C941D4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
      goto LABEL_16;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_14;
  v9->m_Items[0] = (Il2CppObject *)ajoCurrentActivity;
  v7 = sub_1C9403C(v9->m_Items, ajoCurrentActivity);
  if ( v3 )
  {
    v7 = sub_1C941D4(v3, v9->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_16:
      v11 = sub_1C94314();
      sub_1C941C0(v11, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 1 )
LABEL_14:
    sub_1C942F8(v7);
  v9->m_Items[1] = (Il2CppObject *)v3;
  v7 = sub_1C9403C(&v9->m_Items[1], v3);
  if ( !ajcAdjust )
    goto LABEL_15;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_19964/*"getLastDeeplink"*/, v9, 0);
}


void AdjustSdk_AdjustAndroid__GetSdkVersion(System_Action_string__o *onSdkVersionRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_SdkVersionReadListener_o *v3; // x19
  const MethodInfo *v4; // x3
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0

  if ( (byte_4D24A24 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_SdkVersionReadListener_TypeInfo);
    sub_1C94098(&StringLiteral_24652/*"unity5.4.2"*/);
    sub_1C94098(&StringLiteral_20002/*"getSdkVersion"*/);
    byte_4D24A24 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_SdkVersionReadListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_SdkVersionReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_SdkVersionReadListener___ctor(
    v3,
    onSdkVersionRead,
    (System_String_o *)StringLiteral_24652/*"unity5.4.2"*/,
    v4);
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v7 = sub_1C94140(object___TypeInfo, 1);
  if ( !v7 )
    goto LABEL_11;
  v9 = v7;
  if ( v3 )
  {
    v7 = sub_1C941D4(v3, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v10 = sub_1C94314();
      sub_1C941C0(v10, 0);
    }
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C942F8(v7);
  *(_QWORD *)(v9 + 32) = v3;
  v7 = sub_1C9403C(v9 + 32, v3);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v7, v8);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_20002/*"getSdkVersion"*/,
    (System_Object_array *)v9,
    0);
}


void AdjustSdk_AdjustAndroid__InitSdk(AdjustSdk_AdjustConfig_o *adjustConfig, const MethodInfo *method)
{
  AdjustSdk_AdjustConfig_o *v2; // x20
  __int64 *v3; // x8
  struct System_Nullable_bool__o AllowSuppressLogLevel_k__BackingField; // w11
  __int64 v5; // x19
  AdjustSdk_AdjustAndroid_c *v6; // x8
  AdjustSdk_AdjustConfig_o *v7; // x21
  struct System_String_o *ajoCurrentActivity; // x22
  struct System_String_o *AppToken_k__BackingField; // x22
  __int64 v10; // x0
  struct System_Nullable_bool__o *p_IsDataResidency_k__BackingField; // x0
  AdjustSdk_AdjustAndroid_c *v12; // x8
  struct System_String_o *v13; // x22
  struct System_String_o *v14; // x22
  UnityEngine_AndroidJavaObject_o *v15; // x19
  struct System_Nullable_bool__o IsDeferredDeeplinkOpeningEnabled_k__BackingField; // w8
  __int16 *v17; // x0
  bool Value; // w21
  AdjustSdk_AdjustAndroid_c *v19; // x0
  struct System_Nullable_AdjustLogLevel__o LogLevel_k__BackingField; // x8
  System_Nullable_Int32Enum__o v21; // x0
  int32_t v22; // w0
  const MethodInfo *v23; // x1
  System_String_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_AndroidJavaClass_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  Il2CppObject *Static_object; // x0
  UnityEngine_AndroidJavaClass_o *v30; // x21
  System_Nullable_Int32Enum__o v31; // x0
  int32_t v32; // w0
  const MethodInfo *v33; // x1
  System_String_o *v34; // x0
  Il2CppObject *v35; // x21
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  System_Object_array *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x0
  __int64 v45; // x1
  unsigned int IsDeviceIdsReadingOnceEnabled_k__BackingField; // w8
  _QWORD *v47; // x21
  __int64 v48; // x8
  __int64 v49; // x0
  __int64 v50; // x0
  unsigned int IsCoppaComplianceEnabled_k__BackingField; // w8
  _QWORD *v52; // x21
  __int64 v53; // x8
  __int64 v54; // x0
  __int64 v55; // x0
  unsigned int IsPlayStoreKidsComplianceEnabled_k__BackingField; // w8
  _QWORD *v57; // x21
  __int64 v58; // x8
  __int64 v59; // x0
  __int64 v60; // x0
  unsigned int IsSendingInBackgroundEnabled_k__BackingField; // w8
  _QWORD *v62; // x21
  __int64 v63; // x8
  __int64 v64; // x0
  __int64 v65; // x0
  unsigned int IsCostDataInAttributionEnabled_k__BackingField; // w8
  _QWORD *v67; // x21
  __int64 v68; // x8
  __int64 v69; // x0
  __int64 v70; // x0
  unsigned int IsPreinstallTrackingEnabled_k__BackingField; // w8
  _QWORD *v72; // x21
  __int64 v73; // x8
  __int64 v74; // x0
  __int64 v75; // x0
  unsigned int IsFirstSessionDelayEnabled_k__BackingField; // w8
  bool v77; // zf
  _QWORD *v78; // x21
  __int64 v79; // x8
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x21
  struct System_String_o *PreinstallFilePath_k__BackingField; // x22
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x21
  struct System_String_o *FbAppId_k__BackingField; // x22
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x21
  struct System_String_o *DefaultTracker_k__BackingField; // x22
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x21
  struct System_String_o *ExternalDeviceId_k__BackingField; // x22
  System_Object_array *v98; // x21
  __int64 v99; // x0
  __int64 v100; // x1
  Il2CppObject *v101; // x22
  UnityEngine_AndroidJavaObject_o *v102; // x23
  __int64 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x21
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v107; // x9
  int32_t *p_offset; // x10
  __int64 v109; // x0
  _QWORD *v110; // x21
  __int64 v111; // x8
  __int64 v112; // x0
  __int64 v113; // x0
  System_Object_array *v114; // x21
  UnityEngine_AndroidJavaObject_o *v115; // x23
  __int64 v116; // x1
  System_Collections_Generic_List_object__o *UrlStrategyDomains_k__BackingField; // x0
  Il2CppObject *current; // x22
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x21
  __int64 v122; // x0
  __int64 v123; // x1
  __int64 v124; // x0
  __int64 v125; // x1
  System_Object_array *v126; // x21
  __int64 v127; // x0
  Il2CppObject *v128; // x22
  __int64 v129; // x0
  Il2CppObject *v130; // x22
  UnityEngine_AndroidJavaObject_c *v131; // x8
  __int64 v132; // x9
  int32_t *v133; // x10
  __int64 v134; // x0
  struct AdjustSdk_AdjustStoreInfo_o *StoreInfo_k__BackingField; // x8
  __int64 v136; // x0
  __int64 v137; // x1
  struct AdjustSdk_AdjustStoreInfo_o *v138; // x8
  __int64 v139; // x21
  struct System_String_o *StoreName_k__BackingField; // x22
  UnityEngine_AndroidJavaObject_o *v141; // x23
  __int64 v142; // x0
  __int64 v143; // x1
  struct AdjustSdk_AdjustStoreInfo_o *v144; // x8
  __int64 v145; // x0
  __int64 v146; // x1
  struct AdjustSdk_AdjustStoreInfo_o *v147; // x8
  __int64 v148; // x21
  struct System_String_o *StoreAppId_k__BackingField; // x22
  __int64 v150; // x0
  __int64 v151; // x1
  __int64 v152; // x0
  __int64 v153; // x1
  __int64 v154; // x21
  UnityEngine_AndroidJavaObject_c *v155; // x8
  __int64 v156; // x9
  int32_t *v157; // x10
  __int64 v158; // x0
  System_Action_AdjustAttribution__o *AttributionChangedDelegate_k__BackingField; // x22
  AdjustSdk_AdjustAndroid_AttributionChangedListener_o *v160; // x21
  const MethodInfo *v161; // x2
  AdjustSdk_AdjustAndroid_c *v162; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  __int64 v164; // x0
  __int64 v165; // x1
  __int64 v166; // x21
  struct AdjustSdk_AdjustAndroid_AttributionChangedListener_o *onAttributionChangedListener; // x22
  System_Action_AdjustEventSuccess__o *EventSuccessDelegate_k__BackingField; // x22
  AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *v169; // x21
  const MethodInfo *v170; // x2
  AdjustSdk_AdjustAndroid_c *v171; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v172; // x0
  __int64 v173; // x0
  __int64 v174; // x1
  __int64 v175; // x21
  struct AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *onEventTrackingSucceededListener; // x22
  System_Action_AdjustEventFailure__o *EventFailureDelegate_k__BackingField; // x22
  AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *v178; // x21
  const MethodInfo *v179; // x2
  AdjustSdk_AdjustAndroid_c *v180; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v181; // x0
  __int64 v182; // x0
  __int64 v183; // x1
  __int64 v184; // x21
  struct AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *onEventTrackingFailedListener; // x22
  System_Action_AdjustSessionSuccess__o *SessionSuccessDelegate_k__BackingField; // x22
  AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *v187; // x21
  const MethodInfo *v188; // x2
  AdjustSdk_AdjustAndroid_c *v189; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v190; // x0
  __int64 v191; // x0
  __int64 v192; // x1
  __int64 v193; // x21
  struct AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *onSessionTrackingSucceededListener; // x22
  System_Action_AdjustSessionFailure__o *SessionFailureDelegate_k__BackingField; // x22
  AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *v196; // x21
  const MethodInfo *v197; // x2
  AdjustSdk_AdjustAndroid_c *v198; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v199; // x0
  __int64 v200; // x0
  __int64 v201; // x1
  __int64 v202; // x21
  struct AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *onSessionTrackingFailedListener; // x22
  System_Action_string__o *DeferredDeeplinkDelegate_k__BackingField; // x21
  AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *v205; // x20
  const MethodInfo *v206; // x2
  AdjustSdk_AdjustAndroid_c *v207; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v208; // x0
  __int64 v209; // x0
  __int64 v210; // x1
  __int64 v211; // x20
  struct AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *onDeferredDeeplinkListener; // x21
  AdjustSdk_AdjustAndroid_c *v213; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v215; // x0
  __int64 v216; // x1
  __int64 v217; // x21
  __int64 v218; // x0
  __int64 v219; // x1
  UnityEngine_AndroidJavaObject_c *v220; // x8
  __int64 v221; // x9
  int32_t *v222; // x10
  __int64 v223; // x0
  __int64 v224; // x0
  __int64 v225; // x0
  __int64 v226; // x0
  __int64 v227; // x0
  __int64 v228; // x0
  __int64 v229; // x0
  __int64 v230; // x0
  __int64 v231; // x0
  __int64 v232; // x0
  __int64 v233; // x0
  __int64 v234; // x0
  __int64 v235; // x0
  __int64 v236; // x0
  __int64 v237; // x0
  __int64 v238; // x0
  __int64 v239; // x0
  __int64 v240; // x0
  __int64 v241; // x0
  __int64 v242; // x0
  __int64 v243; // x0
  __int64 v244; // x0
  __int64 v245; // x0
  __int64 v246; // x0
  struct System_Nullable_bool__o IsDataResidency_k__BackingField; // [xsp+4h] [xbp-ACh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v248; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v249; // [xsp+20h] [xbp-90h] BYREF
  struct System_Nullable_AdjustLogLevel__o v250; // [xsp+40h] [xbp-70h] BYREF
  __int16 ShouldUseSubdomains_k__BackingField; // [xsp+4Ch] [xbp-64h] BYREF

  v2 = adjustConfig;
  if ( (byte_4D24A0A & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Call_bool____79041344);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&AdjustSdk_AdjustAndroid_AttributionChangedListener_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_EventTrackingFailedListener_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C94098(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_AdjustLogLevel__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_int__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_AdjustLogLevel__get_Value__);
    sub_1C94098(&Method_System_Nullable_bool__get_Value__);
    sub_1C94098(&System_Nullable_bool__TypeInfo);
    sub_1C94098(&System_Nullable_int__TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_TypeInfo);
    sub_1C94098(&StringLiteral_23580/*"setOnDeferredDeeplinkResponseListener"*/);
    sub_1C94098(&StringLiteral_19139/*"enableSendingInBackground"*/);
    sub_1C94098(&StringLiteral_23558/*"setEventDeduplicationIdsMaxSize"*/);
    sub_1C94098(&StringLiteral_19122/*"enableCoppaCompliance"*/);
    sub_1C94098(&StringLiteral_23562/*"setFbAppId"*/);
    sub_1C94098(&StringLiteral_23607/*"setStoreInfo"*/);
    sub_1C94098(&StringLiteral_23011/*"production"*/);
    sub_1C94098(&StringLiteral_18168/*"com.adjust.sdk.LogLevel"*/);
    sub_1C94098(&StringLiteral_19136/*"enablePreinstallTracking"*/);
    sub_1C94098(&StringLiteral_19134/*"enablePlayStoreKidsCompliance"*/);
    sub_1C94098(&StringLiteral_19127/*"enableFirstSessionDelay"*/);
    sub_1C94098(&StringLiteral_19125/*"enableDeviceIdsReadingOnce"*/);
    sub_1C94098(&StringLiteral_23568/*"setLogLevel"*/);
    sub_1C94098(&StringLiteral_19124/*"enableCostDataInAttribution"*/);
    sub_1C94098(&StringLiteral_16733/*"add"*/);
    sub_1C94098(&StringLiteral_23586/*"setPreinstallFilePath"*/);
    sub_1C94098(&StringLiteral_18160/*"com.adjust.sdk.AdjustConfig"*/);
    sub_1C94098(&StringLiteral_24652/*"unity5.4.2"*/);
    sub_1C94098(&StringLiteral_23598/*"setSdkPrefix"*/);
    sub_1C94098(&StringLiteral_23554/*"setDefaultTracker"*/);
    sub_1C94098(&StringLiteral_23613/*"setUrlStrategy"*/);
    sub_1C94098(&StringLiteral_18165/*"com.adjust.sdk.AdjustStoreInfo"*/);
    sub_1C94098(&StringLiteral_23583/*"setOnSessionTrackingFailedListener"*/);
    sub_1C94098(&StringLiteral_23582/*"setOnEventTrackingSucceededListener"*/);
    sub_1C94098(&StringLiteral_20969/*"initSdk"*/);
    sub_1C94098(&StringLiteral_12626/*"SUPPRESS"*/);
    sub_1C94098(&StringLiteral_21261/*"java.util.ArrayList"*/);
    sub_1C94098(&StringLiteral_23579/*"setOnAttributionChangedListener"*/);
    sub_1C94098(&StringLiteral_23414/*"sandbox"*/);
    sub_1C94098(&StringLiteral_23584/*"setOnSessionTrackingSucceededListener"*/);
    sub_1C94098(&StringLiteral_21250/*"java.lang.Integer"*/);
    sub_1C94098(&StringLiteral_23581/*"setOnEventTrackingFailedListener"*/);
    sub_1C94098(&StringLiteral_23606/*"setStoreAppId"*/);
    adjustConfig = (AdjustSdk_AdjustConfig_o *)sub_1C94098(&StringLiteral_23559/*"setExternalDeviceId"*/);
    byte_4D24A0A = 1;
  }
  v250 = 0;
  memset(&v249, 0, sizeof(v249));
  if ( !v2 )
    goto LABEL_311;
  v3 = &StringLiteral_23011/*"production"*/;
  AllowSuppressLogLevel_k__BackingField = v2->fields._AllowSuppressLogLevel_k__BackingField;
  if ( v2->fields._Environment_k__BackingField != 1 )
    v3 = (__int64 *)&StringLiteral_23414/*"sandbox"*/;
  v5 = *v3;
  ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._AllowSuppressLogLevel_k__BackingField;
  if ( AllowSuppressLogLevel_k__BackingField.fields.hasValue )
  {
    adjustConfig = (AdjustSdk_AdjustConfig_o *)sub_1C94140(object___TypeInfo, 4);
    v6 = AdjustSdk_AdjustAndroid_TypeInfo;
    v7 = adjustConfig;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      adjustConfig = (AdjustSdk_AdjustConfig_o *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v6 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    if ( v7 )
    {
      ajoCurrentActivity = (struct System_String_o *)v6->static_fields->ajoCurrentActivity;
      if ( !ajoCurrentActivity || sub_1C941D4(ajoCurrentActivity, v7->klass->_1.element_class) )
      {
        if ( !LODWORD(v7->fields._DefaultTracker_k__BackingField) )
          goto LABEL_309;
        v7->fields._ExternalDeviceId_k__BackingField = ajoCurrentActivity;
        sub_1C9403C(&v7->fields._ExternalDeviceId_k__BackingField, ajoCurrentActivity);
        AppToken_k__BackingField = v2->fields._AppToken_k__BackingField;
        if ( !AppToken_k__BackingField || sub_1C941D4(v2->fields._AppToken_k__BackingField, v7->klass->_1.element_class) )
        {
          if ( LODWORD(v7->fields._DefaultTracker_k__BackingField) <= 1 )
            goto LABEL_309;
          *(_QWORD *)&v7->fields._IsCoppaComplianceEnabled_k__BackingField.fields.hasValue = AppToken_k__BackingField;
          sub_1C9403C(&v7->fields._IsCoppaComplianceEnabled_k__BackingField, AppToken_k__BackingField);
          if ( !v5 || sub_1C941D4(v5, v7->klass->_1.element_class) )
          {
            if ( LODWORD(v7->fields._DefaultTracker_k__BackingField) <= 2 )
              goto LABEL_309;
            *(_QWORD *)&v7->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField.fields.hasValue = v5;
            sub_1C9403C(&v7->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField, v5);
            LOWORD(v248.fields._list) = v2->fields._AllowSuppressLogLevel_k__BackingField;
            v10 = j_il2cpp_value_box_0(System_Nullable_bool__TypeInfo, &v248);
            v5 = v10;
            if ( !v10 || sub_1C941D4(v10, v7->klass->_1.element_class) )
            {
              if ( LODWORD(v7->fields._DefaultTracker_k__BackingField) > 3 )
              {
                *(_QWORD *)&v7->fields._IsDataResidency_k__BackingField.fields.hasValue = v5;
                p_IsDataResidency_k__BackingField = &v7->fields._IsDataResidency_k__BackingField;
                goto LABEL_36;
              }
LABEL_309:
              sub_1C942F8();
            }
          }
        }
      }
LABEL_310:
      v225 = sub_1C94314();
      sub_1C941C0(v225, 0);
    }
LABEL_311:
    sub_1C942F0(adjustConfig, method);
  }
  adjustConfig = (AdjustSdk_AdjustConfig_o *)sub_1C94140(object___TypeInfo, 3);
  v12 = AdjustSdk_AdjustAndroid_TypeInfo;
  v7 = adjustConfig;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    adjustConfig = (AdjustSdk_AdjustConfig_o *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v12 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_311;
  v13 = (struct System_String_o *)v12->static_fields->ajoCurrentActivity;
  if ( v13 && !sub_1C941D4(v13, v7->klass->_1.element_class) )
    goto LABEL_310;
  if ( !LODWORD(v7->fields._DefaultTracker_k__BackingField) )
    goto LABEL_309;
  v7->fields._ExternalDeviceId_k__BackingField = v13;
  sub_1C9403C(&v7->fields._ExternalDeviceId_k__BackingField, v13);
  v14 = v2->fields._AppToken_k__BackingField;
  if ( v14 )
  {
    if ( !sub_1C941D4(v2->fields._AppToken_k__BackingField, v7->klass->_1.element_class) )
      goto LABEL_310;
  }
  if ( LODWORD(v7->fields._DefaultTracker_k__BackingField) <= 1 )
    goto LABEL_309;
  *(_QWORD *)&v7->fields._IsCoppaComplianceEnabled_k__BackingField.fields.hasValue = v14;
  sub_1C9403C(&v7->fields._IsCoppaComplianceEnabled_k__BackingField, v14);
  if ( v5 )
  {
    if ( !sub_1C941D4(v5, v7->klass->_1.element_class) )
      goto LABEL_310;
  }
  if ( LODWORD(v7->fields._DefaultTracker_k__BackingField) <= 2 )
    goto LABEL_309;
  *(_QWORD *)&v7->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField.fields.hasValue = v5;
  p_IsDataResidency_k__BackingField = &v7->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField;
LABEL_36:
  sub_1C9403C(p_IsDataResidency_k__BackingField, v5);
  v15 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(
    v15,
    (System_String_o *)StringLiteral_18160/*"com.adjust.sdk.AdjustConfig"*/,
    (System_Object_array *)v7,
    0);
  IsDeferredDeeplinkOpeningEnabled_k__BackingField = v2->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField;
  ShouldUseSubdomains_k__BackingField = (__int16)IsDeferredDeeplinkOpeningEnabled_k__BackingField;
  if ( IsDeferredDeeplinkOpeningEnabled_k__BackingField.fields.hasValue )
  {
    ShouldUseSubdomains_k__BackingField = (__int16)IsDeferredDeeplinkOpeningEnabled_k__BackingField;
    v17 = &ShouldUseSubdomains_k__BackingField;
    Value = System_Nullable_bool___get_Value(
              (System_Nullable_bool__o)v17,
              (const MethodInfo_398FCA8 *)Method_System_Nullable_bool__get_Value__);
    v19 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v19 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v19->static_fields->isDeferredDeeplinkOpeningEnabled = Value;
  }
  LogLevel_k__BackingField = v2->fields._LogLevel_k__BackingField;
  v250 = LogLevel_k__BackingField;
  if ( LogLevel_k__BackingField.fields.hasValue )
  {
    v250 = LogLevel_k__BackingField;
    v21 = (System_Nullable_Int32Enum__o)&v250;
    v22 = System_Nullable_Int32Enum___get_Value(
            v21,
            (const MethodInfo_39937C0 *)Method_System_Nullable_AdjustLogLevel__get_Value__);
    v24 = AdjustSdk_AdjustLogLevelExtension__ToUppercaseString(v22, v23);
    if ( !v24 )
      sub_1C942F0(0, v25);
    if ( System_String__Equals_64453064(v24, (System_String_o *)StringLiteral_12626/*"SUPPRESS"*/, 0) )
    {
      v26 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
      UnityEngine_AndroidJavaClass___ctor(v26, (System_String_o *)StringLiteral_18168/*"com.adjust.sdk.LogLevel"*/, 0);
      if ( !v26 )
        sub_1C942F0(v27, v28);
      Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                        (UnityEngine_AndroidJavaObject_o *)v26,
                        (System_String_o *)StringLiteral_12626/*"SUPPRESS"*/,
                        (const MethodInfo_30EB3E4 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    }
    else
    {
      v30 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
      UnityEngine_AndroidJavaClass___ctor(v30, (System_String_o *)StringLiteral_18168/*"com.adjust.sdk.LogLevel"*/, 0);
      v250 = v2->fields._LogLevel_k__BackingField;
      v31 = (System_Nullable_Int32Enum__o)&v250;
      v32 = System_Nullable_Int32Enum___get_Value(
              v31,
              (const MethodInfo_39937C0 *)Method_System_Nullable_AdjustLogLevel__get_Value__);
      v34 = AdjustSdk_AdjustLogLevelExtension__ToUppercaseString(v32, v33);
      if ( !v30 )
        sub_1C942F0(v34, v34);
      Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                        (UnityEngine_AndroidJavaObject_o *)v30,
                        v34,
                        (const MethodInfo_30EB3E4 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    }
    v35 = Static_object;
    if ( Static_object )
    {
      v36 = sub_1C94140(object___TypeInfo, 1);
      v38 = v36;
      if ( !v36 )
        sub_1C942F0(0, v37);
      if ( !sub_1C941D4(v35, *(_QWORD *)(*(_QWORD *)v36 + 64LL)) )
      {
        v228 = sub_1C94314();
        sub_1C941C0(v228, 0);
      }
      if ( !*(_DWORD *)(v38 + 24) )
        sub_1C942F8();
      *(_QWORD *)(v38 + 32) = v35;
      v39 = sub_1C9403C(v38 + 32, v35);
      if ( !v15 )
        sub_1C942F0(v39, v40);
      UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23568/*"setLogLevel"*/, (System_Object_array *)v38, 0);
    }
  }
  v42 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
  if ( !v42 )
    sub_1C942F0(0, v41);
  if ( StringLiteral_24652/*"unity5.4.2"*/ )
  {
    if ( !sub_1C941D4(StringLiteral_24652/*"unity5.4.2"*/, v42->obj.klass->_1.element_class) )
    {
      v227 = sub_1C94314();
      sub_1C941C0(v227, 0);
    }
    v43 = StringLiteral_24652/*"unity5.4.2"*/;
  }
  else
  {
    v43 = 0;
  }
  if ( !LODWORD(v42->max_length) )
    sub_1C942F8();
  v42->m_Items[0] = (Il2CppObject *)v43;
  v44 = sub_1C9403C(v42->m_Items, v43);
  if ( !v15 )
    sub_1C942F0(v44, v45);
  UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23598/*"setSdkPrefix"*/, v42, 0);
  IsDeviceIdsReadingOnceEnabled_k__BackingField = (unsigned __int16)v2->fields._IsDeviceIdsReadingOnceEnabled_k__BackingField;
  if ( (unsigned __int8)*(_WORD *)&v2->fields._IsDeviceIdsReadingOnceEnabled_k__BackingField )
  {
    ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._IsDeviceIdsReadingOnceEnabled_k__BackingField;
    if ( IsDeviceIdsReadingOnceEnabled_k__BackingField >= 0x100 )
    {
      v47 = Method_System_Array_Empty_object___;
      v48 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v48 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v48 = v47[7];
      }
      v49 = *(_QWORD *)(v48 + 16);
      if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
        v49 = sub_1C6A12C();
      if ( !*(_DWORD *)(v49 + 224) )
        j_il2cpp_runtime_class_init_0(v49);
      v50 = *(_QWORD *)(v47[7] + 16LL);
      if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
        v50 = sub_1C6A12C();
      UnityEngine_AndroidJavaObject__Call(
        v15,
        (System_String_o *)StringLiteral_19125/*"enableDeviceIdsReadingOnce"*/,
        **(System_Object_array ***)(v50 + 184),
        0);
    }
  }
  IsCoppaComplianceEnabled_k__BackingField = (unsigned __int16)v2->fields._IsCoppaComplianceEnabled_k__BackingField;
  if ( (unsigned __int8)*(_WORD *)&v2->fields._IsCoppaComplianceEnabled_k__BackingField )
  {
    ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._IsCoppaComplianceEnabled_k__BackingField;
    if ( IsCoppaComplianceEnabled_k__BackingField >= 0x100 )
    {
      v52 = Method_System_Array_Empty_object___;
      v53 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v53 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v53 = v52[7];
      }
      v54 = *(_QWORD *)(v53 + 16);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1C6A12C();
      if ( !*(_DWORD *)(v54 + 224) )
        j_il2cpp_runtime_class_init_0(v54);
      v55 = *(_QWORD *)(v52[7] + 16LL);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1C6A12C();
      UnityEngine_AndroidJavaObject__Call(
        v15,
        (System_String_o *)StringLiteral_19122/*"enableCoppaCompliance"*/,
        **(System_Object_array ***)(v55 + 184),
        0);
    }
  }
  IsPlayStoreKidsComplianceEnabled_k__BackingField = (unsigned __int16)v2->fields._IsPlayStoreKidsComplianceEnabled_k__BackingField;
  if ( (unsigned __int8)*(_WORD *)&v2->fields._IsPlayStoreKidsComplianceEnabled_k__BackingField )
  {
    ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._IsPlayStoreKidsComplianceEnabled_k__BackingField;
    if ( IsPlayStoreKidsComplianceEnabled_k__BackingField >= 0x100 )
    {
      v57 = Method_System_Array_Empty_object___;
      v58 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v58 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v58 = v57[7];
      }
      v59 = *(_QWORD *)(v58 + 16);
      if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
        v59 = sub_1C6A12C();
      if ( !*(_DWORD *)(v59 + 224) )
        j_il2cpp_runtime_class_init_0(v59);
      v60 = *(_QWORD *)(v57[7] + 16LL);
      if ( (*(_BYTE *)(v60 + 309) & 1) == 0 )
        v60 = sub_1C6A12C();
      UnityEngine_AndroidJavaObject__Call(
        v15,
        (System_String_o *)StringLiteral_19134/*"enablePlayStoreKidsCompliance"*/,
        **(System_Object_array ***)(v60 + 184),
        0);
    }
  }
  IsSendingInBackgroundEnabled_k__BackingField = (unsigned __int16)v2->fields._IsSendingInBackgroundEnabled_k__BackingField;
  if ( (unsigned __int8)*(_WORD *)&v2->fields._IsSendingInBackgroundEnabled_k__BackingField )
  {
    ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._IsSendingInBackgroundEnabled_k__BackingField;
    if ( IsSendingInBackgroundEnabled_k__BackingField >= 0x100 )
    {
      v62 = Method_System_Array_Empty_object___;
      v63 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v63 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v63 = v62[7];
      }
      v64 = *(_QWORD *)(v63 + 16);
      if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
        v64 = sub_1C6A12C();
      if ( !*(_DWORD *)(v64 + 224) )
        j_il2cpp_runtime_class_init_0(v64);
      v65 = *(_QWORD *)(v62[7] + 16LL);
      if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
        v65 = sub_1C6A12C();
      UnityEngine_AndroidJavaObject__Call(
        v15,
        (System_String_o *)StringLiteral_19139/*"enableSendingInBackground"*/,
        **(System_Object_array ***)(v65 + 184),
        0);
    }
  }
  IsCostDataInAttributionEnabled_k__BackingField = (unsigned __int16)v2->fields._IsCostDataInAttributionEnabled_k__BackingField;
  if ( (unsigned __int8)*(_WORD *)&v2->fields._IsCostDataInAttributionEnabled_k__BackingField )
  {
    ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._IsCostDataInAttributionEnabled_k__BackingField;
    if ( IsCostDataInAttributionEnabled_k__BackingField >= 0x100 )
    {
      v67 = Method_System_Array_Empty_object___;
      v68 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v68 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v68 = v67[7];
      }
      v69 = *(_QWORD *)(v68 + 16);
      if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
        v69 = sub_1C6A12C();
      if ( !*(_DWORD *)(v69 + 224) )
        j_il2cpp_runtime_class_init_0(v69);
      v70 = *(_QWORD *)(v67[7] + 16LL);
      if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
        v70 = sub_1C6A12C();
      UnityEngine_AndroidJavaObject__Call(
        v15,
        (System_String_o *)StringLiteral_19124/*"enableCostDataInAttribution"*/,
        **(System_Object_array ***)(v70 + 184),
        0);
    }
  }
  IsPreinstallTrackingEnabled_k__BackingField = (unsigned __int16)v2->fields._IsPreinstallTrackingEnabled_k__BackingField;
  if ( (unsigned __int8)*(_WORD *)&v2->fields._IsPreinstallTrackingEnabled_k__BackingField )
  {
    ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._IsPreinstallTrackingEnabled_k__BackingField;
    if ( IsPreinstallTrackingEnabled_k__BackingField >= 0x100 )
    {
      v72 = Method_System_Array_Empty_object___;
      v73 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v73 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v73 = v72[7];
      }
      v74 = *(_QWORD *)(v73 + 16);
      if ( (*(_BYTE *)(v74 + 309) & 1) == 0 )
        v74 = sub_1C6A12C();
      if ( !*(_DWORD *)(v74 + 224) )
        j_il2cpp_runtime_class_init_0(v74);
      v75 = *(_QWORD *)(v72[7] + 16LL);
      if ( (*(_BYTE *)(v75 + 309) & 1) == 0 )
        v75 = sub_1C6A12C();
      UnityEngine_AndroidJavaObject__Call(
        v15,
        (System_String_o *)StringLiteral_19136/*"enablePreinstallTracking"*/,
        **(System_Object_array ***)(v75 + 184),
        0);
    }
  }
  IsFirstSessionDelayEnabled_k__BackingField = (unsigned __int16)v2->fields._IsFirstSessionDelayEnabled_k__BackingField;
  v77 = (unsigned __int8)*(_WORD *)&v2->fields._IsFirstSessionDelayEnabled_k__BackingField == 0;
  ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._IsFirstSessionDelayEnabled_k__BackingField;
  if ( !v77 )
  {
    ShouldUseSubdomains_k__BackingField = IsFirstSessionDelayEnabled_k__BackingField;
    if ( IsFirstSessionDelayEnabled_k__BackingField >= 0x100 )
    {
      v78 = Method_System_Array_Empty_object___;
      v79 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v79 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v79 = v78[7];
      }
      v80 = *(_QWORD *)(v79 + 16);
      if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
        v80 = sub_1C6A12C();
      if ( !*(_DWORD *)(v80 + 224) )
        j_il2cpp_runtime_class_init_0(v80);
      v81 = *(_QWORD *)(v78[7] + 16LL);
      if ( (*(_BYTE *)(v81 + 309) & 1) == 0 )
        v81 = sub_1C6A12C();
      UnityEngine_AndroidJavaObject__Call(
        v15,
        (System_String_o *)StringLiteral_19127/*"enableFirstSessionDelay"*/,
        **(System_Object_array ***)(v81 + 184),
        0);
    }
  }
  if ( v2->fields._PreinstallFilePath_k__BackingField )
  {
    v82 = sub_1C94140(object___TypeInfo, 1);
    v84 = v82;
    if ( !v82 )
      sub_1C942F0(0, v83);
    PreinstallFilePath_k__BackingField = v2->fields._PreinstallFilePath_k__BackingField;
    if ( PreinstallFilePath_k__BackingField
      && !sub_1C941D4(v2->fields._PreinstallFilePath_k__BackingField, *(_QWORD *)(*(_QWORD *)v82 + 64LL)) )
    {
      v229 = sub_1C94314();
      sub_1C941C0(v229, 0);
    }
    if ( !*(_DWORD *)(v84 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v84 + 32) = PreinstallFilePath_k__BackingField;
    sub_1C9403C(v84 + 32, PreinstallFilePath_k__BackingField);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23586/*"setPreinstallFilePath"*/, (System_Object_array *)v84, 0);
  }
  if ( v2->fields._FbAppId_k__BackingField )
  {
    v86 = sub_1C94140(object___TypeInfo, 1);
    v88 = v86;
    if ( !v86 )
      sub_1C942F0(0, v87);
    FbAppId_k__BackingField = v2->fields._FbAppId_k__BackingField;
    if ( FbAppId_k__BackingField
      && !sub_1C941D4(v2->fields._FbAppId_k__BackingField, *(_QWORD *)(*(_QWORD *)v86 + 64LL)) )
    {
      v230 = sub_1C94314();
      sub_1C941C0(v230, 0);
    }
    if ( !*(_DWORD *)(v88 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v88 + 32) = FbAppId_k__BackingField;
    sub_1C9403C(v88 + 32, FbAppId_k__BackingField);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23562/*"setFbAppId"*/, (System_Object_array *)v88, 0);
  }
  if ( v2->fields._DefaultTracker_k__BackingField )
  {
    v90 = sub_1C94140(object___TypeInfo, 1);
    v92 = v90;
    if ( !v90 )
      sub_1C942F0(0, v91);
    DefaultTracker_k__BackingField = v2->fields._DefaultTracker_k__BackingField;
    if ( DefaultTracker_k__BackingField
      && !sub_1C941D4(v2->fields._DefaultTracker_k__BackingField, *(_QWORD *)(*(_QWORD *)v90 + 64LL)) )
    {
      v231 = sub_1C94314();
      sub_1C941C0(v231, 0);
    }
    if ( !*(_DWORD *)(v92 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v92 + 32) = DefaultTracker_k__BackingField;
    sub_1C9403C(v92 + 32, DefaultTracker_k__BackingField);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23554/*"setDefaultTracker"*/, (System_Object_array *)v92, 0);
  }
  if ( v2->fields._ExternalDeviceId_k__BackingField )
  {
    v94 = sub_1C94140(object___TypeInfo, 1);
    v96 = v94;
    if ( !v94 )
      sub_1C942F0(0, v95);
    ExternalDeviceId_k__BackingField = v2->fields._ExternalDeviceId_k__BackingField;
    if ( ExternalDeviceId_k__BackingField
      && !sub_1C941D4(v2->fields._ExternalDeviceId_k__BackingField, *(_QWORD *)(*(_QWORD *)v94 + 64LL)) )
    {
      v232 = sub_1C94314();
      sub_1C941C0(v232, 0);
    }
    if ( !*(_DWORD *)(v96 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v96 + 32) = ExternalDeviceId_k__BackingField;
    sub_1C9403C(v96 + 32, ExternalDeviceId_k__BackingField);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23559/*"setExternalDeviceId"*/, (System_Object_array *)v96, 0);
  }
  if ( v2->fields._EventDeduplicationIdsMaxSize_k__BackingField.fields.hasValue )
  {
    v98 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    v248.fields._list = (struct System_Collections_Generic_List_T__o *)v2->fields._EventDeduplicationIdsMaxSize_k__BackingField;
    v99 = j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v248);
    if ( !v98 )
      sub_1C942F0(v99, v100);
    v101 = (Il2CppObject *)v99;
    if ( v99 && !sub_1C941D4(v99, v98->obj.klass->_1.element_class) )
    {
      v233 = sub_1C94314();
      sub_1C941C0(v233, 0);
    }
    if ( !LODWORD(v98->max_length) )
      sub_1C942F8();
    v98->m_Items[0] = v101;
    sub_1C9403C(v98->m_Items, v101);
    v102 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v102, (System_String_o *)StringLiteral_21250/*"java.lang.Integer"*/, v98, 0);
    v103 = sub_1C94140(object___TypeInfo, 1);
    v105 = v103;
    if ( !v103 )
      sub_1C942F0(0, v104);
    if ( v102 && !sub_1C941D4(v102, *(_QWORD *)(*(_QWORD *)v103 + 64LL)) )
    {
      v234 = sub_1C94314();
      sub_1C941C0(v234, 0);
    }
    if ( !*(_DWORD *)(v105 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v105 + 32) = v102;
    sub_1C9403C(v105 + 32, v102);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23558/*"setEventDeduplicationIdsMaxSize"*/, (System_Object_array *)v105, 0);
    if ( v102 )
    {
      klass = v102->klass;
      v107 = *(unsigned __int16 *)&v102->klass->_2.rank;
      if ( *(_WORD *)&v102->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v107;
          p_offset += 4;
          if ( !v107 )
            goto LABEL_175;
        }
        v109 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_175:
        v109 = sub_1C6A420(v102, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v109)(v102, *(_QWORD *)(v109 + 8));
    }
  }
  if ( v2->fields._UrlStrategyDomains_k__BackingField )
  {
    v77 = (unsigned __int8)*(_WORD *)&v2->fields._ShouldUseSubdomains_k__BackingField == 0;
    ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._ShouldUseSubdomains_k__BackingField;
    if ( !v77 )
    {
      v77 = (unsigned __int8)*(_WORD *)&v2->fields._IsDataResidency_k__BackingField == 0;
      ShouldUseSubdomains_k__BackingField = (__int16)v2->fields._IsDataResidency_k__BackingField;
      if ( !v77 )
      {
        v110 = Method_System_Array_Empty_object___;
        v111 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v111 )
        {
          sub_1C6A188(Method_System_Array_Empty_object___);
          v111 = v110[7];
        }
        v112 = *(_QWORD *)(v111 + 16);
        if ( (*(_BYTE *)(v112 + 309) & 1) == 0 )
          v112 = sub_1C6A12C();
        if ( !*(_DWORD *)(v112 + 224) )
          j_il2cpp_runtime_class_init_0(v112);
        v113 = *(_QWORD *)(v110[7] + 16LL);
        if ( (*(_BYTE *)(v113 + 309) & 1) == 0 )
          v113 = sub_1C6A12C();
        v114 = **(System_Object_array ***)(v113 + 184);
        v115 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
        UnityEngine_AndroidJavaObject___ctor_71837880(v115, (System_String_o *)StringLiteral_21261/*"java.util.ArrayList"*/, v114, 0);
        UrlStrategyDomains_k__BackingField = (System_Collections_Generic_List_object__o *)v2->fields._UrlStrategyDomains_k__BackingField;
        if ( !UrlStrategyDomains_k__BackingField )
          sub_1C942F0(0, v116);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v248,
          UrlStrategyDomains_k__BackingField,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v249 = v248;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v249,
                  (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v249.fields._current;
          v119 = sub_1C94140(object___TypeInfo, 1);
          v121 = v119;
          if ( !v119 )
            sub_1C942F0(0, v120);
          if ( current && !sub_1C941D4(current, *(_QWORD *)(*(_QWORD *)v119 + 64LL)) )
          {
            v224 = sub_1C94314();
            sub_1C941C0(v224, 0);
          }
          if ( !*(_DWORD *)(v121 + 24) )
            sub_1C942F8();
          *(_QWORD *)(v121 + 32) = current;
          v122 = sub_1C9403C(v121 + 32, current);
          if ( !v115 )
            sub_1C942F0(v122, v123);
          UnityEngine_AndroidJavaObject__Call_bool_(
            v115,
            (System_String_o *)StringLiteral_16733/*"add"*/,
            (System_Object_array *)v121,
            (const MethodInfo_30E8F8C *)Method_UnityEngine_AndroidJavaObject_Call_bool____79041344);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v249,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        v124 = sub_1C94140(object___TypeInfo, 3);
        v126 = (System_Object_array *)v124;
        if ( !v124 )
          sub_1C942F0(0, v125);
        if ( v115 && !sub_1C941D4(v115, *(_QWORD *)(*(_QWORD *)v124 + 64LL)) )
        {
          v244 = sub_1C94314();
          sub_1C941C0(v244, 0);
        }
        if ( !LODWORD(v126->max_length) )
          sub_1C942F8();
        v126->m_Items[0] = (Il2CppObject *)v115;
        sub_1C9403C(v126->m_Items, v115);
        LOWORD(v248.fields._list) = v2->fields._ShouldUseSubdomains_k__BackingField;
        v127 = j_il2cpp_value_box_0(System_Nullable_bool__TypeInfo, &v248);
        v128 = (Il2CppObject *)v127;
        if ( v127 && !sub_1C941D4(v127, v126->obj.klass->_1.element_class) )
        {
          v245 = sub_1C94314();
          sub_1C941C0(v245, 0);
        }
        if ( LODWORD(v126->max_length) <= 1 )
          sub_1C942F8();
        v126->m_Items[1] = v128;
        sub_1C9403C(&v126->m_Items[1], v128);
        IsDataResidency_k__BackingField = v2->fields._IsDataResidency_k__BackingField;
        v129 = j_il2cpp_value_box_0(System_Nullable_bool__TypeInfo, &IsDataResidency_k__BackingField);
        v130 = (Il2CppObject *)v129;
        if ( v129 && !sub_1C941D4(v129, v126->obj.klass->_1.element_class) )
        {
          v246 = sub_1C94314();
          sub_1C941C0(v246, 0);
        }
        if ( LODWORD(v126->max_length) <= 2 )
          sub_1C942F8();
        v126->m_Items[2] = v130;
        sub_1C9403C(&v126->m_Items[2], v130);
        UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23613/*"setUrlStrategy"*/, v126, 0);
        if ( v115 )
        {
          v131 = v115->klass;
          v132 = *(unsigned __int16 *)&v115->klass->_2.rank;
          if ( *(_WORD *)&v115->klass->_2.rank )
          {
            v133 = &v131->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v133 - 1) != System_IDisposable_TypeInfo )
            {
              --v132;
              v133 += 4;
              if ( !v132 )
                goto LABEL_213;
            }
            v134 = (__int64)&v131->vtable + 16 * *v133;
          }
          else
          {
LABEL_213:
            v134 = sub_1C6A420(v115, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v134)(v115, *(_QWORD *)(v134 + 8));
        }
      }
    }
  }
  StoreInfo_k__BackingField = v2->fields._StoreInfo_k__BackingField;
  if ( StoreInfo_k__BackingField && StoreInfo_k__BackingField->fields._StoreName_k__BackingField )
  {
    v136 = sub_1C94140(object___TypeInfo, 1);
    v138 = v2->fields._StoreInfo_k__BackingField;
    if ( !v138 )
      sub_1C942F0(v136, v137);
    v139 = v136;
    if ( !v136 )
      sub_1C942F0(0, v137);
    StoreName_k__BackingField = v138->fields._StoreName_k__BackingField;
    if ( StoreName_k__BackingField && !sub_1C941D4(StoreName_k__BackingField, *(_QWORD *)(*(_QWORD *)v136 + 64LL)) )
    {
      v241 = sub_1C94314();
      sub_1C941C0(v241, 0);
    }
    if ( !*(_DWORD *)(v139 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v139 + 32) = StoreName_k__BackingField;
    sub_1C9403C(v139 + 32, StoreName_k__BackingField);
    v141 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(
      v141,
      (System_String_o *)StringLiteral_18165/*"com.adjust.sdk.AdjustStoreInfo"*/,
      (System_Object_array *)v139,
      0);
    v144 = v2->fields._StoreInfo_k__BackingField;
    if ( !v144 )
      sub_1C942F0(v142, v143);
    if ( v144->fields._StoreAppId_k__BackingField )
    {
      v145 = sub_1C94140(object___TypeInfo, 1);
      v147 = v2->fields._StoreInfo_k__BackingField;
      if ( !v147 )
        sub_1C942F0(v145, v146);
      v148 = v145;
      if ( !v145 )
        sub_1C942F0(0, v146);
      StoreAppId_k__BackingField = v147->fields._StoreAppId_k__BackingField;
      if ( StoreAppId_k__BackingField && !sub_1C941D4(StoreAppId_k__BackingField, *(_QWORD *)(*(_QWORD *)v145 + 64LL)) )
      {
        v243 = sub_1C94314();
        sub_1C941C0(v243, 0);
      }
      if ( !*(_DWORD *)(v148 + 24) )
        sub_1C942F8();
      *(_QWORD *)(v148 + 32) = StoreAppId_k__BackingField;
      v150 = sub_1C9403C(v148 + 32, StoreAppId_k__BackingField);
      if ( !v141 )
        sub_1C942F0(v150, v151);
      UnityEngine_AndroidJavaObject__Call(v141, (System_String_o *)StringLiteral_23606/*"setStoreAppId"*/, (System_Object_array *)v148, 0);
    }
    v152 = sub_1C94140(object___TypeInfo, 1);
    v154 = v152;
    if ( !v152 )
      sub_1C942F0(0, v153);
    if ( v141 && !sub_1C941D4(v141, *(_QWORD *)(*(_QWORD *)v152 + 64LL)) )
    {
      v242 = sub_1C94314();
      sub_1C941C0(v242, 0);
    }
    if ( !*(_DWORD *)(v154 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v154 + 32) = v141;
    sub_1C9403C(v154 + 32, v141);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23607/*"setStoreInfo"*/, (System_Object_array *)v154, 0);
    if ( v141 )
    {
      v155 = v141->klass;
      v156 = *(unsigned __int16 *)&v141->klass->_2.rank;
      if ( *(_WORD *)&v141->klass->_2.rank )
      {
        v157 = &v155->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v157 - 1) != System_IDisposable_TypeInfo )
        {
          --v156;
          v157 += 4;
          if ( !v156 )
            goto LABEL_241;
        }
        v158 = (__int64)&v155->vtable + 16 * *v157;
      }
      else
      {
LABEL_241:
        v158 = sub_1C6A420(v141, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v158)(v141, *(_QWORD *)(v158 + 8));
    }
  }
  AttributionChangedDelegate_k__BackingField = v2->fields._AttributionChangedDelegate_k__BackingField;
  if ( AttributionChangedDelegate_k__BackingField )
  {
    v160 = (AdjustSdk_AdjustAndroid_AttributionChangedListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_AttributionChangedListener_TypeInfo);
    AdjustSdk_AdjustAndroid_AttributionChangedListener___ctor(v160, AttributionChangedDelegate_k__BackingField, v161);
    v162 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v162 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v162->static_fields;
    static_fields->onAttributionChangedListener = v160;
    sub_1C9403C(&static_fields->onAttributionChangedListener, v160);
    v164 = sub_1C94140(object___TypeInfo, 1);
    v166 = v164;
    if ( !v164 )
      sub_1C942F0(0, v165);
    onAttributionChangedListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onAttributionChangedListener;
    if ( onAttributionChangedListener && !sub_1C941D4(onAttributionChangedListener, *(_QWORD *)(*(_QWORD *)v164 + 64LL)) )
    {
      v235 = sub_1C94314();
      sub_1C941C0(v235, 0);
    }
    if ( !*(_DWORD *)(v166 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v166 + 32) = onAttributionChangedListener;
    sub_1C9403C(v166 + 32, onAttributionChangedListener);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23579/*"setOnAttributionChangedListener"*/, (System_Object_array *)v166, 0);
  }
  EventSuccessDelegate_k__BackingField = v2->fields._EventSuccessDelegate_k__BackingField;
  if ( EventSuccessDelegate_k__BackingField )
  {
    v169 = (AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_TypeInfo);
    AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___ctor(v169, EventSuccessDelegate_k__BackingField, v170);
    v171 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v171 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v172 = v171->static_fields;
    v172->onEventTrackingSucceededListener = v169;
    sub_1C9403C(&v172->onEventTrackingSucceededListener, v169);
    v173 = sub_1C94140(object___TypeInfo, 1);
    v175 = v173;
    if ( !v173 )
      sub_1C942F0(0, v174);
    onEventTrackingSucceededListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onEventTrackingSucceededListener;
    if ( onEventTrackingSucceededListener
      && !sub_1C941D4(onEventTrackingSucceededListener, *(_QWORD *)(*(_QWORD *)v173 + 64LL)) )
    {
      v236 = sub_1C94314();
      sub_1C941C0(v236, 0);
    }
    if ( !*(_DWORD *)(v175 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v175 + 32) = onEventTrackingSucceededListener;
    sub_1C9403C(v175 + 32, onEventTrackingSucceededListener);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23582/*"setOnEventTrackingSucceededListener"*/, (System_Object_array *)v175, 0);
  }
  EventFailureDelegate_k__BackingField = v2->fields._EventFailureDelegate_k__BackingField;
  if ( EventFailureDelegate_k__BackingField )
  {
    v178 = (AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_EventTrackingFailedListener_TypeInfo);
    AdjustSdk_AdjustAndroid_EventTrackingFailedListener___ctor(v178, EventFailureDelegate_k__BackingField, v179);
    v180 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v180 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v181 = v180->static_fields;
    v181->onEventTrackingFailedListener = v178;
    sub_1C9403C(&v181->onEventTrackingFailedListener, v178);
    v182 = sub_1C94140(object___TypeInfo, 1);
    v184 = v182;
    if ( !v182 )
      sub_1C942F0(0, v183);
    onEventTrackingFailedListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onEventTrackingFailedListener;
    if ( onEventTrackingFailedListener
      && !sub_1C941D4(onEventTrackingFailedListener, *(_QWORD *)(*(_QWORD *)v182 + 64LL)) )
    {
      v237 = sub_1C94314();
      sub_1C941C0(v237, 0);
    }
    if ( !*(_DWORD *)(v184 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v184 + 32) = onEventTrackingFailedListener;
    sub_1C9403C(v184 + 32, onEventTrackingFailedListener);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23581/*"setOnEventTrackingFailedListener"*/, (System_Object_array *)v184, 0);
  }
  SessionSuccessDelegate_k__BackingField = v2->fields._SessionSuccessDelegate_k__BackingField;
  if ( SessionSuccessDelegate_k__BackingField )
  {
    v187 = (AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_TypeInfo);
    AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___ctor(v187, SessionSuccessDelegate_k__BackingField, v188);
    v189 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v189 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v190 = v189->static_fields;
    v190->onSessionTrackingSucceededListener = v187;
    sub_1C9403C(&v190->onSessionTrackingSucceededListener, v187);
    v191 = sub_1C94140(object___TypeInfo, 1);
    v193 = v191;
    if ( !v191 )
      sub_1C942F0(0, v192);
    onSessionTrackingSucceededListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onSessionTrackingSucceededListener;
    if ( onSessionTrackingSucceededListener
      && !sub_1C941D4(onSessionTrackingSucceededListener, *(_QWORD *)(*(_QWORD *)v191 + 64LL)) )
    {
      v238 = sub_1C94314();
      sub_1C941C0(v238, 0);
    }
    if ( !*(_DWORD *)(v193 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v193 + 32) = onSessionTrackingSucceededListener;
    sub_1C9403C(v193 + 32, onSessionTrackingSucceededListener);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23584/*"setOnSessionTrackingSucceededListener"*/, (System_Object_array *)v193, 0);
  }
  SessionFailureDelegate_k__BackingField = v2->fields._SessionFailureDelegate_k__BackingField;
  if ( SessionFailureDelegate_k__BackingField )
  {
    v196 = (AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_TypeInfo);
    AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___ctor(v196, SessionFailureDelegate_k__BackingField, v197);
    v198 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v198 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v199 = v198->static_fields;
    v199->onSessionTrackingFailedListener = v196;
    sub_1C9403C(&v199->onSessionTrackingFailedListener, v196);
    v200 = sub_1C94140(object___TypeInfo, 1);
    v202 = v200;
    if ( !v200 )
      sub_1C942F0(0, v201);
    onSessionTrackingFailedListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onSessionTrackingFailedListener;
    if ( onSessionTrackingFailedListener
      && !sub_1C941D4(onSessionTrackingFailedListener, *(_QWORD *)(*(_QWORD *)v200 + 64LL)) )
    {
      v239 = sub_1C94314();
      sub_1C941C0(v239, 0);
    }
    if ( !*(_DWORD *)(v202 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v202 + 32) = onSessionTrackingFailedListener;
    sub_1C9403C(v202 + 32, onSessionTrackingFailedListener);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23583/*"setOnSessionTrackingFailedListener"*/, (System_Object_array *)v202, 0);
  }
  DeferredDeeplinkDelegate_k__BackingField = v2->fields._DeferredDeeplinkDelegate_k__BackingField;
  if ( DeferredDeeplinkDelegate_k__BackingField )
  {
    v205 = (AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_TypeInfo);
    AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___ctor(v205, DeferredDeeplinkDelegate_k__BackingField, v206);
    v207 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v207 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v208 = v207->static_fields;
    v208->onDeferredDeeplinkListener = v205;
    sub_1C9403C(&v208->onDeferredDeeplinkListener, v205);
    v209 = sub_1C94140(object___TypeInfo, 1);
    v211 = v209;
    if ( !v209 )
      sub_1C942F0(0, v210);
    onDeferredDeeplinkListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onDeferredDeeplinkListener;
    if ( onDeferredDeeplinkListener && !sub_1C941D4(onDeferredDeeplinkListener, *(_QWORD *)(*(_QWORD *)v209 + 64LL)) )
    {
      v240 = sub_1C94314();
      sub_1C941C0(v240, 0);
    }
    if ( !*(_DWORD *)(v211 + 24) )
      sub_1C942F8();
    *(_QWORD *)(v211 + 32) = onDeferredDeeplinkListener;
    sub_1C9403C(v211 + 32, onDeferredDeeplinkListener);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_23580/*"setOnDeferredDeeplinkResponseListener"*/, (System_Object_array *)v211, 0);
  }
  v213 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v213 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v213->static_fields->ajcAdjust;
  v215 = sub_1C94140(object___TypeInfo, 1);
  v217 = v215;
  if ( !v215 )
    sub_1C942F0(0, v216);
  if ( !sub_1C941D4(v15, *(_QWORD *)(*(_QWORD *)v215 + 64LL)) )
  {
    v226 = sub_1C94314();
    sub_1C941C0(v226, 0);
  }
  if ( !*(_DWORD *)(v217 + 24) )
    sub_1C942F8();
  *(_QWORD *)(v217 + 32) = v15;
  v218 = sub_1C9403C(v217 + 32, v15);
  if ( !ajcAdjust )
    sub_1C942F0(v218, v219);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_20969/*"initSdk"*/,
    (System_Object_array *)v217,
    0);
  v220 = v15->klass;
  v221 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    v222 = &v220->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v222 - 1) != System_IDisposable_TypeInfo )
    {
      --v221;
      v222 += 4;
      if ( !v221 )
        goto LABEL_302;
    }
    v223 = (__int64)&v220->vtable + 16 * *v222;
  }
  else
  {
LABEL_302:
    v223 = sub_1C6A420(v15, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v223)(v15, *(_QWORD *)(v223 + 8));
}


void AdjustSdk_AdjustAndroid__IsEnabled(System_Action_bool__o *onIsEnabled, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_IsEnabledListener_o *v3; // x19
  const MethodInfo *v4; // x2
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Object_array *v9; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x22
  __int64 v11; // x0

  if ( (byte_4D24A21 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_IsEnabledListener_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_21094/*"isEnabled"*/);
    byte_4D24A21 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_IsEnabledListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_IsEnabledListener_TypeInfo);
  AdjustSdk_AdjustAndroid_IsEnabledListener___ctor(v3, onIsEnabled, v4);
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v7 = sub_1C94140(object___TypeInfo, 2);
  if ( !v7 )
LABEL_15:
    sub_1C942F0(v7, v8);
  v9 = (System_Object_array *)v7;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v7 = sub_1C941D4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
      goto LABEL_16;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_14;
  v9->m_Items[0] = (Il2CppObject *)ajoCurrentActivity;
  v7 = sub_1C9403C(v9->m_Items, ajoCurrentActivity);
  if ( v3 )
  {
    v7 = sub_1C941D4(v3, v9->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_16:
      v11 = sub_1C94314();
      sub_1C941C0(v11, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 1 )
LABEL_14:
    sub_1C942F8(v7);
  v9->m_Items[1] = (Il2CppObject *)v3;
  v7 = sub_1C9403C(&v9->m_Items[1], v3);
  if ( !ajcAdjust )
    goto LABEL_15;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_21094/*"isEnabled"*/, v9, 0);
}


void AdjustSdk_AdjustAndroid__OnPause(System_String_o *testingArgument, const MethodInfo *method)
{
  __int64 v3; // x1
  AdjustSdk_AdjustAndroid_c *v4; // x0
  _QWORD *v5; // x20
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4D24A33 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_24273/*"test"*/);
    sub_1C94098(&StringLiteral_22630/*"onPause"*/);
    byte_4D24A33 = 1;
  }
  if ( System_String__op_Equality(testingArgument, (System_String_o *)StringLiteral_24273/*"test"*/, 0) )
  {
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v4 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v5 = Method_System_Array_Empty_object___;
    ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v4->static_fields->ajcAdjust;
    v7 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v7 )
    {
      sub_1C6A188(Method_System_Array_Empty_object___);
      v7 = v5[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C6A12C();
    if ( !*(_DWORD *)(v8 + 224) )
      j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C6A12C();
    if ( !ajcAdjust )
      sub_1C942F0(v9, v3);
    UnityEngine_AndroidJavaObject__CallStatic(
      ajcAdjust,
      (System_String_o *)StringLiteral_22630/*"onPause"*/,
      **(System_Object_array ***)(v9 + 184),
      0);
  }
}


void AdjustSdk_AdjustAndroid__OnResume(System_String_o *testingArgument, const MethodInfo *method)
{
  __int64 v3; // x1
  AdjustSdk_AdjustAndroid_c *v4; // x0
  _QWORD *v5; // x20
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4D24A32 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_22634/*"onResume"*/);
    sub_1C94098(&StringLiteral_24273/*"test"*/);
    byte_4D24A32 = 1;
  }
  if ( System_String__op_Equality(testingArgument, (System_String_o *)StringLiteral_24273/*"test"*/, 0) )
  {
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v4 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v5 = Method_System_Array_Empty_object___;
    ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v4->static_fields->ajcAdjust;
    v7 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v7 )
    {
      sub_1C6A188(Method_System_Array_Empty_object___);
      v7 = v5[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C6A12C();
    if ( !*(_DWORD *)(v8 + 224) )
      j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C6A12C();
    if ( !ajcAdjust )
      sub_1C942F0(v9, v3);
    UnityEngine_AndroidJavaObject__CallStatic(
      ajcAdjust,
      (System_String_o *)StringLiteral_22634/*"onResume"*/,
      **(System_Object_array ***)(v9 + 184),
      0);
  }
}


void AdjustSdk_AdjustAndroid__ProcessAndResolveDeeplink(
        AdjustSdk_AdjustDeeplink_o *deeplink,
        System_Action_string__o *resolvedLinkCallback,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_o *v5; // x20
  const MethodInfo *v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaClass_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  struct System_String_o *Deeplink_k__BackingField; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x23
  UnityEngine_AndroidJavaObject_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x23
  struct System_String_o *Referrer_k__BackingField; // x22
  Il2CppObject *v25; // x24
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  Il2CppClass *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  AdjustSdk_AdjustAndroid_c *v35; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  System_Object_array *v39; // x23
  __int64 v40; // x0
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x24
  __int64 v42; // x0
  struct AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_o *onDeeplinkResolvedListener; // x24
  __int64 v44; // x0
  __int64 v45; // x1
  UnityEngine_AndroidJavaObject_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  Il2CppClass *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  UnityEngine_AndroidJavaClass_c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x0

  if ( (byte_4D24A2D & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____79041448);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_18161/*"com.adjust.sdk.AdjustDeeplink"*/);
    sub_1C94098(&StringLiteral_23596/*"setReferrer"*/);
    sub_1C94098(&StringLiteral_22857/*"parse"*/);
    sub_1C94098(&StringLiteral_23005/*"processAndResolveDeeplink"*/);
    sub_1C94098(&StringLiteral_16838/*"android.net.Uri"*/);
    byte_4D24A2D = 1;
  }
  v5 = (AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_TypeInfo);
  AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___ctor(v5, resolvedLinkCallback, v6);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->onDeeplinkResolvedListener = v5;
  sub_1C9403C(&static_fields->onDeeplinkResolvedListener, v5);
  v9 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v9, (System_String_o *)StringLiteral_16838/*"android.net.Uri"*/, 0);
  v10 = sub_1C94140(object___TypeInfo, 1);
  if ( !deeplink )
    sub_1C942F0(v10, v11);
  v12 = v10;
  if ( !v10 )
    sub_1C942F0(0, v11);
  Deeplink_k__BackingField = deeplink->fields._Deeplink_k__BackingField;
  if ( Deeplink_k__BackingField )
  {
    v10 = sub_1C941D4(deeplink->fields._Deeplink_k__BackingField, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
    {
      v58 = sub_1C94314();
      sub_1C941C0(v58, 0);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1C942F8(v10);
  *(_QWORD *)(v12 + 32) = Deeplink_k__BackingField;
  v14 = sub_1C9403C(v12 + 32, Deeplink_k__BackingField);
  if ( !v9 )
    sub_1C942F0(v14, v15);
  v16 = UnityEngine_AndroidJavaObject__CallStatic_object_(
          (UnityEngine_AndroidJavaObject_o *)v9,
          (System_String_o *)StringLiteral_22857/*"parse"*/,
          (System_Object_array *)v12,
          (const MethodInfo_30E9B94 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____79041448);
  v17 = sub_1C94140(object___TypeInfo, 1);
  v19 = v17;
  if ( !v17 )
    sub_1C942F0(0, v18);
  if ( v16 )
  {
    v17 = sub_1C941D4(v16, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
    if ( !v17 )
    {
      v59 = sub_1C94314();
      sub_1C941C0(v59, 0);
    }
  }
  if ( !*(_DWORD *)(v19 + 24) )
    sub_1C942F8(v17);
  *(_QWORD *)(v19 + 32) = v16;
  sub_1C9403C(v19 + 32, v16);
  v20 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(
    v20,
    (System_String_o *)StringLiteral_18161/*"com.adjust.sdk.AdjustDeeplink"*/,
    (System_Object_array *)v19,
    0);
  if ( deeplink->fields._Referrer_k__BackingField )
  {
    v21 = sub_1C94140(object___TypeInfo, 1);
    v23 = v21;
    if ( !v21 )
      sub_1C942F0(0, v22);
    Referrer_k__BackingField = deeplink->fields._Referrer_k__BackingField;
    if ( Referrer_k__BackingField )
    {
      v21 = sub_1C941D4(Referrer_k__BackingField, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
      if ( !v21 )
      {
        v63 = sub_1C94314();
        sub_1C941C0(v63, 0);
      }
    }
    if ( !*(_DWORD *)(v23 + 24) )
      sub_1C942F8(v21);
    *(_QWORD *)(v23 + 32) = Referrer_k__BackingField;
    sub_1C9403C(v23 + 32, Referrer_k__BackingField);
    v25 = UnityEngine_AndroidJavaObject__CallStatic_object_(
            (UnityEngine_AndroidJavaObject_o *)v9,
            (System_String_o *)StringLiteral_22857/*"parse"*/,
            (System_Object_array *)v23,
            (const MethodInfo_30E9B94 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____79041448);
    v26 = sub_1C94140(object___TypeInfo, 1);
    v28 = v26;
    if ( !v26 )
      sub_1C942F0(0, v27);
    if ( v25 )
    {
      v26 = sub_1C941D4(v25, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
      if ( !v26 )
      {
        v64 = sub_1C94314();
        sub_1C941C0(v64, 0);
      }
    }
    if ( !*(_DWORD *)(v28 + 24) )
      sub_1C942F8(v26);
    *(_QWORD *)(v28 + 32) = v25;
    v29 = sub_1C9403C(v28 + 32, v25);
    if ( !v20 )
      sub_1C942F0(v29, v30);
    UnityEngine_AndroidJavaObject__Call(v20, (System_String_o *)StringLiteral_23596/*"setReferrer"*/, (System_Object_array *)v28, 0);
    if ( v25 )
    {
      klass = v25->klass;
      v32 = *(unsigned __int16 *)&v25->klass->_2.rank;
      if ( *(_WORD *)&v25->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          p_offset += 4;
          if ( !v32 )
            goto LABEL_30;
        }
        v34 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_30:
        v34 = sub_1C6A420(v25, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(Il2CppObject *, _QWORD))v34)(v25, *(_QWORD *)(v34 + 8));
    }
  }
  v35 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v35 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v35->static_fields->ajcAdjust;
  v37 = sub_1C94140(object___TypeInfo, 3);
  v39 = (System_Object_array *)v37;
  if ( !v37 )
    sub_1C942F0(0, v38);
  if ( v20 )
  {
    v37 = sub_1C941D4(v20, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
    if ( !v37 )
    {
      v60 = sub_1C94314();
      sub_1C941C0(v60, 0);
    }
  }
  if ( !LODWORD(v39->max_length) )
    sub_1C942F8(v37);
  v39->m_Items[0] = (Il2CppObject *)v20;
  v40 = sub_1C9403C(v39->m_Items, v20);
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v40 = sub_1C941D4(ajoCurrentActivity, v39->obj.klass->_1.element_class);
    if ( !v40 )
    {
      v61 = sub_1C94314();
      sub_1C941C0(v61, 0);
    }
  }
  if ( LODWORD(v39->max_length) <= 1 )
    sub_1C942F8(v40);
  v39->m_Items[1] = (Il2CppObject *)ajoCurrentActivity;
  v42 = sub_1C9403C(&v39->m_Items[1], ajoCurrentActivity);
  onDeeplinkResolvedListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onDeeplinkResolvedListener;
  if ( onDeeplinkResolvedListener )
  {
    v42 = sub_1C941D4(onDeeplinkResolvedListener, v39->obj.klass->_1.element_class);
    if ( !v42 )
    {
      v62 = sub_1C94314();
      sub_1C941C0(v62, 0);
    }
  }
  if ( LODWORD(v39->max_length) <= 2 )
    sub_1C942F8(v42);
  v39->m_Items[2] = (Il2CppObject *)onDeeplinkResolvedListener;
  v44 = sub_1C9403C(&v39->m_Items[2], onDeeplinkResolvedListener);
  if ( !ajcAdjust )
    sub_1C942F0(v44, v45);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_23005/*"processAndResolveDeeplink"*/, v39, 0);
  if ( v20 )
  {
    v46 = v20->klass;
    v47 = *(unsigned __int16 *)&v20->klass->_2.rank;
    if ( *(_WORD *)&v20->klass->_2.rank )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_51;
      }
      v49 = (__int64)&v46->vtable + 16 * *v48;
    }
    else
    {
LABEL_51:
      v49 = sub_1C6A420(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v49)(v20, *(_QWORD *)(v49 + 8));
  }
  if ( v16 )
  {
    v50 = v16->klass;
    v51 = *(unsigned __int16 *)&v16->klass->_2.rank;
    if ( *(_WORD *)&v16->klass->_2.rank )
    {
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_59;
      }
      v53 = (__int64)&v50->vtable[*v52];
    }
    else
    {
LABEL_59:
      v53 = sub_1C6A420(v16, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v53)(v16, *(_QWORD *)(v53 + 8));
  }
  v54 = v9->klass;
  v55 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_66;
    }
    v57 = (__int64)&v54->vtable + 16 * *v56;
  }
  else
  {
LABEL_66:
    v57 = sub_1C6A420(v9, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v57)(v9, *(_QWORD *)(v57 + 8));
}


void AdjustSdk_AdjustAndroid__ProcessDeeplink(AdjustSdk_AdjustDeeplink_o *deeplink, const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  struct System_String_o *Deeplink_k__BackingField; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x23
  UnityEngine_AndroidJavaObject_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  struct System_String_o *Referrer_k__BackingField; // x22
  Il2CppObject *v19; // x24
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  Il2CppClass *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  AdjustSdk_AdjustAndroid_c *v29; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  System_Object_array *v33; // x23
  __int64 v34; // x0
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x24
  __int64 v36; // x0
  __int64 v37; // x1
  UnityEngine_AndroidJavaObject_c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  Il2CppClass *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  UnityEngine_AndroidJavaClass_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x0

  if ( (byte_4D24A1C & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____79041448);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_23007/*"processDeeplink"*/);
    sub_1C94098(&StringLiteral_18161/*"com.adjust.sdk.AdjustDeeplink"*/);
    sub_1C94098(&StringLiteral_23596/*"setReferrer"*/);
    sub_1C94098(&StringLiteral_22857/*"parse"*/);
    sub_1C94098(&StringLiteral_16838/*"android.net.Uri"*/);
    byte_4D24A1C = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_16838/*"android.net.Uri"*/, 0);
  v4 = sub_1C94140(object___TypeInfo, 1);
  if ( !deeplink )
    sub_1C942F0(v4, v5);
  v6 = v4;
  if ( !v4 )
    sub_1C942F0(0, v5);
  Deeplink_k__BackingField = deeplink->fields._Deeplink_k__BackingField;
  if ( Deeplink_k__BackingField )
  {
    v4 = sub_1C941D4(deeplink->fields._Deeplink_k__BackingField, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      v50 = sub_1C94314();
      sub_1C941C0(v50, 0);
    }
  }
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C942F8(v4);
  *(_QWORD *)(v6 + 32) = Deeplink_k__BackingField;
  v8 = sub_1C9403C(v6 + 32, Deeplink_k__BackingField);
  if ( !v3 )
    sub_1C942F0(v8, v9);
  v10 = UnityEngine_AndroidJavaObject__CallStatic_object_(
          (UnityEngine_AndroidJavaObject_o *)v3,
          (System_String_o *)StringLiteral_22857/*"parse"*/,
          (System_Object_array *)v6,
          (const MethodInfo_30E9B94 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____79041448);
  v11 = sub_1C94140(object___TypeInfo, 1);
  v13 = v11;
  if ( !v11 )
    sub_1C942F0(0, v12);
  if ( v10 )
  {
    v11 = sub_1C941D4(v10, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v11 )
    {
      v51 = sub_1C94314();
      sub_1C941C0(v51, 0);
    }
  }
  if ( !*(_DWORD *)(v13 + 24) )
    sub_1C942F8(v11);
  *(_QWORD *)(v13 + 32) = v10;
  sub_1C9403C(v13 + 32, v10);
  v14 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(
    v14,
    (System_String_o *)StringLiteral_18161/*"com.adjust.sdk.AdjustDeeplink"*/,
    (System_Object_array *)v13,
    0);
  if ( deeplink->fields._Referrer_k__BackingField )
  {
    v15 = sub_1C94140(object___TypeInfo, 1);
    v17 = v15;
    if ( !v15 )
      sub_1C942F0(0, v16);
    Referrer_k__BackingField = deeplink->fields._Referrer_k__BackingField;
    if ( Referrer_k__BackingField )
    {
      v15 = sub_1C941D4(Referrer_k__BackingField, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
      if ( !v15 )
      {
        v54 = sub_1C94314();
        sub_1C941C0(v54, 0);
      }
    }
    if ( !*(_DWORD *)(v17 + 24) )
      sub_1C942F8(v15);
    *(_QWORD *)(v17 + 32) = Referrer_k__BackingField;
    sub_1C9403C(v17 + 32, Referrer_k__BackingField);
    v19 = UnityEngine_AndroidJavaObject__CallStatic_object_(
            (UnityEngine_AndroidJavaObject_o *)v3,
            (System_String_o *)StringLiteral_22857/*"parse"*/,
            (System_Object_array *)v17,
            (const MethodInfo_30E9B94 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____79041448);
    v20 = sub_1C94140(object___TypeInfo, 1);
    v22 = v20;
    if ( !v20 )
      sub_1C942F0(0, v21);
    if ( v19 )
    {
      v20 = sub_1C941D4(v19, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
      if ( !v20 )
      {
        v55 = sub_1C94314();
        sub_1C941C0(v55, 0);
      }
    }
    if ( !*(_DWORD *)(v22 + 24) )
      sub_1C942F8(v20);
    *(_QWORD *)(v22 + 32) = v19;
    v23 = sub_1C9403C(v22 + 32, v19);
    if ( !v14 )
      sub_1C942F0(v23, v24);
    UnityEngine_AndroidJavaObject__Call(v14, (System_String_o *)StringLiteral_23596/*"setReferrer"*/, (System_Object_array *)v22, 0);
    if ( v19 )
    {
      klass = v19->klass;
      v26 = *(unsigned __int16 *)&v19->klass->_2.rank;
      if ( *(_WORD *)&v19->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v26;
          p_offset += 4;
          if ( !v26 )
            goto LABEL_28;
        }
        v28 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_28:
        v28 = sub_1C6A420(v19, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(Il2CppObject *, _QWORD))v28)(v19, *(_QWORD *)(v28 + 8));
    }
  }
  v29 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v29 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v29->static_fields->ajcAdjust;
  v31 = sub_1C94140(object___TypeInfo, 2);
  v33 = (System_Object_array *)v31;
  if ( !v31 )
    sub_1C942F0(0, v32);
  if ( v14 )
  {
    v31 = sub_1C941D4(v14, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
    if ( !v31 )
    {
      v52 = sub_1C94314();
      sub_1C941C0(v52, 0);
    }
  }
  if ( !LODWORD(v33->max_length) )
    sub_1C942F8(v31);
  v33->m_Items[0] = (Il2CppObject *)v14;
  v34 = sub_1C9403C(v33->m_Items, v14);
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v34 = sub_1C941D4(ajoCurrentActivity, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
      v53 = sub_1C94314();
      sub_1C941C0(v53, 0);
    }
  }
  if ( LODWORD(v33->max_length) <= 1 )
    sub_1C942F8(v34);
  v33->m_Items[1] = (Il2CppObject *)ajoCurrentActivity;
  v36 = sub_1C9403C(&v33->m_Items[1], ajoCurrentActivity);
  if ( !ajcAdjust )
    sub_1C942F0(v36, v37);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_23007/*"processDeeplink"*/, v33, 0);
  if ( v14 )
  {
    v38 = v14->klass;
    v39 = *(unsigned __int16 *)&v14->klass->_2.rank;
    if ( *(_WORD *)&v14->klass->_2.rank )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_46;
      }
      v41 = (__int64)&v38->vtable + 16 * *v40;
    }
    else
    {
LABEL_46:
      v41 = sub_1C6A420(v14, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v41)(v14, *(_QWORD *)(v41 + 8));
  }
  if ( v10 )
  {
    v42 = v10->klass;
    v43 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_54;
      }
      v45 = (__int64)&v42->vtable[*v44];
    }
    else
    {
LABEL_54:
      v45 = sub_1C6A420(v10, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v45)(v10, *(_QWORD *)(v45 + 8));
  }
  v46 = v3->klass;
  v47 = *(unsigned __int16 *)&v3->klass->_2.rank;
  if ( *(_WORD *)&v3->klass->_2.rank )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_61;
    }
    v49 = (__int64)&v46->vtable + 16 * *v48;
  }
  else
  {
LABEL_61:
    v49 = sub_1C6A420(v3, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v49)(v3, *(_QWORD *)(v49 + 8));
}


void AdjustSdk_AdjustAndroid__RemoveGlobalCallbackParameter(System_String_o *key, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaClass_o *v4; // x20
  AdjustSdk_AdjustAndroid_c *v5; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0

  if ( (byte_4D24A19 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_23259/*"removeGlobalCallbackParameter"*/);
    sub_1C94098(&StringLiteral_18158/*"com.adjust.sdk.Adjust"*/);
    byte_4D24A19 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v3->static_fields->ajcAdjust )
  {
    v4 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v4, (System_String_o *)StringLiteral_18158/*"com.adjust.sdk.Adjust"*/, 0);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v5 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->ajcAdjust = v4;
    sub_1C9403C(&static_fields->ajcAdjust, v4);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v8 = sub_1C94140(object___TypeInfo, 1);
  if ( !v8 )
    goto LABEL_17;
  v10 = v8;
  if ( key )
  {
    v8 = sub_1C941D4(key, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      v11 = sub_1C94314();
      sub_1C941C0(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1C942F8(v8);
  *(_QWORD *)(v10 + 32) = key;
  v8 = sub_1C9403C(v10 + 32, key);
  if ( !ajcAdjust )
LABEL_17:
    sub_1C942F0(v8, v9);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_23259/*"removeGlobalCallbackParameter"*/,
    (System_Object_array *)v10,
    0);
}


void AdjustSdk_AdjustAndroid__RemoveGlobalCallbackParameters(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  UnityEngine_AndroidJavaClass_o *v3; // x19
  AdjustSdk_AdjustAndroid_c *v4; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4D24A1B & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_23260/*"removeGlobalCallbackParameters"*/);
    sub_1C94098(&StringLiteral_18158/*"com.adjust.sdk.Adjust"*/);
    byte_4D24A1B = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v2->static_fields->ajcAdjust )
  {
    v3 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_18158/*"com.adjust.sdk.Adjust"*/, 0);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v4 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v4->static_fields;
    static_fields->ajcAdjust = v3;
    sub_1C9403C(&static_fields->ajcAdjust, v3);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v6 = Method_System_Array_Empty_object___;
  v7 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v7 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v7 = v6[7];
  }
  v9 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C6A12C();
  if ( !*(_DWORD *)(v9 + 224) )
    j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v10, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_23260/*"removeGlobalCallbackParameters"*/,
    **(System_Object_array ***)(v10 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__RemoveGlobalPartnerParameter(System_String_o *key, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaClass_o *v4; // x20
  AdjustSdk_AdjustAndroid_c *v5; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0

  if ( (byte_4D24A18 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_23261/*"removeGlobalPartnerParameter"*/);
    sub_1C94098(&StringLiteral_18158/*"com.adjust.sdk.Adjust"*/);
    byte_4D24A18 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v3->static_fields->ajcAdjust )
  {
    v4 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v4, (System_String_o *)StringLiteral_18158/*"com.adjust.sdk.Adjust"*/, 0);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v5 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->ajcAdjust = v4;
    sub_1C9403C(&static_fields->ajcAdjust, v4);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v8 = sub_1C94140(object___TypeInfo, 1);
  if ( !v8 )
    goto LABEL_17;
  v10 = v8;
  if ( key )
  {
    v8 = sub_1C941D4(key, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      v11 = sub_1C94314();
      sub_1C941C0(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1C942F8(v8);
  *(_QWORD *)(v10 + 32) = key;
  v8 = sub_1C9403C(v10 + 32, key);
  if ( !ajcAdjust )
LABEL_17:
    sub_1C942F0(v8, v9);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_23261/*"removeGlobalPartnerParameter"*/,
    (System_Object_array *)v10,
    0);
}


void AdjustSdk_AdjustAndroid__RemoveGlobalPartnerParameters(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  UnityEngine_AndroidJavaClass_o *v3; // x19
  AdjustSdk_AdjustAndroid_c *v4; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4D24A1A & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_23262/*"removeGlobalPartnerParameters"*/);
    sub_1C94098(&StringLiteral_18158/*"com.adjust.sdk.Adjust"*/);
    byte_4D24A1A = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v2->static_fields->ajcAdjust )
  {
    v3 = (UnityEngine_AndroidJavaClass_o *)sub_1C942E4(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_18158/*"com.adjust.sdk.Adjust"*/, 0);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
      v4 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v4->static_fields;
    static_fields->ajcAdjust = v3;
    sub_1C9403C(&static_fields->ajcAdjust, v3);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v6 = Method_System_Array_Empty_object___;
  v7 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v7 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v7 = v6[7];
  }
  v9 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C6A12C();
  if ( !*(_DWORD *)(v9 + 224) )
    j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v10, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_23262/*"removeGlobalPartnerParameters"*/,
    **(System_Object_array ***)(v10 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__SetExternalDeviceIdInDelay(System_String_o *externalDeviceId, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0

  if ( (byte_4D24A29 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_23560/*"setExternalDeviceIdInDelay"*/);
    byte_4D24A29 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v5 = sub_1C94140(object___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  if ( externalDeviceId )
  {
    v5 = sub_1C941D4(externalDeviceId, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v8 = sub_1C94314();
      sub_1C941C0(v8, 0);
    }
  }
  if ( !*(_DWORD *)(v7 + 24) )
    sub_1C942F8(v5);
  *(_QWORD *)(v7 + 32) = externalDeviceId;
  v5 = sub_1C9403C(v7 + 32, externalDeviceId);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v5, v6);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_23560/*"setExternalDeviceIdInDelay"*/,
    (System_Object_array *)v7,
    0);
}


void AdjustSdk_AdjustAndroid__SetPushToken(System_String_o *pushToken, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x19
  __int64 v9; // x0

  if ( (byte_4D24A14 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_23595/*"setPushToken"*/);
    byte_4D24A14 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v5 = sub_1C94140(object___TypeInfo, 2);
  if ( !v5 )
LABEL_15:
    sub_1C942F0(v5, v6);
  v7 = (System_Object_array *)v5;
  if ( pushToken )
  {
    v5 = sub_1C941D4(pushToken, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
      goto LABEL_16;
  }
  if ( !LODWORD(v7->max_length) )
    goto LABEL_14;
  v7->m_Items[0] = (Il2CppObject *)pushToken;
  v5 = sub_1C9403C(v7->m_Items, pushToken);
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v5 = sub_1C941D4(ajoCurrentActivity, v7->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_16:
      v9 = sub_1C94314();
      sub_1C941C0(v9, 0);
    }
  }
  if ( LODWORD(v7->max_length) <= 1 )
LABEL_14:
    sub_1C942F8(v5);
  v7->m_Items[1] = (Il2CppObject *)ajoCurrentActivity;
  v5 = sub_1C9403C(&v7->m_Items[1], ajoCurrentActivity);
  if ( !ajcAdjust )
    goto LABEL_15;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_23595/*"setPushToken"*/, v7, 0);
}


void AdjustSdk_AdjustAndroid__SetTestOptions(
        System_Collections_Generic_Dictionary_string__string__o *testOptions,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  AdjustSdk_AdjustAndroid_c *v4; // x0
  UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x20
  UnityEngine_AndroidJavaObject_o *v6; // x0
  AdjustSdk_AdjustAndroid_c *v7; // x8
  UnityEngine_AndroidJavaObject_o *v8; // x19
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0

  if ( (byte_4D24A31 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_23612/*"setTestOptions"*/);
    byte_4D24A31 = 1;
  }
  v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajoCurrentActivity = v4->static_fields->ajoCurrentActivity;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  v6 = AdjustSdk_AdjustUtils__TestOptionsMap2AndroidJavaObject(testOptions, ajoCurrentActivity, v2);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  v8 = v6;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v7->static_fields->ajcAdjust;
  v10 = sub_1C94140(object___TypeInfo, 1);
  v12 = v10;
  if ( !v10 )
    sub_1C942F0(0, v11);
  if ( v8 )
  {
    v10 = sub_1C941D4(v8, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
    {
      v19 = sub_1C94314();
      sub_1C941C0(v19, 0);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1C942F8(v10);
  *(_QWORD *)(v12 + 32) = v8;
  v13 = sub_1C9403C(v12 + 32, v8);
  if ( !ajcAdjust )
    sub_1C942F0(v13, v14);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_23612/*"setTestOptions"*/,
    (System_Object_array *)v12,
    0);
  if ( v8 )
  {
    klass = v8->klass;
    v16 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_19;
      }
      v18 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_19:
      v18 = sub_1C6A420(v8, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v18)(v8, *(_QWORD *)(v18 + 8));
  }
}


void AdjustSdk_AdjustAndroid__SwitchBackToOnlineMode(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4D24A0F & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_24117/*"switchBackToOnlineMode"*/);
    byte_4D24A0F = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v4 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C();
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v7, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24117/*"switchBackToOnlineMode"*/,
    **(System_Object_array ***)(v7 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__SwitchToOfflineMode(const MethodInfo *method)
{
  __int64 v1; // x1
  AdjustSdk_AdjustAndroid_c *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4D24A0E & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&StringLiteral_24122/*"switchToOfflineMode"*/);
    byte_4D24A0E = 1;
  }
  v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v2 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v2->static_fields->ajcAdjust;
  if ( !v4 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C();
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !ajcAdjust )
    sub_1C942F0(v7, v1);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24122/*"switchToOfflineMode"*/,
    **(System_Object_array ***)(v7 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__TrackAdRevenue(AdjustSdk_AdjustAdRevenue_o *adRevenue, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x21
  struct System_String_o *Source_k__BackingField; // x19
  UnityEngine_AndroidJavaObject_o *v7; // x19
  const MethodInfo *v8; // x1
  System_Object_array *v9; // x22
  double value; // x10
  __int64 v11; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  UnityEngine_AndroidJavaObject_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Object_array *v17; // x22
  __int64 v18; // x0
  struct System_String_o *Currency_k__BackingField; // x23
  __int64 v20; // x0
  __int64 v21; // x1
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  System_Object_array *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x21
  UnityEngine_AndroidJavaObject_o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  UnityEngine_AndroidJavaObject_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x21
  struct System_String_o *AdRevenueNetwork_k__BackingField; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x21
  struct System_String_o *AdRevenueUnit_k__BackingField; // x22
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x21
  struct System_String_o *AdRevenuePlacement_k__BackingField; // x22
  __int64 v56; // x0
  __int64 v57; // x1
  const MethodInfo *v58; // x1
  int32_t i; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *CallbackParameters; // x0
  __int64 v61; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v62; // x0
  __int64 v63; // x1
  Il2CppObject *Item; // x24
  const MethodInfo *v65; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v66; // x0
  __int64 v67; // x1
  int32_t v68; // w21
  Il2CppObject *v69; // x23
  __int64 v70; // x0
  __int64 v71; // x1
  System_Object_array *v72; // x22
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  const MethodInfo *v76; // x1
  int32_t j; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerParameters; // x0
  __int64 v79; // x1
  const MethodInfo *v80; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v81; // x0
  __int64 v82; // x1
  Il2CppObject *v83; // x24
  const MethodInfo *v84; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v85; // x0
  __int64 v86; // x1
  int32_t v87; // w21
  Il2CppObject *v88; // x23
  __int64 v89; // x0
  __int64 v90; // x1
  System_Object_array *v91; // x22
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  AdjustSdk_AdjustAndroid_c *v95; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x21
  __int64 v100; // x0
  __int64 v101; // x1
  UnityEngine_AndroidJavaObject_c *v102; // x8
  __int64 v103; // x9
  int32_t *v104; // x10
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x0
  _QWORD v120[2]; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_4D24A1D & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Nullable_double__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_int__get_HasValue__);
    sub_1C94098(&System_Nullable_double__TypeInfo);
    sub_1C94098(&System_Nullable_int__TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_1C94098(&StringLiteral_16746/*"addPartnerParameter"*/);
    sub_1C94098(&StringLiteral_23541/*"setAdRevenueNetwork"*/);
    sub_1C94098(&StringLiteral_24388/*"trackAdRevenue"*/);
    sub_1C94098(&StringLiteral_16734/*"addCallbackParameter"*/);
    sub_1C94098(&StringLiteral_18159/*"com.adjust.sdk.AdjustAdRevenue"*/);
    sub_1C94098(&StringLiteral_23543/*"setAdRevenueUnit"*/);
    sub_1C94098(&StringLiteral_23597/*"setRevenue"*/);
    sub_1C94098(&StringLiteral_21248/*"java.lang.Double"*/);
    sub_1C94098(&StringLiteral_23542/*"setAdRevenuePlacement"*/);
    sub_1C94098(&StringLiteral_23540/*"setAdImpressionsCount"*/);
    sub_1C94098(&StringLiteral_21250/*"java.lang.Integer"*/);
    byte_4D24A1D = 1;
  }
  v3 = sub_1C94140(object___TypeInfo, 1);
  if ( !adRevenue || (v5 = v3) == 0 )
    sub_1C942F0(v3, v4);
  Source_k__BackingField = adRevenue->fields._Source_k__BackingField;
  if ( Source_k__BackingField )
  {
    v3 = sub_1C941D4(adRevenue->fields._Source_k__BackingField, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v110 = sub_1C94314();
      sub_1C941C0(v110, 0);
    }
  }
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C942F8(v3);
  *(_QWORD *)(v5 + 32) = Source_k__BackingField;
  sub_1C9403C(v5 + 32, Source_k__BackingField);
  v7 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(
    v7,
    (System_String_o *)StringLiteral_18159/*"com.adjust.sdk.AdjustAdRevenue"*/,
    (System_Object_array *)v5,
    0);
  if ( adRevenue->fields._Revenue_k__BackingField.fields.hasValue )
  {
    v9 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    value = adRevenue->fields._Revenue_k__BackingField.fields.value;
    v120[0] = *(_QWORD *)&adRevenue->fields._Revenue_k__BackingField.fields.hasValue;
    *(double *)&v120[1] = value;
    v11 = j_il2cpp_value_box_0(System_Nullable_double__TypeInfo, v120);
    if ( !v9 )
      sub_1C942F0(v11, v12);
    v13 = (Il2CppObject *)v11;
    if ( v11 )
    {
      v11 = sub_1C941D4(v11, v9->obj.klass->_1.element_class);
      if ( !v11 )
      {
        v112 = sub_1C94314();
        sub_1C941C0(v112, 0);
      }
    }
    if ( !LODWORD(v9->max_length) )
      sub_1C942F8(v11);
    v9->m_Items[0] = v13;
    sub_1C9403C(v9->m_Items, v13);
    v14 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v14, (System_String_o *)StringLiteral_21248/*"java.lang.Double"*/, v9, 0);
    v15 = sub_1C94140(object___TypeInfo, 2);
    v17 = (System_Object_array *)v15;
    if ( !v15 )
      sub_1C942F0(0, v16);
    if ( v14 )
    {
      v15 = sub_1C941D4(v14, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
      if ( !v15 )
      {
        v113 = sub_1C94314();
        sub_1C941C0(v113, 0);
      }
    }
    if ( !LODWORD(v17->max_length) )
      sub_1C942F8(v15);
    v17->m_Items[0] = (Il2CppObject *)v14;
    v18 = sub_1C9403C(v17->m_Items, v14);
    Currency_k__BackingField = adRevenue->fields._Currency_k__BackingField;
    if ( Currency_k__BackingField )
    {
      v18 = sub_1C941D4(adRevenue->fields._Currency_k__BackingField, v17->obj.klass->_1.element_class);
      if ( !v18 )
      {
        v115 = sub_1C94314();
        sub_1C941C0(v115, 0);
      }
    }
    if ( LODWORD(v17->max_length) <= 1 )
      sub_1C942F8(v18);
    v17->m_Items[1] = (Il2CppObject *)Currency_k__BackingField;
    v20 = sub_1C9403C(&v17->m_Items[1], Currency_k__BackingField);
    if ( !v7 )
      sub_1C942F0(v20, v21);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23597/*"setRevenue"*/, v17, 0);
    if ( v14 )
    {
      klass = v14->klass;
      v23 = *(unsigned __int16 *)&v14->klass->_2.rank;
      if ( *(_WORD *)&v14->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
            goto LABEL_26;
        }
        v25 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_26:
        v25 = sub_1C6A420(v14, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v25)(v14, *(_QWORD *)(v25 + 8));
    }
  }
  if ( adRevenue->fields._AdImpressionsCount_k__BackingField.fields.hasValue )
  {
    v26 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    v120[0] = adRevenue->fields._AdImpressionsCount_k__BackingField;
    v27 = j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, v120);
    if ( !v26 )
      sub_1C942F0(v27, v28);
    v29 = (Il2CppObject *)v27;
    if ( v27 )
    {
      v27 = sub_1C941D4(v27, v26->obj.klass->_1.element_class);
      if ( !v27 )
      {
        v114 = sub_1C94314();
        sub_1C941C0(v114, 0);
      }
    }
    if ( !LODWORD(v26->max_length) )
      sub_1C942F8(v27);
    v26->m_Items[0] = v29;
    sub_1C9403C(v26->m_Items, v29);
    v30 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v30, (System_String_o *)StringLiteral_21250/*"java.lang.Integer"*/, v26, 0);
    v31 = sub_1C94140(object___TypeInfo, 1);
    v33 = v31;
    if ( !v31 )
      sub_1C942F0(0, v32);
    if ( v30 )
    {
      v31 = sub_1C941D4(v30, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
      if ( !v31 )
      {
        v116 = sub_1C94314();
        sub_1C941C0(v116, 0);
      }
    }
    if ( !*(_DWORD *)(v33 + 24) )
      sub_1C942F8(v31);
    *(_QWORD *)(v33 + 32) = v30;
    v34 = sub_1C9403C(v33 + 32, v30);
    if ( !v7 )
      sub_1C942F0(v34, v35);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23540/*"setAdImpressionsCount"*/, (System_Object_array *)v33, 0);
    if ( v30 )
    {
      v36 = v30->klass;
      v37 = *(unsigned __int16 *)&v30->klass->_2.rank;
      if ( *(_WORD *)&v30->klass->_2.rank )
      {
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_44;
        }
        v39 = (__int64)&v36->vtable + 16 * *v38;
      }
      else
      {
LABEL_44:
        v39 = sub_1C6A420(v30, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v39)(v30, *(_QWORD *)(v39 + 8));
    }
  }
  if ( adRevenue->fields._AdRevenueNetwork_k__BackingField )
  {
    v40 = sub_1C94140(object___TypeInfo, 1);
    v42 = v40;
    if ( !v40 )
      sub_1C942F0(0, v41);
    AdRevenueNetwork_k__BackingField = adRevenue->fields._AdRevenueNetwork_k__BackingField;
    if ( AdRevenueNetwork_k__BackingField )
    {
      v40 = sub_1C941D4(adRevenue->fields._AdRevenueNetwork_k__BackingField, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
      if ( !v40 )
      {
        v117 = sub_1C94314();
        sub_1C941C0(v117, 0);
      }
    }
    if ( !*(_DWORD *)(v42 + 24) )
      sub_1C942F8(v40);
    *(_QWORD *)(v42 + 32) = AdRevenueNetwork_k__BackingField;
    v44 = sub_1C9403C(v42 + 32, AdRevenueNetwork_k__BackingField);
    if ( !v7 )
      sub_1C942F0(v44, v45);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23541/*"setAdRevenueNetwork"*/, (System_Object_array *)v42, 0);
  }
  if ( adRevenue->fields._AdRevenueUnit_k__BackingField )
  {
    v46 = sub_1C94140(object___TypeInfo, 1);
    v48 = v46;
    if ( !v46 )
      sub_1C942F0(0, v47);
    AdRevenueUnit_k__BackingField = adRevenue->fields._AdRevenueUnit_k__BackingField;
    if ( AdRevenueUnit_k__BackingField )
    {
      v46 = sub_1C941D4(adRevenue->fields._AdRevenueUnit_k__BackingField, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
      if ( !v46 )
      {
        v118 = sub_1C94314();
        sub_1C941C0(v118, 0);
      }
    }
    if ( !*(_DWORD *)(v48 + 24) )
      sub_1C942F8(v46);
    *(_QWORD *)(v48 + 32) = AdRevenueUnit_k__BackingField;
    v50 = sub_1C9403C(v48 + 32, AdRevenueUnit_k__BackingField);
    if ( !v7 )
      sub_1C942F0(v50, v51);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23543/*"setAdRevenueUnit"*/, (System_Object_array *)v48, 0);
  }
  if ( adRevenue->fields._AdRevenuePlacement_k__BackingField )
  {
    v52 = sub_1C94140(object___TypeInfo, 1);
    v54 = v52;
    if ( !v52 )
      sub_1C942F0(0, v53);
    AdRevenuePlacement_k__BackingField = adRevenue->fields._AdRevenuePlacement_k__BackingField;
    if ( AdRevenuePlacement_k__BackingField )
    {
      v52 = sub_1C941D4(adRevenue->fields._AdRevenuePlacement_k__BackingField, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
      if ( !v52 )
      {
        v119 = sub_1C94314();
        sub_1C941C0(v119, 0);
      }
    }
    if ( !*(_DWORD *)(v54 + 24) )
      sub_1C942F8(v52);
    *(_QWORD *)(v54 + 32) = AdRevenuePlacement_k__BackingField;
    v56 = sub_1C9403C(v54 + 32, AdRevenuePlacement_k__BackingField);
    if ( !v7 )
      sub_1C942F0(v56, v57);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23542/*"setAdRevenuePlacement"*/, (System_Object_array *)v54, 0);
  }
  if ( AdjustSdk_AdjustAdRevenue__get_CallbackParameters(adRevenue, v8) )
  {
    for ( i = 0; ; i = v68 + 1 )
    {
      CallbackParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_CallbackParameters(
                                                                                       adRevenue,
                                                                                       v58);
      if ( !CallbackParameters )
        sub_1C942F0(0, v61);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  CallbackParameters,
                  (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v62 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_CallbackParameters(
                                                                        adRevenue,
                                                                        v58);
      if ( !v62 )
        sub_1C942F0(0, v63);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v62,
               i,
               (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v66 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_CallbackParameters(
                                                                        adRevenue,
                                                                        v65);
      if ( !v66 )
        sub_1C942F0(0, v67);
      v68 = i + 1;
      v69 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v66,
              v68,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v70 = sub_1C94140(object___TypeInfo, 2);
      v72 = (System_Object_array *)v70;
      if ( !v70 )
        sub_1C942F0(0, v71);
      if ( Item )
      {
        v70 = sub_1C941D4(Item, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
        if ( !v70 )
        {
          v107 = sub_1C94314();
          sub_1C941C0(v107, 0);
        }
      }
      if ( !LODWORD(v72->max_length) )
        sub_1C942F8(v70);
      v72->m_Items[0] = Item;
      v73 = sub_1C9403C(v72->m_Items, Item);
      if ( v69 )
      {
        v73 = sub_1C941D4(v69, v72->obj.klass->_1.element_class);
        if ( !v73 )
        {
          v106 = sub_1C94314();
          sub_1C941C0(v106, 0);
        }
      }
      if ( LODWORD(v72->max_length) <= 1 )
        sub_1C942F8(v73);
      v72->m_Items[1] = v69;
      v74 = sub_1C9403C(&v72->m_Items[1], v69);
      if ( !v7 )
        sub_1C942F0(v74, v75);
      UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_16734/*"addCallbackParameter"*/, v72, 0);
    }
  }
  if ( AdjustSdk_AdjustAdRevenue__get_PartnerParameters(adRevenue, v58) )
  {
    for ( j = 0; ; j = v87 + 1 )
    {
      PartnerParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_PartnerParameters(
                                                                                      adRevenue,
                                                                                      v76);
      if ( !PartnerParameters )
        sub_1C942F0(0, v79);
      if ( j >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerParameters,
                  (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v81 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_PartnerParameters(
                                                                        adRevenue,
                                                                        v80);
      if ( !v81 )
        sub_1C942F0(0, v82);
      v83 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v81,
              j,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v85 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_PartnerParameters(
                                                                        adRevenue,
                                                                        v84);
      if ( !v85 )
        sub_1C942F0(0, v86);
      v87 = j + 1;
      v88 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v85,
              v87,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v89 = sub_1C94140(object___TypeInfo, 2);
      v91 = (System_Object_array *)v89;
      if ( !v89 )
        sub_1C942F0(0, v90);
      if ( v83 )
      {
        v89 = sub_1C941D4(v83, *(_QWORD *)(*(_QWORD *)v89 + 64LL));
        if ( !v89 )
        {
          v109 = sub_1C94314();
          sub_1C941C0(v109, 0);
        }
      }
      if ( !LODWORD(v91->max_length) )
        sub_1C942F8(v89);
      v91->m_Items[0] = v83;
      v92 = sub_1C9403C(v91->m_Items, v83);
      if ( v88 )
      {
        v92 = sub_1C941D4(v88, v91->obj.klass->_1.element_class);
        if ( !v92 )
        {
          v108 = sub_1C94314();
          sub_1C941C0(v108, 0);
        }
      }
      if ( LODWORD(v91->max_length) <= 1 )
        sub_1C942F8(v92);
      v91->m_Items[1] = v88;
      v93 = sub_1C9403C(&v91->m_Items[1], v88);
      if ( !v7 )
        sub_1C942F0(v93, v94);
      UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_16746/*"addPartnerParameter"*/, v91, 0);
    }
  }
  v95 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v95 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v95->static_fields->ajcAdjust;
  v97 = sub_1C94140(object___TypeInfo, 1);
  v99 = v97;
  if ( !v97 )
    sub_1C942F0(0, v98);
  if ( v7 )
  {
    v97 = sub_1C941D4(v7, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
    if ( !v97 )
    {
      v111 = sub_1C94314();
      sub_1C941C0(v111, 0);
    }
  }
  if ( !*(_DWORD *)(v99 + 24) )
    sub_1C942F8(v97);
  *(_QWORD *)(v99 + 32) = v7;
  v100 = sub_1C9403C(v99 + 32, v7);
  if ( !ajcAdjust )
    sub_1C942F0(v100, v101);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24388/*"trackAdRevenue"*/,
    (System_Object_array *)v99,
    0);
  if ( v7 )
  {
    v102 = v7->klass;
    v103 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      v104 = &v102->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
      {
        --v103;
        v104 += 4;
        if ( !v103 )
          goto LABEL_110;
      }
      v105 = (__int64)&v102->vtable + 16 * *v104;
    }
    else
    {
LABEL_110:
      v105 = sub_1C6A420(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v105)(v7, *(_QWORD *)(v105 + 8));
  }
}


void AdjustSdk_AdjustAndroid__TrackEvent(AdjustSdk_AdjustEvent_o *adjustEvent, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x21
  struct System_String_o *EventToken_k__BackingField; // x19
  UnityEngine_AndroidJavaObject_o *v7; // x19
  const MethodInfo *v8; // x1
  System_Object_array *v9; // x21
  const MethodInfo_3992088 *v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x22
  __int64 v14; // x0
  struct System_String_o *Currency_k__BackingField; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  int32_t i; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *CallbackParameters; // x0
  __int64 v21; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v22; // x0
  __int64 v23; // x1
  Il2CppObject *Item; // x24
  const MethodInfo *v25; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v26; // x0
  __int64 v27; // x1
  int32_t v28; // w21
  Il2CppObject *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  System_Object_array *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x1
  int32_t j; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerParameters; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x24
  const MethodInfo *v44; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v45; // x0
  __int64 v46; // x1
  int32_t v47; // w21
  Il2CppObject *v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  System_Object_array *v51; // x22
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x21
  struct System_String_o *DeduplicationId_k__BackingField; // x22
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x21
  struct System_String_o *CallbackId_k__BackingField; // x22
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x21
  struct System_String_o *ProductId_k__BackingField; // x22
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x21
  struct System_String_o *PurchaseToken; // x20
  __int64 v77; // x0
  __int64 v78; // x1
  AdjustSdk_AdjustAndroid_c *v79; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x21
  __int64 v84; // x0
  __int64 v85; // x1
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v87; // x9
  int32_t *p_offset; // x10
  __int64 v89; // x0
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  double Value; // [xsp+8h] [xbp-78h] BYREF
  struct System_Nullable_double__o Revenue_k__BackingField; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_double__o v104; // 0:x0.16

  if ( (byte_4D24A0B & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&double_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Nullable_double__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_double__get_Value__);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_1C94098(&StringLiteral_16746/*"addPartnerParameter"*/);
    sub_1C94098(&StringLiteral_23553/*"setDeduplicationId"*/);
    sub_1C94098(&StringLiteral_23593/*"setPurchaseToken"*/);
    sub_1C94098(&StringLiteral_24393/*"trackEvent"*/);
    sub_1C94098(&StringLiteral_23545/*"setCallbackId"*/);
    sub_1C94098(&StringLiteral_23589/*"setProductId"*/);
    sub_1C94098(&StringLiteral_16734/*"addCallbackParameter"*/);
    sub_1C94098(&StringLiteral_18162/*"com.adjust.sdk.AdjustEvent"*/);
    sub_1C94098(&StringLiteral_23597/*"setRevenue"*/);
    byte_4D24A0B = 1;
  }
  Revenue_k__BackingField = (struct System_Nullable_double__o)0LL;
  v3 = sub_1C94140(object___TypeInfo, 1);
  if ( !adjustEvent || (v5 = v3) == 0 )
    sub_1C942F0(v3, v4);
  EventToken_k__BackingField = adjustEvent->fields._EventToken_k__BackingField;
  if ( EventToken_k__BackingField
    && !sub_1C941D4(adjustEvent->fields._EventToken_k__BackingField, *(_QWORD *)(*(_QWORD *)v3 + 64LL)) )
  {
    v94 = sub_1C94314();
    sub_1C941C0(v94, 0);
  }
  if ( !*(_DWORD *)(v5 + 24) )
    ((void (__noreturn *)(void))sub_1C942F8)();
  *(_QWORD *)(v5 + 32) = EventToken_k__BackingField;
  sub_1C9403C(v5 + 32, EventToken_k__BackingField);
  v7 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(
    v7,
    (System_String_o *)StringLiteral_18162/*"com.adjust.sdk.AdjustEvent"*/,
    (System_Object_array *)v5,
    0);
  Revenue_k__BackingField = adjustEvent->fields._Revenue_k__BackingField;
  if ( Revenue_k__BackingField.fields.hasValue )
  {
    v9 = (System_Object_array *)sub_1C94140(object___TypeInfo, 2);
    *(_QWORD *)&v104.fields.value = Method_System_Nullable_double__get_Value__;
    Revenue_k__BackingField = adjustEvent->fields._Revenue_k__BackingField;
    *(_QWORD *)&v104.fields.hasValue = &Revenue_k__BackingField;
    Value = System_Nullable_double___get_Value(v104, v10);
    v11 = j_il2cpp_value_box_0(double_TypeInfo, &Value);
    if ( !v9 )
      sub_1C942F0(v11, v12);
    v13 = (Il2CppObject *)v11;
    if ( v11 && !sub_1C941D4(v11, v9->obj.klass->_1.element_class) )
    {
      v96 = sub_1C94314();
      sub_1C941C0(v96, 0);
    }
    if ( !LODWORD(v9->max_length) )
      ((void (__noreturn *)(void))sub_1C942F8)();
    v9->m_Items[0] = v13;
    v14 = sub_1C9403C(v9->m_Items, v13);
    Currency_k__BackingField = adjustEvent->fields._Currency_k__BackingField;
    if ( Currency_k__BackingField )
    {
      v14 = sub_1C941D4(adjustEvent->fields._Currency_k__BackingField, v9->obj.klass->_1.element_class);
      if ( !v14 )
      {
        v97 = sub_1C94314();
        sub_1C941C0(v97, 0);
      }
    }
    if ( LODWORD(v9->max_length) <= 1 )
      sub_1C942F8(v14);
    v9->m_Items[1] = (Il2CppObject *)Currency_k__BackingField;
    v16 = sub_1C9403C(&v9->m_Items[1], Currency_k__BackingField);
    if ( !v7 )
      sub_1C942F0(v16, v17);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23597/*"setRevenue"*/, v9, 0);
  }
  if ( AdjustSdk_AdjustEvent__get_CallbackParameters(adjustEvent, v8) )
  {
    for ( i = 0; ; i = v28 + 1 )
    {
      CallbackParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                                       adjustEvent,
                                                                                       v18);
      if ( !CallbackParameters )
        sub_1C942F0(0, v21);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  CallbackParameters,
                  (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v22 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                        adjustEvent,
                                                                        v18);
      if ( !v22 )
        sub_1C942F0(0, v23);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v22,
               i,
               (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v26 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                        adjustEvent,
                                                                        v25);
      if ( !v26 )
        sub_1C942F0(0, v27);
      v28 = i + 1;
      v29 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v26,
              v28,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v30 = sub_1C94140(object___TypeInfo, 2);
      v32 = (System_Object_array *)v30;
      if ( !v30 )
        sub_1C942F0(0, v31);
      if ( Item )
      {
        v30 = sub_1C941D4(Item, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
        if ( !v30 )
        {
          v91 = sub_1C94314();
          sub_1C941C0(v91, 0);
        }
      }
      if ( !LODWORD(v32->max_length) )
        sub_1C942F8(v30);
      v32->m_Items[0] = Item;
      v33 = sub_1C9403C(v32->m_Items, Item);
      if ( v29 )
      {
        v33 = sub_1C941D4(v29, v32->obj.klass->_1.element_class);
        if ( !v33 )
        {
          v90 = sub_1C94314();
          sub_1C941C0(v90, 0);
        }
      }
      if ( LODWORD(v32->max_length) <= 1 )
        sub_1C942F8(v33);
      v32->m_Items[1] = v29;
      v34 = sub_1C9403C(&v32->m_Items[1], v29);
      if ( !v7 )
        sub_1C942F0(v34, v35);
      UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_16734/*"addCallbackParameter"*/, v32, 0);
    }
  }
  if ( AdjustSdk_AdjustEvent__get_PartnerParameters(adjustEvent, v18) )
  {
    for ( j = 0; ; j = v47 + 1 )
    {
      PartnerParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                                      adjustEvent,
                                                                                      v36);
      if ( !PartnerParameters )
        sub_1C942F0(0, v39);
      if ( j >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerParameters,
                  (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v41 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                        adjustEvent,
                                                                        v40);
      if ( !v41 )
        sub_1C942F0(0, v42);
      v43 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v41,
              j,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v45 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                        adjustEvent,
                                                                        v44);
      if ( !v45 )
        sub_1C942F0(0, v46);
      v47 = j + 1;
      v48 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v45,
              v47,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v49 = sub_1C94140(object___TypeInfo, 2);
      v51 = (System_Object_array *)v49;
      if ( !v49 )
        sub_1C942F0(0, v50);
      if ( v43 )
      {
        v49 = sub_1C941D4(v43, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
        if ( !v49 )
        {
          v93 = sub_1C94314();
          sub_1C941C0(v93, 0);
        }
      }
      if ( !LODWORD(v51->max_length) )
        sub_1C942F8(v49);
      v51->m_Items[0] = v43;
      v52 = sub_1C9403C(v51->m_Items, v43);
      if ( v48 )
      {
        v52 = sub_1C941D4(v48, v51->obj.klass->_1.element_class);
        if ( !v52 )
        {
          v92 = sub_1C94314();
          sub_1C941C0(v92, 0);
        }
      }
      if ( LODWORD(v51->max_length) <= 1 )
        sub_1C942F8(v52);
      v51->m_Items[1] = v48;
      v53 = sub_1C9403C(&v51->m_Items[1], v48);
      if ( !v7 )
        sub_1C942F0(v53, v54);
      UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_16746/*"addPartnerParameter"*/, v51, 0);
    }
  }
  if ( adjustEvent->fields._DeduplicationId_k__BackingField )
  {
    v55 = sub_1C94140(object___TypeInfo, 1);
    v57 = v55;
    if ( !v55 )
      sub_1C942F0(0, v56);
    DeduplicationId_k__BackingField = adjustEvent->fields._DeduplicationId_k__BackingField;
    if ( DeduplicationId_k__BackingField )
    {
      v55 = sub_1C941D4(adjustEvent->fields._DeduplicationId_k__BackingField, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
      if ( !v55 )
      {
        v98 = sub_1C94314();
        sub_1C941C0(v98, 0);
      }
    }
    if ( !*(_DWORD *)(v57 + 24) )
      sub_1C942F8(v55);
    *(_QWORD *)(v57 + 32) = DeduplicationId_k__BackingField;
    v59 = sub_1C9403C(v57 + 32, DeduplicationId_k__BackingField);
    if ( !v7 )
      sub_1C942F0(v59, v60);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23553/*"setDeduplicationId"*/, (System_Object_array *)v57, 0);
  }
  if ( adjustEvent->fields._CallbackId_k__BackingField )
  {
    v61 = sub_1C94140(object___TypeInfo, 1);
    v63 = v61;
    if ( !v61 )
      sub_1C942F0(0, v62);
    CallbackId_k__BackingField = adjustEvent->fields._CallbackId_k__BackingField;
    if ( CallbackId_k__BackingField )
    {
      v61 = sub_1C941D4(adjustEvent->fields._CallbackId_k__BackingField, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
      if ( !v61 )
      {
        v99 = sub_1C94314();
        sub_1C941C0(v99, 0);
      }
    }
    if ( !*(_DWORD *)(v63 + 24) )
      sub_1C942F8(v61);
    *(_QWORD *)(v63 + 32) = CallbackId_k__BackingField;
    v65 = sub_1C9403C(v63 + 32, CallbackId_k__BackingField);
    if ( !v7 )
      sub_1C942F0(v65, v66);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23545/*"setCallbackId"*/, (System_Object_array *)v63, 0);
  }
  if ( adjustEvent->fields._ProductId_k__BackingField )
  {
    v67 = sub_1C94140(object___TypeInfo, 1);
    v69 = v67;
    if ( !v67 )
      sub_1C942F0(0, v68);
    ProductId_k__BackingField = adjustEvent->fields._ProductId_k__BackingField;
    if ( ProductId_k__BackingField )
    {
      v67 = sub_1C941D4(adjustEvent->fields._ProductId_k__BackingField, *(_QWORD *)(*(_QWORD *)v67 + 64LL));
      if ( !v67 )
      {
        v100 = sub_1C94314();
        sub_1C941C0(v100, 0);
      }
    }
    if ( !*(_DWORD *)(v69 + 24) )
      sub_1C942F8(v67);
    *(_QWORD *)(v69 + 32) = ProductId_k__BackingField;
    v71 = sub_1C9403C(v69 + 32, ProductId_k__BackingField);
    if ( !v7 )
      sub_1C942F0(v71, v72);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23589/*"setProductId"*/, (System_Object_array *)v69, 0);
  }
  if ( adjustEvent->fields.PurchaseToken )
  {
    v73 = sub_1C94140(object___TypeInfo, 1);
    v75 = v73;
    if ( !v73 )
      sub_1C942F0(0, v74);
    PurchaseToken = adjustEvent->fields.PurchaseToken;
    if ( PurchaseToken )
    {
      v73 = sub_1C941D4(PurchaseToken, *(_QWORD *)(*(_QWORD *)v73 + 64LL));
      if ( !v73 )
      {
        v101 = sub_1C94314();
        sub_1C941C0(v101, 0);
      }
    }
    if ( !*(_DWORD *)(v75 + 24) )
      sub_1C942F8(v73);
    *(_QWORD *)(v75 + 32) = PurchaseToken;
    v77 = sub_1C9403C(v75 + 32, PurchaseToken);
    if ( !v7 )
      sub_1C942F0(v77, v78);
    UnityEngine_AndroidJavaObject__Call(v7, (System_String_o *)StringLiteral_23593/*"setPurchaseToken"*/, (System_Object_array *)v75, 0);
  }
  v79 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v79 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v79->static_fields->ajcAdjust;
  v81 = sub_1C94140(object___TypeInfo, 1);
  v83 = v81;
  if ( !v81 )
    sub_1C942F0(0, v82);
  if ( v7 )
  {
    v81 = sub_1C941D4(v7, *(_QWORD *)(*(_QWORD *)v81 + 64LL));
    if ( !v81 )
    {
      v95 = sub_1C94314();
      sub_1C941C0(v95, 0);
    }
  }
  if ( !*(_DWORD *)(v83 + 24) )
    sub_1C942F8(v81);
  *(_QWORD *)(v83 + 32) = v7;
  v84 = sub_1C9403C(v83 + 32, v7);
  if ( !ajcAdjust )
    sub_1C942F0(v84, v85);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24393/*"trackEvent"*/,
    (System_Object_array *)v83,
    0);
  if ( v7 )
  {
    klass = v7->klass;
    v87 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v87;
        p_offset += 4;
        if ( !v87 )
          goto LABEL_88;
      }
      v89 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_88:
      v89 = sub_1C6A420(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v89)(v7, *(_QWORD *)(v89 + 8));
  }
}


void AdjustSdk_AdjustAndroid__TrackMeasurementConsent(bool measurementConsent, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v3; // x0
  bool v4; // w21
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  System_Object_array *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  bool v11[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D24A20 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&bool_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_24396/*"trackMeasurementConsent"*/);
    byte_4D24A20 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  v4 = measurementConsent;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v6 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
  v11[0] = v4;
  v7 = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  if ( !v6 )
    goto LABEL_11;
  v9 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1C941D4(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
    {
      v10 = sub_1C94314();
      sub_1C941C0(v10, 0);
    }
  }
  if ( !LODWORD(v6->max_length) )
    sub_1C942F8(v7);
  v6->m_Items[0] = v9;
  v7 = sub_1C9403C(v6->m_Items, v9);
  if ( !ajcAdjust )
LABEL_11:
    sub_1C942F0(v7, v8);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_24396/*"trackMeasurementConsent"*/, v6, 0);
}


void AdjustSdk_AdjustAndroid__TrackPlayStoreSubscription(
        AdjustSdk_AdjustPlayStoreSubscription_o *subscription,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_Object_array *v5; // x21
  System_String_o *Price_k__BackingField; // x19
  Il2CppObject *v7; // x19
  struct System_String_o *Currency_k__BackingField; // x19
  struct System_String_o *ProductId_k__BackingField; // x19
  struct System_String_o *OrderId_k__BackingField; // x19
  struct System_String_o *Signature_k__BackingField; // x19
  struct System_String_o *PurchaseToken_k__BackingField; // x19
  UnityEngine_AndroidJavaObject_o *v13; // x19
  const MethodInfo *v14; // x1
  System_Object_array *v15; // x21
  System_String_o *PurchaseTime_k__BackingField; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  int32_t i; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *CallbackParameters; // x0
  __int64 v25; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v26; // x0
  __int64 v27; // x1
  Il2CppObject *Item; // x24
  const MethodInfo *v29; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v30; // x0
  __int64 v31; // x1
  int32_t v32; // w21
  Il2CppObject *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  System_Object_array *v36; // x22
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x1
  int32_t j; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerParameters; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v45; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x24
  const MethodInfo *v48; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v49; // x0
  __int64 v50; // x1
  int32_t v51; // w21
  Il2CppObject *v52; // x23
  __int64 v53; // x0
  __int64 v54; // x1
  System_Object_array *v55; // x22
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  AdjustSdk_AdjustAndroid_c *v59; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x21
  __int64 v64; // x0
  __int64 v65; // x1
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v67; // x9
  int32_t *p_offset; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  int64_t v77; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D24A1E & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_1C94098(&StringLiteral_16746/*"addPartnerParameter"*/);
    sub_1C94098(&StringLiteral_23592/*"setPurchaseTime"*/);
    sub_1C94098(&StringLiteral_18164/*"com.adjust.sdk.AdjustPlayStoreSubscription"*/);
    sub_1C94098(&StringLiteral_16734/*"addCallbackParameter"*/);
    sub_1C94098(&StringLiteral_24397/*"trackPlayStoreSubscription"*/);
    byte_4D24A1E = 1;
  }
  v3 = sub_1C94140(object___TypeInfo, 6);
  if ( !subscription )
    goto LABEL_100;
  v5 = (System_Object_array *)v3;
  Price_k__BackingField = subscription->fields._Price_k__BackingField;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v77 = System_Convert__ToInt64_65505992(Price_k__BackingField, 0);
  v3 = j_il2cpp_value_box_0(long_TypeInfo, &v77);
  if ( !v5 )
LABEL_100:
    sub_1C942F0(v3, v4);
  v7 = (Il2CppObject *)v3;
  if ( v3 )
  {
    v3 = sub_1C941D4(v3, v5->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( !LODWORD(v5->max_length) )
    goto LABEL_98;
  v5->m_Items[0] = v7;
  v3 = sub_1C9403C(v5->m_Items, v7);
  Currency_k__BackingField = subscription->fields._Currency_k__BackingField;
  if ( Currency_k__BackingField )
  {
    v3 = sub_1C941D4(subscription->fields._Currency_k__BackingField, v5->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( LODWORD(v5->max_length) <= 1 )
    goto LABEL_98;
  v5->m_Items[1] = (Il2CppObject *)Currency_k__BackingField;
  v3 = sub_1C9403C(&v5->m_Items[1], Currency_k__BackingField);
  ProductId_k__BackingField = subscription->fields._ProductId_k__BackingField;
  if ( ProductId_k__BackingField )
  {
    v3 = sub_1C941D4(subscription->fields._ProductId_k__BackingField, v5->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( LODWORD(v5->max_length) <= 2 )
    goto LABEL_98;
  v5->m_Items[2] = (Il2CppObject *)ProductId_k__BackingField;
  v3 = sub_1C9403C(&v5->m_Items[2], ProductId_k__BackingField);
  OrderId_k__BackingField = subscription->fields._OrderId_k__BackingField;
  if ( OrderId_k__BackingField )
  {
    v3 = sub_1C941D4(subscription->fields._OrderId_k__BackingField, v5->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( LODWORD(v5->max_length) <= 3 )
    goto LABEL_98;
  v5->m_Items[3] = (Il2CppObject *)OrderId_k__BackingField;
  v3 = sub_1C9403C(&v5->m_Items[3], OrderId_k__BackingField);
  Signature_k__BackingField = subscription->fields._Signature_k__BackingField;
  if ( Signature_k__BackingField )
  {
    v3 = sub_1C941D4(subscription->fields._Signature_k__BackingField, v5->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( LODWORD(v5->max_length) <= 4 )
    goto LABEL_98;
  v5->m_Items[4] = (Il2CppObject *)Signature_k__BackingField;
  v3 = sub_1C9403C(&v5->m_Items[4], Signature_k__BackingField);
  PurchaseToken_k__BackingField = subscription->fields._PurchaseToken_k__BackingField;
  if ( PurchaseToken_k__BackingField )
  {
    v3 = sub_1C941D4(subscription->fields._PurchaseToken_k__BackingField, v5->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_99:
      v74 = sub_1C94314();
      sub_1C941C0(v74, 0);
    }
  }
  if ( LODWORD(v5->max_length) <= 5 )
LABEL_98:
    sub_1C942F8(v3);
  v5->m_Items[5] = (Il2CppObject *)PurchaseToken_k__BackingField;
  sub_1C9403C(&v5->m_Items[5], PurchaseToken_k__BackingField);
  v13 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(v13, (System_String_o *)StringLiteral_18164/*"com.adjust.sdk.AdjustPlayStoreSubscription"*/, v5, 0);
  if ( subscription->fields._PurchaseTime_k__BackingField )
  {
    v15 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    PurchaseTime_k__BackingField = subscription->fields._PurchaseTime_k__BackingField;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v77 = System_Convert__ToInt64_65505992(PurchaseTime_k__BackingField, 0);
    v17 = j_il2cpp_value_box_0(long_TypeInfo, &v77);
    if ( !v15 )
      sub_1C942F0(v17, v18);
    v19 = (Il2CppObject *)v17;
    if ( v17 )
    {
      v17 = sub_1C941D4(v17, v15->obj.klass->_1.element_class);
      if ( !v17 )
      {
        v76 = sub_1C94314();
        sub_1C941C0(v76, 0);
      }
    }
    if ( !LODWORD(v15->max_length) )
      sub_1C942F8(v17);
    v15->m_Items[0] = v19;
    v20 = sub_1C9403C(v15->m_Items, v19);
    if ( !v13 )
      sub_1C942F0(v20, v21);
    UnityEngine_AndroidJavaObject__Call(v13, (System_String_o *)StringLiteral_23592/*"setPurchaseTime"*/, v15, 0);
  }
  if ( AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(subscription, v14) )
  {
    for ( i = 0; ; i = v32 + 1 )
    {
      CallbackParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(
                                                                                       subscription,
                                                                                       v22);
      if ( !CallbackParameters )
        sub_1C942F0(0, v25);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  CallbackParameters,
                  (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v26 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(
                                                                        subscription,
                                                                        v22);
      if ( !v26 )
        sub_1C942F0(0, v27);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v26,
               i,
               (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v30 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(
                                                                        subscription,
                                                                        v29);
      if ( !v30 )
        sub_1C942F0(0, v31);
      v32 = i + 1;
      v33 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v30,
              v32,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v34 = sub_1C94140(object___TypeInfo, 2);
      v36 = (System_Object_array *)v34;
      if ( !v34 )
        sub_1C942F0(0, v35);
      if ( Item )
      {
        v34 = sub_1C941D4(Item, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !v34 )
        {
          v71 = sub_1C94314();
          sub_1C941C0(v71, 0);
        }
      }
      if ( !LODWORD(v36->max_length) )
        sub_1C942F8(v34);
      v36->m_Items[0] = Item;
      v37 = sub_1C9403C(v36->m_Items, Item);
      if ( v33 )
      {
        v37 = sub_1C941D4(v33, v36->obj.klass->_1.element_class);
        if ( !v37 )
        {
          v70 = sub_1C94314();
          sub_1C941C0(v70, 0);
        }
      }
      if ( LODWORD(v36->max_length) <= 1 )
        sub_1C942F8(v37);
      v36->m_Items[1] = v33;
      v38 = sub_1C9403C(&v36->m_Items[1], v33);
      if ( !v13 )
        sub_1C942F0(v38, v39);
      UnityEngine_AndroidJavaObject__Call(v13, (System_String_o *)StringLiteral_16734/*"addCallbackParameter"*/, v36, 0);
    }
  }
  if ( AdjustSdk_AdjustPlayStoreSubscription__get_PartnerParameters(subscription, v22) )
  {
    for ( j = 0; ; j = v51 + 1 )
    {
      PartnerParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_PartnerParameters(
                                                                                      subscription,
                                                                                      v40);
      if ( !PartnerParameters )
        sub_1C942F0(0, v43);
      if ( j >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerParameters,
                  (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v45 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_PartnerParameters(
                                                                        subscription,
                                                                        v44);
      if ( !v45 )
        sub_1C942F0(0, v46);
      v47 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v45,
              j,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v49 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_PartnerParameters(
                                                                        subscription,
                                                                        v48);
      if ( !v49 )
        sub_1C942F0(0, v50);
      v51 = j + 1;
      v52 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v49,
              v51,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v53 = sub_1C94140(object___TypeInfo, 2);
      v55 = (System_Object_array *)v53;
      if ( !v53 )
        sub_1C942F0(0, v54);
      if ( v47 )
      {
        v53 = sub_1C941D4(v47, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
        if ( !v53 )
        {
          v73 = sub_1C94314();
          sub_1C941C0(v73, 0);
        }
      }
      if ( !LODWORD(v55->max_length) )
        sub_1C942F8(v53);
      v55->m_Items[0] = v47;
      v56 = sub_1C9403C(v55->m_Items, v47);
      if ( v52 )
      {
        v56 = sub_1C941D4(v52, v55->obj.klass->_1.element_class);
        if ( !v56 )
        {
          v72 = sub_1C94314();
          sub_1C941C0(v72, 0);
        }
      }
      if ( LODWORD(v55->max_length) <= 1 )
        sub_1C942F8(v56);
      v55->m_Items[1] = v52;
      v57 = sub_1C9403C(&v55->m_Items[1], v52);
      if ( !v13 )
        sub_1C942F0(v57, v58);
      UnityEngine_AndroidJavaObject__Call(v13, (System_String_o *)StringLiteral_16746/*"addPartnerParameter"*/, v55, 0);
    }
  }
  v59 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v59 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v59->static_fields->ajcAdjust;
  v61 = sub_1C94140(object___TypeInfo, 1);
  v63 = v61;
  if ( !v61 )
    sub_1C942F0(0, v62);
  if ( v13 )
  {
    v61 = sub_1C941D4(v13, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
    if ( !v61 )
    {
      v75 = sub_1C94314();
      sub_1C941C0(v75, 0);
    }
  }
  if ( !*(_DWORD *)(v63 + 24) )
    sub_1C942F8(v61);
  *(_QWORD *)(v63 + 32) = v13;
  v64 = sub_1C9403C(v63 + 32, v13);
  if ( !ajcAdjust )
    sub_1C942F0(v64, v65);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24397/*"trackPlayStoreSubscription"*/,
    (System_Object_array *)v63,
    0);
  if ( v13 )
  {
    klass = v13->klass;
    v67 = *(unsigned __int16 *)&v13->klass->_2.rank;
    if ( *(_WORD *)&v13->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v67;
        p_offset += 4;
        if ( !v67 )
          goto LABEL_76;
      }
      v69 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_76:
      v69 = sub_1C6A420(v13, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v69)(v13, *(_QWORD *)(v69 + 8));
  }
}


void AdjustSdk_AdjustAndroid__TrackThirdPartySharing(
        AdjustSdk_AdjustThirdPartySharing_o *thirdPartySharing,
        const MethodInfo *method)
{
  AdjustSdk_AdjustThirdPartySharing_o *v2; // x20
  System_Object_array *v3; // x21
  System_Object_array *v4; // x19
  struct System_Nullable_bool__o *p_IsEnabled_k__BackingField; // x0
  AdjustSdk_AdjustThirdPartySharing_o *v6; // x22
  UnityEngine_AndroidJavaObject_o *v7; // x22
  UnityEngine_AndroidJavaObject_o *v8; // x19
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int32_t v11; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *GranularOptions; // x0
  __int64 v13; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v14; // x0
  __int64 v15; // x1
  Il2CppObject *Item; // x25
  const MethodInfo *v17; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v18; // x0
  __int64 v19; // x1
  int32_t v20; // w21
  Il2CppObject *v21; // x24
  const MethodInfo *v22; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v23; // x0
  __int64 v24; // x1
  int32_t v25; // w21
  Il2CppObject *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  System_Object_array *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x1
  int32_t i; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerSharingSettings; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x25
  const MethodInfo *v42; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v43; // x0
  __int64 v44; // x1
  int32_t v45; // w21
  Il2CppObject *v46; // x23
  const MethodInfo *v47; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v48; // x0
  __int64 v49; // x1
  int32_t v50; // w21
  Il2CppObject *v51; // x24
  __int64 v52; // x0
  __int64 v53; // x1
  System_Object_array *v54; // x22
  __int64 v55; // x0
  __int64 v56; // x0
  Il2CppObject *v57; // x23
  __int64 v58; // x0
  __int64 v59; // x1
  AdjustSdk_AdjustAndroid_c *v60; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x21
  __int64 v65; // x0
  __int64 v66; // x1
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x0
  bool v79[4]; // [xsp+4h] [xbp-6Ch] BYREF
  bool v80[4]; // [xsp+8h] [xbp-68h] BYREF
  struct System_Nullable_bool__o IsEnabled_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF

  v2 = thirdPartySharing;
  if ( (byte_4D24A1F & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&bool_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_bool__get_Value__);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_1C94098(&StringLiteral_21244/*"java.lang.Boolean"*/);
    sub_1C94098(&StringLiteral_18167/*"com.adjust.sdk.AdjustThirdPartySharing"*/);
    sub_1C94098(&StringLiteral_16747/*"addPartnerSharingSetting"*/);
    sub_1C94098(&StringLiteral_16740/*"addGranularOption"*/);
    thirdPartySharing = (AdjustSdk_AdjustThirdPartySharing_o *)sub_1C94098(&StringLiteral_24401/*"trackThirdPartySharing"*/);
    byte_4D24A1F = 1;
  }
  if ( !v2 )
    goto LABEL_94;
  IsEnabled_k__BackingField = v2->fields._IsEnabled_k__BackingField;
  v3 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
  if ( !IsEnabled_k__BackingField.fields.hasValue )
    goto LABEL_14;
  v4 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
  p_IsEnabled_k__BackingField = &IsEnabled_k__BackingField;
  IsEnabled_k__BackingField = v2->fields._IsEnabled_k__BackingField;
  v80[0] = System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_IsEnabled_k__BackingField,
             (const MethodInfo_398FCA8 *)Method_System_Nullable_bool__get_Value__);
  thirdPartySharing = (AdjustSdk_AdjustThirdPartySharing_o *)j_il2cpp_value_box_0(bool_TypeInfo, v80);
  if ( !v4 )
    goto LABEL_94;
  v6 = thirdPartySharing;
  if ( thirdPartySharing )
  {
    thirdPartySharing = (AdjustSdk_AdjustThirdPartySharing_o *)sub_1C941D4(
                                                                 thirdPartySharing,
                                                                 v4->obj.klass->_1.element_class);
    if ( !thirdPartySharing )
    {
LABEL_99:
      v77 = sub_1C94314();
      sub_1C941C0(v77, 0);
    }
  }
  if ( !LODWORD(v4->max_length) )
    goto LABEL_95;
  v4->m_Items[0] = (Il2CppObject *)v6;
  sub_1C9403C(v4->m_Items, v6);
  v7 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(v7, (System_String_o *)StringLiteral_21244/*"java.lang.Boolean"*/, v4, 0);
  if ( !v3 )
LABEL_94:
    sub_1C942F0(thirdPartySharing, method);
  if ( v7 )
  {
    thirdPartySharing = (AdjustSdk_AdjustThirdPartySharing_o *)sub_1C941D4(v7, v3->obj.klass->_1.element_class);
    if ( !thirdPartySharing )
      goto LABEL_99;
  }
  if ( !LODWORD(v3->max_length) )
LABEL_95:
    sub_1C942F8(thirdPartySharing);
  v3->m_Items[0] = (Il2CppObject *)v7;
  sub_1C9403C(v3->m_Items, v7);
LABEL_14:
  v8 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(v8, (System_String_o *)StringLiteral_18167/*"com.adjust.sdk.AdjustThirdPartySharing"*/, v3, 0);
  if ( AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(v2, v9) )
  {
    v11 = 0;
    while ( 1 )
    {
      GranularOptions = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
                                                                                    v2,
                                                                                    v10);
      if ( !GranularOptions )
        sub_1C942F0(0, v13);
      if ( v11 >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                    GranularOptions,
                    (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v14 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
                                                                        v2,
                                                                        v10);
      if ( !v14 )
        sub_1C942F0(0, v15);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v14,
               v11,
               (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v18 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
                                                                        v2,
                                                                        v17);
      if ( !v18 )
        sub_1C942F0(0, v19);
      v20 = v11 + 1;
      v21 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v18,
              v20,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v23 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
                                                                        v2,
                                                                        v22);
      if ( !v23 )
        sub_1C942F0(0, v24);
      v25 = v20 + 1;
      v26 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v23,
              v25,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v27 = sub_1C94140(object___TypeInfo, 3);
      v29 = (System_Object_array *)v27;
      if ( !v27 )
        sub_1C942F0(0, v28);
      if ( Item )
      {
        v27 = sub_1C941D4(Item, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
        if ( !v27 )
        {
          v73 = sub_1C94314();
          sub_1C941C0(v73, 0);
        }
      }
      if ( !LODWORD(v29->max_length) )
        sub_1C942F8(v27);
      v29->m_Items[0] = Item;
      v30 = sub_1C9403C(v29->m_Items, Item);
      if ( v21 )
      {
        v30 = sub_1C941D4(v21, v29->obj.klass->_1.element_class);
        if ( !v30 )
        {
          v72 = sub_1C94314();
          sub_1C941C0(v72, 0);
        }
      }
      if ( LODWORD(v29->max_length) <= 1 )
        sub_1C942F8(v30);
      v29->m_Items[1] = v21;
      v31 = sub_1C9403C(&v29->m_Items[1], v21);
      if ( v26 )
      {
        v31 = sub_1C941D4(v26, v29->obj.klass->_1.element_class);
        if ( !v31 )
        {
          v71 = sub_1C94314();
          sub_1C941C0(v71, 0);
        }
      }
      if ( LODWORD(v29->max_length) <= 2 )
        sub_1C942F8(v31);
      v29->m_Items[2] = v26;
      v32 = sub_1C9403C(&v29->m_Items[2], v26);
      if ( !v8 )
        sub_1C942F0(v32, v33);
      v11 = v25 + 1;
      UnityEngine_AndroidJavaObject__Call(v8, (System_String_o *)StringLiteral_16740/*"addGranularOption"*/, v29, 0);
    }
  }
  if ( AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(v2, v10) )
  {
    for ( i = 0; ; i = v50 + 1 )
    {
      PartnerSharingSettings = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(
                                                                                           v2,
                                                                                           v34);
      if ( !PartnerSharingSettings )
        sub_1C942F0(0, v37);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerSharingSettings,
                  (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v39 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(
                                                                        v2,
                                                                        v38);
      if ( !v39 )
        sub_1C942F0(0, v40);
      v41 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v39,
              i,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v43 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(
                                                                        v2,
                                                                        v42);
      if ( !v43 )
        sub_1C942F0(0, v44);
      v45 = i + 1;
      v46 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v43,
              v45,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v48 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(
                                                                        v2,
                                                                        v47);
      if ( !v48 )
        sub_1C942F0(0, v49);
      v50 = v45 + 1;
      v51 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v48,
              v50,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v52 = sub_1C94140(object___TypeInfo, 3);
      v54 = (System_Object_array *)v52;
      if ( !v52 )
        sub_1C942F0(0, v53);
      if ( v41 )
      {
        v52 = sub_1C941D4(v41, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
        if ( !v52 )
        {
          v74 = sub_1C94314();
          sub_1C941C0(v74, 0);
        }
      }
      if ( !LODWORD(v54->max_length) )
        sub_1C942F8(v52);
      v54->m_Items[0] = v41;
      v55 = sub_1C9403C(v54->m_Items, v41);
      if ( v46 )
      {
        v55 = sub_1C941D4(v46, v54->obj.klass->_1.element_class);
        if ( !v55 )
        {
          v76 = sub_1C94314();
          sub_1C941C0(v76, 0);
        }
      }
      if ( LODWORD(v54->max_length) <= 1 )
        sub_1C942F8(v55);
      v54->m_Items[1] = v46;
      sub_1C9403C(&v54->m_Items[1], v46);
      if ( !bool_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(bool_TypeInfo);
      v79[0] = System_Boolean__Parse((System_String_o *)v51, 0);
      v56 = j_il2cpp_value_box_0(bool_TypeInfo, v79);
      v57 = (Il2CppObject *)v56;
      if ( v56 )
      {
        v56 = sub_1C941D4(v56, v54->obj.klass->_1.element_class);
        if ( !v56 )
        {
          v75 = sub_1C94314();
          sub_1C941C0(v75, 0);
        }
      }
      if ( LODWORD(v54->max_length) <= 2 )
        sub_1C942F8(v56);
      v54->m_Items[2] = v57;
      v58 = sub_1C9403C(&v54->m_Items[2], v57);
      if ( !v8 )
        sub_1C942F0(v58, v59);
      UnityEngine_AndroidJavaObject__Call(v8, (System_String_o *)StringLiteral_16747/*"addPartnerSharingSetting"*/, v54, 0);
    }
  }
  v60 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v60 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v60->static_fields->ajcAdjust;
  v62 = sub_1C94140(object___TypeInfo, 1);
  v64 = v62;
  if ( !v62 )
    sub_1C942F0(0, v63);
  if ( v8 )
  {
    v62 = sub_1C941D4(v8, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
    if ( !v62 )
    {
      v78 = sub_1C94314();
      sub_1C941C0(v78, 0);
    }
  }
  if ( !*(_DWORD *)(v64 + 24) )
    sub_1C942F8(v62);
  *(_QWORD *)(v64 + 32) = v8;
  v65 = sub_1C9403C(v64 + 32, v8);
  if ( !ajcAdjust )
    sub_1C942F0(v65, v66);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24401/*"trackThirdPartySharing"*/,
    (System_Object_array *)v64,
    0);
  if ( v8 )
  {
    klass = v8->klass;
    v68 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v68;
        p_offset += 4;
        if ( !v68 )
          goto LABEL_66;
      }
      v70 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_66:
      v70 = sub_1C6A420(v8, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v70)(v8, *(_QWORD *)(v70 + 8));
  }
}


void AdjustSdk_AdjustAndroid__VerifyAndTrackPlayStorePurchase(
        AdjustSdk_AdjustEvent_o *adjustEvent,
        System_Action_AdjustPurchaseVerificationResult__o *verificationInfoCallback,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_VerificationResultListener_o *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  struct System_String_o *EventToken_k__BackingField; // x19
  UnityEngine_AndroidJavaObject_o *v11; // x19
  const MethodInfo *v12; // x1
  System_Object_array *v13; // x22
  const MethodInfo_3992088 *v14; // x2
  __int64 v15; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x23
  __int64 v18; // x0
  struct System_String_o *Currency_k__BackingField; // x23
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  int32_t i; // w22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *CallbackParameters; // x0
  __int64 v25; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v26; // x0
  __int64 v27; // x1
  Il2CppObject *Item; // x25
  const MethodInfo *v29; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v30; // x0
  __int64 v31; // x1
  int32_t v32; // w22
  Il2CppObject *v33; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  System_Object_array *v36; // x23
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x1
  int32_t j; // w22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerParameters; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v45; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x25
  const MethodInfo *v48; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v49; // x0
  __int64 v50; // x1
  int32_t v51; // w22
  Il2CppObject *v52; // x24
  __int64 v53; // x0
  __int64 v54; // x1
  System_Object_array *v55; // x23
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x22
  struct System_String_o *DeduplicationId_k__BackingField; // x23
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x22
  struct System_String_o *CallbackId_k__BackingField; // x23
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x22
  struct System_String_o *ProductId_k__BackingField; // x23
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x22
  struct System_String_o *PurchaseToken; // x21
  __int64 v81; // x0
  __int64 v82; // x1
  AdjustSdk_AdjustAndroid_c *v83; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x21
  __int64 v85; // x0
  __int64 v86; // x1
  System_Object_array *v87; // x22
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v92; // x9
  int32_t *p_offset; // x10
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  double Value; // [xsp+8h] [xbp-78h] BYREF
  struct System_Nullable_double__o Revenue_k__BackingField; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_double__o v110; // 0:x0.16

  if ( (byte_4D24A2E & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&double_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Nullable_double__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_double__get_Value__);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_VerificationResultListener_TypeInfo);
    sub_1C94098(&StringLiteral_16746/*"addPartnerParameter"*/);
    sub_1C94098(&StringLiteral_23553/*"setDeduplicationId"*/);
    sub_1C94098(&StringLiteral_23593/*"setPurchaseToken"*/);
    sub_1C94098(&StringLiteral_23545/*"setCallbackId"*/);
    sub_1C94098(&StringLiteral_23589/*"setProductId"*/);
    sub_1C94098(&StringLiteral_16734/*"addCallbackParameter"*/);
    sub_1C94098(&StringLiteral_24901/*"verifyAndTrackPlayStorePurchase"*/);
    sub_1C94098(&StringLiteral_18162/*"com.adjust.sdk.AdjustEvent"*/);
    sub_1C94098(&StringLiteral_23597/*"setRevenue"*/);
    byte_4D24A2E = 1;
  }
  Revenue_k__BackingField = (struct System_Nullable_double__o)0LL;
  v5 = (AdjustSdk_AdjustAndroid_VerificationResultListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_VerificationResultListener_TypeInfo);
  AdjustSdk_AdjustAndroid_VerificationResultListener___ctor(v5, verificationInfoCallback, v6);
  v7 = sub_1C94140(object___TypeInfo, 1);
  if ( !adjustEvent || (v9 = v7) == 0 )
    sub_1C942F0(v7, v8);
  EventToken_k__BackingField = adjustEvent->fields._EventToken_k__BackingField;
  if ( EventToken_k__BackingField )
  {
    v7 = sub_1C941D4(adjustEvent->fields._EventToken_k__BackingField, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v99 = sub_1C94314();
      sub_1C941C0(v99, 0);
    }
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C942F8(v7);
  *(_QWORD *)(v9 + 32) = EventToken_k__BackingField;
  sub_1C9403C(v9 + 32, EventToken_k__BackingField);
  v11 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(
    v11,
    (System_String_o *)StringLiteral_18162/*"com.adjust.sdk.AdjustEvent"*/,
    (System_Object_array *)v9,
    0);
  Revenue_k__BackingField = adjustEvent->fields._Revenue_k__BackingField;
  if ( Revenue_k__BackingField.fields.hasValue )
  {
    v13 = (System_Object_array *)sub_1C94140(object___TypeInfo, 2);
    *(_QWORD *)&v110.fields.value = Method_System_Nullable_double__get_Value__;
    Revenue_k__BackingField = adjustEvent->fields._Revenue_k__BackingField;
    *(_QWORD *)&v110.fields.hasValue = &Revenue_k__BackingField;
    Value = System_Nullable_double___get_Value(v110, v14);
    v15 = j_il2cpp_value_box_0(double_TypeInfo, &Value);
    if ( !v13 )
      sub_1C942F0(v15, v16);
    v17 = (Il2CppObject *)v15;
    if ( v15 )
    {
      v15 = sub_1C941D4(v15, v13->obj.klass->_1.element_class);
      if ( !v15 )
      {
        v102 = sub_1C94314();
        sub_1C941C0(v102, 0);
      }
    }
    if ( !LODWORD(v13->max_length) )
      sub_1C942F8(v15);
    v13->m_Items[0] = v17;
    v18 = sub_1C9403C(v13->m_Items, v17);
    Currency_k__BackingField = adjustEvent->fields._Currency_k__BackingField;
    if ( Currency_k__BackingField )
    {
      v18 = sub_1C941D4(adjustEvent->fields._Currency_k__BackingField, v13->obj.klass->_1.element_class);
      if ( !v18 )
      {
        v103 = sub_1C94314();
        sub_1C941C0(v103, 0);
      }
    }
    if ( LODWORD(v13->max_length) <= 1 )
      sub_1C942F8(v18);
    v13->m_Items[1] = (Il2CppObject *)Currency_k__BackingField;
    v20 = sub_1C9403C(&v13->m_Items[1], Currency_k__BackingField);
    if ( !v11 )
      sub_1C942F0(v20, v21);
    UnityEngine_AndroidJavaObject__Call(v11, (System_String_o *)StringLiteral_23597/*"setRevenue"*/, v13, 0);
  }
  if ( AdjustSdk_AdjustEvent__get_CallbackParameters(adjustEvent, v12) )
  {
    for ( i = 0; ; i = v32 + 1 )
    {
      CallbackParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                                       adjustEvent,
                                                                                       v22);
      if ( !CallbackParameters )
        sub_1C942F0(0, v25);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  CallbackParameters,
                  (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v26 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                        adjustEvent,
                                                                        v22);
      if ( !v26 )
        sub_1C942F0(0, v27);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v26,
               i,
               (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v30 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                        adjustEvent,
                                                                        v29);
      if ( !v30 )
        sub_1C942F0(0, v31);
      v32 = i + 1;
      v33 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v30,
              v32,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v34 = sub_1C94140(object___TypeInfo, 2);
      v36 = (System_Object_array *)v34;
      if ( !v34 )
        sub_1C942F0(0, v35);
      if ( Item )
      {
        v34 = sub_1C941D4(Item, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !v34 )
        {
          v96 = sub_1C94314();
          sub_1C941C0(v96, 0);
        }
      }
      if ( !LODWORD(v36->max_length) )
        sub_1C942F8(v34);
      v36->m_Items[0] = Item;
      v37 = sub_1C9403C(v36->m_Items, Item);
      if ( v33 )
      {
        v37 = sub_1C941D4(v33, v36->obj.klass->_1.element_class);
        if ( !v37 )
        {
          v95 = sub_1C94314();
          sub_1C941C0(v95, 0);
        }
      }
      if ( LODWORD(v36->max_length) <= 1 )
        sub_1C942F8(v37);
      v36->m_Items[1] = v33;
      v38 = sub_1C9403C(&v36->m_Items[1], v33);
      if ( !v11 )
        sub_1C942F0(v38, v39);
      UnityEngine_AndroidJavaObject__Call(v11, (System_String_o *)StringLiteral_16734/*"addCallbackParameter"*/, v36, 0);
    }
  }
  if ( AdjustSdk_AdjustEvent__get_PartnerParameters(adjustEvent, v22) )
  {
    for ( j = 0; ; j = v51 + 1 )
    {
      PartnerParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                                      adjustEvent,
                                                                                      v40);
      if ( !PartnerParameters )
        sub_1C942F0(0, v43);
      if ( j >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerParameters,
                  (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v45 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                        adjustEvent,
                                                                        v44);
      if ( !v45 )
        sub_1C942F0(0, v46);
      v47 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v45,
              j,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v49 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                        adjustEvent,
                                                                        v48);
      if ( !v49 )
        sub_1C942F0(0, v50);
      v51 = j + 1;
      v52 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v49,
              v51,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v53 = sub_1C94140(object___TypeInfo, 2);
      v55 = (System_Object_array *)v53;
      if ( !v53 )
        sub_1C942F0(0, v54);
      if ( v47 )
      {
        v53 = sub_1C941D4(v47, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
        if ( !v53 )
        {
          v98 = sub_1C94314();
          sub_1C941C0(v98, 0);
        }
      }
      if ( !LODWORD(v55->max_length) )
        sub_1C942F8(v53);
      v55->m_Items[0] = v47;
      v56 = sub_1C9403C(v55->m_Items, v47);
      if ( v52 )
      {
        v56 = sub_1C941D4(v52, v55->obj.klass->_1.element_class);
        if ( !v56 )
        {
          v97 = sub_1C94314();
          sub_1C941C0(v97, 0);
        }
      }
      if ( LODWORD(v55->max_length) <= 1 )
        sub_1C942F8(v56);
      v55->m_Items[1] = v52;
      v57 = sub_1C9403C(&v55->m_Items[1], v52);
      if ( !v11 )
        sub_1C942F0(v57, v58);
      UnityEngine_AndroidJavaObject__Call(v11, (System_String_o *)StringLiteral_16746/*"addPartnerParameter"*/, v55, 0);
    }
  }
  if ( adjustEvent->fields._DeduplicationId_k__BackingField )
  {
    v59 = sub_1C94140(object___TypeInfo, 1);
    v61 = v59;
    if ( !v59 )
      sub_1C942F0(0, v60);
    DeduplicationId_k__BackingField = adjustEvent->fields._DeduplicationId_k__BackingField;
    if ( DeduplicationId_k__BackingField )
    {
      v59 = sub_1C941D4(adjustEvent->fields._DeduplicationId_k__BackingField, *(_QWORD *)(*(_QWORD *)v59 + 64LL));
      if ( !v59 )
      {
        v104 = sub_1C94314();
        sub_1C941C0(v104, 0);
      }
    }
    if ( !*(_DWORD *)(v61 + 24) )
      sub_1C942F8(v59);
    *(_QWORD *)(v61 + 32) = DeduplicationId_k__BackingField;
    v63 = sub_1C9403C(v61 + 32, DeduplicationId_k__BackingField);
    if ( !v11 )
      sub_1C942F0(v63, v64);
    UnityEngine_AndroidJavaObject__Call(v11, (System_String_o *)StringLiteral_23553/*"setDeduplicationId"*/, (System_Object_array *)v61, 0);
  }
  if ( adjustEvent->fields._CallbackId_k__BackingField )
  {
    v65 = sub_1C94140(object___TypeInfo, 1);
    v67 = v65;
    if ( !v65 )
      sub_1C942F0(0, v66);
    CallbackId_k__BackingField = adjustEvent->fields._CallbackId_k__BackingField;
    if ( CallbackId_k__BackingField )
    {
      v65 = sub_1C941D4(adjustEvent->fields._CallbackId_k__BackingField, *(_QWORD *)(*(_QWORD *)v65 + 64LL));
      if ( !v65 )
      {
        v105 = sub_1C94314();
        sub_1C941C0(v105, 0);
      }
    }
    if ( !*(_DWORD *)(v67 + 24) )
      sub_1C942F8(v65);
    *(_QWORD *)(v67 + 32) = CallbackId_k__BackingField;
    v69 = sub_1C9403C(v67 + 32, CallbackId_k__BackingField);
    if ( !v11 )
      sub_1C942F0(v69, v70);
    UnityEngine_AndroidJavaObject__Call(v11, (System_String_o *)StringLiteral_23545/*"setCallbackId"*/, (System_Object_array *)v67, 0);
  }
  if ( adjustEvent->fields._ProductId_k__BackingField )
  {
    v71 = sub_1C94140(object___TypeInfo, 1);
    v73 = v71;
    if ( !v71 )
      sub_1C942F0(0, v72);
    ProductId_k__BackingField = adjustEvent->fields._ProductId_k__BackingField;
    if ( ProductId_k__BackingField )
    {
      v71 = sub_1C941D4(adjustEvent->fields._ProductId_k__BackingField, *(_QWORD *)(*(_QWORD *)v71 + 64LL));
      if ( !v71 )
      {
        v106 = sub_1C94314();
        sub_1C941C0(v106, 0);
      }
    }
    if ( !*(_DWORD *)(v73 + 24) )
      sub_1C942F8(v71);
    *(_QWORD *)(v73 + 32) = ProductId_k__BackingField;
    v75 = sub_1C9403C(v73 + 32, ProductId_k__BackingField);
    if ( !v11 )
      sub_1C942F0(v75, v76);
    UnityEngine_AndroidJavaObject__Call(v11, (System_String_o *)StringLiteral_23589/*"setProductId"*/, (System_Object_array *)v73, 0);
  }
  if ( adjustEvent->fields.PurchaseToken )
  {
    v77 = sub_1C94140(object___TypeInfo, 1);
    v79 = v77;
    if ( !v77 )
      sub_1C942F0(0, v78);
    PurchaseToken = adjustEvent->fields.PurchaseToken;
    if ( PurchaseToken )
    {
      v77 = sub_1C941D4(PurchaseToken, *(_QWORD *)(*(_QWORD *)v77 + 64LL));
      if ( !v77 )
      {
        v107 = sub_1C94314();
        sub_1C941C0(v107, 0);
      }
    }
    if ( !*(_DWORD *)(v79 + 24) )
      sub_1C942F8(v77);
    *(_QWORD *)(v79 + 32) = PurchaseToken;
    v81 = sub_1C9403C(v79 + 32, PurchaseToken);
    if ( !v11 )
      sub_1C942F0(v81, v82);
    UnityEngine_AndroidJavaObject__Call(v11, (System_String_o *)StringLiteral_23593/*"setPurchaseToken"*/, (System_Object_array *)v79, 0);
  }
  v83 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v83 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v83->static_fields->ajcAdjust;
  v85 = sub_1C94140(object___TypeInfo, 2);
  v87 = (System_Object_array *)v85;
  if ( !v85 )
    sub_1C942F0(0, v86);
  if ( v11 )
  {
    v85 = sub_1C941D4(v11, *(_QWORD *)(*(_QWORD *)v85 + 64LL));
    if ( !v85 )
    {
      v100 = sub_1C94314();
      sub_1C941C0(v100, 0);
    }
  }
  if ( !LODWORD(v87->max_length) )
    sub_1C942F8(v85);
  v87->m_Items[0] = (Il2CppObject *)v11;
  v88 = sub_1C9403C(v87->m_Items, v11);
  if ( v5 )
  {
    v88 = sub_1C941D4(v5, v87->obj.klass->_1.element_class);
    if ( !v88 )
    {
      v101 = sub_1C94314();
      sub_1C941C0(v101, 0);
    }
  }
  if ( LODWORD(v87->max_length) <= 1 )
    sub_1C942F8(v88);
  v87->m_Items[1] = (Il2CppObject *)v5;
  v89 = sub_1C9403C(&v87->m_Items[1], v5);
  if ( !ajcAdjust )
    sub_1C942F0(v89, v90);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_24901/*"verifyAndTrackPlayStorePurchase"*/, v87, 0);
  if ( v11 )
  {
    klass = v11->klass;
    v92 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v92;
        p_offset += 4;
        if ( !v92 )
          goto LABEL_91;
      }
      v94 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_91:
      v94 = sub_1C6A420(v11, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v94)(v11, *(_QWORD *)(v94 + 8));
  }
}


void AdjustSdk_AdjustAndroid__VerifyPlayStorePurchase(
        AdjustSdk_AdjustPlayStorePurchase_o *purchase,
        System_Action_AdjustPurchaseVerificationResult__o *verificationInfoCallback,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_VerificationResultListener_o *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  System_Object_array *v9; // x21
  struct System_String_o *ProductId_k__BackingField; // x22
  struct System_String_o *PurchaseToken_k__BackingField; // x19
  UnityEngine_AndroidJavaObject_o *v12; // x19
  AdjustSdk_AdjustAndroid_c *v13; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Object_array *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_4D24A2C & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_VerificationResultListener_TypeInfo);
    sub_1C94098(&StringLiteral_24902/*"verifyPlayStorePurchase"*/);
    sub_1C94098(&StringLiteral_18163/*"com.adjust.sdk.AdjustPlayStorePurchase"*/);
    byte_4D24A2C = 1;
  }
  v5 = (AdjustSdk_AdjustAndroid_VerificationResultListener_o *)sub_1C942E4(AdjustSdk_AdjustAndroid_VerificationResultListener_TypeInfo);
  AdjustSdk_AdjustAndroid_VerificationResultListener___ctor(v5, verificationInfoCallback, v6);
  v7 = sub_1C94140(object___TypeInfo, 2);
  if ( !purchase || (v9 = (System_Object_array *)v7) == 0 )
    sub_1C942F0(v7, v8);
  ProductId_k__BackingField = purchase->fields._ProductId_k__BackingField;
  if ( ProductId_k__BackingField )
  {
    v7 = sub_1C941D4(purchase->fields._ProductId_k__BackingField, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
      goto LABEL_32;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_31;
  v9->m_Items[0] = (Il2CppObject *)ProductId_k__BackingField;
  v7 = sub_1C9403C(v9->m_Items, ProductId_k__BackingField);
  PurchaseToken_k__BackingField = purchase->fields._PurchaseToken_k__BackingField;
  if ( PurchaseToken_k__BackingField )
  {
    v7 = sub_1C941D4(PurchaseToken_k__BackingField, v9->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_32:
      v25 = sub_1C94314();
      sub_1C941C0(v25, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 1 )
LABEL_31:
    sub_1C942F8(v7);
  v9->m_Items[1] = (Il2CppObject *)PurchaseToken_k__BackingField;
  sub_1C9403C(&v9->m_Items[1], PurchaseToken_k__BackingField);
  v12 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(v12, (System_String_o *)StringLiteral_18163/*"com.adjust.sdk.AdjustPlayStorePurchase"*/, v9, 0);
  v13 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
    v13 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v13->static_fields->ajcAdjust;
  v15 = sub_1C94140(object___TypeInfo, 2);
  v17 = (System_Object_array *)v15;
  if ( !v15 )
    sub_1C942F0(0, v16);
  if ( v12 )
  {
    v15 = sub_1C941D4(v12, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v15 )
    {
      v26 = sub_1C94314();
      sub_1C941C0(v26, 0);
    }
  }
  if ( !LODWORD(v17->max_length) )
    sub_1C942F8(v15);
  v17->m_Items[0] = (Il2CppObject *)v12;
  v18 = sub_1C9403C(v17->m_Items, v12);
  if ( v5 )
  {
    v18 = sub_1C941D4(v5, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
      v27 = sub_1C94314();
      sub_1C941C0(v27, 0);
    }
  }
  if ( LODWORD(v17->max_length) <= 1 )
    sub_1C942F8(v18);
  v17->m_Items[1] = (Il2CppObject *)v5;
  v19 = sub_1C9403C(&v17->m_Items[1], v5);
  if ( !ajcAdjust )
    sub_1C942F0(v19, v20);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_24902/*"verifyPlayStorePurchase"*/, v17, 0);
  if ( v12 )
  {
    klass = v12->klass;
    v22 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_26;
      }
      v24 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_26:
      v24 = sub_1C6A420(v12, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v24)(v12, *(_QWORD *)(v24 + 8));
  }
}


void AdjustSdk_AdjustAndroid_AdidReadListener___ctor(
        AdjustSdk_AdjustAndroid_AdidReadListener_o *this,
        System_Action_string__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A4E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18169/*"com.adjust.sdk.OnAdidReadListener"*/);
    byte_4D24A4E = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18169/*"com.adjust.sdk.OnAdidReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_AdidReadListener__onAdidRead(
        AdjustSdk_AdjustAndroid_AdidReadListener_o *this,
        System_String_o *adid,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A4F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0__onAdidRead_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A4F = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C9403C(&v5[1], this);
  v5[1].monitor = adid;
  sub_1C9403C(&v5[1].monitor, adid);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0__onAdidRead_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0___onAdidRead_b__0(
        AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct AdjustSdk_AdjustAndroid_AdidReadListener_o *_4__this; // x8
  struct System_Action_string__o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      this->fields.adid,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___ctor(
        AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_o *this,
        System_Action_string__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A53 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18170/*"com.adjust.sdk.OnAmazonAdIdReadListener"*/);
    byte_4D24A53 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18170/*"com.adjust.sdk.OnAmazonAdIdReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_AmazonAdIdReadListener__onAmazonAdIdRead(
        AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_o *this,
        System_String_o *amazonAdId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A54 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0__onAmazonAdIdRead_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A54 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C9403C(&v5[1], this);
  v5[1].monitor = amazonAdId;
  sub_1C9403C(&v5[1].monitor, amazonAdId);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0__onAmazonAdIdRead_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0___onAmazonAdIdRead_b__0(
        AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_o *_4__this; // x8
  struct System_Action_string__o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      this->fields.amazonAdId,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_AttributionChangedListener___ctor(
        AdjustSdk_AdjustAndroid_AttributionChangedListener_o *this,
        System_Action_AdjustAttribution__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A35 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18171/*"com.adjust.sdk.OnAttributionChangedListener"*/);
    byte_4D24A35 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18171/*"com.adjust.sdk.OnAttributionChangedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_AttributionChangedListener__onAttributionChanged(
        AdjustSdk_AdjustAndroid_AttributionChangedListener_o *this,
        UnityEngine_AndroidJavaObject_o *ajoAttribution,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A36 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0__onAttributionChanged_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A36 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)ajoAttribution;
  sub_1C9403C(&v5[1], ajoAttribution);
  v5[1].monitor = this;
  sub_1C9403C(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0__onAttributionChanged_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0___onAttributionChanged_b__0(
        AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_o *v2; // x19
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  UnityEngine_AndroidJavaObject_o *ajoAttribution; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  Il2CppObject *v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaObject_o *v11; // x0
  Il2CppObject *v12; // x21
  Il2CppClass *v13; // x1
  __int64 v14; // x1
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppClass *v17; // x1
  __int64 v18; // x1
  UnityEngine_AndroidJavaObject_o *v19; // x0
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x1
  __int64 v22; // x1
  UnityEngine_AndroidJavaObject_o *v23; // x0
  Il2CppObject *v24; // x21
  Il2CppClass *v25; // x1
  __int64 v26; // x1
  UnityEngine_AndroidJavaObject_o *v27; // x0
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x1
  __int64 v30; // x1
  UnityEngine_AndroidJavaObject_o *v31; // x0
  Il2CppObject *v32; // x21
  Il2CppClass *v33; // x1
  __int64 v34; // x1
  UnityEngine_AndroidJavaObject_o *v35; // x0
  Il2CppObject *v36; // x21
  Il2CppObject *v37; // x1
  __int64 v38; // x1
  UnityEngine_AndroidJavaObject_o *v39; // x0
  Il2CppObject *v40; // x21
  Il2CppClass *v41; // x1
  __int64 v42; // x1
  UnityEngine_AndroidJavaObject_o *v43; // x0
  Il2CppObject *v44; // x21
  Il2CppClass *v45; // x1
  __int64 v46; // x1
  UnityEngine_AndroidJavaObject_o *v47; // x0
  __int64 v48; // x1
  Il2CppObject *v49; // x23
  _QWORD *v50; // x21
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x0
  double v54; // d0
  const MethodInfo_3992070 *v55; // x2
  void *v56; // x9
  Il2CppClass *klass; // x8
  __int64 v58; // x9
  int32_t *p_offset; // x10
  __int64 v60; // x0
  struct AdjustSdk_AdjustAndroid_AttributionChangedListener_o *v61; // x8
  struct System_Action_AdjustAttribution__o *v62; // x8
  AdjustSdk_AdjustUtils_c *v63; // x0
  UnityEngine_AndroidJavaObject_o *v64; // x21
  Il2CppObject *v65; // x0
  const MethodInfo *v66; // x1
  AdjustSdk_JSONNode_o *v67; // x21
  const MethodInfo *v68; // x2
  AdjustSdk_JSONNode_o *v69; // x0
  const MethodInfo *v70; // x2
  System_Collections_Generic_Dictionary_object__object__o *v71; // x23
  const MethodInfo *v72; // x2
  AdjustSdk_JSONClass_o *v73; // x21
  System_Collections_Generic_Dictionary_string__object__o *monitor; // x22
  struct AdjustSdk_AdjustAndroid_AttributionChangedListener_o *_4__this; // x8
  struct System_Action_AdjustAttribution__o *callback; // x8
  Il2CppClass *v77; // [xsp+10h] [xbp-50h] BYREF
  void *v78; // [xsp+18h] [xbp-48h]
  System_Nullable_double__o v79; // 0:x0.16

  v2 = this;
  if ( (byte_4D24A37 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAttribution_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Call_double___);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Nullable_double___ctor__);
    this = (AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_o *)sub_1C94098(&StringLiteral_18778/*"doubleValue"*/);
    byte_4D24A37 = 1;
  }
  if ( v2->fields.ajoAttribution )
  {
    v3 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAttribution_TypeInfo);
    System_Object___ctor(v3, 0);
    ajoAttribution = v2->fields.ajoAttribution;
    inited = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    if ( !ajoAttribution )
      sub_1C942F0(inited, v4);
    object = UnityEngine_AndroidJavaObject__Get_object_(
               ajoAttribution,
               AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerName,
               (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
    if ( IsNullOrEmpty )
      v9 = 0;
    else
      v9 = object;
    if ( !v3 )
      sub_1C942F0(IsNullOrEmpty, v9);
    v3[1].monitor = v9;
    sub_1C9403C(&v3[1].monitor, v9);
    v11 = v2->fields.ajoAttribution;
    if ( !v11 )
      sub_1C942F0(0, v10);
    v12 = UnityEngine_AndroidJavaObject__Get_object_(
            v11,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerToken,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v12, 0) )
      v13 = 0;
    else
      v13 = (Il2CppClass *)v12;
    v3[1].klass = v13;
    sub_1C9403C(&v3[1], v13);
    v15 = v2->fields.ajoAttribution;
    if ( !v15 )
      sub_1C942F0(0, v14);
    v16 = UnityEngine_AndroidJavaObject__Get_object_(
            v15,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyNetwork,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
      v17 = 0;
    else
      v17 = (Il2CppClass *)v16;
    v3[2].klass = v17;
    sub_1C9403C(&v3[2], v17);
    v19 = v2->fields.ajoAttribution;
    if ( !v19 )
      sub_1C942F0(0, v18);
    v20 = UnityEngine_AndroidJavaObject__Get_object_(
            v19,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCampaign,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v20, 0) )
      v21 = 0;
    else
      v21 = v20;
    v3[2].monitor = v21;
    sub_1C9403C(&v3[2].monitor, v21);
    v23 = v2->fields.ajoAttribution;
    if ( !v23 )
      sub_1C942F0(0, v22);
    v24 = UnityEngine_AndroidJavaObject__Get_object_(
            v23,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdgroup,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v24, 0) )
      v25 = 0;
    else
      v25 = (Il2CppClass *)v24;
    v3[3].klass = v25;
    sub_1C9403C(&v3[3], v25);
    v27 = v2->fields.ajoAttribution;
    if ( !v27 )
      sub_1C942F0(0, v26);
    v28 = UnityEngine_AndroidJavaObject__Get_object_(
            v27,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCreative,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v28, 0) )
      v29 = 0;
    else
      v29 = v28;
    v3[3].monitor = v29;
    sub_1C9403C(&v3[3].monitor, v29);
    v31 = v2->fields.ajoAttribution;
    if ( !v31 )
      sub_1C942F0(0, v30);
    v32 = UnityEngine_AndroidJavaObject__Get_object_(
            v31,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyClickLabel,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v32, 0) )
      v33 = 0;
    else
      v33 = (Il2CppClass *)v32;
    v3[4].klass = v33;
    sub_1C9403C(&v3[4], v33);
    v35 = v2->fields.ajoAttribution;
    if ( !v35 )
      sub_1C942F0(0, v34);
    v36 = UnityEngine_AndroidJavaObject__Get_object_(
            v35,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostType,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v36, 0) )
      v37 = 0;
    else
      v37 = v36;
    v3[4].monitor = v37;
    sub_1C9403C(&v3[4].monitor, v37);
    v39 = v2->fields.ajoAttribution;
    if ( !v39 )
      sub_1C942F0(0, v38);
    v40 = UnityEngine_AndroidJavaObject__Get_object_(
            v39,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostCurrency,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v40, 0) )
      v41 = 0;
    else
      v41 = (Il2CppClass *)v40;
    v3[6].klass = v41;
    sub_1C9403C(&v3[6], v41);
    v43 = v2->fields.ajoAttribution;
    if ( !v43 )
      sub_1C942F0(0, v42);
    v44 = UnityEngine_AndroidJavaObject__Get_object_(
            v43,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyFbInstallReferrer,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v44, 0) )
      v45 = 0;
    else
      v45 = (Il2CppClass *)v44;
    v3[7].klass = v45;
    sub_1C9403C(&v3[7], v45);
    v47 = v2->fields.ajoAttribution;
    if ( !v47 )
      sub_1C942F0(0, v46);
    v49 = UnityEngine_AndroidJavaObject__Get_object_(
            v47,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostAmount,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
    if ( v49 )
    {
      v50 = Method_System_Array_Empty_object___;
      v51 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v51 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v51 = v50[7];
      }
      v52 = *(_QWORD *)(v51 + 16);
      if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
        v52 = sub_1C6A12C();
      if ( !*(_DWORD *)(v52 + 224) )
        j_il2cpp_runtime_class_init_0(v52);
      v53 = *(_QWORD *)(v50[7] + 16LL);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1C6A12C();
      v54 = UnityEngine_AndroidJavaObject__Call_double_(
              (UnityEngine_AndroidJavaObject_o *)v49,
              (System_String_o *)StringLiteral_18778/*"doubleValue"*/,
              **(System_Object_array ***)(v53 + 184),
              (const MethodInfo_30E902C *)Method_UnityEngine_AndroidJavaObject_Call_double___);
      v77 = 0;
      v78 = 0;
      *(_QWORD *)&v79.fields.value = Method_System_Nullable_double___ctor__;
      *(_QWORD *)&v79.fields.hasValue = &v77;
      System_Nullable_double____ctor(v79, v54, v55);
      v56 = v78;
      v3[5].klass = v77;
      v3[5].monitor = v56;
      klass = v49->klass;
      v58 = *(unsigned __int16 *)&v49->klass->_2.rank;
      if ( *(_WORD *)&v49->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v58;
          p_offset += 4;
          if ( !v58 )
            goto LABEL_61;
        }
        v60 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_61:
        v60 = sub_1C6A420(v49, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(Il2CppObject *, _QWORD))v60)(v49, *(_QWORD *)(v60 + 8));
    }
    else
    {
      v3[5].klass = 0;
      v3[5].monitor = 0;
    }
    v63 = AdjustSdk_AdjustUtils_TypeInfo;
    v64 = v2->fields.ajoAttribution;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      v63 = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    if ( !v64 )
      sub_1C942F0(v63, v48);
    v65 = UnityEngine_AndroidJavaObject__Get_object_(
            v64,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( v65 )
    {
      v67 = AdjustSdk_JSONNode__Parse((System_String_o *)v65, v66);
      v65 = (Il2CppObject *)AdjustSdk_JSONNode__op_Equality(v67, 0, v68);
      if ( ((unsigned __int8)v65 & 1) == 0 )
      {
        if ( !v67 )
          sub_1C942F0(v65, v66);
        v69 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v67->klass->vtable._27_get_AsObject.methodPtr)(
                                        v67,
                                        v67->klass->vtable._27_get_AsObject.method);
        v65 = (Il2CppObject *)AdjustSdk_JSONNode__op_Equality(v69, 0, v70);
        if ( ((unsigned __int8)v65 & 1) == 0 )
        {
          v71 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
          System_Collections_Generic_Dictionary_object__object____ctor(
            v71,
            (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
          v3[6].monitor = v71;
          sub_1C9403C(&v3[6].monitor, v71);
          v73 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v67->klass->vtable._27_get_AsObject.methodPtr)(
                                           v67,
                                           v67->klass->vtable._27_get_AsObject.method);
          monitor = (System_Collections_Generic_Dictionary_string__object__o *)v3[6].monitor;
          if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
          AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v73, monitor, v72);
        }
      }
    }
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      sub_1C942F0(v65, v66);
    callback = _4__this->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        v3,
        callback->fields.method);
  }
  else
  {
    v61 = v2->fields.__4__this;
    if ( !v61 )
      sub_1C942F0(this, method);
    v62 = v61->fields.callback;
    if ( v62 )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v62->fields.invoke_impl)(
        v62->fields.method_code,
        0,
        v62->fields.method);
  }
}


void AdjustSdk_AdjustAndroid_AttributionReadListener___ctor(
        AdjustSdk_AdjustAndroid_AttributionReadListener_o *this,
        System_Action_AdjustAttribution__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A50 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18172/*"com.adjust.sdk.OnAttributionReadListener"*/);
    byte_4D24A50 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18172/*"com.adjust.sdk.OnAttributionReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_AttributionReadListener__onAttributionRead(
        AdjustSdk_AdjustAndroid_AttributionReadListener_o *this,
        UnityEngine_AndroidJavaObject_o *ajoAttribution,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A51 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0__onAttributionRead_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A51 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)ajoAttribution;
  sub_1C9403C(&v5[1], ajoAttribution);
  v5[1].monitor = this;
  sub_1C9403C(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0__onAttributionRead_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0___onAttributionRead_b__0(
        AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0_o *v2; // x19
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  UnityEngine_AndroidJavaObject_o *ajoAttribution; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  Il2CppObject *v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaObject_o *v11; // x0
  Il2CppObject *v12; // x21
  Il2CppClass *v13; // x1
  __int64 v14; // x1
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppClass *v17; // x1
  __int64 v18; // x1
  UnityEngine_AndroidJavaObject_o *v19; // x0
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x1
  __int64 v22; // x1
  UnityEngine_AndroidJavaObject_o *v23; // x0
  Il2CppObject *v24; // x21
  Il2CppClass *v25; // x1
  __int64 v26; // x1
  UnityEngine_AndroidJavaObject_o *v27; // x0
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x1
  __int64 v30; // x1
  UnityEngine_AndroidJavaObject_o *v31; // x0
  Il2CppObject *v32; // x21
  Il2CppClass *v33; // x1
  __int64 v34; // x1
  UnityEngine_AndroidJavaObject_o *v35; // x0
  Il2CppObject *v36; // x21
  Il2CppObject *v37; // x1
  __int64 v38; // x1
  UnityEngine_AndroidJavaObject_o *v39; // x0
  Il2CppObject *v40; // x21
  Il2CppClass *v41; // x1
  __int64 v42; // x1
  UnityEngine_AndroidJavaObject_o *v43; // x0
  Il2CppObject *v44; // x21
  Il2CppClass *v45; // x1
  __int64 v46; // x1
  UnityEngine_AndroidJavaObject_o *v47; // x0
  __int64 v48; // x1
  Il2CppObject *v49; // x23
  _QWORD *v50; // x21
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x0
  double v54; // d0
  const MethodInfo_3992070 *v55; // x2
  void *v56; // x9
  Il2CppClass *klass; // x8
  __int64 v58; // x9
  int32_t *p_offset; // x10
  __int64 v60; // x0
  struct AdjustSdk_AdjustAndroid_AttributionReadListener_o *v61; // x8
  struct System_Action_AdjustAttribution__o *v62; // x8
  AdjustSdk_AdjustUtils_c *v63; // x0
  UnityEngine_AndroidJavaObject_o *v64; // x21
  Il2CppObject *v65; // x0
  const MethodInfo *v66; // x1
  AdjustSdk_JSONNode_o *v67; // x21
  const MethodInfo *v68; // x2
  AdjustSdk_JSONNode_o *v69; // x0
  const MethodInfo *v70; // x2
  System_Collections_Generic_Dictionary_object__object__o *v71; // x23
  const MethodInfo *v72; // x2
  AdjustSdk_JSONClass_o *v73; // x21
  System_Collections_Generic_Dictionary_string__object__o *monitor; // x22
  struct AdjustSdk_AdjustAndroid_AttributionReadListener_o *_4__this; // x8
  struct System_Action_AdjustAttribution__o *callback; // x8
  Il2CppClass *v77; // [xsp+10h] [xbp-50h] BYREF
  void *v78; // [xsp+18h] [xbp-48h]
  System_Nullable_double__o v79; // 0:x0.16

  v2 = this;
  if ( (byte_4D24A52 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustAttribution_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Call_double___);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Nullable_double___ctor__);
    this = (AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0_o *)sub_1C94098(&StringLiteral_18778/*"doubleValue"*/);
    byte_4D24A52 = 1;
  }
  if ( v2->fields.ajoAttribution )
  {
    v3 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAttribution_TypeInfo);
    System_Object___ctor(v3, 0);
    ajoAttribution = v2->fields.ajoAttribution;
    inited = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    if ( !ajoAttribution )
      sub_1C942F0(inited, v4);
    object = UnityEngine_AndroidJavaObject__Get_object_(
               ajoAttribution,
               AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerName,
               (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
    if ( IsNullOrEmpty )
      v9 = 0;
    else
      v9 = object;
    if ( !v3 )
      sub_1C942F0(IsNullOrEmpty, v9);
    v3[1].monitor = v9;
    sub_1C9403C(&v3[1].monitor, v9);
    v11 = v2->fields.ajoAttribution;
    if ( !v11 )
      sub_1C942F0(0, v10);
    v12 = UnityEngine_AndroidJavaObject__Get_object_(
            v11,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerToken,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v12, 0) )
      v13 = 0;
    else
      v13 = (Il2CppClass *)v12;
    v3[1].klass = v13;
    sub_1C9403C(&v3[1], v13);
    v15 = v2->fields.ajoAttribution;
    if ( !v15 )
      sub_1C942F0(0, v14);
    v16 = UnityEngine_AndroidJavaObject__Get_object_(
            v15,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyNetwork,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
      v17 = 0;
    else
      v17 = (Il2CppClass *)v16;
    v3[2].klass = v17;
    sub_1C9403C(&v3[2], v17);
    v19 = v2->fields.ajoAttribution;
    if ( !v19 )
      sub_1C942F0(0, v18);
    v20 = UnityEngine_AndroidJavaObject__Get_object_(
            v19,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCampaign,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v20, 0) )
      v21 = 0;
    else
      v21 = v20;
    v3[2].monitor = v21;
    sub_1C9403C(&v3[2].monitor, v21);
    v23 = v2->fields.ajoAttribution;
    if ( !v23 )
      sub_1C942F0(0, v22);
    v24 = UnityEngine_AndroidJavaObject__Get_object_(
            v23,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdgroup,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v24, 0) )
      v25 = 0;
    else
      v25 = (Il2CppClass *)v24;
    v3[3].klass = v25;
    sub_1C9403C(&v3[3], v25);
    v27 = v2->fields.ajoAttribution;
    if ( !v27 )
      sub_1C942F0(0, v26);
    v28 = UnityEngine_AndroidJavaObject__Get_object_(
            v27,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCreative,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v28, 0) )
      v29 = 0;
    else
      v29 = v28;
    v3[3].monitor = v29;
    sub_1C9403C(&v3[3].monitor, v29);
    v31 = v2->fields.ajoAttribution;
    if ( !v31 )
      sub_1C942F0(0, v30);
    v32 = UnityEngine_AndroidJavaObject__Get_object_(
            v31,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyClickLabel,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v32, 0) )
      v33 = 0;
    else
      v33 = (Il2CppClass *)v32;
    v3[4].klass = v33;
    sub_1C9403C(&v3[4], v33);
    v35 = v2->fields.ajoAttribution;
    if ( !v35 )
      sub_1C942F0(0, v34);
    v36 = UnityEngine_AndroidJavaObject__Get_object_(
            v35,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostType,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v36, 0) )
      v37 = 0;
    else
      v37 = v36;
    v3[4].monitor = v37;
    sub_1C9403C(&v3[4].monitor, v37);
    v39 = v2->fields.ajoAttribution;
    if ( !v39 )
      sub_1C942F0(0, v38);
    v40 = UnityEngine_AndroidJavaObject__Get_object_(
            v39,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostCurrency,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v40, 0) )
      v41 = 0;
    else
      v41 = (Il2CppClass *)v40;
    v3[6].klass = v41;
    sub_1C9403C(&v3[6], v41);
    v43 = v2->fields.ajoAttribution;
    if ( !v43 )
      sub_1C942F0(0, v42);
    v44 = UnityEngine_AndroidJavaObject__Get_object_(
            v43,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyFbInstallReferrer,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v44, 0) )
      v45 = 0;
    else
      v45 = (Il2CppClass *)v44;
    v3[7].klass = v45;
    sub_1C9403C(&v3[7], v45);
    v47 = v2->fields.ajoAttribution;
    if ( !v47 )
      sub_1C942F0(0, v46);
    v49 = UnityEngine_AndroidJavaObject__Get_object_(
            v47,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostAmount,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
    if ( v49 )
    {
      v50 = Method_System_Array_Empty_object___;
      v51 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v51 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v51 = v50[7];
      }
      v52 = *(_QWORD *)(v51 + 16);
      if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
        v52 = sub_1C6A12C();
      if ( !*(_DWORD *)(v52 + 224) )
        j_il2cpp_runtime_class_init_0(v52);
      v53 = *(_QWORD *)(v50[7] + 16LL);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1C6A12C();
      v54 = UnityEngine_AndroidJavaObject__Call_double_(
              (UnityEngine_AndroidJavaObject_o *)v49,
              (System_String_o *)StringLiteral_18778/*"doubleValue"*/,
              **(System_Object_array ***)(v53 + 184),
              (const MethodInfo_30E902C *)Method_UnityEngine_AndroidJavaObject_Call_double___);
      v77 = 0;
      v78 = 0;
      *(_QWORD *)&v79.fields.value = Method_System_Nullable_double___ctor__;
      *(_QWORD *)&v79.fields.hasValue = &v77;
      System_Nullable_double____ctor(v79, v54, v55);
      v56 = v78;
      v3[5].klass = v77;
      v3[5].monitor = v56;
      klass = v49->klass;
      v58 = *(unsigned __int16 *)&v49->klass->_2.rank;
      if ( *(_WORD *)&v49->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v58;
          p_offset += 4;
          if ( !v58 )
            goto LABEL_61;
        }
        v60 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_61:
        v60 = sub_1C6A420(v49, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(Il2CppObject *, _QWORD))v60)(v49, *(_QWORD *)(v60 + 8));
    }
    else
    {
      v3[5].klass = 0;
      v3[5].monitor = 0;
    }
    v63 = AdjustSdk_AdjustUtils_TypeInfo;
    v64 = v2->fields.ajoAttribution;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      v63 = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    if ( !v64 )
      sub_1C942F0(v63, v48);
    v65 = UnityEngine_AndroidJavaObject__Get_object_(
            v64,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( v65 )
    {
      v67 = AdjustSdk_JSONNode__Parse((System_String_o *)v65, v66);
      v65 = (Il2CppObject *)AdjustSdk_JSONNode__op_Equality(v67, 0, v68);
      if ( ((unsigned __int8)v65 & 1) == 0 )
      {
        if ( !v67 )
          sub_1C942F0(v65, v66);
        v69 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v67->klass->vtable._27_get_AsObject.methodPtr)(
                                        v67,
                                        v67->klass->vtable._27_get_AsObject.method);
        v65 = (Il2CppObject *)AdjustSdk_JSONNode__op_Equality(v69, 0, v70);
        if ( ((unsigned __int8)v65 & 1) == 0 )
        {
          v71 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
          System_Collections_Generic_Dictionary_object__object____ctor(
            v71,
            (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
          v3[6].monitor = v71;
          sub_1C9403C(&v3[6].monitor, v71);
          v73 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v67->klass->vtable._27_get_AsObject.methodPtr)(
                                           v67,
                                           v67->klass->vtable._27_get_AsObject.method);
          monitor = (System_Collections_Generic_Dictionary_string__object__o *)v3[6].monitor;
          if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
          AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v73, monitor, v72);
        }
      }
    }
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      sub_1C942F0(v65, v66);
    callback = _4__this->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        v3,
        callback->fields.method);
  }
  else
  {
    v61 = v2->fields.__4__this;
    if ( !v61 )
      sub_1C942F0(this, method);
    v62 = v61->fields.callback;
    if ( v62 )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v62->fields.invoke_impl)(
        v62->fields.method_code,
        0,
        v62->fields.method);
  }
}


void AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___ctor(
        AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_o *this,
        System_Action_string__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A4C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18173/*"com.adjust.sdk.OnDeeplinkResolvedListener"*/);
    byte_4D24A4C = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18173/*"com.adjust.sdk.OnDeeplinkResolvedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_DeeplinkResolutionListener__onDeeplinkResolved(
        AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_o *this,
        System_String_o *resolvedLink,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A4D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0__onDeeplinkResolved_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A4D = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C9403C(&v5[1], this);
  v5[1].monitor = resolvedLink;
  sub_1C9403C(&v5[1].monitor, resolvedLink);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0__onDeeplinkResolved_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0___onDeeplinkResolved_b__0(
        AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_o *_4__this; // x8
  struct System_Action_string__o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      this->fields.resolvedLink,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___ctor(
        AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *this,
        System_Action_string__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A38 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18174/*"com.adjust.sdk.OnDeferredDeeplinkResponseListener"*/);
    byte_4D24A38 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18174/*"com.adjust.sdk.OnDeferredDeeplinkResponseListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


bool AdjustSdk_AdjustAndroid_DeferredDeeplinkListener__launchReceivedDeeplink(
        AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *this,
        UnityEngine_AndroidJavaObject_o *deeplink,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A39 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0__launchReceivedDeeplink_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A39 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)deeplink;
  sub_1C9403C(&v5[1], deeplink);
  v5[1].monitor = this;
  sub_1C9403C(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0__launchReceivedDeeplink_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
  if ( !AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo);
  return AdjustSdk_AdjustAndroid_TypeInfo->static_fields->isDeferredDeeplinkOpeningEnabled;
}


void AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0___launchReceivedDeeplink_b__0(
        AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *v2; // x19
  UnityEngine_AndroidJavaObject_o *deeplink; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0
  AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *v8; // x1
  struct AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *_4__this; // x8
  struct System_Action_string__o *callback; // x8

  v2 = this;
  if ( (byte_4D24A3A & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    sub_1C94098(&Method_System_Array_Empty_object___);
    this = (AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *)sub_1C94098(&StringLiteral_24350/*"toString"*/);
    byte_4D24A3A = 1;
  }
  deeplink = v2->fields.deeplink;
  if ( deeplink )
  {
    v4 = Method_System_Array_Empty_object___;
    v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v5 )
    {
      sub_1C6A188(Method_System_Array_Empty_object___);
      v5 = v4[7];
    }
    v6 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1C6A12C();
    if ( !*(_DWORD *)(v6 + 224) )
      j_il2cpp_runtime_class_init_0(v6);
    v7 = *(_QWORD *)(v4[7] + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C6A12C();
    this = (AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *)UnityEngine_AndroidJavaObject__Call_object_(
                                                                                        deeplink,
                                                                                        (System_String_o *)StringLiteral_24350/*"toString"*/,
                                                                                        **(System_Object_array ***)(v7 + 184),
                                                                                        (const MethodInfo_30E925C *)Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    v8 = this;
  }
  else
  {
    v8 = 0;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, v8);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v8,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_EventTrackingFailedListener___ctor(
        AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *this,
        System_Action_AdjustEventFailure__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A3E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18175/*"com.adjust.sdk.OnEventTrackingFailedListener"*/);
    byte_4D24A3E = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18175/*"com.adjust.sdk.OnEventTrackingFailedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_EventTrackingFailedListener__onEventTrackingFailed(
        AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *this,
        UnityEngine_AndroidJavaObject_o *eventFailureData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A3F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0__onEventTrackingFailed_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A3F = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)eventFailureData;
  sub_1C9403C(&v5[1], eventFailureData);
  v5[1].monitor = this;
  sub_1C9403C(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0__onEventTrackingFailed_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0___onEventTrackingFailed_b__0(
        AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  UnityEngine_AndroidJavaObject_o *eventFailureData; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  Il2CppObject *v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaObject_o *v11; // x0
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x1
  __int64 v14; // x1
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x1
  __int64 v18; // x1
  UnityEngine_AndroidJavaObject_o *v19; // x0
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x1
  __int64 v22; // x1
  UnityEngine_AndroidJavaObject_o *v23; // x0
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x1
  __int64 v26; // x1
  UnityEngine_AndroidJavaObject_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_AndroidJavaObject_o *v29; // x0
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  UnityEngine_AndroidJavaObject_o *v32; // x21
  _QWORD *v33; // x22
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  Il2CppObject *v37; // x1
  const MethodInfo *v38; // x2
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  struct AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *_4__this; // x8
  struct System_Action_AdjustEventFailure__o *callback; // x8

  if ( (byte_4D24A40 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustEventFailure_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_bool___);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&StringLiteral_24350/*"toString"*/);
    byte_4D24A40 = 1;
  }
  v3 = sub_1C942E4(AdjustSdk_AdjustEventFailure_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  eventFailureData = this->fields.eventFailureData;
  inited = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  if ( !eventFailureData )
    sub_1C942F0(inited, v4);
  object = UnityEngine_AndroidJavaObject__Get_object_(
             eventFailureData,
             AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid,
             (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
  if ( IsNullOrEmpty )
    v9 = 0;
  else
    v9 = object;
  if ( !v3 )
    sub_1C942F0(IsNullOrEmpty, v9);
  *(_QWORD *)(v3 + 16) = v9;
  sub_1C9403C(v3 + 16, v9);
  v11 = this->fields.eventFailureData;
  if ( !v11 )
    sub_1C942F0(0, v10);
  v12 = UnityEngine_AndroidJavaObject__Get_object_(
          v11,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v12, 0) )
    v13 = 0;
  else
    v13 = v12;
  *(_QWORD *)(v3 + 24) = v13;
  sub_1C9403C(v3 + 24, v13);
  v15 = this->fields.eventFailureData;
  if ( !v15 )
    sub_1C942F0(0, v14);
  v16 = UnityEngine_AndroidJavaObject__Get_object_(
          v15,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
    v17 = 0;
  else
    v17 = v16;
  *(_QWORD *)(v3 + 32) = v17;
  sub_1C9403C(v3 + 32, v17);
  v19 = this->fields.eventFailureData;
  if ( !v19 )
    sub_1C942F0(0, v18);
  v20 = UnityEngine_AndroidJavaObject__Get_object_(
          v19,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v20, 0) )
    v21 = 0;
  else
    v21 = v20;
  *(_QWORD *)(v3 + 40) = v21;
  sub_1C9403C(v3 + 40, v21);
  v23 = this->fields.eventFailureData;
  if ( !v23 )
    sub_1C942F0(0, v22);
  v24 = UnityEngine_AndroidJavaObject__Get_object_(
          v23,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v24, 0) )
    v25 = 0;
  else
    v25 = v24;
  *(_QWORD *)(v3 + 48) = v25;
  sub_1C9403C(v3 + 48, v25);
  v27 = this->fields.eventFailureData;
  if ( !v27 )
    sub_1C942F0(0, v26);
  *(_BYTE *)(v3 + 56) = UnityEngine_AndroidJavaObject__Get_bool_(
                          v27,
                          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry,
                          (const MethodInfo_30EAFD4 *)Method_UnityEngine_AndroidJavaObject_Get_bool___);
  v29 = this->fields.eventFailureData;
  if ( !v29 )
    sub_1C942F0(0, v28);
  v30 = UnityEngine_AndroidJavaObject__Get_object_(
          v29,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
  v32 = (UnityEngine_AndroidJavaObject_o *)v30;
  if ( v30 )
  {
    v33 = Method_System_Array_Empty_object___;
    v34 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v34 )
    {
      sub_1C6A188(Method_System_Array_Empty_object___);
      v34 = v33[7];
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1C6A12C();
    if ( !*(_DWORD *)(v35 + 224) )
      j_il2cpp_runtime_class_init_0(v35);
    v36 = *(_QWORD *)(v33[7] + 16LL);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1C6A12C();
    v37 = UnityEngine_AndroidJavaObject__Call_object_(
            v32,
            (System_String_o *)StringLiteral_24350/*"toString"*/,
            **(System_Object_array ***)(v36 + 184),
            (const MethodInfo_30E925C *)Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    AdjustSdk_AdjustEventFailure__BuildJsonResponseFromString(
      (AdjustSdk_AdjustEventFailure_o *)v3,
      (System_String_o *)v37,
      v38);
    klass = v32->klass;
    v40 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        p_offset += 4;
        if ( !v40 )
          goto LABEL_41;
      }
      v42 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_41:
      v42 = sub_1C6A420(v32, System_IDisposable_TypeInfo, 0);
    }
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v42)(
                            v32,
                            *(_QWORD *)(v42 + 8));
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(v30, v31);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v3,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___ctor(
        AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *this,
        System_Action_AdjustEventSuccess__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A3B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18176/*"com.adjust.sdk.OnEventTrackingSucceededListener"*/);
    byte_4D24A3B = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18176/*"com.adjust.sdk.OnEventTrackingSucceededListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_EventTrackingSucceededListener__onEventTrackingSucceeded(
        AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *this,
        UnityEngine_AndroidJavaObject_o *eventSuccessData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A3C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0__onEventTrackingSucceeded_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A3C = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)eventSuccessData;
  sub_1C9403C(&v5[1], eventSuccessData);
  v5[1].monitor = this;
  sub_1C9403C(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0__onEventTrackingSucceeded_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0___onEventTrackingSucceeded_b__0(
        AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  UnityEngine_AndroidJavaObject_o *eventSuccessData; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  Il2CppClass *v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaObject_o *v11; // x0
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x1
  __int64 v14; // x1
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppClass *v17; // x1
  __int64 v18; // x1
  UnityEngine_AndroidJavaObject_o *v19; // x0
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x1
  __int64 v22; // x1
  UnityEngine_AndroidJavaObject_o *v23; // x0
  Il2CppObject *v24; // x21
  Il2CppClass *v25; // x1
  __int64 v26; // x1
  UnityEngine_AndroidJavaObject_o *v27; // x0
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  UnityEngine_AndroidJavaObject_o *v30; // x21
  _QWORD *v31; // x22
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  Il2CppObject *v35; // x1
  const MethodInfo *v36; // x2
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  struct AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *_4__this; // x8
  struct System_Action_AdjustEventSuccess__o *callback; // x8

  if ( (byte_4D24A3D & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustEventSuccess_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&StringLiteral_24350/*"toString"*/);
    byte_4D24A3D = 1;
  }
  v3 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustEventSuccess_TypeInfo);
  System_Object___ctor(v3, 0);
  eventSuccessData = this->fields.eventSuccessData;
  inited = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  if ( !eventSuccessData )
    sub_1C942F0(inited, v4);
  object = UnityEngine_AndroidJavaObject__Get_object_(
             eventSuccessData,
             AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid,
             (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
  if ( IsNullOrEmpty )
    v9 = 0;
  else
    v9 = (Il2CppClass *)object;
  if ( !v3 )
    sub_1C942F0(IsNullOrEmpty, v9);
  v3[1].klass = v9;
  sub_1C9403C(&v3[1], v9);
  v11 = this->fields.eventSuccessData;
  if ( !v11 )
    sub_1C942F0(0, v10);
  v12 = UnityEngine_AndroidJavaObject__Get_object_(
          v11,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v12, 0) )
    v13 = 0;
  else
    v13 = v12;
  v3[1].monitor = v13;
  sub_1C9403C(&v3[1].monitor, v13);
  v15 = this->fields.eventSuccessData;
  if ( !v15 )
    sub_1C942F0(0, v14);
  v16 = UnityEngine_AndroidJavaObject__Get_object_(
          v15,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
    v17 = 0;
  else
    v17 = (Il2CppClass *)v16;
  v3[2].klass = v17;
  sub_1C9403C(&v3[2], v17);
  v19 = this->fields.eventSuccessData;
  if ( !v19 )
    sub_1C942F0(0, v18);
  v20 = UnityEngine_AndroidJavaObject__Get_object_(
          v19,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v20, 0) )
    v21 = 0;
  else
    v21 = v20;
  v3[2].monitor = v21;
  sub_1C9403C(&v3[2].monitor, v21);
  v23 = this->fields.eventSuccessData;
  if ( !v23 )
    sub_1C942F0(0, v22);
  v24 = UnityEngine_AndroidJavaObject__Get_object_(
          v23,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v24, 0) )
    v25 = 0;
  else
    v25 = (Il2CppClass *)v24;
  v3[3].klass = v25;
  sub_1C9403C(&v3[3], v25);
  v27 = this->fields.eventSuccessData;
  if ( !v27 )
    sub_1C942F0(0, v26);
  v28 = UnityEngine_AndroidJavaObject__Get_object_(
          v27,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
  v30 = (UnityEngine_AndroidJavaObject_o *)v28;
  if ( v28 )
  {
    v31 = Method_System_Array_Empty_object___;
    v32 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v32 )
    {
      sub_1C6A188(Method_System_Array_Empty_object___);
      v32 = v31[7];
    }
    v33 = *(_QWORD *)(v32 + 16);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1C6A12C();
    if ( !*(_DWORD *)(v33 + 224) )
      j_il2cpp_runtime_class_init_0(v33);
    v34 = *(_QWORD *)(v31[7] + 16LL);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1C6A12C();
    v35 = UnityEngine_AndroidJavaObject__Call_object_(
            v30,
            (System_String_o *)StringLiteral_24350/*"toString"*/,
            **(System_Object_array ***)(v34 + 184),
            (const MethodInfo_30E925C *)Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    AdjustSdk_AdjustEventSuccess__BuildJsonResponseFromString(
      (AdjustSdk_AdjustEventSuccess_o *)v3,
      (System_String_o *)v35,
      v36);
    klass = v30->klass;
    v38 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_40;
      }
      v40 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_40:
      v40 = sub_1C6A420(v30, System_IDisposable_TypeInfo, 0);
    }
    v28 = (Il2CppObject *)(*(__int64 (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v40)(
                            v30,
                            *(_QWORD *)(v40 + 8));
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(v28, v29);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v3,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___ctor(
        AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_o *this,
        System_Action_string__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A47 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18177/*"com.adjust.sdk.OnGoogleAdIdReadListener"*/);
    byte_4D24A47 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18177/*"com.adjust.sdk.OnGoogleAdIdReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_GoogleAdIdReadListener__onGoogleAdIdRead(
        AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_o *this,
        System_String_o *adid,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A48 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0__onGoogleAdIdRead_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A48 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C9403C(&v5[1], this);
  v5[1].monitor = adid;
  sub_1C9403C(&v5[1].monitor, adid);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0__onGoogleAdIdRead_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0___onGoogleAdIdRead_b__0(
        AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_o *_4__this; // x8
  struct System_Action_string__o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      this->fields.adid,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_IsEnabledListener___ctor(
        AdjustSdk_AdjustAndroid_IsEnabledListener_o *this,
        System_Action_bool__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A58 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18178/*"com.adjust.sdk.OnIsEnabledListener"*/);
    byte_4D24A58 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18178/*"com.adjust.sdk.OnIsEnabledListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_IsEnabledListener__onIsEnabledRead(
        AdjustSdk_AdjustAndroid_IsEnabledListener_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A59 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0__onIsEnabledRead_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A59 = 1;
  }
  v5 = sub_1C942E4(AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C(v5 + 16, this);
  *(_BYTE *)(v5 + 24) = isEnabled;
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)v5,
      Method_AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0__onIsEnabledRead_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0___onIsEnabledRead_b__0(
        AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct AdjustSdk_AdjustAndroid_IsEnabledListener_o *_4__this; // x8
  struct System_Action_bool__o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      this->fields.isEnabled,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_LastDeeplinkListener___ctor(
        AdjustSdk_AdjustAndroid_LastDeeplinkListener_o *this,
        System_Action_string__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A5A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18179/*"com.adjust.sdk.OnLastDeeplinkReadListener"*/);
    byte_4D24A5A = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18179/*"com.adjust.sdk.OnLastDeeplinkReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_LastDeeplinkListener__onLastDeeplinkRead(
        AdjustSdk_AdjustAndroid_LastDeeplinkListener_o *this,
        UnityEngine_AndroidJavaObject_o *ajoLastDeeplink,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A5B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0__onLastDeeplinkRead_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A5B = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)ajoLastDeeplink;
  sub_1C9403C(&v5[1], ajoLastDeeplink);
  v5[1].monitor = this;
  sub_1C9403C(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0__onLastDeeplinkRead_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0___onLastDeeplinkRead_b__0(
        AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *v2; // x19
  UnityEngine_AndroidJavaObject_o *ajoLastDeeplink; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0
  AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *v8; // x1
  struct AdjustSdk_AdjustAndroid_LastDeeplinkListener_o *_4__this; // x8
  struct System_Action_string__o *callback; // x8

  v2 = this;
  if ( (byte_4D24A5C & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    sub_1C94098(&Method_System_Array_Empty_object___);
    this = (AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *)sub_1C94098(&StringLiteral_24350/*"toString"*/);
    byte_4D24A5C = 1;
  }
  ajoLastDeeplink = v2->fields.ajoLastDeeplink;
  if ( ajoLastDeeplink )
  {
    v4 = Method_System_Array_Empty_object___;
    v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v5 )
    {
      sub_1C6A188(Method_System_Array_Empty_object___);
      v5 = v4[7];
    }
    v6 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1C6A12C();
    if ( !*(_DWORD *)(v6 + 224) )
      j_il2cpp_runtime_class_init_0(v6);
    v7 = *(_QWORD *)(v4[7] + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C6A12C();
    this = (AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *)UnityEngine_AndroidJavaObject__Call_object_(
                                                                                    ajoLastDeeplink,
                                                                                    (System_String_o *)StringLiteral_24350/*"toString"*/,
                                                                                    **(System_Object_array ***)(v7 + 184),
                                                                                    (const MethodInfo_30E925C *)Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    v8 = this;
  }
  else
  {
    v8 = 0;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, v8);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v8,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_SdkVersionReadListener___ctor(
        AdjustSdk_AdjustAndroid_SdkVersionReadListener_o *this,
        System_Action_string__o *pCallback,
        System_String_o *sdkPrefix,
        const MethodInfo *method)
{
  if ( (byte_4D24A55 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18181/*"com.adjust.sdk.OnSdkVersionReadListener"*/);
    byte_4D24A55 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18181/*"com.adjust.sdk.OnSdkVersionReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
  this->fields.sdkPrefix = sdkPrefix;
  sub_1C9403C(&this->fields.sdkPrefix, sdkPrefix);
}


void AdjustSdk_AdjustAndroid_SdkVersionReadListener__onSdkVersionRead(
        AdjustSdk_AdjustAndroid_SdkVersionReadListener_o *this,
        System_String_o *sdkVersion,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A56 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0__onSdkVersionRead_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0_TypeInfo);
    byte_4D24A56 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C9403C(&v5[1], this);
  v5[1].monitor = sdkVersion;
  sub_1C9403C(&v5[1].monitor, sdkVersion);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0__onSdkVersionRead_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0___ctor(
        AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0___onSdkVersionRead_b__0(
        AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0_o *v2; // x19
  struct AdjustSdk_AdjustAndroid_SdkVersionReadListener_o *_4__this; // x8
  struct System_Action_string__o *callback; // x20
  System_String_o *v5; // x0

  v2 = this;
  if ( (byte_4D24A57 & 1) == 0 )
  {
    this = (AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0_o *)sub_1C94098(&StringLiteral_1763/*"@"*/);
    byte_4D24A57 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  callback = _4__this->fields.callback;
  if ( callback )
  {
    v5 = System_String__Concat_64456008(
           _4__this->fields.sdkPrefix,
           (System_String_o *)StringLiteral_1763/*"@"*/,
           v2->fields.sdkVersion,
           0);
    ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v5,
      callback->fields.method);
  }
}


void AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___ctor(
        AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *this,
        System_Action_AdjustSessionFailure__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A44 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18182/*"com.adjust.sdk.OnSessionTrackingFailedListener"*/);
    byte_4D24A44 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18182/*"com.adjust.sdk.OnSessionTrackingFailedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_SessionTrackingFailedListener__onSessionTrackingFailed(
        AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *this,
        UnityEngine_AndroidJavaObject_o *sessionFailureData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A45 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0__onSessionTrackingFailed_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A45 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)sessionFailureData;
  sub_1C9403C(&v5[1], sessionFailureData);
  v5[1].monitor = this;
  sub_1C9403C(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0__onSessionTrackingFailed_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0___onSessionTrackingFailed_b__0(
        AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  UnityEngine_AndroidJavaObject_o *sessionFailureData; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  Il2CppObject *v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaObject_o *v11; // x0
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x1
  __int64 v14; // x1
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x1
  __int64 v18; // x1
  UnityEngine_AndroidJavaObject_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_AndroidJavaObject_o *v21; // x0
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  UnityEngine_AndroidJavaObject_o *v24; // x21
  _QWORD *v25; // x22
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0
  Il2CppObject *v29; // x1
  const MethodInfo *v30; // x2
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  struct AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *_4__this; // x8
  struct System_Action_AdjustSessionFailure__o *callback; // x8

  if ( (byte_4D24A46 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustSessionFailure_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_bool___);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&StringLiteral_24350/*"toString"*/);
    byte_4D24A46 = 1;
  }
  v3 = sub_1C942E4(AdjustSdk_AdjustSessionFailure_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  sessionFailureData = this->fields.sessionFailureData;
  inited = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  if ( !sessionFailureData )
    sub_1C942F0(inited, v4);
  object = UnityEngine_AndroidJavaObject__Get_object_(
             sessionFailureData,
             AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid,
             (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
  if ( IsNullOrEmpty )
    v9 = 0;
  else
    v9 = object;
  if ( !v3 )
    sub_1C942F0(IsNullOrEmpty, v9);
  *(_QWORD *)(v3 + 16) = v9;
  sub_1C9403C(v3 + 16, v9);
  v11 = this->fields.sessionFailureData;
  if ( !v11 )
    sub_1C942F0(0, v10);
  v12 = UnityEngine_AndroidJavaObject__Get_object_(
          v11,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v12, 0) )
    v13 = 0;
  else
    v13 = v12;
  *(_QWORD *)(v3 + 24) = v13;
  sub_1C9403C(v3 + 24, v13);
  v15 = this->fields.sessionFailureData;
  if ( !v15 )
    sub_1C942F0(0, v14);
  v16 = UnityEngine_AndroidJavaObject__Get_object_(
          v15,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
    v17 = 0;
  else
    v17 = v16;
  *(_QWORD *)(v3 + 32) = v17;
  sub_1C9403C(v3 + 32, v17);
  v19 = this->fields.sessionFailureData;
  if ( !v19 )
    sub_1C942F0(0, v18);
  *(_BYTE *)(v3 + 40) = UnityEngine_AndroidJavaObject__Get_bool_(
                          v19,
                          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry,
                          (const MethodInfo_30EAFD4 *)Method_UnityEngine_AndroidJavaObject_Get_bool___);
  v21 = this->fields.sessionFailureData;
  if ( !v21 )
    sub_1C942F0(0, v20);
  v22 = UnityEngine_AndroidJavaObject__Get_object_(
          v21,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
  v24 = (UnityEngine_AndroidJavaObject_o *)v22;
  if ( v22 )
  {
    v25 = Method_System_Array_Empty_object___;
    v26 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v26 )
    {
      sub_1C6A188(Method_System_Array_Empty_object___);
      v26 = v25[7];
    }
    v27 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C6A12C();
    if ( !*(_DWORD *)(v27 + 224) )
      j_il2cpp_runtime_class_init_0(v27);
    v28 = *(_QWORD *)(v25[7] + 16LL);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C6A12C();
    v29 = UnityEngine_AndroidJavaObject__Call_object_(
            v24,
            (System_String_o *)StringLiteral_24350/*"toString"*/,
            **(System_Object_array ***)(v28 + 184),
            (const MethodInfo_30E925C *)Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    AdjustSdk_AdjustSessionFailure__BuildJsonResponseFromString(
      (AdjustSdk_AdjustSessionFailure_o *)v3,
      (System_String_o *)v29,
      v30);
    klass = v24->klass;
    v32 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_33;
      }
      v34 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_33:
      v34 = sub_1C6A420(v24, System_IDisposable_TypeInfo, 0);
    }
    v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v34)(
                            v24,
                            *(_QWORD *)(v34 + 8));
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(v22, v23);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v3,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___ctor(
        AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *this,
        System_Action_AdjustSessionSuccess__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A41 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18183/*"com.adjust.sdk.OnSessionTrackingSucceededListener"*/);
    byte_4D24A41 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18183/*"com.adjust.sdk.OnSessionTrackingSucceededListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener__onSessionTrackingSucceeded(
        AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *this,
        UnityEngine_AndroidJavaObject_o *sessionSuccessData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A42 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0__onSessionTrackingSucceeded_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A42 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)sessionSuccessData;
  sub_1C9403C(&v5[1], sessionSuccessData);
  v5[1].monitor = this;
  sub_1C9403C(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0__onSessionTrackingSucceeded_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0___onSessionTrackingSucceeded_b__0(
        AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  UnityEngine_AndroidJavaObject_o *sessionSuccessData; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  Il2CppClass *v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaObject_o *v11; // x0
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x1
  __int64 v14; // x1
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppClass *v17; // x1
  __int64 v18; // x1
  UnityEngine_AndroidJavaObject_o *v19; // x0
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  UnityEngine_AndroidJavaObject_o *v22; // x21
  _QWORD *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  Il2CppObject *v27; // x1
  const MethodInfo *v28; // x2
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  struct AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *_4__this; // x8
  struct System_Action_AdjustSessionSuccess__o *callback; // x8

  if ( (byte_4D24A43 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustSessionSuccess_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&StringLiteral_24350/*"toString"*/);
    byte_4D24A43 = 1;
  }
  v3 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustSessionSuccess_TypeInfo);
  System_Object___ctor(v3, 0);
  sessionSuccessData = this->fields.sessionSuccessData;
  inited = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  if ( !sessionSuccessData )
    sub_1C942F0(inited, v4);
  object = UnityEngine_AndroidJavaObject__Get_object_(
             sessionSuccessData,
             AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid,
             (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
  if ( IsNullOrEmpty )
    v9 = 0;
  else
    v9 = (Il2CppClass *)object;
  if ( !v3 )
    sub_1C942F0(IsNullOrEmpty, v9);
  v3[1].klass = v9;
  sub_1C9403C(&v3[1], v9);
  v11 = this->fields.sessionSuccessData;
  if ( !v11 )
    sub_1C942F0(0, v10);
  v12 = UnityEngine_AndroidJavaObject__Get_object_(
          v11,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v12, 0) )
    v13 = 0;
  else
    v13 = v12;
  v3[1].monitor = v13;
  sub_1C9403C(&v3[1].monitor, v13);
  v15 = this->fields.sessionSuccessData;
  if ( !v15 )
    sub_1C942F0(0, v14);
  v16 = UnityEngine_AndroidJavaObject__Get_object_(
          v15,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
    v17 = 0;
  else
    v17 = (Il2CppClass *)v16;
  v3[2].klass = v17;
  sub_1C9403C(&v3[2], v17);
  v19 = this->fields.sessionSuccessData;
  if ( !v19 )
    sub_1C942F0(0, v18);
  v20 = UnityEngine_AndroidJavaObject__Get_object_(
          v19,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
          (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____79041520);
  v22 = (UnityEngine_AndroidJavaObject_o *)v20;
  if ( v20 )
  {
    v23 = Method_System_Array_Empty_object___;
    v24 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v24 )
    {
      sub_1C6A188(Method_System_Array_Empty_object___);
      v24 = v23[7];
    }
    v25 = *(_QWORD *)(v24 + 16);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C6A12C();
    if ( !*(_DWORD *)(v25 + 224) )
      j_il2cpp_runtime_class_init_0(v25);
    v26 = *(_QWORD *)(v23[7] + 16LL);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C6A12C();
    v27 = UnityEngine_AndroidJavaObject__Call_object_(
            v22,
            (System_String_o *)StringLiteral_24350/*"toString"*/,
            **(System_Object_array ***)(v26 + 184),
            (const MethodInfo_30E925C *)Method_UnityEngine_AndroidJavaObject_Call_string____79041432);
    AdjustSdk_AdjustSessionSuccess__BuildJsonResponseFromString(
      (AdjustSdk_AdjustSessionSuccess_o *)v3,
      (System_String_o *)v27,
      v28);
    klass = v22->klass;
    v30 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_32;
      }
      v32 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_32:
      v32 = sub_1C6A420(v22, System_IDisposable_TypeInfo, 0);
    }
    v20 = (Il2CppObject *)(*(__int64 (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v32)(
                            v22,
                            *(_QWORD *)(v32 + 8));
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(v20, v21);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v3,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_VerificationResultListener___ctor(
        AdjustSdk_AdjustAndroid_VerificationResultListener_o *this,
        System_Action_AdjustPurchaseVerificationResult__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_4D24A49 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_1C94098(&StringLiteral_18180/*"com.adjust.sdk.OnPurchaseVerificationFinishedListener"*/);
    byte_4D24A49 = 1;
  }
  if ( !UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18180/*"com.adjust.sdk.OnPurchaseVerificationFinishedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_1C9403C(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_VerificationResultListener__onVerificationFinished(
        AdjustSdk_AdjustAndroid_VerificationResultListener_o *this,
        UnityEngine_AndroidJavaObject_o *ajoVerificationInfo,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4D24A4A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AdjustThreadDispatcher_TypeInfo);
    sub_1C94098(&Method_AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0__onVerificationFinished_b__0__);
    sub_1C94098(&AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0_TypeInfo);
    byte_4D24A4A = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)ajoVerificationInfo;
  sub_1C9403C(&v5[1], ajoVerificationInfo);
  v5[1].monitor = this;
  sub_1C9403C(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0__onVerificationFinished_b__0__,
      0);
    if ( !AdjustThreadDispatcher_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo);
    AdjustThreadDispatcher__RunOnMainThread(v8, v9);
  }
}


void AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0___ctor(
        AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0___onVerificationFinished_b__0(
        AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0_o *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x1
  UnityEngine_AndroidJavaObject_o *ajoVerificationInfo; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x0
  __int64 v8; // x1
  UnityEngine_AndroidJavaObject_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_AndroidJavaObject_o *v11; // x0
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  struct AdjustSdk_AdjustAndroid_VerificationResultListener_o *_4__this; // x8
  struct System_Action_AdjustPurchaseVerificationResult__o *callback; // x8
  struct AdjustSdk_AdjustAndroid_VerificationResultListener_o *v18; // x8
  struct System_Action_AdjustPurchaseVerificationResult__o *v19; // x8

  v2 = this;
  if ( (byte_4D24A4B & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustPurchaseVerificationResult_TypeInfo);
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_int____79041544);
    this = (AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0_o *)sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    byte_4D24A4B = 1;
  }
  if ( v2->fields.ajoVerificationInfo )
  {
    v3 = sub_1C942E4(AdjustSdk_AdjustPurchaseVerificationResult_TypeInfo);
    System_Object___ctor((Il2CppObject *)v3, 0);
    ajoVerificationInfo = v2->fields.ajoVerificationInfo;
    inited = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    if ( !ajoVerificationInfo )
      sub_1C942F0(inited, v4);
    object = UnityEngine_AndroidJavaObject__Get_object_(
               ajoVerificationInfo,
               AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyVerificationStatus,
               (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( !v3 )
      sub_1C942F0(object, object);
    *(_QWORD *)(v3 + 32) = object;
    sub_1C9403C(v3 + 32, object);
    v9 = v2->fields.ajoVerificationInfo;
    if ( !v9 )
      sub_1C942F0(0, v8);
    *(_DWORD *)(v3 + 16) = UnityEngine_AndroidJavaObject__Get_int_(
                             v9,
                             AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCode,
                             (const MethodInfo_30EB054 *)Method_UnityEngine_AndroidJavaObject_Get_int____79041544);
    v11 = v2->fields.ajoVerificationInfo;
    if ( !v11 )
      sub_1C942F0(0, v10);
    v12 = UnityEngine_AndroidJavaObject__Get_object_(
            v11,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
            (const MethodInfo_30EB154 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v12, 0) )
      v13 = 0;
    else
      v13 = v12;
    *(_QWORD *)(v3 + 24) = v13;
    v14 = sub_1C9403C(v3 + 24, v13);
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      sub_1C942F0(v14, v15);
    callback = _4__this->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        v3,
        callback->fields.method);
  }
  else
  {
    v18 = v2->fields.__4__this;
    if ( !v18 )
      sub_1C942F0(this, method);
    v19 = v18->fields.callback;
    if ( v19 )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v19->fields.invoke_impl)(
        v19->fields.method_code,
        0,
        v19->fields.method);
  }
}


void AdjustSdk_AdjustAppStorePurchase___ctor(
        AdjustSdk_AdjustAppStorePurchase_o *this,
        System_String_o *transactionId,
        System_String_o *productId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._TransactionId_k__BackingField = transactionId;
  sub_1C9403C(&this->fields, transactionId);
  this->fields._ProductId_k__BackingField = productId;
  sub_1C9403C(&this->fields._ProductId_k__BackingField, productId);
}


System_String_o *AdjustSdk_AdjustAppStorePurchase__get_ProductId(
        AdjustSdk_AdjustAppStorePurchase_o *this,
        const MethodInfo *method)
{
  return this->fields._ProductId_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAppStorePurchase__get_TransactionId(
        AdjustSdk_AdjustAppStorePurchase_o *this,
        const MethodInfo *method)
{
  return this->fields._TransactionId_k__BackingField;
}


void AdjustSdk_AdjustAppStorePurchase__set_ProductId(
        AdjustSdk_AdjustAppStorePurchase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ProductId_k__BackingField = value;
  sub_1C9403C(&this->fields._ProductId_k__BackingField, value);
}


void AdjustSdk_AdjustAppStorePurchase__set_TransactionId(
        AdjustSdk_AdjustAppStorePurchase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TransactionId_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustAppStoreSubscription___ctor(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *price,
        System_String_o *currency,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Price_k__BackingField = price;
  sub_1C9403C(&this->fields._Price_k__BackingField, price);
  this->fields._Currency_k__BackingField = currency;
  sub_1C9403C(&this->fields._Currency_k__BackingField, currency);
  this->fields._TransactionId_k__BackingField = transactionId;
  sub_1C9403C(&this->fields._TransactionId_k__BackingField, transactionId);
}


void AdjustSdk_AdjustAppStoreSubscription__AddCallbackParameter(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x0
  AdjustSdk_AdjustAppStoreSubscription_Fields *p_fields; // x20
  struct System_Collections_Generic_List_string__o *innerCallbackParameters; // t1
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4D24A5F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A5F = 1;
  }
  innerCallbackParameters = this->fields.innerCallbackParameters;
  p_fields = &this->fields;
  v7 = (System_Collections_Generic_List_object__o *)innerCallbackParameters;
  if ( !innerCallbackParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerCallbackParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_1C9403C(p_fields, v10);
    v7 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
    if ( !p_fields->innerCallbackParameters )
      goto LABEL_14;
  }
  items = v7->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    sub_1C9403C(v14 + 4, key);
  }
  v7 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
  if ( !p_fields->innerCallbackParameters
    || (v15 = v7->fields._items, v16 = Method_System_Collections_Generic_List_string__Add__, ++v7->fields._version, !v15) )
  {
LABEL_14:
    sub_1C942F0(v7, key);
  }
  v17 = v7->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v7->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)value;
    sub_1C9403C(v18 + 4, value);
  }
}


void AdjustSdk_AdjustAppStoreSubscription__AddPartnerParameter(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x0
  struct System_Collections_Generic_List_string__o **p_innerPartnerParameters; // x20
  struct System_Collections_Generic_List_string__o *innerPartnerParameters; // t1
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4D24A60 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A60 = 1;
  }
  innerPartnerParameters = this->fields.innerPartnerParameters;
  p_innerPartnerParameters = &this->fields.innerPartnerParameters;
  v7 = (System_Collections_Generic_List_object__o *)innerPartnerParameters;
  if ( !innerPartnerParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_1C9403C(p_innerPartnerParameters, v10);
    v7 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
    if ( !*p_innerPartnerParameters )
      goto LABEL_14;
  }
  items = v7->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    sub_1C9403C(v14 + 4, key);
  }
  v7 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
  if ( !*p_innerPartnerParameters
    || (v15 = v7->fields._items, v16 = Method_System_Collections_Generic_List_string__Add__, ++v7->fields._version, !v15) )
  {
LABEL_14:
    sub_1C942F0(v7, key);
  }
  v17 = v7->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v7->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)value;
    sub_1C9403C(v18 + 4, value);
  }
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustAppStoreSubscription__get_CallbackParameters(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A5D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A5D = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerCallbackParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


System_String_o *AdjustSdk_AdjustAppStoreSubscription__get_Currency(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._Currency_k__BackingField;
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustAppStoreSubscription__get_PartnerParameters(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A5E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A5E = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


System_String_o *AdjustSdk_AdjustAppStoreSubscription__get_Price(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._Price_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAppStoreSubscription__get_SalesRegion(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._SalesRegion_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAppStoreSubscription__get_TransactionDate(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._TransactionDate_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAppStoreSubscription__get_TransactionId(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._TransactionId_k__BackingField;
}


void AdjustSdk_AdjustAppStoreSubscription__set_Currency(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Currency_k__BackingField = value;
  sub_1C9403C(&this->fields._Currency_k__BackingField, value);
}


void AdjustSdk_AdjustAppStoreSubscription__set_Price(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Price_k__BackingField = value;
  sub_1C9403C(&this->fields._Price_k__BackingField, value);
}


void AdjustSdk_AdjustAppStoreSubscription__set_SalesRegion(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._SalesRegion_k__BackingField = value;
  sub_1C9403C(&this->fields._SalesRegion_k__BackingField, value);
}


void AdjustSdk_AdjustAppStoreSubscription__set_TransactionDate(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TransactionDate_k__BackingField = value;
  sub_1C9403C(&this->fields._TransactionDate_k__BackingField, value);
}


void AdjustSdk_AdjustAppStoreSubscription__set_TransactionId(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TransactionId_k__BackingField = value;
  sub_1C9403C(&this->fields._TransactionId_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution___ctor(AdjustSdk_AdjustAttribution_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAttribution___ctor_30986844(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  AdjustSdk_AdjustUtils_c *v9; // x0
  struct System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  struct System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  struct System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  struct System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  struct System_String_o *v20; // x0
  const MethodInfo *v21; // x2
  struct System_String_o *v22; // x0
  const MethodInfo *v23; // x2
  struct System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  AdjustSdk_AdjustUtils_c *v26; // x0
  System_String_o *v27; // x21
  System_IFormatProvider_o *InvariantCulture; // x1
  double v29; // d0
  const MethodInfo_3992070 *v30; // x2
  const MethodInfo *v31; // x2
  AdjustSdk_AdjustUtils_c *v32; // x0
  struct System_String_o *v33; // x0
  const MethodInfo *v34; // x2
  struct System_String_o *v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  AdjustSdk_JSONNode_o *v38; // x20
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  System_String_o *v42; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *AttributionJsonResponse; // x0
  struct System_Nullable_double__o v44; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_double__o v45; // 0:x0.16

  if ( (byte_4D24A61 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C94098(&Method_System_Nullable_double___ctor__);
    byte_4D24A61 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v9 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v9 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v10 = AdjustSdk_AdjustUtils__GetJsonString(v6, v9->static_fields->KeyTrackerName, v8);
    this->fields._TrackerName_k__BackingField = v10;
    sub_1C9403C(&this->fields._TrackerName_k__BackingField, v10);
    v12 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerToken, v11);
    this->fields._TrackerToken_k__BackingField = v12;
    sub_1C9403C(&this->fields, v12);
    v14 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyNetwork, v13);
    this->fields._Network_k__BackingField = v14;
    sub_1C9403C(&this->fields._Network_k__BackingField, v14);
    v16 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCampaign, v15);
    this->fields._Campaign_k__BackingField = v16;
    sub_1C9403C(&this->fields._Campaign_k__BackingField, v16);
    v18 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdgroup, v17);
    this->fields._Adgroup_k__BackingField = v18;
    sub_1C9403C(&this->fields._Adgroup_k__BackingField, v18);
    v20 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCreative, v19);
    this->fields._Creative_k__BackingField = v20;
    sub_1C9403C(&this->fields._Creative_k__BackingField, v20);
    v22 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyClickLabel, v21);
    this->fields._ClickLabel_k__BackingField = v22;
    sub_1C9403C(&this->fields._ClickLabel_k__BackingField, v22);
    v24 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostType, v23);
    this->fields._CostType_k__BackingField = v24;
    sub_1C9403C(&this->fields._CostType_k__BackingField, v24);
    v26 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v26 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v27 = AdjustSdk_AdjustUtils__GetJsonString(v6, v26->static_fields->KeyCostAmount, v25);
    if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
    InvariantCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_InvariantCulture(0);
    v29 = System_Double__Parse_65837596(v27, InvariantCulture, 0);
    v44 = (struct System_Nullable_double__o)0LL;
    *(_QWORD *)&v45.fields.value = Method_System_Nullable_double___ctor__;
    *(_QWORD *)&v45.fields.hasValue = &v44;
    System_Nullable_double____ctor(v45, v29, v30);
    this->fields._CostAmount_k__BackingField = v44;
    v32 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v32 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v33 = AdjustSdk_AdjustUtils__GetJsonString(v6, v32->static_fields->KeyCostCurrency, v31);
    this->fields._CostCurrency_k__BackingField = v33;
    sub_1C9403C(&this->fields._CostCurrency_k__BackingField, v33);
    v35 = AdjustSdk_AdjustUtils__GetJsonString(
            v6,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyFbInstallReferrer,
            v34);
    this->fields._FbInstallReferrer_k__BackingField = v35;
    v36 = sub_1C9403C(&this->fields._FbInstallReferrer_k__BackingField, v35);
    if ( !v6 )
      sub_1C942F0(v36, v37);
    v38 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v38, 0, v39) )
    {
      v42 = AdjustSdk_JSONNode__op_Implicit_30988124(v38, v40);
      if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      AttributionJsonResponse = AdjustSdk_AdjustUtils__GetAttributionJsonResponse(v42, v41);
      this->fields._JsonResponse_k__BackingField = AttributionJsonResponse;
      sub_1C9403C(&this->fields._JsonResponse_k__BackingField, AttributionJsonResponse);
    }
  }
}


void AdjustSdk_AdjustAttribution___ctor_30988796(
        AdjustSdk_AdjustAttribution_o *this,
        System_Collections_Generic_Dictionary_string__string__o *dicAttributionData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  AdjustSdk_AdjustUtils_c *v6; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v8; // x2
  struct System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  struct System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  struct System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  struct System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  struct System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  struct System_String_o *v19; // x0
  const MethodInfo *v20; // x2
  struct System_String_o *v21; // x0
  const MethodInfo *v22; // x2
  AdjustSdk_AdjustUtils_c *v23; // x0
  System_String_o *v24; // x21
  System_IFormatProvider_o *InvariantCulture; // x1
  double v26; // d0
  const MethodInfo_3992070 *v27; // x2
  const MethodInfo *v28; // x2
  AdjustSdk_AdjustUtils_c *v29; // x0
  struct System_String_o *v30; // x0
  const MethodInfo *v31; // x2
  struct System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  System_String_o *v34; // x0
  const MethodInfo *v35; // x1
  AdjustSdk_JSONNode_o *v36; // x20
  const MethodInfo *v37; // x2
  _BOOL8 v38; // x0
  __int64 v39; // x1
  AdjustSdk_JSONNode_o *v40; // x0
  const MethodInfo *v41; // x2
  System_Collections_Generic_Dictionary_object__object__o *v42; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v44; // x0
  const MethodInfo *v45; // x2
  System_Collections_Generic_Dictionary_string__object__o *v46; // x19
  AdjustSdk_JSONClass_o *v47; // x20
  struct System_Nullable_double__o v48; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_double__o v49; // 0:x0.16

  if ( (byte_4D24A62 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&Method_System_Nullable_double___ctor__);
    byte_4D24A62 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( dicAttributionData )
  {
    v6 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v6 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(dicAttributionData, v6->static_fields->KeyTrackerName, v5);
    this->fields._TrackerName_k__BackingField = Value;
    sub_1C9403C(&this->fields._TrackerName_k__BackingField, Value);
    v9 = AdjustSdk_AdjustUtils__TryGetValue(
           dicAttributionData,
           AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerToken,
           v8);
    this->fields._TrackerToken_k__BackingField = v9;
    sub_1C9403C(&this->fields, v9);
    v11 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyNetwork,
            v10);
    this->fields._Network_k__BackingField = v11;
    sub_1C9403C(&this->fields._Network_k__BackingField, v11);
    v13 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCampaign,
            v12);
    this->fields._Campaign_k__BackingField = v13;
    sub_1C9403C(&this->fields._Campaign_k__BackingField, v13);
    v15 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdgroup,
            v14);
    this->fields._Adgroup_k__BackingField = v15;
    sub_1C9403C(&this->fields._Adgroup_k__BackingField, v15);
    v17 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCreative,
            v16);
    this->fields._Creative_k__BackingField = v17;
    sub_1C9403C(&this->fields._Creative_k__BackingField, v17);
    v19 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyClickLabel,
            v18);
    this->fields._ClickLabel_k__BackingField = v19;
    sub_1C9403C(&this->fields._ClickLabel_k__BackingField, v19);
    v21 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostType,
            v20);
    this->fields._CostType_k__BackingField = v21;
    sub_1C9403C(&this->fields._CostType_k__BackingField, v21);
    v23 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v23 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v24 = AdjustSdk_AdjustUtils__TryGetValue(dicAttributionData, v23->static_fields->KeyCostAmount, v22);
    if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
    InvariantCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_InvariantCulture(0);
    v26 = System_Double__Parse_65837596(v24, InvariantCulture, 0);
    v48 = (struct System_Nullable_double__o)0LL;
    *(_QWORD *)&v49.fields.value = Method_System_Nullable_double___ctor__;
    *(_QWORD *)&v49.fields.hasValue = &v48;
    System_Nullable_double____ctor(v49, v26, v27);
    this->fields._CostAmount_k__BackingField = v48;
    v29 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v29 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v30 = AdjustSdk_AdjustUtils__TryGetValue(dicAttributionData, v29->static_fields->KeyCostCurrency, v28);
    this->fields._CostCurrency_k__BackingField = v30;
    sub_1C9403C(&this->fields._CostCurrency_k__BackingField, v30);
    v32 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyFbInstallReferrer,
            v31);
    this->fields._FbInstallReferrer_k__BackingField = v32;
    sub_1C9403C(&this->fields._FbInstallReferrer_k__BackingField, v32);
    v34 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            v33);
    v36 = AdjustSdk_JSONNode__Parse(v34, v35);
    v38 = AdjustSdk_JSONNode__op_Equality(v36, 0, v37);
    if ( !v38 )
    {
      if ( !v36 )
        sub_1C942F0(v38, v39);
      v40 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v36->klass->vtable._27_get_AsObject.methodPtr)(
                                      v36,
                                      v36->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v40, 0, v41) )
      {
        v42 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v42,
          (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v42;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_1C9403C(p_JsonResponse_k__BackingField, v42);
        v44 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v36->klass->vtable._27_get_AsObject.methodPtr)(
                v36,
                v36->klass->vtable._27_get_AsObject.method);
        v46 = *p_JsonResponse_k__BackingField;
        v47 = (AdjustSdk_JSONClass_o *)v44;
        if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v47, v46, v45);
      }
    }
  }
}


void AdjustSdk_AdjustAttribution__BuildJsonResponseFromString(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *jsonResponseString,
        const MethodInfo *method)
{
  AdjustSdk_JSONNode_o *v5; // x20
  const MethodInfo *v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_Dictionary_string__object__o *v13; // x19
  AdjustSdk_JSONClass_o *v14; // x20

  if ( (byte_4D24A63 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A63 = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_1C9403C(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_1C942F0(v9, v10);
    v11 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
            v5,
            v5->klass->vtable._27_get_AsObject.method);
    v13 = *p_JsonResponse_k__BackingField;
    v14 = (AdjustSdk_JSONClass_o *)v11;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v14, v13, v12);
  }
}


System_String_o *AdjustSdk_AdjustAttribution__GetJsonResponseAsString(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_4D24A64 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_4D24A64 = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  return AdjustSdk_AdjustUtils__GetJsonResponseCompact(JsonResponse_k__BackingField, method);
}


System_String_o *AdjustSdk_AdjustAttribution__get_Adgroup(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._Adgroup_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAttribution__get_Campaign(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._Campaign_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAttribution__get_ClickLabel(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._ClickLabel_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_double__o AdjustSdk_AdjustAttribution__get_CostAmount(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  double value; // x1
  __int64 v3; // x0
  System_Nullable_double__o result; // 0:x0.16

  value = this->fields._CostAmount_k__BackingField.fields.value;
  v3 = *(_QWORD *)&this->fields._CostAmount_k__BackingField.fields.hasValue;
  result.fields.value = value;
  *(_QWORD *)&result.fields.hasValue = v3;
  return result;
}


System_String_o *AdjustSdk_AdjustAttribution__get_CostCurrency(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._CostCurrency_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAttribution__get_CostType(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._CostType_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAttribution__get_Creative(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._Creative_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAttribution__get_FbInstallReferrer(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._FbInstallReferrer_k__BackingField;
}


System_Collections_Generic_Dictionary_string__object__o *AdjustSdk_AdjustAttribution__get_JsonResponse(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._JsonResponse_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAttribution__get_Network(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._Network_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAttribution__get_TrackerName(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._TrackerName_k__BackingField;
}


System_String_o *AdjustSdk_AdjustAttribution__get_TrackerToken(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  return this->fields._TrackerToken_k__BackingField;
}


void AdjustSdk_AdjustAttribution__set_Adgroup(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Adgroup_k__BackingField = value;
  sub_1C9403C(&this->fields._Adgroup_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_Campaign(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Campaign_k__BackingField = value;
  sub_1C9403C(&this->fields._Campaign_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_ClickLabel(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ClickLabel_k__BackingField = value;
  sub_1C9403C(&this->fields._ClickLabel_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_CostAmount(
        AdjustSdk_AdjustAttribution_o *this,
        System_Nullable_double__o value,
        const MethodInfo *method)
{
  this->fields._CostAmount_k__BackingField = value;
}


void AdjustSdk_AdjustAttribution__set_CostCurrency(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._CostCurrency_k__BackingField = value;
  sub_1C9403C(&this->fields._CostCurrency_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_CostType(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._CostType_k__BackingField = value;
  sub_1C9403C(&this->fields._CostType_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_Creative(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Creative_k__BackingField = value;
  sub_1C9403C(&this->fields._Creative_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_FbInstallReferrer(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._FbInstallReferrer_k__BackingField = value;
  sub_1C9403C(&this->fields._FbInstallReferrer_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_JsonResponse(
        AdjustSdk_AdjustAttribution_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_1C9403C(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_Network(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Network_k__BackingField = value;
  sub_1C9403C(&this->fields._Network_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_TrackerName(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TrackerName_k__BackingField = value;
  sub_1C9403C(&this->fields._TrackerName_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_TrackerToken(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TrackerToken_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustConfig___ctor(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *appToken,
        int32_t environment,
        const MethodInfo *method)
{
  AdjustSdk_AdjustConfig_o *v6; // x21

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._AppToken_k__BackingField = appToken;
  v6 = (AdjustSdk_AdjustConfig_o *)((char *)v6 + 16);
  sub_1C9403C(v6, appToken);
  LODWORD(v6->fields._UrlStrategyDomains_k__BackingField) = environment;
}


void AdjustSdk_AdjustConfig___ctor_30919960(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *appToken,
        int32_t environment,
        bool allowSuppressLogLevel,
        const MethodInfo *method)
{
  AdjustSdk_AdjustConfig_Fields *p_fields; // x19
  struct System_Nullable_bool__o *v10; // x0
  struct System_Nullable_bool__o v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D24A65 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_bool___ctor__);
    byte_4D24A65 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._AppToken_k__BackingField = appToken;
  p_fields = &this->fields;
  sub_1C9403C(p_fields, appToken);
  p_fields->_Environment_k__BackingField = environment;
  v10 = &v11;
  v11 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v10,
    allowSuppressLogLevel,
    (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
  p_fields->_AllowSuppressLogLevel_k__BackingField = v11;
}


void AdjustSdk_AdjustConfig__SetUrlStrategy(
        AdjustSdk_AdjustConfig_o *this,
        System_Collections_Generic_List_string__o *urlStrategyDomains,
        bool shouldUseSubdomains,
        bool isDataResidency,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o **p_UrlStrategyDomains_k__BackingField; // x19
  __int16 *v10; // x0
  __int16 *v11; // x0
  __int16 v12; // [xsp+8h] [xbp-38h] BYREF
  __int16 v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D24A66 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_bool___ctor__);
    byte_4D24A66 = 1;
  }
  this->fields._UrlStrategyDomains_k__BackingField = urlStrategyDomains;
  p_UrlStrategyDomains_k__BackingField = &this->fields._UrlStrategyDomains_k__BackingField;
  sub_1C9403C(p_UrlStrategyDomains_k__BackingField, urlStrategyDomains);
  v10 = &v13;
  v13 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v10,
    shouldUseSubdomains,
    (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
  v11 = &v12;
  *((_WORD *)p_UrlStrategyDomains_k__BackingField - 7) = v13;
  v12 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v11,
    isDataResidency,
    (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
  *((_WORD *)p_UrlStrategyDomains_k__BackingField - 8) = v12;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_AllowSuppressLogLevel(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._AllowSuppressLogLevel_k__BackingField;
}


System_String_o *AdjustSdk_AdjustConfig__get_AppToken(AdjustSdk_AdjustConfig_o *this, const MethodInfo *method)
{
  return this->fields._AppToken_k__BackingField;
}


System_Nullable_int__o AdjustSdk_AdjustConfig__get_AttConsentWaitingInterval(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._AttConsentWaitingInterval_k__BackingField;
}


System_Action_AdjustAttribution__o *AdjustSdk_AdjustConfig__get_AttributionChangedDelegate(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._AttributionChangedDelegate_k__BackingField;
}


System_String_o *AdjustSdk_AdjustConfig__get_DefaultTracker(AdjustSdk_AdjustConfig_o *this, const MethodInfo *method)
{
  return this->fields._DefaultTracker_k__BackingField;
}


System_Action_string__o *AdjustSdk_AdjustConfig__get_DeferredDeeplinkDelegate(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._DeferredDeeplinkDelegate_k__BackingField;
}


int32_t AdjustSdk_AdjustConfig__get_Environment(AdjustSdk_AdjustConfig_o *this, const MethodInfo *method)
{
  return this->fields._Environment_k__BackingField;
}


System_Nullable_int__o AdjustSdk_AdjustConfig__get_EventDeduplicationIdsMaxSize(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._EventDeduplicationIdsMaxSize_k__BackingField;
}


System_Action_AdjustEventFailure__o *AdjustSdk_AdjustConfig__get_EventFailureDelegate(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._EventFailureDelegate_k__BackingField;
}


System_Action_AdjustEventSuccess__o *AdjustSdk_AdjustConfig__get_EventSuccessDelegate(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._EventSuccessDelegate_k__BackingField;
}


System_String_o *AdjustSdk_AdjustConfig__get_ExternalDeviceId(AdjustSdk_AdjustConfig_o *this, const MethodInfo *method)
{
  return this->fields._ExternalDeviceId_k__BackingField;
}


System_String_o *AdjustSdk_AdjustConfig__get_FbAppId(AdjustSdk_AdjustConfig_o *this, const MethodInfo *method)
{
  return this->fields._FbAppId_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsAdServicesEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAdServicesEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsAppTrackingTransparencyUsageEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAppTrackingTransparencyUsageEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsCoppaComplianceEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCoppaComplianceEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsCostDataInAttributionEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCostDataInAttributionEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsDataResidency(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDataResidency_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsDeferredDeeplinkOpeningEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsDeviceIdsReadingOnceEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDeviceIdsReadingOnceEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsFirstSessionDelayEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFirstSessionDelayEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsIdfaReadingEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsIdfaReadingEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsIdfvReadingEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsIdfvReadingEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsLinkMeEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLinkMeEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsPlayStoreKidsComplianceEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayStoreKidsComplianceEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsPreinstallTrackingEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPreinstallTrackingEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsSendingInBackgroundEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSendingInBackgroundEnabled_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_IsSkanAttributionEnabled(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSkanAttributionEnabled_k__BackingField;
}


System_Nullable_AdjustLogLevel__o AdjustSdk_AdjustConfig__get_LogLevel(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._LogLevel_k__BackingField;
}


System_String_o *AdjustSdk_AdjustConfig__get_PreinstallFilePath(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._PreinstallFilePath_k__BackingField;
}


System_Action_AdjustSessionFailure__o *AdjustSdk_AdjustConfig__get_SessionFailureDelegate(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._SessionFailureDelegate_k__BackingField;
}


System_Action_AdjustSessionSuccess__o *AdjustSdk_AdjustConfig__get_SessionSuccessDelegate(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._SessionSuccessDelegate_k__BackingField;
}


System_Nullable_bool__o AdjustSdk_AdjustConfig__get_ShouldUseSubdomains(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._ShouldUseSubdomains_k__BackingField;
}


System_Action_Dictionary_string__string___o *AdjustSdk_AdjustConfig__get_SkanUpdatedDelegate(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._SkanUpdatedDelegate_k__BackingField;
}


AdjustSdk_AdjustStoreInfo_o *AdjustSdk_AdjustConfig__get_StoreInfo(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._StoreInfo_k__BackingField;
}


System_Collections_Generic_List_string__o *AdjustSdk_AdjustConfig__get_UrlStrategyDomains(
        AdjustSdk_AdjustConfig_o *this,
        const MethodInfo *method)
{
  return this->fields._UrlStrategyDomains_k__BackingField;
}


void AdjustSdk_AdjustConfig__set_AllowSuppressLogLevel(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._AllowSuppressLogLevel_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_AppToken(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._AppToken_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustConfig__set_AttConsentWaitingInterval(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_int__o value,
        const MethodInfo *method)
{
  this->fields._AttConsentWaitingInterval_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_AttributionChangedDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_AdjustAttribution__o *value,
        const MethodInfo *method)
{
  this->fields._AttributionChangedDelegate_k__BackingField = value;
  sub_1C9403C(&this->fields._AttributionChangedDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_DefaultTracker(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._DefaultTracker_k__BackingField = value;
  sub_1C9403C(&this->fields._DefaultTracker_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_DeferredDeeplinkDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  this->fields._DeferredDeeplinkDelegate_k__BackingField = value;
  sub_1C9403C(&this->fields._DeferredDeeplinkDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_Environment(AdjustSdk_AdjustConfig_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Environment_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_EventDeduplicationIdsMaxSize(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_int__o value,
        const MethodInfo *method)
{
  this->fields._EventDeduplicationIdsMaxSize_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_EventFailureDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_AdjustEventFailure__o *value,
        const MethodInfo *method)
{
  this->fields._EventFailureDelegate_k__BackingField = value;
  sub_1C9403C(&this->fields._EventFailureDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_EventSuccessDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_AdjustEventSuccess__o *value,
        const MethodInfo *method)
{
  this->fields._EventSuccessDelegate_k__BackingField = value;
  sub_1C9403C(&this->fields._EventSuccessDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_ExternalDeviceId(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ExternalDeviceId_k__BackingField = value;
  sub_1C9403C(&this->fields._ExternalDeviceId_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_FbAppId(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._FbAppId_k__BackingField = value;
  sub_1C9403C(&this->fields._FbAppId_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_IsAdServicesEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsAdServicesEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsAppTrackingTransparencyUsageEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsAppTrackingTransparencyUsageEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsCoppaComplianceEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsCoppaComplianceEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsCostDataInAttributionEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsCostDataInAttributionEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsDataResidency(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsDataResidency_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsDeferredDeeplinkOpeningEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsDeviceIdsReadingOnceEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsDeviceIdsReadingOnceEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsFirstSessionDelayEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsFirstSessionDelayEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsIdfaReadingEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsIdfaReadingEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsIdfvReadingEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsIdfvReadingEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsLinkMeEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsLinkMeEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsPlayStoreKidsComplianceEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsPlayStoreKidsComplianceEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsPreinstallTrackingEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsPreinstallTrackingEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsSendingInBackgroundEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsSendingInBackgroundEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_IsSkanAttributionEnabled(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsSkanAttributionEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_LogLevel(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_AdjustLogLevel__o value,
        const MethodInfo *method)
{
  this->fields._LogLevel_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_PreinstallFilePath(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._PreinstallFilePath_k__BackingField = value;
  sub_1C9403C(&this->fields._PreinstallFilePath_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_SessionFailureDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_AdjustSessionFailure__o *value,
        const MethodInfo *method)
{
  this->fields._SessionFailureDelegate_k__BackingField = value;
  sub_1C9403C(&this->fields._SessionFailureDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_SessionSuccessDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_AdjustSessionSuccess__o *value,
        const MethodInfo *method)
{
  this->fields._SessionSuccessDelegate_k__BackingField = value;
  sub_1C9403C(&this->fields._SessionSuccessDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_ShouldUseSubdomains(
        AdjustSdk_AdjustConfig_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._ShouldUseSubdomains_k__BackingField = value;
}


void AdjustSdk_AdjustConfig__set_SkanUpdatedDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_Dictionary_string__string___o *value,
        const MethodInfo *method)
{
  this->fields._SkanUpdatedDelegate_k__BackingField = value;
  sub_1C9403C(&this->fields._SkanUpdatedDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_StoreInfo(
        AdjustSdk_AdjustConfig_o *this,
        AdjustSdk_AdjustStoreInfo_o *value,
        const MethodInfo *method)
{
  this->fields._StoreInfo_k__BackingField = value;
  sub_1C9403C(&this->fields._StoreInfo_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_UrlStrategyDomains(
        AdjustSdk_AdjustConfig_o *this,
        System_Collections_Generic_List_string__o *value,
        const MethodInfo *method)
{
  this->fields._UrlStrategyDomains_k__BackingField = value;
  sub_1C9403C(&this->fields._UrlStrategyDomains_k__BackingField, value);
}


void AdjustSdk_AdjustDeeplink___ctor(
        AdjustSdk_AdjustDeeplink_o *this,
        System_String_o *deeplink,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Deeplink_k__BackingField = deeplink;
  sub_1C9403C(&this->fields, deeplink);
}


System_String_o *AdjustSdk_AdjustDeeplink__get_Deeplink(AdjustSdk_AdjustDeeplink_o *this, const MethodInfo *method)
{
  return this->fields._Deeplink_k__BackingField;
}


System_String_o *AdjustSdk_AdjustDeeplink__get_Referrer(AdjustSdk_AdjustDeeplink_o *this, const MethodInfo *method)
{
  return this->fields._Referrer_k__BackingField;
}


void AdjustSdk_AdjustDeeplink__set_Deeplink(
        AdjustSdk_AdjustDeeplink_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Deeplink_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustDeeplink__set_Referrer(
        AdjustSdk_AdjustDeeplink_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Referrer_k__BackingField = value;
  sub_1C9403C(&this->fields._Referrer_k__BackingField, value);
}


System_String_o *AdjustSdk_AdjustEnvironmentExtension__ToLowercaseString(
        int32_t adjustEnvironment,
        const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_4D24A67 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23011/*"production"*/);
    sub_1C94098(&StringLiteral_24657/*"unknown"*/);
    sub_1C94098(&StringLiteral_23414/*"sandbox"*/);
    byte_4D24A67 = 1;
  }
  if ( adjustEnvironment == 1 )
    v3 = &StringLiteral_23011/*"production"*/;
  else
    v3 = &StringLiteral_24657/*"unknown"*/;
  if ( !adjustEnvironment )
    v3 = (__int64 *)&StringLiteral_23414/*"sandbox"*/;
  return (System_String_o *)*v3;
}


void AdjustSdk_AdjustEvent___ctor(AdjustSdk_AdjustEvent_o *this, System_String_o *eventToken, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._EventToken_k__BackingField = eventToken;
  sub_1C9403C(&this->fields._EventToken_k__BackingField, eventToken);
}


void AdjustSdk_AdjustEvent__AddCallbackParameter(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x0
  AdjustSdk_AdjustEvent_Fields *p_fields; // x20
  struct System_Collections_Generic_List_string__o *innerCallbackParameters; // t1
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4D24A6B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A6B = 1;
  }
  innerCallbackParameters = this->fields.innerCallbackParameters;
  p_fields = &this->fields;
  v7 = (System_Collections_Generic_List_object__o *)innerCallbackParameters;
  if ( !innerCallbackParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerCallbackParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_1C9403C(p_fields, v10);
    v7 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
    if ( !p_fields->innerCallbackParameters )
      goto LABEL_14;
  }
  items = v7->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    sub_1C9403C(v14 + 4, key);
  }
  v7 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
  if ( !p_fields->innerCallbackParameters
    || (v15 = v7->fields._items, v16 = Method_System_Collections_Generic_List_string__Add__, ++v7->fields._version, !v15) )
  {
LABEL_14:
    sub_1C942F0(v7, key);
  }
  v17 = v7->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v7->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)value;
    sub_1C9403C(v18 + 4, value);
  }
}


void AdjustSdk_AdjustEvent__AddPartnerParameter(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x0
  struct System_Collections_Generic_List_string__o **p_innerPartnerParameters; // x20
  struct System_Collections_Generic_List_string__o *innerPartnerParameters; // t1
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4D24A6C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A6C = 1;
  }
  innerPartnerParameters = this->fields.innerPartnerParameters;
  p_innerPartnerParameters = &this->fields.innerPartnerParameters;
  v7 = (System_Collections_Generic_List_object__o *)innerPartnerParameters;
  if ( !innerPartnerParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_1C9403C(p_innerPartnerParameters, v10);
    v7 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
    if ( !*p_innerPartnerParameters )
      goto LABEL_14;
  }
  items = v7->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    sub_1C9403C(v14 + 4, key);
  }
  v7 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
  if ( !*p_innerPartnerParameters
    || (v15 = v7->fields._items, v16 = Method_System_Collections_Generic_List_string__Add__, ++v7->fields._version, !v15) )
  {
LABEL_14:
    sub_1C942F0(v7, key);
  }
  v17 = v7->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v7->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)value;
    sub_1C9403C(v18 + 4, value);
  }
}


void AdjustSdk_AdjustEvent__SetRevenue(
        AdjustSdk_AdjustEvent_o *this,
        double amount,
        System_String_o *currency,
        const MethodInfo *method)
{
  struct System_Nullable_double__o v7; // q0
  struct System_Nullable_double__o v8; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_double__o v9; // 0:x0.16

  if ( (byte_4D24A6A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_double___ctor__);
    byte_4D24A6A = 1;
  }
  *(_QWORD *)&v9.fields.value = Method_System_Nullable_double___ctor__;
  *(_QWORD *)&v9.fields.hasValue = &v8;
  v8 = (struct System_Nullable_double__o)0LL;
  System_Nullable_double____ctor(v9, amount, (const MethodInfo_3992070 *)method);
  v7 = v8;
  this->fields._Currency_k__BackingField = currency;
  this->fields._Revenue_k__BackingField = v7;
  sub_1C9403C(&this->fields._Currency_k__BackingField, currency);
}


System_String_o *AdjustSdk_AdjustEvent__get_CallbackId(AdjustSdk_AdjustEvent_o *this, const MethodInfo *method)
{
  return this->fields._CallbackId_k__BackingField;
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustEvent__get_CallbackParameters(
        AdjustSdk_AdjustEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A68 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A68 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerCallbackParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


System_String_o *AdjustSdk_AdjustEvent__get_Currency(AdjustSdk_AdjustEvent_o *this, const MethodInfo *method)
{
  return this->fields._Currency_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEvent__get_DeduplicationId(AdjustSdk_AdjustEvent_o *this, const MethodInfo *method)
{
  return this->fields._DeduplicationId_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEvent__get_EventToken(AdjustSdk_AdjustEvent_o *this, const MethodInfo *method)
{
  return this->fields._EventToken_k__BackingField;
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustEvent__get_PartnerParameters(
        AdjustSdk_AdjustEvent_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A69 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A69 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


System_String_o *AdjustSdk_AdjustEvent__get_ProductId(AdjustSdk_AdjustEvent_o *this, const MethodInfo *method)
{
  return this->fields._ProductId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_double__o AdjustSdk_AdjustEvent__get_Revenue(AdjustSdk_AdjustEvent_o *this, const MethodInfo *method)
{
  double value; // x1
  __int64 v3; // x0
  System_Nullable_double__o result; // 0:x0.16

  value = this->fields._Revenue_k__BackingField.fields.value;
  v3 = *(_QWORD *)&this->fields._Revenue_k__BackingField.fields.hasValue;
  result.fields.value = value;
  *(_QWORD *)&result.fields.hasValue = v3;
  return result;
}


System_String_o *AdjustSdk_AdjustEvent__get_TransactionId(AdjustSdk_AdjustEvent_o *this, const MethodInfo *method)
{
  return this->fields._TransactionId_k__BackingField;
}


void AdjustSdk_AdjustEvent__set_CallbackId(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._CallbackId_k__BackingField = value;
  sub_1C9403C(&this->fields._CallbackId_k__BackingField, value);
}


void AdjustSdk_AdjustEvent__set_Currency(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Currency_k__BackingField = value;
  sub_1C9403C(&this->fields._Currency_k__BackingField, value);
}


void AdjustSdk_AdjustEvent__set_DeduplicationId(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._DeduplicationId_k__BackingField = value;
  sub_1C9403C(&this->fields._DeduplicationId_k__BackingField, value);
}


void AdjustSdk_AdjustEvent__set_EventToken(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._EventToken_k__BackingField = value;
  sub_1C9403C(&this->fields._EventToken_k__BackingField, value);
}


void AdjustSdk_AdjustEvent__set_ProductId(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ProductId_k__BackingField = value;
  sub_1C9403C(&this->fields._ProductId_k__BackingField, value);
}


void AdjustSdk_AdjustEvent__set_Revenue(
        AdjustSdk_AdjustEvent_o *this,
        System_Nullable_double__o value,
        const MethodInfo *method)
{
  this->fields._Revenue_k__BackingField = value;
}


void AdjustSdk_AdjustEvent__set_TransactionId(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TransactionId_k__BackingField = value;
  sub_1C9403C(&this->fields._TransactionId_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure___ctor(AdjustSdk_AdjustEventFailure_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustEventFailure___ctor_30993880(
        AdjustSdk_AdjustEventFailure_o *this,
        System_Collections_Generic_Dictionary_string__string__o *eventFailureDataMap,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  AdjustSdk_AdjustUtils_c *v6; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v8; // x2
  struct System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  struct System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  struct System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  struct System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  System_String_o *v17; // x21
  const MethodInfo *v18; // x2
  AdjustSdk_AdjustUtils_c *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  AdjustSdk_JSONNode_o *v22; // x20
  const MethodInfo *v23; // x2
  _BOOL8 v24; // x0
  __int64 v25; // x1
  AdjustSdk_JSONNode_o *v26; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_Dictionary_object__object__o *v28; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_Dictionary_string__object__o *v32; // x19
  AdjustSdk_JSONClass_o *v33; // x20
  bool result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D24A6D & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&bool_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A6D = 1;
  }
  result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( eventFailureDataMap )
  {
    v6 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v6 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(eventFailureDataMap, v6->static_fields->KeyAdid, v5);
    this->fields._Adid_k__BackingField = Value;
    sub_1C9403C(&this->fields, Value);
    v9 = AdjustSdk_AdjustUtils__TryGetValue(
           eventFailureDataMap,
           AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
           v8);
    this->fields._Message_k__BackingField = v9;
    sub_1C9403C(&this->fields._Message_k__BackingField, v9);
    v11 = AdjustSdk_AdjustUtils__TryGetValue(
            eventFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
            v10);
    this->fields._Timestamp_k__BackingField = v11;
    sub_1C9403C(&this->fields._Timestamp_k__BackingField, v11);
    v13 = AdjustSdk_AdjustUtils__TryGetValue(
            eventFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken,
            v12);
    this->fields._EventToken_k__BackingField = v13;
    sub_1C9403C(&this->fields._EventToken_k__BackingField, v13);
    v15 = AdjustSdk_AdjustUtils__TryGetValue(
            eventFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId,
            v14);
    this->fields._CallbackId_k__BackingField = v15;
    sub_1C9403C(&this->fields._CallbackId_k__BackingField, v15);
    v17 = AdjustSdk_AdjustUtils__TryGetValue(
            eventFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry,
            v16);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    if ( System_Boolean__TryParse(v17, &result, 0) )
      this->fields._WillRetry_k__BackingField = result;
    v19 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v19 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v20 = AdjustSdk_AdjustUtils__TryGetValue(eventFailureDataMap, v19->static_fields->KeyJsonResponse, v18);
    v22 = AdjustSdk_JSONNode__Parse(v20, v21);
    v24 = AdjustSdk_JSONNode__op_Equality(v22, 0, v23);
    if ( !v24 )
    {
      if ( !v22 )
        sub_1C942F0(v24, v25);
      v26 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v22->klass->vtable._27_get_AsObject.methodPtr)(
                                      v22,
                                      v22->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v26, 0, v27) )
      {
        v28 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v28,
          (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v28;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_1C9403C(p_JsonResponse_k__BackingField, v28);
        v30 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v22->klass->vtable._27_get_AsObject.methodPtr)(
                v22,
                v22->klass->vtable._27_get_AsObject.method);
        v32 = *p_JsonResponse_k__BackingField;
        v33 = (AdjustSdk_JSONClass_o *)v30;
        if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v33, v32, v31);
      }
    }
  }
}


void AdjustSdk_AdjustEventFailure___ctor_30994496(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  AdjustSdk_AdjustUtils_c *v9; // x0
  struct System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  struct System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  struct System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  struct System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  System_String_o *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  AdjustSdk_JSONNode_o *v23; // x20
  const MethodInfo *v24; // x2
  AdjustSdk_JSONNode_o *v25; // x0
  const MethodInfo *v26; // x2
  System_Collections_Generic_Dictionary_object__object__o *v27; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v29; // x0
  const MethodInfo *v30; // x2
  System_Collections_Generic_Dictionary_string__object__o *v31; // x19
  AdjustSdk_JSONClass_o *v32; // x20

  if ( (byte_4D24A6E & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A6E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v9 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v9 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v10 = AdjustSdk_AdjustUtils__GetJsonString(v6, v9->static_fields->KeyAdid, v8);
    this->fields._Adid_k__BackingField = v10;
    sub_1C9403C(&this->fields, v10);
    v12 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage, v11);
    this->fields._Message_k__BackingField = v12;
    sub_1C9403C(&this->fields._Message_k__BackingField, v12);
    v14 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp, v13);
    this->fields._Timestamp_k__BackingField = v14;
    sub_1C9403C(&this->fields._Timestamp_k__BackingField, v14);
    v16 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken, v15);
    this->fields._EventToken_k__BackingField = v16;
    sub_1C9403C(&this->fields._EventToken_k__BackingField, v16);
    v18 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId, v17);
    this->fields._CallbackId_k__BackingField = v18;
    sub_1C9403C(&this->fields._CallbackId_k__BackingField, v18);
    v20 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry, v19);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v21 = System_Convert__ToBoolean_65496288(v20, 0);
    this->fields._WillRetry_k__BackingField = v21;
    if ( !v6 )
      goto LABEL_16;
    v23 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    v21 = AdjustSdk_JSONNode__op_Equality(v23, 0, v24);
    if ( v21 )
      return;
    if ( !v23 )
LABEL_16:
      sub_1C942F0(v21, v22);
    v25 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v23->klass->vtable._27_get_AsObject.methodPtr)(
                                    v23,
                                    v23->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v25, 0, v26) )
    {
      v27 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v27,
        (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v27;
      p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
      sub_1C9403C(p_JsonResponse_k__BackingField, v27);
      v29 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v23->klass->vtable._27_get_AsObject.methodPtr)(
              v23,
              v23->klass->vtable._27_get_AsObject.method);
      v31 = *p_JsonResponse_k__BackingField;
      v32 = (AdjustSdk_JSONClass_o *)v29;
      if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v32, v31, v30);
    }
  }
}


void AdjustSdk_AdjustEventFailure__BuildJsonResponseFromString(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *jsonResponseString,
        const MethodInfo *method)
{
  AdjustSdk_JSONNode_o *v5; // x20
  const MethodInfo *v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_Dictionary_string__object__o *v13; // x19
  AdjustSdk_JSONClass_o *v14; // x20

  if ( (byte_4D24A6F & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A6F = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_1C9403C(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_1C942F0(v9, v10);
    v11 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
            v5,
            v5->klass->vtable._27_get_AsObject.method);
    v13 = *p_JsonResponse_k__BackingField;
    v14 = (AdjustSdk_JSONClass_o *)v11;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v14, v13, v12);
  }
}


System_String_o *AdjustSdk_AdjustEventFailure__GetJsonResponseAsString(
        AdjustSdk_AdjustEventFailure_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_4D24A70 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_4D24A70 = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  return AdjustSdk_AdjustUtils__GetJsonResponseCompact(JsonResponse_k__BackingField, method);
}


System_String_o *AdjustSdk_AdjustEventFailure__get_Adid(AdjustSdk_AdjustEventFailure_o *this, const MethodInfo *method)
{
  return this->fields._Adid_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEventFailure__get_CallbackId(
        AdjustSdk_AdjustEventFailure_o *this,
        const MethodInfo *method)
{
  return this->fields._CallbackId_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEventFailure__get_EventToken(
        AdjustSdk_AdjustEventFailure_o *this,
        const MethodInfo *method)
{
  return this->fields._EventToken_k__BackingField;
}


System_Collections_Generic_Dictionary_string__object__o *AdjustSdk_AdjustEventFailure__get_JsonResponse(
        AdjustSdk_AdjustEventFailure_o *this,
        const MethodInfo *method)
{
  return this->fields._JsonResponse_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEventFailure__get_Message(
        AdjustSdk_AdjustEventFailure_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEventFailure__get_Timestamp(
        AdjustSdk_AdjustEventFailure_o *this,
        const MethodInfo *method)
{
  return this->fields._Timestamp_k__BackingField;
}


bool AdjustSdk_AdjustEventFailure__get_WillRetry(AdjustSdk_AdjustEventFailure_o *this, const MethodInfo *method)
{
  return this->fields._WillRetry_k__BackingField;
}


void AdjustSdk_AdjustEventFailure__set_Adid(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Adid_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustEventFailure__set_CallbackId(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._CallbackId_k__BackingField = value;
  sub_1C9403C(&this->fields._CallbackId_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure__set_EventToken(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._EventToken_k__BackingField = value;
  sub_1C9403C(&this->fields._EventToken_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure__set_JsonResponse(
        AdjustSdk_AdjustEventFailure_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_1C9403C(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure__set_Message(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Message_k__BackingField = value;
  sub_1C9403C(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure__set_Timestamp(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Timestamp_k__BackingField = value;
  sub_1C9403C(&this->fields._Timestamp_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure__set_WillRetry(
        AdjustSdk_AdjustEventFailure_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._WillRetry_k__BackingField = value;
}


void AdjustSdk_AdjustEventSuccess___ctor(AdjustSdk_AdjustEventSuccess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustEventSuccess___ctor_30995308(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_Collections_Generic_Dictionary_string__string__o *eventSuccessDataMap,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  AdjustSdk_AdjustUtils_c *v6; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v8; // x2
  struct System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  struct System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  struct System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  struct System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  AdjustSdk_JSONNode_o *v19; // x20
  const MethodInfo *v20; // x2
  _BOOL8 v21; // x0
  __int64 v22; // x1
  AdjustSdk_JSONNode_o *v23; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_Dictionary_object__object__o *v25; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v27; // x0
  const MethodInfo *v28; // x2
  System_Collections_Generic_Dictionary_string__object__o *v29; // x19
  AdjustSdk_JSONClass_o *v30; // x20

  if ( (byte_4D24A71 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A71 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( eventSuccessDataMap )
  {
    v6 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v6 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(eventSuccessDataMap, v6->static_fields->KeyAdid, v5);
    this->fields._Adid_k__BackingField = Value;
    sub_1C9403C(&this->fields, Value);
    v9 = AdjustSdk_AdjustUtils__TryGetValue(
           eventSuccessDataMap,
           AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
           v8);
    this->fields._Message_k__BackingField = v9;
    sub_1C9403C(&this->fields._Message_k__BackingField, v9);
    v11 = AdjustSdk_AdjustUtils__TryGetValue(
            eventSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
            v10);
    this->fields._Timestamp_k__BackingField = v11;
    sub_1C9403C(&this->fields._Timestamp_k__BackingField, v11);
    v13 = AdjustSdk_AdjustUtils__TryGetValue(
            eventSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken,
            v12);
    this->fields._EventToken_k__BackingField = v13;
    sub_1C9403C(&this->fields._EventToken_k__BackingField, v13);
    v15 = AdjustSdk_AdjustUtils__TryGetValue(
            eventSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId,
            v14);
    this->fields._CallbackId_k__BackingField = v15;
    sub_1C9403C(&this->fields._CallbackId_k__BackingField, v15);
    v17 = AdjustSdk_AdjustUtils__TryGetValue(
            eventSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            v16);
    v19 = AdjustSdk_JSONNode__Parse(v17, v18);
    v21 = AdjustSdk_JSONNode__op_Equality(v19, 0, v20);
    if ( !v21 )
    {
      if ( !v19 )
        sub_1C942F0(v21, v22);
      v23 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v19->klass->vtable._27_get_AsObject.methodPtr)(
                                      v19,
                                      v19->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v23, 0, v24) )
      {
        v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v25,
          (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v25;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_1C9403C(p_JsonResponse_k__BackingField, v25);
        v27 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v19->klass->vtable._27_get_AsObject.methodPtr)(
                v19,
                v19->klass->vtable._27_get_AsObject.method);
        v29 = *p_JsonResponse_k__BackingField;
        v30 = (AdjustSdk_JSONClass_o *)v27;
        if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v30, v29, v28);
      }
    }
  }
}


void AdjustSdk_AdjustEventSuccess___ctor_30995824(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  AdjustSdk_AdjustUtils_c *v9; // x0
  struct System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  struct System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  struct System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  struct System_String_o *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  AdjustSdk_JSONNode_o *v21; // x20
  const MethodInfo *v22; // x2
  AdjustSdk_JSONNode_o *v23; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_Dictionary_object__object__o *v25; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v27; // x0
  const MethodInfo *v28; // x2
  System_Collections_Generic_Dictionary_string__object__o *v29; // x19
  AdjustSdk_JSONClass_o *v30; // x20

  if ( (byte_4D24A72 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A72 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v9 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v9 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v10 = AdjustSdk_AdjustUtils__GetJsonString(v6, v9->static_fields->KeyAdid, v8);
    this->fields._Adid_k__BackingField = v10;
    sub_1C9403C(&this->fields, v10);
    v12 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage, v11);
    this->fields._Message_k__BackingField = v12;
    sub_1C9403C(&this->fields._Message_k__BackingField, v12);
    v14 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp, v13);
    this->fields._Timestamp_k__BackingField = v14;
    sub_1C9403C(&this->fields._Timestamp_k__BackingField, v14);
    v16 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken, v15);
    this->fields._EventToken_k__BackingField = v16;
    sub_1C9403C(&this->fields._EventToken_k__BackingField, v16);
    v18 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId, v17);
    this->fields._CallbackId_k__BackingField = v18;
    v19 = sub_1C9403C(&this->fields._CallbackId_k__BackingField, v18);
    if ( !v6 )
      goto LABEL_14;
    v21 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    v19 = AdjustSdk_JSONNode__op_Equality(v21, 0, v22);
    if ( (v19 & 1) != 0 )
      return;
    if ( !v21 )
LABEL_14:
      sub_1C942F0(v19, v20);
    v23 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v21->klass->vtable._27_get_AsObject.methodPtr)(
                                    v21,
                                    v21->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v23, 0, v24) )
    {
      v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v25,
        (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v25;
      p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
      sub_1C9403C(p_JsonResponse_k__BackingField, v25);
      v27 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v21->klass->vtable._27_get_AsObject.methodPtr)(
              v21,
              v21->klass->vtable._27_get_AsObject.method);
      v29 = *p_JsonResponse_k__BackingField;
      v30 = (AdjustSdk_JSONClass_o *)v27;
      if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v30, v29, v28);
    }
  }
}


void AdjustSdk_AdjustEventSuccess__BuildJsonResponseFromString(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *jsonResponseString,
        const MethodInfo *method)
{
  AdjustSdk_JSONNode_o *v5; // x20
  const MethodInfo *v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_Dictionary_string__object__o *v13; // x19
  AdjustSdk_JSONClass_o *v14; // x20

  if ( (byte_4D24A73 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A73 = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_1C9403C(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_1C942F0(v9, v10);
    v11 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
            v5,
            v5->klass->vtable._27_get_AsObject.method);
    v13 = *p_JsonResponse_k__BackingField;
    v14 = (AdjustSdk_JSONClass_o *)v11;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v14, v13, v12);
  }
}


System_String_o *AdjustSdk_AdjustEventSuccess__GetJsonResponseAsString(
        AdjustSdk_AdjustEventSuccess_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_4D24A74 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_4D24A74 = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  return AdjustSdk_AdjustUtils__GetJsonResponseCompact(JsonResponse_k__BackingField, method);
}


System_String_o *AdjustSdk_AdjustEventSuccess__get_Adid(AdjustSdk_AdjustEventSuccess_o *this, const MethodInfo *method)
{
  return this->fields._Adid_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEventSuccess__get_CallbackId(
        AdjustSdk_AdjustEventSuccess_o *this,
        const MethodInfo *method)
{
  return this->fields._CallbackId_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEventSuccess__get_EventToken(
        AdjustSdk_AdjustEventSuccess_o *this,
        const MethodInfo *method)
{
  return this->fields._EventToken_k__BackingField;
}


System_Collections_Generic_Dictionary_string__object__o *AdjustSdk_AdjustEventSuccess__get_JsonResponse(
        AdjustSdk_AdjustEventSuccess_o *this,
        const MethodInfo *method)
{
  return this->fields._JsonResponse_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEventSuccess__get_Message(
        AdjustSdk_AdjustEventSuccess_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


System_String_o *AdjustSdk_AdjustEventSuccess__get_Timestamp(
        AdjustSdk_AdjustEventSuccess_o *this,
        const MethodInfo *method)
{
  return this->fields._Timestamp_k__BackingField;
}


void AdjustSdk_AdjustEventSuccess__set_Adid(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Adid_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustEventSuccess__set_CallbackId(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._CallbackId_k__BackingField = value;
  sub_1C9403C(&this->fields._CallbackId_k__BackingField, value);
}


void AdjustSdk_AdjustEventSuccess__set_EventToken(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._EventToken_k__BackingField = value;
  sub_1C9403C(&this->fields._EventToken_k__BackingField, value);
}


void AdjustSdk_AdjustEventSuccess__set_JsonResponse(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_1C9403C(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustEventSuccess__set_Message(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Message_k__BackingField = value;
  sub_1C9403C(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustEventSuccess__set_Timestamp(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Timestamp_k__BackingField = value;
  sub_1C9403C(&this->fields._Timestamp_k__BackingField, value);
}


System_String_o *AdjustSdk_AdjustLogLevelExtension__ToLowercaseString(int32_t AdjustLogLevel, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4D24A75 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18617/*"debug"*/);
    sub_1C94098(&StringLiteral_24657/*"unknown"*/);
    sub_1C94098(&StringLiteral_24899/*"verbose"*/);
    sub_1C94098(&StringLiteral_25034/*"warn"*/);
    sub_1C94098(&StringLiteral_24084/*"suppress"*/);
    sub_1C94098(&StringLiteral_16991/*"assert"*/);
    sub_1C94098(&StringLiteral_20962/*"info"*/);
    sub_1C94098(&StringLiteral_19212/*"error"*/);
    byte_4D24A75 = 1;
  }
  if ( (unsigned int)(AdjustLogLevel - 1) > 6 )
    v3 = (System_String_o **)&StringLiteral_24657/*"unknown"*/;
  else
    v3 = (System_String_o **)*(&off_473EEF0 + AdjustLogLevel - 1);
  return *v3;
}


System_String_o *AdjustSdk_AdjustLogLevelExtension__ToUppercaseString(int32_t AdjustLogLevel, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_4D24A76 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_14880/*"UNKNOWN"*/);
    sub_1C94098(&StringLiteral_4968/*"DEBUG"*/);
    sub_1C94098(&StringLiteral_15296/*"VERBOSE"*/);
    sub_1C94098(&StringLiteral_2039/*"ASSERT"*/);
    sub_1C94098(&StringLiteral_5502/*"ERROR"*/);
    sub_1C94098(&StringLiteral_15522/*"WARN"*/);
    sub_1C94098(&StringLiteral_12626/*"SUPPRESS"*/);
    sub_1C94098(&StringLiteral_7458/*"INFO"*/);
    byte_4D24A76 = 1;
  }
  if ( (unsigned int)(AdjustLogLevel - 1) > 6 )
    v3 = (System_String_o **)&StringLiteral_14880/*"UNKNOWN"*/;
  else
    v3 = (System_String_o **)*(&off_473EEB8 + AdjustLogLevel - 1);
  return *v3;
}


void AdjustSdk_AdjustPlayStorePurchase___ctor(
        AdjustSdk_AdjustPlayStorePurchase_o *this,
        System_String_o *productId,
        System_String_o *purchaseToken,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ProductId_k__BackingField = productId;
  sub_1C9403C(&this->fields, productId);
  this->fields._PurchaseToken_k__BackingField = purchaseToken;
  sub_1C9403C(&this->fields._PurchaseToken_k__BackingField, purchaseToken);
}


System_String_o *AdjustSdk_AdjustPlayStorePurchase__get_ProductId(
        AdjustSdk_AdjustPlayStorePurchase_o *this,
        const MethodInfo *method)
{
  return this->fields._ProductId_k__BackingField;
}


System_String_o *AdjustSdk_AdjustPlayStorePurchase__get_PurchaseToken(
        AdjustSdk_AdjustPlayStorePurchase_o *this,
        const MethodInfo *method)
{
  return this->fields._PurchaseToken_k__BackingField;
}


void AdjustSdk_AdjustPlayStorePurchase__set_ProductId(
        AdjustSdk_AdjustPlayStorePurchase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ProductId_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustPlayStorePurchase__set_PurchaseToken(
        AdjustSdk_AdjustPlayStorePurchase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._PurchaseToken_k__BackingField = value;
  sub_1C9403C(&this->fields._PurchaseToken_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription___ctor(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *price,
        System_String_o *currency,
        System_String_o *productId,
        System_String_o *orderId,
        System_String_o *signature,
        System_String_o *purchaseToken,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Price_k__BackingField = price;
  sub_1C9403C(&this->fields._Price_k__BackingField, price);
  this->fields._Currency_k__BackingField = currency;
  sub_1C9403C(&this->fields._Currency_k__BackingField, currency);
  this->fields._ProductId_k__BackingField = productId;
  sub_1C9403C(&this->fields._ProductId_k__BackingField, productId);
  this->fields._OrderId_k__BackingField = orderId;
  sub_1C9403C(&this->fields._OrderId_k__BackingField, orderId);
  this->fields._Signature_k__BackingField = signature;
  sub_1C9403C(&this->fields._Signature_k__BackingField, signature);
  this->fields._PurchaseToken_k__BackingField = purchaseToken;
  sub_1C9403C(&this->fields._PurchaseToken_k__BackingField, purchaseToken);
}


void AdjustSdk_AdjustPlayStoreSubscription__AddCallbackParameter(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x0
  AdjustSdk_AdjustPlayStoreSubscription_Fields *p_fields; // x20
  struct System_Collections_Generic_List_string__o *innerCallbackParameters; // t1
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4D24A79 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A79 = 1;
  }
  innerCallbackParameters = this->fields.innerCallbackParameters;
  p_fields = &this->fields;
  v7 = (System_Collections_Generic_List_object__o *)innerCallbackParameters;
  if ( !innerCallbackParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerCallbackParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_1C9403C(p_fields, v10);
    v7 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
    if ( !p_fields->innerCallbackParameters )
      goto LABEL_14;
  }
  items = v7->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    sub_1C9403C(v14 + 4, key);
  }
  v7 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
  if ( !p_fields->innerCallbackParameters
    || (v15 = v7->fields._items, v16 = Method_System_Collections_Generic_List_string__Add__, ++v7->fields._version, !v15) )
  {
LABEL_14:
    sub_1C942F0(v7, key);
  }
  v17 = v7->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v7->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)value;
    sub_1C9403C(v18 + 4, value);
  }
}


void AdjustSdk_AdjustPlayStoreSubscription__AddPartnerParameter(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x0
  struct System_Collections_Generic_List_string__o **p_innerPartnerParameters; // x20
  struct System_Collections_Generic_List_string__o *innerPartnerParameters; // t1
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4D24A7A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A7A = 1;
  }
  innerPartnerParameters = this->fields.innerPartnerParameters;
  p_innerPartnerParameters = &this->fields.innerPartnerParameters;
  v7 = (System_Collections_Generic_List_object__o *)innerPartnerParameters;
  if ( !innerPartnerParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_1C9403C(p_innerPartnerParameters, v10);
    v7 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
    if ( !*p_innerPartnerParameters )
      goto LABEL_14;
  }
  items = v7->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    sub_1C9403C(v14 + 4, key);
  }
  v7 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
  if ( !*p_innerPartnerParameters
    || (v15 = v7->fields._items, v16 = Method_System_Collections_Generic_List_string__Add__, ++v7->fields._version, !v15) )
  {
LABEL_14:
    sub_1C942F0(v7, key);
  }
  v17 = v7->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v7->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)value;
    sub_1C9403C(v18 + 4, value);
  }
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A77 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A77 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerCallbackParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


System_String_o *AdjustSdk_AdjustPlayStoreSubscription__get_Currency(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._Currency_k__BackingField;
}


System_String_o *AdjustSdk_AdjustPlayStoreSubscription__get_OrderId(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._OrderId_k__BackingField;
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustPlayStoreSubscription__get_PartnerParameters(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A78 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A78 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


System_String_o *AdjustSdk_AdjustPlayStoreSubscription__get_Price(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._Price_k__BackingField;
}


System_String_o *AdjustSdk_AdjustPlayStoreSubscription__get_ProductId(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._ProductId_k__BackingField;
}


System_String_o *AdjustSdk_AdjustPlayStoreSubscription__get_PurchaseTime(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._PurchaseTime_k__BackingField;
}


System_String_o *AdjustSdk_AdjustPlayStoreSubscription__get_PurchaseToken(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._PurchaseToken_k__BackingField;
}


System_String_o *AdjustSdk_AdjustPlayStoreSubscription__get_Signature(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  return this->fields._Signature_k__BackingField;
}


void AdjustSdk_AdjustPlayStoreSubscription__set_Currency(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Currency_k__BackingField = value;
  sub_1C9403C(&this->fields._Currency_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_OrderId(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._OrderId_k__BackingField = value;
  sub_1C9403C(&this->fields._OrderId_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_Price(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Price_k__BackingField = value;
  sub_1C9403C(&this->fields._Price_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_ProductId(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ProductId_k__BackingField = value;
  sub_1C9403C(&this->fields._ProductId_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_PurchaseTime(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._PurchaseTime_k__BackingField = value;
  sub_1C9403C(&this->fields._PurchaseTime_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_PurchaseToken(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._PurchaseToken_k__BackingField = value;
  sub_1C9403C(&this->fields._PurchaseToken_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_Signature(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Signature_k__BackingField = value;
  sub_1C9403C(&this->fields._Signature_k__BackingField, value);
}


void AdjustSdk_AdjustPurchaseVerificationResult___ctor(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustPurchaseVerificationResult___ctor_30997804(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  AdjustSdk_AdjustUtils_c *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  struct System_String_o *v14; // x0

  if ( (byte_4D24A7B & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_4D24A7B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v9 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v9 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v10 = AdjustSdk_AdjustUtils__GetJsonString(v6, v9->static_fields->KeyCode, v8);
    this->fields._Code_k__BackingField = System_Int32__Parse(v10, 0);
    v12 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage, v11);
    this->fields._Message_k__BackingField = v12;
    sub_1C9403C(&this->fields._Message_k__BackingField, v12);
    v14 = AdjustSdk_AdjustUtils__GetJsonString(
            v6,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyVerificationStatus,
            v13);
    this->fields._VerificationStatus_k__BackingField = v14;
    sub_1C9403C(&this->fields._VerificationStatus_k__BackingField, v14);
  }
}


int32_t AdjustSdk_AdjustPurchaseVerificationResult__get_Code(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        const MethodInfo *method)
{
  return this->fields._Code_k__BackingField;
}


System_String_o *AdjustSdk_AdjustPurchaseVerificationResult__get_Message(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


System_String_o *AdjustSdk_AdjustPurchaseVerificationResult__get_VerificationStatus(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        const MethodInfo *method)
{
  return this->fields._VerificationStatus_k__BackingField;
}


void AdjustSdk_AdjustPurchaseVerificationResult__set_Code(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Code_k__BackingField = value;
}


void AdjustSdk_AdjustPurchaseVerificationResult__set_Message(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Message_k__BackingField = value;
  sub_1C9403C(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustPurchaseVerificationResult__set_VerificationStatus(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._VerificationStatus_k__BackingField = value;
  sub_1C9403C(&this->fields._VerificationStatus_k__BackingField, value);
}


void AdjustSdk_AdjustSessionFailure___ctor(AdjustSdk_AdjustSessionFailure_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustSessionFailure___ctor_30998120(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_Collections_Generic_Dictionary_string__string__o *sessionFailureDataMap,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  AdjustSdk_AdjustUtils_c *v6; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v8; // x2
  struct System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  struct System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  System_String_o *v13; // x21
  const MethodInfo *v14; // x2
  AdjustSdk_AdjustUtils_c *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x1
  AdjustSdk_JSONNode_o *v18; // x20
  const MethodInfo *v19; // x2
  _BOOL8 v20; // x0
  __int64 v21; // x1
  AdjustSdk_JSONNode_o *v22; // x0
  const MethodInfo *v23; // x2
  System_Collections_Generic_Dictionary_object__object__o *v24; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v26; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_Dictionary_string__object__o *v28; // x19
  AdjustSdk_JSONClass_o *v29; // x20
  bool result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D24A7C & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&bool_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A7C = 1;
  }
  result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( sessionFailureDataMap )
  {
    v6 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v6 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(sessionFailureDataMap, v6->static_fields->KeyAdid, v5);
    this->fields._Adid_k__BackingField = Value;
    sub_1C9403C(&this->fields, Value);
    v9 = AdjustSdk_AdjustUtils__TryGetValue(
           sessionFailureDataMap,
           AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
           v8);
    this->fields._Message_k__BackingField = v9;
    sub_1C9403C(&this->fields._Message_k__BackingField, v9);
    v11 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
            v10);
    this->fields._Timestamp_k__BackingField = v11;
    sub_1C9403C(&this->fields._Timestamp_k__BackingField, v11);
    v13 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry,
            v12);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    if ( System_Boolean__TryParse(v13, &result, 0) )
      this->fields._WillRetry_k__BackingField = result;
    v15 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v15 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v16 = AdjustSdk_AdjustUtils__TryGetValue(sessionFailureDataMap, v15->static_fields->KeyJsonResponse, v14);
    v18 = AdjustSdk_JSONNode__Parse(v16, v17);
    v20 = AdjustSdk_JSONNode__op_Equality(v18, 0, v19);
    if ( !v20 )
    {
      if ( !v18 )
        sub_1C942F0(v20, v21);
      v22 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v18->klass->vtable._27_get_AsObject.methodPtr)(
                                      v18,
                                      v18->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v22, 0, v23) )
      {
        v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v24,
          (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v24;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_1C9403C(p_JsonResponse_k__BackingField, v24);
        v26 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v18->klass->vtable._27_get_AsObject.methodPtr)(
                v18,
                v18->klass->vtable._27_get_AsObject.method);
        v28 = *p_JsonResponse_k__BackingField;
        v29 = (AdjustSdk_JSONClass_o *)v26;
        if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v29, v28, v27);
      }
    }
  }
}


void AdjustSdk_AdjustSessionFailure___ctor_30998664(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  AdjustSdk_AdjustUtils_c *v9; // x0
  struct System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  struct System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_o *v16; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  AdjustSdk_JSONNode_o *v19; // x20
  const MethodInfo *v20; // x2
  AdjustSdk_JSONNode_o *v21; // x0
  const MethodInfo *v22; // x2
  System_Collections_Generic_Dictionary_object__object__o *v23; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v25; // x0
  const MethodInfo *v26; // x2
  System_Collections_Generic_Dictionary_string__object__o *v27; // x19
  AdjustSdk_JSONClass_o *v28; // x20

  if ( (byte_4D24A7D & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A7D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v9 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v9 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v10 = AdjustSdk_AdjustUtils__GetJsonString(v6, v9->static_fields->KeyAdid, v8);
    this->fields._Adid_k__BackingField = v10;
    sub_1C9403C(&this->fields, v10);
    v12 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage, v11);
    this->fields._Message_k__BackingField = v12;
    sub_1C9403C(&this->fields._Message_k__BackingField, v12);
    v14 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp, v13);
    this->fields._Timestamp_k__BackingField = v14;
    sub_1C9403C(&this->fields._Timestamp_k__BackingField, v14);
    v16 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry, v15);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v17 = System_Convert__ToBoolean_65496288(v16, 0);
    this->fields._WillRetry_k__BackingField = v17;
    if ( !v6 )
      goto LABEL_16;
    v19 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    v17 = AdjustSdk_JSONNode__op_Equality(v19, 0, v20);
    if ( v17 )
      return;
    if ( !v19 )
LABEL_16:
      sub_1C942F0(v17, v18);
    v21 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v19->klass->vtable._27_get_AsObject.methodPtr)(
                                    v19,
                                    v19->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v21, 0, v22) )
    {
      v23 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v23,
        (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v23;
      p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
      sub_1C9403C(p_JsonResponse_k__BackingField, v23);
      v25 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v19->klass->vtable._27_get_AsObject.methodPtr)(
              v19,
              v19->klass->vtable._27_get_AsObject.method);
      v27 = *p_JsonResponse_k__BackingField;
      v28 = (AdjustSdk_JSONClass_o *)v25;
      if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v28, v27, v26);
    }
  }
}


void AdjustSdk_AdjustSessionFailure__BuildJsonResponseFromString(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_String_o *jsonResponseString,
        const MethodInfo *method)
{
  AdjustSdk_JSONNode_o *v5; // x20
  const MethodInfo *v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_Dictionary_string__object__o *v13; // x19
  AdjustSdk_JSONClass_o *v14; // x20

  if ( (byte_4D24A7E & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A7E = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_1C9403C(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_1C942F0(v9, v10);
    v11 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
            v5,
            v5->klass->vtable._27_get_AsObject.method);
    v13 = *p_JsonResponse_k__BackingField;
    v14 = (AdjustSdk_JSONClass_o *)v11;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v14, v13, v12);
  }
}


System_String_o *AdjustSdk_AdjustSessionFailure__GetJsonResponseAsString(
        AdjustSdk_AdjustSessionFailure_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_4D24A7F & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_4D24A7F = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  return AdjustSdk_AdjustUtils__GetJsonResponseCompact(JsonResponse_k__BackingField, method);
}


System_String_o *AdjustSdk_AdjustSessionFailure__get_Adid(
        AdjustSdk_AdjustSessionFailure_o *this,
        const MethodInfo *method)
{
  return this->fields._Adid_k__BackingField;
}


System_Collections_Generic_Dictionary_string__object__o *AdjustSdk_AdjustSessionFailure__get_JsonResponse(
        AdjustSdk_AdjustSessionFailure_o *this,
        const MethodInfo *method)
{
  return this->fields._JsonResponse_k__BackingField;
}


System_String_o *AdjustSdk_AdjustSessionFailure__get_Message(
        AdjustSdk_AdjustSessionFailure_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


System_String_o *AdjustSdk_AdjustSessionFailure__get_Timestamp(
        AdjustSdk_AdjustSessionFailure_o *this,
        const MethodInfo *method)
{
  return this->fields._Timestamp_k__BackingField;
}


bool AdjustSdk_AdjustSessionFailure__get_WillRetry(AdjustSdk_AdjustSessionFailure_o *this, const MethodInfo *method)
{
  return this->fields._WillRetry_k__BackingField;
}


void AdjustSdk_AdjustSessionFailure__set_Adid(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Adid_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustSessionFailure__set_JsonResponse(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_1C9403C(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustSessionFailure__set_Message(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Message_k__BackingField = value;
  sub_1C9403C(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustSessionFailure__set_Timestamp(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Timestamp_k__BackingField = value;
  sub_1C9403C(&this->fields._Timestamp_k__BackingField, value);
}


void AdjustSdk_AdjustSessionFailure__set_WillRetry(
        AdjustSdk_AdjustSessionFailure_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._WillRetry_k__BackingField = value;
}


void AdjustSdk_AdjustSessionSuccess___ctor(AdjustSdk_AdjustSessionSuccess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustSessionSuccess___ctor_30999372(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_Collections_Generic_Dictionary_string__string__o *sessionSuccessDataMap,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  AdjustSdk_AdjustUtils_c *v6; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v8; // x2
  struct System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  struct System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  System_String_o *v13; // x0
  const MethodInfo *v14; // x1
  AdjustSdk_JSONNode_o *v15; // x20
  const MethodInfo *v16; // x2
  _BOOL8 v17; // x0
  __int64 v18; // x1
  AdjustSdk_JSONNode_o *v19; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_Dictionary_object__object__o *v21; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v23; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_Dictionary_string__object__o *v25; // x19
  AdjustSdk_JSONClass_o *v26; // x20

  if ( (byte_4D24A80 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A80 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( sessionSuccessDataMap )
  {
    v6 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v6 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(sessionSuccessDataMap, v6->static_fields->KeyAdid, v5);
    this->fields._Adid_k__BackingField = Value;
    sub_1C9403C(&this->fields, Value);
    v9 = AdjustSdk_AdjustUtils__TryGetValue(
           sessionSuccessDataMap,
           AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
           v8);
    this->fields._Message_k__BackingField = v9;
    sub_1C9403C(&this->fields._Message_k__BackingField, v9);
    v11 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
            v10);
    this->fields._Timestamp_k__BackingField = v11;
    sub_1C9403C(&this->fields._Timestamp_k__BackingField, v11);
    v13 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            v12);
    v15 = AdjustSdk_JSONNode__Parse(v13, v14);
    v17 = AdjustSdk_JSONNode__op_Equality(v15, 0, v16);
    if ( !v17 )
    {
      if ( !v15 )
        sub_1C942F0(v17, v18);
      v19 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v15->klass->vtable._27_get_AsObject.methodPtr)(
                                      v15,
                                      v15->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v19, 0, v20) )
      {
        v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v21,
          (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v21;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_1C9403C(p_JsonResponse_k__BackingField, v21);
        v23 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v15->klass->vtable._27_get_AsObject.methodPtr)(
                v15,
                v15->klass->vtable._27_get_AsObject.method);
        v25 = *p_JsonResponse_k__BackingField;
        v26 = (AdjustSdk_JSONClass_o *)v23;
        if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v26, v25, v24);
      }
    }
  }
}


void AdjustSdk_AdjustSessionSuccess___ctor_30999816(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  AdjustSdk_AdjustUtils_c *v9; // x0
  struct System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  struct System_String_o *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  AdjustSdk_JSONNode_o *v17; // x20
  const MethodInfo *v18; // x2
  AdjustSdk_JSONNode_o *v19; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_Dictionary_object__object__o *v21; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v23; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_Dictionary_string__object__o *v25; // x19
  AdjustSdk_JSONClass_o *v26; // x20

  if ( (byte_4D24A81 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A81 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v9 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v9 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v10 = AdjustSdk_AdjustUtils__GetJsonString(v6, v9->static_fields->KeyAdid, v8);
    this->fields._Adid_k__BackingField = v10;
    sub_1C9403C(&this->fields, v10);
    v12 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage, v11);
    this->fields._Message_k__BackingField = v12;
    sub_1C9403C(&this->fields._Message_k__BackingField, v12);
    v14 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp, v13);
    this->fields._Timestamp_k__BackingField = v14;
    v15 = sub_1C9403C(&this->fields._Timestamp_k__BackingField, v14);
    if ( !v6 )
      goto LABEL_14;
    v17 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    v15 = AdjustSdk_JSONNode__op_Equality(v17, 0, v18);
    if ( (v15 & 1) != 0 )
      return;
    if ( !v17 )
LABEL_14:
      sub_1C942F0(v15, v16);
    v19 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v17->klass->vtable._27_get_AsObject.methodPtr)(
                                    v17,
                                    v17->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v19, 0, v20) )
    {
      v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v21,
        (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v21;
      p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
      sub_1C9403C(p_JsonResponse_k__BackingField, v21);
      v23 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v17->klass->vtable._27_get_AsObject.methodPtr)(
              v17,
              v17->klass->vtable._27_get_AsObject.method);
      v25 = *p_JsonResponse_k__BackingField;
      v26 = (AdjustSdk_JSONClass_o *)v23;
      if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v26, v25, v24);
    }
  }
}


void AdjustSdk_AdjustSessionSuccess__BuildJsonResponseFromString(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_String_o *jsonResponseString,
        const MethodInfo *method)
{
  AdjustSdk_JSONNode_o *v5; // x20
  const MethodInfo *v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_Dictionary_string__object__o *v13; // x19
  AdjustSdk_JSONClass_o *v14; // x20

  if ( (byte_4D24A82 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D24A82 = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_1C9403C(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_1C942F0(v9, v10);
    v11 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
            v5,
            v5->klass->vtable._27_get_AsObject.method);
    v13 = *p_JsonResponse_k__BackingField;
    v14 = (AdjustSdk_JSONClass_o *)v11;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v14, v13, v12);
  }
}


System_String_o *AdjustSdk_AdjustSessionSuccess__GetJsonResponseAsString(
        AdjustSdk_AdjustSessionSuccess_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_4D24A83 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_4D24A83 = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  return AdjustSdk_AdjustUtils__GetJsonResponseCompact(JsonResponse_k__BackingField, method);
}


System_String_o *AdjustSdk_AdjustSessionSuccess__get_Adid(
        AdjustSdk_AdjustSessionSuccess_o *this,
        const MethodInfo *method)
{
  return this->fields._Adid_k__BackingField;
}


System_Collections_Generic_Dictionary_string__object__o *AdjustSdk_AdjustSessionSuccess__get_JsonResponse(
        AdjustSdk_AdjustSessionSuccess_o *this,
        const MethodInfo *method)
{
  return this->fields._JsonResponse_k__BackingField;
}


System_String_o *AdjustSdk_AdjustSessionSuccess__get_Message(
        AdjustSdk_AdjustSessionSuccess_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


System_String_o *AdjustSdk_AdjustSessionSuccess__get_Timestamp(
        AdjustSdk_AdjustSessionSuccess_o *this,
        const MethodInfo *method)
{
  return this->fields._Timestamp_k__BackingField;
}


void AdjustSdk_AdjustSessionSuccess__set_Adid(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Adid_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustSessionSuccess__set_JsonResponse(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_1C9403C(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustSessionSuccess__set_Message(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Message_k__BackingField = value;
  sub_1C9403C(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustSessionSuccess__set_Timestamp(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Timestamp_k__BackingField = value;
  sub_1C9403C(&this->fields._Timestamp_k__BackingField, value);
}


void AdjustSdk_AdjustStoreInfo___ctor(
        AdjustSdk_AdjustStoreInfo_o *this,
        System_String_o *storeName,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._StoreName_k__BackingField = storeName;
  sub_1C9403C(&this->fields, storeName);
}


System_String_o *AdjustSdk_AdjustStoreInfo__get_StoreAppId(AdjustSdk_AdjustStoreInfo_o *this, const MethodInfo *method)
{
  return this->fields._StoreAppId_k__BackingField;
}


System_String_o *AdjustSdk_AdjustStoreInfo__get_StoreName(AdjustSdk_AdjustStoreInfo_o *this, const MethodInfo *method)
{
  return this->fields._StoreName_k__BackingField;
}


void AdjustSdk_AdjustStoreInfo__set_StoreAppId(
        AdjustSdk_AdjustStoreInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._StoreAppId_k__BackingField = value;
  sub_1C9403C(&this->fields._StoreAppId_k__BackingField, value);
}


void AdjustSdk_AdjustStoreInfo__set_StoreName(
        AdjustSdk_AdjustStoreInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._StoreName_k__BackingField = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_AdjustThirdPartySharing___ctor(
        AdjustSdk_AdjustThirdPartySharing_o *this,
        System_Nullable_bool__o isEnabled,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._IsEnabled_k__BackingField = isEnabled;
}


void AdjustSdk_AdjustThirdPartySharing__AddGranularOption(
        AdjustSdk_AdjustThirdPartySharing_o *this,
        System_String_o *partnerName,
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x0
  AdjustSdk_AdjustThirdPartySharing_Fields *p_fields; // x20
  struct System_Collections_Generic_List_string__o *innerGranularOptions; // t1
  System_Collections_Generic_List_object__o *v12; // x23
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x8
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4D24A86 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A86 = 1;
  }
  innerGranularOptions = this->fields.innerGranularOptions;
  p_fields = &this->fields;
  v9 = (System_Collections_Generic_List_object__o *)innerGranularOptions;
  if ( !innerGranularOptions )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerGranularOptions = (struct System_Collections_Generic_List_string__o *)v12;
    sub_1C9403C(p_fields, v12);
    v9 = (System_Collections_Generic_List_object__o *)p_fields->innerGranularOptions;
    if ( !p_fields->innerGranularOptions )
      goto LABEL_19;
  }
  items = v9->fields._items;
  v14 = Method_System_Collections_Generic_List_string__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)partnerName,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v16[4] = (Il2CppClass *)partnerName;
    sub_1C9403C(v16 + 4, partnerName);
  }
  v9 = (System_Collections_Generic_List_object__o *)p_fields->innerGranularOptions;
  if ( !p_fields->innerGranularOptions )
    goto LABEL_19;
  v17 = v9->fields._items;
  v18 = Method_System_Collections_Generic_List_string__Add__;
  ++v9->fields._version;
  if ( !v17 )
    goto LABEL_19;
  v19 = v9->fields._size;
  if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &v17->obj.klass + v19;
    v9->fields._size = v19 + 1;
    v20[4] = (Il2CppClass *)key;
    sub_1C9403C(v20 + 4, key);
  }
  v9 = (System_Collections_Generic_List_object__o *)p_fields->innerGranularOptions;
  if ( !p_fields->innerGranularOptions
    || (v21 = v9->fields._items, v22 = Method_System_Collections_Generic_List_string__Add__, ++v9->fields._version, !v21) )
  {
LABEL_19:
    sub_1C942F0(v9, partnerName);
  }
  v23 = v9->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    v9->fields._size = v23 + 1;
    v24[4] = (Il2CppClass *)value;
    sub_1C9403C(v24 + 4, value);
  }
}


void AdjustSdk_AdjustThirdPartySharing__AddPartnerSharingSetting(
        AdjustSdk_AdjustThirdPartySharing_o *this,
        System_String_o *partnerName,
        System_String_o *key,
        bool value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x0
  struct System_Collections_Generic_List_string__o **p_innerPartnerSharingSettings; // x19
  struct System_Collections_Generic_List_string__o *innerPartnerSharingSettings; // t1
  System_Collections_Generic_List_object__o *v11; // x22
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x8
  System_Collections_Generic_List_object__o *v20; // x19
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  System_Collections_Generic_List_object__o *v24; // x1
  Il2CppClass **v25; // x0
  bool v26; // [xsp+Ch] [xbp-24h] BYREF

  v26 = value;
  if ( (byte_4D24A87 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D24A87 = 1;
  }
  innerPartnerSharingSettings = this->fields.innerPartnerSharingSettings;
  p_innerPartnerSharingSettings = &this->fields.innerPartnerSharingSettings;
  v8 = (System_Collections_Generic_List_object__o *)innerPartnerSharingSettings;
  if ( !innerPartnerSharingSettings )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerSharingSettings = (struct System_Collections_Generic_List_string__o *)v11;
    sub_1C9403C(p_innerPartnerSharingSettings, v11);
    v8 = (System_Collections_Generic_List_object__o *)*p_innerPartnerSharingSettings;
    if ( !*p_innerPartnerSharingSettings )
      goto LABEL_21;
  }
  items = v8->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_21;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)partnerName,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v15[4] = (Il2CppClass *)partnerName;
    sub_1C9403C(v15 + 4, partnerName);
  }
  v8 = (System_Collections_Generic_List_object__o *)*p_innerPartnerSharingSettings;
  if ( !*p_innerPartnerSharingSettings )
    goto LABEL_21;
  v16 = v8->fields._items;
  v17 = Method_System_Collections_Generic_List_string__Add__;
  ++v8->fields._version;
  if ( !v16 )
    goto LABEL_21;
  v18 = v8->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)key,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v8->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)key;
    sub_1C9403C(v19 + 4, key);
  }
  v20 = (System_Collections_Generic_List_object__o *)*p_innerPartnerSharingSettings;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v8 = (System_Collections_Generic_List_object__o *)System_Boolean__ToString((bool)&v26, 0);
  if ( !v20
    || (v21 = v20->fields._items,
        v22 = Method_System_Collections_Generic_List_string__Add__,
        ++v20->fields._version,
        !v21) )
  {
LABEL_21:
    sub_1C942F0(v8, partnerName);
  }
  v23 = v20->fields._size;
  v24 = v8;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v8,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v21->obj.klass + v23;
    v20->fields._size = v23 + 1;
    v25[4] = (Il2CppClass *)v24;
    sub_1C9403C(v25 + 4, v24);
  }
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
        AdjustSdk_AdjustThirdPartySharing_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A84 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A84 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerGranularOptions;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


System_Nullable_bool__o AdjustSdk_AdjustThirdPartySharing__get_IsEnabled(
        AdjustSdk_AdjustThirdPartySharing_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnabled_k__BackingField;
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(
        AdjustSdk_AdjustThirdPartySharing_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_4D24A85 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_4D24A85 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerSharingSettings;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_386B05C *)Method_System_Collections_Generic_List_string__AsReadOnly__);
  return result;
}


void AdjustSdk_AdjustThirdPartySharing__set_IsEnabled(
        AdjustSdk_AdjustThirdPartySharing_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._IsEnabled_k__BackingField = value;
}


void AdjustSdk_AdjustUtils___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v4; // x0
  __int64 v5; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v6; // x0
  __int64 v7; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v8; // x0
  __int64 v9; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v10; // x0
  __int64 v11; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v12; // x0
  __int64 v13; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v14; // x0
  __int64 v15; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v16; // x0
  struct AdjustSdk_AdjustUtils_StaticFields *v17; // x0
  __int64 v18; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v19; // x0
  __int64 v20; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v21; // x0
  __int64 v22; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v23; // x0
  __int64 v24; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v25; // x0
  __int64 v26; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v27; // x0
  __int64 v28; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v29; // x0
  __int64 v30; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v31; // x0
  __int64 v32; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v33; // x0
  __int64 v34; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v35; // x0
  __int64 v36; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v37; // x0
  __int64 v38; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v39; // x0
  __int64 v40; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v41; // x0
  __int64 v42; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v43; // x0
  __int64 v44; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v45; // x0
  __int64 v46; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v47; // x0
  __int64 v48; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v49; // x0
  __int64 v50; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v51; // x0
  __int64 v52; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v53; // x0
  __int64 v54; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v55; // x0
  __int64 v56; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v57; // x0
  __int64 v58; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v59; // x0
  __int64 v60; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v61; // x0
  __int64 v62; // x1
  struct System_String_o **p_KeyTestOptionsUseTestConnectionOptions; // x0
  __int64 v64; // x1
  struct System_String_o **p_KeyTestOptionsTimerIntervalInMilliseconds; // x0
  __int64 v66; // x1
  struct System_String_o **p_KeyTestOptionsTimerStartInMilliseconds; // x0
  __int64 v68; // x1
  struct System_String_o **p_KeyTestOptionsSessionIntervalInMilliseconds; // x0
  __int64 v70; // x1
  struct System_String_o **p_KeyTestOptionsSubsessionIntervalInMilliseconds; // x0
  __int64 v72; // x1
  struct System_String_o **p_KeyTestOptionsTeardown; // x0
  __int64 v74; // x1
  struct System_String_o **p_KeyTestOptionsNoBackoffWait; // x0
  __int64 v76; // x1
  struct System_String_o **p_KeyTestOptionsAdServicesFrameworkEnabled; // x0
  __int64 v78; // x1
  struct System_String_o **p_KeyTestOptionsAttStatus; // x0
  __int64 v80; // x1
  struct System_String_o **p_KeyTestOptionsIdfa; // x0
  __int64 v82; // x1
  __int64 v83; // x1
  struct System_String_o **p_KeyTestOptionsIgnoreSystemLifecycleBootstrap; // x0

  if ( (byte_4D24A97 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&StringLiteral_21535/*"lockWindow"*/);
    sub_1C94098(&StringLiteral_19562/*"fbInstallReferrer"*/);
    sub_1C94098(&StringLiteral_16725/*"adServicesFrameworkEnabled"*/);
    sub_1C94098(&StringLiteral_18102/*"clickLabel"*/);
    sub_1C94098(&StringLiteral_24708/*"urlOverwrite"*/);
    sub_1C94098(&StringLiteral_22402/*"network"*/);
    sub_1C94098(&StringLiteral_17802/*"campaign"*/);
    sub_1C94098(&StringLiteral_16765/*"adgroup"*/);
    sub_1C94098(&StringLiteral_18433/*"creative"*/);
    sub_1C94098(&StringLiteral_20435/*"idfa"*/);
    sub_1C94098(&StringLiteral_18382/*"costType"*/);
    sub_1C94098(&StringLiteral_24404/*"trackerName"*/);
    sub_1C94098(&StringLiteral_24405/*"trackerToken"*/);
    sub_1C94098(&StringLiteral_17122/*"basePath"*/);
    sub_1C94098(&StringLiteral_18124/*"code"*/);
    sub_1C94098(&StringLiteral_17128/*"baseUrl"*/);
    sub_1C94098(&StringLiteral_24900/*"verificationStatus"*/);
    sub_1C94098(&StringLiteral_17788/*"callbackId"*/);
    sub_1C94098(&StringLiteral_19609/*"fineValue"*/);
    sub_1C94098(&StringLiteral_19300/*"eventToken"*/);
    sub_1C94098(&StringLiteral_22451/*"noBackoffWait"*/);
    sub_1C94098(&StringLiteral_16766/*"adid"*/);
    sub_1C94098(&StringLiteral_17006/*"attStatus"*/);
    sub_1C94098(&StringLiteral_18123/*"coarseValue"*/);
    sub_1C94098(&StringLiteral_21291/*"jsonResponse"*/);
    sub_1C94098(&StringLiteral_19493/*"extraPath"*/);
    sub_1C94098(&StringLiteral_19919/*"gdprPath"*/);
    sub_1C94098(&StringLiteral_25073/*"willRetry"*/);
    sub_1C94098(&StringLiteral_18673/*"deleteState"*/);
    sub_1C94098(&StringLiteral_24331/*"timestamp"*/);
    sub_1C94098(&StringLiteral_24330/*"timerStartInMilliseconds"*/);
    sub_1C94098(&StringLiteral_24735/*"useTestConnectionOptions"*/);
    sub_1C94098(&StringLiteral_24259/*"teardown"*/);
    sub_1C94098(&StringLiteral_21745/*"message"*/);
    sub_1C94098(&StringLiteral_18380/*"costAmount"*/);
    sub_1C94098(&StringLiteral_23055/*"purchaseVerificationUrl"*/);
    sub_1C94098(&StringLiteral_19920/*"gdprUrl"*/);
    sub_1C94098(&StringLiteral_24046/*"subscriptionUrl"*/);
    sub_1C94098(&StringLiteral_18381/*"costCurrency"*/);
    sub_1C94098(&StringLiteral_20452/*"ignoreSystemLifecycleBootstrap"*/);
    sub_1C94098(&StringLiteral_24329/*"timerIntervalInMilliseconds"*/);
    sub_1C94098(&StringLiteral_23539/*"sessionIntervalInMilliseconds"*/);
    sub_1C94098(&StringLiteral_24047/*"subsessionIntervalInMilliseconds"*/);
    byte_4D24A97 = 1;
  }
  AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid = (struct System_String_o *)StringLiteral_16766/*"adid"*/;
  sub_1C9403C(AdjustSdk_AdjustUtils_TypeInfo->static_fields, StringLiteral_16766/*"adid"*/);
  v1 = StringLiteral_21745/*"message"*/;
  static_fields = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  static_fields->KeyMessage = (struct System_String_o *)StringLiteral_21745/*"message"*/;
  sub_1C9403C(&static_fields->KeyMessage, v1);
  v3 = StringLiteral_22402/*"network"*/;
  v4 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v4->KeyNetwork = (struct System_String_o *)StringLiteral_22402/*"network"*/;
  sub_1C9403C(&v4->KeyNetwork, v3);
  v5 = StringLiteral_16765/*"adgroup"*/;
  v6 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v6->KeyAdgroup = (struct System_String_o *)StringLiteral_16765/*"adgroup"*/;
  sub_1C9403C(&v6->KeyAdgroup, v5);
  v7 = StringLiteral_17802/*"campaign"*/;
  v8 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v8->KeyCampaign = (struct System_String_o *)StringLiteral_17802/*"campaign"*/;
  sub_1C9403C(&v8->KeyCampaign, v7);
  v9 = StringLiteral_18433/*"creative"*/;
  v10 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v10->KeyCreative = (struct System_String_o *)StringLiteral_18433/*"creative"*/;
  sub_1C9403C(&v10->KeyCreative, v9);
  v11 = StringLiteral_25073/*"willRetry"*/;
  v12 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v12->KeyWillRetry = (struct System_String_o *)StringLiteral_25073/*"willRetry"*/;
  sub_1C9403C(&v12->KeyWillRetry, v11);
  v13 = StringLiteral_24331/*"timestamp"*/;
  v14 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v14->KeyTimestamp = (struct System_String_o *)StringLiteral_24331/*"timestamp"*/;
  sub_1C9403C(&v14->KeyTimestamp, v13);
  v15 = StringLiteral_17788/*"callbackId"*/;
  v16 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v16->KeyCallbackId = (struct System_String_o *)StringLiteral_17788/*"callbackId"*/;
  sub_1C9403C(&v16->KeyCallbackId, v15);
  v17 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v18 = StringLiteral_19300/*"eventToken"*/;
  v17->KeyEventToken = (struct System_String_o *)StringLiteral_19300/*"eventToken"*/;
  sub_1C9403C(&v17->KeyEventToken, v18);
  v19 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v20 = StringLiteral_18102/*"clickLabel"*/;
  v19->KeyClickLabel = (struct System_String_o *)StringLiteral_18102/*"clickLabel"*/;
  sub_1C9403C(&v19->KeyClickLabel, v20);
  v21 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v22 = StringLiteral_24404/*"trackerName"*/;
  v21->KeyTrackerName = (struct System_String_o *)StringLiteral_24404/*"trackerName"*/;
  sub_1C9403C(&v21->KeyTrackerName, v22);
  v23 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v24 = StringLiteral_24405/*"trackerToken"*/;
  v23->KeyTrackerToken = (struct System_String_o *)StringLiteral_24405/*"trackerToken"*/;
  sub_1C9403C(&v23->KeyTrackerToken, v24);
  v25 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v26 = StringLiteral_21291/*"jsonResponse"*/;
  v25->KeyJsonResponse = (struct System_String_o *)StringLiteral_21291/*"jsonResponse"*/;
  sub_1C9403C(&v25->KeyJsonResponse, v26);
  v27 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v28 = StringLiteral_18382/*"costType"*/;
  v27->KeyCostType = (struct System_String_o *)StringLiteral_18382/*"costType"*/;
  sub_1C9403C(&v27->KeyCostType, v28);
  v29 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v30 = StringLiteral_18380/*"costAmount"*/;
  v29->KeyCostAmount = (struct System_String_o *)StringLiteral_18380/*"costAmount"*/;
  sub_1C9403C(&v29->KeyCostAmount, v30);
  v31 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v32 = StringLiteral_18381/*"costCurrency"*/;
  v31->KeyCostCurrency = (struct System_String_o *)StringLiteral_18381/*"costCurrency"*/;
  sub_1C9403C(&v31->KeyCostCurrency, v32);
  v33 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v34 = StringLiteral_19562/*"fbInstallReferrer"*/;
  v33->KeyFbInstallReferrer = (struct System_String_o *)StringLiteral_19562/*"fbInstallReferrer"*/;
  sub_1C9403C(&v33->KeyFbInstallReferrer, v34);
  v35 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v36 = StringLiteral_19609/*"fineValue"*/;
  v35->KeySkanConversionValue = (struct System_String_o *)StringLiteral_19609/*"fineValue"*/;
  sub_1C9403C(&v35->KeySkanConversionValue, v36);
  v37 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v38 = StringLiteral_18123/*"coarseValue"*/;
  v37->KeySkanCoarseValue = (struct System_String_o *)StringLiteral_18123/*"coarseValue"*/;
  sub_1C9403C(&v37->KeySkanCoarseValue, v38);
  v39 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v40 = StringLiteral_21535/*"lockWindow"*/;
  v39->KeySkanLockWindow = (struct System_String_o *)StringLiteral_21535/*"lockWindow"*/;
  sub_1C9403C(&v39->KeySkanLockWindow, v40);
  v41 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v42 = StringLiteral_18124/*"code"*/;
  v41->KeyCode = (struct System_String_o *)StringLiteral_18124/*"code"*/;
  sub_1C9403C(&v41->KeyCode, v42);
  v43 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v44 = StringLiteral_24900/*"verificationStatus"*/;
  v43->KeyVerificationStatus = (struct System_String_o *)StringLiteral_24900/*"verificationStatus"*/;
  sub_1C9403C(&v43->KeyVerificationStatus, v44);
  v45 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v46 = StringLiteral_17128/*"baseUrl"*/;
  v45->KeyTestOptionsBaseUrl = (struct System_String_o *)StringLiteral_17128/*"baseUrl"*/;
  sub_1C9403C(&v45->KeyTestOptionsBaseUrl, v46);
  v47 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v48 = StringLiteral_19920/*"gdprUrl"*/;
  v47->KeyTestOptionsGdprUrl = (struct System_String_o *)StringLiteral_19920/*"gdprUrl"*/;
  sub_1C9403C(&v47->KeyTestOptionsGdprUrl, v48);
  v49 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v50 = StringLiteral_24046/*"subscriptionUrl"*/;
  v49->KeyTestOptionsSubscriptionUrl = (struct System_String_o *)StringLiteral_24046/*"subscriptionUrl"*/;
  sub_1C9403C(&v49->KeyTestOptionsSubscriptionUrl, v50);
  v51 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v52 = StringLiteral_23055/*"purchaseVerificationUrl"*/;
  v51->KeyTestOptionsPurchaseVerificationUrl = (struct System_String_o *)StringLiteral_23055/*"purchaseVerificationUrl"*/;
  sub_1C9403C(&v51->KeyTestOptionsPurchaseVerificationUrl, v52);
  v53 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v54 = StringLiteral_24708/*"urlOverwrite"*/;
  v53->KeyTestOptionsOverwriteUrl = (struct System_String_o *)StringLiteral_24708/*"urlOverwrite"*/;
  sub_1C9403C(&v53->KeyTestOptionsOverwriteUrl, v54);
  v55 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v56 = StringLiteral_19493/*"extraPath"*/;
  v55->KeyTestOptionsExtraPath = (struct System_String_o *)StringLiteral_19493/*"extraPath"*/;
  sub_1C9403C(&v55->KeyTestOptionsExtraPath, v56);
  v57 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v58 = StringLiteral_17122/*"basePath"*/;
  v57->KeyTestOptionsBasePath = (struct System_String_o *)StringLiteral_17122/*"basePath"*/;
  sub_1C9403C(&v57->KeyTestOptionsBasePath, v58);
  v59 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v60 = StringLiteral_19919/*"gdprPath"*/;
  v59->KeyTestOptionsGdprPath = (struct System_String_o *)StringLiteral_19919/*"gdprPath"*/;
  sub_1C9403C(&v59->KeyTestOptionsGdprPath, v60);
  v61 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v62 = StringLiteral_18673/*"deleteState"*/;
  v61->KeyTestOptionsDeleteState = (struct System_String_o *)StringLiteral_18673/*"deleteState"*/;
  sub_1C9403C(&v61->KeyTestOptionsDeleteState, v62);
  p_KeyTestOptionsUseTestConnectionOptions = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsUseTestConnectionOptions;
  v64 = StringLiteral_24735/*"useTestConnectionOptions"*/;
  *p_KeyTestOptionsUseTestConnectionOptions = (struct System_String_o *)StringLiteral_24735/*"useTestConnectionOptions"*/;
  sub_1C9403C(p_KeyTestOptionsUseTestConnectionOptions, v64);
  p_KeyTestOptionsTimerIntervalInMilliseconds = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsTimerIntervalInMilliseconds;
  v66 = StringLiteral_24329/*"timerIntervalInMilliseconds"*/;
  *p_KeyTestOptionsTimerIntervalInMilliseconds = (struct System_String_o *)StringLiteral_24329/*"timerIntervalInMilliseconds"*/;
  sub_1C9403C(p_KeyTestOptionsTimerIntervalInMilliseconds, v66);
  p_KeyTestOptionsTimerStartInMilliseconds = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsTimerStartInMilliseconds;
  v68 = StringLiteral_24330/*"timerStartInMilliseconds"*/;
  *p_KeyTestOptionsTimerStartInMilliseconds = (struct System_String_o *)StringLiteral_24330/*"timerStartInMilliseconds"*/;
  sub_1C9403C(p_KeyTestOptionsTimerStartInMilliseconds, v68);
  p_KeyTestOptionsSessionIntervalInMilliseconds = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsSessionIntervalInMilliseconds;
  v70 = StringLiteral_23539/*"sessionIntervalInMilliseconds"*/;
  *p_KeyTestOptionsSessionIntervalInMilliseconds = (struct System_String_o *)StringLiteral_23539/*"sessionIntervalInMilliseconds"*/;
  sub_1C9403C(p_KeyTestOptionsSessionIntervalInMilliseconds, v70);
  p_KeyTestOptionsSubsessionIntervalInMilliseconds = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsSubsessionIntervalInMilliseconds;
  v72 = StringLiteral_24047/*"subsessionIntervalInMilliseconds"*/;
  *p_KeyTestOptionsSubsessionIntervalInMilliseconds = (struct System_String_o *)StringLiteral_24047/*"subsessionIntervalInMilliseconds"*/;
  sub_1C9403C(p_KeyTestOptionsSubsessionIntervalInMilliseconds, v72);
  p_KeyTestOptionsTeardown = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsTeardown;
  v74 = StringLiteral_24259/*"teardown"*/;
  *p_KeyTestOptionsTeardown = (struct System_String_o *)StringLiteral_24259/*"teardown"*/;
  sub_1C9403C(p_KeyTestOptionsTeardown, v74);
  p_KeyTestOptionsNoBackoffWait = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsNoBackoffWait;
  v76 = StringLiteral_22451/*"noBackoffWait"*/;
  *p_KeyTestOptionsNoBackoffWait = (struct System_String_o *)StringLiteral_22451/*"noBackoffWait"*/;
  sub_1C9403C(p_KeyTestOptionsNoBackoffWait, v76);
  p_KeyTestOptionsAdServicesFrameworkEnabled = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsAdServicesFrameworkEnabled;
  v78 = StringLiteral_16725/*"adServicesFrameworkEnabled"*/;
  *p_KeyTestOptionsAdServicesFrameworkEnabled = (struct System_String_o *)StringLiteral_16725/*"adServicesFrameworkEnabled"*/;
  sub_1C9403C(p_KeyTestOptionsAdServicesFrameworkEnabled, v78);
  p_KeyTestOptionsAttStatus = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsAttStatus;
  v80 = StringLiteral_17006/*"attStatus"*/;
  *p_KeyTestOptionsAttStatus = (struct System_String_o *)StringLiteral_17006/*"attStatus"*/;
  sub_1C9403C(p_KeyTestOptionsAttStatus, v80);
  p_KeyTestOptionsIdfa = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsIdfa;
  v82 = StringLiteral_20435/*"idfa"*/;
  *p_KeyTestOptionsIdfa = (struct System_String_o *)StringLiteral_20435/*"idfa"*/;
  sub_1C9403C(p_KeyTestOptionsIdfa, v82);
  v83 = StringLiteral_20452/*"ignoreSystemLifecycleBootstrap"*/;
  p_KeyTestOptionsIgnoreSystemLifecycleBootstrap = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsIgnoreSystemLifecycleBootstrap;
  *p_KeyTestOptionsIgnoreSystemLifecycleBootstrap = (struct System_String_o *)StringLiteral_20452/*"ignoreSystemLifecycleBootstrap"*/;
  sub_1C9403C(p_KeyTestOptionsIgnoreSystemLifecycleBootstrap, v83);
}


void AdjustSdk_AdjustUtils___ctor(AdjustSdk_AdjustUtils_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t AdjustSdk_AdjustUtils__ConvertBool(System_Nullable_bool__o value, const MethodInfo *method)
{
  bool hasValue; // w19
  System_Nullable_bool__o *v3; // x0
  System_Nullable_bool__o v5; // [xsp+Ch] [xbp-14h] BYREF

  hasValue = value.fields.hasValue;
  v5 = value;
  if ( (byte_4D24A89 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_bool__get_Value__);
    byte_4D24A89 = 1;
  }
  if ( !hasValue )
    return -1;
  v3 = &v5;
  return System_Nullable_bool___get_Value(
           (System_Nullable_bool__o)v3,
           (const MethodInfo_398FCA8 *)Method_System_Nullable_bool__get_Value__);
}


double AdjustSdk_AdjustUtils__ConvertDouble(System_Nullable_double__o value, const MethodInfo *method)
{
  bool hasValue; // w19
  System_Nullable_double__o v4; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_double__o v5; // 0:x0.16

  v4 = value;
  hasValue = value.fields.hasValue;
  if ( (byte_4D24A8A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_double__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_double__get_Value__);
    byte_4D24A8A = 1;
  }
  if ( !hasValue )
    return -1.0;
  *(_QWORD *)&v5.fields.hasValue = &v4;
  *(_QWORD *)&v5.fields.value = Method_System_Nullable_double__get_Value__;
  return System_Nullable_double___get_Value(v5, (const MethodInfo_3992088 *)method);
}


int32_t AdjustSdk_AdjustUtils__ConvertInt(System_Nullable_int__o value, const MethodInfo *method)
{
  bool hasValue; // w19
  System_Nullable_int__o v3; // x0
  System_Nullable_int__o v5; // [xsp+8h] [xbp-18h] BYREF

  hasValue = value.fields.hasValue;
  v5 = value;
  if ( (byte_4D24A8B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_int__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_int__get_Value__);
    byte_4D24A8B = 1;
  }
  if ( !hasValue )
    return -1;
  v3 = (System_Nullable_int__o)&v5;
  return System_Nullable_int___get_Value(v3, (const MethodInfo_3993404 *)Method_System_Nullable_int__get_Value__);
}


int32_t AdjustSdk_AdjustUtils__ConvertLogLevel(System_Nullable_AdjustLogLevel__o logLevel, const MethodInfo *method)
{
  bool hasValue; // w19
  System_Nullable_Int32Enum__o v3; // x0
  System_Nullable_AdjustLogLevel__o v5; // [xsp+8h] [xbp-18h] BYREF

  hasValue = logLevel.fields.hasValue;
  v5 = logLevel;
  if ( (byte_4D24A88 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_AdjustLogLevel__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_AdjustLogLevel__get_Value__);
    byte_4D24A88 = 1;
  }
  if ( !hasValue )
    return -1;
  v3 = (System_Nullable_Int32Enum__o)&v5;
  return System_Nullable_Int32Enum___get_Value(
           v3,
           (const MethodInfo_39937C0 *)Method_System_Nullable_AdjustLogLevel__get_Value__);
}


int64_t AdjustSdk_AdjustUtils__ConvertLong(System_Nullable_long__o value, const MethodInfo *method)
{
  bool hasValue; // w19
  System_Nullable_long__o v4; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v5; // 0:x0.16

  v4 = value;
  hasValue = value.fields.hasValue;
  if ( (byte_4D24A8C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_long__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_long__get_Value__);
    byte_4D24A8C = 1;
  }
  if ( !hasValue )
    return -1;
  *(_QWORD *)&v5.fields.hasValue = &v4;
  v5.fields.value = Method_System_Nullable_long__get_Value__;
  return System_Nullable_long___get_Value(v5, (const MethodInfo_3993B90 *)method);
}


System_String_o *AdjustSdk_AdjustUtils__ConvertReadOnlyCollectionOfPairsToJson(
        System_Collections_ObjectModel_ReadOnlyCollection_string__o *list,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w21
  Il2CppObject *Item; // x0
  int32_t v6; // w21
  Il2CppObject *v7; // x23
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x22
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  AdjustSdk_JSONArray_o *v19; // x19
  const MethodInfo *v20; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D24A8E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&AdjustSdk_JSONArray_TypeInfo);
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    byte_4D24A8E = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !list
    || (System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
          (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
          (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__)
      & 1) != 0 )
  {
    return 0;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
         (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
         (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
               v4,
               (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v6 = v4 + 1;
      v7 = Item;
      v8 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
             (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
             v6,
             (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      if ( v7 )
      {
        v10 = v8;
        if ( v8 )
        {
          if ( !v3 )
            goto LABEL_28;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_string__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v7,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v7;
            v8 = (Il2CppObject *)sub_1C9403C(v14 + 4, v7);
          }
          v15 = v3->fields._items;
          v16 = Method_System_Collections_Generic_List_string__Add__;
          ++v3->fields._version;
          if ( !v15 )
            goto LABEL_28;
          v17 = v3->fields._size;
          if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v10,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &v15->obj.klass + v17;
            v3->fields._size = v17 + 1;
            v18[4] = (Il2CppClass *)v10;
            sub_1C9403C(v18 + 4, v10);
          }
        }
      }
      v4 = v6 + 1;
    }
    while ( v4 < System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
                   (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) );
  }
  v19 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v19, v20);
  if ( !v3 )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    v3,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v26.fields._current;
    v22 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
    System_Object___ctor(v22, 0);
    v22[1].klass = (Il2CppClass *)current;
    v23 = sub_1C9403C(&v22[1], current);
    if ( !v19 )
      sub_1C942F0(v23, v24);
    ((void (__fastcall *)(AdjustSdk_JSONArray_o *, Il2CppObject *, const MethodInfo *))v19->klass->vtable._12_Add.methodPtr)(
      v19,
      v22,
      v19->klass->vtable._12_Add.method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v19 )
LABEL_28:
    sub_1C942F0(v8, v9);
  return (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONArray_o *, const MethodInfo *))v19->klass->vtable._3_ToString.methodPtr)(
                              v19,
                              v19->klass->vtable._3_ToString.method);
}


System_String_o *AdjustSdk_AdjustUtils__ConvertReadOnlyCollectionOfTripletsToJson(
        System_Collections_ObjectModel_ReadOnlyCollection_string__o *list,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w21
  Il2CppObject *Item; // x24
  Il2CppObject *v7; // x0
  int32_t v8; // w21
  Il2CppObject *v9; // x23
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x22
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  AdjustSdk_JSONArray_o *v25; // x19
  const MethodInfo *v26; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D24A8F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&AdjustSdk_JSONArray_TypeInfo);
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    byte_4D24A8F = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !list
    || (unsigned int)(-1431655765
                    * System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                        (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
                        (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__)
                    + 715827882) > 0x55555554 )
  {
    return 0;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
         (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
         (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
               v5,
               (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v7 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
             (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
             v5 + 1,
             (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v8 = v5 + 2;
      v9 = v7;
      v10 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
              v8,
              (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      if ( Item )
      {
        if ( v9 )
        {
          v12 = v10;
          if ( v10 )
          {
            if ( !v4 )
              goto LABEL_33;
            items = v4->fields._items;
            v14 = Method_System_Collections_Generic_List_string__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_33;
            size = v4->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                Item,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v16[4] = (Il2CppClass *)Item;
              v10 = (Il2CppObject *)sub_1C9403C(v16 + 4, Item);
            }
            v17 = v4->fields._items;
            v18 = Method_System_Collections_Generic_List_string__Add__;
            ++v4->fields._version;
            if ( !v17 )
              goto LABEL_33;
            v19 = v4->fields._size;
            if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                v9,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &v17->obj.klass + v19;
              v4->fields._size = v19 + 1;
              v20[4] = (Il2CppClass *)v9;
              v10 = (Il2CppObject *)sub_1C9403C(v20 + 4, v9);
            }
            v21 = v4->fields._items;
            v22 = Method_System_Collections_Generic_List_string__Add__;
            ++v4->fields._version;
            if ( !v21 )
              goto LABEL_33;
            v23 = v4->fields._size;
            if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                v12,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &v21->obj.klass + v23;
              v4->fields._size = v23 + 1;
              v24[4] = (Il2CppClass *)v12;
              sub_1C9403C(v24 + 4, v12);
            }
          }
        }
      }
      v5 = v8 + 1;
    }
    while ( v5 < System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
                   (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) );
  }
  v25 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v25, v26);
  if ( !v4 )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v4,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v31.fields._current;
    v28 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
    System_Object___ctor(v28, 0);
    v28[1].klass = (Il2CppClass *)current;
    v29 = sub_1C9403C(&v28[1], current);
    if ( !v25 )
      sub_1C942F0(v29, v30);
    ((void (__fastcall *)(AdjustSdk_JSONArray_o *, Il2CppObject *, const MethodInfo *))v25->klass->vtable._12_Add.methodPtr)(
      v25,
      v28,
      v25->klass->vtable._12_Add.method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v25 )
LABEL_33:
    sub_1C942F0(v10, v11);
  return (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONArray_o *, const MethodInfo *))v25->klass->vtable._3_ToString.methodPtr)(
                              v25,
                              v25->klass->vtable._3_ToString.method);
}


System_String_o *AdjustSdk_AdjustUtils__ConvertReadOnlyCollectionToJson(
        System_Collections_ObjectModel_ReadOnlyCollection_string__o *list,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t i; // w21
  Il2CppObject *Item; // x0
  __int64 v6; // x1
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppObject *v10; // x1
  Il2CppClass **v11; // x0
  AdjustSdk_JSONArray_o *v12; // x19
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D24A8D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&AdjustSdk_JSONArray_TypeInfo);
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    byte_4D24A8D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !list )
    return 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
         (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
         (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) >= 1 )
  {
    for ( i = 0;
          i < System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
                (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
          ++i )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
               i,
               (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      if ( Item )
      {
        if ( !v3 )
          goto LABEL_23;
        items = v3->fields._items;
        v8 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v3->fields._size;
        v10 = Item;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            Item,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
        }
        else
        {
          v11 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v11[4] = (Il2CppClass *)v10;
          sub_1C9403C(v11 + 4, v10);
        }
      }
    }
  }
  v12 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v12, v13);
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    v3,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v19.fields._current;
    v15 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
    System_Object___ctor(v15, 0);
    v15[1].klass = (Il2CppClass *)current;
    v16 = sub_1C9403C(&v15[1], current);
    if ( !v12 )
      sub_1C942F0(v16, v17);
    ((void (__fastcall *)(AdjustSdk_JSONArray_o *, Il2CppObject *, const MethodInfo *))v12->klass->vtable._12_Add.methodPtr)(
      v12,
      v15,
      v12->klass->vtable._12_Add.method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v12 )
LABEL_23:
    sub_1C942F0(Item, v6);
  return (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONArray_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                              v12,
                              v12->klass->vtable._3_ToString.method);
}


System_Collections_Generic_Dictionary_string__object__o *AdjustSdk_AdjustUtils__GetAttributionJsonResponse(
        System_String_o *attributionJsonResponse,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x19
  const MethodInfo *v4; // x1
  AdjustSdk_JSONNode_o *v5; // x20
  const MethodInfo *v6; // x2
  _BOOL8 v7; // x0
  __int64 v8; // x1
  AdjustSdk_JSONNode_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_Dictionary_object__object__o *v11; // x21
  const MethodInfo *v12; // x2
  AdjustSdk_JSONClass_o *v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4D24A95 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4D24A95 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v5 = AdjustSdk_JSONNode__Parse(attributionJsonResponse, v4);
  v7 = AdjustSdk_JSONNode__op_Equality(v5, 0, v6);
  if ( !v7 )
  {
    if ( !v5 )
      goto LABEL_16;
    v9 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                   v5,
                                   v5->klass->vtable._27_get_AsObject.method);
    if ( AdjustSdk_JSONNode__op_Equality(v9, 0, v10) )
      return (System_Collections_Generic_Dictionary_string__object__o *)v3;
    v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v11,
      (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    v13 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                     v5,
                                     v5->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(
      v13,
      (System_Collections_Generic_Dictionary_string__object__o *)v11,
      v12);
    if ( !v11 )
LABEL_16:
      sub_1C942F0(v7, v8);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v17,
      v11,
      (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v17,
              (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( !v14 )
        break;
      if ( !v3 )
        sub_1C942F0(v14, v15);
      System_Collections_Generic_Dictionary_object__object___Add(
        v3,
        v17.fields._current.fields.key,
        v17.fields._current.fields.value,
        (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v17,
      (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v3;
}


System_String_o *AdjustSdk_AdjustUtils__GetJsonResponseCompact(
        System_Collections_Generic_Dictionary_string__object__o *dictionary,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_o *v4; // x22
  int v5; // w25
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x10
  System_String_o *v10; // x19
  const MethodInfo *v11; // x1
  System_String_o *v12; // x19
  System_String_o *JsonResponseCompact; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D24A90 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_25285/*"{"*/);
    sub_1C94098(&StringLiteral_25511/*"}"*/);
    sub_1C94098(&StringLiteral_353/*"\":"*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    sub_1C94098(&StringLiteral_341/*"\""*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_354/*"\":\""*/);
    byte_4D24A90 = 1;
  }
  result = (System_String_o *)StringLiteral_1/*""*/;
  memset(&v35, 0, sizeof(v35));
  if ( dictionary )
  {
    v4 = System_String__Concat_64417744((System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_25285/*"{"*/, 0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v34,
      (System_Collections_Generic_Dictionary_object__object__o *)dictionary,
      (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v5 = 0;
    v35 = v34;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v35,
                (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
            &v35,
            (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
          return System_String__Concat_64417744(v4, (System_String_o *)StringLiteral_25511/*"}"*/, 0);
        }
        value = v35.fields._current.fields.value;
        key = v35.fields._current.fields.key;
        if ( v35.fields._current.fields.value )
          break;
LABEL_14:
        if ( ++v5 >= 2 )
          v4 = System_String__Concat_64417744(v4, (System_String_o *)StringLiteral_808/*","*/, 0);
        v12 = System_String__Concat_64458012(
                v4,
                (System_String_o *)StringLiteral_341/*"\""*/,
                (System_String_o *)key,
                (System_String_o *)StringLiteral_353/*"\":"*/,
                0);
        if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
        JsonResponseCompact = AdjustSdk_AdjustUtils__GetJsonResponseCompact(
                                (System_Collections_Generic_Dictionary_string__object__o *)value,
                                v11);
        v4 = System_String__Concat_64417744(v12, JsonResponseCompact, 0);
      }
      klass = v35.fields._current.fields.value->klass;
      if ( v35.fields._current.fields.value->klass != (Il2CppClass *)string_TypeInfo )
      {
        naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
        if ( klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (System_Collections_Generic_Dictionary_string__object__c *)klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
            value = 0;
        }
        else
        {
          value = 0;
        }
        goto LABEL_14;
      }
      if ( ++v5 >= 2 )
        v10 = System_String__Concat_64417744(v4, (System_String_o *)StringLiteral_808/*","*/, 0);
      else
        v10 = v4;
      if ( System_String__StartsWith((System_String_o *)value, (System_String_o *)StringLiteral_25285/*"{"*/, 0)
        && System_String__EndsWith((System_String_o *)value, (System_String_o *)StringLiteral_25511/*"}"*/, 0) )
      {
        v14 = sub_1C94140(string___TypeInfo, 5);
        v16 = v14;
        if ( !v14 )
          sub_1C942F0(0, v15);
        if ( !*(_DWORD *)(v14 + 24) )
          sub_1C942F8(v14);
        *(_QWORD *)(v14 + 32) = v10;
        v17 = sub_1C9403C(v14 + 32, v10);
        if ( *(_DWORD *)(v16 + 24) <= 1u )
          sub_1C942F8(v17);
        v18 = StringLiteral_341/*"\""*/;
        *(_QWORD *)(v16 + 40) = StringLiteral_341/*"\""*/;
        v19 = sub_1C9403C(v16 + 40, v18);
        if ( *(_DWORD *)(v16 + 24) <= 2u )
          sub_1C942F8(v19);
        *(_QWORD *)(v16 + 48) = key;
        v20 = sub_1C9403C(v16 + 48, key);
        if ( *(_DWORD *)(v16 + 24) <= 3u )
          sub_1C942F8(v20);
        v21 = StringLiteral_353/*"\":"*/;
        *(_QWORD *)(v16 + 56) = StringLiteral_353/*"\":"*/;
        v22 = sub_1C9403C(v16 + 56, v21);
        if ( *(_DWORD *)(v16 + 24) <= 4u )
          sub_1C942F8(v22);
        *(_QWORD *)(v16 + 64) = value;
        sub_1C9403C(v16 + 64, value);
        v4 = System_String__Concat_64458276((System_String_array *)v16, 0);
      }
      else
      {
        v23 = sub_1C94140(string___TypeInfo, 6);
        v25 = v23;
        if ( !v23 )
          sub_1C942F0(0, v24);
        if ( !*(_DWORD *)(v23 + 24) )
          sub_1C942F8(v23);
        *(_QWORD *)(v23 + 32) = v10;
        v26 = sub_1C9403C(v23 + 32, v10);
        if ( *(_DWORD *)(v25 + 24) <= 1u )
          sub_1C942F8(v26);
        v27 = StringLiteral_341/*"\""*/;
        *(_QWORD *)(v25 + 40) = StringLiteral_341/*"\""*/;
        v28 = sub_1C9403C(v25 + 40, v27);
        if ( *(_DWORD *)(v25 + 24) <= 2u )
          sub_1C942F8(v28);
        *(_QWORD *)(v25 + 48) = key;
        v29 = sub_1C9403C(v25 + 48, key);
        if ( *(_DWORD *)(v25 + 24) <= 3u )
          sub_1C942F8(v29);
        v30 = StringLiteral_354/*"\":\""*/;
        *(_QWORD *)(v25 + 56) = StringLiteral_354/*"\":\""*/;
        v31 = sub_1C9403C(v25 + 56, v30);
        if ( *(_DWORD *)(v25 + 24) <= 4u )
          sub_1C942F8(v31);
        *(_QWORD *)(v25 + 64) = value;
        v32 = sub_1C9403C(v25 + 64, value);
        if ( *(_DWORD *)(v25 + 24) <= 5u )
          sub_1C942F8(v32);
        v33 = StringLiteral_341/*"\""*/;
        *(_QWORD *)(v25 + 72) = StringLiteral_341/*"\""*/;
        sub_1C9403C(v25 + 72, v33);
        v4 = System_String__Concat_64458276((System_String_array *)v25, 0);
      }
    }
  }
  return result;
}


System_String_o *AdjustSdk_AdjustUtils__GetJsonString(
        AdjustSdk_JSONNode_o *node,
        System_String_o *key,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  __int64 naturalAligment; // x10
  AdjustSdk_JSONNode_o *v10; // x19
  const MethodInfo *v11; // x2

  if ( (byte_4D24A91 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D24A91 = 1;
  }
  v5 = AdjustSdk_JSONNode__op_Equality(node, 0, method);
  if ( v5 )
    return 0;
  if ( !node )
    goto LABEL_16;
  v7 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, System_String_o *, const MethodInfo *))node->klass->vtable._7_get_Item.methodPtr)(
         node,
         key,
         node->klass->vtable._7_get_Item.method);
  if ( v7
    && (naturalAligment = AdjustSdk_JSONData_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v7 + 304LL) >= (unsigned int)naturalAligment) )
  {
    if ( *(AdjustSdk_JSONData_c **)(*(_QWORD *)(*(_QWORD *)v7 + 200LL) + 8 * naturalAligment - 8) == AdjustSdk_JSONData_TypeInfo )
      v10 = (AdjustSdk_JSONNode_o *)v7;
    else
      v10 = 0;
  }
  else
  {
    v10 = 0;
  }
  if ( AdjustSdk_JSONNode__op_Equality(v10, 0, v8) )
    return 0;
  v5 = AdjustSdk_JSONNode__op_Equality(v10, (Il2CppObject *)StringLiteral_1/*""*/, v11);
  if ( v5 )
    return 0;
  if ( !v10 )
LABEL_16:
    sub_1C942F0(v5, v6);
  return (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v10->klass->vtable._9_get_Value.methodPtr)(
                              v10,
                              v10->klass->vtable._9_get_Value.method);
}


System_Collections_Generic_Dictionary_string__string__o *AdjustSdk_AdjustUtils__GetSkanUpdateDataDictionary(
        System_String_o *skanUpdateData,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x19
  const MethodInfo *v4; // x1
  AdjustSdk_JSONNode_o *v5; // x20
  const MethodInfo *v6; // x2
  _BOOL8 v7; // x0
  __int64 v8; // x1
  AdjustSdk_JSONNode_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_Dictionary_object__object__o *v11; // x21
  const MethodInfo *v12; // x2
  AdjustSdk_JSONClass_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *key; // x20
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4D24A94 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4D24A94 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v5 = AdjustSdk_JSONNode__Parse(skanUpdateData, v4);
  v7 = AdjustSdk_JSONNode__op_Equality(v5, 0, v6);
  if ( !v7 )
  {
    if ( !v5 )
      goto LABEL_18;
    v9 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                   v5,
                                   v5->klass->vtable._27_get_AsObject.method);
    if ( AdjustSdk_JSONNode__op_Equality(v9, 0, v10) )
      return (System_Collections_Generic_Dictionary_string__string__o *)v3;
    v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v11,
      (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    v13 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                     v5,
                                     v5->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(
      v13,
      (System_Collections_Generic_Dictionary_string__object__o *)v11,
      v12);
    if ( !v11 )
LABEL_18:
      sub_1C942F0(v7, v8);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v19,
      v11,
      (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v19,
              (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v19.fields._current.fields.value )
        sub_1C942F0(0, v14);
      key = v19.fields._current.fields.key;
      v16 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v19.fields._current.fields.value->klass->vtable[3].methodPtr)(
                              v19.fields._current.fields.value,
                              v19.fields._current.fields.value->klass->vtable[3].method);
      if ( !v3 )
        sub_1C942F0(v16, v17);
      System_Collections_Generic_Dictionary_object__object___Add(
        v3,
        key,
        v16,
        (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v19,
      (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__string__o *)v3;
}


System_String_o *AdjustSdk_AdjustUtils__GetValueOrEmptyToNull(System_String_o *value, const MethodInfo *method)
{
  if ( System_String__IsNullOrEmpty(value, 0) )
    return 0;
  else
    return value;
}


UnityEngine_AndroidJavaObject_o *AdjustSdk_AdjustUtils__TestOptionsMap2AndroidJavaObject(
        System_Collections_Generic_Dictionary_string__string__o *testOptionsMap,
        UnityEngine_AndroidJavaObject_o *ajoCurrentActivity,
        const MethodInfo *method)
{
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  System_Object_array *v9; // x22
  UnityEngine_AndroidJavaObject_o *v10; // x20
  __int64 v11; // x1
  Il2CppObject *inited; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x0
  AdjustSdk_AdjustUtils_c *v16; // x0
  Il2CppObject *v17; // x0
  AdjustSdk_AdjustUtils_c *v18; // x0
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x0
  AdjustSdk_AdjustUtils_c *v23; // x0
  bool v24; // w0
  AdjustSdk_AdjustUtils_c *v25; // x0
  AdjustSdk_AdjustUtils_c *v26; // x0
  System_String_o *v27; // x0
  bool v28; // w22
  System_Object_array *v29; // x21
  Il2CppObject *v30; // x22
  UnityEngine_AndroidJavaObject_o *v31; // x22
  AdjustSdk_AdjustUtils_c *v32; // x0
  AdjustSdk_AdjustUtils_c *v33; // x0
  Il2CppObject *v34; // x0
  int64_t v35; // x22
  System_Object_array *v36; // x21
  Il2CppObject *v37; // x22
  UnityEngine_AndroidJavaObject_o *v38; // x22
  AdjustSdk_AdjustUtils_c *v39; // x0
  AdjustSdk_AdjustUtils_c *v40; // x0
  Il2CppObject *v41; // x0
  int64_t v42; // x22
  System_Object_array *v43; // x21
  Il2CppObject *v44; // x22
  UnityEngine_AndroidJavaObject_o *v45; // x22
  AdjustSdk_AdjustUtils_c *v46; // x0
  AdjustSdk_AdjustUtils_c *v47; // x0
  Il2CppObject *v48; // x0
  int64_t v49; // x22
  System_Object_array *v50; // x21
  Il2CppObject *v51; // x22
  UnityEngine_AndroidJavaObject_o *v52; // x22
  AdjustSdk_AdjustUtils_c *v53; // x0
  AdjustSdk_AdjustUtils_c *v54; // x0
  Il2CppObject *v55; // x0
  int64_t v56; // x22
  System_Object_array *v57; // x21
  Il2CppObject *v58; // x22
  UnityEngine_AndroidJavaObject_o *v59; // x22
  AdjustSdk_AdjustUtils_c *v60; // x0
  AdjustSdk_AdjustUtils_c *v61; // x0
  System_String_o *v62; // x0
  bool v63; // w22
  System_Object_array *v64; // x21
  Il2CppObject *v65; // x22
  UnityEngine_AndroidJavaObject_o *v66; // x22
  AdjustSdk_AdjustUtils_c *v67; // x0
  AdjustSdk_AdjustUtils_c *v68; // x0
  System_String_o *v69; // x0
  bool v70; // w22
  System_Object_array *v71; // x21
  Il2CppObject *v72; // x22
  UnityEngine_AndroidJavaObject_o *v73; // x22
  AdjustSdk_AdjustUtils_c *v74; // x0
  AdjustSdk_AdjustUtils_c *v75; // x0
  System_String_o *v76; // x0
  bool v77; // w21
  __int64 v78; // x19
  Il2CppObject *v79; // x21
  UnityEngine_AndroidJavaObject_o *v80; // x21
  __int64 v82; // x0
  int64_t v83; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D24A96 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
    sub_1C94098(&Method_UnityEngine_AndroidJavaObject_Set_string___);
    sub_1C94098(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&bool_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&StringLiteral_23054/*"purchaseVerificationPath"*/);
    sub_1C94098(&StringLiteral_21244/*"java.lang.Boolean"*/);
    sub_1C94098(&StringLiteral_24044/*"subscriptionPath"*/);
    sub_1C94098(&StringLiteral_17122/*"basePath"*/);
    sub_1C94098(&StringLiteral_17128/*"baseUrl"*/);
    sub_1C94098(&StringLiteral_18341/*"context"*/);
    sub_1C94098(&StringLiteral_22451/*"noBackoffWait"*/);
    sub_1C94098(&StringLiteral_21251/*"java.lang.Long"*/);
    sub_1C94098(&StringLiteral_18166/*"com.adjust.sdk.AdjustTestOptions"*/);
    sub_1C94098(&StringLiteral_19919/*"gdprPath"*/);
    sub_1C94098(&StringLiteral_24457/*"true"*/);
    sub_1C94098(&StringLiteral_24330/*"timerStartInMilliseconds"*/);
    sub_1C94098(&StringLiteral_24735/*"useTestConnectionOptions"*/);
    sub_1C94098(&StringLiteral_24259/*"teardown"*/);
    sub_1C94098(&StringLiteral_23055/*"purchaseVerificationUrl"*/);
    sub_1C94098(&StringLiteral_19920/*"gdprUrl"*/);
    sub_1C94098(&StringLiteral_24046/*"subscriptionUrl"*/);
    sub_1C94098(&StringLiteral_20452/*"ignoreSystemLifecycleBootstrap"*/);
    sub_1C94098(&StringLiteral_24329/*"timerIntervalInMilliseconds"*/);
    sub_1C94098(&StringLiteral_23539/*"sessionIntervalInMilliseconds"*/);
    sub_1C94098(&StringLiteral_24047/*"subsessionIntervalInMilliseconds"*/);
    byte_4D24A96 = 1;
  }
  v5 = Method_System_Array_Empty_object___;
  v6 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v6 )
  {
    sub_1C6A188(Method_System_Array_Empty_object___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C();
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C6A12C();
  v9 = **(System_Object_array ***)(v8 + 184);
  v10 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71837880(v10, (System_String_o *)StringLiteral_18166/*"com.adjust.sdk.AdjustTestOptions"*/, v9, 0);
  inited = (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    inited = (Il2CppObject *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
  if ( !testOptionsMap )
    goto LABEL_112;
  inited = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
             (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsBaseUrl,
             (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  if ( !v10 )
    goto LABEL_112;
  UnityEngine_AndroidJavaObject__Set_object_(
    v10,
    (System_String_o *)StringLiteral_17128/*"baseUrl"*/,
    inited,
    (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
           (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsGdprUrl,
           (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  UnityEngine_AndroidJavaObject__Set_object_(
    v10,
    (System_String_o *)StringLiteral_19920/*"gdprUrl"*/,
    Item,
    (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
  v14 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
          (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsSubscriptionUrl,
          (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  UnityEngine_AndroidJavaObject__Set_object_(
    v10,
    (System_String_o *)StringLiteral_24046/*"subscriptionUrl"*/,
    v14,
    (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
  v15 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
          (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsPurchaseVerificationUrl,
          (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  UnityEngine_AndroidJavaObject__Set_object_(
    v10,
    (System_String_o *)StringLiteral_23055/*"purchaseVerificationUrl"*/,
    v15,
    (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsExtraPath,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v16 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v16 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v17 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v16->static_fields->KeyTestOptionsExtraPath,
            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !System_String__IsNullOrEmpty((System_String_o *)v17, 0) )
    {
      v18 = AdjustSdk_AdjustUtils_TypeInfo;
      if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
        v18 = AdjustSdk_AdjustUtils_TypeInfo;
      }
      v19 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
              (Il2CppObject *)v18->static_fields->KeyTestOptionsExtraPath,
              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_AndroidJavaObject__Set_object_(
        v10,
        (System_String_o *)StringLiteral_17122/*"basePath"*/,
        v19,
        (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
      v20 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
              (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsExtraPath,
              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_AndroidJavaObject__Set_object_(
        v10,
        (System_String_o *)StringLiteral_19919/*"gdprPath"*/,
        v20,
        (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
      v21 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
              (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsExtraPath,
              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_AndroidJavaObject__Set_object_(
        v10,
        (System_String_o *)StringLiteral_24044/*"subscriptionPath"*/,
        v21,
        (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
      v22 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
              (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsExtraPath,
              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_AndroidJavaObject__Set_object_(
        v10,
        (System_String_o *)StringLiteral_23054/*"purchaseVerificationPath"*/,
        v22,
        (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
    }
  }
  v23 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    v23 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  v24 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
          (Il2CppObject *)v23->static_fields->KeyTestOptionsDeleteState,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  if ( ajoCurrentActivity && v24 )
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_18341/*"context"*/,
      (Il2CppObject *)ajoCurrentActivity,
      (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  v25 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    v25 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v25->static_fields->KeyTestOptionsUseTestConnectionOptions,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v26 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v26 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    inited = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
               (Il2CppObject *)v26->static_fields->KeyTestOptionsUseTestConnectionOptions,
               (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !inited )
      goto LABEL_112;
    v27 = System_String__ToLower((System_String_o *)inited, 0);
    v28 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_24457/*"true"*/, 0);
    v29 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    LOBYTE(v83) = v28;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, &v83);
    if ( !v29 )
      goto LABEL_112;
    v30 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_1C941D4(inited, v29->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v29->max_length) )
      goto LABEL_113;
    v29->m_Items[0] = v30;
    sub_1C9403C(v29->m_Items, v30);
    v31 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v31, (System_String_o *)StringLiteral_21244/*"java.lang.Boolean"*/, v29, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_24735/*"useTestConnectionOptions"*/,
      (Il2CppObject *)v31,
      (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v32 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    v32 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v32->static_fields->KeyTestOptionsTimerIntervalInMilliseconds,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v33 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v33 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v34 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v33->static_fields->KeyTestOptionsTimerIntervalInMilliseconds,
            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v35 = System_Int64__Parse((System_String_o *)v34, 0);
    v36 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    v83 = v35;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v83);
    if ( !v36 )
      goto LABEL_112;
    v37 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_1C941D4(inited, v36->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v36->max_length) )
      goto LABEL_113;
    v36->m_Items[0] = v37;
    sub_1C9403C(v36->m_Items, v37);
    v38 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v38, (System_String_o *)StringLiteral_21251/*"java.lang.Long"*/, v36, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_24329/*"timerIntervalInMilliseconds"*/,
      (Il2CppObject *)v38,
      (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v39 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    v39 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v39->static_fields->KeyTestOptionsTimerStartInMilliseconds,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v40 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v40 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v41 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v40->static_fields->KeyTestOptionsTimerStartInMilliseconds,
            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v42 = System_Int64__Parse((System_String_o *)v41, 0);
    v43 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    v83 = v42;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v83);
    if ( !v43 )
      goto LABEL_112;
    v44 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_1C941D4(inited, v43->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v43->max_length) )
      goto LABEL_113;
    v43->m_Items[0] = v44;
    sub_1C9403C(v43->m_Items, v44);
    v45 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v45, (System_String_o *)StringLiteral_21251/*"java.lang.Long"*/, v43, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_24330/*"timerStartInMilliseconds"*/,
      (Il2CppObject *)v45,
      (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v46 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    v46 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v46->static_fields->KeyTestOptionsSessionIntervalInMilliseconds,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v47 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v47 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v48 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v47->static_fields->KeyTestOptionsSessionIntervalInMilliseconds,
            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v49 = System_Int64__Parse((System_String_o *)v48, 0);
    v50 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    v83 = v49;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v83);
    if ( !v50 )
      goto LABEL_112;
    v51 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_1C941D4(inited, v50->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v50->max_length) )
      goto LABEL_113;
    v50->m_Items[0] = v51;
    sub_1C9403C(v50->m_Items, v51);
    v52 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v52, (System_String_o *)StringLiteral_21251/*"java.lang.Long"*/, v50, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_23539/*"sessionIntervalInMilliseconds"*/,
      (Il2CppObject *)v52,
      (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v53 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    v53 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v53->static_fields->KeyTestOptionsSubsessionIntervalInMilliseconds,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v54 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v54 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v55 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v54->static_fields->KeyTestOptionsSubsessionIntervalInMilliseconds,
            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v56 = System_Int64__Parse((System_String_o *)v55, 0);
    v57 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    v83 = v56;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v83);
    if ( !v57 )
      goto LABEL_112;
    v58 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_1C941D4(inited, v57->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v57->max_length) )
      goto LABEL_113;
    v57->m_Items[0] = v58;
    sub_1C9403C(v57->m_Items, v58);
    v59 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v59, (System_String_o *)StringLiteral_21251/*"java.lang.Long"*/, v57, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_24047/*"subsessionIntervalInMilliseconds"*/,
      (Il2CppObject *)v59,
      (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v60 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    v60 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v60->static_fields->KeyTestOptionsTeardown,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v61 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v61 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    inited = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
               (Il2CppObject *)v61->static_fields->KeyTestOptionsTeardown,
               (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !inited )
      goto LABEL_112;
    v62 = System_String__ToLower((System_String_o *)inited, 0);
    v63 = System_String__op_Equality(v62, (System_String_o *)StringLiteral_24457/*"true"*/, 0);
    v64 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    LOBYTE(v83) = v63;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, &v83);
    if ( !v64 )
      goto LABEL_112;
    v65 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_1C941D4(inited, v64->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v64->max_length) )
      goto LABEL_113;
    v64->m_Items[0] = v65;
    sub_1C9403C(v64->m_Items, v65);
    v66 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v66, (System_String_o *)StringLiteral_21244/*"java.lang.Boolean"*/, v64, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_24259/*"teardown"*/,
      (Il2CppObject *)v66,
      (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v67 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    v67 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v67->static_fields->KeyTestOptionsNoBackoffWait,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v68 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v68 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    inited = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
               (Il2CppObject *)v68->static_fields->KeyTestOptionsNoBackoffWait,
               (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !inited )
      goto LABEL_112;
    v69 = System_String__ToLower((System_String_o *)inited, 0);
    v70 = System_String__op_Equality(v69, (System_String_o *)StringLiteral_24457/*"true"*/, 0);
    v71 = (System_Object_array *)sub_1C94140(object___TypeInfo, 1);
    LOBYTE(v83) = v70;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, &v83);
    if ( !v71 )
      goto LABEL_112;
    v72 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_1C941D4(inited, v71->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v71->max_length) )
      goto LABEL_113;
    v71->m_Items[0] = v72;
    sub_1C9403C(v71->m_Items, v72);
    v73 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_71837880(v73, (System_String_o *)StringLiteral_21244/*"java.lang.Boolean"*/, v71, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_22451/*"noBackoffWait"*/,
      (Il2CppObject *)v73,
      (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v74 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
    v74 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v74->static_fields->KeyTestOptionsIgnoreSystemLifecycleBootstrap,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v75 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      v75 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    inited = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
               (Il2CppObject *)v75->static_fields->KeyTestOptionsIgnoreSystemLifecycleBootstrap,
               (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( inited )
    {
      v76 = System_String__ToLower((System_String_o *)inited, 0);
      v77 = System_String__op_Equality(v76, (System_String_o *)StringLiteral_24457/*"true"*/, 0);
      v78 = sub_1C94140(object___TypeInfo, 1);
      LOBYTE(v83) = v77;
      inited = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, &v83);
      if ( v78 )
      {
        v79 = inited;
        if ( !inited || (inited = (Il2CppObject *)sub_1C941D4(inited, *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v78 + 24) )
          {
            *(_QWORD *)(v78 + 32) = v79;
            sub_1C9403C(v78 + 32, v79);
            v80 = (UnityEngine_AndroidJavaObject_o *)sub_1C942E4(UnityEngine_AndroidJavaObject_TypeInfo);
            UnityEngine_AndroidJavaObject___ctor_71837880(
              v80,
              (System_String_o *)StringLiteral_21244/*"java.lang.Boolean"*/,
              (System_Object_array *)v78,
              0);
            UnityEngine_AndroidJavaObject__Set_object_(
              v10,
              (System_String_o *)StringLiteral_20452/*"ignoreSystemLifecycleBootstrap"*/,
              (Il2CppObject *)v80,
              (const MethodInfo_30EB634 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
            return v10;
          }
LABEL_113:
          sub_1C942F8(inited);
        }
LABEL_114:
        v82 = sub_1C94314();
        sub_1C941C0(v82, 0);
      }
    }
LABEL_112:
    sub_1C942F0(inited, v11);
  }
  return v10;
}


System_String_o *AdjustSdk_AdjustUtils__TryGetValue(
        System_Collections_Generic_Dictionary_string__string__o *dictionary,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__string__o *v4; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = dictionary;
  if ( (byte_4D24A93 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    dictionary = (System_Collections_Generic_Dictionary_string__string__o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D24A93 = 1;
  }
  value = 0;
  if ( !v4 )
    sub_1C942F0(dictionary, key);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)v4,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
    return 0;
  if ( System_String__op_Equality((System_String_o *)value, (System_String_o *)StringLiteral_1/*""*/, 0) )
    return 0;
  return (System_String_o *)value;
}


void AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(
        AdjustSdk_JSONClass_o *jsonObject,
        System_Collections_Generic_Dictionary_string__object__o *output,
        const MethodInfo *method)
{
  AdjustSdk_JSONClass_o *v4; // x19
  __int64 v5; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x23
  Il2CppObject *v20; // x21
  AdjustSdk_JSONClass_o *v21; // x22
  const MethodInfo *v22; // x2
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_Dictionary_object__object__o *v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x19
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  v4 = jsonObject;
  if ( (byte_4D24A92 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    jsonObject = (AdjustSdk_JSONClass_o *)sub_1C94098(&System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo);
    byte_4D24A92 = 1;
  }
  if ( !v4 )
    sub_1C942F0(jsonObject, output);
  Enumerator = AdjustSdk_JSONClass__GetEnumerator(v4, (const MethodInfo *)output);
  if ( !Enumerator )
    sub_1C942F0(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v10 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v10)(Enumerator, *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1];
    }
    else
    {
LABEL_16:
      v14 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(Enumerator, *(_QWORD *)(v14 + 8));
    if ( !v15 )
      sub_1C942F0(0, v16);
    if ( *(Il2CppClass **)(*(_QWORD *)v15 + 64LL) != System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo->_1.element_class )
    {
      v23 = (Il2CppObject *)sub_1C9468C();
LABEL_40:
      sub_1C942F0(v23, v24);
    }
    v17 = j_il2cpp_object_unbox_0();
    v19 = *(_QWORD *)(v17 + 8);
    if ( !v19 )
      sub_1C942F0(v17, v18);
    v20 = *(Il2CppObject **)v17;
    v21 = (AdjustSdk_JSONClass_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19 + 744LL))(
                                     *(_QWORD *)(v17 + 8),
                                     *(_QWORD *)(*(_QWORD *)v19 + 752LL));
    if ( AdjustSdk_JSONNode__op_Equality((AdjustSdk_JSONNode_o *)v21, 0, v22) )
    {
      v23 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 456LL))(
                              v19,
                              *(_QWORD *)(*(_QWORD *)v19 + 464LL));
      if ( !output )
        goto LABEL_40;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)output,
        v20,
        v23,
        (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    }
    else
    {
      v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v25,
        (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( !output )
        sub_1C942F0(v26, v27);
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)output,
        v20,
        (Il2CppObject *)v25,
        (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
      if ( !AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(
        v21,
        (System_Collections_Generic_Dictionary_string__object__o *)v25,
        v28);
    }
  }
  v29 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
  if ( v29 )
  {
    v30 = *(_QWORD *)v29;
    v31 = v29;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_33;
      }
      v34 = v30 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_33:
      v34 = sub_1C6A420(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
  }
}


void AdjustSdk_JSONArray___ctor(AdjustSdk_JSONArray_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4D24ABC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode___ctor__);
    sub_1C94098(&System_Collections_Generic_List_JSONNode__TypeInfo);
    byte_4D24ABC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_JSONNode__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_JSONNode___ctor__);
  this->fields.m_List = (struct System_Collections_Generic_List_JSONNode__o *)v3;
  sub_1C9403C(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_JSONArray__Add(
        AdjustSdk_JSONArray_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *aItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *m_List; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4D24AB4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__Add__);
    byte_4D24AB4 = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( !m_List
    || (items = m_List->fields._items,
        v8 = Method_System_Collections_Generic_List_JSONNode__Add__,
        ++m_List->fields._version,
        !items) )
  {
    sub_1C942F0(m_List, aKey);
  }
  size = m_List->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      m_List,
      (Il2CppObject *)aItem,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    m_List->fields._size = size + 1;
    v10[4] = (Il2CppClass *)aItem;
    sub_1C9403C(v10 + 4, aItem);
  }
}


System_Collections_IEnumerator_o *AdjustSdk_JSONArray__GetEnumerator(
        AdjustSdk_JSONArray_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4D24AB8 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONArray__GetEnumerator_d__14_TypeInfo);
    byte_4D24AB8 = 1;
  }
  v3 = sub_1C942E4(AdjustSdk_JSONArray__GetEnumerator_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
AdjustSdk_JSONNode_o *AdjustSdk_JSONArray__Remove(
        AdjustSdk_JSONArray_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *m_List; // x0
  System_Collections_Generic_List_object__o *v6; // x8
  AdjustSdk_JSONNode_o *v7; // x20

  if ( (byte_4D24AB5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__get_Item__);
    byte_4D24AB5 = 1;
  }
  if ( aIndex < 0 )
    return 0;
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( !m_List )
    goto LABEL_10;
  if ( m_List->fields._size <= aIndex )
    return 0;
  m_List = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          m_List,
                                                          aIndex,
                                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_JSONNode__get_Item__);
  v6 = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( !v6 )
LABEL_10:
    sub_1C942F0(m_List, *(_QWORD *)&aIndex);
  v7 = (AdjustSdk_JSONNode_o *)m_List;
  System_Collections_Generic_List_object___RemoveAt(
    v6,
    aIndex,
    (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_JSONNode__RemoveAt__);
  return v7;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONArray__Remove_31017544(
        AdjustSdk_JSONArray_o *this,
        AdjustSdk_JSONNode_o *aNode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *m_List; // x0

  if ( (byte_4D24AB6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__Remove__);
    byte_4D24AB6 = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( !m_List )
    sub_1C942F0(0, aNode);
  System_Collections_Generic_List_object___Remove(
    m_List,
    (Il2CppObject *)aNode,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_JSONNode__Remove__);
  return aNode;
}


void AdjustSdk_JSONArray__Serialize(
        AdjustSdk_JSONArray_o *this,
        System_IO_BinaryWriter_o *aWriter,
        const MethodInfo *method)
{
  AdjustSdk_JSONArray_o *v4; // x20
  struct System_Collections_Generic_List_JSONNode__o *m_List; // x8
  int32_t v6; // w21

  v4 = this;
  if ( (byte_4D24ABB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    this = (AdjustSdk_JSONArray_o *)sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__get_Item__);
    byte_4D24ABB = 1;
  }
  if ( !aWriter
    || (this = (AdjustSdk_JSONArray_o *)((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))aWriter->klass->vtable._9_Write.methodPtr)(
                                          aWriter,
                                          1,
                                          aWriter->klass->vtable._9_Write.method),
        (m_List = v4->fields.m_List) == 0)
    || (((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))aWriter->klass->vtable._17_Write.methodPtr)(
          aWriter,
          (unsigned int)m_List->fields._size,
          aWriter->klass->vtable._17_Write.method),
        (this = (AdjustSdk_JSONArray_o *)v4->fields.m_List) == 0) )
  {
LABEL_10:
    sub_1C942F0(this, aWriter);
  }
  v6 = 0;
  while ( v6 < SLODWORD(this[1].klass) )
  {
    this = (AdjustSdk_JSONArray_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)this,
                                      v6,
                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_JSONNode__get_Item__);
    if ( this )
    {
      ((void (__fastcall *)(AdjustSdk_JSONArray_o *, System_IO_BinaryWriter_o *, const MethodInfo *))this->klass->vtable._28_Serialize.methodPtr)(
        this,
        aWriter,
        this->klass->vtable._28_Serialize.method);
      this = (AdjustSdk_JSONArray_o *)v4->fields.m_List;
      ++v6;
      if ( this )
        continue;
    }
    goto LABEL_10;
  }
}


System_String_o *AdjustSdk_JSONArray__ToString(AdjustSdk_JSONArray_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *m_List; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x21
  System_String_o *v8; // x20
  System_String_o *v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D24AB9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    sub_1C94098(&StringLiteral_15862/*"[ "*/);
    sub_1C94098(&StringLiteral_809/*", "*/);
    sub_1C94098(&StringLiteral_207/*" ]"*/);
    byte_4D24AB9 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( !m_List )
    sub_1C942F0(0, method);
  v4 = (System_String_o *)StringLiteral_15862/*"[ "*/;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    m_List,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
  while ( 1 )
  {
    v5 = (System_String_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v11,
                              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    if ( ((unsigned __int8)v5 & 1) == 0 )
      break;
    if ( !v4 )
      sub_1C942F0(v5, v6);
    current = v11.fields._current;
    if ( v4->fields._stringLength >= 3 )
    {
      v5 = System_String__Concat_64417744(v4, (System_String_o *)StringLiteral_809/*", "*/, 0);
      v8 = v5;
    }
    else
    {
      v8 = v4;
    }
    if ( !current )
      sub_1C942F0(v5, v6);
    v9 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[3].methodPtr)(
                              current,
                              current->klass->vtable[3].method);
    v4 = System_String__Concat_64417744(v8, v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
  return System_String__Concat_64417744(v4, (System_String_o *)StringLiteral_207/*" ]"*/, 0);
}


System_String_o *AdjustSdk_JSONArray__ToString_31018468(
        AdjustSdk_JSONArray_o *this,
        System_String_o *aPrefix,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *m_List; // x0
  System_String_o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x22
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D24ABA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_115/*"   "*/);
    sub_1C94098(&StringLiteral_15862/*"[ "*/);
    sub_1C94098(&StringLiteral_809/*", "*/);
    sub_1C94098(&StringLiteral_16112/*"]"*/);
    byte_4D24ABA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( !m_List )
    sub_1C942F0(0, aPrefix);
  v6 = (System_String_o *)StringLiteral_15862/*"[ "*/;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    m_List,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    if ( !v7 )
      break;
    if ( !v6 )
      sub_1C942F0(v7, v8);
    current = v15.fields._current;
    if ( v6->fields._stringLength >= 4 )
      v6 = System_String__Concat_64417744(v6, (System_String_o *)StringLiteral_809/*", "*/, 0);
    v10 = System_String__Concat_64458012(
            v6,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            aPrefix,
            (System_String_o *)StringLiteral_115/*"   "*/,
            0);
    v11 = System_String__Concat_64417744(aPrefix, (System_String_o *)StringLiteral_115/*"   "*/, 0);
    if ( !current )
      sub_1C942F0(v11, v11);
    v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))current->klass->vtable[17].methodPtr)(
                               current,
                               v11,
                               current->klass->vtable[17].method);
    v6 = System_String__Concat_64417744(v10, v12, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
  return System_String__Concat_64458012(
           v6,
           (System_String_o *)StringLiteral_43/*"\n"*/,
           aPrefix,
           (System_String_o *)StringLiteral_16112/*"]"*/,
           0);
}


System_Collections_Generic_IEnumerable_JSONNode__o *AdjustSdk_JSONArray__get_Childs(
        AdjustSdk_JSONArray_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4D24AB7 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONArray__get_Childs_d__13_TypeInfo);
    byte_4D24AB7 = 1;
  }
  v3 = sub_1C942E4(AdjustSdk_JSONArray__get_Childs_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C9403C(v3 + 40, this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)v3;
}


int32_t AdjustSdk_JSONArray__get_Count(AdjustSdk_JSONArray_o *this, const MethodInfo *method)
{
  AdjustSdk_JSONArray_o *v2; // x19
  struct System_Collections_Generic_List_JSONNode__o *m_List; // x8

  v2 = this;
  if ( (byte_4D24AB3 & 1) == 0 )
  {
    this = (AdjustSdk_JSONArray_o *)sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    byte_4D24AB3 = 1;
  }
  m_List = v2->fields.m_List;
  if ( !m_List )
    sub_1C942F0(this, method);
  return m_List->fields._size;
}


// local variable allocation has failed, the output may be wrong!
AdjustSdk_JSONNode_o *AdjustSdk_JSONArray__get_Item(
        AdjustSdk_JSONArray_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *m_List; // x0
  AdjustSdk_JSONLazyCreator_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4D24AAF & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONLazyCreator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__get_Item__);
    byte_4D24AAF = 1;
  }
  if ( (aIndex & 0x80000000) == 0 )
  {
    m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
    if ( !m_List )
      sub_1C942F0(0, *(_QWORD *)&aIndex);
    if ( m_List->fields._size > aIndex )
      return (AdjustSdk_JSONNode_o *)System_Collections_Generic_List_object___get_Item(
                                       m_List,
                                       aIndex,
                                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_JSONNode__get_Item__);
  }
  v7 = (AdjustSdk_JSONLazyCreator_o *)sub_1C942E4(AdjustSdk_JSONLazyCreator_TypeInfo);
  AdjustSdk_JSONLazyCreator___ctor(v7, (AdjustSdk_JSONNode_o *)this, v8);
  return (AdjustSdk_JSONNode_o *)v7;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONArray__get_Item_31016860(
        AdjustSdk_JSONArray_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  AdjustSdk_JSONLazyCreator_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4D24AB1 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_4D24AB1 = 1;
  }
  v4 = (AdjustSdk_JSONLazyCreator_o *)sub_1C942E4(AdjustSdk_JSONLazyCreator_TypeInfo);
  AdjustSdk_JSONLazyCreator___ctor(v4, (AdjustSdk_JSONNode_o *)this, v5);
  return (AdjustSdk_JSONNode_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
void AdjustSdk_JSONArray__set_Item(
        AdjustSdk_JSONArray_o *this,
        int32_t aIndex,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *m_List; // x0
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x8

  if ( (byte_4D24AB0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__set_Item__);
    byte_4D24AB0 = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( aIndex < 0 )
  {
    if ( !m_List )
      goto LABEL_12;
  }
  else
  {
    if ( !m_List )
      goto LABEL_12;
    if ( m_List->fields._size > aIndex )
    {
      System_Collections_Generic_List_object___set_Item(
        m_List,
        aIndex,
        (Il2CppObject *)value,
        (const MethodInfo_386ABB8 *)Method_System_Collections_Generic_List_JSONNode__set_Item__);
      return;
    }
  }
  items = m_List->fields._items;
  v9 = Method_System_Collections_Generic_List_JSONNode__Add__;
  ++m_List->fields._version;
  if ( !items )
LABEL_12:
    sub_1C942F0(m_List, *(_QWORD *)&aIndex);
  size = m_List->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      m_List,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    m_List->fields._size = size + 1;
    v11[4] = (Il2CppClass *)value;
    sub_1C9403C(v11 + 4, value);
  }
}


void AdjustSdk_JSONArray__set_Item_31016948(
        AdjustSdk_JSONArray_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *m_List; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4D24AB2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__Add__);
    byte_4D24AB2 = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( !m_List
    || (items = m_List->fields._items,
        v8 = Method_System_Collections_Generic_List_JSONNode__Add__,
        ++m_List->fields._version,
        !items) )
  {
    sub_1C942F0(m_List, aKey);
  }
  size = m_List->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      m_List,
      (Il2CppObject *)value,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    m_List->fields._size = size + 1;
    v10[4] = (Il2CppClass *)value;
    sub_1C9403C(v10 + 4, value);
  }
}


void AdjustSdk_JSONArray__GetEnumerator_d__14___ctor(
        AdjustSdk_JSONArray__GetEnumerator_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AdjustSdk_JSONArray__GetEnumerator_d__14__MoveNext(
        AdjustSdk_JSONArray__GetEnumerator_d__14_o *this,
        const MethodInfo *method)
{
  AdjustSdk_JSONArray__GetEnumerator_d__14_o *v2; // x19
  int32_t _1__state; // w8
  struct AdjustSdk_JSONArray_o *_4__this; // x8
  System_Collections_Generic_List_object__o *m_List; // x0
  AdjustSdk_JSONArray__GetEnumerator_d__14_o *v6; // x9
  __int128 v7; // q0
  struct System_Collections_Generic_List_Enumerator_JSONNode__o *p__7__wrap1; // x0
  const MethodInfo *v9; // x1
  bool v10; // w8
  AdjustSdk_JSONArray__GetEnumerator_d__14_o *v11; // x0
  Il2CppObject *current; // x1
  bool result; // w0
  AdjustSdk_JSONArray__GetEnumerator_d__14_o *v14; // x8
  System_Collections_Generic_List_Enumerator_T__o v15[2]; // [xsp+8h] [xbp-68h] BYREF
  AdjustSdk_JSONArray__GetEnumerator_d__14_o **v16; // [xsp+48h] [xbp-28h]
  AdjustSdk_JSONArray__GetEnumerator_d__14_o *v17; // [xsp+58h] [xbp-18h] BYREF

  v17 = this;
  v2 = this;
  if ( (byte_4D24ABD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__get_Current__);
    this = (AdjustSdk_JSONArray__GetEnumerator_d__14_o *)sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    byte_4D24ABD = 1;
  }
  v16 = &v17;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C942F0(this, method);
    m_List = (System_Collections_Generic_List_object__o *)_4__this->fields.m_List;
    if ( !m_List )
      sub_1C942F0(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v15,
      m_List,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    v6 = v17;
    v7 = *(_OWORD *)&v15[0].fields._list;
    p__7__wrap1 = &v17->fields.__7__wrap1;
    v15[1] = v15[0];
    v17->fields.__7__wrap1.fields._current = (struct AdjustSdk_JSONNode_o *)v15[0].fields._current;
    *(_OWORD *)&v6->fields.__7__wrap1.fields._list = v7;
    sub_1C9403C(p__7__wrap1, 0);
    v2 = v17;
  }
  v2->fields.__1__state = -3;
  v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
  v11 = v17;
  if ( v10 )
  {
    current = (Il2CppObject *)v17->fields.__7__wrap1.fields._current;
    v17->fields.__2__current = current;
    sub_1C9403C(&v11->fields.__2__current, current);
    result = 1;
    v17->fields.__1__state = 1;
  }
  else
  {
    AdjustSdk_JSONArray__GetEnumerator_d__14____m__Finally1(v17, v9);
    v14 = v17;
    result = 0;
    v17->fields.__7__wrap1.fields._list = 0;
    *(_QWORD *)&v14->fields.__7__wrap1.fields._index = 0;
    v14->fields.__7__wrap1.fields._current = 0;
  }
  return result;
}


Il2CppObject *AdjustSdk_JSONArray__GetEnumerator_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AdjustSdk_JSONArray__GetEnumerator_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AdjustSdk_JSONArray__GetEnumerator_d__14__System_Collections_IEnumerator_Reset(
        AdjustSdk_JSONArray__GetEnumerator_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AdjustSdk_JSONArray__GetEnumerator_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AdjustSdk_JSONArray__GetEnumerator_d__14__System_Collections_IEnumerator_get_Current(
        AdjustSdk_JSONArray__GetEnumerator_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AdjustSdk_JSONArray__GetEnumerator_d__14__System_IDisposable_Dispose(
        AdjustSdk_JSONArray__GetEnumerator_d__14_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    AdjustSdk_JSONArray__GetEnumerator_d__14____m__Finally1(this, method);
}


void AdjustSdk_JSONArray__GetEnumerator_d__14____m__Finally1(
        AdjustSdk_JSONArray__GetEnumerator_d__14_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D24ABE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
    byte_4D24ABE = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
}


void AdjustSdk_JSONArray__get_Childs_d__13___ctor(
        AdjustSdk_JSONArray__get_Childs_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool AdjustSdk_JSONArray__get_Childs_d__13__MoveNext(
        AdjustSdk_JSONArray__get_Childs_d__13_o *this,
        const MethodInfo *method)
{
  AdjustSdk_JSONArray__get_Childs_d__13_o *v2; // x19
  int32_t _1__state; // w8
  struct AdjustSdk_JSONArray_o *_4__this; // x8
  System_Collections_Generic_List_object__o *m_List; // x0
  AdjustSdk_JSONArray__get_Childs_d__13_o *v6; // x9
  __int128 v7; // q0
  struct System_Collections_Generic_List_Enumerator_JSONNode__o *p__7__wrap1; // x0
  const MethodInfo *v9; // x1
  bool v10; // w8
  AdjustSdk_JSONArray__get_Childs_d__13_o *v11; // x0
  struct AdjustSdk_JSONNode_o *current; // x1
  bool result; // w0
  AdjustSdk_JSONArray__get_Childs_d__13_o *v14; // x8
  System_Collections_Generic_List_Enumerator_T__o v15[2]; // [xsp+8h] [xbp-68h] BYREF
  AdjustSdk_JSONArray__get_Childs_d__13_o **v16; // [xsp+48h] [xbp-28h]
  AdjustSdk_JSONArray__get_Childs_d__13_o *v17; // [xsp+58h] [xbp-18h] BYREF

  v17 = this;
  v2 = this;
  if ( (byte_4D24ABF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__get_Current__);
    this = (AdjustSdk_JSONArray__get_Childs_d__13_o *)sub_1C94098(&Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    byte_4D24ABF = 1;
  }
  v16 = &v17;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C942F0(this, method);
    m_List = (System_Collections_Generic_List_object__o *)_4__this->fields.m_List;
    if ( !m_List )
      sub_1C942F0(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v15,
      m_List,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    v6 = v17;
    v7 = *(_OWORD *)&v15[0].fields._list;
    p__7__wrap1 = &v17->fields.__7__wrap1;
    v15[1] = v15[0];
    v17->fields.__7__wrap1.fields._current = (struct AdjustSdk_JSONNode_o *)v15[0].fields._current;
    *(_OWORD *)&v6->fields.__7__wrap1.fields._list = v7;
    sub_1C9403C(p__7__wrap1, 0);
    v2 = v17;
  }
  v2->fields.__1__state = -3;
  v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
  v11 = v17;
  if ( v10 )
  {
    current = v17->fields.__7__wrap1.fields._current;
    v17->fields.__2__current = current;
    sub_1C9403C(&v11->fields.__2__current, current);
    result = 1;
    v17->fields.__1__state = 1;
  }
  else
  {
    AdjustSdk_JSONArray__get_Childs_d__13____m__Finally1(v17, v9);
    v14 = v17;
    result = 0;
    v17->fields.__7__wrap1.fields._list = 0;
    *(_QWORD *)&v14->fields.__7__wrap1.fields._index = 0;
    v14->fields.__7__wrap1.fields._current = 0;
  }
  return result;
}


System_Collections_Generic_IEnumerator_JSONNode__o *AdjustSdk_JSONArray__get_Childs_d__13__System_Collections_Generic_IEnumerable_AdjustSdk_JSONNode__GetEnumerator(
        AdjustSdk_JSONArray__get_Childs_d__13_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct AdjustSdk_JSONArray_o *_4__this; // x1

  if ( (byte_4D24AC1 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONArray__get_Childs_d__13_TypeInfo);
    byte_4D24AC1 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C942E4(AdjustSdk_JSONArray__get_Childs_d__13_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C9403C(v4 + 40, _4__this);
    return (System_Collections_Generic_IEnumerator_JSONNode__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_JSONNode__o *)this;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONArray__get_Childs_d__13__System_Collections_Generic_IEnumerator_AdjustSdk_JSONNode__get_Current(
        AdjustSdk_JSONArray__get_Childs_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AdjustSdk_JSONArray__get_Childs_d__13__System_Collections_IEnumerator_Reset(
        AdjustSdk_JSONArray__get_Childs_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AdjustSdk_JSONArray__get_Childs_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AdjustSdk_JSONArray__get_Childs_d__13__System_Collections_IEnumerator_get_Current(
        AdjustSdk_JSONArray__get_Childs_d__13_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void AdjustSdk_JSONArray__get_Childs_d__13__System_IDisposable_Dispose(
        AdjustSdk_JSONArray__get_Childs_d__13_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    AdjustSdk_JSONArray__get_Childs_d__13____m__Finally1(this, method);
}


void AdjustSdk_JSONArray__get_Childs_d__13____m__Finally1(
        AdjustSdk_JSONArray__get_Childs_d__13_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D24AC0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
    byte_4D24AC0 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
}


void AdjustSdk_JSONClass___ctor(AdjustSdk_JSONClass_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20

  if ( (byte_4D24AD0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__JSONNode__TypeInfo);
    byte_4D24AD0 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__JSONNode__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__JSONNode___ctor__);
  this->fields.m_Dict = (struct System_Collections_Generic_Dictionary_string__JSONNode__o *)v3;
  sub_1C9403C(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_JSONClass__Add(
        AdjustSdk_JSONClass_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *aItem,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__JSONNode__o *m_Dict; // x22
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x0
  const MethodInfo_3520BF4 *v13; // x3
  System_Guid_o v14; // [xsp+0h] [xbp-40h] BYREF
  System_Guid_o v15; // 0:x0.16

  if ( (byte_4D24AC7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
    byte_4D24AC7 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(aKey, 0);
  m_Dict = this->fields.m_Dict;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v14 = System_Guid__NewGuid(0);
    *(_QWORD *)&v15.fields._a = &v14;
    *(_QWORD *)&v15.fields._d = 0;
    IsNullOrEmpty = System_Guid__ToString(v15, v10);
    if ( m_Dict )
    {
      v11 = (Il2CppObject *)IsNullOrEmpty;
      v12 = (System_Collections_Generic_Dictionary_object__object__o *)m_Dict;
      v13 = (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__;
      goto LABEL_11;
    }
LABEL_13:
    sub_1C942F0(IsNullOrEmpty, v8);
  }
  if ( !m_Dict )
    goto LABEL_13;
  IsNullOrEmpty = (System_String_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                       (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict,
                                       (Il2CppObject *)aKey,
                                       (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
  if ( !this->fields.m_Dict )
    goto LABEL_13;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict,
      (Il2CppObject *)aKey,
      (Il2CppObject *)aItem,
      (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
    return;
  }
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  v11 = (Il2CppObject *)aKey;
  v13 = (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__;
LABEL_11:
  System_Collections_Generic_Dictionary_object__object___Add(v12, v11, (Il2CppObject *)aItem, v13);
}


System_Collections_IEnumerator_o *AdjustSdk_JSONClass__GetEnumerator(
        AdjustSdk_JSONClass_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4D24ACC & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONClass__GetEnumerator_d__15_TypeInfo);
    byte_4D24ACC = 1;
  }
  v3 = sub_1C942E4(AdjustSdk_JSONClass__GetEnumerator_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__Remove(
        AdjustSdk_JSONClass_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x8
  AdjustSdk_JSONNode_o *v7; // x20

  if ( (byte_4D24AC8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
    byte_4D24AC8 = 1;
  }
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          m_Dict,
          (Il2CppObject *)aKey,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__) )
    return 0;
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict
    || (m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              m_Dict,
                                                                              (Il2CppObject *)aKey,
                                                                              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__),
        (v6 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict) == 0) )
  {
LABEL_10:
    sub_1C942F0(m_Dict, aKey);
  }
  v7 = (AdjustSdk_JSONNode_o *)m_Dict;
  System_Collections_Generic_Dictionary_object__object___Remove(
    v6,
    (Il2CppObject *)aKey,
    (const MethodInfo_35220F0 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__Remove_31022104(
        AdjustSdk_JSONClass_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  int32_t v3; // w20
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  System_Collections_Generic_KeyValuePair_object__object__o v6; // kr00_16
  Il2CppObject *value; // x19

  v3 = aIndex;
  if ( (byte_4D24AC9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    sub_1C94098(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    byte_4D24AC9 = 1;
  }
  if ( v3 < 0 )
    return 0;
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         m_Dict,
         (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__) <= v3 )
    return 0;
  v6 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.m_Dict,
         v3,
         (const MethodInfo_31BFC7C *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
  *(_QWORD *)&aIndex = v6.fields.value;
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
LABEL_10:
    sub_1C942F0(m_Dict, *(_QWORD *)&aIndex);
  value = v6.fields.value;
  System_Collections_Generic_Dictionary_object__object___Remove(
    m_Dict,
    v6.fields.key,
    (const MethodInfo_35220F0 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
  return (AdjustSdk_JSONNode_o *)value;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__Remove_31022324(
        AdjustSdk_JSONClass_o *this,
        AdjustSdk_JSONNode_o *aNode,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *m_Dict; // x21
  System_Func_T__TResult__o *v9; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  Il2CppObject *key; // x1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x0

  if ( (byte_4D24ACA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
    sub_1C94098(&Method_System_Linq_Enumerable_First_KeyValuePair_string__JSONNode____);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__JSONNode____);
    sub_1C94098(&System_Func_KeyValuePair_string__JSONNode___bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_1C94098(&Method_AdjustSdk_JSONClass___c__DisplayClass12_0__Remove_b__0__);
    sub_1C94098(&AdjustSdk_JSONClass___c__DisplayClass12_0_TypeInfo);
    byte_4D24ACA = 1;
  }
  v5 = sub_1C942E4(AdjustSdk_JSONClass___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = aNode;
  sub_1C9403C(v5 + 16, aNode);
  m_Dict = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.m_Dict;
  v9 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_string__JSONNode___bool__TypeInfo);
  System_Func_KeyValuePair_object__object___bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_AdjustSdk_JSONClass___c__DisplayClass12_0__Remove_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(
          m_Dict,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31E2BA4 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__JSONNode____);
  key = System_Linq_Enumerable__First_KeyValuePair_object__object__(
          v10,
          (const MethodInfo_31C24C8 *)Method_System_Linq_Enumerable_First_KeyValuePair_string__JSONNode____).fields.key;
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !v12 )
    sub_1C942F0(0, key);
  System_Collections_Generic_Dictionary_object__object___Remove(
    v12,
    key,
    (const MethodInfo_35220F0 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
  return *(AdjustSdk_JSONNode_o **)(v5 + 16);
}


void AdjustSdk_JSONClass__Serialize(
        AdjustSdk_JSONClass_o *this,
        System_IO_BinaryWriter_o *aWriter,
        const MethodInfo *method)
{
  AdjustSdk_JSONClass_o *v4; // x20
  unsigned int Count; // w0
  Il2CppObject *currentKey; // x21
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4D24ACF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Keys__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__get_Current__);
    this = (AdjustSdk_JSONClass_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__JSONNode__GetEnumerator__);
    byte_4D24ACF = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !aWriter
    || (((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))aWriter->klass->vtable._9_Write.methodPtr)(
          aWriter,
          2,
          aWriter->klass->vtable._9_Write.method),
        (this = (AdjustSdk_JSONClass_o *)v4->fields.m_Dict) == 0)
    || (Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                  (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__),
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))aWriter->klass->vtable._17_Write.methodPtr)(
          aWriter,
          Count,
          aWriter->klass->vtable._17_Write.method),
        (this = (AdjustSdk_JSONClass_o *)v4->fields.m_Dict) == 0)
    || (this = (AdjustSdk_JSONClass_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                          (System_Collections_Generic_Dictionary_object__object__o *)this,
                                          (const MethodInfo_35208D4 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Keys__)) == 0 )
  {
    sub_1C942F0(this, aWriter);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
    (const MethodInfo_378DE9C *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__JSONNode__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v11,
            (const MethodInfo_36200B0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__MoveNext__) )
  {
    currentKey = v11.fields._currentKey;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))aWriter->klass->vtable._22_Write.methodPtr)(
      aWriter,
      v11.fields._currentKey,
      aWriter->klass->vtable._22_Write.method);
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.m_Dict;
    if ( !m_Dict )
      sub_1C942F0(0, v7);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             m_Dict,
             currentKey,
             (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
    if ( !Item )
      sub_1C942F0(0, v10);
    ((void (__fastcall *)(Il2CppObject *, System_IO_BinaryWriter_o *, const MethodInfo *))Item->klass->vtable[28].methodPtr)(
      Item,
      aWriter,
      Item->klass->vtable[28].method);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_36200AC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__Dispose__);
}


System_String_o *AdjustSdk_JSONClass__ToString(AdjustSdk_JSONClass_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  System_String_o *v4; // x21
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  System_String_o *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D24ACD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_25285/*"{"*/);
    sub_1C94098(&StringLiteral_25511/*"}"*/);
    sub_1C94098(&StringLiteral_809/*", "*/);
    sub_1C94098(&StringLiteral_353/*"\":"*/);
    sub_1C94098(&StringLiteral_341/*"\""*/);
    byte_4D24ACD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    sub_1C942F0(0, method);
  v4 = (System_String_o *)StringLiteral_25285/*"{"*/;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v22,
    m_Dict,
    (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
           &v23,
           (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    if ( !v5 )
      break;
    if ( !v4 )
      sub_1C942F0(v5, v6);
    current = v23.fields._current;
    if ( v4->fields._stringLength >= 3 )
      v8 = System_String__Concat_64417744(v4, (System_String_o *)StringLiteral_809/*", "*/, 0);
    else
      v8 = v4;
    v9 = sub_1C94140(string___TypeInfo, 5);
    v11 = v9;
    if ( !v9 )
      sub_1C942F0(0, v10);
    if ( !*(_DWORD *)(v9 + 24) )
      sub_1C942F8(v9);
    *(_QWORD *)(v9 + 32) = v8;
    v12 = sub_1C9403C(v9 + 32, v8);
    if ( *(_DWORD *)(v11 + 24) <= 1u )
      sub_1C942F8(v12);
    v13 = StringLiteral_341/*"\""*/;
    *(_QWORD *)(v11 + 40) = StringLiteral_341/*"\""*/;
    sub_1C9403C(v11 + 40, v13);
    v15 = AdjustSdk_JSONNode__Escape((System_String_o *)current.fields.key, v14);
    if ( *(_DWORD *)(v11 + 24) <= 2u )
      sub_1C942F8(v15);
    *(_QWORD *)(v11 + 48) = v15;
    v16 = sub_1C9403C(v11 + 48, v15);
    if ( *(_DWORD *)(v11 + 24) <= 3u )
      sub_1C942F8(v16);
    v17 = StringLiteral_353/*"\":"*/;
    *(_QWORD *)(v11 + 56) = StringLiteral_353/*"\":"*/;
    v18 = sub_1C9403C(v11 + 56, v17);
    if ( !current.fields.value )
      sub_1C942F0(v18, v19);
    v20 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
            current.fields.value,
            current.fields.value->klass->vtable[3].method);
    if ( *(_DWORD *)(v11 + 24) <= 4u )
      sub_1C942F8(v20);
    *(_QWORD *)(v11 + 64) = v20;
    sub_1C9403C(v11 + 64, v20);
    v4 = System_String__Concat_64458276((System_String_array *)v11, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v23,
    (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
  return System_String__Concat_64417744(v4, (System_String_o *)StringLiteral_25511/*"}"*/, 0);
}


System_String_o *AdjustSdk_JSONClass__ToString_31023856(
        AdjustSdk_JSONClass_o *this,
        System_String_o *aPrefix,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  System_String_o *v6; // x22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  System_String_o *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x0
  __int64 v21; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D24ACE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_115/*"   "*/);
    sub_1C94098(&StringLiteral_25511/*"}"*/);
    sub_1C94098(&StringLiteral_809/*", "*/);
    sub_1C94098(&StringLiteral_343/*"\" : "*/);
    sub_1C94098(&StringLiteral_25286/*"{ "*/);
    sub_1C94098(&StringLiteral_341/*"\""*/);
    byte_4D24ACE = 1;
  }
  memset(&v24, 0, sizeof(v24));
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    sub_1C942F0(0, aPrefix);
  v6 = (System_String_o *)StringLiteral_25286/*"{ "*/;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v23,
    m_Dict,
    (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
           &v24,
           (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    if ( !v7 )
      break;
    if ( !v6 )
      sub_1C942F0(v7, v8);
    current = v24.fields._current;
    if ( v6->fields._stringLength >= 4 )
      v6 = System_String__Concat_64417744(v6, (System_String_o *)StringLiteral_809/*", "*/, 0);
    v10 = System_String__Concat_64458012(
            v6,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            aPrefix,
            (System_String_o *)StringLiteral_115/*"   "*/,
            0);
    v11 = sub_1C94140(string___TypeInfo, 5);
    v13 = v11;
    if ( !v11 )
      sub_1C942F0(0, v12);
    if ( !*(_DWORD *)(v11 + 24) )
      sub_1C942F8(v11);
    *(_QWORD *)(v11 + 32) = v10;
    v14 = sub_1C9403C(v11 + 32, v10);
    if ( *(_DWORD *)(v13 + 24) <= 1u )
      sub_1C942F8(v14);
    v15 = StringLiteral_341/*"\""*/;
    *(_QWORD *)(v13 + 40) = StringLiteral_341/*"\""*/;
    sub_1C9403C(v13 + 40, v15);
    v17 = AdjustSdk_JSONNode__Escape((System_String_o *)current.fields.key, v16);
    if ( *(_DWORD *)(v13 + 24) <= 2u )
      sub_1C942F8(v17);
    *(_QWORD *)(v13 + 48) = v17;
    v18 = sub_1C9403C(v13 + 48, v17);
    if ( *(_DWORD *)(v13 + 24) <= 3u )
      sub_1C942F8(v18);
    v19 = StringLiteral_343/*"\" : "*/;
    *(_QWORD *)(v13 + 56) = StringLiteral_343/*"\" : "*/;
    sub_1C9403C(v13 + 56, v19);
    v20 = System_String__Concat_64417744(aPrefix, (System_String_o *)StringLiteral_115/*"   "*/, 0);
    if ( !current.fields.value )
      sub_1C942F0(v20, v20);
    v21 = ((__int64 (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))current.fields.value->klass->vtable[17].methodPtr)(
            current.fields.value,
            v20,
            current.fields.value->klass->vtable[17].method);
    if ( *(_DWORD *)(v13 + 24) <= 4u )
      sub_1C942F8(v21);
    *(_QWORD *)(v13 + 64) = v21;
    sub_1C9403C(v13 + 64, v21);
    v6 = System_String__Concat_64458276((System_String_array *)v13, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v24,
    (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
  return System_String__Concat_64458012(
           v6,
           (System_String_o *)StringLiteral_43/*"\n"*/,
           aPrefix,
           (System_String_o *)StringLiteral_25511/*"}"*/,
           0);
}


System_Collections_Generic_IEnumerable_JSONNode__o *AdjustSdk_JSONClass__get_Childs(
        AdjustSdk_JSONClass_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4D24ACB & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONClass__get_Childs_d__14_TypeInfo);
    byte_4D24ACB = 1;
  }
  v3 = sub_1C942E4(AdjustSdk_JSONClass__get_Childs_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C9403C(v3 + 40, this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)v3;
}


int32_t AdjustSdk_JSONClass__get_Count(AdjustSdk_JSONClass_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0

  if ( (byte_4D24AC6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    byte_4D24AC6 = 1;
  }
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    sub_1C942F0(0, method);
  return System_Collections_Generic_Dictionary_object__object___get_Count(
           m_Dict,
           (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__get_Item(
        AdjustSdk_JSONClass_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  AdjustSdk_JSONLazyCreator_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4D24AC2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
    sub_1C94098(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_4D24AC2 = 1;
  }
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         m_Dict,
         (Il2CppObject *)aKey,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__) )
  {
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
    if ( m_Dict )
      return (AdjustSdk_JSONNode_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       m_Dict,
                                       (Il2CppObject *)aKey,
                                       (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
LABEL_8:
    sub_1C942F0(m_Dict, aKey);
  }
  v7 = (AdjustSdk_JSONLazyCreator_o *)sub_1C942E4(AdjustSdk_JSONLazyCreator_TypeInfo);
  AdjustSdk_JSONLazyCreator___ctor_31020896(v7, (AdjustSdk_JSONNode_o *)this, aKey, v8);
  return (AdjustSdk_JSONNode_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__get_Item_31021168(
        AdjustSdk_JSONClass_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0

  if ( (byte_4D24AC4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    sub_1C94098(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    byte_4D24AC4 = 1;
  }
  if ( aIndex < 0 )
    return 0;
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    sub_1C942F0(0, *(_QWORD *)&aIndex);
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         m_Dict,
         (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__) <= aIndex )
    return 0;
  else
    return (AdjustSdk_JSONNode_o *)System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)this[16],
                                     aIndex,
                                     (const MethodInfo_31BFC7C *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____).fields.value;
}


void AdjustSdk_JSONClass__set_Item(
        AdjustSdk_JSONClass_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__JSONNode__o *m_Dict; // x0
  System_Collections_Generic_Dictionary_object__object__o *v8; // x8

  if ( (byte_4D24AC3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
    byte_4D24AC3 = 1;
  }
  m_Dict = this->fields.m_Dict;
  if ( !m_Dict
    || (m_Dict = (struct System_Collections_Generic_Dictionary_string__JSONNode__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__object__o *)m_Dict,
                                                                                       (Il2CppObject *)aKey,
                                                                                       (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__),
        (v8 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict) == 0) )
  {
    sub_1C942F0(m_Dict, aKey);
  }
  if ( ((unsigned __int8)m_Dict & 1) != 0 )
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v8,
      (Il2CppObject *)aKey,
      (Il2CppObject *)value,
      (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
  else
    System_Collections_Generic_Dictionary_object__object___Add(
      v8,
      (Il2CppObject *)aKey,
      (Il2CppObject *)value,
      (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__);
}


// local variable allocation has failed, the output may be wrong!
void AdjustSdk_JSONClass__set_Item_31021328(
        AdjustSdk_JSONClass_o *this,
        int32_t aIndex,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  int32_t v5; // w21
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  System_Collections_Generic_KeyValuePair_object__object__o v8; // kr00_16
  System_Collections_Generic_Dictionary_object__object__o *v9; // x8

  v5 = aIndex;
  if ( (byte_4D24AC5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
    sub_1C94098(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    byte_4D24AC5 = 1;
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
    if ( !m_Dict )
      goto LABEL_9;
    if ( System_Collections_Generic_Dictionary_object__object___get_Count(
           m_Dict,
           (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__) > v5 )
    {
      v8 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.m_Dict,
             v5,
             (const MethodInfo_31BFC7C *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
      *(_QWORD *)&aIndex = v8.fields.value;
      m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)v8.fields.key;
      v9 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
      if ( v9 )
      {
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v9,
          v8.fields.key,
          (Il2CppObject *)value,
          (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
        return;
      }
LABEL_9:
      sub_1C942F0(m_Dict, *(_QWORD *)&aIndex);
    }
  }
}


void AdjustSdk_JSONClass__GetEnumerator_d__15___ctor(
        AdjustSdk_JSONClass__GetEnumerator_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AdjustSdk_JSONClass__GetEnumerator_d__15__MoveNext(
        AdjustSdk_JSONClass__GetEnumerator_d__15_o *this,
        const MethodInfo *method)
{
  AdjustSdk_JSONClass__GetEnumerator_d__15_o *v2; // x19
  int32_t _1__state; // w8
  struct AdjustSdk_JSONClass_o *_4__this; // x8
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  AdjustSdk_JSONClass__GetEnumerator_d__15_o *v6; // x9
  __int128 v7; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *p__7__wrap1; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *value; // x9
  Il2CppObject *v12; // x1
  AdjustSdk_JSONClass__GetEnumerator_d__15_o *v13; // x0
  bool result; // w0
  AdjustSdk_JSONClass__GetEnumerator_d__15_o *v15; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-60h] BYREF
  AdjustSdk_JSONClass__GetEnumerator_d__15_o **v18; // [xsp+68h] [xbp-28h]
  AdjustSdk_JSONClass__GetEnumerator_d__15_o *v19; // [xsp+78h] [xbp-18h] BYREF

  v19 = this;
  v2 = this;
  if ( (byte_4D24AD2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__get_Current__);
    this = (AdjustSdk_JSONClass__GetEnumerator_d__15_o *)sub_1C94098(&System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo);
    byte_4D24AD2 = 1;
  }
  v18 = &v19;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C942F0(this, method);
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.m_Dict;
    if ( !m_Dict )
      sub_1C942F0(0, method);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v16,
      m_Dict,
      (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    v6 = v19;
    v7 = *(_OWORD *)&v16.fields._dictionary;
    current = v16.fields._current;
    p__7__wrap1 = &v19->fields.__7__wrap1;
    v17 = v16;
    *(_QWORD *)&v19->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v16.fields._getEnumeratorRetType;
    v6->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v6->fields.__7__wrap1.fields._dictionary = v7;
    sub_1C9403C(p__7__wrap1, 0);
    v2 = v19;
  }
  v2->fields.__1__state = -3;
  if ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
         (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
         (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__) )
  {
    value = v19->fields.__7__wrap1.fields._current.fields.value;
    v17.fields._dictionary = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)v19->fields.__7__wrap1.fields._current.fields.key;
    *(_QWORD *)&v17.fields._version = value;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo, &v17);
    v13 = v19;
    v19->fields.__2__current = v12;
    sub_1C9403C(&v13->fields.__2__current, v12);
    result = 1;
    v19->fields.__1__state = 1;
  }
  else
  {
    AdjustSdk_JSONClass__GetEnumerator_d__15____m__Finally1(v19, v10);
    v15 = v19;
    result = 0;
    *(_QWORD *)&v19->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
    v15->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v15->fields.__7__wrap1.fields._dictionary = 0u;
  }
  return result;
}


Il2CppObject *AdjustSdk_JSONClass__GetEnumerator_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AdjustSdk_JSONClass__GetEnumerator_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AdjustSdk_JSONClass__GetEnumerator_d__15__System_Collections_IEnumerator_Reset(
        AdjustSdk_JSONClass__GetEnumerator_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AdjustSdk_JSONClass__GetEnumerator_d__15_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AdjustSdk_JSONClass__GetEnumerator_d__15__System_Collections_IEnumerator_get_Current(
        AdjustSdk_JSONClass__GetEnumerator_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AdjustSdk_JSONClass__GetEnumerator_d__15__System_IDisposable_Dispose(
        AdjustSdk_JSONClass__GetEnumerator_d__15_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    AdjustSdk_JSONClass__GetEnumerator_d__15____m__Finally1(this, method);
}


void AdjustSdk_JSONClass__GetEnumerator_d__15____m__Finally1(
        AdjustSdk_JSONClass__GetEnumerator_d__15_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D24AD3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
    byte_4D24AD3 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
}


void AdjustSdk_JSONClass___c__DisplayClass12_0___ctor(
        AdjustSdk_JSONClass___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AdjustSdk_JSONClass___c__DisplayClass12_0___Remove_b__0(
        AdjustSdk_JSONClass___c__DisplayClass12_0_o *this,
        System_Collections_Generic_KeyValuePair_string__JSONNode__o k,
        const MethodInfo *method)
{
  AdjustSdk_JSONNode_o *value; // x19

  value = k.fields.value;
  if ( (byte_4D24AD1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    byte_4D24AD1 = 1;
  }
  return AdjustSdk_JSONNode__op_Equality(value, (Il2CppObject *)this->fields.aNode, (const MethodInfo *)k.fields.value);
}


void AdjustSdk_JSONClass__get_Childs_d__14___ctor(
        AdjustSdk_JSONClass__get_Childs_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool AdjustSdk_JSONClass__get_Childs_d__14__MoveNext(
        AdjustSdk_JSONClass__get_Childs_d__14_o *this,
        const MethodInfo *method)
{
  AdjustSdk_JSONClass__get_Childs_d__14_o *v2; // x19
  int32_t _1__state; // w8
  struct AdjustSdk_JSONClass_o *_4__this; // x8
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  AdjustSdk_JSONClass__get_Childs_d__14_o *v6; // x9
  __int128 v7; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *p__7__wrap1; // x0
  const MethodInfo *v10; // x1
  bool v11; // w8
  AdjustSdk_JSONClass__get_Childs_d__14_o *v12; // x0
  Il2CppObject *value; // x1
  bool result; // w0
  AdjustSdk_JSONClass__get_Childs_d__14_o *v15; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16[2]; // [xsp+8h] [xbp-88h] BYREF
  AdjustSdk_JSONClass__get_Childs_d__14_o **v17; // [xsp+68h] [xbp-28h]
  AdjustSdk_JSONClass__get_Childs_d__14_o *v18; // [xsp+78h] [xbp-18h] BYREF

  v18 = this;
  v2 = this;
  if ( (byte_4D24AD4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__get_Current__);
    this = (AdjustSdk_JSONClass__get_Childs_d__14_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    byte_4D24AD4 = 1;
  }
  v17 = &v18;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C942F0(this, method);
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.m_Dict;
    if ( !m_Dict )
      sub_1C942F0(0, method);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      v16,
      m_Dict,
      (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    v6 = v18;
    v7 = *(_OWORD *)&v16[0].fields._dictionary;
    current = v16[0].fields._current;
    p__7__wrap1 = &v18->fields.__7__wrap1;
    v16[1] = v16[0];
    *(_QWORD *)&v18->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v16[0].fields._getEnumeratorRetType;
    *(_OWORD *)&v6->fields.__7__wrap1.fields._dictionary = v7;
    v6->fields.__7__wrap1.fields._current = current;
    sub_1C9403C(p__7__wrap1, 0);
    v2 = v18;
  }
  v2->fields.__1__state = -3;
  v11 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
  v12 = v18;
  if ( v11 )
  {
    value = v18->fields.__7__wrap1.fields._current.fields.value;
    v18->fields.__2__current = (struct AdjustSdk_JSONNode_o *)value;
    sub_1C9403C(&v12->fields.__2__current, value);
    result = 1;
    v18->fields.__1__state = 1;
  }
  else
  {
    AdjustSdk_JSONClass__get_Childs_d__14____m__Finally1(v18, v10);
    v15 = v18;
    result = 0;
    *(_QWORD *)&v18->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
    *(_OWORD *)&v15->fields.__7__wrap1.fields._dictionary = 0u;
    v15->fields.__7__wrap1.fields._current = 0u;
  }
  return result;
}


System_Collections_Generic_IEnumerator_JSONNode__o *AdjustSdk_JSONClass__get_Childs_d__14__System_Collections_Generic_IEnumerable_AdjustSdk_JSONNode__GetEnumerator(
        AdjustSdk_JSONClass__get_Childs_d__14_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct AdjustSdk_JSONClass_o *_4__this; // x1

  if ( (byte_4D24AD6 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONClass__get_Childs_d__14_TypeInfo);
    byte_4D24AD6 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C942E4(AdjustSdk_JSONClass__get_Childs_d__14_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C9403C(v4 + 40, _4__this);
    return (System_Collections_Generic_IEnumerator_JSONNode__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_JSONNode__o *)this;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__get_Childs_d__14__System_Collections_Generic_IEnumerator_AdjustSdk_JSONNode__get_Current(
        AdjustSdk_JSONClass__get_Childs_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AdjustSdk_JSONClass__get_Childs_d__14__System_Collections_IEnumerator_Reset(
        AdjustSdk_JSONClass__get_Childs_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AdjustSdk_JSONClass__get_Childs_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AdjustSdk_JSONClass__get_Childs_d__14__System_Collections_IEnumerator_get_Current(
        AdjustSdk_JSONClass__get_Childs_d__14_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void AdjustSdk_JSONClass__get_Childs_d__14__System_IDisposable_Dispose(
        AdjustSdk_JSONClass__get_Childs_d__14_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    AdjustSdk_JSONClass__get_Childs_d__14____m__Finally1(this, method);
}


void AdjustSdk_JSONClass__get_Childs_d__14____m__Finally1(
        AdjustSdk_JSONClass__get_Childs_d__14_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D24AD5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
    byte_4D24AD5 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
}


void AdjustSdk_JSONData___ctor(AdjustSdk_JSONData_o *this, System_String_o *aData, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.m_Data = aData;
  sub_1C9403C(&this->fields, aData);
}


void AdjustSdk_JSONData___ctor_31013188(AdjustSdk_JSONData_o *this, int32_t aData, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, _QWORD, const MethodInfo *))this->klass->vtable._19_set_AsInt.methodPtr)(
    this,
    (unsigned int)aData,
    this->klass->vtable._19_set_AsInt.method);
}


// local variable allocation has failed, the output may be wrong!
void AdjustSdk_JSONData___ctor_31013244(AdjustSdk_JSONData_o *this, double aData, const MethodInfo *method)
{
  long double v3; // q8

  v3 = *(long double *)&aData;
  System_Object___ctor((Il2CppObject *)this, 0);
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *, long double))this->klass->vtable._23_set_AsDouble.methodPtr)(
    this,
    this->klass->vtable._23_set_AsDouble.method,
    v3);
}


void AdjustSdk_JSONData___ctor_31013300(AdjustSdk_JSONData_o *this, bool aData, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, bool, const MethodInfo *))this->klass->vtable._25_set_AsBool.methodPtr)(
    this,
    aData,
    this->klass->vtable._25_set_AsBool.method);
}


// local variable allocation has failed, the output may be wrong!
void AdjustSdk_JSONData___ctor_31013356(AdjustSdk_JSONData_o *this, float aData, const MethodInfo *method)
{
  long double v3; // q8

  v3 = *(long double *)&aData;
  System_Object___ctor((Il2CppObject *)this, 0);
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *, long double))this->klass->vtable._21_set_AsFloat.methodPtr)(
    this,
    this->klass->vtable._21_set_AsFloat.method,
    v3);
}


void AdjustSdk_JSONData__Serialize(
        AdjustSdk_JSONData_o *this,
        System_IO_BinaryWriter_o *aWriter,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  __int64 v6; // x22
  System_String_o **v7; // x21
  unsigned int v8; // w0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppMethodPointer methodPtr; // x3
  const MethodInfo *v13; // x2
  char v14; // w0
  const MethodInfo *v15; // x2
  Il2CppMethodPointer v16; // x8

  if ( (byte_4D24AD9 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D24AD9 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  v6 = StringLiteral_1/*""*/;
  v7 = (System_String_o **)v5;
  System_Object___ctor(v5, 0);
  v7[2] = (System_String_o *)v6;
  sub_1C9403C(v7 + 2, v6);
  v8 = ((__int64 (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._18_get_AsInt.methodPtr)(
         this,
         this->klass->vtable._18_get_AsInt.method);
  ((void (__fastcall *)(System_String_o **, _QWORD, System_String_c *))(*v7)[25].fields)(v7, v8, (*v7)[26].klass);
  v9 = System_String__op_Equality(v7[2], this->fields.m_Data, 0);
  if ( v9 )
  {
    if ( aWriter )
    {
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))aWriter->klass->vtable._9_Write.methodPtr)(
        aWriter,
        4,
        aWriter->klass->vtable._9_Write.method);
      v11 = ((unsigned int (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._18_get_AsInt.methodPtr)(
              this,
              this->klass->vtable._18_get_AsInt.method);
      methodPtr = aWriter->klass->vtable._17_Write.methodPtr;
      v13 = aWriter->klass->vtable._17_Write.method;
LABEL_6:
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))methodPtr)(aWriter, v11, v13);
      return;
    }
LABEL_17:
    sub_1C942F0(v9, v10);
  }
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._20_get_AsFloat.methodPtr)(
    this,
    this->klass->vtable._20_get_AsFloat.method);
  ((void (__fastcall *)(System_String_o **, void *))(*v7)[27].klass)(v7, (*v7)[27].monitor);
  v9 = System_String__op_Equality(v7[2], this->fields.m_Data, 0);
  if ( v9 )
  {
    if ( !aWriter )
      goto LABEL_17;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))aWriter->klass->vtable._9_Write.methodPtr)(
      aWriter,
      7,
      aWriter->klass->vtable._9_Write.method);
    ((void (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._20_get_AsFloat.methodPtr)(
      this,
      this->klass->vtable._20_get_AsFloat.method);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))aWriter->klass->vtable._21_Write.methodPtr)(
      aWriter,
      aWriter->klass->vtable._21_Write.method);
  }
  else
  {
    ((void (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._22_get_AsDouble.methodPtr)(
      this,
      this->klass->vtable._22_get_AsDouble.method);
    ((void (__fastcall *)(System_String_o **, _QWORD))(*v7)[28].monitor)(v7, *(_QWORD *)&(*v7)[28].fields);
    v9 = System_String__op_Equality(v7[2], this->fields.m_Data, 0);
    if ( v9 )
    {
      if ( !aWriter )
        goto LABEL_17;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))aWriter->klass->vtable._9_Write.methodPtr)(
        aWriter,
        5,
        aWriter->klass->vtable._9_Write.method);
      ((void (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._22_get_AsDouble.methodPtr)(
        this,
        this->klass->vtable._22_get_AsDouble.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))aWriter->klass->vtable._14_Write.methodPtr)(
        aWriter,
        aWriter->klass->vtable._14_Write.method);
    }
    else
    {
      v14 = ((__int64 (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._24_get_AsBool.methodPtr)(
              this,
              this->klass->vtable._24_get_AsBool.method);
      ((void (__fastcall *)(System_String_o **, _QWORD, System_String_c *))(*v7)[29].fields)(
        v7,
        v14 & 1,
        (*v7)[30].klass);
      v9 = System_String__op_Equality(v7[2], this->fields.m_Data, 0);
      if ( !aWriter )
        goto LABEL_17;
      v16 = aWriter->klass->vtable._9_Write.methodPtr;
      v15 = aWriter->klass->vtable._9_Write.method;
      if ( v9 )
      {
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))v16)(aWriter, 6, v15);
        v11 = ((__int64 (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._24_get_AsBool.methodPtr)(
                this,
                this->klass->vtable._24_get_AsBool.method)
            & 1;
        methodPtr = aWriter->klass->vtable._8_Write.methodPtr;
        v13 = aWriter->klass->vtable._8_Write.method;
        goto LABEL_6;
      }
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))v16)(aWriter, 3, v15);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))aWriter->klass->vtable._22_Write.methodPtr)(
        aWriter,
        this->fields.m_Data,
        aWriter->klass->vtable._22_Write.method);
    }
  }
}


System_String_o *AdjustSdk_JSONData__ToString(AdjustSdk_JSONData_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_4D24AD7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_341/*"\""*/);
    byte_4D24AD7 = 1;
  }
  v3 = AdjustSdk_JSONNode__Escape(this->fields.m_Data, method);
  return System_String__Concat_64456008(
           (System_String_o *)StringLiteral_341/*"\""*/,
           v3,
           (System_String_o *)StringLiteral_341/*"\""*/,
           0);
}


System_String_o *AdjustSdk_JSONData__ToString_31027012(
        AdjustSdk_JSONData_o *this,
        System_String_o *aPrefix,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4D24AD8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_341/*"\""*/);
    byte_4D24AD8 = 1;
  }
  v4 = AdjustSdk_JSONNode__Escape(this->fields.m_Data, (const MethodInfo *)aPrefix);
  return System_String__Concat_64456008(
           (System_String_o *)StringLiteral_341/*"\""*/,
           v4,
           (System_String_o *)StringLiteral_341/*"\""*/,
           0);
}


System_String_o *AdjustSdk_JSONData__get_Value(AdjustSdk_JSONData_o *this, const MethodInfo *method)
{
  return this->fields.m_Data;
}


void AdjustSdk_JSONData__set_Value(AdjustSdk_JSONData_o *this, System_String_o *value, const MethodInfo *method)
{
  this->fields.m_Data = value;
  sub_1C9403C(&this->fields, value);
}


void AdjustSdk_JSONLazyCreator___ctor(
        AdjustSdk_JSONLazyCreator_o *this,
        AdjustSdk_JSONNode_o *aNode,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.m_Node = aNode;
  sub_1C9403C(&this->fields, aNode);
  this->fields.m_Key = 0;
  sub_1C9403C(&this->fields.m_Key, 0);
}


void AdjustSdk_JSONLazyCreator___ctor_31020896(
        AdjustSdk_JSONLazyCreator_o *this,
        AdjustSdk_JSONNode_o *aNode,
        System_String_o *aKey,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.m_Node = aNode;
  sub_1C9403C(&this->fields, aNode);
  this->fields.m_Key = aKey;
  sub_1C9403C(&this->fields.m_Key, aKey);
}


void AdjustSdk_JSONLazyCreator__Add(
        AdjustSdk_JSONLazyCreator_o *this,
        AdjustSdk_JSONNode_o *aItem,
        const MethodInfo *method)
{
  AdjustSdk_JSONArray_o *v5; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4D24ADE & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONArray_TypeInfo);
    byte_4D24ADE = 1;
  }
  v5 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v5, v6);
  if ( !v5 )
    sub_1C942F0(v7, v8);
  ((void (__fastcall *)(AdjustSdk_JSONArray_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._12_Add.methodPtr)(
    v5,
    aItem,
    v5->klass->vtable._12_Add.method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v5, v9);
}


void AdjustSdk_JSONLazyCreator__Add_31028496(
        AdjustSdk_JSONLazyCreator_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *aItem,
        const MethodInfo *method)
{
  AdjustSdk_JSONClass_o *v7; // x22
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4D24ADF & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONClass_TypeInfo);
    byte_4D24ADF = 1;
  }
  v7 = (AdjustSdk_JSONClass_o *)sub_1C942E4(AdjustSdk_JSONClass_TypeInfo);
  AdjustSdk_JSONClass___ctor(v7, v8);
  if ( !v7 )
    sub_1C942F0(v9, v10);
  ((void (__fastcall *)(AdjustSdk_JSONClass_o *, System_String_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))v7->klass->vtable._4_Add.methodPtr)(
    v7,
    aKey,
    aItem,
    v7->klass->vtable._4_Add.method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v7, v11);
}


bool AdjustSdk_JSONLazyCreator__Equals(AdjustSdk_JSONLazyCreator_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  return obj == 0 || this == (AdjustSdk_JSONLazyCreator_o *)obj;
}


int32_t AdjustSdk_JSONLazyCreator__GetHashCode(AdjustSdk_JSONLazyCreator_o *this, const MethodInfo *method)
{
  return System_Object__GetHashCode((Il2CppObject *)this, 0);
}


void AdjustSdk_JSONLazyCreator__Set(
        AdjustSdk_JSONLazyCreator_o *this,
        AdjustSdk_JSONNode_o *aVal,
        const MethodInfo *method)
{
  struct AdjustSdk_JSONNode_o *m_Node; // x0
  AdjustSdk_JSONLazyCreator_Fields *p_fields; // x19

  p_fields = &this->fields;
  m_Node = this->fields.m_Node;
  if ( !p_fields->m_Key )
  {
    if ( m_Node )
    {
      ((void (__fastcall *)(struct AdjustSdk_JSONNode_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))m_Node->klass->vtable._12_Add.methodPtr)(
        m_Node,
        aVal,
        m_Node->klass->vtable._12_Add.method);
      goto LABEL_6;
    }
LABEL_7:
    sub_1C942F0(m_Node, aVal);
  }
  if ( !m_Node )
    goto LABEL_7;
  ((void (__fastcall *)(struct AdjustSdk_JSONNode_o *, struct System_String_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))m_Node->klass->vtable._4_Add.methodPtr)(
    m_Node,
    p_fields->m_Key,
    aVal,
    m_Node->klass->vtable._4_Add.method);
LABEL_6:
  p_fields->m_Node = 0;
  sub_1C9403C(p_fields, 0);
}


System_String_o *AdjustSdk_JSONLazyCreator__ToString(AdjustSdk_JSONLazyCreator_o *this, const MethodInfo *method)
{
  if ( (byte_4D24AE0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D24AE0 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *AdjustSdk_JSONLazyCreator__ToString_31028776(
        AdjustSdk_JSONLazyCreator_o *this,
        System_String_o *aPrefix,
        const MethodInfo *method)
{
  if ( (byte_4D24AE1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D24AE1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


AdjustSdk_JSONArray_o *AdjustSdk_JSONLazyCreator__get_AsArray(
        AdjustSdk_JSONLazyCreator_o *this,
        const MethodInfo *method)
{
  AdjustSdk_JSONArray_o *v3; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D24AEA & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONArray_TypeInfo);
    byte_4D24AEA = 1;
  }
  v3 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v3, v4);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v3, v5);
  return v3;
}


bool AdjustSdk_JSONLazyCreator__get_AsBool(AdjustSdk_JSONLazyCreator_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D24AE8 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AE8 = 1;
  }
  v3 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v3, 0);
  ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))v3->klass->vtable[25].methodPtr)(
    v3,
    0,
    v3->klass->vtable[25].method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v3, v4);
  return 0;
}


double AdjustSdk_JSONLazyCreator__get_AsDouble(AdjustSdk_JSONLazyCreator_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D24AE6 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AE6 = 1;
  }
  v3 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v3, 0);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, double))v3->klass->vtable[23].methodPtr)(
    v3,
    v3->klass->vtable[23].method,
    0.0);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v3, v4);
  return 0.0;
}


float AdjustSdk_JSONLazyCreator__get_AsFloat(AdjustSdk_JSONLazyCreator_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D24AE4 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AE4 = 1;
  }
  v3 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v3, 0);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))v3->klass->vtable[21].methodPtr)(
    v3,
    v3->klass->vtable[21].method,
    0.0);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v3, v4);
  return 0.0;
}


int32_t AdjustSdk_JSONLazyCreator__get_AsInt(AdjustSdk_JSONLazyCreator_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D24AE2 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AE2 = 1;
  }
  v3 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v3, 0);
  ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))v3->klass->vtable[19].methodPtr)(
    v3,
    0,
    v3->klass->vtable[19].method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v3, v4);
  return 0;
}


AdjustSdk_JSONClass_o *AdjustSdk_JSONLazyCreator__get_AsObject(
        AdjustSdk_JSONLazyCreator_o *this,
        const MethodInfo *method)
{
  AdjustSdk_JSONClass_o *v3; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D24AEB & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONClass_TypeInfo);
    byte_4D24AEB = 1;
  }
  v3 = (AdjustSdk_JSONClass_o *)sub_1C942E4(AdjustSdk_JSONClass_TypeInfo);
  AdjustSdk_JSONClass___ctor(v3, v4);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v3, v5);
  return v3;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONLazyCreator__get_Item(
        AdjustSdk_JSONLazyCreator_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  AdjustSdk_JSONLazyCreator_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4D24ADA & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_4D24ADA = 1;
  }
  v4 = (AdjustSdk_JSONLazyCreator_o *)sub_1C942E4(AdjustSdk_JSONLazyCreator_TypeInfo);
  AdjustSdk_JSONLazyCreator___ctor(v4, (AdjustSdk_JSONNode_o *)this, v5);
  return (AdjustSdk_JSONNode_o *)v4;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONLazyCreator__get_Item_31028128(
        AdjustSdk_JSONLazyCreator_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  AdjustSdk_JSONLazyCreator_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4D24ADC & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_4D24ADC = 1;
  }
  v5 = (AdjustSdk_JSONLazyCreator_o *)sub_1C942E4(AdjustSdk_JSONLazyCreator_TypeInfo);
  AdjustSdk_JSONLazyCreator___ctor_31020896(v5, (AdjustSdk_JSONNode_o *)this, aKey, v6);
  return (AdjustSdk_JSONNode_o *)v5;
}


bool AdjustSdk_JSONLazyCreator__op_Equality(AdjustSdk_JSONLazyCreator_o *a, Il2CppObject *b, const MethodInfo *method)
{
  return b == 0 || a == (AdjustSdk_JSONLazyCreator_o *)b;
}


bool AdjustSdk_JSONLazyCreator__op_Inequality(
        AdjustSdk_JSONLazyCreator_o *a,
        Il2CppObject *b,
        const MethodInfo *method)
{
  return b != 0 && a != (AdjustSdk_JSONLazyCreator_o *)b;
}


void AdjustSdk_JSONLazyCreator__set_AsBool(AdjustSdk_JSONLazyCreator_o *this, bool value, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4D24AE9 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AE9 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v5, 0);
  ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))v5->klass->vtable[25].methodPtr)(
    v5,
    value,
    v5->klass->vtable[25].method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void AdjustSdk_JSONLazyCreator__set_AsDouble(AdjustSdk_JSONLazyCreator_o *this, double value, const MethodInfo *method)
{
  long double v3; // q8
  Il2CppObject *v5; // x20
  const MethodInfo *v6; // x2

  v3 = *(long double *)&value;
  if ( (byte_4D24AE7 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AE7 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v5, 0);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))v5->klass->vtable[23].methodPtr)(
    v5,
    v5->klass->vtable[23].method,
    v3);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void AdjustSdk_JSONLazyCreator__set_AsFloat(AdjustSdk_JSONLazyCreator_o *this, float value, const MethodInfo *method)
{
  long double v3; // q8
  Il2CppObject *v5; // x20
  const MethodInfo *v6; // x2

  v3 = *(long double *)&value;
  if ( (byte_4D24AE5 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AE5 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v5, 0);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))v5->klass->vtable[21].methodPtr)(
    v5,
    v5->klass->vtable[21].method,
    v3);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v5, v6);
}


void AdjustSdk_JSONLazyCreator__set_AsInt(AdjustSdk_JSONLazyCreator_o *this, int32_t value, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4D24AE3 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AE3 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v5, 0);
  ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))v5->klass->vtable[19].methodPtr)(
    v5,
    (unsigned int)value,
    v5->klass->vtable[19].method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v5, v6);
}


void AdjustSdk_JSONLazyCreator__set_Item(
        AdjustSdk_JSONLazyCreator_o *this,
        int32_t aIndex,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  AdjustSdk_JSONArray_o *v6; // x21
  const MethodInfo *v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4D24ADB & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONArray_TypeInfo);
    byte_4D24ADB = 1;
  }
  v6 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v6, v7);
  if ( !v6 )
    sub_1C942F0(v8, v9);
  ((void (__fastcall *)(AdjustSdk_JSONArray_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))v6->klass->vtable._12_Add.methodPtr)(
    v6,
    value,
    v6->klass->vtable._12_Add.method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v6, v10);
}


void AdjustSdk_JSONLazyCreator__set_Item_31028232(
        AdjustSdk_JSONLazyCreator_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  AdjustSdk_JSONClass_o *v7; // x22
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4D24ADD & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONClass_TypeInfo);
    byte_4D24ADD = 1;
  }
  v7 = (AdjustSdk_JSONClass_o *)sub_1C942E4(AdjustSdk_JSONClass_TypeInfo);
  AdjustSdk_JSONClass___ctor(v7, v8);
  if ( !v7 )
    sub_1C942F0(v9, v10);
  ((void (__fastcall *)(AdjustSdk_JSONClass_o *, System_String_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))v7->klass->vtable._4_Add.methodPtr)(
    v7,
    aKey,
    value,
    v7->klass->vtable._4_Add.method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v7, v11);
}


void AdjustSdk_JSONNode___ctor(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_JSONNode__Add(
        AdjustSdk_JSONNode_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *aItem,
        const MethodInfo *method)
{
  ;
}


void AdjustSdk_JSONNode__Add_31007752(
        AdjustSdk_JSONNode_o *this,
        AdjustSdk_JSONNode_o *aItem,
        const MethodInfo *method)
{
  if ( (byte_4D24A99 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D24A99 = 1;
  }
  ((void (__fastcall *)(AdjustSdk_JSONNode_o *, __int64, AdjustSdk_JSONNode_o *, const MethodInfo *))this->klass->vtable._4_Add.methodPtr)(
    this,
    StringLiteral_1/*""*/,
    aItem,
    this->klass->vtable._4_Add.method);
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__Deserialize(System_IO_BinaryReader_o *aReader, const MethodInfo *method)
{
  System_IO_BinaryReader_o *v2; // x20
  int v3; // w19
  int v4; // w21
  AdjustSdk_JSONArray_o *v5; // x19
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int v8; // w21
  const MethodInfo *v9; // x1
  __int64 v10; // x22
  const MethodInfo *v11; // x1
  __int64 v12; // x20
  unsigned int v13; // w20
  long double v14; // q8
  char v15; // w20
  long double v16; // q8
  System_String_o *v18; // x19
  System_String_o *v19; // x0
  System_String_o *v20; // x19
  __int64 v21; // x0
  System_Exception_o *v22; // x20
  __int64 v23; // x0
  System_Enum_o v24; // [xsp+8h] [xbp-48h] BYREF
  int v25; // [xsp+18h] [xbp-38h]

  v2 = aReader;
  if ( (byte_4D24AA7 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONArray_TypeInfo);
    sub_1C94098(&AdjustSdk_JSONClass_TypeInfo);
    aReader = (System_IO_BinaryReader_o *)sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AA7 = 1;
  }
  if ( !v2 )
LABEL_20:
    sub_1C942F0(aReader, method);
  v3 = ((unsigned __int8 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._10_ReadByte.methodPtr)(
         v2,
         v2->klass->vtable._10_ReadByte.method);
  switch ( v3 )
  {
    case 1:
      v4 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._15_ReadInt32.methodPtr)(
             v2,
             v2->klass->vtable._15_ReadInt32.method);
      v5 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONArray_TypeInfo);
      AdjustSdk_JSONArray___ctor(v5, v6);
      if ( v4 < 1 )
        return (AdjustSdk_JSONNode_o *)v5;
      while ( 1 )
      {
        aReader = (System_IO_BinaryReader_o *)AdjustSdk_JSONNode__Deserialize(v2, v7);
        if ( !v5 )
          break;
        ((void (__fastcall *)(AdjustSdk_JSONArray_o *, System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._12_Add.methodPtr)(
          v5,
          aReader,
          v5->klass->vtable._12_Add.method);
        if ( !--v4 )
          return (AdjustSdk_JSONNode_o *)v5;
      }
      goto LABEL_20;
    case 2:
      v8 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._15_ReadInt32.methodPtr)(
             v2,
             v2->klass->vtable._15_ReadInt32.method);
      v5 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONClass_TypeInfo);
      AdjustSdk_JSONClass___ctor((AdjustSdk_JSONClass_o *)v5, v9);
      if ( v8 < 1 )
        return (AdjustSdk_JSONNode_o *)v5;
      break;
    case 3:
      v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._22_ReadString.methodPtr)(
              v2,
              v2->klass->vtable._22_ReadString.method);
      v5 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      v5->fields.m_List = (struct System_Collections_Generic_List_JSONNode__o *)v12;
      sub_1C9403C(&v5->fields, v12);
      return (AdjustSdk_JSONNode_o *)v5;
    case 4:
      v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._15_ReadInt32.methodPtr)(
              v2,
              v2->klass->vtable._15_ReadInt32.method);
      v5 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      ((void (__fastcall *)(AdjustSdk_JSONArray_o *, _QWORD, const MethodInfo *))v5->klass->vtable._19_set_AsInt.methodPtr)(
        v5,
        v13,
        v5->klass->vtable._19_set_AsInt.method);
      return (AdjustSdk_JSONNode_o *)v5;
    case 5:
      v14 = ((long double (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._20_ReadDouble.methodPtr)(
              v2,
              v2->klass->vtable._20_ReadDouble.method);
      v5 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      ((void (__fastcall *)(AdjustSdk_JSONArray_o *, const MethodInfo *, long double))v5->klass->vtable._23_set_AsDouble.methodPtr)(
        v5,
        v5->klass->vtable._23_set_AsDouble.method,
        v14);
      return (AdjustSdk_JSONNode_o *)v5;
    case 6:
      v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._9_ReadBoolean.methodPtr)(
              v2,
              v2->klass->vtable._9_ReadBoolean.method);
      v5 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      ((void (__fastcall *)(AdjustSdk_JSONArray_o *, _QWORD, const MethodInfo *))v5->klass->vtable._25_set_AsBool.methodPtr)(
        v5,
        v15 & 1,
        v5->klass->vtable._25_set_AsBool.method);
      return (AdjustSdk_JSONNode_o *)v5;
    case 7:
      v16 = ((long double (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._19_ReadSingle.methodPtr)(
              v2,
              v2->klass->vtable._19_ReadSingle.method);
      v5 = (AdjustSdk_JSONArray_o *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      ((void (__fastcall *)(AdjustSdk_JSONArray_o *, const MethodInfo *, long double))v5->klass->vtable._21_set_AsFloat.methodPtr)(
        v5,
        v5->klass->vtable._21_set_AsFloat.method,
        v16);
      return (AdjustSdk_JSONNode_o *)v5;
    default:
      v24.klass = (System_Enum_c *)sub_1C940AC(&AdjustSdk_JSONBinaryTag_TypeInfo);
      v24.monitor = (void *)-1LL;
      v25 = v3;
      v18 = System_Enum__ToString(&v24, 0);
      v19 = (System_String_o *)sub_1C940AC(&StringLiteral_6133/*"Error deserializing JSON. Unknown tag: "*/);
      v20 = System_String__Concat_64417744(v19, v18, 0);
      v21 = sub_1C940AC(&System_Exception_TypeInfo);
      v22 = (System_Exception_o *)sub_1C942E4(v21);
      System_Exception___ctor_66163836(v22, v20, 0);
      v23 = sub_1C940AC(&Method_AdjustSdk_JSONNode_Deserialize__);
      sub_1C941C0(v22, v23);
  }
  do
  {
    v10 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._22_ReadString.methodPtr)(
            v2,
            v2->klass->vtable._22_ReadString.method);
    aReader = (System_IO_BinaryReader_o *)AdjustSdk_JSONNode__Deserialize(v2, v11);
    if ( !v5 )
      goto LABEL_20;
    ((void (__fastcall *)(AdjustSdk_JSONArray_o *, __int64, System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._4_Add.methodPtr)(
      v5,
      v10,
      aReader,
      v5->klass->vtable._4_Add.method);
    --v8;
  }
  while ( v8 );
  return (AdjustSdk_JSONNode_o *)v5;
}


bool AdjustSdk_JSONNode__Equals(AdjustSdk_JSONNode_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  return this == (AdjustSdk_JSONNode_o *)obj;
}


System_String_o *AdjustSdk_JSONNode__Escape(System_String_o *aText, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *v3; // x21
  int32_t v4; // w20
  uint16_t Chars; // w0
  System_String_o *v6; // x1
  uint16_t v8; // [xsp+Ch] [xbp-64h] BYREF

  v2 = aText;
  if ( (byte_4D24AA4 & 1) == 0 )
  {
    sub_1C94098(&char_TypeInfo);
    sub_1C94098(&StringLiteral_16095/*"\\b"*/);
    sub_1C94098(&StringLiteral_16098/*"\\n"*/);
    sub_1C94098(&StringLiteral_16105/*"\\t"*/);
    sub_1C94098(&StringLiteral_16080/*"\\\""*/);
    sub_1C94098(&StringLiteral_16097/*"\\f"*/);
    sub_1C94098(&StringLiteral_16103/*"\\r"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    aText = (System_String_o *)sub_1C94098(&StringLiteral_16092/*"\\\\"*/);
    byte_4D24AA4 = 1;
  }
  v8 = 0;
  if ( !v2 )
    sub_1C942F0(aText, method);
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v2->fields._stringLength >= 1 )
  {
    v4 = 0;
    do
    {
      Chars = System_String__get_Chars(v2, v4, 0);
      v8 = Chars;
      switch ( Chars )
      {
        case 8u:
          v6 = (System_String_o *)StringLiteral_16095/*"\\b"*/;
          break;
        case 9u:
          v6 = (System_String_o *)StringLiteral_16105/*"\\t"*/;
          break;
        case 0xAu:
          v6 = (System_String_o *)StringLiteral_16098/*"\\n"*/;
          break;
        case 0xBu:
          goto LABEL_11;
        case 0xCu:
          v6 = (System_String_o *)StringLiteral_16097/*"\\f"*/;
          break;
        case 0xDu:
          v6 = (System_String_o *)StringLiteral_16103/*"\\r"*/;
          break;
        default:
          if ( Chars == 34 )
          {
            v6 = (System_String_o *)StringLiteral_16080/*"\\\""*/;
          }
          else if ( Chars == 92 )
          {
            v6 = (System_String_o *)StringLiteral_16092/*"\\\\"*/;
          }
          else
          {
LABEL_11:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v6 = System_Char__ToString((uint16_t)&v8, 0);
          }
          break;
      }
      ++v4;
      v3 = System_String__Concat_64417744(v3, v6, 0);
    }
    while ( v4 < v2->fields._stringLength );
  }
  return v3;
}


int32_t AdjustSdk_JSONNode__GetHashCode(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  return System_Object__GetHashCode((Il2CppObject *)this, 0);
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__LoadFromBase64(System_String_o *aBase64, const MethodInfo *method)
{
  System_Byte_array *v3; // x20
  System_IO_MemoryStream_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4D24AA9 & 1) == 0 )
  {
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&System_IO_MemoryStream_TypeInfo);
    byte_4D24AA9 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v3 = System_Convert__FromBase64String(aBase64, 0);
  v4 = (System_IO_MemoryStream_o *)sub_1C942E4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_65238668(v4, v3, 0);
  if ( !v4 )
    sub_1C942F0(v5, v6);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, const MethodInfo *))v4->klass->vtable._13_set_Position.methodPtr)(
    v4,
    0,
    v4->klass->vtable._13_set_Position.method);
  return AdjustSdk_JSONNode__LoadFromStream((System_IO_Stream_o *)v4, v7);
}


AdjustSdk_JSONNode_o *__noreturn AdjustSdk_JSONNode__LoadFromCompressedBase64(
        System_String_o *aBase64,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_Exception_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x0

  v2 = sub_1C940AC(&System_Exception_TypeInfo);
  v3 = (System_Exception_o *)sub_1C942E4(v2);
  v4 = (System_String_o *)sub_1C940AC(&StringLiteral_4034/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_66163836(v3, v4, 0);
  v5 = sub_1C940AC(&Method_AdjustSdk_JSONNode_LoadFromCompressedBase64__);
  sub_1C941C0(v3, v5);
}


AdjustSdk_JSONNode_o *__noreturn AdjustSdk_JSONNode__LoadFromCompressedFile(
        System_String_o *aFileName,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_Exception_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x0

  v2 = sub_1C940AC(&System_Exception_TypeInfo);
  v3 = (System_Exception_o *)sub_1C942E4(v2);
  v4 = (System_String_o *)sub_1C940AC(&StringLiteral_4034/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_66163836(v3, v4, 0);
  v5 = sub_1C940AC(&Method_AdjustSdk_JSONNode_LoadFromCompressedFile__);
  sub_1C941C0(v3, v5);
}


AdjustSdk_JSONNode_o *__noreturn AdjustSdk_JSONNode__LoadFromCompressedStream(
        System_IO_Stream_o *aData,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_Exception_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x0

  v2 = sub_1C940AC(&System_Exception_TypeInfo);
  v3 = (System_Exception_o *)sub_1C942E4(v2);
  v4 = (System_String_o *)sub_1C940AC(&StringLiteral_4034/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_66163836(v3, v4, 0);
  v5 = sub_1C940AC(&Method_AdjustSdk_JSONNode_LoadFromCompressedStream__);
  sub_1C941C0(v3, v5);
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__LoadFromStream(System_IO_Stream_o *aData, const MethodInfo *method)
{
  System_IO_BinaryReader_o *v3; // x19
  const MethodInfo *v4; // x1
  AdjustSdk_JSONNode_o *v5; // x21
  System_IO_BinaryReader_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0

  if ( (byte_4D24AA8 & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryReader_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    byte_4D24AA8 = 1;
  }
  v3 = (System_IO_BinaryReader_o *)sub_1C942E4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v3, aData, 0);
  v5 = AdjustSdk_JSONNode__Deserialize(v3, v4);
  if ( v3 )
  {
    klass = v3->klass;
    v7 = *(unsigned __int16 *)&v3->klass->_2.rank;
    if ( *(_WORD *)&v3->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_8;
      }
      v9 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_8:
      v9 = sub_1C6A420(v3, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v9)(v3, *(_QWORD *)(v9 + 8));
  }
  return v5;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__Parse(System_String_o *aJSON, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *v3; // x20
  unsigned __int64 Chars; // x0
  __int64 v5; // x1
  System_String_o *v6; // x23
  char v7; // w28
  int32_t v8; // w22
  Il2CppObject *v9; // x21
  System_String_o *v10; // x24
  AdjustSdk_JSONClass_o *v11; // x24
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  __int64 naturalAligment; // x10
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  System_String_o *v19; // x23
  __int64 v20; // x10
  System_String_o *v21; // x0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x23
  __int64 v24; // x10
  const MethodInfo *v25; // x1
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  uint16_t v28; // w0
  __int64 *v29; // x8
  System_String_o *v30; // x1
  Il2CppObject *v31; // x0
  AdjustSdk_JSONNode_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  AdjustSdk_JSONNode_o *v35; // x0
  __int64 v37; // x0
  System_Exception_o *v38; // x19
  void *v39; // x0
  __int64 v40; // x0
  System_String_o *v41; // x0
  __int64 v42; // x0
  uint16_t v43; // [xsp+8h] [xbp-68h] BYREF
  _WORD v44[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D24AA5 & 1) == 0 )
  {
    sub_1C94098(&char_TypeInfo);
    sub_1C94098(&AdjustSdk_JSONArray_TypeInfo);
    sub_1C94098(&AdjustSdk_JSONClass_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Stack_JSONNode__Peek__);
    sub_1C94098(&Method_System_Collections_Generic_Stack_JSONNode__Pop__);
    sub_1C94098(&Method_System_Collections_Generic_Stack_JSONNode__Push__);
    sub_1C94098(&Method_System_Collections_Generic_Stack_JSONNode___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Stack_JSONNode__get_Count__);
    sub_1C94098(&System_Collections_Generic_Stack_JSONNode__TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_37/*"\b"*/);
    sub_1C94098(&StringLiteral_38/*"\t"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_86/*"\r"*/);
    sub_1C94098(&StringLiteral_85/*"\f"*/);
    byte_4D24AA5 = 1;
  }
  v44[0] = 0;
  v43 = 0;
  v3 = (System_Collections_Generic_Stack_T__o *)sub_1C942E4(System_Collections_Generic_Stack_JSONNode__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v3,
    (const MethodInfo_3AD0D4C *)Method_System_Collections_Generic_Stack_JSONNode___ctor__);
  if ( !aJSON )
LABEL_100:
    sub_1C942F0(Chars, v5);
  if ( aJSON->fields._stringLength < 1 )
    return 0;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    Chars = System_String__get_Chars(aJSON, v8, 0);
    if ( (unsigned __int16)Chars <= 0x2Cu )
    {
      if ( (unsigned __int16)Chars > 0x20u )
      {
        if ( (unsigned __int16)Chars == 34 )
        {
          v7 ^= 1u;
          goto LABEL_95;
        }
        if ( (unsigned __int16)Chars != 44 )
          goto LABEL_58;
        if ( (v7 & 1) == 0 )
        {
          if ( System_String__op_Inequality(v10, (System_String_o *)StringLiteral_1/*""*/, 0) )
          {
            if ( v9
              && (naturalAligment = AdjustSdk_JSONArray_TypeInfo->_2.naturalAligment,
                  v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
              && (AdjustSdk_JSONArray_c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == AdjustSdk_JSONArray_TypeInfo )
            {
              v35 = AdjustSdk_JSONNode__op_Implicit(v10, v13);
              ((void (__fastcall *)(Il2CppObject *, AdjustSdk_JSONNode_o *, const MethodInfo *))v9->klass->vtable[12].methodPtr)(
                v9,
                v35,
                v9->klass->vtable[12].method);
            }
            else if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0) )
            {
              Chars = (unsigned __int64)AdjustSdk_JSONNode__op_Implicit(v10, v15);
              if ( !v9 )
                goto LABEL_100;
              ((void (__fastcall *)(Il2CppObject *, System_String_o *, unsigned __int64, const MethodInfo *))v9->klass->vtable[4].methodPtr)(
                v9,
                v6,
                Chars,
                v9->klass->vtable[4].method);
            }
          }
          v6 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_94;
        }
      }
      else
      {
        if ( (unsigned __int16)Chars > 0xCu )
        {
          if ( (unsigned __int16)Chars == 13 )
            goto LABEL_95;
          if ( (unsigned __int16)Chars != 32 )
            goto LABEL_58;
        }
        else if ( (unsigned __int16)Chars != 9 )
        {
          if ( (unsigned __int16)Chars == 10 )
            goto LABEL_95;
LABEL_58:
          v44[0] = System_String__get_Chars(aJSON, v8, 0);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v26 = System_Char__ToString((uint16_t)v44, 0);
          v10 = System_String__Concat_64417744(v10, v26, 0);
          goto LABEL_95;
        }
        if ( (v7 & 1) == 0 )
        {
          v7 = 0;
          goto LABEL_95;
        }
      }
LABEL_63:
      v44[0] = System_String__get_Chars(aJSON, v8, 0);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v27 = System_Char__ToString((uint16_t)v44, 0);
      v10 = System_String__Concat_64417744(v10, v27, 0);
      v7 = 1;
      goto LABEL_95;
    }
    if ( (unsigned __int16)Chars > 0x5Du )
    {
      if ( (unsigned __int16)Chars != 125 )
      {
        if ( (unsigned __int16)Chars != 123 )
          goto LABEL_58;
        if ( (v7 & 1) == 0 )
        {
          v11 = (AdjustSdk_JSONClass_o *)sub_1C942E4(AdjustSdk_JSONClass_TypeInfo);
          AdjustSdk_JSONClass___ctor(v11, v16);
          if ( !v3 )
            goto LABEL_100;
LABEL_33:
          System_Collections_Generic_Stack_object___Push(
            v3,
            (Il2CppObject *)v11,
            (const MethodInfo_3AD1374 *)Method_System_Collections_Generic_Stack_JSONNode__Push__);
          Chars = AdjustSdk_JSONNode__op_Equality((AdjustSdk_JSONNode_o *)v9, 0, v17);
          if ( (Chars & 1) == 0 )
          {
            if ( !v6 )
              goto LABEL_100;
            v18 = System_String__Trim(v6, 0);
            v19 = v18;
            if ( v9
              && (v20 = AdjustSdk_JSONArray_TypeInfo->_2.naturalAligment,
                  v9->klass->_2.naturalAligment >= (unsigned int)v20)
              && (AdjustSdk_JSONArray_c *)v9->klass->_2.typeHierarchy[v20 - 1] == AdjustSdk_JSONArray_TypeInfo )
            {
              v31 = System_Collections_Generic_Stack_object___Peek(
                      v3,
                      (const MethodInfo_3AD12D0 *)Method_System_Collections_Generic_Stack_JSONNode__Peek__);
              ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, const MethodInfo *))v9->klass->vtable[12].methodPtr)(
                v9,
                v31,
                v9->klass->vtable[12].method);
            }
            else if ( System_String__op_Inequality(v18, (System_String_o *)StringLiteral_1/*""*/, 0) )
            {
              Chars = (unsigned __int64)System_Collections_Generic_Stack_object___Peek(
                                          v3,
                                          (const MethodInfo_3AD12D0 *)Method_System_Collections_Generic_Stack_JSONNode__Peek__);
              if ( !v9 )
                goto LABEL_100;
              ((void (__fastcall *)(Il2CppObject *, System_String_o *, unsigned __int64, const MethodInfo *))v9->klass->vtable[4].methodPtr)(
                v9,
                v19,
                Chars,
                v9->klass->vtable[4].method);
            }
          }
          v6 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_83:
          v9 = System_Collections_Generic_Stack_object___Peek(
                 v3,
                 (const MethodInfo_3AD12D0 *)Method_System_Collections_Generic_Stack_JSONNode__Peek__);
LABEL_94:
          v7 = 0;
          v10 = v6;
          goto LABEL_95;
        }
        goto LABEL_63;
      }
      goto LABEL_47;
    }
    if ( (unsigned __int16)Chars <= 0x5Bu )
    {
      if ( (unsigned __int16)Chars == 58 )
      {
        if ( (v7 & 1) == 0 )
        {
          v7 = 0;
          v6 = v10;
          v10 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_95;
        }
      }
      else
      {
        if ( (unsigned __int16)Chars != 91 )
          goto LABEL_58;
        if ( (v7 & 1) == 0 )
        {
          v11 = (AdjustSdk_JSONClass_o *)sub_1C942E4(AdjustSdk_JSONArray_TypeInfo);
          AdjustSdk_JSONArray___ctor((AdjustSdk_JSONArray_o *)v11, v12);
          if ( !v3 )
            goto LABEL_100;
          goto LABEL_33;
        }
      }
      goto LABEL_63;
    }
    if ( (unsigned __int16)Chars != 92 )
    {
      if ( (unsigned __int16)Chars != 93 )
        goto LABEL_58;
LABEL_47:
      if ( (v7 & 1) == 0 )
      {
        if ( !v3 )
          goto LABEL_100;
        if ( !v3->fields._size )
        {
          v40 = sub_1C940AC(&System_Exception_TypeInfo);
          v38 = (System_Exception_o *)sub_1C942E4(v40);
          v39 = &StringLiteral_8183/*"JSON Parse: Too many closing brackets"*/;
LABEL_102:
          v41 = (System_String_o *)sub_1C940AC(v39);
          System_Exception___ctor_66163836(v38, v41, 0);
          v42 = sub_1C940AC(&Method_AdjustSdk_JSONNode_Parse__);
          sub_1C941C0(v38, v42);
        }
        System_Collections_Generic_Stack_object___Pop(
          v3,
          (const MethodInfo_3AD1314 *)Method_System_Collections_Generic_Stack_JSONNode__Pop__);
        Chars = System_String__op_Inequality(v10, (System_String_o *)StringLiteral_1/*""*/, 0);
        if ( (Chars & 1) != 0 )
        {
          if ( !v6 )
            goto LABEL_100;
          v21 = System_String__Trim(v6, 0);
          v23 = v21;
          if ( v9
            && (v24 = AdjustSdk_JSONArray_TypeInfo->_2.naturalAligment,
                v9->klass->_2.naturalAligment >= (unsigned int)v24)
            && (AdjustSdk_JSONArray_c *)v9->klass->_2.typeHierarchy[v24 - 1] == AdjustSdk_JSONArray_TypeInfo )
          {
            v32 = AdjustSdk_JSONNode__op_Implicit(v10, v22);
            ((void (__fastcall *)(Il2CppObject *, AdjustSdk_JSONNode_o *, const MethodInfo *))v9->klass->vtable[12].methodPtr)(
              v9,
              v32,
              v9->klass->vtable[12].method);
          }
          else if ( System_String__op_Inequality(v21, (System_String_o *)StringLiteral_1/*""*/, 0) )
          {
            Chars = (unsigned __int64)AdjustSdk_JSONNode__op_Implicit(v10, v25);
            if ( !v9 )
              goto LABEL_100;
            ((void (__fastcall *)(Il2CppObject *, System_String_o *, unsigned __int64, const MethodInfo *))v9->klass->vtable[4].methodPtr)(
              v9,
              v23,
              Chars,
              v9->klass->vtable[4].method);
          }
        }
        v6 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v3->fields._size < 1 )
          goto LABEL_94;
        goto LABEL_83;
      }
      goto LABEL_63;
    }
    if ( (v7 & 1) == 0 )
    {
      v7 = 0;
LABEL_88:
      ++v8;
      goto LABEL_95;
    }
    v28 = System_String__get_Chars(aJSON, v8 + 1, 0);
    v43 = v28;
    if ( v28 <= 0x66u )
    {
      if ( v28 == 98 )
      {
        v29 = &StringLiteral_37/*"\b"*/;
      }
      else
      {
        if ( v28 != 102 )
        {
LABEL_75:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v30 = System_Char__ToString((uint16_t)&v43, 0);
          goto LABEL_87;
        }
        v29 = &StringLiteral_85/*"\f"*/;
      }
LABEL_86:
      v30 = (System_String_o *)*v29;
LABEL_87:
      v10 = System_String__Concat_64417744(v10, v30, 0);
      v7 = 1;
      goto LABEL_88;
    }
    switch ( v28 )
    {
      case 'n':
        v29 = &StringLiteral_43/*"\n"*/;
        goto LABEL_86;
      case 'r':
        v29 = &StringLiteral_86/*"\r"*/;
        goto LABEL_86;
      case 't':
        v29 = &StringLiteral_38/*"\t"*/;
        goto LABEL_86;
      case 'u':
        v33 = System_String__Substring_64463684(aJSON, v8 + 2, 4, 0);
        v44[0] = System_Int32__Parse_65927100(v33, 512, 0);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v34 = System_Char__ToString((uint16_t)v44, 0);
        v10 = System_String__Concat_64417744(v10, v34, 0);
        v8 += 5;
        v7 = 1;
        break;
      default:
        goto LABEL_75;
    }
LABEL_95:
    ++v8;
  }
  while ( v8 < aJSON->fields._stringLength );
  if ( (v7 & 1) != 0 )
  {
    v37 = sub_1C940AC(&System_Exception_TypeInfo);
    v38 = (System_Exception_o *)sub_1C942E4(v37);
    v39 = &StringLiteral_8182/*"JSON Parse: Quotation marks seems to be messed up."*/;
    goto LABEL_102;
  }
  return (AdjustSdk_JSONNode_o *)v9;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__Remove(
        AdjustSdk_JSONNode_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  return 0;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__Remove_31007856(
        AdjustSdk_JSONNode_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  return 0;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__Remove_31007864(
        AdjustSdk_JSONNode_o *this,
        AdjustSdk_JSONNode_o *aNode,
        const MethodInfo *method)
{
  return aNode;
}


System_String_o *__noreturn AdjustSdk_JSONNode__SaveToCompressedBase64(
        AdjustSdk_JSONNode_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_Exception_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x0

  v2 = sub_1C940AC(&System_Exception_TypeInfo);
  v3 = (System_Exception_o *)sub_1C942E4(v2);
  v4 = (System_String_o *)sub_1C940AC(&StringLiteral_4034/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_66163836(v3, v4, 0);
  v5 = sub_1C940AC(&Method_AdjustSdk_JSONNode_SaveToCompressedBase64__);
  sub_1C941C0(v3, v5);
}


void __noreturn AdjustSdk_JSONNode__SaveToCompressedFile(
        AdjustSdk_JSONNode_o *this,
        System_String_o *aFileName,
        const MethodInfo *method)
{
  __int64 v3; // x0
  System_Exception_o *v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x0

  v3 = sub_1C940AC(&System_Exception_TypeInfo);
  v4 = (System_Exception_o *)sub_1C942E4(v3);
  v5 = (System_String_o *)sub_1C940AC(&StringLiteral_4034/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_66163836(v4, v5, 0);
  v6 = sub_1C940AC(&Method_AdjustSdk_JSONNode_SaveToCompressedFile__);
  sub_1C941C0(v4, v6);
}


void __noreturn AdjustSdk_JSONNode__SaveToCompressedStream(
        AdjustSdk_JSONNode_o *this,
        System_IO_Stream_o *aData,
        const MethodInfo *method)
{
  __int64 v3; // x0
  System_Exception_o *v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x0

  v3 = sub_1C940AC(&System_Exception_TypeInfo);
  v4 = (System_Exception_o *)sub_1C942E4(v3);
  v5 = (System_String_o *)sub_1C940AC(&StringLiteral_4034/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_66163836(v4, v5, 0);
  v6 = sub_1C940AC(&Method_AdjustSdk_JSONNode_SaveToCompressedStream__);
  sub_1C941C0(v4, v6);
}


void AdjustSdk_JSONNode__SaveToStream(AdjustSdk_JSONNode_o *this, System_IO_Stream_o *aData, const MethodInfo *method)
{
  System_IO_BinaryWriter_o *v5; // x21

  if ( (byte_4D24AA6 & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryWriter_TypeInfo);
    byte_4D24AA6 = 1;
  }
  v5 = (System_IO_BinaryWriter_o *)sub_1C942E4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65327072(v5, aData, 0);
  ((void (__fastcall *)(AdjustSdk_JSONNode_o *, System_IO_BinaryWriter_o *, const MethodInfo *))this->klass->vtable._28_Serialize.methodPtr)(
    this,
    v5,
    this->klass->vtable._28_Serialize.method);
}


void AdjustSdk_JSONNode__Serialize(
        AdjustSdk_JSONNode_o *this,
        System_IO_BinaryWriter_o *aWriter,
        const MethodInfo *method)
{
  ;
}


System_String_o *AdjustSdk_JSONNode__ToString(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  if ( (byte_4D24A9C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_8193/*"JSONNode"*/);
    byte_4D24A9C = 1;
  }
  return (System_String_o *)StringLiteral_8193/*"JSONNode"*/;
}


System_String_o *AdjustSdk_JSONNode__ToString_31008268(
        AdjustSdk_JSONNode_o *this,
        System_String_o *aPrefix,
        const MethodInfo *method)
{
  if ( (byte_4D24A9D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_8193/*"JSONNode"*/);
    byte_4D24A9D = 1;
  }
  return (System_String_o *)StringLiteral_8193/*"JSONNode"*/;
}


AdjustSdk_JSONArray_o *AdjustSdk_JSONNode__get_AsArray(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4D24AA0 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONArray_TypeInfo);
    byte_4D24AA0 = 1;
  }
  if ( !this )
    return 0;
  naturalAligment = AdjustSdk_JSONArray_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (AdjustSdk_JSONArray_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] == AdjustSdk_JSONArray_TypeInfo )
    return (AdjustSdk_JSONArray_o *)this;
  return 0;
}


bool AdjustSdk_JSONNode__get_AsBool(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *v5; // x0
  bool result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D24A9E & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D24A9E = 1;
  }
  result = 0;
  v3 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))this->klass->vtable._9_get_Value.methodPtr)(
                            this,
                            this->klass->vtable._9_get_Value.method);
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  if ( System_Boolean__TryParse(v3, &result, 0) )
  {
    return result;
  }
  else
  {
    v5 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))this->klass->vtable._9_get_Value.methodPtr)(
                              this,
                              this->klass->vtable._9_get_Value.method);
    return !System_String__IsNullOrEmpty(v5, 0);
  }
}


double AdjustSdk_JSONNode__get_AsDouble(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x0
  bool v3; // w0
  double v4; // d0
  double result; // [xsp+8h] [xbp-8h] BYREF

  result = 0.0;
  v2 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))this->klass->vtable._9_get_Value.methodPtr)(
                            this,
                            this->klass->vtable._9_get_Value.method);
  v3 = System_Double__TryParse(v2, &result, 0);
  v4 = result;
  if ( !v3 )
    return 0.0;
  return v4;
}


float AdjustSdk_JSONNode__get_AsFloat(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x0
  bool v3; // w0
  float v4; // s0
  float result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0.0;
  v2 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))this->klass->vtable._9_get_Value.methodPtr)(
                            this,
                            this->klass->vtable._9_get_Value.method);
  v3 = System_Single__TryParse(v2, &result, 0);
  v4 = result;
  if ( !v3 )
    return 0.0;
  return v4;
}


int32_t AdjustSdk_JSONNode__get_AsInt(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  v2 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))this->klass->vtable._9_get_Value.methodPtr)(
                            this,
                            this->klass->vtable._9_get_Value.method);
  if ( System_Int32__TryParse(v2, &result, 0) )
    return result;
  else
    return 0;
}


AdjustSdk_JSONClass_o *AdjustSdk_JSONNode__get_AsObject(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4D24AA1 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONClass_TypeInfo);
    byte_4D24AA1 = 1;
  }
  if ( !this )
    return 0;
  naturalAligment = AdjustSdk_JSONClass_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (AdjustSdk_JSONClass_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] == AdjustSdk_JSONClass_TypeInfo )
    return (AdjustSdk_JSONClass_o *)this;
  return 0;
}


System_Collections_Generic_IEnumerable_JSONNode__o *AdjustSdk_JSONNode__get_Childs(
        AdjustSdk_JSONNode_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4D24A9A & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONNode__get_Childs_d__17_TypeInfo);
    byte_4D24A9A = 1;
  }
  v2 = sub_1C942E4(AdjustSdk_JSONNode__get_Childs_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = -2;
  *(_DWORD *)(v2 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)v2;
}


int32_t AdjustSdk_JSONNode__get_Count(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  return 0;
}


System_Collections_Generic_IEnumerable_JSONNode__o *AdjustSdk_JSONNode__get_DeepChilds(
        AdjustSdk_JSONNode_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4D24A9B & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONNode__get_DeepChilds_d__19_TypeInfo);
    byte_4D24A9B = 1;
  }
  v3 = sub_1C942E4(AdjustSdk_JSONNode__get_DeepChilds_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C9403C(v3 + 40, this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)v3;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__get_Item(
        AdjustSdk_JSONNode_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  return 0;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__get_Item_31007664(
        AdjustSdk_JSONNode_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  return 0;
}


System_String_o *AdjustSdk_JSONNode__get_Value(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  if ( (byte_4D24A98 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D24A98 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool AdjustSdk_JSONNode__op_Equality(AdjustSdk_JSONNode_o *a, Il2CppObject *b, const MethodInfo *method)
{
  bool result; // w0
  __int64 naturalAligment; // x10

  if ( (byte_4D24AA3 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_4D24AA3 = 1;
  }
  result = !b
        && a
        && (naturalAligment = AdjustSdk_JSONLazyCreator_TypeInfo->_2.naturalAligment,
            a->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (AdjustSdk_JSONLazyCreator_c *)a->klass->_2.typeHierarchy[naturalAligment - 1] == AdjustSdk_JSONLazyCreator_TypeInfo
        || a == (AdjustSdk_JSONNode_o *)b;
  return result;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__op_Implicit(System_String_o *s, const MethodInfo *method)
{
  Il2CppObject *v3; // x20

  if ( (byte_4D24AA2 & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONData_TypeInfo);
    byte_4D24AA2 = 1;
  }
  v3 = (Il2CppObject *)sub_1C942E4(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v3, 0);
  v3[1].klass = (Il2CppClass *)s;
  sub_1C9403C(&v3[1], s);
  return (AdjustSdk_JSONNode_o *)v3;
}


System_String_o *AdjustSdk_JSONNode__op_Implicit_30988124(AdjustSdk_JSONNode_o *d, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL8 v4; // x0
  __int64 v5; // x1

  v4 = AdjustSdk_JSONNode__op_Equality(d, 0, v2);
  if ( v4 )
    return 0;
  if ( !d )
    sub_1C942F0(v4, v5);
  return (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))d->klass->vtable._9_get_Value.methodPtr)(
                              d,
                              d->klass->vtable._9_get_Value.method);
}


bool AdjustSdk_JSONNode__op_Inequality(AdjustSdk_JSONNode_o *a, Il2CppObject *b, const MethodInfo *method)
{
  return !AdjustSdk_JSONNode__op_Equality(a, b, method);
}


// local variable allocation has failed, the output may be wrong!
void AdjustSdk_JSONNode__set_AsBool(AdjustSdk_JSONNode_o *this, bool value, const MethodInfo *method)
{
  AdjustSdk_JSONNode_o *v4; // x20
  __int64 *v5; // x8

  v4 = this;
  if ( (byte_4D24A9F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19557/*"false"*/);
    this = (AdjustSdk_JSONNode_o *)sub_1C94098(&StringLiteral_24457/*"true"*/);
    byte_4D24A9F = 1;
  }
  if ( !v4 )
    sub_1C942F0(this, value);
  v5 = &StringLiteral_24457/*"true"*/;
  if ( !value )
    v5 = &StringLiteral_19557/*"false"*/;
  ((void (__fastcall *)(AdjustSdk_JSONNode_o *, __int64, const MethodInfo *))v4->klass->vtable._10_set_Value.methodPtr)(
    v4,
    *v5,
    v4->klass->vtable._10_set_Value.method);
}


void AdjustSdk_JSONNode__set_AsDouble(AdjustSdk_JSONNode_o *this, double value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  double v5; // [xsp+8h] [xbp-18h] BYREF

  v5 = value;
  v4 = System_Double__ToString(value, (const MethodInfo *)&v5);
  ((void (__fastcall *)(AdjustSdk_JSONNode_o *, System_String_o *, const MethodInfo *))this->klass->vtable._10_set_Value.methodPtr)(
    this,
    v4,
    this->klass->vtable._10_set_Value.method);
}


void AdjustSdk_JSONNode__set_AsFloat(AdjustSdk_JSONNode_o *this, float value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  float v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = value;
  v4 = System_Single__ToString(value, (const MethodInfo *)&v5);
  ((void (__fastcall *)(AdjustSdk_JSONNode_o *, System_String_o *, const MethodInfo *))this->klass->vtable._10_set_Value.methodPtr)(
    this,
    v4,
    this->klass->vtable._10_set_Value.method);
}


void AdjustSdk_JSONNode__set_AsInt(AdjustSdk_JSONNode_o *this, int32_t value, const MethodInfo *method)
{
  System_String_o *v4; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = value;
  v4 = System_Int32__ToString((int32_t)&v5, 0);
  ((void (__fastcall *)(AdjustSdk_JSONNode_o *, System_String_o *, const MethodInfo *))this->klass->vtable._10_set_Value.methodPtr)(
    this,
    v4,
    this->klass->vtable._10_set_Value.method);
}


void AdjustSdk_JSONNode__set_Item(
        AdjustSdk_JSONNode_o *this,
        int32_t aIndex,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  ;
}


void AdjustSdk_JSONNode__set_Item_31007672(
        AdjustSdk_JSONNode_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  ;
}


void AdjustSdk_JSONNode__set_Value(AdjustSdk_JSONNode_o *this, System_String_o *value, const MethodInfo *method)
{
  ;
}


void AdjustSdk_JSONNode__get_Childs_d__17___ctor(
        AdjustSdk_JSONNode__get_Childs_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool AdjustSdk_JSONNode__get_Childs_d__17__MoveNext(
        AdjustSdk_JSONNode__get_Childs_d__17_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.__1__state )
    this->fields.__1__state = -1;
  return 0;
}


System_Collections_Generic_IEnumerator_JSONNode__o *AdjustSdk_JSONNode__get_Childs_d__17__System_Collections_Generic_IEnumerable_AdjustSdk_JSONNode__GetEnumerator(
        AdjustSdk_JSONNode__get_Childs_d__17_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20

  if ( (byte_4D24AAA & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONNode__get_Childs_d__17_TypeInfo);
    byte_4D24AAA = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    this = (AdjustSdk_JSONNode__get_Childs_d__17_o *)sub_1C942E4(AdjustSdk_JSONNode__get_Childs_d__17_TypeInfo);
    System_Object___ctor((Il2CppObject *)this, 0);
    this->fields.__1__state = 0;
    this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  return (System_Collections_Generic_IEnumerator_JSONNode__o *)this;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__get_Childs_d__17__System_Collections_Generic_IEnumerator_AdjustSdk_JSONNode__get_Current(
        AdjustSdk_JSONNode__get_Childs_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AdjustSdk_JSONNode__get_Childs_d__17__System_Collections_IEnumerator_Reset(
        AdjustSdk_JSONNode__get_Childs_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AdjustSdk_JSONNode__get_Childs_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AdjustSdk_JSONNode__get_Childs_d__17__System_Collections_IEnumerator_get_Current(
        AdjustSdk_JSONNode__get_Childs_d__17_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void AdjustSdk_JSONNode__get_Childs_d__17__System_IDisposable_Dispose(
        AdjustSdk_JSONNode__get_Childs_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void AdjustSdk_JSONNode__get_DeepChilds_d__19___ctor(
        AdjustSdk_JSONNode__get_DeepChilds_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool AdjustSdk_JSONNode__get_DeepChilds_d__19__MoveNext(
        AdjustSdk_JSONNode__get_DeepChilds_d__19_o *this,
        const MethodInfo *method)
{
  AdjustSdk_JSONNode__get_DeepChilds_d__19_o *v2; // x20
  int32_t _1__state; // w8
  struct AdjustSdk_JSONNode_o *_4__this; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x8
  __int64 v9; // x9
  int *v10; // x10
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  AdjustSdk_JSONNode__get_DeepChilds_d__19_o *v15; // x8
  bool result; // w0
  struct System_Collections_Generic_IEnumerator_JSONNode__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_JSONNode__c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_IEnumerator_JSONNode__o *v23; // x19
  System_Collections_Generic_IEnumerator_JSONNode__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  AdjustSdk_JSONNode_o *v28; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_IEnumerable_JSONNode__o *DeepChilds; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerable_JSONNode__o *v32; // x19
  System_Collections_Generic_IEnumerable_JSONNode__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x1
  struct System_Collections_Generic_IEnumerator_JSONNode__o *_7__wrap2; // x19
  System_Collections_Generic_IEnumerator_JSONNode__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  const MethodInfo *v43; // x1
  struct System_Collections_Generic_IEnumerator_JSONNode__o *v44; // x19
  System_Collections_Generic_IEnumerator_JSONNode__c *v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  AdjustSdk_JSONNode__get_DeepChilds_d__19_o *v50; // [xsp+18h] [xbp-38h]

  v2 = this;
  v50 = this;
  if ( (byte_4D24AAB & 1) == 0 )
  {
    sub_1C94098(&System_Collections_Generic_IEnumerable_JSONNode__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_JSONNode__TypeInfo);
    this = (AdjustSdk_JSONNode__get_DeepChilds_d__19_o *)sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D24AAB = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_41;
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C942F0(0, method);
  v5 = ((__int64 (__fastcall *)(struct AdjustSdk_JSONNode_o *, const MethodInfo *))_4__this->klass->vtable._16_get_Childs.methodPtr)(
         _4__this,
         _4__this->klass->vtable._16_get_Childs.method);
  v7 = v5;
  if ( !v5 )
    sub_1C942F0(0, v6);
  v8 = *(_QWORD *)v5;
  v9 = *(unsigned __int16 *)(*(_QWORD *)v5 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v5 + 302LL) )
  {
    v10 = (int *)(*(_QWORD *)(v8 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_JSONNode__c **)v10 - 1) != System_Collections_Generic_IEnumerable_JSONNode__TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_11;
    }
    v11 = v8 + 16LL * *v10 + 312;
  }
  else
  {
LABEL_11:
    v11 = sub_1C6A420(v5, System_Collections_Generic_IEnumerable_JSONNode__TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))v11)(v7, *(_QWORD *)(v11 + 8));
  v50->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_JSONNode__o *)v12;
  v13 = sub_1C9403C(&v50->fields.__7__wrap1, v12);
  v15 = v50;
  v50->fields.__1__state = -3;
  while ( 1 )
  {
    _7__wrap1 = v15->fields.__7__wrap1;
    if ( !_7__wrap1 )
      sub_1C942F0(v13, v14);
    klass = _7__wrap1->klass;
    v19 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_22;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_22:
      v21 = sub_1C6A420(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v21)(
            _7__wrap1,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
    {
      AdjustSdk_JSONNode__get_DeepChilds_d__19____m__Finally1(v50, v22);
      v50->fields.__7__wrap1 = 0;
      sub_1C9403C(&v50->fields.__7__wrap1, 0);
      return 0;
    }
    v23 = v50->fields.__7__wrap1;
    if ( !v23 )
      sub_1C942F0(v50, v22);
    v24 = v23->klass;
    v25 = *(unsigned __int16 *)&v23->klass->_2.rank;
    if ( *(_WORD *)&v23->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_JSONNode__c **)v26 - 1) != System_Collections_Generic_IEnumerator_JSONNode__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_30;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_30:
      v27 = sub_1C6A420(v50->fields.__7__wrap1, System_Collections_Generic_IEnumerator_JSONNode__TypeInfo, 0);
    }
    v28 = (AdjustSdk_JSONNode_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v27)(
                                    v23,
                                    *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_1C942F0(0, v29);
    DeepChilds = AdjustSdk_JSONNode__get_DeepChilds(v28, v29);
    v32 = DeepChilds;
    if ( !DeepChilds )
      sub_1C942F0(0, v31);
    v33 = DeepChilds->klass;
    v34 = *(unsigned __int16 *)&DeepChilds->klass->_2.rank;
    if ( *(_WORD *)&DeepChilds->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_JSONNode__c **)v35 - 1) != System_Collections_Generic_IEnumerable_JSONNode__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_38;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_38:
      v36 = sub_1C6A420(DeepChilds, System_Collections_Generic_IEnumerable_JSONNode__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_JSONNode__o *, _QWORD))v36)(
            v32,
            *(_QWORD *)(v36 + 8));
    v50->fields.__7__wrap2 = (struct System_Collections_Generic_IEnumerator_JSONNode__o *)v37;
    this = (AdjustSdk_JSONNode__get_DeepChilds_d__19_o *)sub_1C9403C(&v50->fields.__7__wrap2, v37);
    v2 = v50;
LABEL_41:
    _7__wrap2 = v2->fields.__7__wrap2;
    v2->fields.__1__state = -4;
    if ( !_7__wrap2 )
      sub_1C942F0(this, method);
    v39 = _7__wrap2->klass;
    v40 = *(unsigned __int16 *)&_7__wrap2->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap2->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_46;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_46:
      v42 = sub_1C6A420(_7__wrap2, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v42)(
            _7__wrap2,
            *(_QWORD *)(v42 + 8))
        & 1) != 0 )
      break;
    AdjustSdk_JSONNode__get_DeepChilds_d__19____m__Finally2(v50, v43);
    v50->fields.__7__wrap2 = 0;
    v13 = sub_1C9403C(&v50->fields.__7__wrap2, 0);
    v15 = v50;
  }
  v44 = v50->fields.__7__wrap2;
  if ( !v44 )
    sub_1C942F0(v50, v43);
  v45 = v44->klass;
  v46 = *(unsigned __int16 *)&v44->klass->_2.rank;
  if ( *(_WORD *)&v44->klass->_2.rank )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_JSONNode__c **)v47 - 1) != System_Collections_Generic_IEnumerator_JSONNode__TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_56;
    }
    v48 = (__int64)&v45->vtable[*v47];
  }
  else
  {
LABEL_56:
    v48 = sub_1C6A420(v50->fields.__7__wrap2, System_Collections_Generic_IEnumerator_JSONNode__TypeInfo, 0);
  }
  v49 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v48)(
          v44,
          *(_QWORD *)(v48 + 8));
  v50->fields.__2__current = (struct AdjustSdk_JSONNode_o *)v49;
  sub_1C9403C(&v50->fields.__2__current, v49);
  result = 1;
  v50->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_JSONNode__o *AdjustSdk_JSONNode__get_DeepChilds_d__19__System_Collections_Generic_IEnumerable_AdjustSdk_JSONNode__GetEnumerator(
        AdjustSdk_JSONNode__get_DeepChilds_d__19_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct AdjustSdk_JSONNode_o *_4__this; // x1

  if ( (byte_4D24AAE & 1) == 0 )
  {
    sub_1C94098(&AdjustSdk_JSONNode__get_DeepChilds_d__19_TypeInfo);
    byte_4D24AAE = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C942E4(AdjustSdk_JSONNode__get_DeepChilds_d__19_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C9403C(v4 + 40, _4__this);
    return (System_Collections_Generic_IEnumerator_JSONNode__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_JSONNode__o *)this;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__get_DeepChilds_d__19__System_Collections_Generic_IEnumerator_AdjustSdk_JSONNode__get_Current(
        AdjustSdk_JSONNode__get_DeepChilds_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AdjustSdk_JSONNode__get_DeepChilds_d__19__System_Collections_IEnumerator_Reset(
        AdjustSdk_JSONNode__get_DeepChilds_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AdjustSdk_JSONNode__get_DeepChilds_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AdjustSdk_JSONNode__get_DeepChilds_d__19__System_Collections_IEnumerator_get_Current(
        AdjustSdk_JSONNode__get_DeepChilds_d__19_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void AdjustSdk_JSONNode__get_DeepChilds_d__19__System_IDisposable_Dispose(
        AdjustSdk_JSONNode__get_DeepChilds_d__19_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == 0xFFFFFFFC )
  {
    if ( _1__state != -4 )
      goto LABEL_6;
  }
  else if ( _1__state != 1 )
  {
    return;
  }
  AdjustSdk_JSONNode__get_DeepChilds_d__19____m__Finally2(this, method);
LABEL_6:
  AdjustSdk_JSONNode__get_DeepChilds_d__19____m__Finally1(this, method);
}


void AdjustSdk_JSONNode__get_DeepChilds_d__19____m__Finally1(
        AdjustSdk_JSONNode__get_DeepChilds_d__19_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_JSONNode__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_JSONNode__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D24AAC & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    byte_4D24AAC = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_1C6A420(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void AdjustSdk_JSONNode__get_DeepChilds_d__19____m__Finally2(
        AdjustSdk_JSONNode__get_DeepChilds_d__19_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_JSONNode__o *_7__wrap2; // x19
  System_Collections_Generic_IEnumerator_JSONNode__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D24AAD & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    byte_4D24AAD = 1;
  }
  _7__wrap2 = this->fields.__7__wrap2;
  this->fields.__1__state = -3;
  if ( _7__wrap2 )
  {
    klass = _7__wrap2->klass;
    v5 = *(unsigned __int16 *)&_7__wrap2->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap2->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_1C6A420(_7__wrap2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v7)(
      _7__wrap2,
      *(_QWORD *)(v7 + 8));
  }
}