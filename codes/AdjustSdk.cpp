void AdjustSdk_Adjust___ctor(AdjustSdk_Adjust_o *this, const MethodInfo *method)
{
  this->fields.logLevel = 3;
  this->fields.startManually = 1;
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
  if ( (byte_5930411 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930411 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, value, method);
  AdjustSdk_AdjustAndroid__AddGlobalCallbackParameter(key, value, method);
}


void AdjustSdk_Adjust__AddGlobalPartnerParameter(
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_5930410 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930410 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, value, method);
  AdjustSdk_AdjustAndroid__AddGlobalPartnerParameter(key, value, method);
}


void AdjustSdk_Adjust__Awake(AdjustSdk_Adjust_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  AdjustSdk_Adjust___c_c *v11; // x0
  struct AdjustSdk_Adjust___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__18_0; // x20
  Il2CppObject *v14; // x21
  struct AdjustSdk_Adjust___c_StaticFields *v15; // x0
  System_String_o *absoluteURL; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x20
  Il2CppObject *v20; // x21
  const MethodInfo *v21; // x1
  System_String_o *appToken; // x21
  int32_t environment; // w22
  int32_t logLevel; // w23
  __int64 v25; // x20
  const MethodInfo *v26; // x4
  System_Nullable_Int32Enum__o v27; // x0
  int32_t v28; // w1
  __int16 *v29; // x0
  const MethodInfo_45AC808 *v30; // x2
  __int16 *v31; // x0
  struct System_String_o *defaultTracker; // x1
  bool coppaCompliance; // w1
  __int16 *v34; // x0
  const MethodInfo_45AC808 *v35; // x2
  __int16 *v36; // x0
  const MethodInfo_45AC808 *v37; // x2
  __int16 *v38; // x0
  struct System_String_o *preinstallFilePath; // x1
  bool adServices; // w1
  __int16 *v41; // x0
  const MethodInfo_45AC808 *v42; // x2
  __int16 *v43; // x0
  const MethodInfo_45AC808 *v44; // x2
  __int16 *v45; // x0
  const MethodInfo_45AC808 *v46; // x2
  __int16 *v47; // x0
  const MethodInfo *v48; // x1
  __int16 v49; // [xsp+4h] [xbp-5Ch] BYREF
  __int16 v50; // [xsp+8h] [xbp-58h] BYREF
  __int16 v51; // [xsp+Ch] [xbp-54h] BYREF
  __int16 v52; // [xsp+10h] [xbp-50h] BYREF
  __int16 v53; // [xsp+14h] [xbp-4Ch] BYREF
  __int16 v54; // [xsp+18h] [xbp-48h] BYREF
  __int16 v55; // [xsp+1Ch] [xbp-44h] BYREF
  __int16 v56; // [xsp+20h] [xbp-40h] BYREF
  __int16 v57; // [xsp+24h] [xbp-3Ch] BYREF
  __int64 v58; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_5930405 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustConfig_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustDeeplink_TypeInfo);
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    sub_21FFC50(&Method_System_Nullable_AdjustLogLevel___ctor__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_Adjust___c__Awake_b__18_0__);
    sub_21FFC50(&AdjustSdk_Adjust___c_TypeInfo);
    byte_5930405 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_22;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  UnityEngine_Object__DontDestroyOnLoad(gameObject, 0);
  v11 = AdjustSdk_Adjust___c_TypeInfo;
  if ( !*(&AdjustSdk_Adjust___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_Adjust___c_TypeInfo, v9, v10);
    v11 = AdjustSdk_Adjust___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__18_0 = (System_Action_object__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v9, v10);
      static_fields = AdjustSdk_Adjust___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(_9__18_0, v14, Method_AdjustSdk_Adjust___c__Awake_b__18_0__, 0);
    v15 = AdjustSdk_Adjust___c_TypeInfo->static_fields;
    v15->__9__18_0 = (struct System_Action_string__o *)_9__18_0;
    sub_21FFBF4(&v15->__9__18_0, _9__18_0);
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v9, v10);
  UnityEngine_Application__add_deepLinkActivated((System_Action_string__o *)_9__18_0, 0);
  absoluteURL = UnityEngine_Application__get_absoluteURL(0);
  if ( !System_String__IsNullOrEmpty(absoluteURL, 0) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v17, v18);
    v19 = UnityEngine_Application__get_absoluteURL(0);
    v20 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustDeeplink_TypeInfo);
    System_Object___ctor(v20, 0);
    v20[1].klass = (Il2CppClass *)v19;
    sub_21FFBF4(&v20[1], v19);
    AdjustSdk_Adjust__ProcessDeeplink((AdjustSdk_AdjustDeeplink_o *)v20, v21);
  }
  if ( !this->fields.startManually )
  {
    appToken = this->fields.appToken;
    environment = this->fields.environment;
    logLevel = this->fields.logLevel;
    v25 = sub_21FFEBC(AdjustSdk_AdjustConfig_TypeInfo);
    AdjustSdk_AdjustConfig___ctor_36641860((AdjustSdk_AdjustConfig_o *)v25, appToken, environment, logLevel == 7, v26);
    v27 = (System_Nullable_Int32Enum__o)&v58;
    v28 = this->fields.logLevel;
    v58 = 0;
    System_Nullable_Int32Enum____ctor(
      v27,
      v28,
      (const MethodInfo_45B0560 *)Method_System_Nullable_AdjustLogLevel___ctor__);
    if ( v25 )
    {
      v29 = &v57;
      v57 = 0;
      *(_QWORD *)(v25 + 80) = v58;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v29,
        this->fields.sendInBackground,
        (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
      v30 = (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__;
      v31 = &v56;
      v56 = 0;
      *(_WORD *)(v25 + 42) = v57;
      System_Nullable_bool____ctor((System_Nullable_bool__o)v31, this->fields.launchDeferredDeeplink, v30);
      *(_WORD *)(v25 + 48) = v56;
      defaultTracker = this->fields.defaultTracker;
      *(_QWORD *)(v25 + 24) = defaultTracker;
      sub_21FFBF4(v25 + 24, defaultTracker);
      coppaCompliance = this->fields.coppaCompliance;
      v34 = &v55;
      v55 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v34,
        coppaCompliance,
        (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
      v35 = (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__;
      v36 = &v54;
      v54 = 0;
      *(_WORD *)(v25 + 40) = v55;
      System_Nullable_bool____ctor((System_Nullable_bool__o)v36, this->fields.costDataInAttribution, v35);
      v37 = (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__;
      v38 = &v53;
      v53 = 0;
      *(_WORD *)(v25 + 44) = v54;
      System_Nullable_bool____ctor((System_Nullable_bool__o)v38, this->fields.preinstallTracking, v37);
      *(_WORD *)(v25 + 182) = v53;
      preinstallFilePath = this->fields.preinstallFilePath;
      *(_QWORD *)(v25 + 184) = preinstallFilePath;
      sub_21FFBF4(v25 + 184, preinstallFilePath);
      adServices = this->fields.adServices;
      v41 = &v52;
      v52 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v41,
        adServices,
        (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
      v42 = (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__;
      v43 = &v51;
      v51 = 0;
      *(_WORD *)(v25 + 160) = v52;
      System_Nullable_bool____ctor((System_Nullable_bool__o)v43, this->fields.idfaReading, v42);
      v44 = (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__;
      v45 = &v50;
      v50 = 0;
      *(_WORD *)(v25 + 162) = v51;
      System_Nullable_bool____ctor((System_Nullable_bool__o)v45, this->fields.linkMe, v44);
      v46 = (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__;
      v47 = &v49;
      v49 = 0;
      *(_WORD *)(v25 + 168) = v50;
      System_Nullable_bool____ctor((System_Nullable_bool__o)v47, this->fields.skanAttribution, v46);
      *(_WORD *)(v25 + 166) = v49;
      AdjustSdk_Adjust__InitSdk((AdjustSdk_AdjustConfig_o *)v25, v48);
      return;
    }
LABEL_22:
    sub_21FFECC(transform, v4, v5);
  }
}


void AdjustSdk_Adjust__Disable(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_5930409 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930409 = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__Disable((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__DisableCoppaComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_593042D & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593042D = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__DisableCoppaComplianceInDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__DisablePlayStoreKidsComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_593042F & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593042F = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__DisablePlayStoreKidsComplianceInDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__Enable(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_5930408 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930408 = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__Enable((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__EnableCoppaComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_593042C & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593042C = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__EnableCoppaComplianceInDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__EnablePlayStoreKidsComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_593042E & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593042E = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__EnablePlayStoreKidsComplianceInDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__EndFirstSessionDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_593042B & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593042B = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__EndFirstSessionDelay((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__GdprForgetMe(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_593040E & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593040E = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__GdprForgetMe((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__GetAdid(System_Action_string__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593041E & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593041E = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__GetAdid(callback, method);
}


void AdjustSdk_Adjust__GetAmazonAdId(System_Action_string__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930423 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930423 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__GetAmazonAdId(callback, method);
}


int32_t AdjustSdk_Adjust__GetAppTrackingAuthorizationStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_593041D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16474/*"[Adjust]: Error! App tracking authorization status is only supported for iOS platform."*/);
    byte_593041D = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1, v2);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16474/*"[Adjust]: Error! App tracking authorization status is only supported for iOS platform."*/, 0);
  return -1;
}


void AdjustSdk_Adjust__GetAttribution(System_Action_AdjustAttribution__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593041F & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593041F = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__GetAttribution(callback, method);
}


void AdjustSdk_Adjust__GetGoogleAdId(System_Action_string__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930422 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930422 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__GetGoogleAdId(callback, method);
}


void AdjustSdk_Adjust__GetIdfa(System_Action_string__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930420 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16475/*"[Adjust]: Error! IDFA is not available on Android platform."*/);
    byte_5930420 = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method, v2);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16475/*"[Adjust]: Error! IDFA is not available on Android platform."*/, 0);
}


void AdjustSdk_Adjust__GetIdfv(System_Action_string__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930421 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16476/*"[Adjust]: Error! IDFV is not available on Android platform."*/);
    byte_5930421 = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method, v2);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16476/*"[Adjust]: Error! IDFV is not available on Android platform."*/, 0);
}


void AdjustSdk_Adjust__GetLastDeeplink(System_Action_string__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930425 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930425 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__GetLastDeeplink(callback, method);
}


void AdjustSdk_Adjust__GetSdkVersion(System_Action_string__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930424 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930424 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__GetSdkVersion(callback, method);
}


void AdjustSdk_Adjust__InitSdk(AdjustSdk_AdjustConfig_o *adjustConfig, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930406 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16477/*"[Adjust]: Missing config to start."*/);
    byte_5930406 = 1;
  }
  if ( adjustConfig )
  {
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
    AdjustSdk_AdjustAndroid__InitSdk(adjustConfig, method);
  }
  else
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method, v2);
    UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16477/*"[Adjust]: Missing config to start."*/, 0);
  }
}


bool AdjustSdk_Adjust__IsEditor(const MethodInfo *method)
{
  return 0;
}


void AdjustSdk_Adjust__IsEnabled(System_Action_bool__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593040A & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593040A = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__IsEnabled(callback, method);
}


void AdjustSdk_Adjust__ProcessAndResolveDeeplink(
        AdjustSdk_AdjustDeeplink_o *deeplink,
        System_Action_string__o *callback,
        const MethodInfo *method)
{
  if ( (byte_5930428 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930428 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, callback, method);
  AdjustSdk_AdjustAndroid__ProcessAndResolveDeeplink(deeplink, callback, method);
}


void AdjustSdk_Adjust__ProcessDeeplink(AdjustSdk_AdjustDeeplink_o *deeplink, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593040F & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593040F = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__ProcessDeeplink(deeplink, method);
}


void AdjustSdk_Adjust__RemoveGlobalCallbackParameter(System_String_o *key, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930413 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930413 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__RemoveGlobalCallbackParameter(key, method);
}


void AdjustSdk_Adjust__RemoveGlobalCallbackParameters(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_5930415 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930415 = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__RemoveGlobalCallbackParameters((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__RemoveGlobalPartnerParameter(System_String_o *key, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930412 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930412 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__RemoveGlobalPartnerParameter(key, method);
}


void AdjustSdk_Adjust__RemoveGlobalPartnerParameters(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_5930414 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930414 = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__RemoveGlobalPartnerParameters((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__RequestAppTrackingAuthorization(System_Action_int__o *callback, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593041B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16479/*"[Adjust]: Requesting tracking authorization is only supported for iOS platform."*/);
    byte_593041B = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method, v2);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16479/*"[Adjust]: Requesting tracking authorization is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__SetExternalDeviceIdInDelay(System_String_o *externalDeviceId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930430 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930430 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__SetExternalDeviceIdInDelay(externalDeviceId, method);
}


void AdjustSdk_Adjust__SetPushToken(System_String_o *pushToken, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593040D & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593040D = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__SetPushToken(pushToken, method);
}


void AdjustSdk_Adjust__SetTestOptions(
        System_Collections_Generic_Dictionary_string__string__o *testOptions,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930431 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930431 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__SetTestOptions(testOptions, method);
}


void AdjustSdk_Adjust__SwitchBackToOnlineMode(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_593040C & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593040C = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__SwitchBackToOnlineMode((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__SwitchToOfflineMode(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *inited; // x0

  if ( (byte_593040B & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593040B = 1;
  }
  inited = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustAndroid_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
  AdjustSdk_AdjustAndroid__SwitchToOfflineMode((const MethodInfo *)inited);
}


void AdjustSdk_Adjust__TrackAdRevenue(AdjustSdk_AdjustAdRevenue_o *adRevenue, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930416 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930416 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__TrackAdRevenue(adRevenue, method);
}


void AdjustSdk_Adjust__TrackAppStoreSubscription(
        AdjustSdk_AdjustAppStoreSubscription_o *subscription,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930417 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16473/*"[Adjust]: App Store subscription tracking is only supported for iOS platform."*/);
    byte_5930417 = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method, v2);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16473/*"[Adjust]: App Store subscription tracking is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__TrackEvent(AdjustSdk_AdjustEvent_o *adjustEvent, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930407 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16478/*"[Adjust]: Missing event to track."*/);
    byte_5930407 = 1;
  }
  if ( adjustEvent )
  {
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
    AdjustSdk_AdjustAndroid__TrackEvent(adjustEvent, method);
  }
  else
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method, v2);
    UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16478/*"[Adjust]: Missing event to track."*/, 0);
  }
}


void AdjustSdk_Adjust__TrackMeasurementConsent(bool measurementConsent, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593041A & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593041A = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__TrackMeasurementConsent(measurementConsent, method);
}


void AdjustSdk_Adjust__TrackPlayStoreSubscription(
        AdjustSdk_AdjustPlayStoreSubscription_o *subscription,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930418 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930418 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__TrackPlayStoreSubscription(subscription, method);
}


void AdjustSdk_Adjust__TrackThirdPartySharing(
        AdjustSdk_AdjustThirdPartySharing_o *thirdPartySharing,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5930419 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930419 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
  AdjustSdk_AdjustAndroid__TrackThirdPartySharing(thirdPartySharing, method);
}


// local variable allocation has failed, the output may be wrong!
void AdjustSdk_Adjust__UpdateSkanConversionValue(
        int32_t conversionValue,
        System_String_o *coarseValue,
        bool lockWindow,
        System_Action_string__o *callback,
        const MethodInfo *method)
{
  if ( (byte_593041C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16480/*"[Adjust]: Updating SKAdNetwork conversion value is only supported for iOS platform."*/);
    byte_593041C = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, coarseValue, lockWindow);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16480/*"[Adjust]: Updating SKAdNetwork conversion value is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__VerifyAndTrackAppStorePurchase(
        AdjustSdk_AdjustEvent_o *adjustEvent,
        System_Action_AdjustPurchaseVerificationResult__o *callback,
        const MethodInfo *method)
{
  if ( (byte_5930429 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16472/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/);
    byte_5930429 = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, callback, method);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16472/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__VerifyAndTrackPlayStorePurchase(
        AdjustSdk_AdjustEvent_o *adjustEvent,
        System_Action_AdjustPurchaseVerificationResult__o *verificationResultCallback,
        const MethodInfo *method)
{
  if ( (byte_593042A & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_593042A = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, verificationResultCallback, method);
  AdjustSdk_AdjustAndroid__VerifyAndTrackPlayStorePurchase(adjustEvent, verificationResultCallback, method);
}


void AdjustSdk_Adjust__VerifyAppStorePurchase(
        AdjustSdk_AdjustAppStorePurchase_o *purchase,
        System_Action_AdjustPurchaseVerificationResult__o *callback,
        const MethodInfo *method)
{
  if ( (byte_5930426 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_16472/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/);
    byte_5930426 = 1;
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, callback, method);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_16472/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/, 0);
}


void AdjustSdk_Adjust__VerifyPlayStorePurchase(
        AdjustSdk_AdjustPlayStorePurchase_o *purchase,
        System_Action_AdjustPurchaseVerificationResult__o *verificationResultCallback,
        const MethodInfo *method)
{
  if ( (byte_5930427 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    byte_5930427 = 1;
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, verificationResultCallback, method);
  AdjustSdk_AdjustAndroid__VerifyPlayStorePurchase(purchase, verificationResultCallback, method);
}


void AdjustSdk_Adjust___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_5930432 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_Adjust___c_TypeInfo);
    byte_5930432 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_Adjust___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AdjustSdk_Adjust___c_TypeInfo->static_fields->__9 = (struct AdjustSdk_Adjust___c_o *)v1;
  sub_21FFBF4(AdjustSdk_Adjust___c_TypeInfo->static_fields, v1);
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

  if ( (byte_5930433 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustDeeplink_TypeInfo);
    byte_5930433 = 1;
  }
  v4 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustDeeplink_TypeInfo);
  System_Object___ctor(v4, 0);
  v4[1].klass = (Il2CppClass *)deeplink;
  sub_21FFBF4(&v4[1], deeplink);
  AdjustSdk_Adjust__ProcessDeeplink((AdjustSdk_AdjustDeeplink_o *)v4, v5);
}


void AdjustSdk_AdjustAdRevenue___ctor(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *source,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Source_k__BackingField = source;
  sub_21FFBF4(&this->fields._Source_k__BackingField, source);
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
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_5930437 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_5930437 = 1;
  }
  innerCallbackParameters = this->fields.innerCallbackParameters;
  p_fields = &this->fields;
  v7 = (System_Collections_Generic_List_object__o *)innerCallbackParameters;
  if ( !innerCallbackParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerCallbackParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_21FFBF4(p_fields, v10);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFBF4(v14 + 4, key);
  }
  v15 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
  if ( !p_fields->innerCallbackParameters
    || (v16 = v15->fields._items,
        v17 = Method_System_Collections_Generic_List_string__Add__,
        ++v15->fields._version,
        !v16) )
  {
LABEL_14:
    sub_21FFECC(v7, key, value);
  }
  v18 = v15->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v15->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)value;
    sub_21FFBF4(v19 + 4, value);
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
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_5930438 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_5930438 = 1;
  }
  innerPartnerParameters = this->fields.innerPartnerParameters;
  p_innerPartnerParameters = &this->fields.innerPartnerParameters;
  v7 = (System_Collections_Generic_List_object__o *)innerPartnerParameters;
  if ( !innerPartnerParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_21FFBF4(p_innerPartnerParameters, v10);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFBF4(v14 + 4, key);
  }
  v15 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
  if ( !*p_innerPartnerParameters
    || (v16 = v15->fields._items,
        v17 = Method_System_Collections_Generic_List_string__Add__,
        ++v15->fields._version,
        !v16) )
  {
LABEL_14:
    sub_21FFECC(v7, key, value);
  }
  v18 = v15->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v15->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)value;
    sub_21FFBF4(v19 + 4, value);
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

  if ( (byte_5930436 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_double___ctor__);
    byte_5930436 = 1;
  }
  *(_QWORD *)&v9.fields.value = Method_System_Nullable_double___ctor__;
  *(_QWORD *)&v9.fields.hasValue = &v8;
  v8 = (struct System_Nullable_double__o)0LL;
  System_Nullable_double____ctor(v9, revenue, (const MethodInfo_45AEEEC *)method);
  v7 = v8;
  this->fields._Currency_k__BackingField = currency;
  this->fields._Revenue_k__BackingField = v7;
  sub_21FFBF4(&this->fields._Currency_k__BackingField, currency);
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

  if ( (byte_5930434 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_5930434 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerCallbackParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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

  if ( (byte_5930435 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_5930435 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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
  sub_21FFBF4(&this->fields._AdRevenueNetwork_k__BackingField, value);
}


void AdjustSdk_AdjustAdRevenue__set_AdRevenuePlacement(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._AdRevenuePlacement_k__BackingField = value;
  sub_21FFBF4(&this->fields._AdRevenuePlacement_k__BackingField, value);
}


void AdjustSdk_AdjustAdRevenue__set_AdRevenueUnit(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._AdRevenueUnit_k__BackingField = value;
  sub_21FFBF4(&this->fields._AdRevenueUnit_k__BackingField, value);
}


void AdjustSdk_AdjustAdRevenue__set_Currency(
        AdjustSdk_AdjustAdRevenue_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Currency_k__BackingField = value;
  sub_21FFBF4(&this->fields._Currency_k__BackingField, value);
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
  sub_21FFBF4(&this->fields._Source_k__BackingField, value);
}


void AdjustSdk_AdjustAndroid___cctor(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_c *v1; // x0
  UnityEngine_AndroidJavaClass_o *v2; // x19
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaClass_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Static_object; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v9; // x8

  if ( (byte_5930463 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_21FFC50(&StringLiteral_18888/*"com.unity3d.player.UnityPlayer"*/);
    sub_21FFC50(&StringLiteral_18829/*"com.adjust.sdk.Adjust"*/);
    sub_21FFC50(&StringLiteral_19193/*"currentActivity"*/);
    byte_5930463 = 1;
  }
  v1 = UnityEngine_AndroidJavaClass_TypeInfo;
  AdjustSdk_AdjustAndroid_TypeInfo->static_fields->isDeferredDeeplinkOpeningEnabled = 1;
  v2 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(v1);
  UnityEngine_AndroidJavaClass___ctor(v2, (System_String_o *)StringLiteral_18829/*"com.adjust.sdk.Adjust"*/, 0);
  static_fields = AdjustSdk_AdjustAndroid_TypeInfo->static_fields;
  static_fields->ajcAdjust = v2;
  sub_21FFBF4(&static_fields->ajcAdjust, v2);
  v4 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v4, (System_String_o *)StringLiteral_18888/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v4 )
    sub_21FFECC(v5, v6, v7);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v4,
                    (System_String_o *)StringLiteral_19193/*"currentActivity"*/,
                    (const MethodInfo_36D7798 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v9 = AdjustSdk_AdjustAndroid_TypeInfo->static_fields;
  v9->ajoCurrentActivity = (struct UnityEngine_AndroidJavaObject_o *)Static_object;
  sub_21FFBF4(&v9->ajoCurrentActivity, Static_object);
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
  __int64 v7; // x1
  __int64 v8; // x2
  AdjustSdk_AdjustAndroid_c *v9; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Object_array *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x0

  if ( (byte_5930446 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_17318/*"addGlobalCallbackParameter"*/);
    sub_21FFC50(&StringLiteral_18829/*"com.adjust.sdk.Adjust"*/);
    byte_5930446 = 1;
  }
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, value, method);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v5->static_fields->ajcAdjust )
  {
    v6 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v6, (System_String_o *)StringLiteral_18829/*"com.adjust.sdk.Adjust"*/, 0);
    v9 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v7, v8);
      v9 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->ajcAdjust = v6;
    sub_21FFBF4(&static_fields->ajcAdjust, v6);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, value, method);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v12 = sub_21FFD10(object___TypeInfo, 2);
  if ( !v12 )
LABEL_20:
    sub_21FFECC(v12, v13, v14);
  v15 = (System_Object_array *)v12;
  if ( key )
  {
    v12 = sub_21FFDA4(key, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
      goto LABEL_22;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_21;
  v15->m_Items[0] = (Il2CppObject *)key;
  v12 = sub_21FFBF4(v15->m_Items, key);
  if ( value )
  {
    v12 = sub_21FFDA4(value, v15->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_22:
      v17 = sub_21FFEF0(v12, v16);
      sub_21FFD90(v17, 0);
    }
  }
  if ( (v15->max_length & 0xFFFFFFFE) == 0 )
LABEL_21:
    sub_21FFED4(v12);
  v15->m_Items[1] = (Il2CppObject *)value;
  v12 = sub_21FFBF4(&v15->m_Items[1], value);
  if ( !ajcAdjust )
    goto LABEL_20;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_17318/*"addGlobalCallbackParameter"*/, v15, 0);
}


void AdjustSdk_AdjustAndroid__AddGlobalPartnerParameter(
        System_String_o *key,
        System_String_o *value,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_c *v5; // x0
  UnityEngine_AndroidJavaClass_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  AdjustSdk_AdjustAndroid_c *v9; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Object_array *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x0

  if ( (byte_5930445 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_18829/*"com.adjust.sdk.Adjust"*/);
    sub_21FFC50(&StringLiteral_17319/*"addGlobalPartnerParameter"*/);
    byte_5930445 = 1;
  }
  v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, value, method);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v5->static_fields->ajcAdjust )
  {
    v6 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v6, (System_String_o *)StringLiteral_18829/*"com.adjust.sdk.Adjust"*/, 0);
    v9 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v7, v8);
      v9 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->ajcAdjust = v6;
    sub_21FFBF4(&static_fields->ajcAdjust, v6);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, value, method);
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
  v12 = sub_21FFD10(object___TypeInfo, 2);
  if ( !v12 )
LABEL_20:
    sub_21FFECC(v12, v13, v14);
  v15 = (System_Object_array *)v12;
  if ( key )
  {
    v12 = sub_21FFDA4(key, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
      goto LABEL_22;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_21;
  v15->m_Items[0] = (Il2CppObject *)key;
  v12 = sub_21FFBF4(v15->m_Items, key);
  if ( value )
  {
    v12 = sub_21FFDA4(value, v15->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_22:
      v17 = sub_21FFEF0(v12, v16);
      sub_21FFD90(v17, 0);
    }
  }
  if ( (v15->max_length & 0xFFFFFFFE) == 0 )
LABEL_21:
    sub_21FFED4(v12);
  v15->m_Items[1] = (Il2CppObject *)value;
  v12 = sub_21FFBF4(&v15->m_Items[1], value);
  if ( !ajcAdjust )
    goto LABEL_20;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_17319/*"addGlobalPartnerParameter"*/, v15, 0);
}


void AdjustSdk_AdjustAndroid__Disable(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_593043C & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_19435/*"disable"*/);
    byte_593043C = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v4 = Method_System_Array_Empty_object___;
  v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v5 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v5 = v4[7];
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, v1, v2);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v8, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19435/*"disable"*/,
    **(System_Object_array ***)(v8 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__DisableCoppaCompliance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_5930440 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_19436/*"disableCoppaCompliance"*/);
    byte_5930440 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v5 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_11;
  v8 = v5;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v5 = sub_21FFDA4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v11 = sub_21FFEF0(0, v10);
      sub_21FFD90(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
    sub_21FFED4(v5);
  *(_QWORD *)(v8 + 32) = ajoCurrentActivity;
  v5 = sub_21FFBF4(v8 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v5, v6, v7);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19436/*"disableCoppaCompliance"*/,
    (System_Object_array *)v8,
    0);
}


void AdjustSdk_AdjustAndroid__DisableCoppaComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_5930457 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_19437/*"disableCoppaComplianceInDelay"*/);
    byte_5930457 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v4 = Method_System_Array_Empty_object___;
  v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v5 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v5 = v4[7];
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, v1, v2);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v8, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19437/*"disableCoppaComplianceInDelay"*/,
    **(System_Object_array ***)(v8 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__DisablePlayStoreKidsApp(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_5930442 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_19440/*"disablePlayStoreKidsApp"*/);
    byte_5930442 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v5 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_11;
  v8 = v5;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v5 = sub_21FFDA4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v11 = sub_21FFEF0(0, v10);
      sub_21FFD90(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
    sub_21FFED4(v5);
  *(_QWORD *)(v8 + 32) = ajoCurrentActivity;
  v5 = sub_21FFBF4(v8 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v5, v6, v7);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19440/*"disablePlayStoreKidsApp"*/,
    (System_Object_array *)v8,
    0);
}


void AdjustSdk_AdjustAndroid__DisablePlayStoreKidsComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_593045F & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_19441/*"disablePlayStoreKidsComplianceInDelay"*/);
    byte_593045F = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v4 = Method_System_Array_Empty_object___;
  v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v5 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v5 = v4[7];
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, v1, v2);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v8, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19441/*"disablePlayStoreKidsComplianceInDelay"*/,
    **(System_Object_array ***)(v8 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__Enable(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_593043B & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_19820/*"enable"*/);
    byte_593043B = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v4 = Method_System_Array_Empty_object___;
  v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v5 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v5 = v4[7];
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, v1, v2);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v8, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19820/*"enable"*/,
    **(System_Object_array ***)(v8 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__EnableCoppaCompliance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_593043F & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_19823/*"enableCoppaCompliance"*/);
    byte_593043F = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v5 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_11;
  v8 = v5;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v5 = sub_21FFDA4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v11 = sub_21FFEF0(0, v10);
      sub_21FFD90(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
    sub_21FFED4(v5);
  *(_QWORD *)(v8 + 32) = ajoCurrentActivity;
  v5 = sub_21FFBF4(v8 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v5, v6, v7);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19823/*"enableCoppaCompliance"*/,
    (System_Object_array *)v8,
    0);
}


void AdjustSdk_AdjustAndroid__EnableCoppaComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_5930456 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_19824/*"enableCoppaComplianceInDelay"*/);
    byte_5930456 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v4 = Method_System_Array_Empty_object___;
  v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v5 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v5 = v4[7];
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, v1, v2);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v8, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19824/*"enableCoppaComplianceInDelay"*/,
    **(System_Object_array ***)(v8 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__EnablePlayStoreKidsApp(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_5930441 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_19833/*"enablePlayStoreKidsApp"*/);
    byte_5930441 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v5 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_11;
  v8 = v5;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v5 = sub_21FFDA4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v11 = sub_21FFEF0(0, v10);
      sub_21FFD90(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
    sub_21FFED4(v5);
  *(_QWORD *)(v8 + 32) = ajoCurrentActivity;
  v5 = sub_21FFBF4(v8 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v5, v6, v7);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19833/*"enablePlayStoreKidsApp"*/,
    (System_Object_array *)v8,
    0);
}


void AdjustSdk_AdjustAndroid__EnablePlayStoreKidsComplianceInDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_593045E & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_19835/*"enablePlayStoreKidsComplianceInDelay"*/);
    byte_593045E = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v4 = Method_System_Array_Empty_object___;
  v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v5 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v5 = v4[7];
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, v1, v2);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v8, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19835/*"enablePlayStoreKidsComplianceInDelay"*/,
    **(System_Object_array ***)(v8 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__EndFirstSessionDelay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_5930455 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_19858/*"endFirstSessionDelay"*/);
    byte_5930455 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v4 = Method_System_Array_Empty_object___;
  v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v5 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v5 = v4[7];
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, v1, v2);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v8, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_19858/*"endFirstSessionDelay"*/,
    **(System_Object_array ***)(v8 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__GdprForgetMe(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x20
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v10; // x0

  if ( (byte_5930444 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20646/*"gdprForgetMe"*/);
    byte_5930444 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  v5 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_11;
  v8 = v5;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v5 = sub_21FFDA4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v10 = sub_21FFEF0();
      sub_21FFD90(v10, 0);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
    sub_21FFED4(v5);
  *(_QWORD *)(v8 + 32) = ajoCurrentActivity;
  v5 = sub_21FFBF4(v8 + 32, ajoCurrentActivity);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v5, v6, v7);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_20646/*"gdprForgetMe"*/,
    (System_Object_array *)v8,
    0);
}


void AdjustSdk_AdjustAndroid__GetAdid(System_Action_string__o *onAdidRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_AdidReadListener_o *v3; // x19
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x1
  __int64 v14; // x0

  if ( (byte_5930451 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_AdidReadListener_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20659/*"getAdid"*/);
    byte_5930451 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_AdidReadListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_AdidReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_AdidReadListener___ctor(v3, onAdidRead, v4);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v5, v6);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v7->static_fields->ajcAdjust;
  v9 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v9 )
    goto LABEL_11;
  v12 = v9;
  if ( v3 )
  {
    v9 = sub_21FFDA4(v3, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
    {
      v14 = sub_21FFEF0(0, v13);
      sub_21FFD90(v14, 0);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
    sub_21FFED4(v9);
  *(_QWORD *)(v12 + 32) = v3;
  v9 = sub_21FFBF4(v12 + 32, v3);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v9, v10, v11);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_20659/*"getAdid"*/,
    (System_Object_array *)v12,
    0);
}


void AdjustSdk_AdjustAndroid__GetAmazonAdId(System_Action_string__o *onAmazonAdIdRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_o *v3; // x19
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Object_array *v12; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x22
  __int64 v14; // x1
  __int64 v15; // x0

  if ( (byte_593045A & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20662/*"getAmazonAdId"*/);
    byte_593045A = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_AmazonAdIdReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___ctor(v3, onAmazonAdIdRead, v4);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v5, v6);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v7->static_fields->ajcAdjust;
  v9 = sub_21FFD10(object___TypeInfo, 2);
  if ( !v9 )
LABEL_14:
    sub_21FFECC(v9, v10, v11);
  v12 = (System_Object_array *)v9;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v9 = sub_21FFDA4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
      goto LABEL_16;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_15;
  v12->m_Items[0] = (Il2CppObject *)ajoCurrentActivity;
  v9 = sub_21FFBF4(v12->m_Items, ajoCurrentActivity);
  if ( v3 )
  {
    v9 = sub_21FFDA4(v3, v12->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_16:
      v15 = sub_21FFEF0(v9, v14);
      sub_21FFD90(v15, 0);
    }
  }
  if ( (v12->max_length & 0xFFFFFFFE) == 0 )
LABEL_15:
    sub_21FFED4(v9);
  v12->m_Items[1] = (Il2CppObject *)v3;
  v9 = sub_21FFBF4(&v12->m_Items[1], v3);
  if ( !ajcAdjust )
    goto LABEL_14;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_20662/*"getAmazonAdId"*/, v12, 0);
}


void AdjustSdk_AdjustAndroid__GetAttribution(
        System_Action_AdjustAttribution__o *onAttributionRead,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_AttributionReadListener_o *v3; // x19
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x1
  __int64 v14; // x0

  if ( (byte_5930452 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_AttributionReadListener_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20665/*"getAttribution"*/);
    byte_5930452 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_AttributionReadListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_AttributionReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_AttributionReadListener___ctor(v3, onAttributionRead, v4);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v5, v6);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v7->static_fields->ajcAdjust;
  v9 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v9 )
    goto LABEL_11;
  v12 = v9;
  if ( v3 )
  {
    v9 = sub_21FFDA4(v3, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
    {
      v14 = sub_21FFEF0(0, v13);
      sub_21FFD90(v14, 0);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
    sub_21FFED4(v9);
  *(_QWORD *)(v12 + 32) = v3;
  v9 = sub_21FFBF4(v12 + 32, v3);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v9, v10, v11);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_20665/*"getAttribution"*/,
    (System_Object_array *)v12,
    0);
}


void AdjustSdk_AdjustAndroid__GetGoogleAdId(System_Action_string__o *onDeviceIdsRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_o *v3; // x19
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Object_array *v12; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x22
  __int64 v14; // x1
  __int64 v15; // x0

  if ( (byte_5930459 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20685/*"getGoogleAdId"*/);
    byte_5930459 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___ctor(v3, onDeviceIdsRead, v4);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v5, v6);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v7->static_fields->ajcAdjust;
  v9 = sub_21FFD10(object___TypeInfo, 2);
  if ( !v9 )
LABEL_14:
    sub_21FFECC(v9, v10, v11);
  v12 = (System_Object_array *)v9;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v9 = sub_21FFDA4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
      goto LABEL_16;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_15;
  v12->m_Items[0] = (Il2CppObject *)ajoCurrentActivity;
  v9 = sub_21FFBF4(v12->m_Items, ajoCurrentActivity);
  if ( v3 )
  {
    v9 = sub_21FFDA4(v3, v12->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_16:
      v15 = sub_21FFEF0(v9, v14);
      sub_21FFD90(v15, 0);
    }
  }
  if ( (v12->max_length & 0xFFFFFFFE) == 0 )
LABEL_15:
    sub_21FFED4(v9);
  v12->m_Items[1] = (Il2CppObject *)v3;
  v9 = sub_21FFBF4(&v12->m_Items[1], v3);
  if ( !ajcAdjust )
    goto LABEL_14;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_20685/*"getGoogleAdId"*/, v12, 0);
}


void AdjustSdk_AdjustAndroid__GetLastDeeplink(System_Action_string__o *onLastDeeplinkRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_LastDeeplinkListener_o *v3; // x19
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Object_array *v12; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x22
  __int64 v14; // x1
  __int64 v15; // x0

  if ( (byte_5930454 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_LastDeeplinkListener_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20691/*"getLastDeeplink"*/);
    byte_5930454 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_LastDeeplinkListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_LastDeeplinkListener_TypeInfo);
  AdjustSdk_AdjustAndroid_LastDeeplinkListener___ctor(v3, onLastDeeplinkRead, v4);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v5, v6);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v7->static_fields->ajcAdjust;
  v9 = sub_21FFD10(object___TypeInfo, 2);
  if ( !v9 )
LABEL_14:
    sub_21FFECC(v9, v10, v11);
  v12 = (System_Object_array *)v9;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v9 = sub_21FFDA4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
      goto LABEL_16;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_15;
  v12->m_Items[0] = (Il2CppObject *)ajoCurrentActivity;
  v9 = sub_21FFBF4(v12->m_Items, ajoCurrentActivity);
  if ( v3 )
  {
    v9 = sub_21FFDA4(v3, v12->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_16:
      v15 = sub_21FFEF0(v9, v14);
      sub_21FFD90(v15, 0);
    }
  }
  if ( (v12->max_length & 0xFFFFFFFE) == 0 )
LABEL_15:
    sub_21FFED4(v9);
  v12->m_Items[1] = (Il2CppObject *)v3;
  v9 = sub_21FFBF4(&v12->m_Items[1], v3);
  if ( !ajcAdjust )
    goto LABEL_14;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_20691/*"getLastDeeplink"*/, v12, 0);
}


void AdjustSdk_AdjustAndroid__GetSdkVersion(System_Action_string__o *onSdkVersionRead, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_SdkVersionReadListener_o *v3; // x19
  const MethodInfo *v4; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x1
  __int64 v14; // x0

  if ( (byte_5930453 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_SdkVersionReadListener_TypeInfo);
    sub_21FFC50(&StringLiteral_25682/*"unity5.4.2"*/);
    sub_21FFC50(&StringLiteral_20729/*"getSdkVersion"*/);
    byte_5930453 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_SdkVersionReadListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_SdkVersionReadListener_TypeInfo);
  AdjustSdk_AdjustAndroid_SdkVersionReadListener___ctor(
    v3,
    onSdkVersionRead,
    (System_String_o *)StringLiteral_25682/*"unity5.4.2"*/,
    v4);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v5, v6);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v7->static_fields->ajcAdjust;
  v9 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v9 )
    goto LABEL_11;
  v12 = v9;
  if ( v3 )
  {
    v9 = sub_21FFDA4(v3, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
    {
      v14 = sub_21FFEF0(0, v13);
      sub_21FFD90(v14, 0);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
    sub_21FFED4(v9);
  *(_QWORD *)(v12 + 32) = v3;
  v9 = sub_21FFBF4(v12 + 32, v3);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v9, v10, v11);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_20729/*"getSdkVersion"*/,
    (System_Object_array *)v12,
    0);
}


void AdjustSdk_AdjustAndroid__InitSdk(AdjustSdk_AdjustConfig_o *adjustConfig, const MethodInfo *method)
{
  __int64 v2; // x2
  AdjustSdk_AdjustConfig_o *v3; // x19
  __int64 *v4; // x8
  struct System_Nullable_bool__o AllowSuppressLogLevel_k__BackingField; // w10
  __int64 v6; // x20
  AdjustSdk_AdjustAndroid_c *v7; // x8
  AdjustSdk_AdjustConfig_o *v8; // x21
  struct System_String_o *ajoCurrentActivity; // x22
  struct System_String_o *AppToken_k__BackingField; // x22
  __int64 v11; // x0
  struct System_Nullable_bool__o *p_IsDataResidency_k__BackingField; // x0
  AdjustSdk_AdjustAndroid_c *v13; // x8
  struct System_String_o *v14; // x22
  struct System_String_o *v15; // x22
  UnityEngine_AndroidJavaObject_o *v16; // x20
  struct System_Nullable_bool__o IsDeferredDeeplinkOpeningEnabled_k__BackingField; // w8
  __int16 *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  bool Value; // w20
  AdjustSdk_AdjustAndroid_c *v22; // x0
  struct System_Nullable_AdjustLogLevel__o LogLevel_k__BackingField; // x8
  System_Nullable_Int32Enum__o v24; // x0
  int32_t v25; // w0
  const MethodInfo *v26; // x1
  System_String_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_AndroidJavaClass_o *v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *Static_object; // x0
  UnityEngine_AndroidJavaClass_o *v35; // x20
  System_Nullable_Int32Enum__o v36; // x0
  int32_t v37; // w0
  const MethodInfo *v38; // x1
  System_String_o *v39; // x0
  __int64 v40; // x2
  Il2CppObject *v41; // x20
  UnityEngine_AndroidJavaObject_o *v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x22
  UnityEngine_AndroidJavaObject_o *v47; // x20
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x21
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  unsigned int IsDeviceIdsReadingOnceEnabled_k__BackingField; // w8
  bool v56; // zf
  UnityEngine_AndroidJavaObject_o *v57; // x20
  _QWORD *v58; // x21
  __int64 v59; // x8
  __int64 v60; // x0
  __int64 v61; // x0
  unsigned int IsCoppaComplianceEnabled_k__BackingField; // w8
  UnityEngine_AndroidJavaObject_o *v63; // x20
  _QWORD *v64; // x21
  __int64 v65; // x8
  __int64 v66; // x0
  __int64 v67; // x0
  unsigned int IsPlayStoreKidsComplianceEnabled_k__BackingField; // w8
  UnityEngine_AndroidJavaObject_o *v69; // x20
  _QWORD *v70; // x21
  __int64 v71; // x8
  __int64 v72; // x0
  __int64 v73; // x0
  unsigned int IsSendingInBackgroundEnabled_k__BackingField; // w8
  UnityEngine_AndroidJavaObject_o *v75; // x20
  _QWORD *v76; // x21
  __int64 v77; // x8
  __int64 v78; // x0
  __int64 v79; // x0
  unsigned int IsCostDataInAttributionEnabled_k__BackingField; // w8
  UnityEngine_AndroidJavaObject_o *v81; // x20
  _QWORD *v82; // x21
  __int64 v83; // x8
  __int64 v84; // x0
  __int64 v85; // x0
  unsigned int IsPreinstallTrackingEnabled_k__BackingField; // w8
  UnityEngine_AndroidJavaObject_o *v87; // x20
  _QWORD *v88; // x21
  __int64 v89; // x8
  __int64 v90; // x0
  __int64 v91; // x0
  unsigned int IsFirstSessionDelayEnabled_k__BackingField; // w8
  UnityEngine_AndroidJavaObject_o *v93; // x20
  _QWORD *v94; // x21
  __int64 v95; // x8
  __int64 v96; // x0
  __int64 v97; // x0
  UnityEngine_AndroidJavaObject_o *v98; // x20
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x21
  struct System_String_o *PreinstallFilePath_k__BackingField; // x22
  UnityEngine_AndroidJavaObject_o *v104; // x20
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x21
  struct System_String_o *FbAppId_k__BackingField; // x22
  UnityEngine_AndroidJavaObject_o *v110; // x20
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x21
  struct System_String_o *DefaultTracker_k__BackingField; // x22
  UnityEngine_AndroidJavaObject_o *v116; // x20
  __int64 v117; // x0
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x21
  struct System_String_o *ExternalDeviceId_k__BackingField; // x22
  System_Object_array *v122; // x20
  __int64 v123; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  Il2CppObject *v126; // x21
  UnityEngine_AndroidJavaObject_o *v127; // x21
  UnityEngine_AndroidJavaObject_o *v128; // x20
  __int64 v129; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x21
  UnityEngine_AndroidJavaObject_o *v133; // x22
  UnityEngine_AndroidJavaObject_o *v134; // x21
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v136; // x9
  int *p_offset; // x10
  __int64 v138; // x0
  _QWORD *v139; // x20
  __int64 v140; // x8
  __int64 v141; // x0
  __int64 v142; // x0
  System_Object_array *v143; // x20
  UnityEngine_AndroidJavaObject_o *v144; // x21
  __int64 v145; // x1
  __int64 v146; // x2
  System_Collections_Generic_List_object__o *UrlStrategyDomains_k__BackingField; // x0
  UnityEngine_AndroidJavaObject_o *v148; // x20
  Il2CppObject *current; // x22
  __int64 v150; // x0
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x21
  UnityEngine_AndroidJavaObject_o *v154; // x20
  __int64 v155; // x0
  __int64 v156; // x1
  __int64 v157; // x2
  System_Object_array *v158; // x21
  Il2CppObject *v159; // x22
  __int64 v160; // x0
  Il2CppObject *v161; // x22
  __int64 v162; // x0
  Il2CppObject *v163; // x22
  __int64 v164; // x0
  __int64 v165; // x1
  __int64 v166; // x2
  UnityEngine_AndroidJavaObject_o *v167; // x20
  UnityEngine_AndroidJavaObject_c *v168; // x8
  __int64 v169; // x9
  int *v170; // x10
  __int64 v171; // x0
  struct AdjustSdk_AdjustStoreInfo_o *StoreInfo_k__BackingField; // x8
  __int64 v173; // x0
  __int64 v174; // x1
  __int64 v175; // x2
  struct AdjustSdk_AdjustStoreInfo_o *v176; // x8
  __int64 v177; // x21
  struct System_String_o *StoreName_k__BackingField; // x20
  UnityEngine_AndroidJavaObject_o *v179; // x20
  __int64 v180; // x0
  __int64 v181; // x1
  __int64 v182; // x2
  struct AdjustSdk_AdjustStoreInfo_o *v183; // x8
  __int64 v184; // x0
  __int64 v185; // x1
  __int64 v186; // x2
  struct AdjustSdk_AdjustStoreInfo_o *v187; // x8
  __int64 v188; // x21
  struct System_String_o *StoreAppId_k__BackingField; // x22
  UnityEngine_AndroidJavaObject_o *v190; // x20
  __int64 v191; // x0
  __int64 v192; // x1
  __int64 v193; // x2
  __int64 v194; // x21
  UnityEngine_AndroidJavaObject_o *v195; // x22
  UnityEngine_AndroidJavaObject_o *v196; // x21
  UnityEngine_AndroidJavaObject_c *v197; // x8
  __int64 v198; // x9
  int *v199; // x10
  __int64 v200; // x0
  System_Action_AdjustAttribution__o *AttributionChangedDelegate_k__BackingField; // x21
  AdjustSdk_AdjustAndroid_AttributionChangedListener_o *v202; // x20
  const MethodInfo *v203; // x2
  __int64 v204; // x1
  __int64 v205; // x2
  AdjustSdk_AdjustAndroid_c *v206; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaObject_o *v208; // x20
  __int64 v209; // x0
  __int64 v210; // x1
  __int64 v211; // x2
  __int64 v212; // x21
  struct AdjustSdk_AdjustAndroid_AttributionChangedListener_o *onAttributionChangedListener; // x22
  System_Action_AdjustEventSuccess__o *EventSuccessDelegate_k__BackingField; // x21
  AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *v215; // x20
  const MethodInfo *v216; // x2
  __int64 v217; // x1
  __int64 v218; // x2
  AdjustSdk_AdjustAndroid_c *v219; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v220; // x0
  UnityEngine_AndroidJavaObject_o *v221; // x20
  __int64 v222; // x0
  __int64 v223; // x1
  __int64 v224; // x2
  __int64 v225; // x21
  struct AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *onEventTrackingSucceededListener; // x22
  System_Action_AdjustEventFailure__o *EventFailureDelegate_k__BackingField; // x21
  AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *v228; // x20
  const MethodInfo *v229; // x2
  __int64 v230; // x1
  __int64 v231; // x2
  AdjustSdk_AdjustAndroid_c *v232; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v233; // x0
  UnityEngine_AndroidJavaObject_o *v234; // x20
  __int64 v235; // x0
  __int64 v236; // x1
  __int64 v237; // x2
  __int64 v238; // x21
  struct AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *onEventTrackingFailedListener; // x22
  System_Action_AdjustSessionSuccess__o *SessionSuccessDelegate_k__BackingField; // x21
  AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *v241; // x20
  const MethodInfo *v242; // x2
  __int64 v243; // x1
  __int64 v244; // x2
  AdjustSdk_AdjustAndroid_c *v245; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v246; // x0
  UnityEngine_AndroidJavaObject_o *v247; // x20
  __int64 v248; // x0
  __int64 v249; // x1
  __int64 v250; // x2
  __int64 v251; // x21
  struct AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *onSessionTrackingSucceededListener; // x22
  System_Action_AdjustSessionFailure__o *SessionFailureDelegate_k__BackingField; // x21
  AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *v254; // x20
  const MethodInfo *v255; // x2
  __int64 v256; // x1
  __int64 v257; // x2
  AdjustSdk_AdjustAndroid_c *v258; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v259; // x0
  UnityEngine_AndroidJavaObject_o *v260; // x20
  __int64 v261; // x0
  __int64 v262; // x1
  __int64 v263; // x2
  __int64 v264; // x21
  struct AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *onSessionTrackingFailedListener; // x22
  System_Action_string__o *DeferredDeeplinkDelegate_k__BackingField; // x20
  AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *v267; // x19
  const MethodInfo *v268; // x2
  __int64 v269; // x1
  __int64 v270; // x2
  AdjustSdk_AdjustAndroid_c *v271; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *v272; // x0
  UnityEngine_AndroidJavaObject_o *v273; // x19
  __int64 v274; // x0
  __int64 v275; // x1
  __int64 v276; // x2
  __int64 v277; // x20
  struct AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *onDeferredDeeplinkListener; // x21
  AdjustSdk_AdjustAndroid_c *v279; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v281; // x0
  __int64 v282; // x1
  __int64 v283; // x2
  __int64 v284; // x20
  UnityEngine_AndroidJavaObject_o *v285; // x21
  UnityEngine_AndroidJavaObject_o *v286; // x19
  UnityEngine_AndroidJavaObject_c *v287; // x8
  __int64 v288; // x9
  int *v289; // x10
  __int64 v290; // x0
  __int64 v291; // x0
  __int64 v292; // x0
  __int64 v293; // x0
  __int64 v294; // x0
  __int64 v295; // x0
  __int64 v296; // x0
  __int64 v297; // x0
  __int64 v298; // x0
  __int64 v299; // x0
  __int64 v300; // x0
  __int64 v301; // x0
  __int64 v302; // x0
  __int64 v303; // x0
  __int64 v304; // x0
  __int64 v305; // x0
  __int64 v306; // x0
  __int64 v307; // x0
  __int64 v308; // x0
  __int64 v309; // x0
  __int64 v310; // x0
  __int64 v311; // x0
  __int64 v312; // x0
  __int64 v313; // x0
  struct System_Nullable_bool__o IsDataResidency_k__BackingField; // [xsp+Ch] [xbp-E4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v315; // [xsp+10h] [xbp-E0h] BYREF
  __int64 v316; // [xsp+28h] [xbp-C8h]
  UnityEngine_AndroidJavaObject_o **v317; // [xsp+30h] [xbp-C0h]
  __int64 v318; // [xsp+38h] [xbp-B8h]
  UnityEngine_AndroidJavaObject_o **v319; // [xsp+40h] [xbp-B0h]
  UnityEngine_AndroidJavaObject_o *v320; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v321; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_AndroidJavaObject_o *v322; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_AndroidJavaObject_o *v323; // [xsp+70h] [xbp-80h] BYREF
  struct System_Nullable_AdjustLogLevel__o v324; // [xsp+78h] [xbp-78h] BYREF
  __int16 ShouldUseSubdomains_k__BackingField; // [xsp+84h] [xbp-6Ch] BYREF
  UnityEngine_AndroidJavaObject_o *v326; // [xsp+88h] [xbp-68h] BYREF

  v3 = adjustConfig;
  if ( (byte_5930439 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_bool____91478528);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_AttributionChangedListener_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_EventTrackingFailedListener_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_bool__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_AdjustLogLevel__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_AdjustLogLevel__get_Value__);
    sub_21FFC50(&Method_System_Nullable_bool__get_Value__);
    sub_21FFC50(&System_Nullable_bool__TypeInfo);
    sub_21FFC50(&System_Nullable_int__TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_TypeInfo);
    sub_21FFC50(&StringLiteral_24533/*"setOnDeferredDeeplinkResponseListener"*/);
    sub_21FFC50(&StringLiteral_19840/*"enableSendingInBackground"*/);
    sub_21FFC50(&StringLiteral_24511/*"setEventDeduplicationIdsMaxSize"*/);
    sub_21FFC50(&StringLiteral_19823/*"enableCoppaCompliance"*/);
    sub_21FFC50(&StringLiteral_24515/*"setFbAppId"*/);
    sub_21FFC50(&StringLiteral_24560/*"setStoreInfo"*/);
    sub_21FFC50(&StringLiteral_23928/*"production"*/);
    sub_21FFC50(&StringLiteral_18839/*"com.adjust.sdk.LogLevel"*/);
    sub_21FFC50(&StringLiteral_19836/*"enablePreinstallTracking"*/);
    sub_21FFC50(&StringLiteral_19834/*"enablePlayStoreKidsCompliance"*/);
    sub_21FFC50(&StringLiteral_19828/*"enableFirstSessionDelay"*/);
    sub_21FFC50(&StringLiteral_19826/*"enableDeviceIdsReadingOnce"*/);
    sub_21FFC50(&StringLiteral_24521/*"setLogLevel"*/);
    sub_21FFC50(&StringLiteral_19825/*"enableCostDataInAttribution"*/);
    sub_21FFC50(&StringLiteral_17313/*"add"*/);
    sub_21FFC50(&StringLiteral_24539/*"setPreinstallFilePath"*/);
    sub_21FFC50(&StringLiteral_18831/*"com.adjust.sdk.AdjustConfig"*/);
    sub_21FFC50(&StringLiteral_25682/*"unity5.4.2"*/);
    sub_21FFC50(&StringLiteral_24551/*"setSdkPrefix"*/);
    sub_21FFC50(&StringLiteral_24507/*"setDefaultTracker"*/);
    sub_21FFC50(&StringLiteral_24566/*"setUrlStrategy"*/);
    sub_21FFC50(&StringLiteral_18836/*"com.adjust.sdk.AdjustStoreInfo"*/);
    sub_21FFC50(&StringLiteral_24536/*"setOnSessionTrackingFailedListener"*/);
    sub_21FFC50(&StringLiteral_24535/*"setOnEventTrackingSucceededListener"*/);
    sub_21FFC50(&StringLiteral_21756/*"initSdk"*/);
    sub_21FFC50(&StringLiteral_13072/*"SUPPRESS"*/);
    sub_21FFC50(&StringLiteral_22070/*"java.util.ArrayList"*/);
    sub_21FFC50(&StringLiteral_24532/*"setOnAttributionChangedListener"*/);
    sub_21FFC50(&StringLiteral_24345/*"sandbox"*/);
    sub_21FFC50(&StringLiteral_24537/*"setOnSessionTrackingSucceededListener"*/);
    sub_21FFC50(&StringLiteral_22059/*"java.lang.Integer"*/);
    sub_21FFC50(&StringLiteral_24534/*"setOnEventTrackingFailedListener"*/);
    sub_21FFC50(&StringLiteral_24559/*"setStoreAppId"*/);
    adjustConfig = (AdjustSdk_AdjustConfig_o *)sub_21FFC50(&StringLiteral_24512/*"setExternalDeviceId"*/);
    byte_5930439 = 1;
  }
  v326 = 0;
  ShouldUseSubdomains_k__BackingField = 0;
  v323 = 0;
  v324 = 0;
  v322 = 0;
  memset(&v321, 0, sizeof(v321));
  v320 = 0;
  if ( !v3 )
    goto LABEL_333;
  v4 = &StringLiteral_23928/*"production"*/;
  AllowSuppressLogLevel_k__BackingField = v3->fields._AllowSuppressLogLevel_k__BackingField;
  if ( v3->fields._Environment_k__BackingField != 1 )
    v4 = (__int64 *)&StringLiteral_24345/*"sandbox"*/;
  v6 = *v4;
  ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._AllowSuppressLogLevel_k__BackingField;
  if ( AllowSuppressLogLevel_k__BackingField.fields.hasValue )
  {
    adjustConfig = (AdjustSdk_AdjustConfig_o *)sub_21FFD10(object___TypeInfo, 4);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    v8 = adjustConfig;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      adjustConfig = (AdjustSdk_AdjustConfig_o *)j_il2cpp_runtime_class_init_0(
                                                   AdjustSdk_AdjustAndroid_TypeInfo,
                                                   method,
                                                   v2);
      v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    if ( v8 )
    {
      ajoCurrentActivity = (struct System_String_o *)v7->static_fields->ajoCurrentActivity;
      if ( !ajoCurrentActivity || sub_21FFDA4(ajoCurrentActivity, v8->klass->_1.element_class) )
      {
        if ( !LODWORD(v8->fields._DefaultTracker_k__BackingField) )
          goto LABEL_331;
        v8->fields._ExternalDeviceId_k__BackingField = ajoCurrentActivity;
        sub_21FFBF4(&v8->fields._ExternalDeviceId_k__BackingField, ajoCurrentActivity);
        AppToken_k__BackingField = v3->fields._AppToken_k__BackingField;
        if ( !AppToken_k__BackingField || sub_21FFDA4(v3->fields._AppToken_k__BackingField, v8->klass->_1.element_class) )
        {
          if ( ((__int64)v8->fields._DefaultTracker_k__BackingField & 0xFFFFFFFE) == 0 )
            goto LABEL_331;
          *(_QWORD *)&v8->fields._IsCoppaComplianceEnabled_k__BackingField.fields.hasValue = AppToken_k__BackingField;
          sub_21FFBF4(&v8->fields._IsCoppaComplianceEnabled_k__BackingField, AppToken_k__BackingField);
          if ( !v6 || sub_21FFDA4(v6, v8->klass->_1.element_class) )
          {
            if ( LODWORD(v8->fields._DefaultTracker_k__BackingField) <= 2 )
              goto LABEL_331;
            *(_QWORD *)&v8->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField.fields.hasValue = v6;
            sub_21FFBF4(&v8->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField, v6);
            LOWORD(v315.fields._list) = v3->fields._AllowSuppressLogLevel_k__BackingField;
            v11 = j_il2cpp_value_box_0(System_Nullable_bool__TypeInfo, &v315);
            v6 = v11;
            if ( !v11 || sub_21FFDA4(v11, v8->klass->_1.element_class) )
            {
              if ( ((__int64)v8->fields._DefaultTracker_k__BackingField & 0xFFFFFFFC) != 0 )
              {
                *(_QWORD *)&v8->fields._IsDataResidency_k__BackingField.fields.hasValue = v6;
                p_IsDataResidency_k__BackingField = &v8->fields._IsDataResidency_k__BackingField;
                goto LABEL_36;
              }
LABEL_331:
              sub_21FFED4();
            }
          }
        }
      }
LABEL_332:
      v292 = sub_21FFEF0();
      sub_21FFD90(v292, 0);
    }
LABEL_333:
    sub_21FFECC(adjustConfig, method, v2);
  }
  adjustConfig = (AdjustSdk_AdjustConfig_o *)sub_21FFD10(object___TypeInfo, 3);
  v13 = AdjustSdk_AdjustAndroid_TypeInfo;
  v8 = adjustConfig;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    adjustConfig = (AdjustSdk_AdjustConfig_o *)j_il2cpp_runtime_class_init_0(
                                                 AdjustSdk_AdjustAndroid_TypeInfo,
                                                 method,
                                                 v2);
    v13 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_333;
  v14 = (struct System_String_o *)v13->static_fields->ajoCurrentActivity;
  if ( v14 && !sub_21FFDA4(v14, v8->klass->_1.element_class) )
    goto LABEL_332;
  if ( !LODWORD(v8->fields._DefaultTracker_k__BackingField) )
    goto LABEL_331;
  v8->fields._ExternalDeviceId_k__BackingField = v14;
  sub_21FFBF4(&v8->fields._ExternalDeviceId_k__BackingField, v14);
  v15 = v3->fields._AppToken_k__BackingField;
  if ( v15 )
  {
    if ( !sub_21FFDA4(v3->fields._AppToken_k__BackingField, v8->klass->_1.element_class) )
      goto LABEL_332;
  }
  if ( ((__int64)v8->fields._DefaultTracker_k__BackingField & 0xFFFFFFFE) == 0 )
    goto LABEL_331;
  *(_QWORD *)&v8->fields._IsCoppaComplianceEnabled_k__BackingField.fields.hasValue = v15;
  sub_21FFBF4(&v8->fields._IsCoppaComplianceEnabled_k__BackingField, v15);
  if ( v6 )
  {
    if ( !sub_21FFDA4(v6, v8->klass->_1.element_class) )
      goto LABEL_332;
  }
  if ( LODWORD(v8->fields._DefaultTracker_k__BackingField) <= 2 )
    goto LABEL_331;
  *(_QWORD *)&v8->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField.fields.hasValue = v6;
  p_IsDataResidency_k__BackingField = &v8->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField;
LABEL_36:
  sub_21FFBF4(p_IsDataResidency_k__BackingField, v6);
  v16 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(
    v16,
    (System_String_o *)StringLiteral_18831/*"com.adjust.sdk.AdjustConfig"*/,
    (System_Object_array *)v8,
    0);
  IsDeferredDeeplinkOpeningEnabled_k__BackingField = v3->fields._IsDeferredDeeplinkOpeningEnabled_k__BackingField;
  v326 = v16;
  v318 = 0;
  v319 = &v326;
  ShouldUseSubdomains_k__BackingField = (__int16)IsDeferredDeeplinkOpeningEnabled_k__BackingField;
  if ( IsDeferredDeeplinkOpeningEnabled_k__BackingField.fields.hasValue )
  {
    ShouldUseSubdomains_k__BackingField = (__int16)IsDeferredDeeplinkOpeningEnabled_k__BackingField;
    v18 = &ShouldUseSubdomains_k__BackingField;
    Value = System_Nullable_bool___get_Value(
              (System_Nullable_bool__o)v18,
              (const MethodInfo_45AC820 *)Method_System_Nullable_bool__get_Value__);
    v22 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v19, v20);
      v22 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v22->static_fields->isDeferredDeeplinkOpeningEnabled = Value;
  }
  LogLevel_k__BackingField = v3->fields._LogLevel_k__BackingField;
  v324 = LogLevel_k__BackingField;
  if ( LogLevel_k__BackingField.fields.hasValue )
  {
    v324 = LogLevel_k__BackingField;
    v24 = (System_Nullable_Int32Enum__o)&v324;
    v25 = System_Nullable_Int32Enum___get_Value(
            v24,
            (const MethodInfo_45B0578 *)Method_System_Nullable_AdjustLogLevel__get_Value__);
    v27 = AdjustSdk_AdjustLogLevelExtension__ToUppercaseString(v25, v26);
    if ( !v27 )
      sub_21FFECC(0, v28, v29);
    if ( System_String__Equals_75473208(v27, (System_String_o *)StringLiteral_13072/*"SUPPRESS"*/, 0) )
    {
      v30 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
      UnityEngine_AndroidJavaClass___ctor(v30, (System_String_o *)StringLiteral_18839/*"com.adjust.sdk.LogLevel"*/, 0);
      if ( !v30 )
        sub_21FFECC(v31, v32, v33);
      Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                        (UnityEngine_AndroidJavaObject_o *)v30,
                        (System_String_o *)StringLiteral_13072/*"SUPPRESS"*/,
                        (const MethodInfo_36D7798 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    }
    else
    {
      v35 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
      UnityEngine_AndroidJavaClass___ctor(v35, (System_String_o *)StringLiteral_18839/*"com.adjust.sdk.LogLevel"*/, 0);
      v324 = v3->fields._LogLevel_k__BackingField;
      v36 = (System_Nullable_Int32Enum__o)&v324;
      v37 = System_Nullable_Int32Enum___get_Value(
              v36,
              (const MethodInfo_45B0578 *)Method_System_Nullable_AdjustLogLevel__get_Value__);
      v39 = AdjustSdk_AdjustLogLevelExtension__ToUppercaseString(v37, v38);
      if ( !v35 )
        sub_21FFECC(v39, v39, v40);
      Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                        (UnityEngine_AndroidJavaObject_o *)v35,
                        v39,
                        (const MethodInfo_36D7798 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    }
    v41 = Static_object;
    if ( Static_object )
    {
      v42 = v326;
      v43 = sub_21FFD10(object___TypeInfo, 1);
      v46 = v43;
      if ( !v43 )
        goto LABEL_349;
      if ( !sub_21FFDA4(v41, *(_QWORD *)(*(_QWORD *)v43 + 64LL)) )
      {
        v295 = sub_21FFEF0();
        sub_21FFD90(v295, 0);
      }
      if ( !*(_DWORD *)(v46 + 24) )
        sub_21FFED4();
      *(_QWORD *)(v46 + 32) = v41;
      v43 = sub_21FFBF4(v46 + 32, v41);
      if ( !v42 )
LABEL_349:
        sub_21FFECC(v43, v44, v45);
      UnityEngine_AndroidJavaObject__Call(v42, (System_String_o *)StringLiteral_24521/*"setLogLevel"*/, (System_Object_array *)v46, 0);
    }
  }
  v47 = v326;
  v48 = sub_21FFD10(object___TypeInfo, 1);
  v51 = v48;
  if ( !v48 )
    goto LABEL_334;
  if ( StringLiteral_25682/*"unity5.4.2"*/ && !sub_21FFDA4(StringLiteral_25682/*"unity5.4.2"*/, *(_QWORD *)(*(_QWORD *)v48 + 64LL)) )
  {
    v293 = sub_21FFEF0();
    sub_21FFD90(v293, 0);
  }
  if ( !*(_DWORD *)(v51 + 24) )
    sub_21FFED4();
  v52 = StringLiteral_25682/*"unity5.4.2"*/;
  *(_QWORD *)(v51 + 32) = StringLiteral_25682/*"unity5.4.2"*/;
  v48 = sub_21FFBF4(v51 + 32, v52);
  if ( !v47 )
LABEL_334:
    sub_21FFECC(v48, v49, v50);
  UnityEngine_AndroidJavaObject__Call(v47, (System_String_o *)StringLiteral_24551/*"setSdkPrefix"*/, (System_Object_array *)v51, 0);
  IsDeviceIdsReadingOnceEnabled_k__BackingField = (unsigned __int16)v3->fields._IsDeviceIdsReadingOnceEnabled_k__BackingField;
  v56 = (unsigned __int8)*(_WORD *)&v3->fields._IsDeviceIdsReadingOnceEnabled_k__BackingField == 0;
  ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._IsDeviceIdsReadingOnceEnabled_k__BackingField;
  if ( !v56 )
  {
    ShouldUseSubdomains_k__BackingField = IsDeviceIdsReadingOnceEnabled_k__BackingField;
    if ( IsDeviceIdsReadingOnceEnabled_k__BackingField >= 0x100 )
    {
      v57 = v326;
      v58 = Method_System_Array_Empty_object___;
      v59 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v59 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v59 = v58[7];
      }
      v60 = *(_QWORD *)(v59 + 16);
      if ( (*(_WORD *)(v60 + 309) & 1) == 0 )
        v60 = sub_2237AF8();
      if ( !*(_DWORD *)(v60 + 228) )
        j_il2cpp_runtime_class_init_0(v60, v53, v54);
      v61 = *(_QWORD *)(v58[7] + 16LL);
      if ( (*(_WORD *)(v61 + 309) & 1) == 0 )
        v61 = sub_2237AF8();
      if ( !v57 )
        sub_21FFECC(v61, v53, v54);
      UnityEngine_AndroidJavaObject__Call(
        v57,
        (System_String_o *)StringLiteral_19826/*"enableDeviceIdsReadingOnce"*/,
        **(System_Object_array ***)(v61 + 184),
        0);
    }
  }
  IsCoppaComplianceEnabled_k__BackingField = (unsigned __int16)v3->fields._IsCoppaComplianceEnabled_k__BackingField;
  v56 = (unsigned __int8)*(_WORD *)&v3->fields._IsCoppaComplianceEnabled_k__BackingField == 0;
  ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._IsCoppaComplianceEnabled_k__BackingField;
  if ( !v56 )
  {
    ShouldUseSubdomains_k__BackingField = IsCoppaComplianceEnabled_k__BackingField;
    if ( IsCoppaComplianceEnabled_k__BackingField >= 0x100 )
    {
      v63 = v326;
      v64 = Method_System_Array_Empty_object___;
      v65 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v65 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v65 = v64[7];
      }
      v66 = *(_QWORD *)(v65 + 16);
      if ( (*(_WORD *)(v66 + 309) & 1) == 0 )
        v66 = sub_2237AF8();
      if ( !*(_DWORD *)(v66 + 228) )
        j_il2cpp_runtime_class_init_0(v66, v53, v54);
      v67 = *(_QWORD *)(v64[7] + 16LL);
      if ( (*(_WORD *)(v67 + 309) & 1) == 0 )
        v67 = sub_2237AF8();
      if ( !v63 )
        sub_21FFECC(v67, v53, v54);
      UnityEngine_AndroidJavaObject__Call(
        v63,
        (System_String_o *)StringLiteral_19823/*"enableCoppaCompliance"*/,
        **(System_Object_array ***)(v67 + 184),
        0);
    }
  }
  IsPlayStoreKidsComplianceEnabled_k__BackingField = (unsigned __int16)v3->fields._IsPlayStoreKidsComplianceEnabled_k__BackingField;
  v56 = (unsigned __int8)*(_WORD *)&v3->fields._IsPlayStoreKidsComplianceEnabled_k__BackingField == 0;
  ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._IsPlayStoreKidsComplianceEnabled_k__BackingField;
  if ( !v56 )
  {
    ShouldUseSubdomains_k__BackingField = IsPlayStoreKidsComplianceEnabled_k__BackingField;
    if ( IsPlayStoreKidsComplianceEnabled_k__BackingField >= 0x100 )
    {
      v69 = v326;
      v70 = Method_System_Array_Empty_object___;
      v71 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v71 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v71 = v70[7];
      }
      v72 = *(_QWORD *)(v71 + 16);
      if ( (*(_WORD *)(v72 + 309) & 1) == 0 )
        v72 = sub_2237AF8();
      if ( !*(_DWORD *)(v72 + 228) )
        j_il2cpp_runtime_class_init_0(v72, v53, v54);
      v73 = *(_QWORD *)(v70[7] + 16LL);
      if ( (*(_WORD *)(v73 + 309) & 1) == 0 )
        v73 = sub_2237AF8();
      if ( !v69 )
        sub_21FFECC(v73, v53, v54);
      UnityEngine_AndroidJavaObject__Call(
        v69,
        (System_String_o *)StringLiteral_19834/*"enablePlayStoreKidsCompliance"*/,
        **(System_Object_array ***)(v73 + 184),
        0);
    }
  }
  IsSendingInBackgroundEnabled_k__BackingField = (unsigned __int16)v3->fields._IsSendingInBackgroundEnabled_k__BackingField;
  v56 = (unsigned __int8)*(_WORD *)&v3->fields._IsSendingInBackgroundEnabled_k__BackingField == 0;
  ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._IsSendingInBackgroundEnabled_k__BackingField;
  if ( !v56 )
  {
    ShouldUseSubdomains_k__BackingField = IsSendingInBackgroundEnabled_k__BackingField;
    if ( IsSendingInBackgroundEnabled_k__BackingField >= 0x100 )
    {
      v75 = v326;
      v76 = Method_System_Array_Empty_object___;
      v77 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v77 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v77 = v76[7];
      }
      v78 = *(_QWORD *)(v77 + 16);
      if ( (*(_WORD *)(v78 + 309) & 1) == 0 )
        v78 = sub_2237AF8();
      if ( !*(_DWORD *)(v78 + 228) )
        j_il2cpp_runtime_class_init_0(v78, v53, v54);
      v79 = *(_QWORD *)(v76[7] + 16LL);
      if ( (*(_WORD *)(v79 + 309) & 1) == 0 )
        v79 = sub_2237AF8();
      if ( !v75 )
        sub_21FFECC(v79, v53, v54);
      UnityEngine_AndroidJavaObject__Call(
        v75,
        (System_String_o *)StringLiteral_19840/*"enableSendingInBackground"*/,
        **(System_Object_array ***)(v79 + 184),
        0);
    }
  }
  IsCostDataInAttributionEnabled_k__BackingField = (unsigned __int16)v3->fields._IsCostDataInAttributionEnabled_k__BackingField;
  v56 = (unsigned __int8)*(_WORD *)&v3->fields._IsCostDataInAttributionEnabled_k__BackingField == 0;
  ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._IsCostDataInAttributionEnabled_k__BackingField;
  if ( !v56 )
  {
    ShouldUseSubdomains_k__BackingField = IsCostDataInAttributionEnabled_k__BackingField;
    if ( IsCostDataInAttributionEnabled_k__BackingField >= 0x100 )
    {
      v81 = v326;
      v82 = Method_System_Array_Empty_object___;
      v83 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v83 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v83 = v82[7];
      }
      v84 = *(_QWORD *)(v83 + 16);
      if ( (*(_WORD *)(v84 + 309) & 1) == 0 )
        v84 = sub_2237AF8();
      if ( !*(_DWORD *)(v84 + 228) )
        j_il2cpp_runtime_class_init_0(v84, v53, v54);
      v85 = *(_QWORD *)(v82[7] + 16LL);
      if ( (*(_WORD *)(v85 + 309) & 1) == 0 )
        v85 = sub_2237AF8();
      if ( !v81 )
        sub_21FFECC(v85, v53, v54);
      UnityEngine_AndroidJavaObject__Call(
        v81,
        (System_String_o *)StringLiteral_19825/*"enableCostDataInAttribution"*/,
        **(System_Object_array ***)(v85 + 184),
        0);
    }
  }
  IsPreinstallTrackingEnabled_k__BackingField = (unsigned __int16)v3->fields._IsPreinstallTrackingEnabled_k__BackingField;
  v56 = (unsigned __int8)*(_WORD *)&v3->fields._IsPreinstallTrackingEnabled_k__BackingField == 0;
  ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._IsPreinstallTrackingEnabled_k__BackingField;
  if ( !v56 )
  {
    ShouldUseSubdomains_k__BackingField = IsPreinstallTrackingEnabled_k__BackingField;
    if ( IsPreinstallTrackingEnabled_k__BackingField >= 0x100 )
    {
      v87 = v326;
      v88 = Method_System_Array_Empty_object___;
      v89 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v89 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v89 = v88[7];
      }
      v90 = *(_QWORD *)(v89 + 16);
      if ( (*(_WORD *)(v90 + 309) & 1) == 0 )
        v90 = sub_2237AF8();
      if ( !*(_DWORD *)(v90 + 228) )
        j_il2cpp_runtime_class_init_0(v90, v53, v54);
      v91 = *(_QWORD *)(v88[7] + 16LL);
      if ( (*(_WORD *)(v91 + 309) & 1) == 0 )
        v91 = sub_2237AF8();
      if ( !v87 )
        sub_21FFECC(v91, v53, v54);
      UnityEngine_AndroidJavaObject__Call(
        v87,
        (System_String_o *)StringLiteral_19836/*"enablePreinstallTracking"*/,
        **(System_Object_array ***)(v91 + 184),
        0);
    }
  }
  IsFirstSessionDelayEnabled_k__BackingField = (unsigned __int16)v3->fields._IsFirstSessionDelayEnabled_k__BackingField;
  v56 = (unsigned __int8)*(_WORD *)&v3->fields._IsFirstSessionDelayEnabled_k__BackingField == 0;
  ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._IsFirstSessionDelayEnabled_k__BackingField;
  if ( !v56 )
  {
    ShouldUseSubdomains_k__BackingField = IsFirstSessionDelayEnabled_k__BackingField;
    if ( IsFirstSessionDelayEnabled_k__BackingField >= 0x100 )
    {
      v93 = v326;
      v94 = Method_System_Array_Empty_object___;
      v95 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v95 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v95 = v94[7];
      }
      v96 = *(_QWORD *)(v95 + 16);
      if ( (*(_WORD *)(v96 + 309) & 1) == 0 )
        v96 = sub_2237AF8();
      if ( !*(_DWORD *)(v96 + 228) )
        j_il2cpp_runtime_class_init_0(v96, v53, v54);
      v97 = *(_QWORD *)(v94[7] + 16LL);
      if ( (*(_WORD *)(v97 + 309) & 1) == 0 )
        v97 = sub_2237AF8();
      if ( !v93 )
        sub_21FFECC(v97, v53, v54);
      UnityEngine_AndroidJavaObject__Call(
        v93,
        (System_String_o *)StringLiteral_19828/*"enableFirstSessionDelay"*/,
        **(System_Object_array ***)(v97 + 184),
        0);
    }
  }
  if ( v3->fields._PreinstallFilePath_k__BackingField )
  {
    v98 = v326;
    v99 = sub_21FFD10(object___TypeInfo, 1);
    v102 = v99;
    if ( !v99 )
      goto LABEL_336;
    PreinstallFilePath_k__BackingField = v3->fields._PreinstallFilePath_k__BackingField;
    if ( PreinstallFilePath_k__BackingField
      && !sub_21FFDA4(v3->fields._PreinstallFilePath_k__BackingField, *(_QWORD *)(*(_QWORD *)v99 + 64LL)) )
    {
      v296 = sub_21FFEF0();
      sub_21FFD90(v296, 0);
    }
    if ( !*(_DWORD *)(v102 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v102 + 32) = PreinstallFilePath_k__BackingField;
    v99 = sub_21FFBF4(v102 + 32, PreinstallFilePath_k__BackingField);
    if ( !v98 )
LABEL_336:
      sub_21FFECC(v99, v100, v101);
    UnityEngine_AndroidJavaObject__Call(v98, (System_String_o *)StringLiteral_24539/*"setPreinstallFilePath"*/, (System_Object_array *)v102, 0);
  }
  if ( v3->fields._FbAppId_k__BackingField )
  {
    v104 = v326;
    v105 = sub_21FFD10(object___TypeInfo, 1);
    v108 = v105;
    if ( !v105 )
      goto LABEL_337;
    FbAppId_k__BackingField = v3->fields._FbAppId_k__BackingField;
    if ( FbAppId_k__BackingField
      && !sub_21FFDA4(v3->fields._FbAppId_k__BackingField, *(_QWORD *)(*(_QWORD *)v105 + 64LL)) )
    {
      v297 = sub_21FFEF0();
      sub_21FFD90(v297, 0);
    }
    if ( !*(_DWORD *)(v108 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v108 + 32) = FbAppId_k__BackingField;
    v105 = sub_21FFBF4(v108 + 32, FbAppId_k__BackingField);
    if ( !v104 )
LABEL_337:
      sub_21FFECC(v105, v106, v107);
    UnityEngine_AndroidJavaObject__Call(v104, (System_String_o *)StringLiteral_24515/*"setFbAppId"*/, (System_Object_array *)v108, 0);
  }
  if ( v3->fields._DefaultTracker_k__BackingField )
  {
    v110 = v326;
    v111 = sub_21FFD10(object___TypeInfo, 1);
    v114 = v111;
    if ( !v111 )
      goto LABEL_338;
    DefaultTracker_k__BackingField = v3->fields._DefaultTracker_k__BackingField;
    if ( DefaultTracker_k__BackingField
      && !sub_21FFDA4(v3->fields._DefaultTracker_k__BackingField, *(_QWORD *)(*(_QWORD *)v111 + 64LL)) )
    {
      v298 = sub_21FFEF0();
      sub_21FFD90(v298, 0);
    }
    if ( !*(_DWORD *)(v114 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v114 + 32) = DefaultTracker_k__BackingField;
    v111 = sub_21FFBF4(v114 + 32, DefaultTracker_k__BackingField);
    if ( !v110 )
LABEL_338:
      sub_21FFECC(v111, v112, v113);
    UnityEngine_AndroidJavaObject__Call(v110, (System_String_o *)StringLiteral_24507/*"setDefaultTracker"*/, (System_Object_array *)v114, 0);
  }
  if ( v3->fields._ExternalDeviceId_k__BackingField )
  {
    v116 = v326;
    v117 = sub_21FFD10(object___TypeInfo, 1);
    v120 = v117;
    if ( !v117 )
      goto LABEL_339;
    ExternalDeviceId_k__BackingField = v3->fields._ExternalDeviceId_k__BackingField;
    if ( ExternalDeviceId_k__BackingField
      && !sub_21FFDA4(v3->fields._ExternalDeviceId_k__BackingField, *(_QWORD *)(*(_QWORD *)v117 + 64LL)) )
    {
      v299 = sub_21FFEF0();
      sub_21FFD90(v299, 0);
    }
    if ( !*(_DWORD *)(v120 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v120 + 32) = ExternalDeviceId_k__BackingField;
    v117 = sub_21FFBF4(v120 + 32, ExternalDeviceId_k__BackingField);
    if ( !v116 )
LABEL_339:
      sub_21FFECC(v117, v118, v119);
    UnityEngine_AndroidJavaObject__Call(v116, (System_String_o *)StringLiteral_24512/*"setExternalDeviceId"*/, (System_Object_array *)v120, 0);
  }
  if ( v3->fields._EventDeduplicationIdsMaxSize_k__BackingField.fields.hasValue )
  {
    v122 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    v315.fields._list = (struct System_Collections_Generic_List_T__o *)v3->fields._EventDeduplicationIdsMaxSize_k__BackingField;
    v123 = j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &v315);
    if ( !v122 )
      sub_21FFECC(v123, v124, v125);
    v126 = (Il2CppObject *)v123;
    if ( v123 && !sub_21FFDA4(v123, v122->obj.klass->_1.element_class) )
    {
      v300 = sub_21FFEF0();
      sub_21FFD90(v300, 0);
    }
    if ( !LODWORD(v122->max_length) )
      sub_21FFED4();
    v122->m_Items[0] = v126;
    sub_21FFBF4(v122->m_Items, v126);
    v127 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v127, (System_String_o *)StringLiteral_22059/*"java.lang.Integer"*/, v122, 0);
    v128 = v326;
    v323 = v127;
    v315.fields._list = 0;
    *(_QWORD *)&v315.fields._index = &v323;
    v129 = sub_21FFD10(object___TypeInfo, 1);
    v132 = v129;
    if ( !v129 )
      goto LABEL_340;
    v133 = v323;
    if ( v323 && !sub_21FFDA4(v323, *(_QWORD *)(*(_QWORD *)v129 + 64LL)) )
    {
      v301 = sub_21FFEF0();
      sub_21FFD90(v301, 0);
    }
    if ( !*(_DWORD *)(v132 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v132 + 32) = v133;
    v129 = sub_21FFBF4(v132 + 32, v133);
    if ( !v128 )
LABEL_340:
      sub_21FFECC(v129, v130, v131);
    UnityEngine_AndroidJavaObject__Call(v128, (System_String_o *)StringLiteral_24511/*"setEventDeduplicationIdsMaxSize"*/, (System_Object_array *)v132, 0);
    v134 = v323;
    if ( v323 )
    {
      klass = v323->klass;
      v136 = *(unsigned __int16 *)&v323->klass->_2.rank;
      if ( *(_WORD *)&v323->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v136;
          p_offset += 4;
          if ( !v136 )
            goto LABEL_185;
        }
        v138 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_185:
        v138 = sub_2237E2C(v323, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v138)(v134, *(_QWORD *)(v138 + 8));
    }
  }
  if ( v3->fields._UrlStrategyDomains_k__BackingField )
  {
    v56 = (unsigned __int8)*(_WORD *)&v3->fields._ShouldUseSubdomains_k__BackingField == 0;
    ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._ShouldUseSubdomains_k__BackingField;
    if ( !v56 )
    {
      v56 = (unsigned __int8)*(_WORD *)&v3->fields._IsDataResidency_k__BackingField == 0;
      ShouldUseSubdomains_k__BackingField = (__int16)v3->fields._IsDataResidency_k__BackingField;
      if ( !v56 )
      {
        v139 = Method_System_Array_Empty_object___;
        v140 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v140 )
        {
          sub_2237B54(Method_System_Array_Empty_object___);
          v140 = v139[7];
        }
        v141 = *(_QWORD *)(v140 + 16);
        if ( (*(_WORD *)(v141 + 309) & 1) == 0 )
          v141 = sub_2237AF8();
        if ( !*(_DWORD *)(v141 + 228) )
          j_il2cpp_runtime_class_init_0(v141, v53, v54);
        v142 = *(_QWORD *)(v139[7] + 16LL);
        if ( (*(_WORD *)(v142 + 309) & 1) == 0 )
          v142 = sub_2237AF8();
        v143 = **(System_Object_array ***)(v142 + 184);
        v144 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
        UnityEngine_AndroidJavaObject___ctor_82839756(v144, (System_String_o *)StringLiteral_22070/*"java.util.ArrayList"*/, v143, 0);
        UrlStrategyDomains_k__BackingField = (System_Collections_Generic_List_object__o *)v3->fields._UrlStrategyDomains_k__BackingField;
        v322 = v144;
        v316 = 0;
        v317 = &v322;
        if ( !UrlStrategyDomains_k__BackingField )
          sub_21FFECC(0, v145, v146);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v315,
          UrlStrategyDomains_k__BackingField,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v321 = v315;
        v315.fields._list = 0;
        *(_QWORD *)&v315.fields._index = &v321;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v321,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          current = v321.fields._current;
          v148 = v322;
          v150 = sub_21FFD10(object___TypeInfo, 1);
          v153 = v150;
          if ( !v150 )
            goto LABEL_328;
          if ( current && !sub_21FFDA4(current, *(_QWORD *)(*(_QWORD *)v150 + 64LL)) )
          {
            v291 = sub_21FFEF0();
            sub_21FFD90(v291, 0);
          }
          if ( !*(_DWORD *)(v153 + 24) )
            sub_21FFED4();
          *(_QWORD *)(v153 + 32) = current;
          v150 = sub_21FFBF4(v153 + 32, current);
          if ( !v148 )
LABEL_328:
            sub_21FFECC(v150, v151, v152);
          UnityEngine_AndroidJavaObject__Call_bool_(
            v148,
            (System_String_o *)StringLiteral_17313/*"add"*/,
            (System_Object_array *)v153,
            (const MethodInfo_36D5468 *)Method_UnityEngine_AndroidJavaObject_Call_bool____91478528);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v321,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        v154 = v326;
        v155 = sub_21FFD10(object___TypeInfo, 3);
        v158 = (System_Object_array *)v155;
        if ( !v155 )
          sub_21FFECC(0, v156, v157);
        v159 = (Il2CppObject *)v322;
        if ( v322 && !sub_21FFDA4(v322, *(_QWORD *)(*(_QWORD *)v155 + 64LL)) )
        {
          v311 = sub_21FFEF0();
          sub_21FFD90(v311, 0);
        }
        if ( !LODWORD(v158->max_length) )
          sub_21FFED4();
        v158->m_Items[0] = v159;
        sub_21FFBF4(v158->m_Items, v159);
        LOWORD(v315.fields._list) = v3->fields._ShouldUseSubdomains_k__BackingField;
        v160 = j_il2cpp_value_box_0(System_Nullable_bool__TypeInfo, &v315);
        v161 = (Il2CppObject *)v160;
        if ( v160 && !sub_21FFDA4(v160, v158->obj.klass->_1.element_class) )
        {
          v312 = sub_21FFEF0();
          sub_21FFD90(v312, 0);
        }
        if ( (v158->max_length & 0xFFFFFFFE) == 0 )
          sub_21FFED4();
        v158->m_Items[1] = v161;
        sub_21FFBF4(&v158->m_Items[1], v161);
        IsDataResidency_k__BackingField = v3->fields._IsDataResidency_k__BackingField;
        v162 = j_il2cpp_value_box_0(System_Nullable_bool__TypeInfo, &IsDataResidency_k__BackingField);
        v163 = (Il2CppObject *)v162;
        if ( v162 && !sub_21FFDA4(v162, v158->obj.klass->_1.element_class) )
        {
          v313 = sub_21FFEF0();
          sub_21FFD90(v313, 0);
        }
        if ( LODWORD(v158->max_length) <= 2 )
          sub_21FFED4();
        v158->m_Items[2] = v163;
        v164 = sub_21FFBF4(&v158->m_Items[2], v163);
        if ( !v154 )
          sub_21FFECC(v164, v165, v166);
        UnityEngine_AndroidJavaObject__Call(v154, (System_String_o *)StringLiteral_24566/*"setUrlStrategy"*/, v158, 0);
        v167 = *v317;
        if ( *v317 )
        {
          v168 = v167->klass;
          v169 = *(unsigned __int16 *)&v167->klass->_2.rank;
          if ( *(_WORD *)&v167->klass->_2.rank )
          {
            v170 = &v168->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v170 - 1) != System_IDisposable_TypeInfo )
            {
              --v169;
              v170 += 4;
              if ( !v169 )
                goto LABEL_224;
            }
            v171 = (__int64)&v168->vtable + 16 * *v170;
          }
          else
          {
LABEL_224:
            v171 = sub_2237E2C(*v317, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v171)(v167, *(_QWORD *)(v171 + 8));
        }
        if ( v316 )
          sub_21FFEC4(v316);
      }
    }
  }
  StoreInfo_k__BackingField = v3->fields._StoreInfo_k__BackingField;
  if ( StoreInfo_k__BackingField && StoreInfo_k__BackingField->fields._StoreName_k__BackingField )
  {
    v173 = sub_21FFD10(object___TypeInfo, 1);
    v176 = v3->fields._StoreInfo_k__BackingField;
    if ( !v176 )
      sub_21FFECC(v173, v174, v175);
    v177 = v173;
    if ( !v173 )
      sub_21FFECC(0, v174, v175);
    StoreName_k__BackingField = v176->fields._StoreName_k__BackingField;
    if ( StoreName_k__BackingField && !sub_21FFDA4(StoreName_k__BackingField, *(_QWORD *)(*(_QWORD *)v173 + 64LL)) )
    {
      v308 = sub_21FFEF0();
      sub_21FFD90(v308, 0);
    }
    if ( !*(_DWORD *)(v177 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v177 + 32) = StoreName_k__BackingField;
    sub_21FFBF4(v177 + 32, StoreName_k__BackingField);
    v179 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(
      v179,
      (System_String_o *)StringLiteral_18836/*"com.adjust.sdk.AdjustStoreInfo"*/,
      (System_Object_array *)v177,
      0);
    v183 = v3->fields._StoreInfo_k__BackingField;
    v320 = v179;
    v315.fields._list = 0;
    *(_QWORD *)&v315.fields._index = &v320;
    if ( !v183 )
      sub_21FFECC(v180, v181, v182);
    if ( v183->fields._StoreAppId_k__BackingField )
    {
      v184 = sub_21FFD10(object___TypeInfo, 1);
      v187 = v3->fields._StoreInfo_k__BackingField;
      if ( !v187 )
        sub_21FFECC(v184, v185, v186);
      v188 = v184;
      if ( !v184 )
        goto LABEL_376;
      StoreAppId_k__BackingField = v187->fields._StoreAppId_k__BackingField;
      if ( StoreAppId_k__BackingField && !sub_21FFDA4(StoreAppId_k__BackingField, *(_QWORD *)(*(_QWORD *)v184 + 64LL)) )
      {
        v310 = sub_21FFEF0();
        sub_21FFD90(v310, 0);
      }
      if ( !*(_DWORD *)(v188 + 24) )
        sub_21FFED4();
      *(_QWORD *)(v188 + 32) = StoreAppId_k__BackingField;
      v184 = sub_21FFBF4(v188 + 32, StoreAppId_k__BackingField);
      if ( !v179 )
LABEL_376:
        sub_21FFECC(v184, v185, v186);
      UnityEngine_AndroidJavaObject__Call(v179, (System_String_o *)StringLiteral_24559/*"setStoreAppId"*/, (System_Object_array *)v188, 0);
    }
    v190 = v326;
    v191 = sub_21FFD10(object___TypeInfo, 1);
    v194 = v191;
    if ( !v191 )
      goto LABEL_360;
    v195 = v320;
    if ( v320 && !sub_21FFDA4(v320, *(_QWORD *)(*(_QWORD *)v191 + 64LL)) )
    {
      v309 = sub_21FFEF0();
      sub_21FFD90(v309, 0);
    }
    if ( !*(_DWORD *)(v194 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v194 + 32) = v195;
    v191 = sub_21FFBF4(v194 + 32, v195);
    if ( !v190 )
LABEL_360:
      sub_21FFECC(v191, v192, v193);
    UnityEngine_AndroidJavaObject__Call(v190, (System_String_o *)StringLiteral_24560/*"setStoreInfo"*/, (System_Object_array *)v194, 0);
    v196 = v320;
    if ( v320 )
    {
      v197 = v320->klass;
      v198 = *(unsigned __int16 *)&v320->klass->_2.rank;
      if ( *(_WORD *)&v320->klass->_2.rank )
      {
        v199 = &v197->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v199 - 1) != System_IDisposable_TypeInfo )
        {
          --v198;
          v199 += 4;
          if ( !v198 )
            goto LABEL_254;
        }
        v200 = (__int64)&v197->vtable + 16 * *v199;
      }
      else
      {
LABEL_254:
        v200 = sub_2237E2C(v320, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v200)(v196, *(_QWORD *)(v200 + 8));
    }
  }
  AttributionChangedDelegate_k__BackingField = v3->fields._AttributionChangedDelegate_k__BackingField;
  if ( AttributionChangedDelegate_k__BackingField )
  {
    v202 = (AdjustSdk_AdjustAndroid_AttributionChangedListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_AttributionChangedListener_TypeInfo);
    AdjustSdk_AdjustAndroid_AttributionChangedListener___ctor(v202, AttributionChangedDelegate_k__BackingField, v203);
    v206 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v204, v205);
      v206 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v206->static_fields;
    static_fields->onAttributionChangedListener = v202;
    sub_21FFBF4(&static_fields->onAttributionChangedListener, v202);
    v208 = v326;
    v209 = sub_21FFD10(object___TypeInfo, 1);
    v212 = v209;
    if ( !v209 )
      goto LABEL_343;
    onAttributionChangedListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onAttributionChangedListener;
    if ( onAttributionChangedListener && !sub_21FFDA4(onAttributionChangedListener, *(_QWORD *)(*(_QWORD *)v209 + 64LL)) )
    {
      v302 = sub_21FFEF0();
      sub_21FFD90(v302, 0);
    }
    if ( !*(_DWORD *)(v212 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v212 + 32) = onAttributionChangedListener;
    v209 = sub_21FFBF4(v212 + 32, onAttributionChangedListener);
    if ( !v208 )
LABEL_343:
      sub_21FFECC(v209, v210, v211);
    UnityEngine_AndroidJavaObject__Call(v208, (System_String_o *)StringLiteral_24532/*"setOnAttributionChangedListener"*/, (System_Object_array *)v212, 0);
  }
  EventSuccessDelegate_k__BackingField = v3->fields._EventSuccessDelegate_k__BackingField;
  if ( EventSuccessDelegate_k__BackingField )
  {
    v215 = (AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_TypeInfo);
    AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___ctor(v215, EventSuccessDelegate_k__BackingField, v216);
    v219 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v217, v218);
      v219 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v220 = v219->static_fields;
    v220->onEventTrackingSucceededListener = v215;
    sub_21FFBF4(&v220->onEventTrackingSucceededListener, v215);
    v221 = v326;
    v222 = sub_21FFD10(object___TypeInfo, 1);
    v225 = v222;
    if ( !v222 )
      goto LABEL_344;
    onEventTrackingSucceededListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onEventTrackingSucceededListener;
    if ( onEventTrackingSucceededListener
      && !sub_21FFDA4(onEventTrackingSucceededListener, *(_QWORD *)(*(_QWORD *)v222 + 64LL)) )
    {
      v303 = sub_21FFEF0();
      sub_21FFD90(v303, 0);
    }
    if ( !*(_DWORD *)(v225 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v225 + 32) = onEventTrackingSucceededListener;
    v222 = sub_21FFBF4(v225 + 32, onEventTrackingSucceededListener);
    if ( !v221 )
LABEL_344:
      sub_21FFECC(v222, v223, v224);
    UnityEngine_AndroidJavaObject__Call(v221, (System_String_o *)StringLiteral_24535/*"setOnEventTrackingSucceededListener"*/, (System_Object_array *)v225, 0);
  }
  EventFailureDelegate_k__BackingField = v3->fields._EventFailureDelegate_k__BackingField;
  if ( EventFailureDelegate_k__BackingField )
  {
    v228 = (AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_EventTrackingFailedListener_TypeInfo);
    AdjustSdk_AdjustAndroid_EventTrackingFailedListener___ctor(v228, EventFailureDelegate_k__BackingField, v229);
    v232 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v230, v231);
      v232 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v233 = v232->static_fields;
    v233->onEventTrackingFailedListener = v228;
    sub_21FFBF4(&v233->onEventTrackingFailedListener, v228);
    v234 = v326;
    v235 = sub_21FFD10(object___TypeInfo, 1);
    v238 = v235;
    if ( !v235 )
      goto LABEL_345;
    onEventTrackingFailedListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onEventTrackingFailedListener;
    if ( onEventTrackingFailedListener
      && !sub_21FFDA4(onEventTrackingFailedListener, *(_QWORD *)(*(_QWORD *)v235 + 64LL)) )
    {
      v304 = sub_21FFEF0();
      sub_21FFD90(v304, 0);
    }
    if ( !*(_DWORD *)(v238 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v238 + 32) = onEventTrackingFailedListener;
    v235 = sub_21FFBF4(v238 + 32, onEventTrackingFailedListener);
    if ( !v234 )
LABEL_345:
      sub_21FFECC(v235, v236, v237);
    UnityEngine_AndroidJavaObject__Call(v234, (System_String_o *)StringLiteral_24534/*"setOnEventTrackingFailedListener"*/, (System_Object_array *)v238, 0);
  }
  SessionSuccessDelegate_k__BackingField = v3->fields._SessionSuccessDelegate_k__BackingField;
  if ( SessionSuccessDelegate_k__BackingField )
  {
    v241 = (AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_TypeInfo);
    AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___ctor(v241, SessionSuccessDelegate_k__BackingField, v242);
    v245 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v243, v244);
      v245 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v246 = v245->static_fields;
    v246->onSessionTrackingSucceededListener = v241;
    sub_21FFBF4(&v246->onSessionTrackingSucceededListener, v241);
    v247 = v326;
    v248 = sub_21FFD10(object___TypeInfo, 1);
    v251 = v248;
    if ( !v248 )
      goto LABEL_346;
    onSessionTrackingSucceededListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onSessionTrackingSucceededListener;
    if ( onSessionTrackingSucceededListener
      && !sub_21FFDA4(onSessionTrackingSucceededListener, *(_QWORD *)(*(_QWORD *)v248 + 64LL)) )
    {
      v305 = sub_21FFEF0();
      sub_21FFD90(v305, 0);
    }
    if ( !*(_DWORD *)(v251 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v251 + 32) = onSessionTrackingSucceededListener;
    v248 = sub_21FFBF4(v251 + 32, onSessionTrackingSucceededListener);
    if ( !v247 )
LABEL_346:
      sub_21FFECC(v248, v249, v250);
    UnityEngine_AndroidJavaObject__Call(v247, (System_String_o *)StringLiteral_24537/*"setOnSessionTrackingSucceededListener"*/, (System_Object_array *)v251, 0);
  }
  SessionFailureDelegate_k__BackingField = v3->fields._SessionFailureDelegate_k__BackingField;
  if ( SessionFailureDelegate_k__BackingField )
  {
    v254 = (AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_TypeInfo);
    AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___ctor(v254, SessionFailureDelegate_k__BackingField, v255);
    v258 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v256, v257);
      v258 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v259 = v258->static_fields;
    v259->onSessionTrackingFailedListener = v254;
    sub_21FFBF4(&v259->onSessionTrackingFailedListener, v254);
    v260 = v326;
    v261 = sub_21FFD10(object___TypeInfo, 1);
    v264 = v261;
    if ( !v261 )
      goto LABEL_347;
    onSessionTrackingFailedListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onSessionTrackingFailedListener;
    if ( onSessionTrackingFailedListener
      && !sub_21FFDA4(onSessionTrackingFailedListener, *(_QWORD *)(*(_QWORD *)v261 + 64LL)) )
    {
      v306 = sub_21FFEF0();
      sub_21FFD90(v306, 0);
    }
    if ( !*(_DWORD *)(v264 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v264 + 32) = onSessionTrackingFailedListener;
    v261 = sub_21FFBF4(v264 + 32, onSessionTrackingFailedListener);
    if ( !v260 )
LABEL_347:
      sub_21FFECC(v261, v262, v263);
    UnityEngine_AndroidJavaObject__Call(v260, (System_String_o *)StringLiteral_24536/*"setOnSessionTrackingFailedListener"*/, (System_Object_array *)v264, 0);
  }
  DeferredDeeplinkDelegate_k__BackingField = v3->fields._DeferredDeeplinkDelegate_k__BackingField;
  if ( DeferredDeeplinkDelegate_k__BackingField )
  {
    v267 = (AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_TypeInfo);
    AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___ctor(v267, DeferredDeeplinkDelegate_k__BackingField, v268);
    v271 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v269, v270);
      v271 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v272 = v271->static_fields;
    v272->onDeferredDeeplinkListener = v267;
    sub_21FFBF4(&v272->onDeferredDeeplinkListener, v267);
    v273 = v326;
    v274 = sub_21FFD10(object___TypeInfo, 1);
    v277 = v274;
    if ( !v274 )
      goto LABEL_348;
    onDeferredDeeplinkListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onDeferredDeeplinkListener;
    if ( onDeferredDeeplinkListener && !sub_21FFDA4(onDeferredDeeplinkListener, *(_QWORD *)(*(_QWORD *)v274 + 64LL)) )
    {
      v307 = sub_21FFEF0();
      sub_21FFD90(v307, 0);
    }
    if ( !*(_DWORD *)(v277 + 24) )
      sub_21FFED4();
    *(_QWORD *)(v277 + 32) = onDeferredDeeplinkListener;
    v274 = sub_21FFBF4(v277 + 32, onDeferredDeeplinkListener);
    if ( !v273 )
LABEL_348:
      sub_21FFECC(v274, v275, v276);
    UnityEngine_AndroidJavaObject__Call(v273, (System_String_o *)StringLiteral_24533/*"setOnDeferredDeeplinkResponseListener"*/, (System_Object_array *)v277, 0);
  }
  v279 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v53, v54);
    v279 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v279->static_fields->ajcAdjust;
  v281 = sub_21FFD10(object___TypeInfo, 1);
  v284 = v281;
  if ( !v281 )
    goto LABEL_335;
  v285 = v326;
  if ( v326 && !sub_21FFDA4(v326, *(_QWORD *)(*(_QWORD *)v281 + 64LL)) )
  {
    v294 = sub_21FFEF0();
    sub_21FFD90(v294, 0);
  }
  if ( !*(_DWORD *)(v284 + 24) )
    sub_21FFED4();
  *(_QWORD *)(v284 + 32) = v285;
  v281 = sub_21FFBF4(v284 + 32, v285);
  if ( !ajcAdjust )
LABEL_335:
    sub_21FFECC(v281, v282, v283);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_21756/*"initSdk"*/,
    (System_Object_array *)v284,
    0);
  v286 = *v319;
  if ( *v319 )
  {
    v287 = v286->klass;
    v288 = *(unsigned __int16 *)&v286->klass->_2.rank;
    if ( *(_WORD *)&v286->klass->_2.rank )
    {
      v289 = &v287->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v289 - 1) != System_IDisposable_TypeInfo )
      {
        --v288;
        v289 += 4;
        if ( !v288 )
          goto LABEL_323;
      }
      v290 = (__int64)&v287->vtable + 16 * *v289;
    }
    else
    {
LABEL_323:
      v290 = sub_2237E2C(*v319, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v290)(v286, *(_QWORD *)(v290 + 8));
  }
  if ( v318 )
    sub_21FFEC4(v318);
}


void AdjustSdk_AdjustAndroid__IsEnabled(System_Action_bool__o *onIsEnabled, const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_IsEnabledListener_o *v3; // x19
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Object_array *v12; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x22
  __int64 v14; // x0

  if ( (byte_5930450 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_IsEnabledListener_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_21883/*"isEnabled"*/);
    byte_5930450 = 1;
  }
  v3 = (AdjustSdk_AdjustAndroid_IsEnabledListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_IsEnabledListener_TypeInfo);
  AdjustSdk_AdjustAndroid_IsEnabledListener___ctor(v3, onIsEnabled, v4);
  v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v5, v6);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v7->static_fields->ajcAdjust;
  v9 = sub_21FFD10(object___TypeInfo, 2);
  if ( !v9 )
LABEL_14:
    sub_21FFECC(v9, v10, v11);
  v12 = (System_Object_array *)v9;
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v9 = sub_21FFDA4(ajoCurrentActivity, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
      goto LABEL_16;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_15;
  v12->m_Items[0] = (Il2CppObject *)ajoCurrentActivity;
  v9 = sub_21FFBF4(v12->m_Items, ajoCurrentActivity);
  if ( v3 )
  {
    v9 = sub_21FFDA4(v3, v12->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_16:
      v14 = sub_21FFEF0();
      sub_21FFD90(v14, 0);
    }
  }
  if ( (v12->max_length & 0xFFFFFFFE) == 0 )
LABEL_15:
    sub_21FFED4(v9);
  v12->m_Items[1] = (Il2CppObject *)v3;
  v9 = sub_21FFBF4(&v12->m_Items[1], v3);
  if ( !ajcAdjust )
    goto LABEL_14;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_21883/*"isEnabled"*/, v12, 0);
}


void AdjustSdk_AdjustAndroid__OnPause(System_String_o *testingArgument, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  AdjustSdk_AdjustAndroid_c *v5; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_5930462 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_25268/*"test"*/);
    sub_21FFC50(&StringLiteral_23505/*"onPause"*/);
    byte_5930462 = 1;
  }
  if ( System_String__op_Equality(testingArgument, (System_String_o *)StringLiteral_25268/*"test"*/, 0) )
  {
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v3, v4);
      v5 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v6 = Method_System_Array_Empty_object___;
    v7 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
    if ( !v7 )
    {
      sub_2237B54(Method_System_Array_Empty_object___);
      v7 = v6[7];
    }
    v9 = *(_QWORD *)(v7 + 16);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_2237AF8();
    if ( !*(_DWORD *)(v9 + 228) )
      j_il2cpp_runtime_class_init_0(v9, v3, v4);
    v10 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_2237AF8();
    if ( !ajcAdjust )
      sub_21FFECC(v10, v3, v4);
    UnityEngine_AndroidJavaObject__CallStatic(
      ajcAdjust,
      (System_String_o *)StringLiteral_23505/*"onPause"*/,
      **(System_Object_array ***)(v10 + 184),
      0);
  }
}


void AdjustSdk_AdjustAndroid__OnResume(System_String_o *testingArgument, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  AdjustSdk_AdjustAndroid_c *v5; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_5930461 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_23511/*"onResume"*/);
    sub_21FFC50(&StringLiteral_25268/*"test"*/);
    byte_5930461 = 1;
  }
  if ( System_String__op_Equality(testingArgument, (System_String_o *)StringLiteral_25268/*"test"*/, 0) )
  {
    v5 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v3, v4);
      v5 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    v6 = Method_System_Array_Empty_object___;
    v7 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v5->static_fields->ajcAdjust;
    if ( !v7 )
    {
      sub_2237B54(Method_System_Array_Empty_object___);
      v7 = v6[7];
    }
    v9 = *(_QWORD *)(v7 + 16);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_2237AF8();
    if ( !*(_DWORD *)(v9 + 228) )
      j_il2cpp_runtime_class_init_0(v9, v3, v4);
    v10 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_2237AF8();
    if ( !ajcAdjust )
      sub_21FFECC(v10, v3, v4);
    UnityEngine_AndroidJavaObject__CallStatic(
      ajcAdjust,
      (System_String_o *)StringLiteral_23511/*"onResume"*/,
      **(System_Object_array ***)(v10 + 184),
      0);
  }
}


void AdjustSdk_AdjustAndroid__ProcessAndResolveDeeplink(
        AdjustSdk_AdjustDeeplink_o *deeplink,
        System_Action_string__o *resolvedLinkCallback,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_o *v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  AdjustSdk_AdjustAndroid_c *v9; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaClass_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x21
  struct System_String_o *Deeplink_k__BackingField; // x22
  __int64 v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  __int64 v22; // x1
  UnityEngine_AndroidJavaObject_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x21
  struct System_String_o *Referrer_k__BackingField; // x19
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x20
  __int64 v36; // x1
  Il2CppClass *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  AdjustSdk_AdjustAndroid_c *v41; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  System_Object_array *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x0
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v50; // x1
  __int64 v51; // x0
  struct AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_o *onDeeplinkResolvedListener; // x21
  __int64 v53; // x1
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_AndroidJavaObject_c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  Il2CppClass *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  UnityEngine_AndroidJavaObject_c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  Il2CppObject *v76; // [xsp+48h] [xbp-68h]
  UnityEngine_AndroidJavaObject_o *v77; // [xsp+50h] [xbp-60h]
  Il2CppObject *v78; // [xsp+58h] [xbp-58h]
  UnityEngine_AndroidJavaObject_o *v79; // [xsp+68h] [xbp-48h]

  if ( (byte_593045C & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____91478632);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_18832/*"com.adjust.sdk.AdjustDeeplink"*/);
    sub_21FFC50(&StringLiteral_24549/*"setReferrer"*/);
    sub_21FFC50(&StringLiteral_23752/*"parse"*/);
    sub_21FFC50(&StringLiteral_23920/*"processAndResolveDeeplink"*/);
    sub_21FFC50(&StringLiteral_17433/*"android.net.Uri"*/);
    byte_593045C = 1;
  }
  v5 = (AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_DeeplinkResolutionListener_TypeInfo);
  AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___ctor(v5, resolvedLinkCallback, v6);
  v9 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v7, v8);
    v9 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->onDeeplinkResolvedListener = v5;
  sub_21FFBF4(&static_fields->onDeeplinkResolvedListener, v5);
  v11 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v11, (System_String_o *)StringLiteral_17433/*"android.net.Uri"*/, 0);
  v79 = (UnityEngine_AndroidJavaObject_o *)v11;
  v12 = sub_21FFD10(object___TypeInfo, 1);
  if ( !deeplink )
    sub_21FFECC(v12, v13, v14);
  v15 = v12;
  if ( !v12 )
    goto LABEL_72;
  Deeplink_k__BackingField = deeplink->fields._Deeplink_k__BackingField;
  if ( Deeplink_k__BackingField )
  {
    v12 = sub_21FFDA4(deeplink->fields._Deeplink_k__BackingField, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
    {
      v69 = sub_21FFEF0(0, v17);
      sub_21FFD90(v69, 0);
    }
  }
  if ( !*(_DWORD *)(v15 + 24) )
    sub_21FFED4(v12);
  *(_QWORD *)(v15 + 32) = Deeplink_k__BackingField;
  v12 = sub_21FFBF4(v15 + 32, Deeplink_k__BackingField);
  if ( !v11 )
LABEL_72:
    sub_21FFECC(v12, v13, v14);
  v78 = UnityEngine_AndroidJavaObject__CallStatic_object_(
          (UnityEngine_AndroidJavaObject_o *)v11,
          (System_String_o *)StringLiteral_23752/*"parse"*/,
          (System_Object_array *)v15,
          (const MethodInfo_36D5FD0 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____91478632);
  v18 = sub_21FFD10(object___TypeInfo, 1);
  v21 = v18;
  if ( !v18 )
    sub_21FFECC(0, v19, v20);
  if ( v78 )
  {
    v18 = sub_21FFDA4(v78, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v18 )
    {
      v70 = sub_21FFEF0(0, v22);
      sub_21FFD90(v70, 0);
    }
  }
  if ( !*(_DWORD *)(v21 + 24) )
    sub_21FFED4(v18);
  *(_QWORD *)(v21 + 32) = v78;
  sub_21FFBF4(v21 + 32, v78);
  v23 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(
    v23,
    (System_String_o *)StringLiteral_18832/*"com.adjust.sdk.AdjustDeeplink"*/,
    (System_Object_array *)v21,
    0);
  v77 = v23;
  if ( deeplink->fields._Referrer_k__BackingField )
  {
    v26 = sub_21FFD10(object___TypeInfo, 1);
    v29 = v26;
    if ( !v26 )
      goto LABEL_73;
    Referrer_k__BackingField = deeplink->fields._Referrer_k__BackingField;
    if ( Referrer_k__BackingField )
    {
      v26 = sub_21FFDA4(Referrer_k__BackingField, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
      if ( !v26 )
      {
        v74 = sub_21FFEF0(0, v31);
        sub_21FFD90(v74, 0);
      }
    }
    if ( !*(_DWORD *)(v29 + 24) )
      sub_21FFED4(v26);
    *(_QWORD *)(v29 + 32) = Referrer_k__BackingField;
    v26 = sub_21FFBF4(v29 + 32, Referrer_k__BackingField);
    if ( !v79 )
LABEL_73:
      sub_21FFECC(v26, v27, v28);
    v76 = UnityEngine_AndroidJavaObject__CallStatic_object_(
            v79,
            (System_String_o *)StringLiteral_23752/*"parse"*/,
            (System_Object_array *)v29,
            (const MethodInfo_36D5FD0 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____91478632);
    v32 = sub_21FFD10(object___TypeInfo, 1);
    v35 = v32;
    if ( !v32 )
      goto LABEL_74;
    if ( v76 )
    {
      v32 = sub_21FFDA4(v76, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
      if ( !v32 )
      {
        v75 = sub_21FFEF0(0, v36);
        sub_21FFD90(v75, 0);
      }
    }
    if ( !*(_DWORD *)(v35 + 24) )
      sub_21FFED4(v32);
    *(_QWORD *)(v35 + 32) = v76;
    v32 = sub_21FFBF4(v35 + 32, v76);
    if ( !v77 )
LABEL_74:
      sub_21FFECC(v32, v33, v34);
    UnityEngine_AndroidJavaObject__Call(v77, (System_String_o *)StringLiteral_24549/*"setReferrer"*/, (System_Object_array *)v35, 0);
    if ( v76 )
    {
      klass = v76->klass;
      v38 = *(unsigned __int16 *)&v76->klass->_2.rank;
      if ( *(_WORD *)&v76->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          p_offset += 4;
          if ( !v38 )
            goto LABEL_31;
        }
        v40 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_31:
        v40 = sub_2237E2C(v76, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(Il2CppObject *, _QWORD))v40)(v76, *(_QWORD *)(v40 + 8));
    }
  }
  v41 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v24, v25);
    v41 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v41->static_fields->ajcAdjust;
  v43 = sub_21FFD10(object___TypeInfo, 3);
  v46 = (System_Object_array *)v43;
  if ( !v43 )
    sub_21FFECC(0, v44, v45);
  if ( v77 )
  {
    v43 = sub_21FFDA4(v77, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
    if ( !v43 )
    {
      v71 = sub_21FFEF0(0, v47);
      sub_21FFD90(v71, 0);
    }
  }
  if ( !LODWORD(v46->max_length) )
    sub_21FFED4(v43);
  v46->m_Items[0] = (Il2CppObject *)v77;
  v48 = sub_21FFBF4(v46->m_Items, v77);
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v48 = sub_21FFDA4(ajoCurrentActivity, v46->obj.klass->_1.element_class);
    if ( !v48 )
    {
      v72 = sub_21FFEF0(0, v50);
      sub_21FFD90(v72, 0);
    }
  }
  if ( (v46->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(v48);
  v46->m_Items[1] = (Il2CppObject *)ajoCurrentActivity;
  v51 = sub_21FFBF4(&v46->m_Items[1], ajoCurrentActivity);
  onDeeplinkResolvedListener = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->onDeeplinkResolvedListener;
  if ( onDeeplinkResolvedListener )
  {
    v51 = sub_21FFDA4(onDeeplinkResolvedListener, v46->obj.klass->_1.element_class);
    if ( !v51 )
    {
      v73 = sub_21FFEF0(0, v53);
      sub_21FFD90(v73, 0);
    }
  }
  if ( LODWORD(v46->max_length) <= 2 )
    sub_21FFED4(v51);
  v46->m_Items[2] = (Il2CppObject *)onDeeplinkResolvedListener;
  v54 = sub_21FFBF4(&v46->m_Items[2], onDeeplinkResolvedListener);
  if ( !ajcAdjust )
    sub_21FFECC(v54, v55, v56);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_23920/*"processAndResolveDeeplink"*/, v46, 0);
  if ( v77 )
  {
    v57 = v77->klass;
    v58 = *(unsigned __int16 *)&v77->klass->_2.rank;
    if ( *(_WORD *)&v77->klass->_2.rank )
    {
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
      {
        --v58;
        v59 += 4;
        if ( !v58 )
          goto LABEL_52;
      }
      v60 = (__int64)&v57->vtable + 16 * *v59;
    }
    else
    {
LABEL_52:
      v60 = sub_2237E2C(v77, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v60)(v77, *(_QWORD *)(v60 + 8));
  }
  if ( v78 )
  {
    v61 = v78->klass;
    v62 = *(unsigned __int16 *)&v78->klass->_2.rank;
    if ( *(_WORD *)&v78->klass->_2.rank )
    {
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_60;
      }
      v64 = (__int64)&v61->vtable[*v63];
    }
    else
    {
LABEL_60:
      v64 = sub_2237E2C(v78, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v64)(v78, *(_QWORD *)(v64 + 8));
  }
  if ( v79 )
  {
    v65 = v79->klass;
    v66 = *(unsigned __int16 *)&v79->klass->_2.rank;
    if ( *(_WORD *)&v79->klass->_2.rank )
    {
      v67 = &v65->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
      {
        --v66;
        v67 += 4;
        if ( !v66 )
          goto LABEL_68;
      }
      v68 = (__int64)&v65->vtable + 16 * *v67;
    }
    else
    {
LABEL_68:
      v68 = sub_2237E2C(v79, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v68)(v79, *(_QWORD *)(v68 + 8));
  }
}


void AdjustSdk_AdjustAndroid__ProcessDeeplink(AdjustSdk_AdjustDeeplink_o *deeplink, const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x21
  struct System_String_o *Deeplink_k__BackingField; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  UnityEngine_AndroidJavaObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  struct System_String_o *Referrer_k__BackingField; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x20
  __int64 v25; // x1
  Il2CppClass *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  AdjustSdk_AdjustAndroid_c *v30; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_Object_array *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x0
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x21
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_AndroidJavaObject_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  Il2CppClass *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  UnityEngine_AndroidJavaObject_c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x0
  Il2CppObject *v61; // [xsp+40h] [xbp-60h]
  UnityEngine_AndroidJavaObject_o *v62; // [xsp+48h] [xbp-58h]
  Il2CppObject *v63; // [xsp+50h] [xbp-50h]
  UnityEngine_AndroidJavaObject_o *v64; // [xsp+58h] [xbp-48h]

  if ( (byte_593044B & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____91478632);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_23922/*"processDeeplink"*/);
    sub_21FFC50(&StringLiteral_18832/*"com.adjust.sdk.AdjustDeeplink"*/);
    sub_21FFC50(&StringLiteral_24549/*"setReferrer"*/);
    sub_21FFC50(&StringLiteral_23752/*"parse"*/);
    sub_21FFC50(&StringLiteral_17433/*"android.net.Uri"*/);
    byte_593044B = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_17433/*"android.net.Uri"*/, 0);
  v64 = (UnityEngine_AndroidJavaObject_o *)v3;
  v4 = sub_21FFD10(object___TypeInfo, 1);
  if ( !deeplink )
    sub_21FFECC(v4, v5, v6);
  v7 = v4;
  if ( !v4 )
    goto LABEL_67;
  Deeplink_k__BackingField = deeplink->fields._Deeplink_k__BackingField;
  if ( Deeplink_k__BackingField )
  {
    v4 = sub_21FFDA4(deeplink->fields._Deeplink_k__BackingField, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      v55 = ((__int64 (*)(void))sub_21FFEF0)();
      sub_21FFD90(v55, 0);
    }
  }
  if ( !*(_DWORD *)(v7 + 24) )
    sub_21FFED4(v4);
  *(_QWORD *)(v7 + 32) = Deeplink_k__BackingField;
  v4 = sub_21FFBF4(v7 + 32, Deeplink_k__BackingField);
  if ( !v3 )
LABEL_67:
    sub_21FFECC(v4, v5, v6);
  v63 = UnityEngine_AndroidJavaObject__CallStatic_object_(
          (UnityEngine_AndroidJavaObject_o *)v3,
          (System_String_o *)StringLiteral_23752/*"parse"*/,
          (System_Object_array *)v7,
          (const MethodInfo_36D5FD0 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____91478632);
  v9 = sub_21FFD10(object___TypeInfo, 1);
  v12 = v9;
  if ( !v9 )
    sub_21FFECC(0, v10, v11);
  if ( v63 )
  {
    v9 = sub_21FFDA4(v63, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
    {
      v56 = ((__int64 (*)(void))sub_21FFEF0)();
      sub_21FFD90(v56, 0);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
    sub_21FFED4(v9);
  *(_QWORD *)(v12 + 32) = v63;
  sub_21FFBF4(v12 + 32, v63);
  v13 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(
    v13,
    (System_String_o *)StringLiteral_18832/*"com.adjust.sdk.AdjustDeeplink"*/,
    (System_Object_array *)v12,
    0);
  v62 = v13;
  if ( deeplink->fields._Referrer_k__BackingField )
  {
    v16 = sub_21FFD10(object___TypeInfo, 1);
    v19 = v16;
    if ( !v16 )
      goto LABEL_68;
    Referrer_k__BackingField = deeplink->fields._Referrer_k__BackingField;
    if ( Referrer_k__BackingField )
    {
      v16 = sub_21FFDA4(Referrer_k__BackingField, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
      if ( !v16 )
      {
        v59 = ((__int64 (*)(void))sub_21FFEF0)();
        sub_21FFD90(v59, 0);
      }
    }
    if ( !*(_DWORD *)(v19 + 24) )
      sub_21FFED4(v16);
    *(_QWORD *)(v19 + 32) = Referrer_k__BackingField;
    v16 = sub_21FFBF4(v19 + 32, Referrer_k__BackingField);
    if ( !v64 )
LABEL_68:
      sub_21FFECC(v16, v17, v18);
    v61 = UnityEngine_AndroidJavaObject__CallStatic_object_(
            v64,
            (System_String_o *)StringLiteral_23752/*"parse"*/,
            (System_Object_array *)v19,
            (const MethodInfo_36D5FD0 *)Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____91478632);
    v21 = sub_21FFD10(object___TypeInfo, 1);
    v24 = v21;
    if ( !v21 )
      goto LABEL_69;
    if ( v61 )
    {
      v21 = sub_21FFDA4(v61, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
      if ( !v21 )
      {
        v60 = sub_21FFEF0(0, v25);
        sub_21FFD90(v60, 0);
      }
    }
    if ( !*(_DWORD *)(v24 + 24) )
      sub_21FFED4(v21);
    *(_QWORD *)(v24 + 32) = v61;
    v21 = sub_21FFBF4(v24 + 32, v61);
    if ( !v62 )
LABEL_69:
      sub_21FFECC(v21, v22, v23);
    UnityEngine_AndroidJavaObject__Call(v62, (System_String_o *)StringLiteral_24549/*"setReferrer"*/, (System_Object_array *)v24, 0);
    if ( v61 )
    {
      klass = v61->klass;
      v27 = *(unsigned __int16 *)&v61->klass->_2.rank;
      if ( *(_WORD *)&v61->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v27;
          p_offset += 4;
          if ( !v27 )
            goto LABEL_29;
        }
        v29 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_29:
        v29 = sub_2237E2C(v61, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(Il2CppObject *, _QWORD))v29)(v61, *(_QWORD *)(v29 + 8));
    }
  }
  v30 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v14, v15);
    v30 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v30->static_fields->ajcAdjust;
  v32 = sub_21FFD10(object___TypeInfo, 2);
  v35 = (System_Object_array *)v32;
  if ( !v32 )
    sub_21FFECC(0, v33, v34);
  if ( v62 )
  {
    v32 = sub_21FFDA4(v62, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
    if ( !v32 )
    {
      v57 = sub_21FFEF0(0, v36);
      sub_21FFD90(v57, 0);
    }
  }
  if ( !LODWORD(v35->max_length) )
    sub_21FFED4(v32);
  v35->m_Items[0] = (Il2CppObject *)v62;
  v37 = sub_21FFBF4(v35->m_Items, v62);
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v37 = sub_21FFDA4(ajoCurrentActivity, v35->obj.klass->_1.element_class);
    if ( !v37 )
    {
      v58 = sub_21FFEF0(0, v39);
      sub_21FFD90(v58, 0);
    }
  }
  if ( (v35->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(v37);
  v35->m_Items[1] = (Il2CppObject *)ajoCurrentActivity;
  v40 = sub_21FFBF4(&v35->m_Items[1], ajoCurrentActivity);
  if ( !ajcAdjust )
    sub_21FFECC(v40, v41, v42);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_23922/*"processDeeplink"*/, v35, 0);
  if ( v62 )
  {
    v43 = v62->klass;
    v44 = *(unsigned __int16 *)&v62->klass->_2.rank;
    if ( *(_WORD *)&v62->klass->_2.rank )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_47;
      }
      v46 = (__int64)&v43->vtable + 16 * *v45;
    }
    else
    {
LABEL_47:
      v46 = sub_2237E2C(v62, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v46)(v62, *(_QWORD *)(v46 + 8));
  }
  if ( v63 )
  {
    v47 = v63->klass;
    v48 = *(unsigned __int16 *)&v63->klass->_2.rank;
    if ( *(_WORD *)&v63->klass->_2.rank )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_55;
      }
      v50 = (__int64)&v47->vtable[*v49];
    }
    else
    {
LABEL_55:
      v50 = sub_2237E2C(v63, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v50)(v63, *(_QWORD *)(v50 + 8));
  }
  if ( v64 )
  {
    v51 = v64->klass;
    v52 = *(unsigned __int16 *)&v64->klass->_2.rank;
    if ( *(_WORD *)&v64->klass->_2.rank )
    {
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_63;
      }
      v54 = (__int64)&v51->vtable + 16 * *v53;
    }
    else
    {
LABEL_63:
      v54 = sub_2237E2C(v64, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v54)(v64, *(_QWORD *)(v54 + 8));
  }
}


void AdjustSdk_AdjustAndroid__RemoveGlobalCallbackParameter(System_String_o *key, const MethodInfo *method)
{
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v4; // x0
  UnityEngine_AndroidJavaClass_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  AdjustSdk_AdjustAndroid_c *v8; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x1
  __int64 v16; // x0

  if ( (byte_5930448 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_24183/*"removeGlobalCallbackParameter"*/);
    sub_21FFC50(&StringLiteral_18829/*"com.adjust.sdk.Adjust"*/);
    byte_5930448 = 1;
  }
  v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v4->static_fields->ajcAdjust )
  {
    v5 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v5, (System_String_o *)StringLiteral_18829/*"com.adjust.sdk.Adjust"*/, 0);
    v8 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v6, v7);
      v8 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->ajcAdjust = v5;
    sub_21FFBF4(&static_fields->ajcAdjust, v5);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v4->static_fields->ajcAdjust;
  v11 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v11 )
    goto LABEL_17;
  v14 = v11;
  if ( key )
  {
    v11 = sub_21FFDA4(key, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v11 )
    {
      v16 = sub_21FFEF0(0, v15);
      sub_21FFD90(v16, 0);
    }
  }
  if ( !*(_DWORD *)(v14 + 24) )
    sub_21FFED4(v11);
  *(_QWORD *)(v14 + 32) = key;
  v11 = sub_21FFBF4(v14 + 32, key);
  if ( !ajcAdjust )
LABEL_17:
    sub_21FFECC(v11, v12, v13);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24183/*"removeGlobalCallbackParameter"*/,
    (System_Object_array *)v14,
    0);
}


void AdjustSdk_AdjustAndroid__RemoveGlobalCallbackParameters(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaClass_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  _QWORD *v9; // x20
  __int64 v10; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_593044A & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_24184/*"removeGlobalCallbackParameters"*/);
    sub_21FFC50(&StringLiteral_18829/*"com.adjust.sdk.Adjust"*/);
    byte_593044A = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v3->static_fields->ajcAdjust )
  {
    v4 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v4, (System_String_o *)StringLiteral_18829/*"com.adjust.sdk.Adjust"*/, 0);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v5, v6);
      v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->ajcAdjust = v4;
    sub_21FFBF4(&static_fields->ajcAdjust, v4);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v9 = Method_System_Array_Empty_object___;
  v10 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v10 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v10 = v9[7];
  }
  v12 = *(_QWORD *)(v10 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_2237AF8();
  if ( !*(_DWORD *)(v12 + 228) )
    j_il2cpp_runtime_class_init_0(v12, v1, v2);
  v13 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v13, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24184/*"removeGlobalCallbackParameters"*/,
    **(System_Object_array ***)(v13 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__RemoveGlobalPartnerParameter(System_String_o *key, const MethodInfo *method)
{
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v4; // x0
  UnityEngine_AndroidJavaClass_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  AdjustSdk_AdjustAndroid_c *v8; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x1
  __int64 v16; // x0

  if ( (byte_5930447 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_24185/*"removeGlobalPartnerParameter"*/);
    sub_21FFC50(&StringLiteral_18829/*"com.adjust.sdk.Adjust"*/);
    byte_5930447 = 1;
  }
  v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v4->static_fields->ajcAdjust )
  {
    v5 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v5, (System_String_o *)StringLiteral_18829/*"com.adjust.sdk.Adjust"*/, 0);
    v8 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v6, v7);
      v8 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->ajcAdjust = v5;
    sub_21FFBF4(&static_fields->ajcAdjust, v5);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v4->static_fields->ajcAdjust;
  v11 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v11 )
    goto LABEL_17;
  v14 = v11;
  if ( key )
  {
    v11 = sub_21FFDA4(key, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v11 )
    {
      v16 = sub_21FFEF0(0, v15);
      sub_21FFD90(v16, 0);
    }
  }
  if ( !*(_DWORD *)(v14 + 24) )
    sub_21FFED4(v11);
  *(_QWORD *)(v14 + 32) = key;
  v11 = sub_21FFBF4(v14 + 32, key);
  if ( !ajcAdjust )
LABEL_17:
    sub_21FFECC(v11, v12, v13);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24185/*"removeGlobalPartnerParameter"*/,
    (System_Object_array *)v14,
    0);
}


void AdjustSdk_AdjustAndroid__RemoveGlobalPartnerParameters(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  UnityEngine_AndroidJavaClass_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  AdjustSdk_AdjustAndroid_c *v7; // x0
  struct AdjustSdk_AdjustAndroid_StaticFields *static_fields; // x0
  _QWORD *v9; // x20
  __int64 v10; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_5930449 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_24186/*"removeGlobalPartnerParameters"*/);
    sub_21FFC50(&StringLiteral_18829/*"com.adjust.sdk.Adjust"*/);
    byte_5930449 = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !v3->static_fields->ajcAdjust )
  {
    v4 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
    UnityEngine_AndroidJavaClass___ctor(v4, (System_String_o *)StringLiteral_18829/*"com.adjust.sdk.Adjust"*/, 0);
    v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v5, v6);
      v7 = AdjustSdk_AdjustAndroid_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->ajcAdjust = v4;
    sub_21FFBF4(&static_fields->ajcAdjust, v4);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v9 = Method_System_Array_Empty_object___;
  v10 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v10 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v10 = v9[7];
  }
  v12 = *(_QWORD *)(v10 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_2237AF8();
  if ( !*(_DWORD *)(v12 + 228) )
    j_il2cpp_runtime_class_init_0(v12, v1, v2);
  v13 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v13, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24186/*"removeGlobalPartnerParameters"*/,
    **(System_Object_array ***)(v13 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__SetExternalDeviceIdInDelay(System_String_o *externalDeviceId, const MethodInfo *method)
{
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v4; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x21
  __int64 v10; // x1
  __int64 v11; // x0

  if ( (byte_5930458 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_24513/*"setExternalDeviceIdInDelay"*/);
    byte_5930458 = 1;
  }
  v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v4->static_fields->ajcAdjust;
  v6 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v6 )
    goto LABEL_11;
  v9 = v6;
  if ( externalDeviceId )
  {
    v6 = sub_21FFDA4(externalDeviceId, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
    {
      v11 = sub_21FFEF0(0, v10);
      sub_21FFD90(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_21FFED4(v6);
  *(_QWORD *)(v9 + 32) = externalDeviceId;
  v6 = sub_21FFBF4(v9 + 32, externalDeviceId);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v6, v7, v8);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24513/*"setExternalDeviceIdInDelay"*/,
    (System_Object_array *)v9,
    0);
}


void AdjustSdk_AdjustAndroid__SetPushToken(System_String_o *pushToken, const MethodInfo *method)
{
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v4; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Object_array *v9; // x21
  struct UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x19
  __int64 v11; // x0

  if ( (byte_5930443 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_24548/*"setPushToken"*/);
    byte_5930443 = 1;
  }
  v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v4->static_fields->ajcAdjust;
  v6 = sub_21FFD10(object___TypeInfo, 2);
  if ( !v6 )
LABEL_14:
    sub_21FFECC(v6, v7, v8);
  v9 = (System_Object_array *)v6;
  if ( pushToken )
  {
    v6 = sub_21FFDA4(pushToken, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
      goto LABEL_16;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_15;
  v9->m_Items[0] = (Il2CppObject *)pushToken;
  v6 = sub_21FFBF4(v9->m_Items, pushToken);
  ajoCurrentActivity = AdjustSdk_AdjustAndroid_TypeInfo->static_fields->ajoCurrentActivity;
  if ( ajoCurrentActivity )
  {
    v6 = sub_21FFDA4(ajoCurrentActivity, v9->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_16:
      v11 = sub_21FFEF0();
      sub_21FFD90(v11, 0);
    }
  }
  if ( (v9->max_length & 0xFFFFFFFE) == 0 )
LABEL_15:
    sub_21FFED4(v6);
  v9->m_Items[1] = (Il2CppObject *)ajoCurrentActivity;
  v6 = sub_21FFBF4(&v9->m_Items[1], ajoCurrentActivity);
  if ( !ajcAdjust )
    goto LABEL_14;
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_24548/*"setPushToken"*/, v9, 0);
}


void AdjustSdk_AdjustAndroid__SetTestOptions(
        System_Collections_Generic_Dictionary_string__string__o *testOptions,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  AdjustSdk_AdjustAndroid_c *v4; // x0
  UnityEngine_AndroidJavaObject_o *ajoCurrentActivity; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_AndroidJavaObject_o *v8; // x8
  AdjustSdk_AdjustAndroid_c *v9; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x1
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  UnityEngine_AndroidJavaObject_o *v21; // [xsp+18h] [xbp-28h]

  if ( (byte_5930460 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_24565/*"setTestOptions"*/);
    byte_5930460 = 1;
  }
  v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajoCurrentActivity = v4->static_fields->ajoCurrentActivity;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, method, v2);
  v8 = AdjustSdk_AdjustUtils__TestOptionsMap2AndroidJavaObject(testOptions, ajoCurrentActivity, v2);
  v9 = AdjustSdk_AdjustAndroid_TypeInfo;
  v21 = v8;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v6, v7);
    v9 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v9->static_fields->ajcAdjust;
  v11 = sub_21FFD10(object___TypeInfo, 1);
  v14 = v11;
  if ( !v11 )
    goto LABEL_23;
  if ( v21 )
  {
    v11 = sub_21FFDA4(v21, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v11 )
    {
      v20 = sub_21FFEF0(0, v15);
      sub_21FFD90(v20, 0);
    }
  }
  if ( !*(_DWORD *)(v14 + 24) )
    sub_21FFED4(v11);
  *(_QWORD *)(v14 + 32) = v21;
  v11 = sub_21FFBF4(v14 + 32, v21);
  if ( !ajcAdjust )
LABEL_23:
    sub_21FFECC(v11, v12, v13);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_24565/*"setTestOptions"*/,
    (System_Object_array *)v14,
    0);
  if ( v21 )
  {
    klass = v21->klass;
    v17 = *(unsigned __int16 *)&v21->klass->_2.rank;
    if ( *(_WORD *)&v21->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_19;
      }
      v19 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_19:
      v19 = sub_2237E2C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v19)(v21, *(_QWORD *)(v19 + 8));
  }
}


void AdjustSdk_AdjustAndroid__SwitchBackToOnlineMode(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_593043E & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_25107/*"switchBackToOnlineMode"*/);
    byte_593043E = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v4 = Method_System_Array_Empty_object___;
  v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v5 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v5 = v4[7];
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, v1, v2);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v8, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_25107/*"switchBackToOnlineMode"*/,
    **(System_Object_array ***)(v8 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__SwitchToOfflineMode(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_593043D & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&StringLiteral_25112/*"switchToOfflineMode"*/);
    byte_593043D = 1;
  }
  v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v1, v2);
    v3 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  v4 = Method_System_Array_Empty_object___;
  v5 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v3->static_fields->ajcAdjust;
  if ( !v5 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v5 = v4[7];
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, v1, v2);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  if ( !ajcAdjust )
    sub_21FFECC(v8, v1, v2);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_25112/*"switchToOfflineMode"*/,
    **(System_Object_array ***)(v8 + 184),
    0);
}


void AdjustSdk_AdjustAndroid__TrackAdRevenue(AdjustSdk_AdjustAdRevenue_o *adRevenue, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  struct System_String_o *Source_k__BackingField; // x21
  __int64 v8; // x1
  UnityEngine_AndroidJavaObject_o *v9; // x21
  const MethodInfo *v10; // x1
  _BOOL4 hasValue; // w8
  System_Object_array *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x21
  __int64 v17; // x1
  UnityEngine_AndroidJavaObject_o *v18; // x21
  UnityEngine_AndroidJavaObject_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_Object_array *v23; // x21
  Il2CppObject *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x0
  struct System_String_o *Currency_k__BackingField; // x22
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_AndroidJavaObject_o *v32; // x21
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v34; // x9
  int *p_offset; // x10
  __int64 v36; // x0
  System_Object_array *v37; // x20
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  Il2CppObject *v41; // x21
  __int64 v42; // x1
  UnityEngine_AndroidJavaObject_o *v43; // x21
  UnityEngine_AndroidJavaObject_o *v44; // x20
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x21
  UnityEngine_AndroidJavaObject_o *v49; // x22
  __int64 v50; // x1
  UnityEngine_AndroidJavaObject_o *v51; // x21
  UnityEngine_AndroidJavaObject_c *v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  UnityEngine_AndroidJavaObject_o *v56; // x20
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x21
  struct System_String_o *AdRevenueNetwork_k__BackingField; // x22
  __int64 v62; // x1
  UnityEngine_AndroidJavaObject_o *v63; // x20
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x21
  struct System_String_o *AdRevenueUnit_k__BackingField; // x22
  __int64 v69; // x1
  UnityEngine_AndroidJavaObject_o *v70; // x20
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x21
  struct System_String_o *AdRevenuePlacement_k__BackingField; // x22
  __int64 v76; // x1
  const MethodInfo *v77; // x1
  int32_t i; // w20
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *CallbackParameters; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  Il2CppObject *Item; // x24
  const MethodInfo *v86; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v87; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  int32_t v90; // w20
  Il2CppObject *v91; // x23
  UnityEngine_AndroidJavaObject_o *v92; // x21
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  System_Object_array *v96; // x22
  __int64 v97; // x1
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  const MethodInfo *v103; // x1
  __int64 v104; // x2
  int32_t j; // w20
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerParameters; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  Il2CppObject *v112; // x24
  const MethodInfo *v113; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v114; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  int32_t v117; // w20
  Il2CppObject *v118; // x23
  UnityEngine_AndroidJavaObject_o *v119; // x21
  __int64 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  System_Object_array *v123; // x22
  __int64 v124; // x1
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x0
  __int64 v128; // x1
  __int64 v129; // x2
  AdjustSdk_AdjustAndroid_c *v130; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v132; // x0
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x20
  UnityEngine_AndroidJavaObject_o *v136; // x21
  __int64 v137; // x1
  UnityEngine_AndroidJavaObject_o *v138; // x19
  UnityEngine_AndroidJavaObject_c *v139; // x8
  __int64 v140; // x9
  int *v141; // x10
  __int64 v142; // x0
  __int64 v143; // x0
  __int64 v144; // x0
  __int64 v145; // x0
  __int64 v146; // x0
  __int64 v147; // x0
  __int64 v148; // x0
  __int64 v149; // x0
  __int64 v150; // x0
  __int64 v151; // x0
  __int64 v152; // x0
  __int64 v153; // x0
  __int64 v154; // x0
  __int64 v155; // x0
  __int64 v156; // x0
  struct System_Nullable_double__o Revenue_k__BackingField; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v158; // [xsp+18h] [xbp-88h]
  UnityEngine_AndroidJavaObject_o **v159; // [xsp+20h] [xbp-80h]
  UnityEngine_AndroidJavaObject_o *v160; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_AndroidJavaObject_o *v161; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_AndroidJavaObject_o *v162; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_593044C & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_double__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    sub_21FFC50(&System_Nullable_double__TypeInfo);
    sub_21FFC50(&System_Nullable_int__TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_21FFC50(&StringLiteral_17327/*"addPartnerParameter"*/);
    sub_21FFC50(&StringLiteral_24494/*"setAdRevenueNetwork"*/);
    sub_21FFC50(&StringLiteral_25401/*"trackAdRevenue"*/);
    sub_21FFC50(&StringLiteral_17314/*"addCallbackParameter"*/);
    sub_21FFC50(&StringLiteral_18830/*"com.adjust.sdk.AdjustAdRevenue"*/);
    sub_21FFC50(&StringLiteral_24496/*"setAdRevenueUnit"*/);
    sub_21FFC50(&StringLiteral_24550/*"setRevenue"*/);
    sub_21FFC50(&StringLiteral_22057/*"java.lang.Double"*/);
    sub_21FFC50(&StringLiteral_24495/*"setAdRevenuePlacement"*/);
    sub_21FFC50(&StringLiteral_24493/*"setAdImpressionsCount"*/);
    sub_21FFC50(&StringLiteral_22059/*"java.lang.Integer"*/);
    byte_593044C = 1;
  }
  v161 = 0;
  v162 = 0;
  v160 = 0;
  v3 = sub_21FFD10(object___TypeInfo, 1);
  if ( !adRevenue || (v6 = v3) == 0 )
    sub_21FFECC(v3, v4, v5);
  Source_k__BackingField = adRevenue->fields._Source_k__BackingField;
  if ( Source_k__BackingField )
  {
    v3 = sub_21FFDA4(adRevenue->fields._Source_k__BackingField, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v147 = sub_21FFEF0(0, v8);
      sub_21FFD90(v147, 0);
    }
  }
  if ( !*(_DWORD *)(v6 + 24) )
    sub_21FFED4(v3);
  *(_QWORD *)(v6 + 32) = Source_k__BackingField;
  sub_21FFBF4(v6 + 32, Source_k__BackingField);
  v9 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(
    v9,
    (System_String_o *)StringLiteral_18830/*"com.adjust.sdk.AdjustAdRevenue"*/,
    (System_Object_array *)v6,
    0);
  hasValue = adRevenue->fields._Revenue_k__BackingField.fields.hasValue;
  v162 = v9;
  v158 = 0;
  v159 = &v162;
  if ( hasValue )
  {
    v12 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    Revenue_k__BackingField = adRevenue->fields._Revenue_k__BackingField;
    v13 = j_il2cpp_value_box_0(System_Nullable_double__TypeInfo, &Revenue_k__BackingField);
    if ( !v12 )
      sub_21FFECC(v13, v14, v15);
    v16 = (Il2CppObject *)v13;
    if ( v13 )
    {
      v13 = sub_21FFDA4(v13, v12->obj.klass->_1.element_class);
      if ( !v13 )
      {
        v149 = sub_21FFEF0(0, v17);
        sub_21FFD90(v149, 0);
      }
    }
    if ( !LODWORD(v12->max_length) )
      sub_21FFED4(v13);
    v12->m_Items[0] = v16;
    sub_21FFBF4(v12->m_Items, v16);
    v18 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v18, (System_String_o *)StringLiteral_22057/*"java.lang.Double"*/, v12, 0);
    v19 = v162;
    v161 = v18;
    *(_QWORD *)&Revenue_k__BackingField.fields.hasValue = 0;
    *(_QWORD *)&Revenue_k__BackingField.fields.value = &v161;
    v20 = sub_21FFD10(object___TypeInfo, 2);
    v23 = (System_Object_array *)v20;
    if ( !v20 )
      sub_21FFECC(0, v21, v22);
    v24 = (Il2CppObject *)v161;
    if ( v161 )
    {
      v20 = sub_21FFDA4(v161, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
      if ( !v20 )
      {
        v150 = sub_21FFEF0(0, v25);
        sub_21FFD90(v150, 0);
      }
    }
    if ( !LODWORD(v23->max_length) )
      sub_21FFED4(v20);
    v23->m_Items[0] = v24;
    v26 = sub_21FFBF4(v23->m_Items, v24);
    Currency_k__BackingField = adRevenue->fields._Currency_k__BackingField;
    if ( Currency_k__BackingField )
    {
      v26 = sub_21FFDA4(adRevenue->fields._Currency_k__BackingField, v23->obj.klass->_1.element_class);
      if ( !v26 )
      {
        v152 = sub_21FFEF0(0, v28);
        sub_21FFD90(v152, 0);
      }
    }
    if ( (v23->max_length & 0xFFFFFFFE) == 0 )
      sub_21FFED4(v26);
    v23->m_Items[1] = (Il2CppObject *)Currency_k__BackingField;
    v29 = sub_21FFBF4(&v23->m_Items[1], Currency_k__BackingField);
    if ( !v19 )
      sub_21FFECC(v29, v30, v31);
    UnityEngine_AndroidJavaObject__Call(v19, (System_String_o *)StringLiteral_24550/*"setRevenue"*/, v23, 0);
    v32 = v161;
    if ( v161 )
    {
      klass = v161->klass;
      v34 = *(unsigned __int16 *)&v161->klass->_2.rank;
      if ( *(_WORD *)&v161->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v34;
          p_offset += 4;
          if ( !v34 )
            goto LABEL_26;
        }
        v36 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_26:
        v36 = sub_2237E2C(v161, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
    }
  }
  if ( adRevenue->fields._AdImpressionsCount_k__BackingField.fields.hasValue )
  {
    v37 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    *(struct System_Nullable_int__o *)&Revenue_k__BackingField.fields.hasValue = adRevenue->fields._AdImpressionsCount_k__BackingField;
    v38 = j_il2cpp_value_box_0(System_Nullable_int__TypeInfo, &Revenue_k__BackingField);
    if ( !v37 )
      sub_21FFECC(v38, v39, v40);
    v41 = (Il2CppObject *)v38;
    if ( v38 )
    {
      v38 = sub_21FFDA4(v38, v37->obj.klass->_1.element_class);
      if ( !v38 )
      {
        v151 = sub_21FFEF0(0, v42);
        sub_21FFD90(v151, 0);
      }
    }
    if ( !LODWORD(v37->max_length) )
      sub_21FFED4(v38);
    v37->m_Items[0] = v41;
    sub_21FFBF4(v37->m_Items, v41);
    v43 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v43, (System_String_o *)StringLiteral_22059/*"java.lang.Integer"*/, v37, 0);
    v44 = v162;
    v160 = v43;
    *(_QWORD *)&Revenue_k__BackingField.fields.hasValue = 0;
    *(_QWORD *)&Revenue_k__BackingField.fields.value = &v160;
    v45 = sub_21FFD10(object___TypeInfo, 1);
    v48 = v45;
    if ( !v45 )
      goto LABEL_135;
    v49 = v160;
    if ( v160 )
    {
      v45 = sub_21FFDA4(v160, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
      if ( !v45 )
      {
        v153 = sub_21FFEF0(0, v50);
        sub_21FFD90(v153, 0);
      }
    }
    if ( !*(_DWORD *)(v48 + 24) )
      sub_21FFED4(v45);
    *(_QWORD *)(v48 + 32) = v49;
    v45 = sub_21FFBF4(v48 + 32, v49);
    if ( !v44 )
LABEL_135:
      sub_21FFECC(v45, v46, v47);
    UnityEngine_AndroidJavaObject__Call(v44, (System_String_o *)StringLiteral_24493/*"setAdImpressionsCount"*/, (System_Object_array *)v48, 0);
    v51 = v160;
    if ( v160 )
    {
      v52 = v160->klass;
      v53 = *(unsigned __int16 *)&v160->klass->_2.rank;
      if ( *(_WORD *)&v160->klass->_2.rank )
      {
        v54 = &v52->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_44;
        }
        v55 = (__int64)&v52->vtable + 16 * *v54;
      }
      else
      {
LABEL_44:
        v55 = sub_2237E2C(v160, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
    }
  }
  if ( adRevenue->fields._AdRevenueNetwork_k__BackingField )
  {
    v56 = v162;
    v57 = sub_21FFD10(object___TypeInfo, 1);
    v60 = v57;
    if ( !v57 )
      goto LABEL_138;
    AdRevenueNetwork_k__BackingField = adRevenue->fields._AdRevenueNetwork_k__BackingField;
    if ( AdRevenueNetwork_k__BackingField )
    {
      v57 = sub_21FFDA4(adRevenue->fields._AdRevenueNetwork_k__BackingField, *(_QWORD *)(*(_QWORD *)v57 + 64LL));
      if ( !v57 )
      {
        v154 = sub_21FFEF0(0, v62);
        sub_21FFD90(v154, 0);
      }
    }
    if ( !*(_DWORD *)(v60 + 24) )
      sub_21FFED4(v57);
    *(_QWORD *)(v60 + 32) = AdRevenueNetwork_k__BackingField;
    v57 = sub_21FFBF4(v60 + 32, AdRevenueNetwork_k__BackingField);
    if ( !v56 )
LABEL_138:
      sub_21FFECC(v57, v58, v59);
    UnityEngine_AndroidJavaObject__Call(v56, (System_String_o *)StringLiteral_24494/*"setAdRevenueNetwork"*/, (System_Object_array *)v60, 0);
  }
  if ( adRevenue->fields._AdRevenueUnit_k__BackingField )
  {
    v63 = v162;
    v64 = sub_21FFD10(object___TypeInfo, 1);
    v67 = v64;
    if ( !v64 )
      goto LABEL_139;
    AdRevenueUnit_k__BackingField = adRevenue->fields._AdRevenueUnit_k__BackingField;
    if ( AdRevenueUnit_k__BackingField )
    {
      v64 = sub_21FFDA4(adRevenue->fields._AdRevenueUnit_k__BackingField, *(_QWORD *)(*(_QWORD *)v64 + 64LL));
      if ( !v64 )
      {
        v155 = sub_21FFEF0(0, v69);
        sub_21FFD90(v155, 0);
      }
    }
    if ( !*(_DWORD *)(v67 + 24) )
      sub_21FFED4(v64);
    *(_QWORD *)(v67 + 32) = AdRevenueUnit_k__BackingField;
    v64 = sub_21FFBF4(v67 + 32, AdRevenueUnit_k__BackingField);
    if ( !v63 )
LABEL_139:
      sub_21FFECC(v64, v65, v66);
    UnityEngine_AndroidJavaObject__Call(v63, (System_String_o *)StringLiteral_24496/*"setAdRevenueUnit"*/, (System_Object_array *)v67, 0);
  }
  if ( adRevenue->fields._AdRevenuePlacement_k__BackingField )
  {
    v70 = v162;
    v71 = sub_21FFD10(object___TypeInfo, 1);
    v74 = v71;
    if ( !v71 )
      goto LABEL_140;
    AdRevenuePlacement_k__BackingField = adRevenue->fields._AdRevenuePlacement_k__BackingField;
    if ( AdRevenuePlacement_k__BackingField )
    {
      v71 = sub_21FFDA4(adRevenue->fields._AdRevenuePlacement_k__BackingField, *(_QWORD *)(*(_QWORD *)v71 + 64LL));
      if ( !v71 )
      {
        v156 = sub_21FFEF0(0, v76);
        sub_21FFD90(v156, 0);
      }
    }
    if ( !*(_DWORD *)(v74 + 24) )
      sub_21FFED4(v71);
    *(_QWORD *)(v74 + 32) = AdRevenuePlacement_k__BackingField;
    v71 = sub_21FFBF4(v74 + 32, AdRevenuePlacement_k__BackingField);
    if ( !v70 )
LABEL_140:
      sub_21FFECC(v71, v72, v73);
    UnityEngine_AndroidJavaObject__Call(v70, (System_String_o *)StringLiteral_24495/*"setAdRevenuePlacement"*/, (System_Object_array *)v74, 0);
  }
  if ( AdjustSdk_AdjustAdRevenue__get_CallbackParameters(adRevenue, v10) )
  {
    for ( i = 0; ; i = v90 + 1 )
    {
      CallbackParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_CallbackParameters(
                                                                                       adRevenue,
                                                                                       v77);
      if ( !CallbackParameters )
        sub_21FFECC(0, v80, v81);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  CallbackParameters,
                  (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v82 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_CallbackParameters(
                                                                        adRevenue,
                                                                        v77);
      if ( !v82 )
        sub_21FFECC(0, v83, v84);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v82,
               i,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v87 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_CallbackParameters(
                                                                        adRevenue,
                                                                        v86);
      if ( !v87 )
        sub_21FFECC(0, v88, v89);
      v90 = i + 1;
      v91 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v87,
              v90,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v92 = v162;
      v93 = sub_21FFD10(object___TypeInfo, 2);
      v96 = (System_Object_array *)v93;
      if ( !v93 )
        sub_21FFECC(0, v94, v95);
      if ( Item )
      {
        v93 = sub_21FFDA4(Item, *(_QWORD *)(*(_QWORD *)v93 + 64LL));
        if ( !v93 )
        {
          v144 = sub_21FFEF0(0, v97);
          sub_21FFD90(v144, 0);
        }
      }
      if ( !LODWORD(v96->max_length) )
        sub_21FFED4(v93);
      v96->m_Items[0] = Item;
      v98 = sub_21FFBF4(v96->m_Items, Item);
      if ( v91 )
      {
        v98 = sub_21FFDA4(v91, v96->obj.klass->_1.element_class);
        if ( !v98 )
        {
          v143 = sub_21FFEF0(0, v99);
          sub_21FFD90(v143, 0);
        }
      }
      if ( (v96->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v98);
      v96->m_Items[1] = v91;
      v100 = sub_21FFBF4(&v96->m_Items[1], v91);
      if ( !v92 )
        sub_21FFECC(v100, v101, v102);
      UnityEngine_AndroidJavaObject__Call(v92, (System_String_o *)StringLiteral_17314/*"addCallbackParameter"*/, v96, 0);
    }
  }
  if ( AdjustSdk_AdjustAdRevenue__get_PartnerParameters(adRevenue, v77) )
  {
    for ( j = 0; ; j = v117 + 1 )
    {
      PartnerParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_PartnerParameters(
                                                                                      adRevenue,
                                                                                      v103);
      if ( !PartnerParameters )
        sub_21FFECC(0, v107, v108);
      if ( j >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerParameters,
                  (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v109 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_PartnerParameters(
                                                                         adRevenue,
                                                                         v103);
      if ( !v109 )
        sub_21FFECC(0, v110, v111);
      v112 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v109,
               j,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v114 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustAdRevenue__get_PartnerParameters(
                                                                         adRevenue,
                                                                         v113);
      if ( !v114 )
        sub_21FFECC(0, v115, v116);
      v117 = j + 1;
      v118 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v114,
               v117,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v119 = v162;
      v120 = sub_21FFD10(object___TypeInfo, 2);
      v123 = (System_Object_array *)v120;
      if ( !v120 )
        sub_21FFECC(0, v121, v122);
      if ( v112 )
      {
        v120 = sub_21FFDA4(v112, *(_QWORD *)(*(_QWORD *)v120 + 64LL));
        if ( !v120 )
        {
          v146 = sub_21FFEF0(0, v124);
          sub_21FFD90(v146, 0);
        }
      }
      if ( !LODWORD(v123->max_length) )
        sub_21FFED4(v120);
      v123->m_Items[0] = v112;
      v125 = sub_21FFBF4(v123->m_Items, v112);
      if ( v118 )
      {
        v125 = sub_21FFDA4(v118, v123->obj.klass->_1.element_class);
        if ( !v125 )
        {
          v145 = sub_21FFEF0(0, v126);
          sub_21FFD90(v145, 0);
        }
      }
      if ( (v123->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v125);
      v123->m_Items[1] = v118;
      v127 = sub_21FFBF4(&v123->m_Items[1], v118);
      if ( !v119 )
        sub_21FFECC(v127, v128, v129);
      UnityEngine_AndroidJavaObject__Call(v119, (System_String_o *)StringLiteral_17327/*"addPartnerParameter"*/, v123, 0);
    }
  }
  v130 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v103, v104);
    v130 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v130->static_fields->ajcAdjust;
  v132 = sub_21FFD10(object___TypeInfo, 1);
  v135 = v132;
  if ( !v132 )
    goto LABEL_134;
  v136 = v162;
  if ( v162 )
  {
    v132 = sub_21FFDA4(v162, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
    if ( !v132 )
    {
      v148 = sub_21FFEF0(0, v137);
      sub_21FFD90(v148, 0);
    }
  }
  if ( !*(_DWORD *)(v135 + 24) )
    sub_21FFED4(v132);
  *(_QWORD *)(v135 + 32) = v136;
  v132 = sub_21FFBF4(v135 + 32, v136);
  if ( !ajcAdjust )
LABEL_134:
    sub_21FFECC(v132, v133, v134);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_25401/*"trackAdRevenue"*/,
    (System_Object_array *)v135,
    0);
  v138 = *v159;
  if ( *v159 )
  {
    v139 = v138->klass;
    v140 = *(unsigned __int16 *)&v138->klass->_2.rank;
    if ( *(_WORD *)&v138->klass->_2.rank )
    {
      v141 = &v139->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v141 - 1) != System_IDisposable_TypeInfo )
      {
        --v140;
        v141 += 4;
        if ( !v140 )
          goto LABEL_110;
      }
      v142 = (__int64)&v139->vtable + 16 * *v141;
    }
    else
    {
LABEL_110:
      v142 = sub_2237E2C(*v159, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v142)(v138, *(_QWORD *)(v142 + 8));
  }
  if ( v158 )
    sub_21FFEC4(v158);
}


void AdjustSdk_AdjustAndroid__TrackEvent(AdjustSdk_AdjustEvent_o *adjustEvent, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x21
  struct System_String_o *EventToken_k__BackingField; // x20
  UnityEngine_AndroidJavaObject_o *v8; // x20
  const MethodInfo *v9; // x1
  struct System_Nullable_double__o Revenue_k__BackingField; // q0
  System_Object_array *v11; // x21
  const MethodInfo_45AEF04 *v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x22
  __int64 v17; // x0
  struct System_String_o *Currency_k__BackingField; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x1
  int32_t i; // w20
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *CallbackParameters; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *Item; // x24
  const MethodInfo *v31; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t v35; // w20
  Il2CppObject *v36; // x23
  UnityEngine_AndroidJavaObject_o *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Object_array *v41; // x22
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  const MethodInfo *v46; // x1
  __int64 v47; // x2
  int32_t j; // w20
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerParameters; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  Il2CppObject *v55; // x24
  const MethodInfo *v56; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  int32_t v60; // w20
  Il2CppObject *v61; // x23
  UnityEngine_AndroidJavaObject_o *v62; // x21
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  System_Object_array *v66; // x22
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  UnityEngine_AndroidJavaObject_o *v71; // x20
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x21
  struct System_String_o *DeduplicationId_k__BackingField; // x22
  UnityEngine_AndroidJavaObject_o *v77; // x20
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x21
  struct System_String_o *CallbackId_k__BackingField; // x22
  UnityEngine_AndroidJavaObject_o *v83; // x20
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x21
  struct System_String_o *ProductId_k__BackingField; // x22
  UnityEngine_AndroidJavaObject_o *v89; // x20
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x21
  struct System_String_o *PurchaseToken; // x19
  AdjustSdk_AdjustAndroid_c *v95; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x20
  UnityEngine_AndroidJavaObject_o *v101; // x21
  UnityEngine_AndroidJavaObject_o *v102; // x20
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v104; // x9
  int *p_offset; // x10
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
  _QWORD v119[3]; // [xsp+8h] [xbp-88h] BYREF
  struct System_Nullable_double__o v120; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_AndroidJavaObject_o *v121; // [xsp+38h] [xbp-58h] BYREF
  System_Nullable_double__o v122; // 0:x0.16

  if ( (byte_593043A & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_double__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_double__get_Value__);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_21FFC50(&StringLiteral_17327/*"addPartnerParameter"*/);
    sub_21FFC50(&StringLiteral_24506/*"setDeduplicationId"*/);
    sub_21FFC50(&StringLiteral_24546/*"setPurchaseToken"*/);
    sub_21FFC50(&StringLiteral_25406/*"trackEvent"*/);
    sub_21FFC50(&StringLiteral_24498/*"setCallbackId"*/);
    sub_21FFC50(&StringLiteral_24542/*"setProductId"*/);
    sub_21FFC50(&StringLiteral_17314/*"addCallbackParameter"*/);
    sub_21FFC50(&StringLiteral_18833/*"com.adjust.sdk.AdjustEvent"*/);
    sub_21FFC50(&StringLiteral_24550/*"setRevenue"*/);
    byte_593043A = 1;
  }
  v121 = 0;
  v120 = (struct System_Nullable_double__o)0LL;
  v3 = sub_21FFD10(object___TypeInfo, 1);
  if ( !adjustEvent || (v6 = v3) == 0 )
    sub_21FFECC(v3, v4, v5);
  EventToken_k__BackingField = adjustEvent->fields._EventToken_k__BackingField;
  if ( EventToken_k__BackingField
    && !sub_21FFDA4(adjustEvent->fields._EventToken_k__BackingField, *(_QWORD *)(*(_QWORD *)v3 + 64LL)) )
  {
    v111 = sub_21FFEF0();
    sub_21FFD90(v111, 0);
  }
  if ( !*(_DWORD *)(v6 + 24) )
    ((void (__noreturn *)(void))sub_21FFED4)();
  *(_QWORD *)(v6 + 32) = EventToken_k__BackingField;
  sub_21FFBF4(v6 + 32, EventToken_k__BackingField);
  v8 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(
    v8,
    (System_String_o *)StringLiteral_18833/*"com.adjust.sdk.AdjustEvent"*/,
    (System_Object_array *)v6,
    0);
  Revenue_k__BackingField = adjustEvent->fields._Revenue_k__BackingField;
  v121 = v8;
  v119[1] = 0;
  v119[2] = &v121;
  v120 = Revenue_k__BackingField;
  if ( Revenue_k__BackingField.fields.hasValue )
  {
    v11 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 2);
    *(_QWORD *)&v122.fields.value = Method_System_Nullable_double__get_Value__;
    v120 = adjustEvent->fields._Revenue_k__BackingField;
    *(_QWORD *)&v122.fields.hasValue = &v120;
    v119[0] = System_Nullable_double___get_Value(v122, v12);
    v13 = j_il2cpp_value_box_0(qword_594C0A8, v119);
    if ( !v11 )
      sub_21FFECC(v13, v14, v15);
    v16 = (Il2CppObject *)v13;
    if ( v13 && !sub_21FFDA4(v13, v11->obj.klass->_1.element_class) )
    {
      v113 = sub_21FFEF0();
      sub_21FFD90(v113, 0);
    }
    if ( !LODWORD(v11->max_length) )
      ((void (__noreturn *)(void))sub_21FFED4)();
    v11->m_Items[0] = v16;
    v17 = sub_21FFBF4(v11->m_Items, v16);
    Currency_k__BackingField = adjustEvent->fields._Currency_k__BackingField;
    if ( Currency_k__BackingField )
    {
      v17 = sub_21FFDA4(adjustEvent->fields._Currency_k__BackingField, v11->obj.klass->_1.element_class);
      if ( !v17 )
      {
        v114 = sub_21FFEF0();
        sub_21FFD90(v114, 0);
      }
    }
    if ( (v11->max_length & 0xFFFFFFFE) == 0 )
      sub_21FFED4(v17);
    v11->m_Items[1] = (Il2CppObject *)Currency_k__BackingField;
    v19 = sub_21FFBF4(&v11->m_Items[1], Currency_k__BackingField);
    if ( !v8 )
      sub_21FFECC(v19, v20, v21);
    UnityEngine_AndroidJavaObject__Call(v8, (System_String_o *)StringLiteral_24550/*"setRevenue"*/, v11, 0);
  }
  if ( AdjustSdk_AdjustEvent__get_CallbackParameters(adjustEvent, v9) )
  {
    for ( i = 0; ; i = v35 + 1 )
    {
      CallbackParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                                       adjustEvent,
                                                                                       v22);
      if ( !CallbackParameters )
        sub_21FFECC(0, v25, v26);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  CallbackParameters,
                  (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v27 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                        adjustEvent,
                                                                        v22);
      if ( !v27 )
        sub_21FFECC(0, v28, v29);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v27,
               i,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v32 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                        adjustEvent,
                                                                        v31);
      if ( !v32 )
        sub_21FFECC(0, v33, v34);
      v35 = i + 1;
      v36 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v32,
              v35,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v37 = v121;
      v38 = sub_21FFD10(object___TypeInfo, 2);
      v41 = (System_Object_array *)v38;
      if ( !v38 )
        sub_21FFECC(0, v39, v40);
      if ( Item )
      {
        v38 = sub_21FFDA4(Item, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
        if ( !v38 )
        {
          v108 = sub_21FFEF0();
          sub_21FFD90(v108, 0);
        }
      }
      if ( !LODWORD(v41->max_length) )
        sub_21FFED4(v38);
      v41->m_Items[0] = Item;
      v42 = sub_21FFBF4(v41->m_Items, Item);
      if ( v36 )
      {
        v42 = sub_21FFDA4(v36, v41->obj.klass->_1.element_class);
        if ( !v42 )
        {
          v107 = sub_21FFEF0();
          sub_21FFD90(v107, 0);
        }
      }
      if ( (v41->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v42);
      v41->m_Items[1] = v36;
      v43 = sub_21FFBF4(&v41->m_Items[1], v36);
      if ( !v37 )
        sub_21FFECC(v43, v44, v45);
      UnityEngine_AndroidJavaObject__Call(v37, (System_String_o *)StringLiteral_17314/*"addCallbackParameter"*/, v41, 0);
    }
  }
  if ( AdjustSdk_AdjustEvent__get_PartnerParameters(adjustEvent, v22) )
  {
    for ( j = 0; ; j = v60 + 1 )
    {
      PartnerParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                                      adjustEvent,
                                                                                      v46);
      if ( !PartnerParameters )
        sub_21FFECC(0, v50, v51);
      if ( j >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerParameters,
                  (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v52 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                        adjustEvent,
                                                                        v46);
      if ( !v52 )
        sub_21FFECC(0, v53, v54);
      v55 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v52,
              j,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v57 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                        adjustEvent,
                                                                        v56);
      if ( !v57 )
        sub_21FFECC(0, v58, v59);
      v60 = j + 1;
      v61 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v57,
              v60,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v62 = v121;
      v63 = sub_21FFD10(object___TypeInfo, 2);
      v66 = (System_Object_array *)v63;
      if ( !v63 )
        sub_21FFECC(0, v64, v65);
      if ( v55 )
      {
        v63 = sub_21FFDA4(v55, *(_QWORD *)(*(_QWORD *)v63 + 64LL));
        if ( !v63 )
        {
          v110 = sub_21FFEF0();
          sub_21FFD90(v110, 0);
        }
      }
      if ( !LODWORD(v66->max_length) )
        sub_21FFED4(v63);
      v66->m_Items[0] = v55;
      v67 = sub_21FFBF4(v66->m_Items, v55);
      if ( v61 )
      {
        v67 = sub_21FFDA4(v61, v66->obj.klass->_1.element_class);
        if ( !v67 )
        {
          v109 = sub_21FFEF0();
          sub_21FFD90(v109, 0);
        }
      }
      if ( (v66->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v67);
      v66->m_Items[1] = v61;
      v68 = sub_21FFBF4(&v66->m_Items[1], v61);
      if ( !v62 )
        sub_21FFECC(v68, v69, v70);
      UnityEngine_AndroidJavaObject__Call(v62, (System_String_o *)StringLiteral_17327/*"addPartnerParameter"*/, v66, 0);
    }
  }
  if ( adjustEvent->fields._DeduplicationId_k__BackingField )
  {
    v71 = v121;
    v72 = sub_21FFD10(object___TypeInfo, 1);
    v75 = v72;
    if ( !v72 )
      goto LABEL_112;
    DeduplicationId_k__BackingField = adjustEvent->fields._DeduplicationId_k__BackingField;
    if ( DeduplicationId_k__BackingField )
    {
      v72 = sub_21FFDA4(adjustEvent->fields._DeduplicationId_k__BackingField, *(_QWORD *)(*(_QWORD *)v72 + 64LL));
      if ( !v72 )
      {
        v115 = sub_21FFEF0();
        sub_21FFD90(v115, 0);
      }
    }
    if ( !*(_DWORD *)(v75 + 24) )
      sub_21FFED4(v72);
    *(_QWORD *)(v75 + 32) = DeduplicationId_k__BackingField;
    v72 = sub_21FFBF4(v75 + 32, DeduplicationId_k__BackingField);
    if ( !v71 )
LABEL_112:
      sub_21FFECC(v72, v73, v74);
    UnityEngine_AndroidJavaObject__Call(v71, (System_String_o *)StringLiteral_24506/*"setDeduplicationId"*/, (System_Object_array *)v75, 0);
  }
  if ( adjustEvent->fields._CallbackId_k__BackingField )
  {
    v77 = v121;
    v78 = sub_21FFD10(object___TypeInfo, 1);
    v81 = v78;
    if ( !v78 )
      goto LABEL_113;
    CallbackId_k__BackingField = adjustEvent->fields._CallbackId_k__BackingField;
    if ( CallbackId_k__BackingField )
    {
      v78 = sub_21FFDA4(adjustEvent->fields._CallbackId_k__BackingField, *(_QWORD *)(*(_QWORD *)v78 + 64LL));
      if ( !v78 )
      {
        v116 = sub_21FFEF0();
        sub_21FFD90(v116, 0);
      }
    }
    if ( !*(_DWORD *)(v81 + 24) )
      sub_21FFED4(v78);
    *(_QWORD *)(v81 + 32) = CallbackId_k__BackingField;
    v78 = sub_21FFBF4(v81 + 32, CallbackId_k__BackingField);
    if ( !v77 )
LABEL_113:
      sub_21FFECC(v78, v79, v80);
    UnityEngine_AndroidJavaObject__Call(v77, (System_String_o *)StringLiteral_24498/*"setCallbackId"*/, (System_Object_array *)v81, 0);
  }
  if ( adjustEvent->fields._ProductId_k__BackingField )
  {
    v83 = v121;
    v84 = sub_21FFD10(object___TypeInfo, 1);
    v87 = v84;
    if ( !v84 )
      goto LABEL_114;
    ProductId_k__BackingField = adjustEvent->fields._ProductId_k__BackingField;
    if ( ProductId_k__BackingField )
    {
      v84 = sub_21FFDA4(adjustEvent->fields._ProductId_k__BackingField, *(_QWORD *)(*(_QWORD *)v84 + 64LL));
      if ( !v84 )
      {
        v117 = sub_21FFEF0();
        sub_21FFD90(v117, 0);
      }
    }
    if ( !*(_DWORD *)(v87 + 24) )
      sub_21FFED4(v84);
    *(_QWORD *)(v87 + 32) = ProductId_k__BackingField;
    v84 = sub_21FFBF4(v87 + 32, ProductId_k__BackingField);
    if ( !v83 )
LABEL_114:
      sub_21FFECC(v84, v85, v86);
    UnityEngine_AndroidJavaObject__Call(v83, (System_String_o *)StringLiteral_24542/*"setProductId"*/, (System_Object_array *)v87, 0);
  }
  if ( adjustEvent->fields.PurchaseToken )
  {
    v89 = v121;
    v90 = sub_21FFD10(object___TypeInfo, 1);
    v93 = v90;
    if ( !v90 )
      goto LABEL_115;
    PurchaseToken = adjustEvent->fields.PurchaseToken;
    if ( PurchaseToken )
    {
      v90 = sub_21FFDA4(PurchaseToken, *(_QWORD *)(*(_QWORD *)v90 + 64LL));
      if ( !v90 )
      {
        v118 = sub_21FFEF0();
        sub_21FFD90(v118, 0);
      }
    }
    if ( !*(_DWORD *)(v93 + 24) )
      sub_21FFED4(v90);
    *(_QWORD *)(v93 + 32) = PurchaseToken;
    v90 = sub_21FFBF4(v93 + 32, PurchaseToken);
    if ( !v89 )
LABEL_115:
      sub_21FFECC(v90, v91, v92);
    UnityEngine_AndroidJavaObject__Call(v89, (System_String_o *)StringLiteral_24546/*"setPurchaseToken"*/, (System_Object_array *)v93, 0);
  }
  v95 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v46, v47);
    v95 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v95->static_fields->ajcAdjust;
  v97 = sub_21FFD10(object___TypeInfo, 1);
  v100 = v97;
  if ( !v97 )
    goto LABEL_111;
  v101 = v121;
  if ( v121 )
  {
    v97 = sub_21FFDA4(v121, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
    if ( !v97 )
    {
      v112 = sub_21FFEF0();
      sub_21FFD90(v112, 0);
    }
  }
  if ( !*(_DWORD *)(v100 + 24) )
    sub_21FFED4(v97);
  *(_QWORD *)(v100 + 32) = v101;
  v97 = sub_21FFBF4(v100 + 32, v101);
  if ( !ajcAdjust )
LABEL_111:
    sub_21FFECC(v97, v98, v99);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_25406/*"trackEvent"*/,
    (System_Object_array *)v100,
    0);
  v102 = v121;
  if ( v121 )
  {
    klass = v121->klass;
    v104 = *(unsigned __int16 *)&v121->klass->_2.rank;
    if ( *(_WORD *)&v121->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v104;
        p_offset += 4;
        if ( !v104 )
          goto LABEL_88;
      }
      v106 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_88:
      v106 = sub_2237E2C(v121, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v106)(v102, *(_QWORD *)(v106 + 8));
  }
}


void AdjustSdk_AdjustAndroid__TrackMeasurementConsent(bool measurementConsent, const MethodInfo *method)
{
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_c *v4; // x0
  bool v5; // w21
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  System_Object_array *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x0
  bool v14[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593044F & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_25409/*"trackMeasurementConsent"*/);
    byte_593044F = 1;
  }
  v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  v5 = measurementConsent;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, method, v2);
    v4 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v4->static_fields->ajcAdjust;
  v7 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
  v14[0] = v5;
  v8 = j_il2cpp_value_box_0(qword_594C050, v14);
  if ( !v7 )
    goto LABEL_11;
  v11 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_21FFDA4(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
      v13 = sub_21FFEF0(0, v12);
      sub_21FFD90(v13, 0);
    }
  }
  if ( !LODWORD(v7->max_length) )
    sub_21FFED4(v8);
  v7->m_Items[0] = v11;
  v8 = sub_21FFBF4(v7->m_Items, v11);
  if ( !ajcAdjust )
LABEL_11:
    sub_21FFECC(v8, v9, v10);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_25409/*"trackMeasurementConsent"*/, v7, 0);
}


void AdjustSdk_AdjustAndroid__TrackPlayStoreSubscription(
        AdjustSdk_AdjustPlayStoreSubscription_o *subscription,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_Object_array *v6; // x20
  System_String_o *Price_k__BackingField; // x21
  Il2CppObject *v8; // x21
  __int64 v9; // x1
  struct System_String_o *Currency_k__BackingField; // x21
  struct System_String_o *ProductId_k__BackingField; // x21
  struct System_String_o *OrderId_k__BackingField; // x21
  struct System_String_o *Signature_k__BackingField; // x21
  struct System_String_o *PurchaseToken_k__BackingField; // x21
  UnityEngine_AndroidJavaObject_o *v15; // x21
  const MethodInfo *v16; // x1
  struct System_String_o *PurchaseTime_k__BackingField; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  System_Object_array *v20; // x20
  System_String_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  const MethodInfo *v27; // x1
  int32_t i; // w20
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *CallbackParameters; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *Item; // x24
  const MethodInfo *v36; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  int32_t v40; // w20
  Il2CppObject *v41; // x23
  UnityEngine_AndroidJavaObject_o *v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  System_Object_array *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  const MethodInfo *v53; // x1
  __int64 v54; // x2
  int32_t j; // w20
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerParameters; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  Il2CppObject *v62; // x24
  const MethodInfo *v63; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  int32_t v67; // w20
  Il2CppObject *v68; // x23
  UnityEngine_AndroidJavaObject_o *v69; // x21
  __int64 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  System_Object_array *v73; // x22
  __int64 v74; // x1
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  AdjustSdk_AdjustAndroid_c *v80; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x20
  UnityEngine_AndroidJavaObject_o *v86; // x21
  __int64 v87; // x1
  UnityEngine_AndroidJavaObject_o *v88; // x20
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v90; // x9
  int *p_offset; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  int64_t v100; // [xsp+8h] [xbp-78h] BYREF
  _QWORD v101[2]; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_AndroidJavaObject_o *v102; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_593044D & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_21FFC50(&StringLiteral_17327/*"addPartnerParameter"*/);
    sub_21FFC50(&StringLiteral_24545/*"setPurchaseTime"*/);
    sub_21FFC50(&StringLiteral_18835/*"com.adjust.sdk.AdjustPlayStoreSubscription"*/);
    sub_21FFC50(&StringLiteral_17314/*"addCallbackParameter"*/);
    sub_21FFC50(&StringLiteral_25410/*"trackPlayStoreSubscription"*/);
    byte_593044D = 1;
  }
  v102 = 0;
  v3 = sub_21FFD10(object___TypeInfo, 6);
  if ( !subscription )
    goto LABEL_100;
  v6 = (System_Object_array *)v3;
  Price_k__BackingField = subscription->fields._Price_k__BackingField;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v4, v5);
  v101[0] = System_Convert__ToInt64_76476152(Price_k__BackingField, 0);
  v3 = j_il2cpp_value_box_0(qword_594C090, v101);
  if ( !v6 )
LABEL_100:
    sub_21FFECC(v3, v4, v5);
  v8 = (Il2CppObject *)v3;
  if ( v3 )
  {
    v3 = sub_21FFDA4(v3, v6->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( !LODWORD(v6->max_length) )
    goto LABEL_98;
  v6->m_Items[0] = v8;
  v3 = sub_21FFBF4(v6->m_Items, v8);
  Currency_k__BackingField = subscription->fields._Currency_k__BackingField;
  if ( Currency_k__BackingField )
  {
    v3 = sub_21FFDA4(subscription->fields._Currency_k__BackingField, v6->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( (v6->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_98;
  v6->m_Items[1] = (Il2CppObject *)Currency_k__BackingField;
  v3 = sub_21FFBF4(&v6->m_Items[1], Currency_k__BackingField);
  ProductId_k__BackingField = subscription->fields._ProductId_k__BackingField;
  if ( ProductId_k__BackingField )
  {
    v3 = sub_21FFDA4(subscription->fields._ProductId_k__BackingField, v6->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( LODWORD(v6->max_length) <= 2 )
    goto LABEL_98;
  v6->m_Items[2] = (Il2CppObject *)ProductId_k__BackingField;
  v3 = sub_21FFBF4(&v6->m_Items[2], ProductId_k__BackingField);
  OrderId_k__BackingField = subscription->fields._OrderId_k__BackingField;
  if ( OrderId_k__BackingField )
  {
    v3 = sub_21FFDA4(subscription->fields._OrderId_k__BackingField, v6->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( (v6->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_98;
  v6->m_Items[3] = (Il2CppObject *)OrderId_k__BackingField;
  v3 = sub_21FFBF4(&v6->m_Items[3], OrderId_k__BackingField);
  Signature_k__BackingField = subscription->fields._Signature_k__BackingField;
  if ( Signature_k__BackingField )
  {
    v3 = sub_21FFDA4(subscription->fields._Signature_k__BackingField, v6->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_99;
  }
  if ( LODWORD(v6->max_length) <= 4 )
    goto LABEL_98;
  v6->m_Items[4] = (Il2CppObject *)Signature_k__BackingField;
  v3 = sub_21FFBF4(&v6->m_Items[4], Signature_k__BackingField);
  PurchaseToken_k__BackingField = subscription->fields._PurchaseToken_k__BackingField;
  if ( PurchaseToken_k__BackingField )
  {
    v3 = sub_21FFDA4(subscription->fields._PurchaseToken_k__BackingField, v6->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_99:
      v97 = sub_21FFEF0(v3, v9);
      sub_21FFD90(v97, 0);
    }
  }
  if ( LODWORD(v6->max_length) <= 5 )
LABEL_98:
    sub_21FFED4(v3);
  v6->m_Items[5] = (Il2CppObject *)PurchaseToken_k__BackingField;
  sub_21FFBF4(&v6->m_Items[5], PurchaseToken_k__BackingField);
  v15 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(v15, (System_String_o *)StringLiteral_18835/*"com.adjust.sdk.AdjustPlayStoreSubscription"*/, v6, 0);
  PurchaseTime_k__BackingField = subscription->fields._PurchaseTime_k__BackingField;
  v102 = v15;
  v101[0] = 0;
  v101[1] = &v102;
  if ( PurchaseTime_k__BackingField )
  {
    v20 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    v21 = subscription->fields._PurchaseTime_k__BackingField;
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v18, v19);
    v100 = System_Convert__ToInt64_76476152(v21, 0);
    v22 = j_il2cpp_value_box_0(qword_594C090, &v100);
    if ( !v20 )
      goto LABEL_102;
    v25 = (Il2CppObject *)v22;
    if ( v22 )
    {
      v22 = sub_21FFDA4(v22, v20->obj.klass->_1.element_class);
      if ( !v22 )
      {
        v99 = sub_21FFEF0(0, v26);
        sub_21FFD90(v99, 0);
      }
    }
    if ( !LODWORD(v20->max_length) )
      sub_21FFED4(v22);
    v20->m_Items[0] = v25;
    v22 = sub_21FFBF4(v20->m_Items, v25);
    if ( !v15 )
LABEL_102:
      sub_21FFECC(v22, v23, v24);
    UnityEngine_AndroidJavaObject__Call(v15, (System_String_o *)StringLiteral_24545/*"setPurchaseTime"*/, v20, 0);
  }
  if ( AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(subscription, v16) )
  {
    for ( i = 0; ; i = v40 + 1 )
    {
      CallbackParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(
                                                                                       subscription,
                                                                                       v27);
      if ( !CallbackParameters )
        sub_21FFECC(0, v30, v31);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  CallbackParameters,
                  (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v32 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(
                                                                        subscription,
                                                                        v27);
      if ( !v32 )
        sub_21FFECC(0, v33, v34);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v32,
               i,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v37 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(
                                                                        subscription,
                                                                        v36);
      if ( !v37 )
        sub_21FFECC(0, v38, v39);
      v40 = i + 1;
      v41 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v37,
              v40,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v42 = v102;
      v43 = sub_21FFD10(object___TypeInfo, 2);
      v46 = (System_Object_array *)v43;
      if ( !v43 )
        sub_21FFECC(0, v44, v45);
      if ( Item )
      {
        v43 = sub_21FFDA4(Item, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
        if ( !v43 )
        {
          v94 = sub_21FFEF0(0, v47);
          sub_21FFD90(v94, 0);
        }
      }
      if ( !LODWORD(v46->max_length) )
        sub_21FFED4(v43);
      v46->m_Items[0] = Item;
      v48 = sub_21FFBF4(v46->m_Items, Item);
      if ( v41 )
      {
        v48 = sub_21FFDA4(v41, v46->obj.klass->_1.element_class);
        if ( !v48 )
        {
          v93 = sub_21FFEF0(0, v49);
          sub_21FFD90(v93, 0);
        }
      }
      if ( (v46->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v48);
      v46->m_Items[1] = v41;
      v50 = sub_21FFBF4(&v46->m_Items[1], v41);
      if ( !v42 )
        sub_21FFECC(v50, v51, v52);
      UnityEngine_AndroidJavaObject__Call(v42, (System_String_o *)StringLiteral_17314/*"addCallbackParameter"*/, v46, 0);
    }
  }
  if ( AdjustSdk_AdjustPlayStoreSubscription__get_PartnerParameters(subscription, v27) )
  {
    for ( j = 0; ; j = v67 + 1 )
    {
      PartnerParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_PartnerParameters(
                                                                                      subscription,
                                                                                      v53);
      if ( !PartnerParameters )
        sub_21FFECC(0, v57, v58);
      if ( j >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerParameters,
                  (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v59 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_PartnerParameters(
                                                                        subscription,
                                                                        v53);
      if ( !v59 )
        sub_21FFECC(0, v60, v61);
      v62 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v59,
              j,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v64 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustPlayStoreSubscription__get_PartnerParameters(
                                                                        subscription,
                                                                        v63);
      if ( !v64 )
        sub_21FFECC(0, v65, v66);
      v67 = j + 1;
      v68 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v64,
              v67,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v69 = v102;
      v70 = sub_21FFD10(object___TypeInfo, 2);
      v73 = (System_Object_array *)v70;
      if ( !v70 )
        sub_21FFECC(0, v71, v72);
      if ( v62 )
      {
        v70 = sub_21FFDA4(v62, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
        if ( !v70 )
        {
          v96 = sub_21FFEF0(0, v74);
          sub_21FFD90(v96, 0);
        }
      }
      if ( !LODWORD(v73->max_length) )
        sub_21FFED4(v70);
      v73->m_Items[0] = v62;
      v75 = sub_21FFBF4(v73->m_Items, v62);
      if ( v68 )
      {
        v75 = sub_21FFDA4(v68, v73->obj.klass->_1.element_class);
        if ( !v75 )
        {
          v95 = sub_21FFEF0(0, v76);
          sub_21FFD90(v95, 0);
        }
      }
      if ( (v73->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v75);
      v73->m_Items[1] = v68;
      v77 = sub_21FFBF4(&v73->m_Items[1], v68);
      if ( !v69 )
        sub_21FFECC(v77, v78, v79);
      UnityEngine_AndroidJavaObject__Call(v69, (System_String_o *)StringLiteral_17327/*"addPartnerParameter"*/, v73, 0);
    }
  }
  v80 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v53, v54);
    v80 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v80->static_fields->ajcAdjust;
  v82 = sub_21FFD10(object___TypeInfo, 1);
  v85 = v82;
  if ( !v82 )
    goto LABEL_101;
  v86 = v102;
  if ( v102 )
  {
    v82 = sub_21FFDA4(v102, *(_QWORD *)(*(_QWORD *)v82 + 64LL));
    if ( !v82 )
    {
      v98 = sub_21FFEF0(0, v87);
      sub_21FFD90(v98, 0);
    }
  }
  if ( !*(_DWORD *)(v85 + 24) )
    sub_21FFED4(v82);
  *(_QWORD *)(v85 + 32) = v86;
  v82 = sub_21FFBF4(v85 + 32, v86);
  if ( !ajcAdjust )
LABEL_101:
    sub_21FFECC(v82, v83, v84);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_25410/*"trackPlayStoreSubscription"*/,
    (System_Object_array *)v85,
    0);
  v88 = v102;
  if ( v102 )
  {
    klass = v102->klass;
    v90 = *(unsigned __int16 *)&v102->klass->_2.rank;
    if ( *(_WORD *)&v102->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v90;
        p_offset += 4;
        if ( !v90 )
          goto LABEL_76;
      }
      v92 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_76:
      v92 = sub_2237E2C(v102, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8));
  }
}


void AdjustSdk_AdjustAndroid__TrackThirdPartySharing(
        AdjustSdk_AdjustThirdPartySharing_o *thirdPartySharing,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AdjustSdk_AdjustThirdPartySharing_o *v3; // x19
  __int64 v4; // x20
  System_Object_array *v5; // x21
  struct System_Nullable_bool__o *p_IsEnabled_k__BackingField; // x0
  AdjustSdk_AdjustThirdPartySharing_o *v7; // x22
  __int64 v8; // x1
  UnityEngine_AndroidJavaObject_o *v9; // x22
  UnityEngine_AndroidJavaObject_o *v10; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int32_t v13; // w20
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *GranularOptions; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Item; // x25
  const MethodInfo *v21; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t v25; // w20
  Il2CppObject *v26; // x24
  const MethodInfo *v27; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  int32_t v31; // w20
  Il2CppObject *v32; // x23
  UnityEngine_AndroidJavaObject_o *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  System_Object_array *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  const MethodInfo *v46; // x1
  __int64 v47; // x2
  int32_t i; // w20
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerSharingSettings; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  Il2CppObject *v55; // x25
  const MethodInfo *v56; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  int32_t v60; // w20
  Il2CppObject *v61; // x23
  const MethodInfo *v62; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  int32_t v66; // w20
  Il2CppObject *v67; // x24
  UnityEngine_AndroidJavaObject_o *v68; // x21
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  System_Object_array *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x0
  Il2CppObject *v79; // x23
  __int64 v80; // x1
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  AdjustSdk_AdjustAndroid_c *v84; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x19
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x20
  UnityEngine_AndroidJavaObject_o *v90; // x21
  __int64 v91; // x1
  UnityEngine_AndroidJavaObject_o *v92; // x20
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v94; // x9
  int *p_offset; // x10
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  bool v105[4]; // [xsp+Ch] [xbp-84h] BYREF
  _QWORD v106[2]; // [xsp+10h] [xbp-80h] BYREF
  struct System_Nullable_bool__o IsEnabled_k__BackingField; // [xsp+24h] [xbp-6Ch] BYREF
  UnityEngine_AndroidJavaObject_o *v108; // [xsp+28h] [xbp-68h] BYREF

  v3 = thirdPartySharing;
  if ( (byte_593044E & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_bool__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_bool__get_Value__);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_21FFC50(&StringLiteral_22053/*"java.lang.Boolean"*/);
    sub_21FFC50(&StringLiteral_18838/*"com.adjust.sdk.AdjustThirdPartySharing"*/);
    sub_21FFC50(&StringLiteral_17328/*"addPartnerSharingSetting"*/);
    sub_21FFC50(&StringLiteral_17320/*"addGranularOption"*/);
    thirdPartySharing = (AdjustSdk_AdjustThirdPartySharing_o *)sub_21FFC50(&StringLiteral_25414/*"trackThirdPartySharing"*/);
    byte_593044E = 1;
  }
  v108 = 0;
  IsEnabled_k__BackingField = 0;
  if ( !v3 )
    goto LABEL_95;
  IsEnabled_k__BackingField = v3->fields._IsEnabled_k__BackingField;
  v4 = sub_21FFD10(object___TypeInfo, 1);
  if ( IsEnabled_k__BackingField.fields.hasValue )
  {
    v5 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    p_IsEnabled_k__BackingField = &IsEnabled_k__BackingField;
    IsEnabled_k__BackingField = v3->fields._IsEnabled_k__BackingField;
    LOBYTE(v106[0]) = System_Nullable_bool___get_Value(
                        (System_Nullable_bool__o)p_IsEnabled_k__BackingField,
                        (const MethodInfo_45AC820 *)Method_System_Nullable_bool__get_Value__);
    thirdPartySharing = (AdjustSdk_AdjustThirdPartySharing_o *)j_il2cpp_value_box_0(qword_594C050, v106);
    if ( v5 )
    {
      v7 = thirdPartySharing;
      if ( thirdPartySharing )
      {
        thirdPartySharing = (AdjustSdk_AdjustThirdPartySharing_o *)sub_21FFDA4(
                                                                     thirdPartySharing,
                                                                     v5->obj.klass->_1.element_class);
        if ( !thirdPartySharing )
          goto LABEL_99;
      }
      if ( !LODWORD(v5->max_length) )
        goto LABEL_97;
      v5->m_Items[0] = (Il2CppObject *)v7;
      sub_21FFBF4(v5->m_Items, v7);
      v9 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
      UnityEngine_AndroidJavaObject___ctor_82839756(v9, (System_String_o *)StringLiteral_22053/*"java.lang.Boolean"*/, v5, 0);
      if ( v4 )
      {
        if ( !v9
          || (thirdPartySharing = (AdjustSdk_AdjustThirdPartySharing_o *)sub_21FFDA4(
                                                                           v9,
                                                                           *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v4 + 24) )
          {
            *(_QWORD *)(v4 + 32) = v9;
            sub_21FFBF4(v4 + 32, v9);
            v10 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
            UnityEngine_AndroidJavaObject___ctor_82839756(
              v10,
              (System_String_o *)StringLiteral_18838/*"com.adjust.sdk.AdjustThirdPartySharing"*/,
              (System_Object_array *)v4,
              0);
            goto LABEL_15;
          }
LABEL_97:
          sub_21FFED4(thirdPartySharing);
        }
LABEL_99:
        v103 = sub_21FFEF0(thirdPartySharing, v8);
        sub_21FFD90(v103, 0);
      }
    }
LABEL_95:
    sub_21FFECC(thirdPartySharing, method, v2);
  }
  v10 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(
    v10,
    (System_String_o *)StringLiteral_18838/*"com.adjust.sdk.AdjustThirdPartySharing"*/,
    (System_Object_array *)v4,
    0);
LABEL_15:
  v108 = v10;
  v106[0] = 0;
  v106[1] = &v108;
  if ( AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(v3, v11) )
  {
    v13 = 0;
    while ( 1 )
    {
      GranularOptions = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
                                                                                    v3,
                                                                                    v12);
      if ( !GranularOptions )
        sub_21FFECC(0, v15, v16);
      if ( v13 >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                    GranularOptions,
                    (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v17 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
                                                                        v3,
                                                                        v12);
      if ( !v17 )
        sub_21FFECC(0, v18, v19);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v17,
               v13,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v22 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
                                                                        v3,
                                                                        v21);
      if ( !v22 )
        sub_21FFECC(0, v23, v24);
      v25 = v13 + 1;
      v26 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v22,
              v25,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v28 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
                                                                        v3,
                                                                        v27);
      if ( !v28 )
        sub_21FFECC(0, v29, v30);
      v31 = v25 + 1;
      v32 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v28,
              v31,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v33 = v108;
      v34 = sub_21FFD10(object___TypeInfo, 3);
      v37 = (System_Object_array *)v34;
      if ( !v34 )
        sub_21FFECC(0, v35, v36);
      if ( Item )
      {
        v34 = sub_21FFDA4(Item, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !v34 )
        {
          v99 = sub_21FFEF0(0, v38);
          sub_21FFD90(v99, 0);
        }
      }
      if ( !LODWORD(v37->max_length) )
        sub_21FFED4(v34);
      v37->m_Items[0] = Item;
      v39 = sub_21FFBF4(v37->m_Items, Item);
      if ( v26 )
      {
        v39 = sub_21FFDA4(v26, v37->obj.klass->_1.element_class);
        if ( !v39 )
        {
          v98 = sub_21FFEF0(0, v40);
          sub_21FFD90(v98, 0);
        }
      }
      if ( (v37->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v39);
      v37->m_Items[1] = v26;
      v41 = sub_21FFBF4(&v37->m_Items[1], v26);
      if ( v32 )
      {
        v41 = sub_21FFDA4(v32, v37->obj.klass->_1.element_class);
        if ( !v41 )
        {
          v97 = sub_21FFEF0(0, v42);
          sub_21FFD90(v97, 0);
        }
      }
      if ( LODWORD(v37->max_length) <= 2 )
        sub_21FFED4(v41);
      v37->m_Items[2] = v32;
      v43 = sub_21FFBF4(&v37->m_Items[2], v32);
      if ( !v33 )
        sub_21FFECC(v43, v44, v45);
      v13 = v31 + 1;
      UnityEngine_AndroidJavaObject__Call(v33, (System_String_o *)StringLiteral_17320/*"addGranularOption"*/, v37, 0);
    }
  }
  if ( AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(v3, v12) )
  {
    for ( i = 0; ; i = v66 + 1 )
    {
      PartnerSharingSettings = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(
                                                                                           v3,
                                                                                           v46);
      if ( !PartnerSharingSettings )
        sub_21FFECC(0, v50, v51);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerSharingSettings,
                  (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v52 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(
                                                                        v3,
                                                                        v46);
      if ( !v52 )
        sub_21FFECC(0, v53, v54);
      v55 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v52,
              i,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v57 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(
                                                                        v3,
                                                                        v56);
      if ( !v57 )
        sub_21FFECC(0, v58, v59);
      v60 = i + 1;
      v61 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v57,
              v60,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v63 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustThirdPartySharing__get_PartnerSharingSettings(
                                                                        v3,
                                                                        v62);
      if ( !v63 )
        sub_21FFECC(0, v64, v65);
      v66 = v60 + 1;
      v67 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v63,
              v66,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v68 = v108;
      v69 = sub_21FFD10(object___TypeInfo, 3);
      v72 = (System_Object_array *)v69;
      if ( !v69 )
        sub_21FFECC(0, v70, v71);
      if ( v55 )
      {
        v69 = sub_21FFDA4(v55, *(_QWORD *)(*(_QWORD *)v69 + 64LL));
        if ( !v69 )
        {
          v101 = sub_21FFEF0(0, v73);
          sub_21FFD90(v101, 0);
        }
      }
      if ( !LODWORD(v72->max_length) )
        sub_21FFED4(v69);
      v72->m_Items[0] = v55;
      v74 = sub_21FFBF4(v72->m_Items, v55);
      if ( v61 )
      {
        v74 = sub_21FFDA4(v61, v72->obj.klass->_1.element_class);
        if ( !v74 )
        {
          v102 = sub_21FFEF0(0, v75);
          sub_21FFD90(v102, 0);
        }
      }
      if ( (v72->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v74);
      v72->m_Items[1] = v61;
      sub_21FFBF4(&v72->m_Items[1], v61);
      if ( !*(_DWORD *)(qword_594C050 + 228) )
        j_il2cpp_runtime_class_init_0(qword_594C050, v76, v77);
      v105[0] = System_Boolean__Parse((System_String_o *)v67, 0);
      v78 = j_il2cpp_value_box_0(qword_594C050, v105);
      v79 = (Il2CppObject *)v78;
      if ( v78 )
      {
        v78 = sub_21FFDA4(v78, v72->obj.klass->_1.element_class);
        if ( !v78 )
        {
          v100 = sub_21FFEF0(0, v80);
          sub_21FFD90(v100, 0);
        }
      }
      if ( LODWORD(v72->max_length) <= 2 )
        sub_21FFED4(v78);
      v72->m_Items[2] = v79;
      v81 = sub_21FFBF4(&v72->m_Items[2], v79);
      if ( !v68 )
        sub_21FFECC(v81, v82, v83);
      UnityEngine_AndroidJavaObject__Call(v68, (System_String_o *)StringLiteral_17328/*"addPartnerSharingSetting"*/, v72, 0);
    }
  }
  v84 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v46, v47);
    v84 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v84->static_fields->ajcAdjust;
  v86 = sub_21FFD10(object___TypeInfo, 1);
  v89 = v86;
  if ( !v86 )
    goto LABEL_96;
  v90 = v108;
  if ( v108 )
  {
    v86 = sub_21FFDA4(v108, *(_QWORD *)(*(_QWORD *)v86 + 64LL));
    if ( !v86 )
    {
      v104 = sub_21FFEF0(0, v91);
      sub_21FFD90(v104, 0);
    }
  }
  if ( !*(_DWORD *)(v89 + 24) )
    sub_21FFED4(v86);
  *(_QWORD *)(v89 + 32) = v90;
  v86 = sub_21FFBF4(v89 + 32, v90);
  if ( !ajcAdjust )
LABEL_96:
    sub_21FFECC(v86, v87, v88);
  UnityEngine_AndroidJavaObject__CallStatic(
    ajcAdjust,
    (System_String_o *)StringLiteral_25414/*"trackThirdPartySharing"*/,
    (System_Object_array *)v89,
    0);
  v92 = v108;
  if ( v108 )
  {
    klass = v108->klass;
    v94 = *(unsigned __int16 *)&v108->klass->_2.rank;
    if ( *(_WORD *)&v108->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v94;
        p_offset += 4;
        if ( !v94 )
          goto LABEL_67;
      }
      v96 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_67:
      v96 = sub_2237E2C(v108, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v96)(v92, *(_QWORD *)(v96 + 8));
  }
}


void AdjustSdk_AdjustAndroid__VerifyAndTrackPlayStorePurchase(
        AdjustSdk_AdjustEvent_o *adjustEvent,
        System_Action_AdjustPurchaseVerificationResult__o *verificationInfoCallback,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_VerificationResultListener_o *v5; // x19
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x22
  struct System_String_o *EventToken_k__BackingField; // x21
  __int64 v12; // x1
  UnityEngine_AndroidJavaObject_o *v13; // x21
  const MethodInfo *v14; // x1
  struct System_Nullable_double__o Revenue_k__BackingField; // q0
  System_Object_array *v16; // x22
  const MethodInfo_45AEF04 *v17; // x2
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x0
  struct System_String_o *Currency_k__BackingField; // x23
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x1
  int32_t i; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *CallbackParameters; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *Item; // x25
  const MethodInfo *v38; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  int32_t v42; // w21
  Il2CppObject *v43; // x24
  UnityEngine_AndroidJavaObject_o *v44; // x22
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  System_Object_array *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  const MethodInfo *v55; // x1
  __int64 v56; // x2
  int32_t j; // w21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *PartnerParameters; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  Il2CppObject *v64; // x25
  const MethodInfo *v65; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  int32_t v69; // w21
  Il2CppObject *v70; // x24
  UnityEngine_AndroidJavaObject_o *v71; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  System_Object_array *v75; // x23
  __int64 v76; // x1
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  UnityEngine_AndroidJavaObject_o *v82; // x21
  __int64 v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x22
  struct System_String_o *DeduplicationId_k__BackingField; // x23
  __int64 v88; // x1
  UnityEngine_AndroidJavaObject_o *v89; // x21
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x22
  struct System_String_o *CallbackId_k__BackingField; // x23
  __int64 v95; // x1
  UnityEngine_AndroidJavaObject_o *v96; // x21
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x22
  struct System_String_o *ProductId_k__BackingField; // x23
  __int64 v102; // x1
  UnityEngine_AndroidJavaObject_o *v103; // x21
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x22
  struct System_String_o *PurchaseToken; // x20
  __int64 v109; // x1
  AdjustSdk_AdjustAndroid_c *v110; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  System_Object_array *v115; // x21
  Il2CppObject *v116; // x22
  __int64 v117; // x1
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  UnityEngine_AndroidJavaObject_o *v123; // x20
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v125; // x9
  int *p_offset; // x10
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // x0
  __int64 v130; // x0
  __int64 v131; // x0
  __int64 v132; // x0
  __int64 v133; // x0
  __int64 v134; // x0
  __int64 v135; // x0
  __int64 v136; // x0
  __int64 v137; // x0
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // x0
  _QWORD v141[3]; // [xsp+8h] [xbp-98h] BYREF
  struct System_Nullable_double__o v142; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_AndroidJavaObject_o *v143; // [xsp+38h] [xbp-68h] BYREF
  System_Nullable_double__o v144; // 0:x0.16

  if ( (byte_593045D & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_double__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_double__get_Value__);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_VerificationResultListener_TypeInfo);
    sub_21FFC50(&StringLiteral_17327/*"addPartnerParameter"*/);
    sub_21FFC50(&StringLiteral_24506/*"setDeduplicationId"*/);
    sub_21FFC50(&StringLiteral_24546/*"setPurchaseToken"*/);
    sub_21FFC50(&StringLiteral_24498/*"setCallbackId"*/);
    sub_21FFC50(&StringLiteral_24542/*"setProductId"*/);
    sub_21FFC50(&StringLiteral_17314/*"addCallbackParameter"*/);
    sub_21FFC50(&StringLiteral_25963/*"verifyAndTrackPlayStorePurchase"*/);
    sub_21FFC50(&StringLiteral_18833/*"com.adjust.sdk.AdjustEvent"*/);
    sub_21FFC50(&StringLiteral_24550/*"setRevenue"*/);
    byte_593045D = 1;
  }
  v143 = 0;
  v142 = (struct System_Nullable_double__o)0LL;
  v5 = (AdjustSdk_AdjustAndroid_VerificationResultListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_VerificationResultListener_TypeInfo);
  AdjustSdk_AdjustAndroid_VerificationResultListener___ctor(v5, verificationInfoCallback, v6);
  v7 = sub_21FFD10(object___TypeInfo, 1);
  if ( !adjustEvent || (v10 = v7) == 0 )
    sub_21FFECC(v7, v8, v9);
  EventToken_k__BackingField = adjustEvent->fields._EventToken_k__BackingField;
  if ( EventToken_k__BackingField )
  {
    v7 = sub_21FFDA4(adjustEvent->fields._EventToken_k__BackingField, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v132 = sub_21FFEF0(0, v12);
      sub_21FFD90(v132, 0);
    }
  }
  if ( !*(_DWORD *)(v10 + 24) )
    sub_21FFED4(v7);
  *(_QWORD *)(v10 + 32) = EventToken_k__BackingField;
  sub_21FFBF4(v10 + 32, EventToken_k__BackingField);
  v13 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(
    v13,
    (System_String_o *)StringLiteral_18833/*"com.adjust.sdk.AdjustEvent"*/,
    (System_Object_array *)v10,
    0);
  Revenue_k__BackingField = adjustEvent->fields._Revenue_k__BackingField;
  v143 = v13;
  v141[1] = 0;
  v141[2] = &v143;
  v142 = Revenue_k__BackingField;
  if ( Revenue_k__BackingField.fields.hasValue )
  {
    v16 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 2);
    *(_QWORD *)&v144.fields.value = Method_System_Nullable_double__get_Value__;
    v142 = adjustEvent->fields._Revenue_k__BackingField;
    *(_QWORD *)&v144.fields.hasValue = &v142;
    v141[0] = System_Nullable_double___get_Value(v144, v17);
    v18 = j_il2cpp_value_box_0(qword_594C0A8, v141);
    if ( !v16 )
      sub_21FFECC(v18, v19, v20);
    v21 = (Il2CppObject *)v18;
    if ( v18 )
    {
      v18 = sub_21FFDA4(v18, v16->obj.klass->_1.element_class);
      if ( !v18 )
      {
        v135 = sub_21FFEF0(0, v22);
        sub_21FFD90(v135, 0);
      }
    }
    if ( !LODWORD(v16->max_length) )
      sub_21FFED4(v18);
    v16->m_Items[0] = v21;
    v23 = sub_21FFBF4(v16->m_Items, v21);
    Currency_k__BackingField = adjustEvent->fields._Currency_k__BackingField;
    if ( Currency_k__BackingField )
    {
      v23 = sub_21FFDA4(adjustEvent->fields._Currency_k__BackingField, v16->obj.klass->_1.element_class);
      if ( !v23 )
      {
        v136 = sub_21FFEF0(0, v25);
        sub_21FFD90(v136, 0);
      }
    }
    if ( (v16->max_length & 0xFFFFFFFE) == 0 )
      sub_21FFED4(v23);
    v16->m_Items[1] = (Il2CppObject *)Currency_k__BackingField;
    v26 = sub_21FFBF4(&v16->m_Items[1], Currency_k__BackingField);
    if ( !v13 )
      sub_21FFECC(v26, v27, v28);
    UnityEngine_AndroidJavaObject__Call(v13, (System_String_o *)StringLiteral_24550/*"setRevenue"*/, v16, 0);
  }
  if ( AdjustSdk_AdjustEvent__get_CallbackParameters(adjustEvent, v14) )
  {
    for ( i = 0; ; i = v42 + 1 )
    {
      CallbackParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                                       adjustEvent,
                                                                                       v29);
      if ( !CallbackParameters )
        sub_21FFECC(0, v32, v33);
      if ( i >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  CallbackParameters,
                  (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v34 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                        adjustEvent,
                                                                        v29);
      if ( !v34 )
        sub_21FFECC(0, v35, v36);
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               v34,
               i,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v39 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_CallbackParameters(
                                                                        adjustEvent,
                                                                        v38);
      if ( !v39 )
        sub_21FFECC(0, v40, v41);
      v42 = i + 1;
      v43 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v39,
              v42,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v44 = v143;
      v45 = sub_21FFD10(object___TypeInfo, 2);
      v48 = (System_Object_array *)v45;
      if ( !v45 )
        sub_21FFECC(0, v46, v47);
      if ( Item )
      {
        v45 = sub_21FFDA4(Item, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
        if ( !v45 )
        {
          v129 = sub_21FFEF0(0, v49);
          sub_21FFD90(v129, 0);
        }
      }
      if ( !LODWORD(v48->max_length) )
        sub_21FFED4(v45);
      v48->m_Items[0] = Item;
      v50 = sub_21FFBF4(v48->m_Items, Item);
      if ( v43 )
      {
        v50 = sub_21FFDA4(v43, v48->obj.klass->_1.element_class);
        if ( !v50 )
        {
          v128 = sub_21FFEF0(0, v51);
          sub_21FFD90(v128, 0);
        }
      }
      if ( (v48->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v50);
      v48->m_Items[1] = v43;
      v52 = sub_21FFBF4(&v48->m_Items[1], v43);
      if ( !v44 )
        sub_21FFECC(v52, v53, v54);
      UnityEngine_AndroidJavaObject__Call(v44, (System_String_o *)StringLiteral_17314/*"addCallbackParameter"*/, v48, 0);
    }
  }
  if ( AdjustSdk_AdjustEvent__get_PartnerParameters(adjustEvent, v29) )
  {
    for ( j = 0; ; j = v69 + 1 )
    {
      PartnerParameters = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                                      adjustEvent,
                                                                                      v55);
      if ( !PartnerParameters )
        sub_21FFECC(0, v59, v60);
      if ( j >= System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                  PartnerParameters,
                  (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) )
        break;
      v61 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                        adjustEvent,
                                                                        v55);
      if ( !v61 )
        sub_21FFECC(0, v62, v63);
      v64 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v61,
              j,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v66 = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)AdjustSdk_AdjustEvent__get_PartnerParameters(
                                                                        adjustEvent,
                                                                        v65);
      if ( !v66 )
        sub_21FFECC(0, v67, v68);
      v69 = j + 1;
      v70 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              v66,
              v69,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v71 = v143;
      v72 = sub_21FFD10(object___TypeInfo, 2);
      v75 = (System_Object_array *)v72;
      if ( !v72 )
        sub_21FFECC(0, v73, v74);
      if ( v64 )
      {
        v72 = sub_21FFDA4(v64, *(_QWORD *)(*(_QWORD *)v72 + 64LL));
        if ( !v72 )
        {
          v131 = sub_21FFEF0(0, v76);
          sub_21FFD90(v131, 0);
        }
      }
      if ( !LODWORD(v75->max_length) )
        sub_21FFED4(v72);
      v75->m_Items[0] = v64;
      v77 = sub_21FFBF4(v75->m_Items, v64);
      if ( v70 )
      {
        v77 = sub_21FFDA4(v70, v75->obj.klass->_1.element_class);
        if ( !v77 )
        {
          v130 = sub_21FFEF0(0, v78);
          sub_21FFD90(v130, 0);
        }
      }
      if ( (v75->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v77);
      v75->m_Items[1] = v70;
      v79 = sub_21FFBF4(&v75->m_Items[1], v70);
      if ( !v71 )
        sub_21FFECC(v79, v80, v81);
      UnityEngine_AndroidJavaObject__Call(v71, (System_String_o *)StringLiteral_17327/*"addPartnerParameter"*/, v75, 0);
    }
  }
  if ( adjustEvent->fields._DeduplicationId_k__BackingField )
  {
    v82 = v143;
    v83 = sub_21FFD10(object___TypeInfo, 1);
    v86 = v83;
    if ( !v83 )
      goto LABEL_114;
    DeduplicationId_k__BackingField = adjustEvent->fields._DeduplicationId_k__BackingField;
    if ( DeduplicationId_k__BackingField )
    {
      v83 = sub_21FFDA4(adjustEvent->fields._DeduplicationId_k__BackingField, *(_QWORD *)(*(_QWORD *)v83 + 64LL));
      if ( !v83 )
      {
        v137 = sub_21FFEF0(0, v88);
        sub_21FFD90(v137, 0);
      }
    }
    if ( !*(_DWORD *)(v86 + 24) )
      sub_21FFED4(v83);
    *(_QWORD *)(v86 + 32) = DeduplicationId_k__BackingField;
    v83 = sub_21FFBF4(v86 + 32, DeduplicationId_k__BackingField);
    if ( !v82 )
LABEL_114:
      sub_21FFECC(v83, v84, v85);
    UnityEngine_AndroidJavaObject__Call(v82, (System_String_o *)StringLiteral_24506/*"setDeduplicationId"*/, (System_Object_array *)v86, 0);
  }
  if ( adjustEvent->fields._CallbackId_k__BackingField )
  {
    v89 = v143;
    v90 = sub_21FFD10(object___TypeInfo, 1);
    v93 = v90;
    if ( !v90 )
      goto LABEL_115;
    CallbackId_k__BackingField = adjustEvent->fields._CallbackId_k__BackingField;
    if ( CallbackId_k__BackingField )
    {
      v90 = sub_21FFDA4(adjustEvent->fields._CallbackId_k__BackingField, *(_QWORD *)(*(_QWORD *)v90 + 64LL));
      if ( !v90 )
      {
        v138 = sub_21FFEF0(0, v95);
        sub_21FFD90(v138, 0);
      }
    }
    if ( !*(_DWORD *)(v93 + 24) )
      sub_21FFED4(v90);
    *(_QWORD *)(v93 + 32) = CallbackId_k__BackingField;
    v90 = sub_21FFBF4(v93 + 32, CallbackId_k__BackingField);
    if ( !v89 )
LABEL_115:
      sub_21FFECC(v90, v91, v92);
    UnityEngine_AndroidJavaObject__Call(v89, (System_String_o *)StringLiteral_24498/*"setCallbackId"*/, (System_Object_array *)v93, 0);
  }
  if ( adjustEvent->fields._ProductId_k__BackingField )
  {
    v96 = v143;
    v97 = sub_21FFD10(object___TypeInfo, 1);
    v100 = v97;
    if ( !v97 )
      goto LABEL_116;
    ProductId_k__BackingField = adjustEvent->fields._ProductId_k__BackingField;
    if ( ProductId_k__BackingField )
    {
      v97 = sub_21FFDA4(adjustEvent->fields._ProductId_k__BackingField, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
      if ( !v97 )
      {
        v139 = sub_21FFEF0(0, v102);
        sub_21FFD90(v139, 0);
      }
    }
    if ( !*(_DWORD *)(v100 + 24) )
      sub_21FFED4(v97);
    *(_QWORD *)(v100 + 32) = ProductId_k__BackingField;
    v97 = sub_21FFBF4(v100 + 32, ProductId_k__BackingField);
    if ( !v96 )
LABEL_116:
      sub_21FFECC(v97, v98, v99);
    UnityEngine_AndroidJavaObject__Call(v96, (System_String_o *)StringLiteral_24542/*"setProductId"*/, (System_Object_array *)v100, 0);
  }
  if ( adjustEvent->fields.PurchaseToken )
  {
    v103 = v143;
    v104 = sub_21FFD10(object___TypeInfo, 1);
    v107 = v104;
    if ( !v104 )
      goto LABEL_117;
    PurchaseToken = adjustEvent->fields.PurchaseToken;
    if ( PurchaseToken )
    {
      v104 = sub_21FFDA4(PurchaseToken, *(_QWORD *)(*(_QWORD *)v104 + 64LL));
      if ( !v104 )
      {
        v140 = sub_21FFEF0(0, v109);
        sub_21FFD90(v140, 0);
      }
    }
    if ( !*(_DWORD *)(v107 + 24) )
      sub_21FFED4(v104);
    *(_QWORD *)(v107 + 32) = PurchaseToken;
    v104 = sub_21FFBF4(v107 + 32, PurchaseToken);
    if ( !v103 )
LABEL_117:
      sub_21FFECC(v104, v105, v106);
    UnityEngine_AndroidJavaObject__Call(v103, (System_String_o *)StringLiteral_24546/*"setPurchaseToken"*/, (System_Object_array *)v107, 0);
  }
  v110 = AdjustSdk_AdjustAndroid_TypeInfo;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v55, v56);
    v110 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v110->static_fields->ajcAdjust;
  v112 = sub_21FFD10(object___TypeInfo, 2);
  v115 = (System_Object_array *)v112;
  if ( !v112 )
    sub_21FFECC(0, v113, v114);
  v116 = (Il2CppObject *)v143;
  if ( v143 )
  {
    v112 = sub_21FFDA4(v143, *(_QWORD *)(*(_QWORD *)v112 + 64LL));
    if ( !v112 )
    {
      v133 = sub_21FFEF0(0, v117);
      sub_21FFD90(v133, 0);
    }
  }
  if ( !LODWORD(v115->max_length) )
    sub_21FFED4(v112);
  v115->m_Items[0] = v116;
  v118 = sub_21FFBF4(v115->m_Items, v116);
  if ( v5 )
  {
    v118 = sub_21FFDA4(v5, v115->obj.klass->_1.element_class);
    if ( !v118 )
    {
      v134 = sub_21FFEF0(0, v119);
      sub_21FFD90(v134, 0);
    }
  }
  if ( (v115->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(v118);
  v115->m_Items[1] = (Il2CppObject *)v5;
  v120 = sub_21FFBF4(&v115->m_Items[1], v5);
  if ( !ajcAdjust )
    sub_21FFECC(v120, v121, v122);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_25963/*"verifyAndTrackPlayStorePurchase"*/, v115, 0);
  v123 = v143;
  if ( v143 )
  {
    klass = v143->klass;
    v125 = *(unsigned __int16 *)&v143->klass->_2.rank;
    if ( *(_WORD *)&v143->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v125;
        p_offset += 4;
        if ( !v125 )
          goto LABEL_91;
      }
      v127 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_91:
      v127 = sub_2237E2C(v143, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v127)(v123, *(_QWORD *)(v127 + 8));
  }
}


void AdjustSdk_AdjustAndroid__VerifyPlayStorePurchase(
        AdjustSdk_AdjustPlayStorePurchase_o *purchase,
        System_Action_AdjustPurchaseVerificationResult__o *verificationInfoCallback,
        const MethodInfo *method)
{
  AdjustSdk_AdjustAndroid_VerificationResultListener_o *v5; // x19
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Object_array *v10; // x21
  struct System_String_o *ProductId_k__BackingField; // x22
  __int64 v12; // x1
  struct System_String_o *PurchaseToken_k__BackingField; // x20
  UnityEngine_AndroidJavaObject_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  AdjustSdk_AdjustAndroid_c *v17; // x0
  UnityEngine_AndroidJavaObject_o *ajcAdjust; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Object_array *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppClass *klass; // x8
  __int64 v30; // x9
  int *p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  Il2CppObject *v36; // [xsp+18h] [xbp-48h]

  if ( (byte_593045B & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_VerificationResultListener_TypeInfo);
    sub_21FFC50(&StringLiteral_25964/*"verifyPlayStorePurchase"*/);
    sub_21FFC50(&StringLiteral_18834/*"com.adjust.sdk.AdjustPlayStorePurchase"*/);
    byte_593045B = 1;
  }
  v5 = (AdjustSdk_AdjustAndroid_VerificationResultListener_o *)sub_21FFEBC(AdjustSdk_AdjustAndroid_VerificationResultListener_TypeInfo);
  AdjustSdk_AdjustAndroid_VerificationResultListener___ctor(v5, verificationInfoCallback, v6);
  v7 = sub_21FFD10(object___TypeInfo, 2);
  if ( !purchase || (v10 = (System_Object_array *)v7) == 0 )
    sub_21FFECC(v7, v8, v9);
  ProductId_k__BackingField = purchase->fields._ProductId_k__BackingField;
  if ( ProductId_k__BackingField )
  {
    v7 = sub_21FFDA4(purchase->fields._ProductId_k__BackingField, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
      goto LABEL_32;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_31;
  v10->m_Items[0] = (Il2CppObject *)ProductId_k__BackingField;
  v7 = sub_21FFBF4(v10->m_Items, ProductId_k__BackingField);
  PurchaseToken_k__BackingField = purchase->fields._PurchaseToken_k__BackingField;
  if ( PurchaseToken_k__BackingField )
  {
    v7 = sub_21FFDA4(PurchaseToken_k__BackingField, v10->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_32:
      v33 = sub_21FFEF0(v7, v12);
      sub_21FFD90(v33, 0);
    }
  }
  if ( (v10->max_length & 0xFFFFFFFE) == 0 )
LABEL_31:
    sub_21FFED4(v7);
  v10->m_Items[1] = (Il2CppObject *)PurchaseToken_k__BackingField;
  sub_21FFBF4(&v10->m_Items[1], PurchaseToken_k__BackingField);
  v14 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(v14, (System_String_o *)StringLiteral_18834/*"com.adjust.sdk.AdjustPlayStorePurchase"*/, v10, 0);
  v17 = AdjustSdk_AdjustAndroid_TypeInfo;
  v36 = (Il2CppObject *)v14;
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v15, v16);
    v17 = AdjustSdk_AdjustAndroid_TypeInfo;
  }
  ajcAdjust = (UnityEngine_AndroidJavaObject_o *)v17->static_fields->ajcAdjust;
  v19 = sub_21FFD10(object___TypeInfo, 2);
  v22 = (System_Object_array *)v19;
  if ( !v19 )
    sub_21FFECC(0, v20, v21);
  if ( v36 )
  {
    v19 = sub_21FFDA4(v36, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v19 )
    {
      v34 = sub_21FFEF0(0, v23);
      sub_21FFD90(v34, 0);
    }
  }
  if ( !LODWORD(v22->max_length) )
    sub_21FFED4(v19);
  v22->m_Items[0] = v36;
  v24 = sub_21FFBF4(v22->m_Items, v36);
  if ( v5 )
  {
    v24 = sub_21FFDA4(v5, v22->obj.klass->_1.element_class);
    if ( !v24 )
    {
      v35 = sub_21FFEF0(0, v25);
      sub_21FFD90(v35, 0);
    }
  }
  if ( (v22->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(v24);
  v22->m_Items[1] = (Il2CppObject *)v5;
  v26 = sub_21FFBF4(&v22->m_Items[1], v5);
  if ( !ajcAdjust )
    sub_21FFECC(v26, v27, v28);
  UnityEngine_AndroidJavaObject__CallStatic(ajcAdjust, (System_String_o *)StringLiteral_25964/*"verifyPlayStorePurchase"*/, v22, 0);
  if ( v36 )
  {
    klass = v36->klass;
    v30 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_26;
      }
      v32 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_26:
      v32 = sub_2237E2C(v36, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v32)(v36, *(_QWORD *)(v32 + 8));
  }
}


void AdjustSdk_AdjustAndroid_AdidReadListener___ctor(
        AdjustSdk_AdjustAndroid_AdidReadListener_o *this,
        System_Action_string__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_593047D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18840/*"com.adjust.sdk.OnAdidReadListener"*/);
    byte_593047D = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18840/*"com.adjust.sdk.OnAdidReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
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
  __int64 v10; // x2

  if ( (byte_593047E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0__onAdidRead_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0_TypeInfo);
    byte_593047E = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_21FFBF4(&v5[1], this);
  v5[1].monitor = adid;
  sub_21FFBF4(&v5[1].monitor, adid);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_AdidReadListener___c__DisplayClass2_0__onAdidRead_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v9, v10);
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
    sub_21FFECC(this, method);
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
  if ( (byte_5930482 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18841/*"com.adjust.sdk.OnAmazonAdIdReadListener"*/);
    byte_5930482 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18841/*"com.adjust.sdk.OnAmazonAdIdReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
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
  __int64 v10; // x2

  if ( (byte_5930483 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0__onAmazonAdIdRead_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0_TypeInfo);
    byte_5930483 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_21FFBF4(&v5[1], this);
  v5[1].monitor = amazonAdId;
  sub_21FFBF4(&v5[1].monitor, amazonAdId);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_AmazonAdIdReadListener___c__DisplayClass2_0__onAmazonAdIdRead_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v9, v10);
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
    sub_21FFECC(this, method);
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
  if ( (byte_5930464 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18842/*"com.adjust.sdk.OnAttributionChangedListener"*/);
    byte_5930464 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18842/*"com.adjust.sdk.OnAttributionChangedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_AttributionChangedListener__onAttributionChanged(
        AdjustSdk_AdjustAndroid_AttributionChangedListener_o *this,
        UnityEngine_AndroidJavaObject_o *ajoAttribution,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x19
  const MethodInfo *v10; // x1
  __int64 v11; // x2

  if ( (byte_5930465 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0__onAttributionChanged_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_TypeInfo);
    byte_5930465 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7, v8);
  v5[1].klass = (Il2CppClass *)ajoAttribution;
  sub_21FFBF4(&v5[1], ajoAttribution);
  v5[1].monitor = this;
  sub_21FFBF4(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      v5,
      Method_AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0__onAttributionChanged_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v10, v11);
    AdjustThreadDispatcher__RunOnMainThread(v9, v10);
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
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_o *v3; // x19
  struct UnityEngine_AndroidJavaObject_o *ajoAttribution; // x8
  __int64 v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_AndroidJavaObject_o *v8; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_AndroidJavaObject_o *v17; // x0
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_AndroidJavaObject_o *v22; // x0
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_AndroidJavaObject_o *v27; // x0
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_AndroidJavaObject_o *v32; // x0
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_AndroidJavaObject_o *v37; // x0
  Il2CppObject *v38; // x21
  Il2CppObject *v39; // x1
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_AndroidJavaObject_o *v42; // x0
  Il2CppObject *v43; // x21
  Il2CppObject *v44; // x1
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_AndroidJavaObject_o *v47; // x0
  Il2CppObject *v48; // x21
  Il2CppObject *v49; // x1
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_AndroidJavaObject_o *v52; // x0
  Il2CppObject *v53; // x21
  Il2CppObject *v54; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_AndroidJavaObject_o *v57; // x0
  Il2CppObject *v58; // x21
  Il2CppObject *v59; // x1
  __int64 v60; // x1
  __int64 v61; // x2
  UnityEngine_AndroidJavaObject_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  Il2CppObject *v65; // x21
  _QWORD *v66; // x22
  __int64 v67; // x8
  __int64 v68; // x0
  __int64 v69; // x0
  double v70; // d0
  const MethodInfo_45AEEEC *v71; // x2
  __int128 v72; // q0
  struct AdjustSdk_AdjustAndroid_AttributionChangedListener_o *v73; // x8
  struct System_Action_AdjustAttribution__o *v74; // x8
  Il2CppObject *v75; // x22
  Il2CppClass *klass; // x8
  __int64 v77; // x9
  int *p_offset; // x10
  __int64 v79; // x0
  AdjustSdk_AdjustUtils_c *v80; // x0
  UnityEngine_AndroidJavaObject_o *v81; // x21
  Il2CppObject *v82; // x0
  const MethodInfo *v83; // x1
  __int64 v84; // x2
  AdjustSdk_JSONNode_o *v85; // x21
  const MethodInfo *v86; // x2
  AdjustSdk_JSONNode_o *v87; // x0
  const MethodInfo *v88; // x2
  System_Collections_Generic_Dictionary_object__object__o *v89; // x23
  __int64 v90; // x1
  const MethodInfo *v91; // x2
  AdjustSdk_JSONClass_o *v92; // x21
  System_Collections_Generic_Dictionary_string__object__o *v93; // x22
  struct AdjustSdk_AdjustAndroid_AttributionChangedListener_o *_4__this; // x8
  struct System_Action_AdjustAttribution__o *callback; // x8
  __int128 v96; // [xsp+0h] [xbp-80h] BYREF
  __int64 v97; // [xsp+18h] [xbp-68h]
  Il2CppObject **v98; // [xsp+20h] [xbp-60h]
  int v99; // [xsp+30h] [xbp-50h]
  Il2CppObject *v100; // [xsp+38h] [xbp-48h] BYREF
  System_Nullable_double__o v101; // 0:x0.16

  v3 = this;
  if ( (byte_5930466 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAttribution_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_double___);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_double___ctor__);
    this = (AdjustSdk_AdjustAndroid_AttributionChangedListener___c__DisplayClass2_0_o *)sub_21FFC50(&StringLiteral_19476/*"doubleValue"*/);
    byte_5930466 = 1;
  }
  ajoAttribution = v3->fields.ajoAttribution;
  v100 = 0;
  v99 = 0;
  if ( ajoAttribution )
  {
    v5 = sub_21FFEBC(AdjustSdk_AdjustAttribution_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    v8 = v3->fields.ajoAttribution;
    inited = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v6, v7);
    if ( !v8 )
      sub_21FFECC(inited, v6, v7);
    object = UnityEngine_AndroidJavaObject__Get_object_(
               v8,
               AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerName,
               (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
    if ( !v5 )
      sub_21FFECC(IsNullOrEmpty, v12, v13);
    if ( IsNullOrEmpty )
      v14 = 0;
    else
      v14 = object;
    *(_QWORD *)(v5 + 24) = v14;
    sub_21FFBF4(v5 + 24, v14);
    v17 = v3->fields.ajoAttribution;
    if ( !v17 )
      sub_21FFECC(0, v15, v16);
    v18 = UnityEngine_AndroidJavaObject__Get_object_(
            v17,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerToken,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v18, 0) )
      v19 = 0;
    else
      v19 = v18;
    *(_QWORD *)(v5 + 16) = v19;
    sub_21FFBF4(v5 + 16, v19);
    v22 = v3->fields.ajoAttribution;
    if ( !v22 )
      sub_21FFECC(0, v20, v21);
    v23 = UnityEngine_AndroidJavaObject__Get_object_(
            v22,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyNetwork,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v23, 0) )
      v24 = 0;
    else
      v24 = v23;
    *(_QWORD *)(v5 + 32) = v24;
    sub_21FFBF4(v5 + 32, v24);
    v27 = v3->fields.ajoAttribution;
    if ( !v27 )
      sub_21FFECC(0, v25, v26);
    v28 = UnityEngine_AndroidJavaObject__Get_object_(
            v27,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCampaign,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v28, 0) )
      v29 = 0;
    else
      v29 = v28;
    *(_QWORD *)(v5 + 40) = v29;
    sub_21FFBF4(v5 + 40, v29);
    v32 = v3->fields.ajoAttribution;
    if ( !v32 )
      sub_21FFECC(0, v30, v31);
    v33 = UnityEngine_AndroidJavaObject__Get_object_(
            v32,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdgroup,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v33, 0) )
      v34 = 0;
    else
      v34 = v33;
    *(_QWORD *)(v5 + 48) = v34;
    sub_21FFBF4(v5 + 48, v34);
    v37 = v3->fields.ajoAttribution;
    if ( !v37 )
      sub_21FFECC(0, v35, v36);
    v38 = UnityEngine_AndroidJavaObject__Get_object_(
            v37,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCreative,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v38, 0) )
      v39 = 0;
    else
      v39 = v38;
    *(_QWORD *)(v5 + 56) = v39;
    sub_21FFBF4(v5 + 56, v39);
    v42 = v3->fields.ajoAttribution;
    if ( !v42 )
      sub_21FFECC(0, v40, v41);
    v43 = UnityEngine_AndroidJavaObject__Get_object_(
            v42,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyClickLabel,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v43, 0) )
      v44 = 0;
    else
      v44 = v43;
    *(_QWORD *)(v5 + 64) = v44;
    sub_21FFBF4(v5 + 64, v44);
    v47 = v3->fields.ajoAttribution;
    if ( !v47 )
      sub_21FFECC(0, v45, v46);
    v48 = UnityEngine_AndroidJavaObject__Get_object_(
            v47,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostType,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v48, 0) )
      v49 = 0;
    else
      v49 = v48;
    *(_QWORD *)(v5 + 72) = v49;
    sub_21FFBF4(v5 + 72, v49);
    v52 = v3->fields.ajoAttribution;
    if ( !v52 )
      sub_21FFECC(0, v50, v51);
    v53 = UnityEngine_AndroidJavaObject__Get_object_(
            v52,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostCurrency,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v53, 0) )
      v54 = 0;
    else
      v54 = v53;
    *(_QWORD *)(v5 + 96) = v54;
    sub_21FFBF4(v5 + 96, v54);
    v57 = v3->fields.ajoAttribution;
    if ( !v57 )
      sub_21FFECC(0, v55, v56);
    v58 = UnityEngine_AndroidJavaObject__Get_object_(
            v57,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyFbInstallReferrer,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v58, 0) )
      v59 = 0;
    else
      v59 = v58;
    *(_QWORD *)(v5 + 112) = v59;
    sub_21FFBF4(v5 + 112, v59);
    v62 = v3->fields.ajoAttribution;
    if ( !v62 )
      sub_21FFECC(0, v60, v61);
    v65 = UnityEngine_AndroidJavaObject__Get_object_(
            v62,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostAmount,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
    v100 = v65;
    v97 = 0;
    v98 = &v100;
    if ( v65 )
    {
      v66 = Method_System_Array_Empty_object___;
      v67 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v67 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v67 = v66[7];
      }
      v68 = *(_QWORD *)(v67 + 16);
      if ( (*(_WORD *)(v68 + 309) & 1) == 0 )
        v68 = sub_2237AF8();
      if ( !*(_DWORD *)(v68 + 228) )
        j_il2cpp_runtime_class_init_0(v68, v63, v64);
      v69 = *(_QWORD *)(v66[7] + 16LL);
      if ( (*(_WORD *)(v69 + 309) & 1) == 0 )
        v69 = sub_2237AF8();
      v70 = UnityEngine_AndroidJavaObject__Call_double_(
              (UnityEngine_AndroidJavaObject_o *)v65,
              (System_String_o *)StringLiteral_19476/*"doubleValue"*/,
              **(System_Object_array ***)(v69 + 184),
              (const MethodInfo_36D5508 *)Method_UnityEngine_AndroidJavaObject_Call_double___);
      v96 = 0u;
      *(_QWORD *)&v101.fields.value = Method_System_Nullable_double___ctor__;
      *(_QWORD *)&v101.fields.hasValue = &v96;
      System_Nullable_double____ctor(v101, v70, v71);
      v72 = v96;
    }
    else
    {
      v72 = 0u;
    }
    *(_OWORD *)(v5 + 80) = v72;
    v75 = v100;
    if ( v100 )
    {
      klass = v100->klass;
      v77 = *(unsigned __int16 *)&v100->klass->_2.rank;
      if ( *(_WORD *)&v100->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v77;
          p_offset += 4;
          if ( !v77 )
            goto LABEL_67;
        }
        v79 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_67:
        v79 = sub_2237E2C(v100, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(Il2CppObject *, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8));
    }
    v80 = AdjustSdk_AdjustUtils_TypeInfo;
    v81 = v3->fields.ajoAttribution;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      v80 = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v63, v64);
    if ( !v81 )
      sub_21FFECC(v80, v63, v64);
    v82 = UnityEngine_AndroidJavaObject__Get_object_(
            v81,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( v82 )
    {
      v85 = AdjustSdk_JSONNode__Parse((System_String_o *)v82, v83);
      v82 = (Il2CppObject *)AdjustSdk_JSONNode__op_Equality(v85, 0, v86);
      if ( ((unsigned __int8)v82 & 1) == 0 )
      {
        if ( !v85 )
          sub_21FFECC(v82, v83, v84);
        v87 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v85->klass->vtable._27_get_AsObject.methodPtr)(
                                        v85,
                                        v85->klass->vtable._27_get_AsObject.method);
        v82 = (Il2CppObject *)AdjustSdk_JSONNode__op_Equality(v87, 0, v88);
        if ( ((unsigned __int8)v82 & 1) == 0 )
        {
          v89 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
          System_Collections_Generic_Dictionary_object__object____ctor(
            v89,
            (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
          *(_QWORD *)(v5 + 104) = v89;
          sub_21FFBF4(v5 + 104, v89);
          v92 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v85->klass->vtable._27_get_AsObject.methodPtr)(
                                           v85,
                                           v85->klass->vtable._27_get_AsObject.method);
          v93 = *(System_Collections_Generic_Dictionary_string__object__o **)(v5 + 104);
          if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v90, v91);
          AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v92, v93, v91);
        }
      }
    }
    _4__this = v3->fields.__4__this;
    if ( !_4__this )
      sub_21FFECC(v82, v83, v84);
    callback = _4__this->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        v5,
        callback->fields.method);
  }
  else
  {
    v73 = v3->fields.__4__this;
    if ( !v73 )
      sub_21FFECC(this, method, v2);
    v74 = v73->fields.callback;
    if ( v74 )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v74->fields.invoke_impl)(
        v74->fields.method_code,
        0,
        v74->fields.method);
  }
}


void AdjustSdk_AdjustAndroid_AttributionReadListener___ctor(
        AdjustSdk_AdjustAndroid_AttributionReadListener_o *this,
        System_Action_AdjustAttribution__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_593047F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18843/*"com.adjust.sdk.OnAttributionReadListener"*/);
    byte_593047F = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18843/*"com.adjust.sdk.OnAttributionReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
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
  __int64 v10; // x2

  if ( (byte_5930480 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0__onAttributionRead_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0_TypeInfo);
    byte_5930480 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v5[1].klass = (Il2CppClass *)ajoAttribution;
  sub_21FFBF4(&v5[1], ajoAttribution);
  v5[1].monitor = this;
  sub_21FFBF4(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0__onAttributionRead_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v9, v10);
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
  struct UnityEngine_AndroidJavaObject_o *ajoAttribution; // x8
  __int64 v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_AndroidJavaObject_o *v7; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x1
  __int64 v13; // x1
  UnityEngine_AndroidJavaObject_o *v14; // x0
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x1
  __int64 v17; // x1
  UnityEngine_AndroidJavaObject_o *v18; // x0
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x1
  __int64 v21; // x1
  UnityEngine_AndroidJavaObject_o *v22; // x0
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x1
  __int64 v25; // x1
  UnityEngine_AndroidJavaObject_o *v26; // x0
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x1
  __int64 v29; // x1
  UnityEngine_AndroidJavaObject_o *v30; // x0
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x1
  __int64 v33; // x1
  UnityEngine_AndroidJavaObject_o *v34; // x0
  Il2CppObject *v35; // x21
  Il2CppObject *v36; // x1
  __int64 v37; // x1
  UnityEngine_AndroidJavaObject_o *v38; // x0
  Il2CppObject *v39; // x21
  Il2CppObject *v40; // x1
  __int64 v41; // x1
  UnityEngine_AndroidJavaObject_o *v42; // x0
  Il2CppObject *v43; // x21
  Il2CppObject *v44; // x1
  __int64 v45; // x1
  UnityEngine_AndroidJavaObject_o *v46; // x0
  Il2CppObject *v47; // x21
  Il2CppObject *v48; // x1
  __int64 v49; // x1
  UnityEngine_AndroidJavaObject_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  Il2CppObject *v53; // x21
  _QWORD *v54; // x22
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  double v58; // d0
  const MethodInfo_45AEEEC *v59; // x2
  __int128 v60; // q0
  struct AdjustSdk_AdjustAndroid_AttributionReadListener_o *v61; // x8
  struct System_Action_AdjustAttribution__o *v62; // x8
  Il2CppObject *v63; // x22
  Il2CppClass *klass; // x8
  __int64 v65; // x9
  int *p_offset; // x10
  __int64 v67; // x0
  AdjustSdk_AdjustUtils_c *v68; // x0
  UnityEngine_AndroidJavaObject_o *v69; // x21
  Il2CppObject *v70; // x0
  const MethodInfo *v71; // x1
  AdjustSdk_JSONNode_o *v72; // x21
  const MethodInfo *v73; // x2
  AdjustSdk_JSONNode_o *v74; // x0
  const MethodInfo *v75; // x2
  System_Collections_Generic_Dictionary_object__object__o *v76; // x23
  __int64 v77; // x1
  const MethodInfo *v78; // x2
  AdjustSdk_JSONClass_o *v79; // x21
  System_Collections_Generic_Dictionary_string__object__o *v80; // x22
  struct AdjustSdk_AdjustAndroid_AttributionReadListener_o *_4__this; // x8
  struct System_Action_AdjustAttribution__o *callback; // x8
  __int128 v83; // [xsp+0h] [xbp-80h] BYREF
  __int64 v84; // [xsp+18h] [xbp-68h]
  Il2CppObject **v85; // [xsp+20h] [xbp-60h]
  int v86; // [xsp+30h] [xbp-50h]
  Il2CppObject *v87; // [xsp+38h] [xbp-48h] BYREF
  System_Nullable_double__o v88; // 0:x0.16

  v2 = this;
  if ( (byte_5930481 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustAttribution_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_double___);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_double___ctor__);
    this = (AdjustSdk_AdjustAndroid_AttributionReadListener___c__DisplayClass2_0_o *)sub_21FFC50(&StringLiteral_19476/*"doubleValue"*/);
    byte_5930481 = 1;
  }
  ajoAttribution = v2->fields.ajoAttribution;
  v87 = 0;
  v86 = 0;
  if ( ajoAttribution )
  {
    v4 = sub_21FFEBC(AdjustSdk_AdjustAttribution_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v7 = v2->fields.ajoAttribution;
    inited = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v5, v6);
    if ( !v7 )
      sub_21FFECC(inited, v5);
    object = UnityEngine_AndroidJavaObject__Get_object_(
               v7,
               AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerName,
               (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
    if ( !v4 )
      sub_21FFECC(IsNullOrEmpty, v11);
    if ( IsNullOrEmpty )
      v12 = 0;
    else
      v12 = object;
    *(_QWORD *)(v4 + 24) = v12;
    sub_21FFBF4(v4 + 24, v12);
    v14 = v2->fields.ajoAttribution;
    if ( !v14 )
      sub_21FFECC(0, v13);
    v15 = UnityEngine_AndroidJavaObject__Get_object_(
            v14,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerToken,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v15, 0) )
      v16 = 0;
    else
      v16 = v15;
    *(_QWORD *)(v4 + 16) = v16;
    sub_21FFBF4(v4 + 16, v16);
    v18 = v2->fields.ajoAttribution;
    if ( !v18 )
      sub_21FFECC(0, v17);
    v19 = UnityEngine_AndroidJavaObject__Get_object_(
            v18,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyNetwork,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v19, 0) )
      v20 = 0;
    else
      v20 = v19;
    *(_QWORD *)(v4 + 32) = v20;
    sub_21FFBF4(v4 + 32, v20);
    v22 = v2->fields.ajoAttribution;
    if ( !v22 )
      sub_21FFECC(0, v21);
    v23 = UnityEngine_AndroidJavaObject__Get_object_(
            v22,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCampaign,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v23, 0) )
      v24 = 0;
    else
      v24 = v23;
    *(_QWORD *)(v4 + 40) = v24;
    sub_21FFBF4(v4 + 40, v24);
    v26 = v2->fields.ajoAttribution;
    if ( !v26 )
      sub_21FFECC(0, v25);
    v27 = UnityEngine_AndroidJavaObject__Get_object_(
            v26,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdgroup,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v27, 0) )
      v28 = 0;
    else
      v28 = v27;
    *(_QWORD *)(v4 + 48) = v28;
    sub_21FFBF4(v4 + 48, v28);
    v30 = v2->fields.ajoAttribution;
    if ( !v30 )
      sub_21FFECC(0, v29);
    v31 = UnityEngine_AndroidJavaObject__Get_object_(
            v30,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCreative,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v31, 0) )
      v32 = 0;
    else
      v32 = v31;
    *(_QWORD *)(v4 + 56) = v32;
    sub_21FFBF4(v4 + 56, v32);
    v34 = v2->fields.ajoAttribution;
    if ( !v34 )
      sub_21FFECC(0, v33);
    v35 = UnityEngine_AndroidJavaObject__Get_object_(
            v34,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyClickLabel,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v35, 0) )
      v36 = 0;
    else
      v36 = v35;
    *(_QWORD *)(v4 + 64) = v36;
    sub_21FFBF4(v4 + 64, v36);
    v38 = v2->fields.ajoAttribution;
    if ( !v38 )
      sub_21FFECC(0, v37);
    v39 = UnityEngine_AndroidJavaObject__Get_object_(
            v38,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostType,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v39, 0) )
      v40 = 0;
    else
      v40 = v39;
    *(_QWORD *)(v4 + 72) = v40;
    sub_21FFBF4(v4 + 72, v40);
    v42 = v2->fields.ajoAttribution;
    if ( !v42 )
      sub_21FFECC(0, v41);
    v43 = UnityEngine_AndroidJavaObject__Get_object_(
            v42,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostCurrency,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v43, 0) )
      v44 = 0;
    else
      v44 = v43;
    *(_QWORD *)(v4 + 96) = v44;
    sub_21FFBF4(v4 + 96, v44);
    v46 = v2->fields.ajoAttribution;
    if ( !v46 )
      sub_21FFECC(0, v45);
    v47 = UnityEngine_AndroidJavaObject__Get_object_(
            v46,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyFbInstallReferrer,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v47, 0) )
      v48 = 0;
    else
      v48 = v47;
    *(_QWORD *)(v4 + 112) = v48;
    sub_21FFBF4(v4 + 112, v48);
    v50 = v2->fields.ajoAttribution;
    if ( !v50 )
      sub_21FFECC(0, v49);
    v53 = UnityEngine_AndroidJavaObject__Get_object_(
            v50,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostAmount,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
    v87 = v53;
    v84 = 0;
    v85 = &v87;
    if ( v53 )
    {
      v54 = Method_System_Array_Empty_object___;
      v55 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v55 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v55 = v54[7];
      }
      v56 = *(_QWORD *)(v55 + 16);
      if ( (*(_WORD *)(v56 + 309) & 1) == 0 )
        v56 = sub_2237AF8();
      if ( !*(_DWORD *)(v56 + 228) )
        j_il2cpp_runtime_class_init_0(v56, v51, v52);
      v57 = *(_QWORD *)(v54[7] + 16LL);
      if ( (*(_WORD *)(v57 + 309) & 1) == 0 )
        v57 = sub_2237AF8();
      v58 = UnityEngine_AndroidJavaObject__Call_double_(
              (UnityEngine_AndroidJavaObject_o *)v53,
              (System_String_o *)StringLiteral_19476/*"doubleValue"*/,
              **(System_Object_array ***)(v57 + 184),
              (const MethodInfo_36D5508 *)Method_UnityEngine_AndroidJavaObject_Call_double___);
      v83 = 0u;
      *(_QWORD *)&v88.fields.value = Method_System_Nullable_double___ctor__;
      *(_QWORD *)&v88.fields.hasValue = &v83;
      System_Nullable_double____ctor(v88, v58, v59);
      v60 = v83;
    }
    else
    {
      v60 = 0u;
    }
    *(_OWORD *)(v4 + 80) = v60;
    v63 = v87;
    if ( v87 )
    {
      klass = v87->klass;
      v65 = *(unsigned __int16 *)&v87->klass->_2.rank;
      if ( *(_WORD *)&v87->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v65;
          p_offset += 4;
          if ( !v65 )
            goto LABEL_67;
        }
        v67 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_67:
        v67 = sub_2237E2C(v87, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(Il2CppObject *, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
    }
    v68 = AdjustSdk_AdjustUtils_TypeInfo;
    v69 = v2->fields.ajoAttribution;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      v68 = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v51, v52);
    if ( !v69 )
      sub_21FFECC(v68, v51);
    v70 = UnityEngine_AndroidJavaObject__Get_object_(
            v69,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( v70 )
    {
      v72 = AdjustSdk_JSONNode__Parse((System_String_o *)v70, v71);
      v70 = (Il2CppObject *)AdjustSdk_JSONNode__op_Equality(v72, 0, v73);
      if ( ((unsigned __int8)v70 & 1) == 0 )
      {
        if ( !v72 )
          sub_21FFECC(v70, v71);
        v74 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v72->klass->vtable._27_get_AsObject.methodPtr)(
                                        v72,
                                        v72->klass->vtable._27_get_AsObject.method);
        v70 = (Il2CppObject *)AdjustSdk_JSONNode__op_Equality(v74, 0, v75);
        if ( ((unsigned __int8)v70 & 1) == 0 )
        {
          v76 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
          System_Collections_Generic_Dictionary_object__object____ctor(
            v76,
            (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
          *(_QWORD *)(v4 + 104) = v76;
          sub_21FFBF4(v4 + 104, v76);
          v79 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v72->klass->vtable._27_get_AsObject.methodPtr)(
                                           v72,
                                           v72->klass->vtable._27_get_AsObject.method);
          v80 = *(System_Collections_Generic_Dictionary_string__object__o **)(v4 + 104);
          if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v77, v78);
          AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v79, v80, v78);
        }
      }
    }
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      sub_21FFECC(v70, v71);
    callback = _4__this->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        v4,
        callback->fields.method);
  }
  else
  {
    v61 = v2->fields.__4__this;
    if ( !v61 )
      sub_21FFECC(this, method);
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
  if ( (byte_593047B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18844/*"com.adjust.sdk.OnDeeplinkResolvedListener"*/);
    byte_593047B = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18844/*"com.adjust.sdk.OnDeeplinkResolvedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
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
  __int64 v10; // x2

  if ( (byte_593047C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0__onDeeplinkResolved_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0_TypeInfo);
    byte_593047C = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_21FFBF4(&v5[1], this);
  v5[1].monitor = resolvedLink;
  sub_21FFBF4(&v5[1].monitor, resolvedLink);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_DeeplinkResolutionListener___c__DisplayClass2_0__onDeeplinkResolved_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v9, v10);
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
    sub_21FFECC(this, method);
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
  if ( (byte_5930467 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18845/*"com.adjust.sdk.OnDeferredDeeplinkResponseListener"*/);
    byte_5930467 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18845/*"com.adjust.sdk.OnDeferredDeeplinkResponseListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
}


bool AdjustSdk_AdjustAndroid_DeferredDeeplinkListener__launchReceivedDeeplink(
        AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *this,
        UnityEngine_AndroidJavaObject_o *deeplink,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x19
  const MethodInfo *v12; // x1
  __int64 v13; // x2

  if ( (byte_5930468 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0__launchReceivedDeeplink_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_TypeInfo);
    byte_5930468 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7, v8);
  v5[1].klass = (Il2CppClass *)deeplink;
  sub_21FFBF4(&v5[1], deeplink);
  v5[1].monitor = this;
  sub_21FFBF4(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      v5,
      Method_AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0__launchReceivedDeeplink_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v12, v13);
    AdjustThreadDispatcher__RunOnMainThread(v11, v12);
  }
  if ( !*(&AdjustSdk_AdjustAndroid_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustAndroid_TypeInfo, v9, v10);
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
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *v3; // x19
  UnityEngine_AndroidJavaObject_o *deeplink; // x20
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *v9; // x1
  struct AdjustSdk_AdjustAndroid_DeferredDeeplinkListener_o *_4__this; // x8
  struct System_Action_string__o *callback; // x8

  v3 = this;
  if ( (byte_5930469 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    this = (AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *)sub_21FFC50(&StringLiteral_25359/*"toString"*/);
    byte_5930469 = 1;
  }
  deeplink = v3->fields.deeplink;
  if ( deeplink )
  {
    v5 = Method_System_Array_Empty_object___;
    v6 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v6 )
    {
      sub_2237B54(Method_System_Array_Empty_object___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
      v7 = sub_2237AF8();
    if ( !*(_DWORD *)(v7 + 228) )
      j_il2cpp_runtime_class_init_0(v7, method, v2);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_2237AF8();
    this = (AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *)UnityEngine_AndroidJavaObject__Call_object_(
                                                                                        deeplink,
                                                                                        (System_String_o *)StringLiteral_25359/*"toString"*/,
                                                                                        **(System_Object_array ***)(v8 + 184),
                                                                                        (const MethodInfo_36D5738 *)Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    v9 = this;
  }
  else
  {
    v9 = 0;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, v9, v2);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, AdjustSdk_AdjustAndroid_DeferredDeeplinkListener___c__DisplayClass2_0_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v9,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_EventTrackingFailedListener___ctor(
        AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *this,
        System_Action_AdjustEventFailure__o *pCallback,
        const MethodInfo *method)
{
  if ( (byte_593046D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18846/*"com.adjust.sdk.OnEventTrackingFailedListener"*/);
    byte_593046D = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18846/*"com.adjust.sdk.OnEventTrackingFailedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_EventTrackingFailedListener__onEventTrackingFailed(
        AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *this,
        UnityEngine_AndroidJavaObject_o *eventFailureData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x19
  const MethodInfo *v10; // x1
  __int64 v11; // x2

  if ( (byte_593046E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0__onEventTrackingFailed_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0_TypeInfo);
    byte_593046E = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7, v8);
  v5[1].klass = (Il2CppClass *)eventFailureData;
  sub_21FFBF4(&v5[1], eventFailureData);
  v5[1].monitor = this;
  sub_21FFBF4(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      v5,
      Method_AdjustSdk_AdjustAndroid_EventTrackingFailedListener___c__DisplayClass2_0__onEventTrackingFailed_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v10, v11);
    AdjustThreadDispatcher__RunOnMainThread(v9, v10);
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
  __int64 v5; // x2
  UnityEngine_AndroidJavaObject_o *eventFailureData; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_AndroidJavaObject_o *v20; // x0
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_AndroidJavaObject_o *v25; // x0
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_AndroidJavaObject_o *v30; // x0
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_AndroidJavaObject_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  bool v38; // w8
  UnityEngine_AndroidJavaObject_o *v39; // x0
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_AndroidJavaObject_o *v43; // x21
  _QWORD *v44; // x22
  __int64 v45; // x8
  __int64 v46; // x0
  __int64 v47; // x0
  Il2CppObject *v48; // x1
  const MethodInfo *v49; // x2
  Il2CppClass *klass; // x8
  __int64 v51; // x9
  int *p_offset; // x10
  __int64 v53; // x0
  struct AdjustSdk_AdjustAndroid_EventTrackingFailedListener_o *_4__this; // x8
  struct System_Action_AdjustEventFailure__o *callback; // x8
  Il2CppObject *v56; // [xsp+28h] [xbp-38h]

  if ( (byte_593046F & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustEventFailure_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_bool___);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&StringLiteral_25359/*"toString"*/);
    byte_593046F = 1;
  }
  v3 = sub_21FFEBC(AdjustSdk_AdjustEventFailure_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  eventFailureData = this->fields.eventFailureData;
  inited = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v4, v5);
  if ( !eventFailureData )
    sub_21FFECC(inited, v4, v5);
  object = UnityEngine_AndroidJavaObject__Get_object_(
             eventFailureData,
             AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid,
             (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
  if ( !v3 )
    sub_21FFECC(IsNullOrEmpty, v10, v11);
  if ( IsNullOrEmpty )
    v12 = 0;
  else
    v12 = object;
  *(_QWORD *)(v3 + 16) = v12;
  sub_21FFBF4(v3 + 16, v12);
  v15 = this->fields.eventFailureData;
  if ( !v15 )
    sub_21FFECC(0, v13, v14);
  v16 = UnityEngine_AndroidJavaObject__Get_object_(
          v15,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
    v17 = 0;
  else
    v17 = v16;
  *(_QWORD *)(v3 + 24) = v17;
  sub_21FFBF4(v3 + 24, v17);
  v20 = this->fields.eventFailureData;
  if ( !v20 )
    sub_21FFECC(0, v18, v19);
  v21 = UnityEngine_AndroidJavaObject__Get_object_(
          v20,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v21, 0) )
    v22 = 0;
  else
    v22 = v21;
  *(_QWORD *)(v3 + 32) = v22;
  sub_21FFBF4(v3 + 32, v22);
  v25 = this->fields.eventFailureData;
  if ( !v25 )
    sub_21FFECC(0, v23, v24);
  v26 = UnityEngine_AndroidJavaObject__Get_object_(
          v25,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v26, 0) )
    v27 = 0;
  else
    v27 = v26;
  *(_QWORD *)(v3 + 40) = v27;
  sub_21FFBF4(v3 + 40, v27);
  v30 = this->fields.eventFailureData;
  if ( !v30 )
    sub_21FFECC(0, v28, v29);
  v31 = UnityEngine_AndroidJavaObject__Get_object_(
          v30,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v31, 0) )
    v32 = 0;
  else
    v32 = v31;
  *(_QWORD *)(v3 + 48) = v32;
  sub_21FFBF4(v3 + 48, v32);
  v35 = this->fields.eventFailureData;
  if ( !v35 )
    sub_21FFECC(0, v33, v34);
  v38 = UnityEngine_AndroidJavaObject__Get_bool_(
          v35,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry,
          (const MethodInfo_36D7418 *)Method_UnityEngine_AndroidJavaObject_Get_bool___);
  v39 = this->fields.eventFailureData;
  *(_BYTE *)(v3 + 56) = v38;
  if ( !v39 )
    sub_21FFECC(0, v36, v37);
  v40 = UnityEngine_AndroidJavaObject__Get_object_(
          v39,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
  v43 = (UnityEngine_AndroidJavaObject_o *)v40;
  v56 = v40;
  if ( v40 )
  {
    v44 = Method_System_Array_Empty_object___;
    v45 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v45 )
    {
      sub_2237B54(Method_System_Array_Empty_object___);
      v45 = v44[7];
    }
    v46 = *(_QWORD *)(v45 + 16);
    if ( (*(_WORD *)(v46 + 309) & 1) == 0 )
      v46 = sub_2237AF8();
    if ( !*(_DWORD *)(v46 + 228) )
      j_il2cpp_runtime_class_init_0(v46, v41, v42);
    v47 = *(_QWORD *)(v44[7] + 16LL);
    if ( (*(_WORD *)(v47 + 309) & 1) == 0 )
      v47 = sub_2237AF8();
    v48 = UnityEngine_AndroidJavaObject__Call_object_(
            v43,
            (System_String_o *)StringLiteral_25359/*"toString"*/,
            **(System_Object_array ***)(v47 + 184),
            (const MethodInfo_36D5738 *)Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    AdjustSdk_AdjustEventFailure__BuildJsonResponseFromString(
      (AdjustSdk_AdjustEventFailure_o *)v3,
      (System_String_o *)v48,
      v49);
  }
  if ( v56 )
  {
    klass = v56->klass;
    v51 = *(unsigned __int16 *)&v56->klass->_2.rank;
    if ( *(_WORD *)&v56->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v51;
        p_offset += 4;
        if ( !v51 )
          goto LABEL_43;
      }
      v53 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_43:
      v53 = sub_2237E2C(v56, System_IDisposable_TypeInfo, 0);
    }
    v40 = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v53)(v56, *(_QWORD *)(v53 + 8));
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(v40, v41, v42);
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
  if ( (byte_593046A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18847/*"com.adjust.sdk.OnEventTrackingSucceededListener"*/);
    byte_593046A = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18847/*"com.adjust.sdk.OnEventTrackingSucceededListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_EventTrackingSucceededListener__onEventTrackingSucceeded(
        AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *this,
        UnityEngine_AndroidJavaObject_o *eventSuccessData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x19
  const MethodInfo *v10; // x1
  __int64 v11; // x2

  if ( (byte_593046B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0__onEventTrackingSucceeded_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0_TypeInfo);
    byte_593046B = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7, v8);
  v5[1].klass = (Il2CppClass *)eventSuccessData;
  sub_21FFBF4(&v5[1], eventSuccessData);
  v5[1].monitor = this;
  sub_21FFBF4(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      v5,
      Method_AdjustSdk_AdjustAndroid_EventTrackingSucceededListener___c__DisplayClass2_0__onEventTrackingSucceeded_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v10, v11);
    AdjustThreadDispatcher__RunOnMainThread(v9, v10);
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
  __int64 v5; // x2
  UnityEngine_AndroidJavaObject_o *eventSuccessData; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppClass *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_AndroidJavaObject_o *v20; // x0
  Il2CppObject *v21; // x21
  Il2CppClass *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_AndroidJavaObject_o *v25; // x0
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_AndroidJavaObject_o *v30; // x0
  Il2CppObject *v31; // x21
  Il2CppClass *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_AndroidJavaObject_o *v35; // x0
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_AndroidJavaObject_o *v39; // x21
  _QWORD *v40; // x22
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  Il2CppObject *v44; // x1
  const MethodInfo *v45; // x2
  Il2CppClass *klass; // x8
  __int64 v47; // x9
  int *p_offset; // x10
  __int64 v49; // x0
  struct AdjustSdk_AdjustAndroid_EventTrackingSucceededListener_o *_4__this; // x8
  struct System_Action_AdjustEventSuccess__o *callback; // x8
  Il2CppObject *v52; // [xsp+28h] [xbp-38h]

  if ( (byte_593046C & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustEventSuccess_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&StringLiteral_25359/*"toString"*/);
    byte_593046C = 1;
  }
  v3 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustEventSuccess_TypeInfo);
  System_Object___ctor(v3, 0);
  eventSuccessData = this->fields.eventSuccessData;
  inited = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v4, v5);
  if ( !eventSuccessData )
    sub_21FFECC(inited, v4, v5);
  object = UnityEngine_AndroidJavaObject__Get_object_(
             eventSuccessData,
             AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid,
             (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
  if ( !v3 )
    sub_21FFECC(IsNullOrEmpty, v10, v11);
  if ( IsNullOrEmpty )
    v12 = 0;
  else
    v12 = (Il2CppClass *)object;
  v3[1].klass = v12;
  sub_21FFBF4(&v3[1], v12);
  v15 = this->fields.eventSuccessData;
  if ( !v15 )
    sub_21FFECC(0, v13, v14);
  v16 = UnityEngine_AndroidJavaObject__Get_object_(
          v15,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
    v17 = 0;
  else
    v17 = v16;
  v3[1].monitor = v17;
  sub_21FFBF4(&v3[1].monitor, v17);
  v20 = this->fields.eventSuccessData;
  if ( !v20 )
    sub_21FFECC(0, v18, v19);
  v21 = UnityEngine_AndroidJavaObject__Get_object_(
          v20,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v21, 0) )
    v22 = 0;
  else
    v22 = (Il2CppClass *)v21;
  v3[2].klass = v22;
  sub_21FFBF4(&v3[2], v22);
  v25 = this->fields.eventSuccessData;
  if ( !v25 )
    sub_21FFECC(0, v23, v24);
  v26 = UnityEngine_AndroidJavaObject__Get_object_(
          v25,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v26, 0) )
    v27 = 0;
  else
    v27 = v26;
  v3[2].monitor = v27;
  sub_21FFBF4(&v3[2].monitor, v27);
  v30 = this->fields.eventSuccessData;
  if ( !v30 )
    sub_21FFECC(0, v28, v29);
  v31 = UnityEngine_AndroidJavaObject__Get_object_(
          v30,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v31, 0) )
    v32 = 0;
  else
    v32 = (Il2CppClass *)v31;
  v3[3].klass = v32;
  sub_21FFBF4(&v3[3], v32);
  v35 = this->fields.eventSuccessData;
  if ( !v35 )
    sub_21FFECC(0, v33, v34);
  v36 = UnityEngine_AndroidJavaObject__Get_object_(
          v35,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
  v39 = (UnityEngine_AndroidJavaObject_o *)v36;
  v52 = v36;
  if ( v36 )
  {
    v40 = Method_System_Array_Empty_object___;
    v41 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v41 )
    {
      sub_2237B54(Method_System_Array_Empty_object___);
      v41 = v40[7];
    }
    v42 = *(_QWORD *)(v41 + 16);
    if ( (*(_WORD *)(v42 + 309) & 1) == 0 )
      v42 = sub_2237AF8();
    if ( !*(_DWORD *)(v42 + 228) )
      j_il2cpp_runtime_class_init_0(v42, v37, v38);
    v43 = *(_QWORD *)(v40[7] + 16LL);
    if ( (*(_WORD *)(v43 + 309) & 1) == 0 )
      v43 = sub_2237AF8();
    v44 = UnityEngine_AndroidJavaObject__Call_object_(
            v39,
            (System_String_o *)StringLiteral_25359/*"toString"*/,
            **(System_Object_array ***)(v43 + 184),
            (const MethodInfo_36D5738 *)Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    AdjustSdk_AdjustEventSuccess__BuildJsonResponseFromString(
      (AdjustSdk_AdjustEventSuccess_o *)v3,
      (System_String_o *)v44,
      v45);
  }
  if ( v52 )
  {
    klass = v52->klass;
    v47 = *(unsigned __int16 *)&v52->klass->_2.rank;
    if ( *(_WORD *)&v52->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        p_offset += 4;
        if ( !v47 )
          goto LABEL_42;
      }
      v49 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_42:
      v49 = sub_2237E2C(v52, System_IDisposable_TypeInfo, 0);
    }
    v36 = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v49)(v52, *(_QWORD *)(v49 + 8));
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(v36, v37, v38);
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
  if ( (byte_5930476 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18848/*"com.adjust.sdk.OnGoogleAdIdReadListener"*/);
    byte_5930476 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18848/*"com.adjust.sdk.OnGoogleAdIdReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_GoogleAdIdReadListener__onGoogleAdIdRead(
        AdjustSdk_AdjustAndroid_GoogleAdIdReadListener_o *this,
        System_String_o *adid,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x19
  const MethodInfo *v10; // x1
  __int64 v11; // x2

  if ( (byte_5930477 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0__onGoogleAdIdRead_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0_TypeInfo);
    byte_5930477 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7, v8);
  v5[1].klass = (Il2CppClass *)this;
  sub_21FFBF4(&v5[1], this);
  v5[1].monitor = adid;
  sub_21FFBF4(&v5[1].monitor, adid);
  if ( this->fields.callback )
  {
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      v5,
      Method_AdjustSdk_AdjustAndroid_GoogleAdIdReadListener___c__DisplayClass2_0__onGoogleAdIdRead_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v10, v11);
    AdjustThreadDispatcher__RunOnMainThread(v9, v10);
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
    sub_21FFECC(this, method);
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
  if ( (byte_5930487 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18849/*"com.adjust.sdk.OnIsEnabledListener"*/);
    byte_5930487 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18849/*"com.adjust.sdk.OnIsEnabledListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_IsEnabledListener__onIsEnabledRead(
        AdjustSdk_AdjustAndroid_IsEnabledListener_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_bool__o *callback; // x8
  System_Action_o *v9; // x19
  const MethodInfo *v10; // x1
  __int64 v11; // x2

  if ( (byte_5930488 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0__onIsEnabledRead_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0_TypeInfo);
    byte_5930488 = 1;
  }
  v5 = sub_21FFEBC(AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4(v5 + 16, this);
  callback = this->fields.callback;
  *(_BYTE *)(v5 + 24) = isEnabled;
  if ( callback )
  {
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)v5,
      Method_AdjustSdk_AdjustAndroid_IsEnabledListener___c__DisplayClass2_0__onIsEnabledRead_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v10, v11);
    AdjustThreadDispatcher__RunOnMainThread(v9, v10);
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
    sub_21FFECC(this, method);
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
  if ( (byte_5930489 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18850/*"com.adjust.sdk.OnLastDeeplinkReadListener"*/);
    byte_5930489 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18850/*"com.adjust.sdk.OnLastDeeplinkReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
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
  __int64 v10; // x2

  if ( (byte_593048A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0__onLastDeeplinkRead_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_TypeInfo);
    byte_593048A = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v5[1].klass = (Il2CppClass *)ajoLastDeeplink;
  sub_21FFBF4(&v5[1], ajoLastDeeplink);
  v5[1].monitor = this;
  sub_21FFBF4(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0__onLastDeeplinkRead_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v9, v10);
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
  __int64 v2; // x2
  AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *v3; // x19
  UnityEngine_AndroidJavaObject_o *ajoLastDeeplink; // x20
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *v9; // x1
  struct AdjustSdk_AdjustAndroid_LastDeeplinkListener_o *_4__this; // x8
  struct System_Action_string__o *callback; // x8

  v3 = this;
  if ( (byte_593048B & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    this = (AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *)sub_21FFC50(&StringLiteral_25359/*"toString"*/);
    byte_593048B = 1;
  }
  ajoLastDeeplink = v3->fields.ajoLastDeeplink;
  if ( ajoLastDeeplink )
  {
    v5 = Method_System_Array_Empty_object___;
    v6 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v6 )
    {
      sub_2237B54(Method_System_Array_Empty_object___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
      v7 = sub_2237AF8();
    if ( !*(_DWORD *)(v7 + 228) )
      j_il2cpp_runtime_class_init_0(v7, method, v2);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_2237AF8();
    this = (AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *)UnityEngine_AndroidJavaObject__Call_object_(
                                                                                    ajoLastDeeplink,
                                                                                    (System_String_o *)StringLiteral_25359/*"toString"*/,
                                                                                    **(System_Object_array ***)(v8 + 184),
                                                                                    (const MethodInfo_36D5738 *)Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    v9 = this;
  }
  else
  {
    v9 = 0;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, v9);
  callback = _4__this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, AdjustSdk_AdjustAndroid_LastDeeplinkListener___c__DisplayClass2_0_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v9,
      callback->fields.method);
}


void AdjustSdk_AdjustAndroid_SdkVersionReadListener___ctor(
        AdjustSdk_AdjustAndroid_SdkVersionReadListener_o *this,
        System_Action_string__o *pCallback,
        System_String_o *sdkPrefix,
        const MethodInfo *method)
{
  if ( (byte_5930484 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18852/*"com.adjust.sdk.OnSdkVersionReadListener"*/);
    byte_5930484 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, sdkPrefix);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18852/*"com.adjust.sdk.OnSdkVersionReadListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
  this->fields.sdkPrefix = sdkPrefix;
  sub_21FFBF4(&this->fields.sdkPrefix, sdkPrefix);
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
  __int64 v10; // x2

  if ( (byte_5930485 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0__onSdkVersionRead_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0_TypeInfo);
    byte_5930485 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_21FFBF4(&v5[1], this);
  v5[1].monitor = sdkVersion;
  sub_21FFBF4(&v5[1].monitor, sdkVersion);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0__onSdkVersionRead_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v9, v10);
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
  System_String_o *v5; // x1

  v2 = this;
  if ( (byte_5930486 & 1) == 0 )
  {
    this = (AdjustSdk_AdjustAndroid_SdkVersionReadListener___c__DisplayClass3_0_o *)sub_21FFC50(&StringLiteral_1850/*"@"*/);
    byte_5930486 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  callback = _4__this->fields.callback;
  if ( callback )
  {
    v5 = System_String__Concat_75481624(
           _4__this->fields.sdkPrefix,
           (System_String_o *)StringLiteral_1850/*"@"*/,
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
  if ( (byte_5930473 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18853/*"com.adjust.sdk.OnSessionTrackingFailedListener"*/);
    byte_5930473 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18853/*"com.adjust.sdk.OnSessionTrackingFailedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_SessionTrackingFailedListener__onSessionTrackingFailed(
        AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *this,
        UnityEngine_AndroidJavaObject_o *sessionFailureData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x19
  const MethodInfo *v10; // x1
  __int64 v11; // x2

  if ( (byte_5930474 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0__onSessionTrackingFailed_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0_TypeInfo);
    byte_5930474 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7, v8);
  v5[1].klass = (Il2CppClass *)sessionFailureData;
  sub_21FFBF4(&v5[1], sessionFailureData);
  v5[1].monitor = this;
  sub_21FFBF4(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      v5,
      Method_AdjustSdk_AdjustAndroid_SessionTrackingFailedListener___c__DisplayClass2_0__onSessionTrackingFailed_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v10, v11);
    AdjustThreadDispatcher__RunOnMainThread(v9, v10);
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
  __int64 v5; // x2
  UnityEngine_AndroidJavaObject_o *sessionFailureData; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_AndroidJavaObject_o *v20; // x0
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_AndroidJavaObject_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  bool v28; // w8
  UnityEngine_AndroidJavaObject_o *v29; // x0
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_AndroidJavaObject_o *v33; // x21
  _QWORD *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  Il2CppObject *v38; // x1
  const MethodInfo *v39; // x2
  Il2CppClass *klass; // x8
  __int64 v41; // x9
  int *p_offset; // x10
  __int64 v43; // x0
  struct AdjustSdk_AdjustAndroid_SessionTrackingFailedListener_o *_4__this; // x8
  struct System_Action_AdjustSessionFailure__o *callback; // x8
  Il2CppObject *v46; // [xsp+28h] [xbp-38h]

  if ( (byte_5930475 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustSessionFailure_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_bool___);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&StringLiteral_25359/*"toString"*/);
    byte_5930475 = 1;
  }
  v3 = sub_21FFEBC(AdjustSdk_AdjustSessionFailure_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  sessionFailureData = this->fields.sessionFailureData;
  inited = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v4, v5);
  if ( !sessionFailureData )
    sub_21FFECC(inited, v4, v5);
  object = UnityEngine_AndroidJavaObject__Get_object_(
             sessionFailureData,
             AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid,
             (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
  if ( !v3 )
    sub_21FFECC(IsNullOrEmpty, v10, v11);
  if ( IsNullOrEmpty )
    v12 = 0;
  else
    v12 = object;
  *(_QWORD *)(v3 + 16) = v12;
  sub_21FFBF4(v3 + 16, v12);
  v15 = this->fields.sessionFailureData;
  if ( !v15 )
    sub_21FFECC(0, v13, v14);
  v16 = UnityEngine_AndroidJavaObject__Get_object_(
          v15,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
    v17 = 0;
  else
    v17 = v16;
  *(_QWORD *)(v3 + 24) = v17;
  sub_21FFBF4(v3 + 24, v17);
  v20 = this->fields.sessionFailureData;
  if ( !v20 )
    sub_21FFECC(0, v18, v19);
  v21 = UnityEngine_AndroidJavaObject__Get_object_(
          v20,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v21, 0) )
    v22 = 0;
  else
    v22 = v21;
  *(_QWORD *)(v3 + 32) = v22;
  sub_21FFBF4(v3 + 32, v22);
  v25 = this->fields.sessionFailureData;
  if ( !v25 )
    sub_21FFECC(0, v23, v24);
  v28 = UnityEngine_AndroidJavaObject__Get_bool_(
          v25,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry,
          (const MethodInfo_36D7418 *)Method_UnityEngine_AndroidJavaObject_Get_bool___);
  v29 = this->fields.sessionFailureData;
  *(_BYTE *)(v3 + 40) = v28;
  if ( !v29 )
    sub_21FFECC(0, v26, v27);
  v30 = UnityEngine_AndroidJavaObject__Get_object_(
          v29,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
  v33 = (UnityEngine_AndroidJavaObject_o *)v30;
  v46 = v30;
  if ( v30 )
  {
    v34 = Method_System_Array_Empty_object___;
    v35 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v35 )
    {
      sub_2237B54(Method_System_Array_Empty_object___);
      v35 = v34[7];
    }
    v36 = *(_QWORD *)(v35 + 16);
    if ( (*(_WORD *)(v36 + 309) & 1) == 0 )
      v36 = sub_2237AF8();
    if ( !*(_DWORD *)(v36 + 228) )
      j_il2cpp_runtime_class_init_0(v36, v31, v32);
    v37 = *(_QWORD *)(v34[7] + 16LL);
    if ( (*(_WORD *)(v37 + 309) & 1) == 0 )
      v37 = sub_2237AF8();
    v38 = UnityEngine_AndroidJavaObject__Call_object_(
            v33,
            (System_String_o *)StringLiteral_25359/*"toString"*/,
            **(System_Object_array ***)(v37 + 184),
            (const MethodInfo_36D5738 *)Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    AdjustSdk_AdjustSessionFailure__BuildJsonResponseFromString(
      (AdjustSdk_AdjustSessionFailure_o *)v3,
      (System_String_o *)v38,
      v39);
  }
  if ( v46 )
  {
    klass = v46->klass;
    v41 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        p_offset += 4;
        if ( !v41 )
          goto LABEL_35;
      }
      v43 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_35:
      v43 = sub_2237E2C(v46, System_IDisposable_TypeInfo, 0);
    }
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v43)(v46, *(_QWORD *)(v43 + 8));
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(v30, v31, v32);
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
  if ( (byte_5930470 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18854/*"com.adjust.sdk.OnSessionTrackingSucceededListener"*/);
    byte_5930470 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18854/*"com.adjust.sdk.OnSessionTrackingSucceededListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
}


void AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener__onSessionTrackingSucceeded(
        AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *this,
        UnityEngine_AndroidJavaObject_o *sessionSuccessData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x19
  const MethodInfo *v10; // x1
  __int64 v11; // x2

  if ( (byte_5930471 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0__onSessionTrackingSucceeded_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0_TypeInfo);
    byte_5930471 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7, v8);
  v5[1].klass = (Il2CppClass *)sessionSuccessData;
  sub_21FFBF4(&v5[1], sessionSuccessData);
  v5[1].monitor = this;
  sub_21FFBF4(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      v5,
      Method_AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener___c__DisplayClass2_0__onSessionTrackingSucceeded_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v10, v11);
    AdjustThreadDispatcher__RunOnMainThread(v9, v10);
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
  __int64 v5; // x2
  UnityEngine_AndroidJavaObject_o *sessionSuccessData; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppClass *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_AndroidJavaObject_o *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_AndroidJavaObject_o *v20; // x0
  Il2CppObject *v21; // x21
  Il2CppClass *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_AndroidJavaObject_o *v25; // x0
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_AndroidJavaObject_o *v29; // x21
  _QWORD *v30; // x22
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0
  Il2CppObject *v34; // x1
  const MethodInfo *v35; // x2
  Il2CppClass *klass; // x8
  __int64 v37; // x9
  int *p_offset; // x10
  __int64 v39; // x0
  struct AdjustSdk_AdjustAndroid_SessionTrackingSucceededListener_o *_4__this; // x8
  struct System_Action_AdjustSessionSuccess__o *callback; // x8
  Il2CppObject *v42; // [xsp+28h] [xbp-38h]

  if ( (byte_5930472 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustSessionSuccess_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&StringLiteral_25359/*"toString"*/);
    byte_5930472 = 1;
  }
  v3 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustSessionSuccess_TypeInfo);
  System_Object___ctor(v3, 0);
  sessionSuccessData = this->fields.sessionSuccessData;
  inited = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v4, v5);
  if ( !sessionSuccessData )
    sub_21FFECC(inited, v4, v5);
  object = UnityEngine_AndroidJavaObject__Get_object_(
             sessionSuccessData,
             AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid,
             (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)object, 0);
  if ( !v3 )
    sub_21FFECC(IsNullOrEmpty, v10, v11);
  if ( IsNullOrEmpty )
    v12 = 0;
  else
    v12 = (Il2CppClass *)object;
  v3[1].klass = v12;
  sub_21FFBF4(&v3[1], v12);
  v15 = this->fields.sessionSuccessData;
  if ( !v15 )
    sub_21FFECC(0, v13, v14);
  v16 = UnityEngine_AndroidJavaObject__Get_object_(
          v15,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
    v17 = 0;
  else
    v17 = v16;
  v3[1].monitor = v17;
  sub_21FFBF4(&v3[1].monitor, v17);
  v20 = this->fields.sessionSuccessData;
  if ( !v20 )
    sub_21FFECC(0, v18, v19);
  v21 = UnityEngine_AndroidJavaObject__Get_object_(
          v20,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
  if ( System_String__IsNullOrEmpty((System_String_o *)v21, 0) )
    v22 = 0;
  else
    v22 = (Il2CppClass *)v21;
  v3[2].klass = v22;
  sub_21FFBF4(&v3[2], v22);
  v25 = this->fields.sessionSuccessData;
  if ( !v25 )
    sub_21FFECC(0, v23, v24);
  v26 = UnityEngine_AndroidJavaObject__Get_object_(
          v25,
          AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
          (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_AndroidJavaObject____91478704);
  v29 = (UnityEngine_AndroidJavaObject_o *)v26;
  v42 = v26;
  if ( v26 )
  {
    v30 = Method_System_Array_Empty_object___;
    v31 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v31 )
    {
      sub_2237B54(Method_System_Array_Empty_object___);
      v31 = v30[7];
    }
    v32 = *(_QWORD *)(v31 + 16);
    if ( (*(_WORD *)(v32 + 309) & 1) == 0 )
      v32 = sub_2237AF8();
    if ( !*(_DWORD *)(v32 + 228) )
      j_il2cpp_runtime_class_init_0(v32, v27, v28);
    v33 = *(_QWORD *)(v30[7] + 16LL);
    if ( (*(_WORD *)(v33 + 309) & 1) == 0 )
      v33 = sub_2237AF8();
    v34 = UnityEngine_AndroidJavaObject__Call_object_(
            v29,
            (System_String_o *)StringLiteral_25359/*"toString"*/,
            **(System_Object_array ***)(v33 + 184),
            (const MethodInfo_36D5738 *)Method_UnityEngine_AndroidJavaObject_Call_string____91478616);
    AdjustSdk_AdjustSessionSuccess__BuildJsonResponseFromString(
      (AdjustSdk_AdjustSessionSuccess_o *)v3,
      (System_String_o *)v34,
      v35);
  }
  if ( v42 )
  {
    klass = v42->klass;
    v37 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
          goto LABEL_34;
      }
      v39 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_34:
      v39 = sub_2237E2C(v42, System_IDisposable_TypeInfo, 0);
    }
    v26 = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v39)(v42, *(_QWORD *)(v39 + 8));
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(v26, v27, v28);
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
  if ( (byte_5930478 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaProxy_TypeInfo);
    sub_21FFC50(&StringLiteral_18851/*"com.adjust.sdk.OnPurchaseVerificationFinishedListener"*/);
    byte_5930478 = 1;
  }
  if ( !*(&UnityEngine_AndroidJavaProxy_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_AndroidJavaProxy_TypeInfo, pCallback, method);
  UnityEngine_AndroidJavaProxy___ctor((UnityEngine_AndroidJavaProxy_o *)this, (System_String_o *)StringLiteral_18851/*"com.adjust.sdk.OnPurchaseVerificationFinishedListener"*/, 0);
  this->fields.callback = pCallback;
  sub_21FFBF4(&this->fields.callback, pCallback);
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
  __int64 v10; // x2

  if ( (byte_5930479 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AdjustThreadDispatcher_TypeInfo);
    sub_21FFC50(&Method_AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0__onVerificationFinished_b__0__);
    sub_21FFC50(&AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0_TypeInfo);
    byte_5930479 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v5[1].klass = (Il2CppClass *)ajoVerificationInfo;
  sub_21FFBF4(&v5[1], ajoVerificationInfo);
  v5[1].monitor = this;
  sub_21FFBF4(&v5[1].monitor, this);
  if ( this->fields.callback )
  {
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      v5,
      Method_AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0__onVerificationFinished_b__0__,
      0);
    if ( !*(&AdjustThreadDispatcher_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustThreadDispatcher_TypeInfo, v9, v10);
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
  __int64 v5; // x2
  UnityEngine_AndroidJavaObject_o *ajoVerificationInfo; // x21
  AdjustSdk_AdjustUtils_c *inited; // x0
  Il2CppObject *object; // x0
  __int64 v9; // x1
  UnityEngine_AndroidJavaObject_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w8
  UnityEngine_AndroidJavaObject_o *v13; // x0
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x1
  __int64 v16; // x0
  __int64 v17; // x1
  struct AdjustSdk_AdjustAndroid_VerificationResultListener_o *_4__this; // x8
  struct System_Action_AdjustPurchaseVerificationResult__o *callback; // x8
  struct AdjustSdk_AdjustAndroid_VerificationResultListener_o *v20; // x8
  struct System_Action_AdjustPurchaseVerificationResult__o *v21; // x8

  v2 = this;
  if ( (byte_593047A & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustPurchaseVerificationResult_TypeInfo);
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_int____91478728);
    this = (AdjustSdk_AdjustAndroid_VerificationResultListener___c__DisplayClass2_0_o *)sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    byte_593047A = 1;
  }
  if ( v2->fields.ajoVerificationInfo )
  {
    v3 = sub_21FFEBC(AdjustSdk_AdjustPurchaseVerificationResult_TypeInfo);
    System_Object___ctor((Il2CppObject *)v3, 0);
    ajoVerificationInfo = v2->fields.ajoVerificationInfo;
    inited = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      inited = (AdjustSdk_AdjustUtils_c *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v4, v5);
    if ( !ajoVerificationInfo )
      sub_21FFECC(inited, v4);
    object = UnityEngine_AndroidJavaObject__Get_object_(
               ajoVerificationInfo,
               AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyVerificationStatus,
               (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( !v3 )
      sub_21FFECC(object, object);
    *(_QWORD *)(v3 + 32) = object;
    sub_21FFBF4(v3 + 32, object);
    v10 = v2->fields.ajoVerificationInfo;
    if ( !v10 )
      sub_21FFECC(0, v9);
    v12 = UnityEngine_AndroidJavaObject__Get_int_(
            v10,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCode,
            (const MethodInfo_36D7498 *)Method_UnityEngine_AndroidJavaObject_Get_int____91478728);
    v13 = v2->fields.ajoVerificationInfo;
    *(_DWORD *)(v3 + 16) = v12;
    if ( !v13 )
      sub_21FFECC(0, v11);
    v14 = UnityEngine_AndroidJavaObject__Get_object_(
            v13,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
            (const MethodInfo_36D7598 *)Method_UnityEngine_AndroidJavaObject_Get_string___);
    if ( System_String__IsNullOrEmpty((System_String_o *)v14, 0) )
      v15 = 0;
    else
      v15 = v14;
    *(_QWORD *)(v3 + 24) = v15;
    v16 = sub_21FFBF4(v3 + 24, v15);
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      sub_21FFECC(v16, v17);
    callback = _4__this->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        v3,
        callback->fields.method);
  }
  else
  {
    v20 = v2->fields.__4__this;
    if ( !v20 )
      sub_21FFECC(this, method);
    v21 = v20->fields.callback;
    if ( v21 )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v21->fields.invoke_impl)(
        v21->fields.method_code,
        0,
        v21->fields.method);
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
  sub_21FFBF4(&this->fields, transactionId);
  this->fields._ProductId_k__BackingField = productId;
  sub_21FFBF4(&this->fields._ProductId_k__BackingField, productId);
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
  sub_21FFBF4(&this->fields._ProductId_k__BackingField, value);
}


void AdjustSdk_AdjustAppStorePurchase__set_TransactionId(
        AdjustSdk_AdjustAppStorePurchase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TransactionId_k__BackingField = value;
  sub_21FFBF4(&this->fields, value);
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
  sub_21FFBF4(&this->fields._Price_k__BackingField, price);
  this->fields._Currency_k__BackingField = currency;
  sub_21FFBF4(&this->fields._Currency_k__BackingField, currency);
  this->fields._TransactionId_k__BackingField = transactionId;
  sub_21FFBF4(&this->fields._TransactionId_k__BackingField, transactionId);
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
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_593048E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_593048E = 1;
  }
  innerCallbackParameters = this->fields.innerCallbackParameters;
  p_fields = &this->fields;
  v7 = (System_Collections_Generic_List_object__o *)innerCallbackParameters;
  if ( !innerCallbackParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerCallbackParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_21FFBF4(p_fields, v10);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFBF4(v14 + 4, key);
  }
  v15 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
  if ( !p_fields->innerCallbackParameters
    || (v16 = v15->fields._items,
        v17 = Method_System_Collections_Generic_List_string__Add__,
        ++v15->fields._version,
        !v16) )
  {
LABEL_14:
    sub_21FFECC(v7, key);
  }
  v18 = v15->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v15->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)value;
    sub_21FFBF4(v19 + 4, value);
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
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_593048F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_593048F = 1;
  }
  innerPartnerParameters = this->fields.innerPartnerParameters;
  p_innerPartnerParameters = &this->fields.innerPartnerParameters;
  v7 = (System_Collections_Generic_List_object__o *)innerPartnerParameters;
  if ( !innerPartnerParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_21FFBF4(p_innerPartnerParameters, v10);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFBF4(v14 + 4, key);
  }
  v15 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
  if ( !*p_innerPartnerParameters
    || (v16 = v15->fields._items,
        v17 = Method_System_Collections_Generic_List_string__Add__,
        ++v15->fields._version,
        !v16) )
  {
LABEL_14:
    sub_21FFECC(v7, key);
  }
  v18 = v15->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v15->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)value;
    sub_21FFBF4(v19 + 4, value);
  }
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustAppStoreSubscription__get_CallbackParameters(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_593048C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_593048C = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerCallbackParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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

  if ( (byte_593048D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_593048D = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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
  sub_21FFBF4(&this->fields._Currency_k__BackingField, value);
}


void AdjustSdk_AdjustAppStoreSubscription__set_Price(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Price_k__BackingField = value;
  sub_21FFBF4(&this->fields._Price_k__BackingField, value);
}


void AdjustSdk_AdjustAppStoreSubscription__set_SalesRegion(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._SalesRegion_k__BackingField = value;
  sub_21FFBF4(&this->fields._SalesRegion_k__BackingField, value);
}


void AdjustSdk_AdjustAppStoreSubscription__set_TransactionDate(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TransactionDate_k__BackingField = value;
  sub_21FFBF4(&this->fields._TransactionDate_k__BackingField, value);
}


void AdjustSdk_AdjustAppStoreSubscription__set_TransactionId(
        AdjustSdk_AdjustAppStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TransactionId_k__BackingField = value;
  sub_21FFBF4(&this->fields._TransactionId_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution___ctor(AdjustSdk_AdjustAttribution_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustAttribution___ctor_36707068(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  AdjustSdk_AdjustUtils_c *v10; // x0
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
  struct System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  struct System_String_o *v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  AdjustSdk_AdjustUtils_c *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_String_o *v31; // x21
  System_IFormatProvider_o *InvariantCulture; // x1
  double v33; // d0
  const MethodInfo_45AEEEC *v34; // x2
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  AdjustSdk_AdjustUtils_c *v37; // x0
  struct System_String_o *v38; // x0
  const MethodInfo *v39; // x2
  struct System_String_o *v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  AdjustSdk_JSONNode_o *v43; // x20
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  __int64 v47; // x2
  System_String_o *v48; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *AttributionJsonResponse; // x0
  struct System_Nullable_double__o v50; // [xsp+0h] [xbp-50h] BYREF
  int v51; // [xsp+18h] [xbp-38h]
  System_Nullable_double__o v52; // 0:x0.16

  if ( (byte_5930490 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&System_Globalization_CultureInfo_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_double___ctor__);
    byte_5930490 = 1;
  }
  v51 = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v10 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v8, v9);
      v10 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v11 = AdjustSdk_AdjustUtils__GetJsonString(v6, v10->static_fields->KeyTrackerName, v9);
    this->fields._TrackerName_k__BackingField = v11;
    sub_21FFBF4(&this->fields._TrackerName_k__BackingField, v11);
    v13 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerToken, v12);
    this->fields._TrackerToken_k__BackingField = v13;
    sub_21FFBF4(&this->fields, v13);
    v15 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyNetwork, v14);
    this->fields._Network_k__BackingField = v15;
    sub_21FFBF4(&this->fields._Network_k__BackingField, v15);
    v17 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCampaign, v16);
    this->fields._Campaign_k__BackingField = v17;
    sub_21FFBF4(&this->fields._Campaign_k__BackingField, v17);
    v19 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdgroup, v18);
    this->fields._Adgroup_k__BackingField = v19;
    sub_21FFBF4(&this->fields._Adgroup_k__BackingField, v19);
    v21 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCreative, v20);
    this->fields._Creative_k__BackingField = v21;
    sub_21FFBF4(&this->fields._Creative_k__BackingField, v21);
    v23 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyClickLabel, v22);
    this->fields._ClickLabel_k__BackingField = v23;
    sub_21FFBF4(&this->fields._ClickLabel_k__BackingField, v23);
    v25 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostType, v24);
    this->fields._CostType_k__BackingField = v25;
    sub_21FFBF4(&this->fields._CostType_k__BackingField, v25);
    v28 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v26, v27);
      v28 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v31 = AdjustSdk_AdjustUtils__GetJsonString(v6, v28->static_fields->KeyCostAmount, v27);
    if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, v29, v30);
    InvariantCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_InvariantCulture(0);
    v33 = System_Double__Parse_76836292(v31, InvariantCulture, 0);
    v50 = (struct System_Nullable_double__o)0LL;
    *(_QWORD *)&v52.fields.value = Method_System_Nullable_double___ctor__;
    *(_QWORD *)&v52.fields.hasValue = &v50;
    System_Nullable_double____ctor(v52, v33, v34);
    this->fields._CostAmount_k__BackingField = v50;
    v37 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v35, v36);
      v37 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v38 = AdjustSdk_AdjustUtils__GetJsonString(v6, v37->static_fields->KeyCostCurrency, v36);
    this->fields._CostCurrency_k__BackingField = v38;
    sub_21FFBF4(&this->fields._CostCurrency_k__BackingField, v38);
    v40 = AdjustSdk_AdjustUtils__GetJsonString(
            v6,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyFbInstallReferrer,
            v39);
    this->fields._FbInstallReferrer_k__BackingField = v40;
    v41 = sub_21FFBF4(&this->fields._FbInstallReferrer_k__BackingField, v40);
    if ( !v6 )
      sub_21FFECC(v41, v42);
    v43 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v43, 0, v44) )
    {
      v48 = AdjustSdk_JSONNode__op_Implicit_36708380(v43, v45);
      if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v46, v47);
      AttributionJsonResponse = AdjustSdk_AdjustUtils__GetAttributionJsonResponse(v48, v46);
      this->fields._JsonResponse_k__BackingField = AttributionJsonResponse;
      sub_21FFBF4(&this->fields._JsonResponse_k__BackingField, AttributionJsonResponse);
    }
  }
}


void AdjustSdk_AdjustAttribution___ctor_36709032(
        AdjustSdk_AdjustAttribution_o *this,
        System_Collections_Generic_Dictionary_string__string__o *dicAttributionData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AdjustSdk_AdjustUtils_c *v7; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v9; // x2
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
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  AdjustSdk_AdjustUtils_c *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *v28; // x21
  System_IFormatProvider_o *InvariantCulture; // x1
  double v30; // d0
  const MethodInfo_45AEEEC *v31; // x2
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  AdjustSdk_AdjustUtils_c *v34; // x0
  struct System_String_o *v35; // x0
  const MethodInfo *v36; // x2
  struct System_String_o *v37; // x0
  const MethodInfo *v38; // x2
  System_String_o *v39; // x0
  const MethodInfo *v40; // x1
  AdjustSdk_JSONNode_o *v41; // x20
  const MethodInfo *v42; // x2
  _BOOL8 v43; // x0
  __int64 v44; // x1
  AdjustSdk_JSONNode_o *v45; // x0
  const MethodInfo *v46; // x2
  System_Collections_Generic_Dictionary_object__object__o *v47; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v49; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  System_Collections_Generic_Dictionary_string__object__o *v52; // x19
  AdjustSdk_JSONClass_o *v53; // x20
  struct System_Nullable_double__o v54; // [xsp+0h] [xbp-50h] BYREF
  int v55; // [xsp+18h] [xbp-38h]
  System_Nullable_double__o v56; // 0:x0.16

  if ( (byte_5930491 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&System_Globalization_CultureInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Nullable_double___ctor__);
    byte_5930491 = 1;
  }
  v55 = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( dicAttributionData )
  {
    v7 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v5, v6);
      v7 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(dicAttributionData, v7->static_fields->KeyTrackerName, v6);
    this->fields._TrackerName_k__BackingField = Value;
    sub_21FFBF4(&this->fields._TrackerName_k__BackingField, Value);
    v10 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTrackerToken,
            v9);
    this->fields._TrackerToken_k__BackingField = v10;
    sub_21FFBF4(&this->fields, v10);
    v12 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyNetwork,
            v11);
    this->fields._Network_k__BackingField = v12;
    sub_21FFBF4(&this->fields._Network_k__BackingField, v12);
    v14 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCampaign,
            v13);
    this->fields._Campaign_k__BackingField = v14;
    sub_21FFBF4(&this->fields._Campaign_k__BackingField, v14);
    v16 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdgroup,
            v15);
    this->fields._Adgroup_k__BackingField = v16;
    sub_21FFBF4(&this->fields._Adgroup_k__BackingField, v16);
    v18 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCreative,
            v17);
    this->fields._Creative_k__BackingField = v18;
    sub_21FFBF4(&this->fields._Creative_k__BackingField, v18);
    v20 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyClickLabel,
            v19);
    this->fields._ClickLabel_k__BackingField = v20;
    sub_21FFBF4(&this->fields._ClickLabel_k__BackingField, v20);
    v22 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCostType,
            v21);
    this->fields._CostType_k__BackingField = v22;
    sub_21FFBF4(&this->fields._CostType_k__BackingField, v22);
    v25 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v23, v24);
      v25 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v28 = AdjustSdk_AdjustUtils__TryGetValue(dicAttributionData, v25->static_fields->KeyCostAmount, v24);
    if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, v26, v27);
    InvariantCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_InvariantCulture(0);
    v30 = System_Double__Parse_76836292(v28, InvariantCulture, 0);
    v54 = (struct System_Nullable_double__o)0LL;
    *(_QWORD *)&v56.fields.value = Method_System_Nullable_double___ctor__;
    *(_QWORD *)&v56.fields.hasValue = &v54;
    System_Nullable_double____ctor(v56, v30, v31);
    this->fields._CostAmount_k__BackingField = v54;
    v34 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v32, v33);
      v34 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v35 = AdjustSdk_AdjustUtils__TryGetValue(dicAttributionData, v34->static_fields->KeyCostCurrency, v33);
    this->fields._CostCurrency_k__BackingField = v35;
    sub_21FFBF4(&this->fields._CostCurrency_k__BackingField, v35);
    v37 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyFbInstallReferrer,
            v36);
    this->fields._FbInstallReferrer_k__BackingField = v37;
    sub_21FFBF4(&this->fields._FbInstallReferrer_k__BackingField, v37);
    v39 = AdjustSdk_AdjustUtils__TryGetValue(
            dicAttributionData,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            v38);
    v41 = AdjustSdk_JSONNode__Parse(v39, v40);
    v43 = AdjustSdk_JSONNode__op_Equality(v41, 0, v42);
    if ( !v43 )
    {
      if ( !v41 )
        sub_21FFECC(v43, v44);
      v45 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v41->klass->vtable._27_get_AsObject.methodPtr)(
                                      v41,
                                      v41->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v45, 0, v46) )
      {
        v47 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v47,
          (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v47;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_21FFBF4(p_JsonResponse_k__BackingField, v47);
        v49 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v41->klass->vtable._27_get_AsObject.methodPtr)(
                v41,
                v41->klass->vtable._27_get_AsObject.method);
        v52 = *p_JsonResponse_k__BackingField;
        v53 = (AdjustSdk_JSONClass_o *)v49;
        if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v50, v51);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v53, v52, v51);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  AdjustSdk_JSONClass_o *v13; // x20
  System_Collections_Generic_Dictionary_string__object__o *v14; // x19

  if ( (byte_5930492 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_5930492 = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_21FFBF4(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_21FFECC(v9, v10);
    v13 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                     v5,
                                     v5->klass->vtable._27_get_AsObject.method);
    v14 = *p_JsonResponse_k__BackingField;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v11, v12);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v13, v14, v12);
  }
}


System_String_o *AdjustSdk_AdjustAttribution__GetJsonResponseAsString(
        AdjustSdk_AdjustAttribution_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_5930493 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_5930493 = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, method, v2);
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
  sub_21FFBF4(&this->fields._Adgroup_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_Campaign(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Campaign_k__BackingField = value;
  sub_21FFBF4(&this->fields._Campaign_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_ClickLabel(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ClickLabel_k__BackingField = value;
  sub_21FFBF4(&this->fields._ClickLabel_k__BackingField, value);
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
  sub_21FFBF4(&this->fields._CostCurrency_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_CostType(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._CostType_k__BackingField = value;
  sub_21FFBF4(&this->fields._CostType_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_Creative(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Creative_k__BackingField = value;
  sub_21FFBF4(&this->fields._Creative_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_FbInstallReferrer(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._FbInstallReferrer_k__BackingField = value;
  sub_21FFBF4(&this->fields._FbInstallReferrer_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_JsonResponse(
        AdjustSdk_AdjustAttribution_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_21FFBF4(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_Network(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Network_k__BackingField = value;
  sub_21FFBF4(&this->fields._Network_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_TrackerName(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TrackerName_k__BackingField = value;
  sub_21FFBF4(&this->fields._TrackerName_k__BackingField, value);
}


void AdjustSdk_AdjustAttribution__set_TrackerToken(
        AdjustSdk_AdjustAttribution_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._TrackerToken_k__BackingField = value;
  sub_21FFBF4(&this->fields, value);
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
  sub_21FFBF4(v6, appToken);
  LODWORD(v6->fields._UrlStrategyDomains_k__BackingField) = environment;
}


void AdjustSdk_AdjustConfig___ctor_36641860(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *appToken,
        int32_t environment,
        bool allowSuppressLogLevel,
        const MethodInfo *method)
{
  AdjustSdk_AdjustConfig_Fields *p_fields; // x20
  const MethodInfo_45AC808 *v10; // x2
  struct System_Nullable_bool__o *v11; // x0
  struct System_Nullable_bool__o v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5930494 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    byte_5930494 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._AppToken_k__BackingField = appToken;
  p_fields = &this->fields;
  sub_21FFBF4(p_fields, appToken);
  v10 = (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__;
  v11 = &v12;
  p_fields->_Environment_k__BackingField = environment;
  v12 = 0;
  System_Nullable_bool____ctor((System_Nullable_bool__o)v11, allowSuppressLogLevel, v10);
  p_fields->_AllowSuppressLogLevel_k__BackingField = v12;
}


void AdjustSdk_AdjustConfig__SetUrlStrategy(
        AdjustSdk_AdjustConfig_o *this,
        System_Collections_Generic_List_string__o *urlStrategyDomains,
        bool shouldUseSubdomains,
        bool isDataResidency,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o **p_UrlStrategyDomains_k__BackingField; // x20
  __int16 *v10; // x0
  const MethodInfo_45AC808 *v11; // x2
  __int16 *v12; // x0
  __int16 v13; // [xsp+8h] [xbp-38h] BYREF
  __int16 v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5930495 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    byte_5930495 = 1;
  }
  this->fields._UrlStrategyDomains_k__BackingField = urlStrategyDomains;
  p_UrlStrategyDomains_k__BackingField = &this->fields._UrlStrategyDomains_k__BackingField;
  sub_21FFBF4(p_UrlStrategyDomains_k__BackingField, urlStrategyDomains);
  v10 = &v14;
  v14 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v10,
    shouldUseSubdomains,
    (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
  v11 = (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__;
  v12 = &v13;
  v13 = 0;
  *((_WORD *)p_UrlStrategyDomains_k__BackingField - 7) = v14;
  System_Nullable_bool____ctor((System_Nullable_bool__o)v12, isDataResidency, v11);
  *((_WORD *)p_UrlStrategyDomains_k__BackingField - 8) = v13;
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
  sub_21FFBF4(&this->fields, value);
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
  sub_21FFBF4(&this->fields._AttributionChangedDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_DefaultTracker(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._DefaultTracker_k__BackingField = value;
  sub_21FFBF4(&this->fields._DefaultTracker_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_DeferredDeeplinkDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_string__o *value,
        const MethodInfo *method)
{
  this->fields._DeferredDeeplinkDelegate_k__BackingField = value;
  sub_21FFBF4(&this->fields._DeferredDeeplinkDelegate_k__BackingField, value);
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
  sub_21FFBF4(&this->fields._EventFailureDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_EventSuccessDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_AdjustEventSuccess__o *value,
        const MethodInfo *method)
{
  this->fields._EventSuccessDelegate_k__BackingField = value;
  sub_21FFBF4(&this->fields._EventSuccessDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_ExternalDeviceId(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ExternalDeviceId_k__BackingField = value;
  sub_21FFBF4(&this->fields._ExternalDeviceId_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_FbAppId(
        AdjustSdk_AdjustConfig_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._FbAppId_k__BackingField = value;
  sub_21FFBF4(&this->fields._FbAppId_k__BackingField, value);
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
  sub_21FFBF4(&this->fields._PreinstallFilePath_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_SessionFailureDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_AdjustSessionFailure__o *value,
        const MethodInfo *method)
{
  this->fields._SessionFailureDelegate_k__BackingField = value;
  sub_21FFBF4(&this->fields._SessionFailureDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_SessionSuccessDelegate(
        AdjustSdk_AdjustConfig_o *this,
        System_Action_AdjustSessionSuccess__o *value,
        const MethodInfo *method)
{
  this->fields._SessionSuccessDelegate_k__BackingField = value;
  sub_21FFBF4(&this->fields._SessionSuccessDelegate_k__BackingField, value);
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
  sub_21FFBF4(&this->fields._SkanUpdatedDelegate_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_StoreInfo(
        AdjustSdk_AdjustConfig_o *this,
        AdjustSdk_AdjustStoreInfo_o *value,
        const MethodInfo *method)
{
  this->fields._StoreInfo_k__BackingField = value;
  sub_21FFBF4(&this->fields._StoreInfo_k__BackingField, value);
}


void AdjustSdk_AdjustConfig__set_UrlStrategyDomains(
        AdjustSdk_AdjustConfig_o *this,
        System_Collections_Generic_List_string__o *value,
        const MethodInfo *method)
{
  this->fields._UrlStrategyDomains_k__BackingField = value;
  sub_21FFBF4(&this->fields._UrlStrategyDomains_k__BackingField, value);
}


void AdjustSdk_AdjustDeeplink___ctor(
        AdjustSdk_AdjustDeeplink_o *this,
        System_String_o *deeplink,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Deeplink_k__BackingField = deeplink;
  sub_21FFBF4(&this->fields, deeplink);
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
  sub_21FFBF4(&this->fields, value);
}


void AdjustSdk_AdjustDeeplink__set_Referrer(
        AdjustSdk_AdjustDeeplink_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Referrer_k__BackingField = value;
  sub_21FFBF4(&this->fields._Referrer_k__BackingField, value);
}


System_String_o *AdjustSdk_AdjustEnvironmentExtension__ToLowercaseString(
        int32_t adjustEnvironment,
        const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_5930496 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23928/*"production"*/);
    sub_21FFC50(&StringLiteral_25709/*"unknown"*/);
    sub_21FFC50(&StringLiteral_24345/*"sandbox"*/);
    byte_5930496 = 1;
  }
  if ( adjustEnvironment == 1 )
    v3 = &StringLiteral_23928/*"production"*/;
  else
    v3 = &StringLiteral_25709/*"unknown"*/;
  if ( !adjustEnvironment )
    v3 = (__int64 *)&StringLiteral_24345/*"sandbox"*/;
  return (System_String_o *)*v3;
}


void AdjustSdk_AdjustEvent___ctor(AdjustSdk_AdjustEvent_o *this, System_String_o *eventToken, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._EventToken_k__BackingField = eventToken;
  sub_21FFBF4(&this->fields._EventToken_k__BackingField, eventToken);
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
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_593049A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_593049A = 1;
  }
  innerCallbackParameters = this->fields.innerCallbackParameters;
  p_fields = &this->fields;
  v7 = (System_Collections_Generic_List_object__o *)innerCallbackParameters;
  if ( !innerCallbackParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerCallbackParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_21FFBF4(p_fields, v10);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFBF4(v14 + 4, key);
  }
  v15 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
  if ( !p_fields->innerCallbackParameters
    || (v16 = v15->fields._items,
        v17 = Method_System_Collections_Generic_List_string__Add__,
        ++v15->fields._version,
        !v16) )
  {
LABEL_14:
    sub_21FFECC(v7, key);
  }
  v18 = v15->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v15->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)value;
    sub_21FFBF4(v19 + 4, value);
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
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_593049B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_593049B = 1;
  }
  innerPartnerParameters = this->fields.innerPartnerParameters;
  p_innerPartnerParameters = &this->fields.innerPartnerParameters;
  v7 = (System_Collections_Generic_List_object__o *)innerPartnerParameters;
  if ( !innerPartnerParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_21FFBF4(p_innerPartnerParameters, v10);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFBF4(v14 + 4, key);
  }
  v15 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
  if ( !*p_innerPartnerParameters
    || (v16 = v15->fields._items,
        v17 = Method_System_Collections_Generic_List_string__Add__,
        ++v15->fields._version,
        !v16) )
  {
LABEL_14:
    sub_21FFECC(v7, key);
  }
  v18 = v15->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v15->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)value;
    sub_21FFBF4(v19 + 4, value);
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

  if ( (byte_5930499 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_double___ctor__);
    byte_5930499 = 1;
  }
  *(_QWORD *)&v9.fields.value = Method_System_Nullable_double___ctor__;
  *(_QWORD *)&v9.fields.hasValue = &v8;
  v8 = (struct System_Nullable_double__o)0LL;
  System_Nullable_double____ctor(v9, amount, (const MethodInfo_45AEEEC *)method);
  v7 = v8;
  this->fields._Currency_k__BackingField = currency;
  this->fields._Revenue_k__BackingField = v7;
  sub_21FFBF4(&this->fields._Currency_k__BackingField, currency);
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

  if ( (byte_5930497 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_5930497 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerCallbackParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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

  if ( (byte_5930498 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_5930498 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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
  sub_21FFBF4(&this->fields._CallbackId_k__BackingField, value);
}


void AdjustSdk_AdjustEvent__set_Currency(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Currency_k__BackingField = value;
  sub_21FFBF4(&this->fields._Currency_k__BackingField, value);
}


void AdjustSdk_AdjustEvent__set_DeduplicationId(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._DeduplicationId_k__BackingField = value;
  sub_21FFBF4(&this->fields._DeduplicationId_k__BackingField, value);
}


void AdjustSdk_AdjustEvent__set_EventToken(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._EventToken_k__BackingField = value;
  sub_21FFBF4(&this->fields._EventToken_k__BackingField, value);
}


void AdjustSdk_AdjustEvent__set_ProductId(
        AdjustSdk_AdjustEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ProductId_k__BackingField = value;
  sub_21FFBF4(&this->fields._ProductId_k__BackingField, value);
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
  sub_21FFBF4(&this->fields._TransactionId_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure___ctor(AdjustSdk_AdjustEventFailure_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustEventFailure___ctor_36714116(
        AdjustSdk_AdjustEventFailure_o *this,
        System_Collections_Generic_Dictionary_string__string__o *eventFailureDataMap,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AdjustSdk_AdjustUtils_c *v7; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v9; // x2
  struct System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  struct System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  struct System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x21
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  AdjustSdk_AdjustUtils_c *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x1
  AdjustSdk_JSONNode_o *v26; // x20
  const MethodInfo *v27; // x2
  _BOOL8 v28; // x0
  __int64 v29; // x1
  AdjustSdk_JSONNode_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_Dictionary_object__object__o *v32; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  System_Collections_Generic_Dictionary_string__object__o *v37; // x19
  AdjustSdk_JSONClass_o *v38; // x20
  bool result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593049C & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_593049C = 1;
  }
  result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( eventFailureDataMap )
  {
    v7 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v5, v6);
      v7 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(eventFailureDataMap, v7->static_fields->KeyAdid, v6);
    this->fields._Adid_k__BackingField = Value;
    sub_21FFBF4(&this->fields, Value);
    v10 = AdjustSdk_AdjustUtils__TryGetValue(
            eventFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
            v9);
    this->fields._Message_k__BackingField = v10;
    sub_21FFBF4(&this->fields._Message_k__BackingField, v10);
    v12 = AdjustSdk_AdjustUtils__TryGetValue(
            eventFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
            v11);
    this->fields._Timestamp_k__BackingField = v12;
    sub_21FFBF4(&this->fields._Timestamp_k__BackingField, v12);
    v14 = AdjustSdk_AdjustUtils__TryGetValue(
            eventFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken,
            v13);
    this->fields._EventToken_k__BackingField = v14;
    sub_21FFBF4(&this->fields._EventToken_k__BackingField, v14);
    v16 = AdjustSdk_AdjustUtils__TryGetValue(
            eventFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId,
            v15);
    this->fields._CallbackId_k__BackingField = v16;
    sub_21FFBF4(&this->fields._CallbackId_k__BackingField, v16);
    v20 = AdjustSdk_AdjustUtils__TryGetValue(
            eventFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry,
            v17);
    if ( !*(_DWORD *)(qword_594C050 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C050, v18, v19);
    if ( System_Boolean__TryParse(v20, &result, 0) )
      this->fields._WillRetry_k__BackingField = result;
    v23 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v21, v22);
      v23 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v24 = AdjustSdk_AdjustUtils__TryGetValue(eventFailureDataMap, v23->static_fields->KeyJsonResponse, v22);
    v26 = AdjustSdk_JSONNode__Parse(v24, v25);
    v28 = AdjustSdk_JSONNode__op_Equality(v26, 0, v27);
    if ( !v28 )
    {
      if ( !v26 )
        sub_21FFECC(v28, v29);
      v30 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v26->klass->vtable._27_get_AsObject.methodPtr)(
                                      v26,
                                      v26->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v30, 0, v31) )
      {
        v32 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v32,
          (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v32;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_21FFBF4(p_JsonResponse_k__BackingField, v32);
        v34 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v26->klass->vtable._27_get_AsObject.methodPtr)(
                v26,
                v26->klass->vtable._27_get_AsObject.method);
        v37 = *p_JsonResponse_k__BackingField;
        v38 = (AdjustSdk_JSONClass_o *)v34;
        if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v35, v36);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v38, v37, v36);
      }
    }
  }
}


void AdjustSdk_AdjustEventFailure___ctor_36714720(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  AdjustSdk_AdjustUtils_c *v10; // x0
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  AdjustSdk_JSONNode_o *v26; // x20
  const MethodInfo *v27; // x2
  AdjustSdk_JSONNode_o *v28; // x0
  const MethodInfo *v29; // x2
  System_Collections_Generic_Dictionary_object__object__o *v30; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  System_Collections_Generic_Dictionary_string__object__o *v35; // x19
  AdjustSdk_JSONClass_o *v36; // x20

  if ( (byte_593049D & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_593049D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v10 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v8, v9);
      v10 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v11 = AdjustSdk_AdjustUtils__GetJsonString(v6, v10->static_fields->KeyAdid, v9);
    this->fields._Adid_k__BackingField = v11;
    sub_21FFBF4(&this->fields, v11);
    v13 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage, v12);
    this->fields._Message_k__BackingField = v13;
    sub_21FFBF4(&this->fields._Message_k__BackingField, v13);
    v15 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp, v14);
    this->fields._Timestamp_k__BackingField = v15;
    sub_21FFBF4(&this->fields._Timestamp_k__BackingField, v15);
    v17 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken, v16);
    this->fields._EventToken_k__BackingField = v17;
    sub_21FFBF4(&this->fields._EventToken_k__BackingField, v17);
    v19 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId, v18);
    this->fields._CallbackId_k__BackingField = v19;
    sub_21FFBF4(&this->fields._CallbackId_k__BackingField, v19);
    v23 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry, v20);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v21, v22);
    v24 = System_Convert__ToBoolean_76466260(v23, 0);
    this->fields._WillRetry_k__BackingField = v24;
    if ( !v6 )
      goto LABEL_16;
    v26 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    v24 = AdjustSdk_JSONNode__op_Equality(v26, 0, v27);
    if ( v24 )
      return;
    if ( !v26 )
LABEL_16:
      sub_21FFECC(v24, v25);
    v28 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v26->klass->vtable._27_get_AsObject.methodPtr)(
                                    v26,
                                    v26->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v28, 0, v29) )
    {
      v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v30,
        (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v30;
      p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
      sub_21FFBF4(p_JsonResponse_k__BackingField, v30);
      v32 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v26->klass->vtable._27_get_AsObject.methodPtr)(
              v26,
              v26->klass->vtable._27_get_AsObject.method);
      v35 = *p_JsonResponse_k__BackingField;
      v36 = (AdjustSdk_JSONClass_o *)v32;
      if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v33, v34);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v36, v35, v34);
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
  __int64 v11; // x2
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  AdjustSdk_JSONClass_o *v14; // x20
  System_Collections_Generic_Dictionary_string__object__o *v15; // x19

  if ( (byte_593049E & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_593049E = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_21FFBF4(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_21FFECC(v9, v10, v11);
    v14 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                     v5,
                                     v5->klass->vtable._27_get_AsObject.method);
    v15 = *p_JsonResponse_k__BackingField;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v12, v13);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v14, v15, v13);
  }
}


System_String_o *AdjustSdk_AdjustEventFailure__GetJsonResponseAsString(
        AdjustSdk_AdjustEventFailure_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_593049F & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_593049F = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, method, v2);
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
  sub_21FFBF4(&this->fields, value);
}


void AdjustSdk_AdjustEventFailure__set_CallbackId(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._CallbackId_k__BackingField = value;
  sub_21FFBF4(&this->fields._CallbackId_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure__set_EventToken(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._EventToken_k__BackingField = value;
  sub_21FFBF4(&this->fields._EventToken_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure__set_JsonResponse(
        AdjustSdk_AdjustEventFailure_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_21FFBF4(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure__set_Message(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Message_k__BackingField = value;
  sub_21FFBF4(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustEventFailure__set_Timestamp(
        AdjustSdk_AdjustEventFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Timestamp_k__BackingField = value;
  sub_21FFBF4(&this->fields._Timestamp_k__BackingField, value);
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


void AdjustSdk_AdjustEventSuccess___ctor_36715532(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_Collections_Generic_Dictionary_string__string__o *eventSuccessDataMap,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AdjustSdk_AdjustUtils_c *v7; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v9; // x2
  struct System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  struct System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  struct System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  const MethodInfo *v19; // x1
  AdjustSdk_JSONNode_o *v20; // x20
  const MethodInfo *v21; // x2
  _BOOL8 v22; // x0
  __int64 v23; // x1
  AdjustSdk_JSONNode_o *v24; // x0
  const MethodInfo *v25; // x2
  System_Collections_Generic_Dictionary_object__object__o *v26; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_Collections_Generic_Dictionary_string__object__o *v31; // x19
  AdjustSdk_JSONClass_o *v32; // x20

  if ( (byte_59304A0 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59304A0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( eventSuccessDataMap )
  {
    v7 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v5, v6);
      v7 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(eventSuccessDataMap, v7->static_fields->KeyAdid, v6);
    this->fields._Adid_k__BackingField = Value;
    sub_21FFBF4(&this->fields, Value);
    v10 = AdjustSdk_AdjustUtils__TryGetValue(
            eventSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
            v9);
    this->fields._Message_k__BackingField = v10;
    sub_21FFBF4(&this->fields._Message_k__BackingField, v10);
    v12 = AdjustSdk_AdjustUtils__TryGetValue(
            eventSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
            v11);
    this->fields._Timestamp_k__BackingField = v12;
    sub_21FFBF4(&this->fields._Timestamp_k__BackingField, v12);
    v14 = AdjustSdk_AdjustUtils__TryGetValue(
            eventSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken,
            v13);
    this->fields._EventToken_k__BackingField = v14;
    sub_21FFBF4(&this->fields._EventToken_k__BackingField, v14);
    v16 = AdjustSdk_AdjustUtils__TryGetValue(
            eventSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId,
            v15);
    this->fields._CallbackId_k__BackingField = v16;
    sub_21FFBF4(&this->fields._CallbackId_k__BackingField, v16);
    v18 = AdjustSdk_AdjustUtils__TryGetValue(
            eventSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            v17);
    v20 = AdjustSdk_JSONNode__Parse(v18, v19);
    v22 = AdjustSdk_JSONNode__op_Equality(v20, 0, v21);
    if ( !v22 )
    {
      if ( !v20 )
        sub_21FFECC(v22, v23);
      v24 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v20->klass->vtable._27_get_AsObject.methodPtr)(
                                      v20,
                                      v20->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v24, 0, v25) )
      {
        v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v26,
          (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v26;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_21FFBF4(p_JsonResponse_k__BackingField, v26);
        v28 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v20->klass->vtable._27_get_AsObject.methodPtr)(
                v20,
                v20->klass->vtable._27_get_AsObject.method);
        v31 = *p_JsonResponse_k__BackingField;
        v32 = (AdjustSdk_JSONClass_o *)v28;
        if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v29, v30);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v32, v31, v30);
      }
    }
  }
}


void AdjustSdk_AdjustEventSuccess___ctor_36716048(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  AdjustSdk_AdjustUtils_c *v10; // x0
  struct System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  struct System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  struct System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  struct System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  struct System_String_o *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  AdjustSdk_JSONNode_o *v22; // x20
  const MethodInfo *v23; // x2
  AdjustSdk_JSONNode_o *v24; // x0
  const MethodInfo *v25; // x2
  System_Collections_Generic_Dictionary_object__object__o *v26; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_Collections_Generic_Dictionary_string__object__o *v31; // x19
  AdjustSdk_JSONClass_o *v32; // x20

  if ( (byte_59304A1 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59304A1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v10 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v8, v9);
      v10 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v11 = AdjustSdk_AdjustUtils__GetJsonString(v6, v10->static_fields->KeyAdid, v9);
    this->fields._Adid_k__BackingField = v11;
    sub_21FFBF4(&this->fields, v11);
    v13 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage, v12);
    this->fields._Message_k__BackingField = v13;
    sub_21FFBF4(&this->fields._Message_k__BackingField, v13);
    v15 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp, v14);
    this->fields._Timestamp_k__BackingField = v15;
    sub_21FFBF4(&this->fields._Timestamp_k__BackingField, v15);
    v17 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyEventToken, v16);
    this->fields._EventToken_k__BackingField = v17;
    sub_21FFBF4(&this->fields._EventToken_k__BackingField, v17);
    v19 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyCallbackId, v18);
    this->fields._CallbackId_k__BackingField = v19;
    v20 = sub_21FFBF4(&this->fields._CallbackId_k__BackingField, v19);
    if ( !v6 )
      goto LABEL_14;
    v22 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    v20 = AdjustSdk_JSONNode__op_Equality(v22, 0, v23);
    if ( (v20 & 1) != 0 )
      return;
    if ( !v22 )
LABEL_14:
      sub_21FFECC(v20, v21);
    v24 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v22->klass->vtable._27_get_AsObject.methodPtr)(
                                    v22,
                                    v22->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v24, 0, v25) )
    {
      v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v26,
        (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v26;
      p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
      sub_21FFBF4(p_JsonResponse_k__BackingField, v26);
      v28 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v22->klass->vtable._27_get_AsObject.methodPtr)(
              v22,
              v22->klass->vtable._27_get_AsObject.method);
      v31 = *p_JsonResponse_k__BackingField;
      v32 = (AdjustSdk_JSONClass_o *)v28;
      if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v29, v30);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v32, v31, v30);
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
  __int64 v11; // x2
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  AdjustSdk_JSONClass_o *v14; // x20
  System_Collections_Generic_Dictionary_string__object__o *v15; // x19

  if ( (byte_59304A2 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59304A2 = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_21FFBF4(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_21FFECC(v9, v10, v11);
    v14 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                     v5,
                                     v5->klass->vtable._27_get_AsObject.method);
    v15 = *p_JsonResponse_k__BackingField;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v12, v13);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v14, v15, v13);
  }
}


System_String_o *AdjustSdk_AdjustEventSuccess__GetJsonResponseAsString(
        AdjustSdk_AdjustEventSuccess_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_59304A3 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_59304A3 = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, method, v2);
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
  sub_21FFBF4(&this->fields, value);
}


void AdjustSdk_AdjustEventSuccess__set_CallbackId(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._CallbackId_k__BackingField = value;
  sub_21FFBF4(&this->fields._CallbackId_k__BackingField, value);
}


void AdjustSdk_AdjustEventSuccess__set_EventToken(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._EventToken_k__BackingField = value;
  sub_21FFBF4(&this->fields._EventToken_k__BackingField, value);
}


void AdjustSdk_AdjustEventSuccess__set_JsonResponse(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_21FFBF4(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustEventSuccess__set_Message(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Message_k__BackingField = value;
  sub_21FFBF4(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustEventSuccess__set_Timestamp(
        AdjustSdk_AdjustEventSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Timestamp_k__BackingField = value;
  sub_21FFBF4(&this->fields._Timestamp_k__BackingField, value);
}


System_String_o *AdjustSdk_AdjustLogLevelExtension__ToLowercaseString(int32_t AdjustLogLevel, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_59304A4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19304/*"debug"*/);
    sub_21FFC50(&StringLiteral_25709/*"unknown"*/);
    sub_21FFC50(&StringLiteral_25961/*"verbose"*/);
    sub_21FFC50(&StringLiteral_26104/*"warn"*/);
    sub_21FFC50(&StringLiteral_25074/*"suppress"*/);
    sub_21FFC50(&StringLiteral_17587/*"assert"*/);
    sub_21FFC50(&StringLiteral_21749/*"info"*/);
    sub_21FFC50(&StringLiteral_19915/*"error"*/);
    byte_59304A4 = 1;
  }
  if ( (unsigned int)(AdjustLogLevel - 1) > 6 )
    v3 = (System_String_o **)&StringLiteral_25709/*"unknown"*/;
  else
    v3 = (System_String_o **)*(&off_5296200 + (unsigned int)(AdjustLogLevel - 1));
  return *v3;
}


System_String_o *AdjustSdk_AdjustLogLevelExtension__ToUppercaseString(int32_t AdjustLogLevel, const MethodInfo *method)
{
  System_String_o **v3; // x8

  if ( (byte_59304A5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_15389/*"UNKNOWN"*/);
    sub_21FFC50(&StringLiteral_5142/*"DEBUG"*/);
    sub_21FFC50(&StringLiteral_15818/*"VERBOSE"*/);
    sub_21FFC50(&StringLiteral_2137/*"ASSERT"*/);
    sub_21FFC50(&StringLiteral_5686/*"ERROR"*/);
    sub_21FFC50(&StringLiteral_16046/*"WARN"*/);
    sub_21FFC50(&StringLiteral_13072/*"SUPPRESS"*/);
    sub_21FFC50(&StringLiteral_7753/*"INFO"*/);
    byte_59304A5 = 1;
  }
  if ( (unsigned int)(AdjustLogLevel - 1) > 6 )
    v3 = (System_String_o **)&StringLiteral_15389/*"UNKNOWN"*/;
  else
    v3 = (System_String_o **)*(&off_52961C8 + (unsigned int)(AdjustLogLevel - 1));
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
  sub_21FFBF4(&this->fields, productId);
  this->fields._PurchaseToken_k__BackingField = purchaseToken;
  sub_21FFBF4(&this->fields._PurchaseToken_k__BackingField, purchaseToken);
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
  sub_21FFBF4(&this->fields, value);
}


void AdjustSdk_AdjustPlayStorePurchase__set_PurchaseToken(
        AdjustSdk_AdjustPlayStorePurchase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._PurchaseToken_k__BackingField = value;
  sub_21FFBF4(&this->fields._PurchaseToken_k__BackingField, value);
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
  sub_21FFBF4(&this->fields._Price_k__BackingField, price);
  this->fields._Currency_k__BackingField = currency;
  sub_21FFBF4(&this->fields._Currency_k__BackingField, currency);
  this->fields._ProductId_k__BackingField = productId;
  sub_21FFBF4(&this->fields._ProductId_k__BackingField, productId);
  this->fields._OrderId_k__BackingField = orderId;
  sub_21FFBF4(&this->fields._OrderId_k__BackingField, orderId);
  this->fields._Signature_k__BackingField = signature;
  sub_21FFBF4(&this->fields._Signature_k__BackingField, signature);
  this->fields._PurchaseToken_k__BackingField = purchaseToken;
  sub_21FFBF4(&this->fields._PurchaseToken_k__BackingField, purchaseToken);
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
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_59304A8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_59304A8 = 1;
  }
  innerCallbackParameters = this->fields.innerCallbackParameters;
  p_fields = &this->fields;
  v7 = (System_Collections_Generic_List_object__o *)innerCallbackParameters;
  if ( !innerCallbackParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerCallbackParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_21FFBF4(p_fields, v10);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFBF4(v14 + 4, key);
  }
  v15 = (System_Collections_Generic_List_object__o *)p_fields->innerCallbackParameters;
  if ( !p_fields->innerCallbackParameters
    || (v16 = v15->fields._items,
        v17 = Method_System_Collections_Generic_List_string__Add__,
        ++v15->fields._version,
        !v16) )
  {
LABEL_14:
    sub_21FFECC(v7, key);
  }
  v18 = v15->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v15->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)value;
    sub_21FFBF4(v19 + 4, value);
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
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_59304A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_59304A9 = 1;
  }
  innerPartnerParameters = this->fields.innerPartnerParameters;
  p_innerPartnerParameters = &this->fields.innerPartnerParameters;
  v7 = (System_Collections_Generic_List_object__o *)innerPartnerParameters;
  if ( !innerPartnerParameters )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerParameters = (struct System_Collections_Generic_List_string__o *)v10;
    sub_21FFBF4(p_innerPartnerParameters, v10);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v14[4] = (Il2CppClass *)key;
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFBF4(v14 + 4, key);
  }
  v15 = (System_Collections_Generic_List_object__o *)*p_innerPartnerParameters;
  if ( !*p_innerPartnerParameters
    || (v16 = v15->fields._items,
        v17 = Method_System_Collections_Generic_List_string__Add__,
        ++v15->fields._version,
        !v16) )
  {
LABEL_14:
    sub_21FFECC(v7, key);
  }
  v18 = v15->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v15->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)value;
    sub_21FFBF4(v19 + 4, value);
  }
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustPlayStoreSubscription__get_CallbackParameters(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_59304A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_59304A6 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerCallbackParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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

  if ( (byte_59304A7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_59304A7 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerParameters;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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
  sub_21FFBF4(&this->fields._Currency_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_OrderId(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._OrderId_k__BackingField = value;
  sub_21FFBF4(&this->fields._OrderId_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_Price(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Price_k__BackingField = value;
  sub_21FFBF4(&this->fields._Price_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_ProductId(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ProductId_k__BackingField = value;
  sub_21FFBF4(&this->fields._ProductId_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_PurchaseTime(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._PurchaseTime_k__BackingField = value;
  sub_21FFBF4(&this->fields._PurchaseTime_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_PurchaseToken(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._PurchaseToken_k__BackingField = value;
  sub_21FFBF4(&this->fields._PurchaseToken_k__BackingField, value);
}


void AdjustSdk_AdjustPlayStoreSubscription__set_Signature(
        AdjustSdk_AdjustPlayStoreSubscription_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Signature_k__BackingField = value;
  sub_21FFBF4(&this->fields._Signature_k__BackingField, value);
}


void AdjustSdk_AdjustPurchaseVerificationResult___ctor(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustPurchaseVerificationResult___ctor_36718028(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  AdjustSdk_AdjustUtils_c *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // w0
  AdjustSdk_AdjustUtils_c *v13; // x8
  const MethodInfo *v14; // x2
  struct System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  struct System_String_o *v17; // x0

  if ( (byte_59304AA & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_59304AA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v10 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v8, v9);
      v10 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v11 = AdjustSdk_AdjustUtils__GetJsonString(v6, v10->static_fields->KeyCode, v9);
    v12 = System_Int32__Parse(v11, 0);
    v13 = AdjustSdk_AdjustUtils_TypeInfo;
    this->fields._Code_k__BackingField = v12;
    v15 = AdjustSdk_AdjustUtils__GetJsonString(v6, v13->static_fields->KeyMessage, v14);
    this->fields._Message_k__BackingField = v15;
    sub_21FFBF4(&this->fields._Message_k__BackingField, v15);
    v17 = AdjustSdk_AdjustUtils__GetJsonString(
            v6,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyVerificationStatus,
            v16);
    this->fields._VerificationStatus_k__BackingField = v17;
    sub_21FFBF4(&this->fields._VerificationStatus_k__BackingField, v17);
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
  sub_21FFBF4(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustPurchaseVerificationResult__set_VerificationStatus(
        AdjustSdk_AdjustPurchaseVerificationResult_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._VerificationStatus_k__BackingField = value;
  sub_21FFBF4(&this->fields._VerificationStatus_k__BackingField, value);
}


void AdjustSdk_AdjustSessionFailure___ctor(AdjustSdk_AdjustSessionFailure_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_AdjustSessionFailure___ctor_36718340(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_Collections_Generic_Dictionary_string__string__o *sessionFailureDataMap,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AdjustSdk_AdjustUtils_c *v7; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v9; // x2
  struct System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x21
  __int64 v17; // x1
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
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  System_Collections_Generic_Dictionary_string__object__o *v33; // x19
  AdjustSdk_JSONClass_o *v34; // x20
  bool result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59304AB & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59304AB = 1;
  }
  result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( sessionFailureDataMap )
  {
    v7 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v5, v6);
      v7 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(sessionFailureDataMap, v7->static_fields->KeyAdid, v6);
    this->fields._Adid_k__BackingField = Value;
    sub_21FFBF4(&this->fields, Value);
    v10 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
            v9);
    this->fields._Message_k__BackingField = v10;
    sub_21FFBF4(&this->fields._Message_k__BackingField, v10);
    v12 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
            v11);
    this->fields._Timestamp_k__BackingField = v12;
    sub_21FFBF4(&this->fields._Timestamp_k__BackingField, v12);
    v16 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionFailureDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry,
            v13);
    if ( !*(_DWORD *)(qword_594C050 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C050, v14, v15);
    if ( System_Boolean__TryParse(v16, &result, 0) )
      this->fields._WillRetry_k__BackingField = result;
    v19 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v17, v18);
      v19 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v20 = AdjustSdk_AdjustUtils__TryGetValue(sessionFailureDataMap, v19->static_fields->KeyJsonResponse, v18);
    v22 = AdjustSdk_JSONNode__Parse(v20, v21);
    v24 = AdjustSdk_JSONNode__op_Equality(v22, 0, v23);
    if ( !v24 )
    {
      if ( !v22 )
        sub_21FFECC(v24, v25);
      v26 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v22->klass->vtable._27_get_AsObject.methodPtr)(
                                      v22,
                                      v22->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v26, 0, v27) )
      {
        v28 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v28,
          (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v28;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_21FFBF4(p_JsonResponse_k__BackingField, v28);
        v30 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v22->klass->vtable._27_get_AsObject.methodPtr)(
                v22,
                v22->klass->vtable._27_get_AsObject.method);
        v33 = *p_JsonResponse_k__BackingField;
        v34 = (AdjustSdk_JSONClass_o *)v30;
        if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v31, v32);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v34, v33, v32);
      }
    }
  }
}


void AdjustSdk_AdjustSessionFailure___ctor_36718872(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  AdjustSdk_AdjustUtils_c *v10; // x0
  struct System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  struct System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  struct System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x21
  _BOOL8 v20; // x0
  __int64 v21; // x1
  AdjustSdk_JSONNode_o *v22; // x20
  const MethodInfo *v23; // x2
  AdjustSdk_JSONNode_o *v24; // x0
  const MethodInfo *v25; // x2
  System_Collections_Generic_Dictionary_object__object__o *v26; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_Collections_Generic_Dictionary_string__object__o *v31; // x19
  AdjustSdk_JSONClass_o *v32; // x20

  if ( (byte_59304AC & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59304AC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v10 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v8, v9);
      v10 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v11 = AdjustSdk_AdjustUtils__GetJsonString(v6, v10->static_fields->KeyAdid, v9);
    this->fields._Adid_k__BackingField = v11;
    sub_21FFBF4(&this->fields, v11);
    v13 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage, v12);
    this->fields._Message_k__BackingField = v13;
    sub_21FFBF4(&this->fields._Message_k__BackingField, v13);
    v15 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp, v14);
    this->fields._Timestamp_k__BackingField = v15;
    sub_21FFBF4(&this->fields._Timestamp_k__BackingField, v15);
    v19 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyWillRetry, v16);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v17, v18);
    v20 = System_Convert__ToBoolean_76466260(v19, 0);
    this->fields._WillRetry_k__BackingField = v20;
    if ( !v6 )
      goto LABEL_16;
    v22 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    v20 = AdjustSdk_JSONNode__op_Equality(v22, 0, v23);
    if ( v20 )
      return;
    if ( !v22 )
LABEL_16:
      sub_21FFECC(v20, v21);
    v24 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v22->klass->vtable._27_get_AsObject.methodPtr)(
                                    v22,
                                    v22->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v24, 0, v25) )
    {
      v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v26,
        (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v26;
      p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
      sub_21FFBF4(p_JsonResponse_k__BackingField, v26);
      v28 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v22->klass->vtable._27_get_AsObject.methodPtr)(
              v22,
              v22->klass->vtable._27_get_AsObject.method);
      v31 = *p_JsonResponse_k__BackingField;
      v32 = (AdjustSdk_JSONClass_o *)v28;
      if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v29, v30);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v32, v31, v30);
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
  __int64 v11; // x2
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  AdjustSdk_JSONClass_o *v14; // x20
  System_Collections_Generic_Dictionary_string__object__o *v15; // x19

  if ( (byte_59304AD & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59304AD = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_21FFBF4(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_21FFECC(v9, v10, v11);
    v14 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                     v5,
                                     v5->klass->vtable._27_get_AsObject.method);
    v15 = *p_JsonResponse_k__BackingField;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v12, v13);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v14, v15, v13);
  }
}


System_String_o *AdjustSdk_AdjustSessionFailure__GetJsonResponseAsString(
        AdjustSdk_AdjustSessionFailure_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_59304AE & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_59304AE = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, method, v2);
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
  sub_21FFBF4(&this->fields, value);
}


void AdjustSdk_AdjustSessionFailure__set_JsonResponse(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_21FFBF4(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustSessionFailure__set_Message(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Message_k__BackingField = value;
  sub_21FFBF4(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustSessionFailure__set_Timestamp(
        AdjustSdk_AdjustSessionFailure_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Timestamp_k__BackingField = value;
  sub_21FFBF4(&this->fields._Timestamp_k__BackingField, value);
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


void AdjustSdk_AdjustSessionSuccess___ctor_36719580(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_Collections_Generic_Dictionary_string__string__o *sessionSuccessDataMap,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AdjustSdk_AdjustUtils_c *v7; // x0
  struct System_String_o *Value; // x0
  const MethodInfo *v9; // x2
  struct System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  System_String_o *v14; // x0
  const MethodInfo *v15; // x1
  AdjustSdk_JSONNode_o *v16; // x20
  const MethodInfo *v17; // x2
  _BOOL8 v18; // x0
  __int64 v19; // x1
  AdjustSdk_JSONNode_o *v20; // x0
  const MethodInfo *v21; // x2
  System_Collections_Generic_Dictionary_object__object__o *v22; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_Dictionary_string__object__o *v27; // x19
  AdjustSdk_JSONClass_o *v28; // x20

  if ( (byte_59304AF & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59304AF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( sessionSuccessDataMap )
  {
    v7 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v5, v6);
      v7 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    Value = AdjustSdk_AdjustUtils__TryGetValue(sessionSuccessDataMap, v7->static_fields->KeyAdid, v6);
    this->fields._Adid_k__BackingField = Value;
    sub_21FFBF4(&this->fields, Value);
    v10 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage,
            v9);
    this->fields._Message_k__BackingField = v10;
    sub_21FFBF4(&this->fields._Message_k__BackingField, v10);
    v12 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp,
            v11);
    this->fields._Timestamp_k__BackingField = v12;
    sub_21FFBF4(&this->fields._Timestamp_k__BackingField, v12);
    v14 = AdjustSdk_AdjustUtils__TryGetValue(
            sessionSuccessDataMap,
            AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
            v13);
    v16 = AdjustSdk_JSONNode__Parse(v14, v15);
    v18 = AdjustSdk_JSONNode__op_Equality(v16, 0, v17);
    if ( !v18 )
    {
      if ( !v16 )
        sub_21FFECC(v18, v19);
      v20 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v16->klass->vtable._27_get_AsObject.methodPtr)(
                                      v16,
                                      v16->klass->vtable._27_get_AsObject.method);
      if ( !AdjustSdk_JSONNode__op_Equality(v20, 0, v21) )
      {
        v22 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
        System_Collections_Generic_Dictionary_object__object____ctor(
          v22,
          (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
        this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v22;
        p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
        sub_21FFBF4(p_JsonResponse_k__BackingField, v22);
        v24 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v16->klass->vtable._27_get_AsObject.methodPtr)(
                v16,
                v16->klass->vtable._27_get_AsObject.method);
        v27 = *p_JsonResponse_k__BackingField;
        v28 = (AdjustSdk_JSONClass_o *)v24;
        if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v25, v26);
        AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v28, v27, v26);
      }
    }
  }
}


void AdjustSdk_AdjustSessionSuccess___ctor_36720024(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_String_o *jsonString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AdjustSdk_JSONNode_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  AdjustSdk_AdjustUtils_c *v10; // x0
  struct System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  struct System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  struct System_String_o *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  AdjustSdk_JSONNode_o *v18; // x20
  const MethodInfo *v19; // x2
  AdjustSdk_JSONNode_o *v20; // x0
  const MethodInfo *v21; // x2
  System_Collections_Generic_Dictionary_object__object__o *v22; // x21
  struct System_Collections_Generic_Dictionary_string__object__o **p_JsonResponse_k__BackingField; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_Dictionary_string__object__o *v27; // x19
  AdjustSdk_JSONClass_o *v28; // x20

  if ( (byte_59304B0 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59304B0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = AdjustSdk_JSONNode__Parse(jsonString, v5);
  if ( !AdjustSdk_JSONNode__op_Equality(v6, 0, v7) )
  {
    v10 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v8, v9);
      v10 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v11 = AdjustSdk_AdjustUtils__GetJsonString(v6, v10->static_fields->KeyAdid, v9);
    this->fields._Adid_k__BackingField = v11;
    sub_21FFBF4(&this->fields, v11);
    v13 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyMessage, v12);
    this->fields._Message_k__BackingField = v13;
    sub_21FFBF4(&this->fields._Message_k__BackingField, v13);
    v15 = AdjustSdk_AdjustUtils__GetJsonString(v6, AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTimestamp, v14);
    this->fields._Timestamp_k__BackingField = v15;
    v16 = sub_21FFBF4(&this->fields._Timestamp_k__BackingField, v15);
    if ( !v6 )
      goto LABEL_14;
    v18 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._7_get_Item.methodPtr)(
                                    v6,
                                    AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyJsonResponse,
                                    v6->klass->vtable._7_get_Item.method);
    v16 = AdjustSdk_JSONNode__op_Equality(v18, 0, v19);
    if ( (v16 & 1) != 0 )
      return;
    if ( !v18 )
LABEL_14:
      sub_21FFECC(v16, v17);
    v20 = (AdjustSdk_JSONNode_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v18->klass->vtable._27_get_AsObject.methodPtr)(
                                    v18,
                                    v18->klass->vtable._27_get_AsObject.method);
    if ( !AdjustSdk_JSONNode__op_Equality(v20, 0, v21) )
    {
      v22 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v22,
        (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v22;
      p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
      sub_21FFBF4(p_JsonResponse_k__BackingField, v22);
      v24 = ((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v18->klass->vtable._27_get_AsObject.methodPtr)(
              v18,
              v18->klass->vtable._27_get_AsObject.method);
      v27 = *p_JsonResponse_k__BackingField;
      v28 = (AdjustSdk_JSONClass_o *)v24;
      if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v25, v26);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v28, v27, v26);
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
  __int64 v11; // x2
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  AdjustSdk_JSONClass_o *v14; // x20
  System_Collections_Generic_Dictionary_string__object__o *v15; // x19

  if ( (byte_59304B1 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_59304B1 = 1;
  }
  v5 = AdjustSdk_JSONNode__Parse(jsonResponseString, (const MethodInfo *)jsonResponseString);
  if ( !AdjustSdk_JSONNode__op_Equality(v5, 0, v6) )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    this->fields._JsonResponse_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v7;
    p_JsonResponse_k__BackingField = &this->fields._JsonResponse_k__BackingField;
    v9 = sub_21FFBF4(p_JsonResponse_k__BackingField, v7);
    if ( !v5 )
      sub_21FFECC(v9, v10, v11);
    v14 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                     v5,
                                     v5->klass->vtable._27_get_AsObject.method);
    v15 = *p_JsonResponse_k__BackingField;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v12, v13);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(v14, v15, v13);
  }
}


System_String_o *AdjustSdk_AdjustSessionSuccess__GetJsonResponseAsString(
        AdjustSdk_AdjustSessionSuccess_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *JsonResponse_k__BackingField; // x19

  if ( (byte_59304B2 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    byte_59304B2 = 1;
  }
  JsonResponse_k__BackingField = this->fields._JsonResponse_k__BackingField;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, method, v2);
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
  sub_21FFBF4(&this->fields, value);
}


void AdjustSdk_AdjustSessionSuccess__set_JsonResponse(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  this->fields._JsonResponse_k__BackingField = value;
  sub_21FFBF4(&this->fields._JsonResponse_k__BackingField, value);
}


void AdjustSdk_AdjustSessionSuccess__set_Message(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Message_k__BackingField = value;
  sub_21FFBF4(&this->fields._Message_k__BackingField, value);
}


void AdjustSdk_AdjustSessionSuccess__set_Timestamp(
        AdjustSdk_AdjustSessionSuccess_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Timestamp_k__BackingField = value;
  sub_21FFBF4(&this->fields._Timestamp_k__BackingField, value);
}


void AdjustSdk_AdjustStoreInfo___ctor(
        AdjustSdk_AdjustStoreInfo_o *this,
        System_String_o *storeName,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._StoreName_k__BackingField = storeName;
  sub_21FFBF4(&this->fields, storeName);
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
  sub_21FFBF4(&this->fields._StoreAppId_k__BackingField, value);
}


void AdjustSdk_AdjustStoreInfo__set_StoreName(
        AdjustSdk_AdjustStoreInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._StoreName_k__BackingField = value;
  sub_21FFBF4(&this->fields, value);
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
  System_Collections_Generic_List_object__o *v21; // x8
  struct System_Object_array *v22; // x9
  _QWORD *v23; // x10
  __int64 v24; // x11
  Il2CppClass **v25; // x0

  if ( (byte_59304B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_59304B5 = 1;
  }
  innerGranularOptions = this->fields.innerGranularOptions;
  p_fields = &this->fields;
  v9 = (System_Collections_Generic_List_object__o *)innerGranularOptions;
  if ( !innerGranularOptions )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    p_fields->innerGranularOptions = (struct System_Collections_Generic_List_string__o *)v12;
    sub_21FFBF4(p_fields, v12);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v16[4] = (Il2CppClass *)partnerName;
    sub_21FFBF4(v16 + 4, partnerName);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &v17->obj.klass + v19;
    v9->fields._size = v19 + 1;
    v20[4] = (Il2CppClass *)key;
    v9 = (System_Collections_Generic_List_object__o *)sub_21FFBF4(v20 + 4, key);
  }
  v21 = (System_Collections_Generic_List_object__o *)p_fields->innerGranularOptions;
  if ( !p_fields->innerGranularOptions
    || (v22 = v21->fields._items,
        v23 = Method_System_Collections_Generic_List_string__Add__,
        ++v21->fields._version,
        !v22) )
  {
LABEL_19:
    sub_21FFECC(v9, partnerName);
  }
  v24 = v21->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v21->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)value;
    sub_21FFBF4(v25 + 4, value);
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x19
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  System_Collections_Generic_List_object__o *v26; // x1
  Il2CppClass **v27; // x0
  bool v28; // [xsp+Ch] [xbp-24h] BYREF

  v28 = value;
  if ( (byte_59304B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_59304B6 = 1;
  }
  innerPartnerSharingSettings = this->fields.innerPartnerSharingSettings;
  p_innerPartnerSharingSettings = &this->fields.innerPartnerSharingSettings;
  v8 = (System_Collections_Generic_List_object__o *)innerPartnerSharingSettings;
  if ( !innerPartnerSharingSettings )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    *p_innerPartnerSharingSettings = (struct System_Collections_Generic_List_string__o *)v11;
    sub_21FFBF4(p_innerPartnerSharingSettings, v11);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v15[4] = (Il2CppClass *)partnerName;
    sub_21FFBF4(v15 + 4, partnerName);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v8->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)key;
    sub_21FFBF4(v19 + 4, key);
  }
  v22 = (System_Collections_Generic_List_object__o *)*p_innerPartnerSharingSettings;
  if ( !*(_DWORD *)(qword_594C050 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C050, v20, v21);
  v8 = (System_Collections_Generic_List_object__o *)System_Boolean__ToString((bool)&v28, 0);
  if ( !v22
    || (v23 = v22->fields._items,
        v24 = Method_System_Collections_Generic_List_string__Add__,
        ++v22->fields._version,
        !v23) )
  {
LABEL_21:
    sub_21FFECC(v8, partnerName);
  }
  v25 = v22->fields._size;
  v26 = v8;
  if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v8,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v23->obj.klass + v25;
    v22->fields._size = v25 + 1;
    v27[4] = (Il2CppClass *)v26;
    sub_21FFBF4(v27 + 4, v26);
  }
}


System_Collections_ObjectModel_ReadOnlyCollection_string__o *AdjustSdk_AdjustThirdPartySharing__get_GranularOptions(
        AdjustSdk_AdjustThirdPartySharing_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_string__o *result; // x0

  if ( (byte_59304B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_59304B3 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerGranularOptions;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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

  if ( (byte_59304B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AsReadOnly__);
    byte_59304B4 = 1;
  }
  result = (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)this->fields.innerPartnerSharingSettings;
  if ( result )
    return (System_Collections_ObjectModel_ReadOnlyCollection_string__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                            (System_Collections_Generic_List_object__o *)result,
                                                                            (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_string__AsReadOnly__);
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
  __int64 v2; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *static_fields; // x0
  __int64 v4; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v5; // x0
  __int64 v6; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v7; // x0
  __int64 v8; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v9; // x0
  __int64 v10; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v11; // x0
  __int64 v12; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v13; // x0
  __int64 v14; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v15; // x0
  __int64 v16; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v17; // x0
  struct AdjustSdk_AdjustUtils_StaticFields *v18; // x0
  __int64 v19; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v20; // x0
  __int64 v21; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v22; // x0
  __int64 v23; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v24; // x0
  __int64 v25; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v26; // x0
  __int64 v27; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v28; // x0
  __int64 v29; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v30; // x0
  __int64 v31; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v32; // x0
  __int64 v33; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v34; // x0
  __int64 v35; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v36; // x0
  __int64 v37; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v38; // x0
  __int64 v39; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v40; // x0
  __int64 v41; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v42; // x0
  __int64 v43; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v44; // x0
  __int64 v45; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v46; // x0
  __int64 v47; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v48; // x0
  __int64 v49; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v50; // x0
  __int64 v51; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v52; // x0
  __int64 v53; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v54; // x0
  __int64 v55; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v56; // x0
  __int64 v57; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v58; // x0
  __int64 v59; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v60; // x0
  __int64 v61; // x1
  struct AdjustSdk_AdjustUtils_StaticFields *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x1
  struct System_String_o **p_KeyTestOptionsUseTestConnectionOptions; // x0
  __int64 v66; // x1
  struct System_String_o **p_KeyTestOptionsTimerIntervalInMilliseconds; // x0
  __int64 v68; // x1
  struct System_String_o **p_KeyTestOptionsTimerStartInMilliseconds; // x0
  __int64 v70; // x1
  struct System_String_o **p_KeyTestOptionsSessionIntervalInMilliseconds; // x0
  __int64 v72; // x1
  struct System_String_o **p_KeyTestOptionsSubsessionIntervalInMilliseconds; // x0
  __int64 v74; // x1
  struct System_String_o **p_KeyTestOptionsTeardown; // x0
  __int64 v76; // x1
  struct System_String_o **p_KeyTestOptionsNoBackoffWait; // x0
  __int64 v78; // x1
  struct System_String_o **p_KeyTestOptionsAdServicesFrameworkEnabled; // x0
  __int64 v80; // x1
  struct System_String_o **p_KeyTestOptionsAttStatus; // x0
  __int64 v82; // x1
  struct System_String_o **p_KeyTestOptionsIdfa; // x0
  __int64 v84; // x1
  struct System_String_o **p_KeyTestOptionsIgnoreSystemLifecycleBootstrap; // x0

  if ( (byte_59304C6 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&StringLiteral_22367/*"lockWindow"*/);
    sub_21FFC50(&StringLiteral_20270/*"fbInstallReferrer"*/);
    sub_21FFC50(&StringLiteral_17305/*"adServicesFrameworkEnabled"*/);
    sub_21FFC50(&StringLiteral_18766/*"clickLabel"*/);
    sub_21FFC50(&StringLiteral_25762/*"urlOverwrite"*/);
    sub_21FFC50(&StringLiteral_23268/*"network"*/);
    sub_21FFC50(&StringLiteral_18458/*"campaign"*/);
    sub_21FFC50(&StringLiteral_17346/*"adgroup"*/);
    sub_21FFC50(&StringLiteral_19111/*"creative"*/);
    sub_21FFC50(&StringLiteral_21202/*"idfa"*/);
    sub_21FFC50(&StringLiteral_19060/*"costType"*/);
    sub_21FFC50(&StringLiteral_25417/*"trackerName"*/);
    sub_21FFC50(&StringLiteral_25418/*"trackerToken"*/);
    sub_21FFC50(&StringLiteral_17731/*"basePath"*/);
    sub_21FFC50(&StringLiteral_18791/*"code"*/);
    sub_21FFC50(&StringLiteral_17738/*"baseUrl"*/);
    sub_21FFC50(&StringLiteral_25962/*"verificationStatus"*/);
    sub_21FFC50(&StringLiteral_18442/*"callbackId"*/);
    sub_21FFC50(&StringLiteral_20318/*"fineValue"*/);
    sub_21FFC50(&StringLiteral_20005/*"eventToken"*/);
    sub_21FFC50(&StringLiteral_23317/*"noBackoffWait"*/);
    sub_21FFC50(&StringLiteral_17347/*"adid"*/);
    sub_21FFC50(&StringLiteral_17606/*"attStatus"*/);
    sub_21FFC50(&StringLiteral_18790/*"coarseValue"*/);
    sub_21FFC50(&StringLiteral_22111/*"jsonResponse"*/);
    sub_21FFC50(&StringLiteral_20200/*"extraPath"*/);
    sub_21FFC50(&StringLiteral_20647/*"gdprPath"*/);
    sub_21FFC50(&StringLiteral_26147/*"willRetry"*/);
    sub_21FFC50(&StringLiteral_19362/*"deleteState"*/);
    sub_21FFC50(&StringLiteral_25339/*"timestamp"*/);
    sub_21FFC50(&StringLiteral_25338/*"timerStartInMilliseconds"*/);
    sub_21FFC50(&StringLiteral_25790/*"useTestConnectionOptions"*/);
    sub_21FFC50(&StringLiteral_25252/*"teardown"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    sub_21FFC50(&StringLiteral_19058/*"costAmount"*/);
    sub_21FFC50(&StringLiteral_23973/*"purchaseVerificationUrl"*/);
    sub_21FFC50(&StringLiteral_20648/*"gdprUrl"*/);
    sub_21FFC50(&StringLiteral_25032/*"subscriptionUrl"*/);
    sub_21FFC50(&StringLiteral_19059/*"costCurrency"*/);
    sub_21FFC50(&StringLiteral_21219/*"ignoreSystemLifecycleBootstrap"*/);
    sub_21FFC50(&StringLiteral_25337/*"timerIntervalInMilliseconds"*/);
    sub_21FFC50(&StringLiteral_24492/*"sessionIntervalInMilliseconds"*/);
    sub_21FFC50(&StringLiteral_25033/*"subsessionIntervalInMilliseconds"*/);
    byte_59304C6 = 1;
  }
  v1 = StringLiteral_17347/*"adid"*/;
  AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyAdid = (struct System_String_o *)StringLiteral_17347/*"adid"*/;
  sub_21FFBF4(AdjustSdk_AdjustUtils_TypeInfo->static_fields, v1);
  v2 = StringLiteral_22593/*"message"*/;
  static_fields = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  static_fields->KeyMessage = (struct System_String_o *)StringLiteral_22593/*"message"*/;
  sub_21FFBF4(&static_fields->KeyMessage, v2);
  v4 = StringLiteral_23268/*"network"*/;
  v5 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v5->KeyNetwork = (struct System_String_o *)StringLiteral_23268/*"network"*/;
  sub_21FFBF4(&v5->KeyNetwork, v4);
  v6 = StringLiteral_17346/*"adgroup"*/;
  v7 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v7->KeyAdgroup = (struct System_String_o *)StringLiteral_17346/*"adgroup"*/;
  sub_21FFBF4(&v7->KeyAdgroup, v6);
  v8 = StringLiteral_18458/*"campaign"*/;
  v9 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v9->KeyCampaign = (struct System_String_o *)StringLiteral_18458/*"campaign"*/;
  sub_21FFBF4(&v9->KeyCampaign, v8);
  v10 = StringLiteral_19111/*"creative"*/;
  v11 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v11->KeyCreative = (struct System_String_o *)StringLiteral_19111/*"creative"*/;
  sub_21FFBF4(&v11->KeyCreative, v10);
  v12 = StringLiteral_26147/*"willRetry"*/;
  v13 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v13->KeyWillRetry = (struct System_String_o *)StringLiteral_26147/*"willRetry"*/;
  sub_21FFBF4(&v13->KeyWillRetry, v12);
  v14 = StringLiteral_25339/*"timestamp"*/;
  v15 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v15->KeyTimestamp = (struct System_String_o *)StringLiteral_25339/*"timestamp"*/;
  sub_21FFBF4(&v15->KeyTimestamp, v14);
  v16 = StringLiteral_18442/*"callbackId"*/;
  v17 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v17->KeyCallbackId = (struct System_String_o *)StringLiteral_18442/*"callbackId"*/;
  sub_21FFBF4(&v17->KeyCallbackId, v16);
  v18 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v19 = StringLiteral_20005/*"eventToken"*/;
  v18->KeyEventToken = (struct System_String_o *)StringLiteral_20005/*"eventToken"*/;
  sub_21FFBF4(&v18->KeyEventToken, v19);
  v20 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v21 = StringLiteral_18766/*"clickLabel"*/;
  v20->KeyClickLabel = (struct System_String_o *)StringLiteral_18766/*"clickLabel"*/;
  sub_21FFBF4(&v20->KeyClickLabel, v21);
  v22 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v23 = StringLiteral_25417/*"trackerName"*/;
  v22->KeyTrackerName = (struct System_String_o *)StringLiteral_25417/*"trackerName"*/;
  sub_21FFBF4(&v22->KeyTrackerName, v23);
  v24 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v25 = StringLiteral_25418/*"trackerToken"*/;
  v24->KeyTrackerToken = (struct System_String_o *)StringLiteral_25418/*"trackerToken"*/;
  sub_21FFBF4(&v24->KeyTrackerToken, v25);
  v26 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v27 = StringLiteral_22111/*"jsonResponse"*/;
  v26->KeyJsonResponse = (struct System_String_o *)StringLiteral_22111/*"jsonResponse"*/;
  sub_21FFBF4(&v26->KeyJsonResponse, v27);
  v28 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v29 = StringLiteral_19060/*"costType"*/;
  v28->KeyCostType = (struct System_String_o *)StringLiteral_19060/*"costType"*/;
  sub_21FFBF4(&v28->KeyCostType, v29);
  v30 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v31 = StringLiteral_19058/*"costAmount"*/;
  v30->KeyCostAmount = (struct System_String_o *)StringLiteral_19058/*"costAmount"*/;
  sub_21FFBF4(&v30->KeyCostAmount, v31);
  v32 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v33 = StringLiteral_19059/*"costCurrency"*/;
  v32->KeyCostCurrency = (struct System_String_o *)StringLiteral_19059/*"costCurrency"*/;
  sub_21FFBF4(&v32->KeyCostCurrency, v33);
  v34 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v35 = StringLiteral_20270/*"fbInstallReferrer"*/;
  v34->KeyFbInstallReferrer = (struct System_String_o *)StringLiteral_20270/*"fbInstallReferrer"*/;
  sub_21FFBF4(&v34->KeyFbInstallReferrer, v35);
  v36 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v37 = StringLiteral_20318/*"fineValue"*/;
  v36->KeySkanConversionValue = (struct System_String_o *)StringLiteral_20318/*"fineValue"*/;
  sub_21FFBF4(&v36->KeySkanConversionValue, v37);
  v38 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v39 = StringLiteral_18790/*"coarseValue"*/;
  v38->KeySkanCoarseValue = (struct System_String_o *)StringLiteral_18790/*"coarseValue"*/;
  sub_21FFBF4(&v38->KeySkanCoarseValue, v39);
  v40 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v41 = StringLiteral_22367/*"lockWindow"*/;
  v40->KeySkanLockWindow = (struct System_String_o *)StringLiteral_22367/*"lockWindow"*/;
  sub_21FFBF4(&v40->KeySkanLockWindow, v41);
  v42 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v43 = StringLiteral_18791/*"code"*/;
  v42->KeyCode = (struct System_String_o *)StringLiteral_18791/*"code"*/;
  sub_21FFBF4(&v42->KeyCode, v43);
  v44 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v45 = StringLiteral_25962/*"verificationStatus"*/;
  v44->KeyVerificationStatus = (struct System_String_o *)StringLiteral_25962/*"verificationStatus"*/;
  sub_21FFBF4(&v44->KeyVerificationStatus, v45);
  v46 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v47 = StringLiteral_17738/*"baseUrl"*/;
  v46->KeyTestOptionsBaseUrl = (struct System_String_o *)StringLiteral_17738/*"baseUrl"*/;
  sub_21FFBF4(&v46->KeyTestOptionsBaseUrl, v47);
  v48 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v49 = StringLiteral_20648/*"gdprUrl"*/;
  v48->KeyTestOptionsGdprUrl = (struct System_String_o *)StringLiteral_20648/*"gdprUrl"*/;
  sub_21FFBF4(&v48->KeyTestOptionsGdprUrl, v49);
  v50 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v51 = StringLiteral_25032/*"subscriptionUrl"*/;
  v50->KeyTestOptionsSubscriptionUrl = (struct System_String_o *)StringLiteral_25032/*"subscriptionUrl"*/;
  sub_21FFBF4(&v50->KeyTestOptionsSubscriptionUrl, v51);
  v52 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v53 = StringLiteral_23973/*"purchaseVerificationUrl"*/;
  v52->KeyTestOptionsPurchaseVerificationUrl = (struct System_String_o *)StringLiteral_23973/*"purchaseVerificationUrl"*/;
  sub_21FFBF4(&v52->KeyTestOptionsPurchaseVerificationUrl, v53);
  v54 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v55 = StringLiteral_25762/*"urlOverwrite"*/;
  v54->KeyTestOptionsOverwriteUrl = (struct System_String_o *)StringLiteral_25762/*"urlOverwrite"*/;
  sub_21FFBF4(&v54->KeyTestOptionsOverwriteUrl, v55);
  v56 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v57 = StringLiteral_20200/*"extraPath"*/;
  v56->KeyTestOptionsExtraPath = (struct System_String_o *)StringLiteral_20200/*"extraPath"*/;
  sub_21FFBF4(&v56->KeyTestOptionsExtraPath, v57);
  v58 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v59 = StringLiteral_17731/*"basePath"*/;
  v58->KeyTestOptionsBasePath = (struct System_String_o *)StringLiteral_17731/*"basePath"*/;
  sub_21FFBF4(&v58->KeyTestOptionsBasePath, v59);
  v60 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v61 = StringLiteral_20647/*"gdprPath"*/;
  v60->KeyTestOptionsGdprPath = (struct System_String_o *)StringLiteral_20647/*"gdprPath"*/;
  sub_21FFBF4(&v60->KeyTestOptionsGdprPath, v61);
  v62 = AdjustSdk_AdjustUtils_TypeInfo->static_fields;
  v63 = StringLiteral_19362/*"deleteState"*/;
  v62->KeyTestOptionsDeleteState = (struct System_String_o *)StringLiteral_19362/*"deleteState"*/;
  sub_21FFBF4(&v62->KeyTestOptionsDeleteState, v63);
  v64 = StringLiteral_25790/*"useTestConnectionOptions"*/;
  p_KeyTestOptionsUseTestConnectionOptions = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsUseTestConnectionOptions;
  *p_KeyTestOptionsUseTestConnectionOptions = (struct System_String_o *)StringLiteral_25790/*"useTestConnectionOptions"*/;
  sub_21FFBF4(p_KeyTestOptionsUseTestConnectionOptions, v64);
  v66 = StringLiteral_25337/*"timerIntervalInMilliseconds"*/;
  p_KeyTestOptionsTimerIntervalInMilliseconds = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsTimerIntervalInMilliseconds;
  *p_KeyTestOptionsTimerIntervalInMilliseconds = (struct System_String_o *)StringLiteral_25337/*"timerIntervalInMilliseconds"*/;
  sub_21FFBF4(p_KeyTestOptionsTimerIntervalInMilliseconds, v66);
  v68 = StringLiteral_25338/*"timerStartInMilliseconds"*/;
  p_KeyTestOptionsTimerStartInMilliseconds = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsTimerStartInMilliseconds;
  *p_KeyTestOptionsTimerStartInMilliseconds = (struct System_String_o *)StringLiteral_25338/*"timerStartInMilliseconds"*/;
  sub_21FFBF4(p_KeyTestOptionsTimerStartInMilliseconds, v68);
  v70 = StringLiteral_24492/*"sessionIntervalInMilliseconds"*/;
  p_KeyTestOptionsSessionIntervalInMilliseconds = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsSessionIntervalInMilliseconds;
  *p_KeyTestOptionsSessionIntervalInMilliseconds = (struct System_String_o *)StringLiteral_24492/*"sessionIntervalInMilliseconds"*/;
  sub_21FFBF4(p_KeyTestOptionsSessionIntervalInMilliseconds, v70);
  v72 = StringLiteral_25033/*"subsessionIntervalInMilliseconds"*/;
  p_KeyTestOptionsSubsessionIntervalInMilliseconds = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsSubsessionIntervalInMilliseconds;
  *p_KeyTestOptionsSubsessionIntervalInMilliseconds = (struct System_String_o *)StringLiteral_25033/*"subsessionIntervalInMilliseconds"*/;
  sub_21FFBF4(p_KeyTestOptionsSubsessionIntervalInMilliseconds, v72);
  v74 = StringLiteral_25252/*"teardown"*/;
  p_KeyTestOptionsTeardown = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsTeardown;
  *p_KeyTestOptionsTeardown = (struct System_String_o *)StringLiteral_25252/*"teardown"*/;
  sub_21FFBF4(p_KeyTestOptionsTeardown, v74);
  v76 = StringLiteral_23317/*"noBackoffWait"*/;
  p_KeyTestOptionsNoBackoffWait = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsNoBackoffWait;
  *p_KeyTestOptionsNoBackoffWait = (struct System_String_o *)StringLiteral_23317/*"noBackoffWait"*/;
  sub_21FFBF4(p_KeyTestOptionsNoBackoffWait, v76);
  v78 = StringLiteral_17305/*"adServicesFrameworkEnabled"*/;
  p_KeyTestOptionsAdServicesFrameworkEnabled = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsAdServicesFrameworkEnabled;
  *p_KeyTestOptionsAdServicesFrameworkEnabled = (struct System_String_o *)StringLiteral_17305/*"adServicesFrameworkEnabled"*/;
  sub_21FFBF4(p_KeyTestOptionsAdServicesFrameworkEnabled, v78);
  v80 = StringLiteral_17606/*"attStatus"*/;
  p_KeyTestOptionsAttStatus = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsAttStatus;
  *p_KeyTestOptionsAttStatus = (struct System_String_o *)StringLiteral_17606/*"attStatus"*/;
  sub_21FFBF4(p_KeyTestOptionsAttStatus, v80);
  v82 = StringLiteral_21202/*"idfa"*/;
  p_KeyTestOptionsIdfa = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsIdfa;
  *p_KeyTestOptionsIdfa = (struct System_String_o *)StringLiteral_21202/*"idfa"*/;
  sub_21FFBF4(p_KeyTestOptionsIdfa, v82);
  v84 = StringLiteral_21219/*"ignoreSystemLifecycleBootstrap"*/;
  p_KeyTestOptionsIgnoreSystemLifecycleBootstrap = &AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsIgnoreSystemLifecycleBootstrap;
  *p_KeyTestOptionsIgnoreSystemLifecycleBootstrap = (struct System_String_o *)StringLiteral_21219/*"ignoreSystemLifecycleBootstrap"*/;
  sub_21FFBF4(p_KeyTestOptionsIgnoreSystemLifecycleBootstrap, v84);
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
  if ( (byte_59304B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_bool__get_Value__);
    byte_59304B8 = 1;
  }
  if ( !hasValue )
    return -1;
  v3 = &v5;
  return System_Nullable_bool___get_Value(
           (System_Nullable_bool__o)v3,
           (const MethodInfo_45AC820 *)Method_System_Nullable_bool__get_Value__);
}


double AdjustSdk_AdjustUtils__ConvertDouble(System_Nullable_double__o value, const MethodInfo *method)
{
  bool hasValue; // w19
  System_Nullable_double__o v4; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_double__o v5; // 0:x0.16

  v4 = value;
  hasValue = value.fields.hasValue;
  if ( (byte_59304B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_double__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_double__get_Value__);
    byte_59304B9 = 1;
  }
  if ( !hasValue )
    return -1.0;
  *(_QWORD *)&v5.fields.hasValue = &v4;
  *(_QWORD *)&v5.fields.value = Method_System_Nullable_double__get_Value__;
  return System_Nullable_double___get_Value(v5, (const MethodInfo_45AEF04 *)method);
}


int32_t AdjustSdk_AdjustUtils__ConvertInt(System_Nullable_int__o value, const MethodInfo *method)
{
  bool hasValue; // w19
  System_Nullable_int__o v3; // x0
  System_Nullable_int__o v5; // [xsp+8h] [xbp-18h] BYREF

  hasValue = value.fields.hasValue;
  v5 = value;
  if ( (byte_59304BA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_int__get_Value__);
    byte_59304BA = 1;
  }
  if ( !hasValue )
    return -1;
  v3 = (System_Nullable_int__o)&v5;
  return System_Nullable_int___get_Value(v3, (const MethodInfo_45B01EC *)Method_System_Nullable_int__get_Value__);
}


int32_t AdjustSdk_AdjustUtils__ConvertLogLevel(System_Nullable_AdjustLogLevel__o logLevel, const MethodInfo *method)
{
  bool hasValue; // w19
  System_Nullable_Int32Enum__o v3; // x0
  System_Nullable_AdjustLogLevel__o v5; // [xsp+8h] [xbp-18h] BYREF

  hasValue = logLevel.fields.hasValue;
  v5 = logLevel;
  if ( (byte_59304B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_AdjustLogLevel__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_AdjustLogLevel__get_Value__);
    byte_59304B7 = 1;
  }
  if ( !hasValue )
    return -1;
  v3 = (System_Nullable_Int32Enum__o)&v5;
  return System_Nullable_Int32Enum___get_Value(
           v3,
           (const MethodInfo_45B0578 *)Method_System_Nullable_AdjustLogLevel__get_Value__);
}


int64_t AdjustSdk_AdjustUtils__ConvertLong(System_Nullable_long__o value, const MethodInfo *method)
{
  bool hasValue; // w19
  System_Nullable_long__o v4; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v5; // 0:x0.16

  v4 = value;
  hasValue = value.fields.hasValue;
  if ( (byte_59304BB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_long__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_long__get_Value__);
    byte_59304BB = 1;
  }
  if ( !hasValue )
    return -1;
  *(_QWORD *)&v5.fields.hasValue = &v4;
  v5.fields.value = Method_System_Nullable_long__get_Value__;
  return System_Nullable_long___get_Value(v5, (const MethodInfo_45B0930 *)method);
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
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59304BD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&AdjustSdk_JSONArray_TypeInfo);
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    byte_59304BD = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !list
    || (System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
          (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
          (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__)
      & 1) != 0 )
  {
    return 0;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
         (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
         (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) >= 1 )
  {
    v4 = 0;
    do
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
               v4,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v6 = v4 + 1;
      v7 = Item;
      v8 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
             (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
             v6,
             (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v7;
            v8 = (Il2CppObject *)sub_21FFBF4(v14 + 4, v7);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &v15->obj.klass + v17;
            v3->fields._size = v17 + 1;
            v18[4] = (Il2CppClass *)v10;
            sub_21FFBF4(v18 + 4, v10);
          }
        }
      }
      v4 = v6 + 1;
    }
    while ( v4 < System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
                   (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) );
  }
  v19 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v19, v20);
  if ( !v3 )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    v3,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v26.fields._current;
    v22 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
    System_Object___ctor(v22, 0);
    v22[1].klass = (Il2CppClass *)current;
    v23 = sub_21FFBF4(&v22[1], current);
    if ( !v19 )
      sub_21FFECC(v23, v24);
    ((void (__fastcall *)(AdjustSdk_JSONArray_o *, Il2CppObject *, const MethodInfo *))v19->klass->vtable._12_Add.methodPtr)(
      v19,
      v22,
      v19->klass->vtable._12_Add.method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v19 )
LABEL_28:
    sub_21FFECC(v8, v9);
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
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59304BE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&AdjustSdk_JSONArray_TypeInfo);
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    byte_59304BE = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !list
    || (unsigned int)(-1431655765
                    * System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                        (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
                        (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__)
                    + 715827882) > 0x55555554 )
  {
    return 0;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
         (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
         (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
               v5,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v7 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
             (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
             v5 + 1,
             (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
      v8 = v5 + 2;
      v9 = v7;
      v10 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
              (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
              v8,
              (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
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
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v16[4] = (Il2CppClass *)Item;
              v10 = (Il2CppObject *)sub_21FFBF4(v16 + 4, Item);
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
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &v17->obj.klass + v19;
              v4->fields._size = v19 + 1;
              v20[4] = (Il2CppClass *)v9;
              v10 = (Il2CppObject *)sub_21FFBF4(v20 + 4, v9);
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
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &v21->obj.klass + v23;
              v4->fields._size = v23 + 1;
              v24[4] = (Il2CppClass *)v12;
              sub_21FFBF4(v24 + 4, v12);
            }
          }
        }
      }
      v5 = v8 + 1;
    }
    while ( v5 < System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
                   (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) );
  }
  v25 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v25, v26);
  if ( !v4 )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v4,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v31.fields._current;
    v28 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
    System_Object___ctor(v28, 0);
    v28[1].klass = (Il2CppClass *)current;
    v29 = sub_21FFBF4(&v28[1], current);
    if ( !v25 )
      sub_21FFECC(v29, v30);
    ((void (__fastcall *)(AdjustSdk_JSONArray_o *, Il2CppObject *, const MethodInfo *))v25->klass->vtable._12_Add.methodPtr)(
      v25,
      v28,
      v25->klass->vtable._12_Add.method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v25 )
LABEL_33:
    sub_21FFECC(v10, v11);
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
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59304BC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&AdjustSdk_JSONArray_TypeInfo);
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
    byte_59304BC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !list )
    return 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
         (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
         (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__) >= 1 )
  {
    for ( i = 0;
          i < System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
                (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Count__);
          ++i )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)list,
               i,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_string__get_Item__);
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
        }
        else
        {
          v11 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v11[4] = (Il2CppClass *)v10;
          sub_21FFBF4(v11 + 4, v10);
        }
      }
    }
  }
  v12 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v12, v13);
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    v3,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v19.fields._current;
    v15 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
    System_Object___ctor(v15, 0);
    v15[1].klass = (Il2CppClass *)current;
    v16 = sub_21FFBF4(&v15[1], current);
    if ( !v12 )
      sub_21FFECC(v16, v17);
    ((void (__fastcall *)(AdjustSdk_JSONArray_o *, Il2CppObject *, const MethodInfo *))v12->klass->vtable._12_Add.methodPtr)(
      v12,
      v15,
      v12->klass->vtable._12_Add.method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v12 )
LABEL_23:
    sub_21FFECC(Item, v6);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  AdjustSdk_JSONClass_o *v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v18; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v19; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_59304C4 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_59304C4 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
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
    v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v11,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    v14 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                     v5,
                                     v5->klass->vtable._27_get_AsObject.method);
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v12, v13);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(
      v14,
      (System_Collections_Generic_Dictionary_string__object__o *)v11,
      v13);
    if ( !v11 )
LABEL_16:
      sub_21FFECC(v7, v8);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v20,
      v11,
      (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v18 = 0;
    v19 = &v20;
    while ( 1 )
    {
      v15 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v20,
              (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( !v15 )
        break;
      if ( !v3 )
        sub_21FFECC(v15, v16);
      System_Collections_Generic_Dictionary_object__object___Add(
        v3,
        v20.fields._current.fields.key,
        v20.fields._current.fields.value,
        (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v20,
      (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
  __int64 v12; // x2
  System_String_o *v13; // x19
  System_String_o *JsonResponseCompact; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v35; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_59304BF & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_26362/*"{"*/);
    sub_21FFC50(&StringLiteral_26607/*"}"*/);
    sub_21FFC50(&StringLiteral_378/*"\":"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_366/*"\""*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_379/*"\":\""*/);
    byte_59304BF = 1;
  }
  result = (System_String_o *)StringLiteral_1/*""*/;
  memset(&v37, 0, sizeof(v37));
  if ( dictionary )
  {
    v4 = System_String__Concat_75438412((System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_26362/*"{"*/, 0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v36,
      (System_Collections_Generic_Dictionary_object__object__o *)dictionary,
      (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v5 = 0;
    v37 = v36;
    v36.fields._dictionary = 0;
    *(_QWORD *)&v36.fields._version = &v37;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v37,
                (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          v35 = v36.fields._dictionary;
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
            *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o **)&v36.fields._version,
            (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
          if ( v35 )
            sub_21FFEC4(v35);
          return System_String__Concat_75438412(v4, (System_String_o *)StringLiteral_26607/*"}"*/, 0);
        }
        value = v37.fields._current.fields.value;
        key = v37.fields._current.fields.key;
        if ( v37.fields._current.fields.value )
          break;
LABEL_14:
        if ( ++v5 >= 2 )
          v4 = System_String__Concat_75438412(v4, (System_String_o *)StringLiteral_869/*","*/, 0);
        v13 = System_String__Concat_75483552(
                v4,
                (System_String_o *)StringLiteral_366/*"\""*/,
                (System_String_o *)key,
                (System_String_o *)StringLiteral_378/*"\":"*/,
                0);
        if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v11, v12);
        JsonResponseCompact = AdjustSdk_AdjustUtils__GetJsonResponseCompact(
                                (System_Collections_Generic_Dictionary_string__object__o *)value,
                                v11);
        v4 = System_String__Concat_75438412(v13, JsonResponseCompact, 0);
      }
      klass = v37.fields._current.fields.value->klass;
      if ( v37.fields._current.fields.value->klass != (Il2CppClass *)qword_594C0B8 )
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
        v10 = System_String__Concat_75438412(v4, (System_String_o *)StringLiteral_869/*","*/, 0);
      else
        v10 = v4;
      if ( System_String__StartsWith((System_String_o *)value, (System_String_o *)StringLiteral_26362/*"{"*/, 0)
        && System_String__EndsWith((System_String_o *)value, (System_String_o *)StringLiteral_26607/*"}"*/, 0) )
      {
        v15 = sub_21FFD10(string___TypeInfo, 5);
        v17 = v15;
        if ( !v15 )
          sub_21FFECC(0, v16);
        if ( !*(_DWORD *)(v15 + 24) )
          sub_21FFED4(v15);
        *(_QWORD *)(v15 + 32) = v10;
        v18 = sub_21FFBF4(v15 + 32, v10);
        if ( (*(_DWORD *)(v17 + 24) & 0xFFFFFFFE) == 0 )
          sub_21FFED4(v18);
        v19 = StringLiteral_366/*"\""*/;
        *(_QWORD *)(v17 + 40) = StringLiteral_366/*"\""*/;
        v20 = sub_21FFBF4(v17 + 40, v19);
        if ( *(_DWORD *)(v17 + 24) <= 2u )
          sub_21FFED4(v20);
        *(_QWORD *)(v17 + 48) = key;
        v21 = sub_21FFBF4(v17 + 48, key);
        if ( (*(_DWORD *)(v17 + 24) & 0xFFFFFFFC) == 0 )
          sub_21FFED4(v21);
        v22 = StringLiteral_378/*"\":"*/;
        *(_QWORD *)(v17 + 56) = StringLiteral_378/*"\":"*/;
        v23 = sub_21FFBF4(v17 + 56, v22);
        if ( *(_DWORD *)(v17 + 24) <= 4u )
          sub_21FFED4(v23);
        *(_QWORD *)(v17 + 64) = value;
        sub_21FFBF4(v17 + 64, value);
        v4 = System_String__Concat_75483816((System_String_array *)v17, 0);
      }
      else
      {
        v24 = sub_21FFD10(string___TypeInfo, 6);
        v26 = v24;
        if ( !v24 )
          sub_21FFECC(0, v25);
        if ( !*(_DWORD *)(v24 + 24) )
          sub_21FFED4(v24);
        *(_QWORD *)(v24 + 32) = v10;
        v27 = sub_21FFBF4(v24 + 32, v10);
        if ( (*(_DWORD *)(v26 + 24) & 0xFFFFFFFE) == 0 )
          sub_21FFED4(v27);
        v28 = StringLiteral_366/*"\""*/;
        *(_QWORD *)(v26 + 40) = StringLiteral_366/*"\""*/;
        v29 = sub_21FFBF4(v26 + 40, v28);
        if ( *(_DWORD *)(v26 + 24) <= 2u )
          sub_21FFED4(v29);
        *(_QWORD *)(v26 + 48) = key;
        v30 = sub_21FFBF4(v26 + 48, key);
        if ( (*(_DWORD *)(v26 + 24) & 0xFFFFFFFC) == 0 )
          sub_21FFED4(v30);
        v31 = StringLiteral_379/*"\":\""*/;
        *(_QWORD *)(v26 + 56) = StringLiteral_379/*"\":\""*/;
        v32 = sub_21FFBF4(v26 + 56, v31);
        if ( *(_DWORD *)(v26 + 24) <= 4u )
          sub_21FFED4(v32);
        *(_QWORD *)(v26 + 64) = value;
        v33 = sub_21FFBF4(v26 + 64, value);
        if ( *(_DWORD *)(v26 + 24) <= 5u )
          sub_21FFED4(v33);
        v34 = StringLiteral_366/*"\""*/;
        *(_QWORD *)(v26 + 72) = StringLiteral_366/*"\""*/;
        sub_21FFBF4(v26 + 72, v34);
        v4 = System_String__Concat_75483816((System_String_array *)v26, 0);
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

  if ( (byte_59304C0 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59304C0 = 1;
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
    sub_21FFECC(v5, v6);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  AdjustSdk_JSONClass_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  Il2CppObject *key; // x20
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_59304C3 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_59304C3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
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
    v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v11,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    v14 = (AdjustSdk_JSONClass_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._27_get_AsObject.methodPtr)(
                                     v5,
                                     v5->klass->vtable._27_get_AsObject.method);
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v12, v13);
    AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(
      v14,
      (System_Collections_Generic_Dictionary_string__object__o *)v11,
      v13);
    if ( !v11 )
LABEL_18:
      sub_21FFECC(v7, v8);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v22,
      v11,
      (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v22,
              (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v22.fields._current.fields.value )
        sub_21FFECC(0, v15);
      key = v22.fields._current.fields.key;
      v19 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, __int64, __int64))v22.fields._current.fields.value->klass->vtable[3].methodPtr)(
                              v22.fields._current.fields.value,
                              v22.fields._current.fields.value->klass->vtable[3].method,
                              v16,
                              v17);
      if ( !v3 )
        sub_21FFECC(v19, v20);
      System_Collections_Generic_Dictionary_object__object___Add(
        v3,
        key,
        v19,
        (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v22,
      (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
  __int64 v12; // x2
  Il2CppObject *inited; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  AdjustSdk_AdjustUtils_c *v19; // x0
  Il2CppObject *v20; // x0
  AdjustSdk_AdjustUtils_c *v21; // x0
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  AdjustSdk_AdjustUtils_c *v26; // x0
  bool v27; // w0
  __int64 v28; // x1
  __int64 v29; // x2
  AdjustSdk_AdjustUtils_c *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  AdjustSdk_AdjustUtils_c *v33; // x0
  System_String_o *v34; // x0
  bool v35; // w22
  System_Object_array *v36; // x21
  Il2CppObject *v37; // x22
  __int64 v38; // x1
  UnityEngine_AndroidJavaObject_o *v39; // x22
  AdjustSdk_AdjustUtils_c *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  AdjustSdk_AdjustUtils_c *v43; // x0
  Il2CppObject *v44; // x0
  int64_t v45; // x22
  System_Object_array *v46; // x21
  Il2CppObject *v47; // x22
  UnityEngine_AndroidJavaObject_o *v48; // x22
  AdjustSdk_AdjustUtils_c *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  AdjustSdk_AdjustUtils_c *v52; // x0
  Il2CppObject *v53; // x0
  int64_t v54; // x22
  System_Object_array *v55; // x21
  Il2CppObject *v56; // x22
  UnityEngine_AndroidJavaObject_o *v57; // x22
  AdjustSdk_AdjustUtils_c *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  AdjustSdk_AdjustUtils_c *v61; // x0
  Il2CppObject *v62; // x0
  int64_t v63; // x22
  System_Object_array *v64; // x21
  Il2CppObject *v65; // x22
  UnityEngine_AndroidJavaObject_o *v66; // x22
  AdjustSdk_AdjustUtils_c *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  AdjustSdk_AdjustUtils_c *v70; // x0
  Il2CppObject *v71; // x0
  int64_t v72; // x22
  System_Object_array *v73; // x21
  Il2CppObject *v74; // x22
  UnityEngine_AndroidJavaObject_o *v75; // x22
  AdjustSdk_AdjustUtils_c *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  AdjustSdk_AdjustUtils_c *v79; // x0
  System_String_o *v80; // x0
  bool v81; // w22
  System_Object_array *v82; // x21
  Il2CppObject *v83; // x22
  UnityEngine_AndroidJavaObject_o *v84; // x22
  AdjustSdk_AdjustUtils_c *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  AdjustSdk_AdjustUtils_c *v88; // x0
  System_String_o *v89; // x0
  bool v90; // w22
  System_Object_array *v91; // x21
  Il2CppObject *v92; // x22
  UnityEngine_AndroidJavaObject_o *v93; // x22
  AdjustSdk_AdjustUtils_c *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  AdjustSdk_AdjustUtils_c *v97; // x0
  System_String_o *v98; // x0
  bool v99; // w21
  __int64 v100; // x19
  Il2CppObject *v101; // x21
  UnityEngine_AndroidJavaObject_o *v102; // x21
  __int64 v104; // x0
  int64_t v105; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_59304C5 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Set_string___);
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_23972/*"purchaseVerificationPath"*/);
    sub_21FFC50(&StringLiteral_22053/*"java.lang.Boolean"*/);
    sub_21FFC50(&StringLiteral_25030/*"subscriptionPath"*/);
    sub_21FFC50(&StringLiteral_17731/*"basePath"*/);
    sub_21FFC50(&StringLiteral_17738/*"baseUrl"*/);
    sub_21FFC50(&StringLiteral_19018/*"context"*/);
    sub_21FFC50(&StringLiteral_23317/*"noBackoffWait"*/);
    sub_21FFC50(&StringLiteral_22060/*"java.lang.Long"*/);
    sub_21FFC50(&StringLiteral_18837/*"com.adjust.sdk.AdjustTestOptions"*/);
    sub_21FFC50(&StringLiteral_20647/*"gdprPath"*/);
    sub_21FFC50(&StringLiteral_25478/*"true"*/);
    sub_21FFC50(&StringLiteral_25338/*"timerStartInMilliseconds"*/);
    sub_21FFC50(&StringLiteral_25790/*"useTestConnectionOptions"*/);
    sub_21FFC50(&StringLiteral_25252/*"teardown"*/);
    sub_21FFC50(&StringLiteral_23973/*"purchaseVerificationUrl"*/);
    sub_21FFC50(&StringLiteral_20648/*"gdprUrl"*/);
    sub_21FFC50(&StringLiteral_25032/*"subscriptionUrl"*/);
    sub_21FFC50(&StringLiteral_21219/*"ignoreSystemLifecycleBootstrap"*/);
    sub_21FFC50(&StringLiteral_25337/*"timerIntervalInMilliseconds"*/);
    sub_21FFC50(&StringLiteral_24492/*"sessionIntervalInMilliseconds"*/);
    sub_21FFC50(&StringLiteral_25033/*"subsessionIntervalInMilliseconds"*/);
    byte_59304C5 = 1;
  }
  v5 = Method_System_Array_Empty_object___;
  v6 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v6 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8();
  if ( !*(_DWORD *)(v7 + 228) )
    j_il2cpp_runtime_class_init_0(v7, ajoCurrentActivity, method);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8();
  v9 = **(System_Object_array ***)(v8 + 184);
  v10 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(v10, (System_String_o *)StringLiteral_18837/*"com.adjust.sdk.AdjustTestOptions"*/, v9, 0);
  inited = (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    inited = (Il2CppObject *)j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v11, v12);
  if ( !testOptionsMap )
    goto LABEL_112;
  inited = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
             (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsBaseUrl,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  if ( !v10 )
    goto LABEL_112;
  UnityEngine_AndroidJavaObject__Set_object_(
    v10,
    (System_String_o *)StringLiteral_17738/*"baseUrl"*/,
    inited,
    (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
           (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsGdprUrl,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  UnityEngine_AndroidJavaObject__Set_object_(
    v10,
    (System_String_o *)StringLiteral_20648/*"gdprUrl"*/,
    Item,
    (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
  v15 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
          (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsSubscriptionUrl,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  UnityEngine_AndroidJavaObject__Set_object_(
    v10,
    (System_String_o *)StringLiteral_25032/*"subscriptionUrl"*/,
    v15,
    (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
  v16 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
          (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsPurchaseVerificationUrl,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  UnityEngine_AndroidJavaObject__Set_object_(
    v10,
    (System_String_o *)StringLiteral_23973/*"purchaseVerificationUrl"*/,
    v16,
    (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsExtraPath,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v19 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v17, v18);
      v19 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v20 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v19->static_fields->KeyTestOptionsExtraPath,
            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !System_String__IsNullOrEmpty((System_String_o *)v20, 0) )
    {
      v21 = AdjustSdk_AdjustUtils_TypeInfo;
      if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v17, v18);
        v21 = AdjustSdk_AdjustUtils_TypeInfo;
      }
      v22 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
              (Il2CppObject *)v21->static_fields->KeyTestOptionsExtraPath,
              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_AndroidJavaObject__Set_object_(
        v10,
        (System_String_o *)StringLiteral_17731/*"basePath"*/,
        v22,
        (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
      v23 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
              (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsExtraPath,
              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_AndroidJavaObject__Set_object_(
        v10,
        (System_String_o *)StringLiteral_20647/*"gdprPath"*/,
        v23,
        (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
      v24 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
              (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsExtraPath,
              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_AndroidJavaObject__Set_object_(
        v10,
        (System_String_o *)StringLiteral_25030/*"subscriptionPath"*/,
        v24,
        (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
      v25 = System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
              (Il2CppObject *)AdjustSdk_AdjustUtils_TypeInfo->static_fields->KeyTestOptionsExtraPath,
              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      UnityEngine_AndroidJavaObject__Set_object_(
        v10,
        (System_String_o *)StringLiteral_23972/*"purchaseVerificationPath"*/,
        v25,
        (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_string___);
    }
  }
  v26 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v17, v18);
    v26 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  v27 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
          (Il2CppObject *)v26->static_fields->KeyTestOptionsDeleteState,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  if ( ajoCurrentActivity && v27 )
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_19018/*"context"*/,
      (Il2CppObject *)ajoCurrentActivity,
      (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  v30 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v28, v29);
    v30 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v30->static_fields->KeyTestOptionsUseTestConnectionOptions,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v33 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v31, v32);
      v33 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    inited = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
               (Il2CppObject *)v33->static_fields->KeyTestOptionsUseTestConnectionOptions,
               (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !inited )
      goto LABEL_112;
    v34 = System_String__ToLower((System_String_o *)inited, 0);
    v35 = System_String__op_Equality(v34, (System_String_o *)StringLiteral_25478/*"true"*/, 0);
    v36 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    LOBYTE(v105) = v35;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C050, &v105);
    if ( !v36 )
      goto LABEL_112;
    v37 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_21FFDA4(inited, v36->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v36->max_length) )
      goto LABEL_113;
    v36->m_Items[0] = v37;
    sub_21FFBF4(v36->m_Items, v37);
    v39 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v39, (System_String_o *)StringLiteral_22053/*"java.lang.Boolean"*/, v36, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_25790/*"useTestConnectionOptions"*/,
      (Il2CppObject *)v39,
      (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v40 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v31, v32);
    v40 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v40->static_fields->KeyTestOptionsTimerIntervalInMilliseconds,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v43 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v41, v42);
      v43 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v44 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v43->static_fields->KeyTestOptionsTimerIntervalInMilliseconds,
            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v45 = System_Int64__Parse((System_String_o *)v44, 0);
    v46 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    v105 = v45;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v105);
    if ( !v46 )
      goto LABEL_112;
    v47 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_21FFDA4(inited, v46->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v46->max_length) )
      goto LABEL_113;
    v46->m_Items[0] = v47;
    sub_21FFBF4(v46->m_Items, v47);
    v48 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v48, (System_String_o *)StringLiteral_22060/*"java.lang.Long"*/, v46, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_25337/*"timerIntervalInMilliseconds"*/,
      (Il2CppObject *)v48,
      (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v49 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v41, v42);
    v49 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v49->static_fields->KeyTestOptionsTimerStartInMilliseconds,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v52 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v50, v51);
      v52 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v53 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v52->static_fields->KeyTestOptionsTimerStartInMilliseconds,
            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v54 = System_Int64__Parse((System_String_o *)v53, 0);
    v55 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    v105 = v54;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v105);
    if ( !v55 )
      goto LABEL_112;
    v56 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_21FFDA4(inited, v55->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v55->max_length) )
      goto LABEL_113;
    v55->m_Items[0] = v56;
    sub_21FFBF4(v55->m_Items, v56);
    v57 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v57, (System_String_o *)StringLiteral_22060/*"java.lang.Long"*/, v55, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_25338/*"timerStartInMilliseconds"*/,
      (Il2CppObject *)v57,
      (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v58 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v50, v51);
    v58 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v58->static_fields->KeyTestOptionsSessionIntervalInMilliseconds,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v61 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v59, v60);
      v61 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v62 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v61->static_fields->KeyTestOptionsSessionIntervalInMilliseconds,
            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v63 = System_Int64__Parse((System_String_o *)v62, 0);
    v64 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    v105 = v63;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v105);
    if ( !v64 )
      goto LABEL_112;
    v65 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_21FFDA4(inited, v64->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v64->max_length) )
      goto LABEL_113;
    v64->m_Items[0] = v65;
    sub_21FFBF4(v64->m_Items, v65);
    v66 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v66, (System_String_o *)StringLiteral_22060/*"java.lang.Long"*/, v64, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_24492/*"sessionIntervalInMilliseconds"*/,
      (Il2CppObject *)v66,
      (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v67 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v59, v60);
    v67 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v67->static_fields->KeyTestOptionsSubsessionIntervalInMilliseconds,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v70 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v68, v69);
      v70 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    v71 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
            (Il2CppObject *)v70->static_fields->KeyTestOptionsSubsessionIntervalInMilliseconds,
            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    v72 = System_Int64__Parse((System_String_o *)v71, 0);
    v73 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    v105 = v72;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v105);
    if ( !v73 )
      goto LABEL_112;
    v74 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_21FFDA4(inited, v73->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v73->max_length) )
      goto LABEL_113;
    v73->m_Items[0] = v74;
    sub_21FFBF4(v73->m_Items, v74);
    v75 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v75, (System_String_o *)StringLiteral_22060/*"java.lang.Long"*/, v73, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_25033/*"subsessionIntervalInMilliseconds"*/,
      (Il2CppObject *)v75,
      (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v76 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v68, v69);
    v76 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v76->static_fields->KeyTestOptionsTeardown,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v79 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v77, v78);
      v79 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    inited = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
               (Il2CppObject *)v79->static_fields->KeyTestOptionsTeardown,
               (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !inited )
      goto LABEL_112;
    v80 = System_String__ToLower((System_String_o *)inited, 0);
    v81 = System_String__op_Equality(v80, (System_String_o *)StringLiteral_25478/*"true"*/, 0);
    v82 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    LOBYTE(v105) = v81;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C050, &v105);
    if ( !v82 )
      goto LABEL_112;
    v83 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_21FFDA4(inited, v82->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v82->max_length) )
      goto LABEL_113;
    v82->m_Items[0] = v83;
    sub_21FFBF4(v82->m_Items, v83);
    v84 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v84, (System_String_o *)StringLiteral_22053/*"java.lang.Boolean"*/, v82, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_25252/*"teardown"*/,
      (Il2CppObject *)v84,
      (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v85 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v77, v78);
    v85 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v85->static_fields->KeyTestOptionsNoBackoffWait,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v88 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v86, v87);
      v88 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    inited = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
               (Il2CppObject *)v88->static_fields->KeyTestOptionsNoBackoffWait,
               (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !inited )
      goto LABEL_112;
    v89 = System_String__ToLower((System_String_o *)inited, 0);
    v90 = System_String__op_Equality(v89, (System_String_o *)StringLiteral_25478/*"true"*/, 0);
    v91 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 1);
    LOBYTE(v105) = v90;
    inited = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C050, &v105);
    if ( !v91 )
      goto LABEL_112;
    v92 = inited;
    if ( inited )
    {
      inited = (Il2CppObject *)sub_21FFDA4(inited, v91->obj.klass->_1.element_class);
      if ( !inited )
        goto LABEL_114;
    }
    if ( !LODWORD(v91->max_length) )
      goto LABEL_113;
    v91->m_Items[0] = v92;
    sub_21FFBF4(v91->m_Items, v92);
    v93 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor_82839756(v93, (System_String_o *)StringLiteral_22053/*"java.lang.Boolean"*/, v91, 0);
    UnityEngine_AndroidJavaObject__Set_object_(
      v10,
      (System_String_o *)StringLiteral_23317/*"noBackoffWait"*/,
      (Il2CppObject *)v93,
      (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
  }
  v94 = AdjustSdk_AdjustUtils_TypeInfo;
  if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v86, v87);
    v94 = AdjustSdk_AdjustUtils_TypeInfo;
  }
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
         (Il2CppObject *)v94->static_fields->KeyTestOptionsIgnoreSystemLifecycleBootstrap,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v97 = AdjustSdk_AdjustUtils_TypeInfo;
    if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v95, v96);
      v97 = AdjustSdk_AdjustUtils_TypeInfo;
    }
    inited = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)testOptionsMap,
               (Il2CppObject *)v97->static_fields->KeyTestOptionsIgnoreSystemLifecycleBootstrap,
               (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( inited )
    {
      v98 = System_String__ToLower((System_String_o *)inited, 0);
      v99 = System_String__op_Equality(v98, (System_String_o *)StringLiteral_25478/*"true"*/, 0);
      v100 = sub_21FFD10(object___TypeInfo, 1);
      LOBYTE(v105) = v99;
      inited = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C050, &v105);
      if ( v100 )
      {
        v101 = inited;
        if ( !inited || (inited = (Il2CppObject *)sub_21FFDA4(inited, *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v100 + 24) )
          {
            *(_QWORD *)(v100 + 32) = v101;
            sub_21FFBF4(v100 + 32, v101);
            v102 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
            UnityEngine_AndroidJavaObject___ctor_82839756(
              v102,
              (System_String_o *)StringLiteral_22053/*"java.lang.Boolean"*/,
              (System_Object_array *)v100,
              0);
            UnityEngine_AndroidJavaObject__Set_object_(
              v10,
              (System_String_o *)StringLiteral_21219/*"ignoreSystemLifecycleBootstrap"*/,
              (Il2CppObject *)v102,
              (const MethodInfo_36D7958 *)Method_UnityEngine_AndroidJavaObject_Set_AndroidJavaObject___);
            return v10;
          }
LABEL_113:
          sub_21FFED4(inited);
        }
LABEL_114:
        v104 = sub_21FFEF0(inited, v38);
        sub_21FFD90(v104, 0);
      }
    }
LABEL_112:
    sub_21FFECC(inited, v11, v12);
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
  if ( (byte_59304C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    dictionary = (System_Collections_Generic_Dictionary_string__string__o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59304C2 = 1;
  }
  value = 0;
  if ( !v4 )
    sub_21FFECC(dictionary, key);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)v4,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
  AdjustSdk_JSONClass_o *v4; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_IEnumerator_o *i; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x22
  Il2CppObject *v28; // x20
  AdjustSdk_JSONClass_o *v29; // x21
  const MethodInfo *v30; // x2
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_Dictionary_object__object__o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x20
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_Collections_IEnumerator_o *v46; // [xsp+28h] [xbp-58h]

  v4 = jsonObject;
  if ( (byte_59304C1 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_AdjustUtils_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    jsonObject = (AdjustSdk_JSONClass_o *)sub_21FFC50(&System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo);
    byte_59304C1 = 1;
  }
  if ( !v4 )
    sub_21FFECC(jsonObject, output, method);
  Enumerator = AdjustSdk_JSONClass__GetEnumerator(v4, (const MethodInfo *)output);
  v46 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v6, v7);
  for ( i = Enumerator; ; i = v46 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(i, *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v46 )
      sub_21FFECC(v13, v14, v15);
    v16 = v46->klass;
    v17 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1];
    }
    else
    {
LABEL_18:
      v19 = sub_2237E2C(v46, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(v46, *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_21FFECC(0, v21, v22);
    if ( *(Il2CppClass **)(*(_QWORD *)v20 + 64LL) != System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo->_1.element_class )
    {
      v35 = sub_220024C(v20, System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo, v22, v23);
LABEL_45:
      sub_21FFECC(v35, v36, v37);
    }
    v24 = j_il2cpp_object_unbox_0(v20, System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo, v22, v23);
    v27 = *(_QWORD *)(v24 + 8);
    if ( !v27 )
      sub_21FFECC(v24, v25, v26);
    v28 = *(Il2CppObject **)v24;
    v29 = (AdjustSdk_JSONClass_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v27 + 744LL))(
                                     *(_QWORD *)(v24 + 8),
                                     *(_QWORD *)(*(_QWORD *)v27 + 752LL));
    if ( AdjustSdk_JSONNode__op_Equality((AdjustSdk_JSONNode_o *)v29, 0, v30) )
    {
      v31 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 456LL))(
                              v27,
                              *(_QWORD *)(*(_QWORD *)v27 + 464LL));
      if ( !output )
        sub_21FFECC(v31, v32, v33);
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)output,
        v28,
        v31,
        (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    }
    else
    {
      v34 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v34,
        (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( !output )
        goto LABEL_45;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)output,
        v28,
        (Il2CppObject *)v34,
        (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
      if ( !*(&AdjustSdk_AdjustUtils_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AdjustSdk_AdjustUtils_TypeInfo, v38, v39);
      AdjustSdk_AdjustUtils__WriteJsonResponseDictionary(
        v29,
        (System_Collections_Generic_Dictionary_string__object__o *)v34,
        v39);
    }
  }
  v40 = sub_21FFDA4(v46, System_IDisposable_TypeInfo);
  if ( v40 )
  {
    v41 = *(_QWORD *)v40;
    v42 = v40;
    v43 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_37;
      }
      v45 = v41 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_37:
      v45 = sub_2237E2C(v40, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
  }
}


void AdjustSdk_JSONArray___ctor(AdjustSdk_JSONArray_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_59304EA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_JSONNode__TypeInfo);
    byte_59304EA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_JSONNode__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_JSONNode___ctor__);
  this->fields.m_List = (struct System_Collections_Generic_List_JSONNode__o *)v3;
  sub_21FFBF4(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_JSONArray__Add(
        AdjustSdk_JSONArray_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *aItem,
        const MethodInfo *method)
{
  AdjustSdk_JSONArray_o *v5; // x20
  System_Collections_Generic_List_object__o *m_List; // x8
  struct System_Object_array *items; // x9
  _QWORD *v8; // x10
  __int64 size; // x11
  Il2CppClass **v10; // x0

  v5 = this;
  if ( (byte_59304E2 & 1) == 0 )
  {
    this = (AdjustSdk_JSONArray_o *)sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__Add__);
    byte_59304E2 = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)v5->fields.m_List;
  if ( !m_List
    || (items = m_List->fields._items,
        v8 = Method_System_Collections_Generic_List_JSONNode__Add__,
        ++m_List->fields._version,
        !items) )
  {
    sub_21FFECC(this, aKey);
  }
  size = m_List->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      m_List,
      (Il2CppObject *)aItem,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    m_List->fields._size = size + 1;
    v10[4] = (Il2CppClass *)aItem;
    sub_21FFBF4(v10 + 4, aItem);
  }
}


System_Collections_IEnumerator_o *AdjustSdk_JSONArray__GetEnumerator(
        AdjustSdk_JSONArray_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_59304E6 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONArray__GetEnumerator_d__14_TypeInfo);
    byte_59304E6 = 1;
  }
  v3 = sub_21FFEBC(AdjustSdk_JSONArray__GetEnumerator_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4(v3 + 32, this);
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

  if ( (byte_59304E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__get_Item__);
    byte_59304E3 = 1;
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
                                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_JSONNode__get_Item__);
  v6 = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( !v6 )
LABEL_10:
    sub_21FFECC(m_List, *(_QWORD *)&aIndex);
  v7 = (AdjustSdk_JSONNode_o *)m_List;
  System_Collections_Generic_List_object___RemoveAt(
    v6,
    aIndex,
    (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_JSONNode__RemoveAt__);
  return v7;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONArray__Remove_36737596(
        AdjustSdk_JSONArray_o *this,
        AdjustSdk_JSONNode_o *aNode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *m_List; // x0

  if ( (byte_59304E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__Remove__);
    byte_59304E4 = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  if ( !m_List )
    sub_21FFECC(0, aNode);
  System_Collections_Generic_List_object___Remove(
    m_List,
    (Il2CppObject *)aNode,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_JSONNode__Remove__);
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
  if ( (byte_59304E9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    this = (AdjustSdk_JSONArray_o *)sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__get_Item__);
    byte_59304E9 = 1;
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
    sub_21FFECC(this, aWriter);
  }
  v6 = 0;
  while ( v6 < SLODWORD(this[1].klass) )
  {
    this = (AdjustSdk_JSONArray_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)this,
                                      v6,
                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_JSONNode__get_Item__);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59304E7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    sub_21FFC50(&StringLiteral_16396/*"[ "*/);
    sub_21FFC50(&StringLiteral_870/*", "*/);
    sub_21FFC50(&StringLiteral_207/*" ]"*/);
    byte_59304E7 = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  memset(&v11, 0, sizeof(v11));
  if ( !m_List )
    sub_21FFECC(0, method);
  v4 = (System_String_o *)StringLiteral_16396/*"[ "*/;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    m_List,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
  while ( 1 )
  {
    v5 = (System_String_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v11,
                              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    if ( ((unsigned __int8)v5 & 1) == 0 )
      break;
    if ( !v4 )
      sub_21FFECC(v5, v6);
    current = v11.fields._current;
    if ( v4->fields._stringLength >= 3 )
    {
      v5 = System_String__Concat_75438412(v4, (System_String_o *)StringLiteral_870/*", "*/, 0);
      v8 = v5;
    }
    else
    {
      v8 = v4;
    }
    if ( !current )
      sub_21FFECC(v5, v6);
    v9 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[3].methodPtr)(
                              current,
                              current->klass->vtable[3].method);
    v4 = System_String__Concat_75438412(v8, v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
  return System_String__Concat_75438412(v4, (System_String_o *)StringLiteral_207/*" ]"*/, 0);
}


System_String_o *AdjustSdk_JSONArray__ToString_36738524(
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
  struct System_Collections_Generic_List_T__o *list; // x21
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_59304E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_115/*"   "*/);
    sub_21FFC50(&StringLiteral_16396/*"[ "*/);
    sub_21FFC50(&StringLiteral_870/*", "*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_59304E8 = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
  memset(&v16, 0, sizeof(v16));
  if ( !m_List )
    sub_21FFECC(0, aPrefix);
  v6 = (System_String_o *)StringLiteral_16396/*"[ "*/;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    m_List,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    if ( !v7 )
      break;
    if ( !v6 )
      sub_21FFECC(v7, v8);
    current = v16.fields._current;
    if ( v6->fields._stringLength >= 4 )
      v6 = System_String__Concat_75438412(v6, (System_String_o *)StringLiteral_870/*", "*/, 0);
    v10 = System_String__Concat_75483552(
            v6,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            aPrefix,
            (System_String_o *)StringLiteral_115/*"   "*/,
            0);
    v11 = System_String__Concat_75438412(aPrefix, (System_String_o *)StringLiteral_115/*"   "*/, 0);
    if ( !current )
      sub_21FFECC(v11, v11);
    v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))current->klass->vtable[17].methodPtr)(
                               current,
                               v11,
                               current->klass->vtable[17].method);
    v6 = System_String__Concat_75438412(v10, v12, 0);
  }
  list = v15.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v15.fields._index,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
  if ( list )
    sub_21FFEC4(list);
  return System_String__Concat_75483552(
           v6,
           (System_String_o *)StringLiteral_43/*"\n"*/,
           aPrefix,
           (System_String_o *)StringLiteral_16659/*"]"*/,
           0);
}


System_Collections_Generic_IEnumerable_JSONNode__o *AdjustSdk_JSONArray__get_Childs(
        AdjustSdk_JSONArray_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_59304E5 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONArray__get_Childs_d__13_TypeInfo);
    byte_59304E5 = 1;
  }
  v3 = sub_21FFEBC(AdjustSdk_JSONArray__get_Childs_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_21FFBF4(v3 + 40, this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)v3;
}


int32_t AdjustSdk_JSONArray__get_Count(AdjustSdk_JSONArray_o *this, const MethodInfo *method)
{
  AdjustSdk_JSONArray_o *v2; // x19
  struct System_Collections_Generic_List_JSONNode__o *m_List; // x8

  v2 = this;
  if ( (byte_59304E1 & 1) == 0 )
  {
    this = (AdjustSdk_JSONArray_o *)sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    byte_59304E1 = 1;
  }
  m_List = v2->fields.m_List;
  if ( !m_List )
    sub_21FFECC(this, method);
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

  if ( (byte_59304DD & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONLazyCreator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__get_Item__);
    byte_59304DD = 1;
  }
  if ( (aIndex & 0x80000000) == 0 )
  {
    m_List = (System_Collections_Generic_List_object__o *)this->fields.m_List;
    if ( !m_List )
      sub_21FFECC(0, *(_QWORD *)&aIndex);
    if ( m_List->fields._size > aIndex )
      return (AdjustSdk_JSONNode_o *)System_Collections_Generic_List_object___get_Item(
                                       m_List,
                                       aIndex,
                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_JSONNode__get_Item__);
  }
  v7 = (AdjustSdk_JSONLazyCreator_o *)sub_21FFEBC(AdjustSdk_JSONLazyCreator_TypeInfo);
  AdjustSdk_JSONLazyCreator___ctor(v7, (AdjustSdk_JSONNode_o *)this, v8);
  return (AdjustSdk_JSONNode_o *)v7;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONArray__get_Item_36736912(
        AdjustSdk_JSONArray_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  AdjustSdk_JSONLazyCreator_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_59304DF & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_59304DF = 1;
  }
  v4 = (AdjustSdk_JSONLazyCreator_o *)sub_21FFEBC(AdjustSdk_JSONLazyCreator_TypeInfo);
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
  AdjustSdk_JSONArray_o *v6; // x21
  System_Collections_Generic_List_object__o *m_List; // x8
  struct System_Object_array *items; // x9
  _QWORD *v9; // x10
  __int64 size; // x11
  Il2CppClass **v11; // x0

  v6 = this;
  if ( (byte_59304DE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__get_Count__);
    this = (AdjustSdk_JSONArray_o *)sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__set_Item__);
    byte_59304DE = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)v6->fields.m_List;
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
        (const MethodInfo_444F8B0 *)Method_System_Collections_Generic_List_JSONNode__set_Item__);
      return;
    }
  }
  items = m_List->fields._items;
  v9 = Method_System_Collections_Generic_List_JSONNode__Add__;
  ++m_List->fields._version;
  if ( !items )
LABEL_12:
    sub_21FFECC(this, *(_QWORD *)&aIndex);
  size = m_List->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      m_List,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    m_List->fields._size = size + 1;
    v11[4] = (Il2CppClass *)value;
    sub_21FFBF4(v11 + 4, value);
  }
}


void AdjustSdk_JSONArray__set_Item_36737000(
        AdjustSdk_JSONArray_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  AdjustSdk_JSONArray_o *v5; // x20
  System_Collections_Generic_List_object__o *m_List; // x8
  struct System_Object_array *items; // x9
  _QWORD *v8; // x10
  __int64 size; // x11
  Il2CppClass **v10; // x0

  v5 = this;
  if ( (byte_59304E0 & 1) == 0 )
  {
    this = (AdjustSdk_JSONArray_o *)sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__Add__);
    byte_59304E0 = 1;
  }
  m_List = (System_Collections_Generic_List_object__o *)v5->fields.m_List;
  if ( !m_List
    || (items = m_List->fields._items,
        v8 = Method_System_Collections_Generic_List_JSONNode__Add__,
        ++m_List->fields._version,
        !items) )
  {
    sub_21FFECC(this, aKey);
  }
  size = m_List->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      m_List,
      (Il2CppObject *)value,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    m_List->fields._size = size + 1;
    v10[4] = (Il2CppClass *)value;
    sub_21FFBF4(v10 + 4, value);
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
  Il2CppObject *current; // x8
  AdjustSdk_JSONArray__GetEnumerator_d__14_o *v7; // x9
  const MethodInfo *v8; // x1
  bool v9; // w8
  AdjustSdk_JSONArray__GetEnumerator_d__14_o *v10; // x0
  Il2CppObject *v11; // x1
  bool result; // w0
  AdjustSdk_JSONArray__GetEnumerator_d__14_o *v13; // x8
  __int64 v14; // x19
  System_Collections_Generic_List_Enumerator_T__o v15[2]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v16; // [xsp+40h] [xbp-30h]
  AdjustSdk_JSONArray__GetEnumerator_d__14_o **v17; // [xsp+48h] [xbp-28h] BYREF
  AdjustSdk_JSONArray__GetEnumerator_d__14_o *v18; // [xsp+58h] [xbp-18h] BYREF

  v18 = this;
  v2 = this;
  if ( (byte_59304EB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__get_Current__);
    this = (AdjustSdk_JSONArray__GetEnumerator_d__14_o *)sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    byte_59304EB = 1;
  }
  _1__state = v2->fields.__1__state;
  v16 = 0;
  v17 = &v18;
  if ( _1__state == 1 )
    goto LABEL_8;
  if ( !_1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    m_List = (System_Collections_Generic_List_object__o *)_4__this->fields.m_List;
    if ( !m_List )
      sub_21FFECC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v15,
      m_List,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    current = v15[0].fields._current;
    v7 = v18;
    v15[1] = v15[0];
    *(_OWORD *)&v18->fields.__7__wrap1.fields._list = *(_OWORD *)&v15[0].fields._list;
    v7->fields.__7__wrap1.fields._current = (struct AdjustSdk_JSONNode_o *)current;
    sub_21FFBF4(&v7->fields.__7__wrap1, 0);
    v2 = v18;
LABEL_8:
    v2->fields.__1__state = -3;
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    v10 = v18;
    if ( v9 )
    {
      v11 = (Il2CppObject *)v18->fields.__7__wrap1.fields._current;
      v18->fields.__2__current = v11;
      sub_21FFBF4(&v10->fields.__2__current, v11);
      result = 1;
      v18->fields.__1__state = 1;
    }
    else
    {
      AdjustSdk_JSONArray__GetEnumerator_d__14____m__Finally1(v18, v8);
      v13 = v18;
      result = 0;
      *(_QWORD *)&v18->fields.__7__wrap1.fields._index = 0;
      v13->fields.__7__wrap1.fields._current = 0;
      v13->fields.__7__wrap1.fields._list = 0;
    }
    goto LABEL_12;
  }
  result = 0;
LABEL_12:
  v14 = v16;
  if ( v16 )
  {
    sub_1FE6BAC(&v17);
    sub_21FFEC4(v14);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AdjustSdk_JSONArray__GetEnumerator_d__14_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  const MethodInfo_40C7F48 *v3; // x1

  if ( (byte_59304EC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
    byte_59304EC = 1;
  }
  v3 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    v3);
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
  Il2CppObject *current; // x8
  AdjustSdk_JSONArray__get_Childs_d__13_o *v7; // x9
  const MethodInfo *v8; // x1
  bool v9; // w8
  AdjustSdk_JSONArray__get_Childs_d__13_o *v10; // x0
  struct AdjustSdk_JSONNode_o *v11; // x1
  bool result; // w0
  AdjustSdk_JSONArray__get_Childs_d__13_o *v13; // x8
  __int64 v14; // x19
  System_Collections_Generic_List_Enumerator_T__o v15[2]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v16; // [xsp+40h] [xbp-30h]
  AdjustSdk_JSONArray__get_Childs_d__13_o **v17; // [xsp+48h] [xbp-28h] BYREF
  AdjustSdk_JSONArray__get_Childs_d__13_o *v18; // [xsp+58h] [xbp-18h] BYREF

  v18 = this;
  v2 = this;
  if ( (byte_59304ED & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__get_Current__);
    this = (AdjustSdk_JSONArray__get_Childs_d__13_o *)sub_21FFC50(&Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    byte_59304ED = 1;
  }
  _1__state = v2->fields.__1__state;
  v16 = 0;
  v17 = &v18;
  if ( _1__state == 1 )
    goto LABEL_8;
  if ( !_1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    m_List = (System_Collections_Generic_List_object__o *)_4__this->fields.m_List;
    if ( !m_List )
      sub_21FFECC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      v15,
      m_List,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_JSONNode__GetEnumerator__);
    current = v15[0].fields._current;
    v7 = v18;
    v15[1] = v15[0];
    *(_OWORD *)&v18->fields.__7__wrap1.fields._list = *(_OWORD *)&v15[0].fields._list;
    v7->fields.__7__wrap1.fields._current = (struct AdjustSdk_JSONNode_o *)current;
    sub_21FFBF4(&v7->fields.__7__wrap1, 0);
    v2 = v18;
LABEL_8:
    v2->fields.__1__state = -3;
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_JSONNode__MoveNext__);
    v10 = v18;
    if ( v9 )
    {
      v11 = v18->fields.__7__wrap1.fields._current;
      v18->fields.__2__current = v11;
      sub_21FFBF4(&v10->fields.__2__current, v11);
      result = 1;
      v18->fields.__1__state = 1;
    }
    else
    {
      AdjustSdk_JSONArray__get_Childs_d__13____m__Finally1(v18, v8);
      v13 = v18;
      result = 0;
      *(_QWORD *)&v18->fields.__7__wrap1.fields._index = 0;
      v13->fields.__7__wrap1.fields._current = 0;
      v13->fields.__7__wrap1.fields._list = 0;
    }
    goto LABEL_12;
  }
  result = 0;
LABEL_12:
  v14 = v16;
  if ( v16 )
  {
    sub_1FE6BCC(&v17);
    sub_21FFEC4(v14);
  }
  return result;
}


System_Collections_Generic_IEnumerator_JSONNode__o *AdjustSdk_JSONArray__get_Childs_d__13__System_Collections_Generic_IEnumerable_AdjustSdk_JSONNode__GetEnumerator(
        AdjustSdk_JSONArray__get_Childs_d__13_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct AdjustSdk_JSONArray_o *_4__this; // x1

  if ( (byte_59304EF & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONArray__get_Childs_d__13_TypeInfo);
    byte_59304EF = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(AdjustSdk_JSONArray__get_Childs_d__13_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_21FFBF4(v4 + 40, _4__this);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AdjustSdk_JSONArray__get_Childs_d__13_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  const MethodInfo_40C7F48 *v3; // x1

  if ( (byte_59304EE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__);
    byte_59304EE = 1;
  }
  v3 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_JSONNode__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    v3);
}


void AdjustSdk_JSONClass___ctor(AdjustSdk_JSONClass_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20

  if ( (byte_59304FE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__JSONNode__TypeInfo);
    byte_59304FE = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__JSONNode__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__JSONNode___ctor__);
  this->fields.m_Dict = (struct System_Collections_Generic_Dictionary_string__JSONNode__o *)v3;
  sub_21FFBF4(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustSdk_JSONClass__Add(
        AdjustSdk_JSONClass_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *aItem,
        const MethodInfo *method)
{
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x22
  const MethodInfo *v10; // x2
  bool v11; // w8
  System_Guid_o v12; // [xsp+0h] [xbp-40h] BYREF
  System_Guid_o v13; // 0:x0.16

  if ( (byte_59304F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
    byte_59304F5 = 1;
  }
  *(_QWORD *)&v12.fields._a = 0;
  *(_QWORD *)&v12.fields._d = 0;
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(aKey, 0);
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v12 = System_Guid__NewGuid(0);
    *(_QWORD *)&v13.fields._a = &v12;
    *(_QWORD *)&v13.fields._d = 0;
    IsNullOrEmpty = (Il2CppObject *)System_Guid__ToString(v13, v10);
    if ( m_Dict )
    {
      System_Collections_Generic_Dictionary_object__object___Add(
        m_Dict,
        IsNullOrEmpty,
        (Il2CppObject *)aItem,
        (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__);
      return;
    }
LABEL_12:
    sub_21FFECC(IsNullOrEmpty, v8);
  }
  if ( !m_Dict )
    goto LABEL_12;
  v11 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict,
          (Il2CppObject *)aKey,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
  IsNullOrEmpty = (Il2CppObject *)this->fields.m_Dict;
  if ( v11 )
  {
    if ( !IsNullOrEmpty )
      goto LABEL_12;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)IsNullOrEmpty,
      (Il2CppObject *)aKey,
      (Il2CppObject *)aItem,
      (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
  }
  else
  {
    if ( !IsNullOrEmpty )
      goto LABEL_12;
    System_Collections_Generic_Dictionary_object__object___Add(
      (System_Collections_Generic_Dictionary_object__object__o *)IsNullOrEmpty,
      (Il2CppObject *)aKey,
      (Il2CppObject *)aItem,
      (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__);
  }
}


System_Collections_IEnumerator_o *AdjustSdk_JSONClass__GetEnumerator(
        AdjustSdk_JSONClass_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_59304FA & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONClass__GetEnumerator_d__15_TypeInfo);
    byte_59304FA = 1;
  }
  v3 = sub_21FFEBC(AdjustSdk_JSONClass__GetEnumerator_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4(v3 + 32, this);
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

  if ( (byte_59304F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
    byte_59304F6 = 1;
  }
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          m_Dict,
          (Il2CppObject *)aKey,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__) )
    return 0;
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict
    || (m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              m_Dict,
                                                                              (Il2CppObject *)aKey,
                                                                              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__),
        (v6 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict) == 0) )
  {
LABEL_10:
    sub_21FFECC(m_Dict, aKey);
  }
  v7 = (AdjustSdk_JSONNode_o *)m_Dict;
  System_Collections_Generic_Dictionary_object__object___Remove(
    v6,
    (Il2CppObject *)aKey,
    (const MethodInfo_3FCB984 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__Remove_36742188(
        AdjustSdk_JSONClass_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  int32_t v3; // w20
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  System_Collections_Generic_KeyValuePair_object__object__o v6; // kr00_16
  Il2CppObject *value; // x19

  v3 = aIndex;
  if ( (byte_59304F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    byte_59304F7 = 1;
  }
  if ( v3 < 0 )
    return 0;
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         m_Dict,
         (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__) <= v3 )
    return 0;
  v6 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.m_Dict,
         v3,
         (const MethodInfo_3849724 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
  *(_QWORD *)&aIndex = v6.fields.value;
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
LABEL_10:
    sub_21FFECC(m_Dict, *(_QWORD *)&aIndex);
  value = v6.fields.value;
  System_Collections_Generic_Dictionary_object__object___Remove(
    m_Dict,
    v6.fields.key,
    (const MethodInfo_3FCB984 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
  return (AdjustSdk_JSONNode_o *)value;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__Remove_36742408(
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

  if ( (byte_59304F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_KeyValuePair_string__JSONNode____);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__JSONNode____);
    sub_21FFC50(&System_Func_KeyValuePair_string__JSONNode___bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_21FFC50(&Method_AdjustSdk_JSONClass___c__DisplayClass12_0__Remove_b__0__);
    sub_21FFC50(&AdjustSdk_JSONClass___c__DisplayClass12_0_TypeInfo);
    byte_59304F8 = 1;
  }
  v5 = sub_21FFEBC(AdjustSdk_JSONClass___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = aNode;
  sub_21FFBF4(v5 + 16, aNode);
  m_Dict = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.m_Dict;
  v9 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__JSONNode___bool__TypeInfo);
  System_Func_KeyValuePair_object__object___bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_AdjustSdk_JSONClass___c__DisplayClass12_0__Remove_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_KeyValuePair_object__object__(
          m_Dict,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_386F09C *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__JSONNode____);
  key = System_Linq_Enumerable__First_KeyValuePair_object__object__(
          v10,
          (const MethodInfo_384BEE0 *)Method_System_Linq_Enumerable_First_KeyValuePair_string__JSONNode____).fields.key;
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !v12 )
    sub_21FFECC(0, key);
  System_Collections_Generic_Dictionary_object__object___Remove(
    v12,
    key,
    (const MethodInfo_3FCB984 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Remove__);
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
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v11; // [xsp+18h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_59304FD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Keys__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__get_Current__);
    this = (AdjustSdk_JSONClass_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__JSONNode__GetEnumerator__);
    byte_59304FD = 1;
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
                  (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__),
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))aWriter->klass->vtable._17_Write.methodPtr)(
          aWriter,
          Count,
          aWriter->klass->vtable._17_Write.method),
        (this = (AdjustSdk_JSONClass_o *)v4->fields.m_Dict) == 0)
    || (this = (AdjustSdk_JSONClass_o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                          (System_Collections_Generic_Dictionary_object__object__o *)this,
                                          (const MethodInfo_3FCA130 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Keys__)) == 0 )
  {
    sub_21FFECC(this, aWriter);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
    (const MethodInfo_43555B8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__JSONNode__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v11,
            (const MethodInfo_41361C4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__MoveNext__) )
  {
    currentKey = v11.fields._currentKey;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))aWriter->klass->vtable._22_Write.methodPtr)(
      aWriter,
      v11.fields._currentKey,
      aWriter->klass->vtable._22_Write.method);
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.m_Dict;
    if ( !m_Dict )
      sub_21FFECC(0, v7);
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             m_Dict,
             currentKey,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
    if ( !Item )
      sub_21FFECC(0, v10);
    ((void (__fastcall *)(Il2CppObject *, System_IO_BinaryWriter_o *, const MethodInfo *))Item->klass->vtable[28].methodPtr)(
      Item,
      aWriter,
      Item->klass->vtable[28].method);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_41361C0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__JSONNode__Dispose__);
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
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *dictionary; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_59304FB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_26362/*"{"*/);
    sub_21FFC50(&StringLiteral_26607/*"}"*/);
    sub_21FFC50(&StringLiteral_870/*", "*/);
    sub_21FFC50(&StringLiteral_378/*"\":"*/);
    sub_21FFC50(&StringLiteral_366/*"\""*/);
    byte_59304FB = 1;
  }
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  memset(&v24, 0, sizeof(v24));
  if ( !m_Dict )
    sub_21FFECC(0, method);
  v4 = (System_String_o *)StringLiteral_26362/*"{"*/;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v23,
    m_Dict,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
  v24 = v23;
  v23.fields._dictionary = 0;
  *(_QWORD *)&v23.fields._version = &v24;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
           &v24,
           (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    if ( !v5 )
      break;
    if ( !v4 )
      sub_21FFECC(v5, v6);
    current = v24.fields._current;
    if ( v4->fields._stringLength >= 3 )
      v8 = System_String__Concat_75438412(v4, (System_String_o *)StringLiteral_870/*", "*/, 0);
    else
      v8 = v4;
    v9 = sub_21FFD10(string___TypeInfo, 5);
    v11 = v9;
    if ( !v9 )
      sub_21FFECC(0, v10);
    if ( !*(_DWORD *)(v9 + 24) )
      sub_21FFED4(v9);
    *(_QWORD *)(v9 + 32) = v8;
    v12 = sub_21FFBF4(v9 + 32, v8);
    if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
      sub_21FFED4(v12);
    v13 = StringLiteral_366/*"\""*/;
    *(_QWORD *)(v11 + 40) = StringLiteral_366/*"\""*/;
    sub_21FFBF4(v11 + 40, v13);
    v15 = AdjustSdk_JSONNode__Escape((System_String_o *)current.fields.key, v14);
    if ( *(_DWORD *)(v11 + 24) <= 2u )
      sub_21FFED4(v15);
    *(_QWORD *)(v11 + 48) = v15;
    v16 = sub_21FFBF4(v11 + 48, v15);
    if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0 )
      sub_21FFED4(v16);
    v17 = StringLiteral_378/*"\":"*/;
    *(_QWORD *)(v11 + 56) = StringLiteral_378/*"\":"*/;
    v18 = sub_21FFBF4(v11 + 56, v17);
    if ( !current.fields.value )
      sub_21FFECC(v18, v19);
    v20 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
            current.fields.value,
            current.fields.value->klass->vtable[3].method);
    if ( *(_DWORD *)(v11 + 24) <= 4u )
      sub_21FFED4(v20);
    *(_QWORD *)(v11 + 64) = v20;
    sub_21FFBF4(v11 + 64, v20);
    v4 = System_String__Concat_75483816((System_String_array *)v11, 0);
  }
  dictionary = v23.fields._dictionary;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o **)&v23.fields._version,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
  if ( dictionary )
    sub_21FFEC4(dictionary);
  return System_String__Concat_75438412(v4, (System_String_o *)StringLiteral_26607/*"}"*/, 0);
}


System_String_o *AdjustSdk_JSONClass__ToString_36743944(
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
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *dictionary; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_59304FC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_115/*"   "*/);
    sub_21FFC50(&StringLiteral_26607/*"}"*/);
    sub_21FFC50(&StringLiteral_870/*", "*/);
    sub_21FFC50(&StringLiteral_368/*"\" : "*/);
    sub_21FFC50(&StringLiteral_26363/*"{ "*/);
    sub_21FFC50(&StringLiteral_366/*"\""*/);
    byte_59304FC = 1;
  }
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  memset(&v25, 0, sizeof(v25));
  if ( !m_Dict )
    sub_21FFECC(0, aPrefix);
  v6 = (System_String_o *)StringLiteral_26363/*"{ "*/;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v24,
    m_Dict,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
  v25 = v24;
  v24.fields._dictionary = 0;
  *(_QWORD *)&v24.fields._version = &v25;
  while ( 1 )
  {
    v7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
           &v25,
           (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    if ( !v7 )
      break;
    if ( !v6 )
      sub_21FFECC(v7, v8);
    current = v25.fields._current;
    if ( v6->fields._stringLength >= 4 )
      v6 = System_String__Concat_75438412(v6, (System_String_o *)StringLiteral_870/*", "*/, 0);
    v10 = System_String__Concat_75483552(
            v6,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            aPrefix,
            (System_String_o *)StringLiteral_115/*"   "*/,
            0);
    v11 = sub_21FFD10(string___TypeInfo, 5);
    v13 = v11;
    if ( !v11 )
      sub_21FFECC(0, v12);
    if ( !*(_DWORD *)(v11 + 24) )
      sub_21FFED4(v11);
    *(_QWORD *)(v11 + 32) = v10;
    v14 = sub_21FFBF4(v11 + 32, v10);
    if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFFE) == 0 )
      sub_21FFED4(v14);
    v15 = StringLiteral_366/*"\""*/;
    *(_QWORD *)(v13 + 40) = StringLiteral_366/*"\""*/;
    sub_21FFBF4(v13 + 40, v15);
    v17 = AdjustSdk_JSONNode__Escape((System_String_o *)current.fields.key, v16);
    if ( *(_DWORD *)(v13 + 24) <= 2u )
      sub_21FFED4(v17);
    *(_QWORD *)(v13 + 48) = v17;
    v18 = sub_21FFBF4(v13 + 48, v17);
    if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFFC) == 0 )
      sub_21FFED4(v18);
    v19 = StringLiteral_368/*"\" : "*/;
    *(_QWORD *)(v13 + 56) = StringLiteral_368/*"\" : "*/;
    sub_21FFBF4(v13 + 56, v19);
    v20 = System_String__Concat_75438412(aPrefix, (System_String_o *)StringLiteral_115/*"   "*/, 0);
    if ( !current.fields.value )
      sub_21FFECC(v20, v20);
    v21 = ((__int64 (__fastcall *)(Il2CppObject *, System_String_o *, const MethodInfo *))current.fields.value->klass->vtable[17].methodPtr)(
            current.fields.value,
            v20,
            current.fields.value->klass->vtable[17].method);
    if ( *(_DWORD *)(v13 + 24) <= 4u )
      sub_21FFED4(v21);
    *(_QWORD *)(v13 + 64) = v21;
    sub_21FFBF4(v13 + 64, v21);
    v6 = System_String__Concat_75483816((System_String_array *)v13, 0);
  }
  dictionary = v24.fields._dictionary;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o **)&v24.fields._version,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
  if ( dictionary )
    sub_21FFEC4(dictionary);
  return System_String__Concat_75483552(
           v6,
           (System_String_o *)StringLiteral_43/*"\n"*/,
           aPrefix,
           (System_String_o *)StringLiteral_26607/*"}"*/,
           0);
}


System_Collections_Generic_IEnumerable_JSONNode__o *AdjustSdk_JSONClass__get_Childs(
        AdjustSdk_JSONClass_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_59304F9 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONClass__get_Childs_d__14_TypeInfo);
    byte_59304F9 = 1;
  }
  v3 = sub_21FFEBC(AdjustSdk_JSONClass__get_Childs_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_21FFBF4(v3 + 40, this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)v3;
}


int32_t AdjustSdk_JSONClass__get_Count(AdjustSdk_JSONClass_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0

  if ( (byte_59304F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    byte_59304F4 = 1;
  }
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    sub_21FFECC(0, method);
  return System_Collections_Generic_Dictionary_object__object___get_Count(
           m_Dict,
           (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__get_Item(
        AdjustSdk_JSONClass_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  AdjustSdk_JSONLazyCreator_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_59304F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
    sub_21FFC50(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_59304F0 = 1;
  }
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         m_Dict,
         (Il2CppObject *)aKey,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__) )
  {
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
    if ( m_Dict )
      return (AdjustSdk_JSONNode_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       m_Dict,
                                       (Il2CppObject *)aKey,
                                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Item__);
LABEL_8:
    sub_21FFECC(m_Dict, aKey);
  }
  v7 = (AdjustSdk_JSONLazyCreator_o *)sub_21FFEBC(AdjustSdk_JSONLazyCreator_TypeInfo);
  AdjustSdk_JSONLazyCreator___ctor_36740944(v7, (AdjustSdk_JSONNode_o *)this, aKey, v8);
  return (AdjustSdk_JSONNode_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
AdjustSdk_JSONNode_o *AdjustSdk_JSONClass__get_Item_36741216(
        AdjustSdk_JSONClass_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0

  if ( (byte_59304F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    byte_59304F2 = 1;
  }
  if ( aIndex < 0 )
    return 0;
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    sub_21FFECC(0, *(_QWORD *)&aIndex);
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         m_Dict,
         (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__) <= aIndex )
    return 0;
  else
    return (AdjustSdk_JSONNode_o *)System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)this[16],
                                     aIndex,
                                     (const MethodInfo_3849724 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____).fields.value;
}


void AdjustSdk_JSONClass__set_Item(
        AdjustSdk_JSONClass_o *this,
        System_String_o *aKey,
        AdjustSdk_JSONNode_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *m_Dict; // x0
  bool v8; // w8

  if ( (byte_59304F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
    byte_59304F1 = 1;
  }
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( !m_Dict )
    goto LABEL_9;
  v8 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         m_Dict,
         (Il2CppObject *)aKey,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__JSONNode__ContainsKey__);
  m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
  if ( v8 )
  {
    if ( m_Dict )
    {
      System_Collections_Generic_Dictionary_object__object___set_Item(
        m_Dict,
        (Il2CppObject *)aKey,
        (Il2CppObject *)value,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
      return;
    }
LABEL_9:
    sub_21FFECC(m_Dict, aKey);
  }
  if ( !m_Dict )
    goto LABEL_9;
  System_Collections_Generic_Dictionary_object__object___Add(
    m_Dict,
    (Il2CppObject *)aKey,
    (Il2CppObject *)value,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__Add__);
}


// local variable allocation has failed, the output may be wrong!
void AdjustSdk_JSONClass__set_Item_36741376(
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
  if ( (byte_59304F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Key__);
    byte_59304F3 = 1;
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
    if ( !m_Dict )
      goto LABEL_9;
    if ( System_Collections_Generic_Dictionary_object__object___get_Count(
           m_Dict,
           (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__get_Count__) > v5 )
    {
      v8 = System_Linq_Enumerable__ElementAt_KeyValuePair_object__object__(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.m_Dict,
             v5,
             (const MethodInfo_3849724 *)Method_System_Linq_Enumerable_ElementAt_KeyValuePair_string__JSONNode____);
      *(_QWORD *)&aIndex = v8.fields.value;
      m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)v8.fields.key;
      v9 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.m_Dict;
      if ( v9 )
      {
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v9,
          v8.fields.key,
          (Il2CppObject *)value,
          (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__JSONNode__set_Item__);
        return;
      }
LABEL_9:
      sub_21FFECC(m_Dict, *(_QWORD *)&aIndex);
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
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  __int64 v7; // x8
  AdjustSdk_JSONClass__GetEnumerator_d__15_o *v8; // x9
  const MethodInfo *v9; // x1
  Il2CppObject *v10; // x1
  AdjustSdk_JSONClass__GetEnumerator_d__15_o *v11; // x0
  bool result; // w0
  AdjustSdk_JSONClass__GetEnumerator_d__15_o *v13; // x8
  __int64 v14; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-60h] BYREF
  __int64 v17; // [xsp+60h] [xbp-30h]
  AdjustSdk_JSONClass__GetEnumerator_d__15_o **v18; // [xsp+68h] [xbp-28h] BYREF
  AdjustSdk_JSONClass__GetEnumerator_d__15_o *v19; // [xsp+78h] [xbp-18h] BYREF

  v19 = this;
  v2 = this;
  if ( (byte_5930500 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__get_Current__);
    this = (AdjustSdk_JSONClass__GetEnumerator_d__15_o *)sub_21FFC50(&System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo);
    byte_5930500 = 1;
  }
  _1__state = v2->fields.__1__state;
  v17 = 0;
  v18 = &v19;
  if ( _1__state == 1 )
    goto LABEL_8;
  if ( !_1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.m_Dict;
    if ( !m_Dict )
      sub_21FFECC(0, method);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v15,
      m_Dict,
      (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    current = v15.fields._current;
    v7 = *(_QWORD *)&v15.fields._getEnumeratorRetType;
    v8 = v19;
    v16 = v15;
    *(_OWORD *)&v19->fields.__7__wrap1.fields._dictionary = *(_OWORD *)&v15.fields._dictionary;
    v8->fields.__7__wrap1.fields._current = current;
    *(_QWORD *)&v8->fields.__7__wrap1.fields._getEnumeratorRetType = v7;
    sub_21FFBF4(&v8->fields.__7__wrap1, 0);
    v2 = v19;
LABEL_8:
    v2->fields.__1__state = -3;
    if ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
           (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
           (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__) )
    {
      *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&v16.fields._dictionary = v19->fields.__7__wrap1.fields._current;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(
                              System_Collections_Generic_KeyValuePair_string__JSONNode__TypeInfo,
                              &v16);
      v11 = v19;
      v19->fields.__2__current = v10;
      sub_21FFBF4(&v11->fields.__2__current, v10);
      result = 1;
      v19->fields.__1__state = 1;
    }
    else
    {
      AdjustSdk_JSONClass__GetEnumerator_d__15____m__Finally1(v19, v9);
      v13 = v19;
      result = 0;
      *(_QWORD *)&v19->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
      *(_OWORD *)&v13->fields.__7__wrap1.fields._dictionary = 0u;
      v13->fields.__7__wrap1.fields._current = 0u;
    }
    goto LABEL_12;
  }
  result = 0;
LABEL_12:
  v14 = v17;
  if ( v17 )
  {
    sub_1FE6BEC(&v18);
    sub_21FFEC4(v14);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AdjustSdk_JSONClass__GetEnumerator_d__15_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  const MethodInfo_4135634 *v3; // x1

  if ( (byte_5930501 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
    byte_5930501 = 1;
  }
  v3 = (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    v3);
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
  if ( (byte_59304FF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    byte_59304FF = 1;
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
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  __int64 v7; // x8
  AdjustSdk_JSONClass__get_Childs_d__14_o *v8; // x9
  const MethodInfo *v9; // x1
  bool v10; // w8
  AdjustSdk_JSONClass__get_Childs_d__14_o *v11; // x0
  Il2CppObject *value; // x1
  bool result; // w0
  AdjustSdk_JSONClass__get_Childs_d__14_o *v14; // x8
  __int64 v15; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16[2]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v17; // [xsp+60h] [xbp-30h]
  AdjustSdk_JSONClass__get_Childs_d__14_o **v18; // [xsp+68h] [xbp-28h] BYREF
  AdjustSdk_JSONClass__get_Childs_d__14_o *v19; // [xsp+78h] [xbp-18h] BYREF

  v19 = this;
  v2 = this;
  if ( (byte_5930502 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__get_Current__);
    this = (AdjustSdk_JSONClass__get_Childs_d__14_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__JSONNode__get_Value__);
    byte_5930502 = 1;
  }
  _1__state = v2->fields.__1__state;
  v17 = 0;
  v18 = &v19;
  if ( _1__state == 1 )
    goto LABEL_8;
  if ( !_1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    m_Dict = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.m_Dict;
    if ( !m_Dict )
      sub_21FFECC(0, method);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      v16,
      m_Dict,
      (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__JSONNode__GetEnumerator__);
    current = v16[0].fields._current;
    v7 = *(_QWORD *)&v16[0].fields._getEnumeratorRetType;
    v8 = v19;
    v16[1] = v16[0];
    *(_OWORD *)&v19->fields.__7__wrap1.fields._dictionary = *(_OWORD *)&v16[0].fields._dictionary;
    v8->fields.__7__wrap1.fields._current = current;
    *(_QWORD *)&v8->fields.__7__wrap1.fields._getEnumeratorRetType = v7;
    sub_21FFBF4(&v8->fields.__7__wrap1, 0);
    v2 = v19;
LABEL_8:
    v2->fields.__1__state = -3;
    v10 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__MoveNext__);
    v11 = v19;
    if ( v10 )
    {
      value = v19->fields.__7__wrap1.fields._current.fields.value;
      v19->fields.__2__current = (struct AdjustSdk_JSONNode_o *)value;
      sub_21FFBF4(&v11->fields.__2__current, value);
      result = 1;
      v19->fields.__1__state = 1;
    }
    else
    {
      AdjustSdk_JSONClass__get_Childs_d__14____m__Finally1(v19, v9);
      v14 = v19;
      result = 0;
      *(_QWORD *)&v19->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
      *(_OWORD *)&v14->fields.__7__wrap1.fields._dictionary = 0u;
      v14->fields.__7__wrap1.fields._current = 0u;
    }
    goto LABEL_12;
  }
  result = 0;
LABEL_12:
  v15 = v17;
  if ( v17 )
  {
    sub_1FE6C0C(&v18);
    sub_21FFEC4(v15);
  }
  return result;
}


System_Collections_Generic_IEnumerator_JSONNode__o *AdjustSdk_JSONClass__get_Childs_d__14__System_Collections_Generic_IEnumerable_AdjustSdk_JSONNode__GetEnumerator(
        AdjustSdk_JSONClass__get_Childs_d__14_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct AdjustSdk_JSONClass_o *_4__this; // x1

  if ( (byte_5930504 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONClass__get_Childs_d__14_TypeInfo);
    byte_5930504 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(AdjustSdk_JSONClass__get_Childs_d__14_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_21FFBF4(v4 + 40, _4__this);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AdjustSdk_JSONClass__get_Childs_d__14_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  const MethodInfo_4135634 *v3; // x1

  if ( (byte_5930503 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__);
    byte_5930503 = 1;
  }
  v3 = (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    v3);
}


void AdjustSdk_JSONData___ctor(AdjustSdk_JSONData_o *this, System_String_o *aData, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.m_Data = aData;
  sub_21FFBF4(&this->fields, aData);
}


void AdjustSdk_JSONData___ctor_36733324(AdjustSdk_JSONData_o *this, int32_t aData, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, _QWORD, const MethodInfo *))this->klass->vtable._19_set_AsInt.methodPtr)(
    this,
    (unsigned int)aData,
    this->klass->vtable._19_set_AsInt.method);
}


void AdjustSdk_JSONData___ctor_36733380(AdjustSdk_JSONData_o *this, double aData, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *, double))this->klass->vtable._23_set_AsDouble.methodPtr)(
    this,
    this->klass->vtable._23_set_AsDouble.method,
    aData);
}


void AdjustSdk_JSONData___ctor_36733436(AdjustSdk_JSONData_o *this, bool aData, const MethodInfo *method)
{
  _BOOL4 v3; // w19

  v3 = aData;
  System_Object___ctor((Il2CppObject *)this, 0);
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, _BOOL4, const MethodInfo *))this->klass->vtable._25_set_AsBool.methodPtr)(
    this,
    v3,
    this->klass->vtable._25_set_AsBool.method);
}


void AdjustSdk_JSONData___ctor_36733492(AdjustSdk_JSONData_o *this, float aData, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *, float))this->klass->vtable._21_set_AsFloat.methodPtr)(
    this,
    this->klass->vtable._21_set_AsFloat.method,
    aData);
}


void AdjustSdk_JSONData__Serialize(
        AdjustSdk_JSONData_o *this,
        System_IO_BinaryWriter_o *aWriter,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x22
  System_String_o **v7; // x21
  unsigned int v8; // w0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  Il2CppMethodPointer methodPtr; // x3
  char v14; // w0

  if ( (byte_5930507 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5930507 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  v7 = (System_String_o **)v5;
  System_Object___ctor(v5, 0);
  v7[2] = v6;
  sub_21FFBF4(v7 + 2, v6);
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
      v12 = aWriter->klass->vtable._17_Write.method;
      methodPtr = aWriter->klass->vtable._17_Write.methodPtr;
LABEL_6:
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))methodPtr)(aWriter, v11, v12);
      return;
    }
    goto LABEL_18;
  }
  ((void (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._20_get_AsFloat.methodPtr)(
    this,
    this->klass->vtable._20_get_AsFloat.method);
  ((void (__fastcall *)(System_String_o **, void *))(*v7)[27].klass)(v7, (*v7)[27].monitor);
  v9 = System_String__op_Equality(v7[2], this->fields.m_Data, 0);
  if ( v9 )
  {
    if ( !aWriter )
      goto LABEL_18;
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
        goto LABEL_18;
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
      if ( v9 )
      {
        if ( aWriter )
        {
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))aWriter->klass->vtable._9_Write.methodPtr)(
            aWriter,
            6,
            aWriter->klass->vtable._9_Write.method);
          v11 = ((__int64 (__fastcall *)(AdjustSdk_JSONData_o *, const MethodInfo *))this->klass->vtable._24_get_AsBool.methodPtr)(
                  this,
                  this->klass->vtable._24_get_AsBool.method)
              & 1;
          methodPtr = aWriter->klass->vtable._8_Write.methodPtr;
          v12 = aWriter->klass->vtable._8_Write.method;
          goto LABEL_6;
        }
LABEL_18:
        sub_21FFECC(v9, v10);
      }
      if ( !aWriter )
        goto LABEL_18;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, const MethodInfo *))aWriter->klass->vtable._9_Write.methodPtr)(
        aWriter,
        3,
        aWriter->klass->vtable._9_Write.method);
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

  if ( (byte_5930505 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_366/*"\""*/);
    byte_5930505 = 1;
  }
  v3 = AdjustSdk_JSONNode__Escape(this->fields.m_Data, method);
  return System_String__Concat_75481624(
           (System_String_o *)StringLiteral_366/*"\""*/,
           v3,
           (System_String_o *)StringLiteral_366/*"\""*/,
           0);
}


System_String_o *AdjustSdk_JSONData__ToString_36747080(
        AdjustSdk_JSONData_o *this,
        System_String_o *aPrefix,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_5930506 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_366/*"\""*/);
    byte_5930506 = 1;
  }
  v4 = AdjustSdk_JSONNode__Escape(this->fields.m_Data, (const MethodInfo *)aPrefix);
  return System_String__Concat_75481624(
           (System_String_o *)StringLiteral_366/*"\""*/,
           v4,
           (System_String_o *)StringLiteral_366/*"\""*/,
           0);
}


System_String_o *AdjustSdk_JSONData__get_Value(AdjustSdk_JSONData_o *this, const MethodInfo *method)
{
  return this->fields.m_Data;
}


void AdjustSdk_JSONData__set_Value(AdjustSdk_JSONData_o *this, System_String_o *value, const MethodInfo *method)
{
  this->fields.m_Data = value;
  sub_21FFBF4(&this->fields, value);
}


void AdjustSdk_JSONLazyCreator___ctor(
        AdjustSdk_JSONLazyCreator_o *this,
        AdjustSdk_JSONNode_o *aNode,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.m_Node = aNode;
  sub_21FFBF4(&this->fields, aNode);
  this->fields.m_Key = 0;
  sub_21FFBF4(&this->fields.m_Key, 0);
}


void AdjustSdk_JSONLazyCreator___ctor_36740944(
        AdjustSdk_JSONLazyCreator_o *this,
        AdjustSdk_JSONNode_o *aNode,
        System_String_o *aKey,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.m_Node = aNode;
  sub_21FFBF4(&this->fields, aNode);
  this->fields.m_Key = aKey;
  sub_21FFBF4(&this->fields.m_Key, aKey);
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

  if ( (byte_593050C & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONArray_TypeInfo);
    byte_593050C = 1;
  }
  v5 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v5, v6);
  if ( !v5 )
    sub_21FFECC(v7, v8);
  ((void (__fastcall *)(AdjustSdk_JSONArray_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))v5->klass->vtable._12_Add.methodPtr)(
    v5,
    aItem,
    v5->klass->vtable._12_Add.method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v5, v9);
}


void AdjustSdk_JSONLazyCreator__Add_36748572(
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

  if ( (byte_593050D & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONClass_TypeInfo);
    byte_593050D = 1;
  }
  v7 = (AdjustSdk_JSONClass_o *)sub_21FFEBC(AdjustSdk_JSONClass_TypeInfo);
  AdjustSdk_JSONClass___ctor(v7, v8);
  if ( !v7 )
    sub_21FFECC(v9, v10);
  ((void (__fastcall *)(AdjustSdk_JSONClass_o *, System_String_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))v7->klass->vtable._4_Add.methodPtr)(
    v7,
    aKey,
    aItem,
    v7->klass->vtable._4_Add.method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v7, v11);
}


bool AdjustSdk_JSONLazyCreator__Equals(AdjustSdk_JSONLazyCreator_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  return !obj || this == (AdjustSdk_JSONLazyCreator_o *)obj;
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
  struct System_String_o *m_Key; // x8
  AdjustSdk_JSONLazyCreator_Fields *p_fields; // t2

  p_fields = &this->fields;
  m_Node = this->fields.m_Node;
  m_Key = p_fields->m_Key;
  if ( !m_Key )
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
    sub_21FFECC(m_Node, aVal);
  }
  if ( !m_Node )
    goto LABEL_7;
  ((void (__fastcall *)(struct AdjustSdk_JSONNode_o *, struct System_String_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))m_Node->klass->vtable._4_Add.methodPtr)(
    m_Node,
    m_Key,
    aVal,
    m_Node->klass->vtable._4_Add.method);
LABEL_6:
  this->fields.m_Node = 0;
  sub_21FFBF4(&this->fields, 0);
}


System_String_o *AdjustSdk_JSONLazyCreator__ToString(AdjustSdk_JSONLazyCreator_o *this, const MethodInfo *method)
{
  if ( (byte_593050E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593050E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *AdjustSdk_JSONLazyCreator__ToString_36748828(
        AdjustSdk_JSONLazyCreator_o *this,
        System_String_o *aPrefix,
        const MethodInfo *method)
{
  if ( (byte_593050F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593050F = 1;
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

  if ( (byte_5930518 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONArray_TypeInfo);
    byte_5930518 = 1;
  }
  v3 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v3, v4);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v3, v5);
  return v3;
}


bool AdjustSdk_JSONLazyCreator__get_AsBool(AdjustSdk_JSONLazyCreator_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5930516 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_5930516 = 1;
  }
  v3 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
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

  if ( (byte_5930514 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_5930514 = 1;
  }
  v3 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
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

  if ( (byte_5930512 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_5930512 = 1;
  }
  v3 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v3, 0);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, double))v3->klass->vtable[21].methodPtr)(
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

  if ( (byte_5930510 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_5930510 = 1;
  }
  v3 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
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

  if ( (byte_5930519 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONClass_TypeInfo);
    byte_5930519 = 1;
  }
  v3 = (AdjustSdk_JSONClass_o *)sub_21FFEBC(AdjustSdk_JSONClass_TypeInfo);
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

  if ( (byte_5930508 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_5930508 = 1;
  }
  v4 = (AdjustSdk_JSONLazyCreator_o *)sub_21FFEBC(AdjustSdk_JSONLazyCreator_TypeInfo);
  AdjustSdk_JSONLazyCreator___ctor(v4, (AdjustSdk_JSONNode_o *)this, v5);
  return (AdjustSdk_JSONNode_o *)v4;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONLazyCreator__get_Item_36748204(
        AdjustSdk_JSONLazyCreator_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  AdjustSdk_JSONLazyCreator_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_593050A & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_593050A = 1;
  }
  v5 = (AdjustSdk_JSONLazyCreator_o *)sub_21FFEBC(AdjustSdk_JSONLazyCreator_TypeInfo);
  AdjustSdk_JSONLazyCreator___ctor_36740944(v5, (AdjustSdk_JSONNode_o *)this, aKey, v6);
  return (AdjustSdk_JSONNode_o *)v5;
}


bool AdjustSdk_JSONLazyCreator__op_Equality(AdjustSdk_JSONLazyCreator_o *a, Il2CppObject *b, const MethodInfo *method)
{
  return !b || a == (AdjustSdk_JSONLazyCreator_o *)b;
}


bool AdjustSdk_JSONLazyCreator__op_Inequality(
        AdjustSdk_JSONLazyCreator_o *a,
        Il2CppObject *b,
        const MethodInfo *method)
{
  bool v3; // zf

  if ( b )
    v3 = a == (AdjustSdk_JSONLazyCreator_o *)b;
  else
    v3 = 1;
  return !v3;
}


void AdjustSdk_JSONLazyCreator__set_AsBool(AdjustSdk_JSONLazyCreator_o *this, bool value, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_5930517 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_5930517 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v5, 0);
  ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))v5->klass->vtable[25].methodPtr)(
    v5,
    value,
    v5->klass->vtable[25].method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v5, v6);
}


void AdjustSdk_JSONLazyCreator__set_AsDouble(AdjustSdk_JSONLazyCreator_o *this, double value, const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_5930515 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_5930515 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v5, 0);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, double))v5->klass->vtable[23].methodPtr)(
    v5,
    v5->klass->vtable[23].method,
    value);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v5, v6);
}


void AdjustSdk_JSONLazyCreator__set_AsFloat(AdjustSdk_JSONLazyCreator_o *this, float value, const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_5930513 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_5930513 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v5, 0);
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))v5->klass->vtable[21].methodPtr)(
    v5,
    v5->klass->vtable[21].method,
    value);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v5, v6);
}


void AdjustSdk_JSONLazyCreator__set_AsInt(AdjustSdk_JSONLazyCreator_o *this, int32_t value, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_5930511 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_5930511 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
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

  if ( (byte_5930509 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONArray_TypeInfo);
    byte_5930509 = 1;
  }
  v6 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONArray_TypeInfo);
  AdjustSdk_JSONArray___ctor(v6, v7);
  if ( !v6 )
    sub_21FFECC(v8, v9);
  ((void (__fastcall *)(AdjustSdk_JSONArray_o *, AdjustSdk_JSONNode_o *, const MethodInfo *))v6->klass->vtable._12_Add.methodPtr)(
    v6,
    value,
    v6->klass->vtable._12_Add.method);
  AdjustSdk_JSONLazyCreator__Set(this, (AdjustSdk_JSONNode_o *)v6, v10);
}


void AdjustSdk_JSONLazyCreator__set_Item_36748308(
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

  if ( (byte_593050B & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONClass_TypeInfo);
    byte_593050B = 1;
  }
  v7 = (AdjustSdk_JSONClass_o *)sub_21FFEBC(AdjustSdk_JSONClass_TypeInfo);
  AdjustSdk_JSONClass___ctor(v7, v8);
  if ( !v7 )
    sub_21FFECC(v9, v10);
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


void AdjustSdk_JSONNode__Add_36727868(
        AdjustSdk_JSONNode_o *this,
        AdjustSdk_JSONNode_o *aItem,
        const MethodInfo *method)
{
  if ( (byte_59304C8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59304C8 = 1;
  }
  ((void (__fastcall *)(AdjustSdk_JSONNode_o *, void *, AdjustSdk_JSONNode_o *, const MethodInfo *))this->klass->vtable._4_Add.methodPtr)(
    this,
    StringLiteral_1/*""*/,
    aItem,
    this->klass->vtable._4_Add.method);
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__Deserialize(System_IO_BinaryReader_o *aReader, const MethodInfo *method)
{
  System_IO_BinaryReader_o *v2; // x19
  unsigned __int8 v3; // w0
  double v4; // d8
  AdjustSdk_JSONArray_o *v5; // x20
  __int64 v6; // x19
  float v7; // s8
  int v8; // w21
  const MethodInfo *v9; // x1
  __int64 v10; // x22
  const MethodInfo *v11; // x1
  int v12; // w21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  unsigned int v15; // w19
  char v16; // w19
  System_String_o *v18; // x19
  System_String_o *v19; // x0
  System_String_o *v20; // x19
  __int64 v21; // x0
  System_Exception_o *v22; // x20
  __int64 v23; // x0
  System_Enum_o v24; // [xsp+8h] [xbp-48h] BYREF
  int v25; // [xsp+18h] [xbp-38h]

  v2 = aReader;
  if ( (byte_59304D5 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONArray_TypeInfo);
    sub_21FFC50(&AdjustSdk_JSONClass_TypeInfo);
    aReader = (System_IO_BinaryReader_o *)sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_59304D5 = 1;
  }
  if ( !v2 )
    goto LABEL_27;
  v3 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._10_ReadByte.methodPtr)(
         v2,
         v2->klass->vtable._10_ReadByte.method);
  if ( v3 <= 3u )
  {
    switch ( v3 )
    {
      case 1u:
        v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._15_ReadInt32.methodPtr)(
                v2,
                v2->klass->vtable._15_ReadInt32.method);
        v5 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONArray_TypeInfo);
        AdjustSdk_JSONArray___ctor(v5, v13);
        if ( v12 < 1 )
          return (AdjustSdk_JSONNode_o *)v5;
        while ( 1 )
        {
          aReader = (System_IO_BinaryReader_o *)AdjustSdk_JSONNode__Deserialize(v2, v14);
          if ( !v5 )
            break;
          ((void (__fastcall *)(AdjustSdk_JSONArray_o *, System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._12_Add.methodPtr)(
            v5,
            aReader,
            v5->klass->vtable._12_Add.method);
          if ( !--v12 )
            return (AdjustSdk_JSONNode_o *)v5;
        }
        break;
      case 2u:
        v8 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._15_ReadInt32.methodPtr)(
               v2,
               v2->klass->vtable._15_ReadInt32.method);
        v5 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONClass_TypeInfo);
        AdjustSdk_JSONClass___ctor((AdjustSdk_JSONClass_o *)v5, v9);
        if ( v8 < 1 )
          return (AdjustSdk_JSONNode_o *)v5;
        while ( 1 )
        {
          v10 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._22_ReadString.methodPtr)(
                  v2,
                  v2->klass->vtable._22_ReadString.method);
          aReader = (System_IO_BinaryReader_o *)AdjustSdk_JSONNode__Deserialize(v2, v11);
          if ( !v5 )
            break;
          ((void (__fastcall *)(AdjustSdk_JSONArray_o *, __int64, System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._4_Add.methodPtr)(
            v5,
            v10,
            aReader,
            v5->klass->vtable._4_Add.method);
          if ( !--v8 )
            return (AdjustSdk_JSONNode_o *)v5;
        }
        break;
      case 3u:
        v6 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._22_ReadString.methodPtr)(
               v2,
               v2->klass->vtable._22_ReadString.method);
        v5 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v5, 0);
        v5->fields.m_List = (struct System_Collections_Generic_List_JSONNode__o *)v6;
        sub_21FFBF4(&v5->fields, v6);
        return (AdjustSdk_JSONNode_o *)v5;
      default:
LABEL_28:
        v25 = v3;
        v24.klass = (System_Enum_c *)sub_21FFC64(&AdjustSdk_JSONBinaryTag_TypeInfo);
        v24.monitor = (void *)-1LL;
        v18 = System_Enum__ToString(&v24, 0);
        v19 = (System_String_o *)sub_21FFC64(&StringLiteral_6374/*"Error deserializing JSON. Unknown tag: "*/);
        v20 = System_String__Concat_75438412(v19, v18, 0);
        v21 = sub_21FFC64(&System_Exception_TypeInfo);
        v22 = (System_Exception_o *)sub_21FFEBC(v21);
        System_Exception___ctor_77161964(v22, v20, 0);
        v23 = sub_21FFC64(&Method_AdjustSdk_JSONNode_Deserialize__);
        sub_21FFD90(v22, v23);
    }
LABEL_27:
    sub_21FFECC(aReader, method);
  }
  if ( v3 > 5u )
  {
    if ( v3 == 6 )
    {
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._9_ReadBoolean.methodPtr)(
              v2,
              v2->klass->vtable._9_ReadBoolean.method);
      v5 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      ((void (__fastcall *)(AdjustSdk_JSONArray_o *, _QWORD, const MethodInfo *))v5->klass->vtable._25_set_AsBool.methodPtr)(
        v5,
        v16 & 1,
        v5->klass->vtable._25_set_AsBool.method);
      return (AdjustSdk_JSONNode_o *)v5;
    }
    if ( v3 == 7 )
    {
      v7 = ((float (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._19_ReadSingle.methodPtr)(
             v2,
             v2->klass->vtable._19_ReadSingle.method);
      v5 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      ((void (__fastcall *)(AdjustSdk_JSONArray_o *, const MethodInfo *, float))v5->klass->vtable._21_set_AsFloat.methodPtr)(
        v5,
        v5->klass->vtable._21_set_AsFloat.method,
        v7);
      return (AdjustSdk_JSONNode_o *)v5;
    }
    goto LABEL_28;
  }
  if ( v3 == 4 )
  {
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._15_ReadInt32.methodPtr)(
            v2,
            v2->klass->vtable._15_ReadInt32.method);
    v5 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    ((void (__fastcall *)(AdjustSdk_JSONArray_o *, _QWORD, const MethodInfo *))v5->klass->vtable._19_set_AsInt.methodPtr)(
      v5,
      v15,
      v5->klass->vtable._19_set_AsInt.method);
    return (AdjustSdk_JSONNode_o *)v5;
  }
  if ( v3 != 5 )
    goto LABEL_28;
  v4 = ((double (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v2->klass->vtable._20_ReadDouble.methodPtr)(
         v2,
         v2->klass->vtable._20_ReadDouble.method);
  v5 = (AdjustSdk_JSONArray_o *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  ((void (__fastcall *)(AdjustSdk_JSONArray_o *, const MethodInfo *, double))v5->klass->vtable._23_set_AsDouble.methodPtr)(
    v5,
    v5->klass->vtable._23_set_AsDouble.method,
    v4);
  return (AdjustSdk_JSONNode_o *)v5;
}


bool AdjustSdk_JSONNode__Equals(AdjustSdk_JSONNode_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  return this == (AdjustSdk_JSONNode_o *)obj;
}


System_String_o *AdjustSdk_JSONNode__Escape(System_String_o *aText, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *v3; // x20
  int32_t i; // w21
  uint16_t Chars; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x1
  uint16_t v10; // [xsp+Ch] [xbp-64h] BYREF

  v2 = aText;
  if ( (byte_59304D2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16642/*"\\b"*/);
    sub_21FFC50(&StringLiteral_16645/*"\\n"*/);
    sub_21FFC50(&StringLiteral_16652/*"\\t"*/);
    sub_21FFC50(&StringLiteral_16626/*"\\\""*/);
    sub_21FFC50(&StringLiteral_16644/*"\\f"*/);
    sub_21FFC50(&StringLiteral_16650/*"\\r"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    aText = (System_String_o *)sub_21FFC50(&StringLiteral_16639/*"\\\\"*/);
    byte_59304D2 = 1;
  }
  v10 = 0;
  if ( !v2 )
    sub_21FFECC(aText, method);
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v2->fields._stringLength >= 1 )
  {
    for ( i = 0; i < v2->fields._stringLength; ++i )
    {
      Chars = System_String__get_Chars(v2, i, 0);
      v10 = Chars;
      if ( Chars <= 0xBu )
      {
        switch ( Chars )
        {
          case 8u:
            v8 = (System_String_o *)StringLiteral_16642/*"\\b"*/;
            break;
          case 9u:
            v8 = (System_String_o *)StringLiteral_16652/*"\\t"*/;
            break;
          case 0xAu:
            v8 = (System_String_o *)StringLiteral_16645/*"\\n"*/;
            break;
          default:
            goto LABEL_19;
        }
      }
      else if ( Chars > 0x21u )
      {
        if ( Chars == 34 )
        {
          v8 = (System_String_o *)StringLiteral_16626/*"\\\""*/;
        }
        else
        {
          if ( Chars != 92 )
          {
LABEL_19:
            if ( !*(_DWORD *)(qword_594C0B0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_594C0B0, v6, v7);
            v8 = System_Char__ToString((uint16_t)&v10, 0);
            goto LABEL_25;
          }
          v8 = (System_String_o *)StringLiteral_16639/*"\\\\"*/;
        }
      }
      else if ( Chars == 12 )
      {
        v8 = (System_String_o *)StringLiteral_16644/*"\\f"*/;
      }
      else
      {
        if ( Chars != 13 )
          goto LABEL_19;
        v8 = (System_String_o *)StringLiteral_16650/*"\\r"*/;
      }
LABEL_25:
      v3 = System_String__Concat_75438412(v3, v8, 0);
    }
  }
  return v3;
}


int32_t AdjustSdk_JSONNode__GetHashCode(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  return System_Object__GetHashCode((Il2CppObject *)this, 0);
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__LoadFromBase64(System_String_o *aBase64, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Byte_array *v4; // x20
  System_IO_MemoryStream_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_59304D7 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&System_IO_MemoryStream_TypeInfo);
    byte_59304D7 = 1;
  }
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, method, v2);
  v4 = System_Convert__FromBase64String(aBase64, 0);
  v5 = (System_IO_MemoryStream_o *)sub_21FFEBC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_76663240(v5, v4, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, const MethodInfo *))v5->klass->vtable._13_set_Position.methodPtr)(
    v5,
    0,
    v5->klass->vtable._13_set_Position.method);
  return AdjustSdk_JSONNode__LoadFromStream((System_IO_Stream_o *)v5, v8);
}


AdjustSdk_JSONNode_o *__noreturn AdjustSdk_JSONNode__LoadFromCompressedBase64(
        System_String_o *aBase64,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_Exception_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x0

  v2 = sub_21FFC64(&System_Exception_TypeInfo);
  v3 = (System_Exception_o *)sub_21FFEBC(v2);
  v4 = (System_String_o *)sub_21FFC64(&StringLiteral_4171/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_77161964(v3, v4, 0);
  v5 = sub_21FFC64(&Method_AdjustSdk_JSONNode_LoadFromCompressedBase64__);
  sub_21FFD90(v3, v5);
}


AdjustSdk_JSONNode_o *__noreturn AdjustSdk_JSONNode__LoadFromCompressedFile(
        System_String_o *aFileName,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_Exception_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x0

  v2 = sub_21FFC64(&System_Exception_TypeInfo);
  v3 = (System_Exception_o *)sub_21FFEBC(v2);
  v4 = (System_String_o *)sub_21FFC64(&StringLiteral_4171/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_77161964(v3, v4, 0);
  v5 = sub_21FFC64(&Method_AdjustSdk_JSONNode_LoadFromCompressedFile__);
  sub_21FFD90(v3, v5);
}


AdjustSdk_JSONNode_o *__noreturn AdjustSdk_JSONNode__LoadFromCompressedStream(
        System_IO_Stream_o *aData,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_Exception_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x0

  v2 = sub_21FFC64(&System_Exception_TypeInfo);
  v3 = (System_Exception_o *)sub_21FFEBC(v2);
  v4 = (System_String_o *)sub_21FFC64(&StringLiteral_4171/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_77161964(v3, v4, 0);
  v5 = sub_21FFC64(&Method_AdjustSdk_JSONNode_LoadFromCompressedStream__);
  sub_21FFD90(v3, v5);
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__LoadFromStream(System_IO_Stream_o *aData, const MethodInfo *method)
{
  System_IO_BinaryReader_o *v3; // x20
  const MethodInfo *v4; // x1
  AdjustSdk_JSONNode_o *v5; // x20
  System_IO_BinaryReader_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_IO_BinaryReader_o *v11; // [xsp+18h] [xbp-28h]

  if ( (byte_59304D6 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    byte_59304D6 = 1;
  }
  v3 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v3, aData, 0);
  v11 = v3;
  v5 = AdjustSdk_JSONNode__Deserialize(v3, v4);
  if ( v11 )
  {
    klass = v11->klass;
    v7 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
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
      v9 = sub_2237E2C(v11, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v9)(v11, *(_QWORD *)(v9 + 8));
  }
  return v5;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__Parse(System_String_o *aJSON, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *v3; // x20
  unsigned __int64 Chars; // x0
  __int64 v5; // x1
  char v6; // w27
  System_String_o *v7; // x23
  int32_t v8; // w22
  Il2CppObject *v9; // x21
  System_String_o *v10; // x24
  const MethodInfo *v11; // x1
  __int64 v12; // x10
  const MethodInfo *v13; // x1
  AdjustSdk_JSONClass_o *v14; // x24
  const MethodInfo *v15; // x1
  System_String_o *v16; // x0
  const MethodInfo *v17; // x1
  System_String_o *v18; // x23
  __int64 naturalAligment; // x10
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x0
  uint16_t v24; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 *v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  System_String_o *v30; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  System_String_o *v33; // x0
  System_String_o *v34; // x23
  __int64 v35; // x10
  System_String_o *v36; // x1
  Il2CppObject *v37; // x0
  AdjustSdk_JSONNode_o *v38; // x0
  AdjustSdk_JSONNode_o *v39; // x0
  System_String_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  System_String_o *v43; // x0
  __int64 v45; // x0
  System_Exception_o *v46; // x19
  void *v47; // x0
  __int64 v48; // x0
  System_String_o *v49; // x0
  __int64 v50; // x0
  uint16_t v51; // [xsp+8h] [xbp-68h] BYREF
  _WORD v52[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_59304D3 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONArray_TypeInfo);
    sub_21FFC50(&AdjustSdk_JSONClass_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_JSONNode__Peek__);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_JSONNode__Pop__);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_JSONNode__Push__);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_JSONNode___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Stack_JSONNode__get_Count__);
    sub_21FFC50(&System_Collections_Generic_Stack_JSONNode__TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_37/*"\b"*/);
    sub_21FFC50(&StringLiteral_38/*"\t"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_86/*"\r"*/);
    sub_21FFC50(&StringLiteral_85/*"\f"*/);
    byte_59304D3 = 1;
  }
  v52[0] = 0;
  v51 = 0;
  v3 = (System_Collections_Generic_Stack_T__o *)sub_21FFEBC(System_Collections_Generic_Stack_JSONNode__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v3,
    (const MethodInfo_3B293E4 *)Method_System_Collections_Generic_Stack_JSONNode___ctor__);
  if ( !aJSON )
LABEL_104:
    sub_21FFECC(Chars, v5);
  if ( aJSON->fields._stringLength >= 1 )
  {
    v6 = 0;
    v7 = (System_String_o *)StringLiteral_1/*""*/;
    v8 = 0;
    v9 = 0;
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    while ( 1 )
    {
      Chars = System_String__get_Chars(aJSON, v8, 0);
      if ( (unsigned __int16)Chars > 0x2Cu )
      {
        if ( (unsigned __int16)Chars > 0x5Du )
        {
          if ( (unsigned __int16)Chars == 125 )
            goto LABEL_34;
          if ( (unsigned __int16)Chars != 123 )
            goto LABEL_50;
          if ( (v6 & 1) != 0 )
          {
LABEL_60:
            v52[0] = System_String__get_Chars(aJSON, v8, 0);
            if ( !*(_DWORD *)(qword_594C0B0 + 228) )
              j_il2cpp_runtime_class_init_0(qword_594C0B0, v28, v29);
            v30 = System_Char__ToString((uint16_t)v52, 0);
            v10 = System_String__Concat_75438412(v10, v30, 0);
            v6 = 1;
            goto LABEL_92;
          }
          v14 = (AdjustSdk_JSONClass_o *)sub_21FFEBC(AdjustSdk_JSONClass_TypeInfo);
          AdjustSdk_JSONClass___ctor(v14, v15);
          if ( !v3 )
            goto LABEL_104;
          goto LABEL_65;
        }
        if ( (unsigned __int16)Chars != 58 )
        {
          if ( (unsigned __int16)Chars != 91 )
          {
            if ( (unsigned __int16)Chars == 92 )
            {
              if ( (v6 & 1) != 0 )
              {
                v24 = System_String__get_Chars(aJSON, v8 + 1, 0);
                v51 = v24;
                if ( v24 > 0x66u )
                {
                  if ( v24 > 0x73u )
                  {
                    if ( v24 == 117 )
                    {
                      v40 = System_String__Substring_75489544(aJSON, v8 + 2, 4, 0);
                      v52[0] = System_Int32__Parse_76926212(v40, 512, 0);
                      if ( !*(_DWORD *)(qword_594C0B0 + 228) )
                        j_il2cpp_runtime_class_init_0(qword_594C0B0, v41, v42);
                      v43 = System_Char__ToString((uint16_t)v52, 0);
                      v10 = System_String__Concat_75438412(v10, v43, 0);
                      v8 += 5;
                      v6 = 1;
                      goto LABEL_92;
                    }
                    if ( v24 != 116 )
                      goto LABEL_80;
                    v27 = &StringLiteral_38/*"\t"*/;
                  }
                  else if ( v24 == 110 )
                  {
                    v27 = &StringLiteral_43/*"\n"*/;
                  }
                  else
                  {
                    if ( v24 != 114 )
                      goto LABEL_80;
                    v27 = &StringLiteral_86/*"\r"*/;
                  }
                }
                else
                {
                  if ( v24 != 98 )
                  {
                    if ( v24 == 102 )
                    {
                      v27 = &StringLiteral_85/*"\f"*/;
                      goto LABEL_95;
                    }
LABEL_80:
                    if ( !*(_DWORD *)(qword_594C0B0 + 228) )
                      j_il2cpp_runtime_class_init_0(qword_594C0B0, v25, v26);
                    v36 = System_Char__ToString((uint16_t)&v51, 0);
LABEL_96:
                    v10 = System_String__Concat_75438412(v10, v36, 0);
                    v6 = 1;
LABEL_97:
                    ++v8;
                    goto LABEL_92;
                  }
                  v27 = &StringLiteral_37/*"\b"*/;
                }
LABEL_95:
                v36 = (System_String_o *)*v27;
                goto LABEL_96;
              }
              v6 = 0;
              goto LABEL_97;
            }
            if ( (unsigned __int16)Chars != 93 )
              goto LABEL_50;
LABEL_34:
            if ( (v6 & 1) != 0 )
              goto LABEL_60;
            if ( !v3 )
              goto LABEL_104;
            if ( !v3->fields._size )
            {
              v45 = sub_21FFC64(&System_Exception_TypeInfo);
              v46 = (System_Exception_o *)sub_21FFEBC(v45);
              v47 = &StringLiteral_8498/*"JSON Parse: Too many closing brackets"*/;
              goto LABEL_107;
            }
            System_Collections_Generic_Stack_object___Pop(
              v3,
              (const MethodInfo_3B299B8 *)Method_System_Collections_Generic_Stack_JSONNode__Pop__);
            Chars = System_String__op_Inequality(v10, (System_String_o *)StringLiteral_1/*""*/, 0);
            if ( (Chars & 1) != 0 )
            {
              if ( !v7 )
                goto LABEL_104;
              v16 = System_String__Trim(v7, 0);
              v18 = v16;
              if ( v9
                && (naturalAligment = AdjustSdk_JSONArray_TypeInfo->_2.naturalAligment,
                    v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
                && (AdjustSdk_JSONArray_c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == AdjustSdk_JSONArray_TypeInfo )
              {
                v38 = AdjustSdk_JSONNode__op_Implicit(v10, v17);
                ((void (__fastcall *)(Il2CppObject *, AdjustSdk_JSONNode_o *, const MethodInfo *))v9->klass->vtable[12].methodPtr)(
                  v9,
                  v38,
                  v9->klass->vtable[12].method);
              }
              else if ( System_String__op_Inequality(v16, (System_String_o *)StringLiteral_1/*""*/, 0) )
              {
                Chars = (unsigned __int64)AdjustSdk_JSONNode__op_Implicit(v10, v20);
                if ( !v9 )
                  goto LABEL_104;
                ((void (__fastcall *)(Il2CppObject *, System_String_o *, unsigned __int64, const MethodInfo *))v9->klass->vtable[4].methodPtr)(
                  v9,
                  v18,
                  Chars,
                  v9->klass->vtable[4].method);
              }
            }
            v7 = (System_String_o *)StringLiteral_1/*""*/;
            if ( v3->fields._size >= 1 )
LABEL_87:
              v9 = System_Collections_Generic_Stack_object___Peek(
                     v3,
                     (const MethodInfo_3B29974 *)Method_System_Collections_Generic_Stack_JSONNode__Peek__);
LABEL_91:
            v6 = 0;
            v10 = v7;
            goto LABEL_92;
          }
          if ( (v6 & 1) != 0 )
            goto LABEL_60;
          v14 = (AdjustSdk_JSONClass_o *)sub_21FFEBC(AdjustSdk_JSONArray_TypeInfo);
          AdjustSdk_JSONArray___ctor((AdjustSdk_JSONArray_o *)v14, v31);
          if ( !v3 )
            goto LABEL_104;
LABEL_65:
          System_Collections_Generic_Stack_object___Push(
            v3,
            (Il2CppObject *)v14,
            (const MethodInfo_3B29AB4 *)Method_System_Collections_Generic_Stack_JSONNode__Push__);
          Chars = AdjustSdk_JSONNode__op_Equality((AdjustSdk_JSONNode_o *)v9, 0, v32);
          if ( (Chars & 1) == 0 )
          {
            if ( !v7 )
              goto LABEL_104;
            v33 = System_String__Trim(v7, 0);
            v34 = v33;
            if ( v9
              && (v35 = AdjustSdk_JSONArray_TypeInfo->_2.naturalAligment,
                  v9->klass->_2.naturalAligment >= (unsigned int)v35)
              && (AdjustSdk_JSONArray_c *)v9->klass->_2.typeHierarchy[v35 - 1] == AdjustSdk_JSONArray_TypeInfo )
            {
              v37 = System_Collections_Generic_Stack_object___Peek(
                      v3,
                      (const MethodInfo_3B29974 *)Method_System_Collections_Generic_Stack_JSONNode__Peek__);
              ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, const MethodInfo *))v9->klass->vtable[12].methodPtr)(
                v9,
                v37,
                v9->klass->vtable[12].method);
            }
            else if ( System_String__op_Inequality(v33, (System_String_o *)StringLiteral_1/*""*/, 0) )
            {
              Chars = (unsigned __int64)System_Collections_Generic_Stack_object___Peek(
                                          v3,
                                          (const MethodInfo_3B29974 *)Method_System_Collections_Generic_Stack_JSONNode__Peek__);
              if ( !v9 )
                goto LABEL_104;
              ((void (__fastcall *)(Il2CppObject *, System_String_o *, unsigned __int64, const MethodInfo *))v9->klass->vtable[4].methodPtr)(
                v9,
                v34,
                Chars,
                v9->klass->vtable[4].method);
            }
          }
          v7 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_87;
        }
        if ( (v6 & 1) != 0 )
          goto LABEL_60;
        v6 = 0;
        v7 = v10;
        v10 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( (unsigned __int16)Chars <= 0x20u )
        {
          if ( (unsigned __int16)Chars <= 0xAu )
          {
            if ( (unsigned __int16)Chars != 9 )
            {
              if ( (unsigned __int16)Chars == 10 )
                goto LABEL_92;
              goto LABEL_47;
            }
          }
          else
          {
            if ( (unsigned int)(unsigned __int16)Chars - 11 < 2 )
              goto LABEL_50;
            if ( (unsigned __int16)Chars == 13 )
              goto LABEL_92;
LABEL_47:
            if ( (unsigned __int16)Chars != 32 )
            {
LABEL_50:
              v52[0] = System_String__get_Chars(aJSON, v8, 0);
              if ( !*(_DWORD *)(qword_594C0B0 + 228) )
                j_il2cpp_runtime_class_init_0(qword_594C0B0, v21, v22);
              v23 = System_Char__ToString((uint16_t)v52, 0);
              v10 = System_String__Concat_75438412(v10, v23, 0);
              goto LABEL_92;
            }
          }
          if ( (v6 & 1) != 0 )
            goto LABEL_60;
          v6 = 0;
          goto LABEL_92;
        }
        if ( (unsigned __int16)Chars != 34 )
        {
          if ( (unsigned __int16)Chars != 44 )
            goto LABEL_50;
          if ( (v6 & 1) != 0 )
            goto LABEL_60;
          if ( System_String__op_Inequality(v10, (System_String_o *)StringLiteral_1/*""*/, 0) )
          {
            if ( v9
              && (v12 = AdjustSdk_JSONArray_TypeInfo->_2.naturalAligment,
                  v9->klass->_2.naturalAligment >= (unsigned int)v12)
              && (AdjustSdk_JSONArray_c *)v9->klass->_2.typeHierarchy[v12 - 1] == AdjustSdk_JSONArray_TypeInfo )
            {
              v39 = AdjustSdk_JSONNode__op_Implicit(v10, v11);
              ((void (__fastcall *)(Il2CppObject *, AdjustSdk_JSONNode_o *, const MethodInfo *))v9->klass->vtable[12].methodPtr)(
                v9,
                v39,
                v9->klass->vtable[12].method);
            }
            else if ( System_String__op_Inequality(v7, (System_String_o *)StringLiteral_1/*""*/, 0) )
            {
              Chars = (unsigned __int64)AdjustSdk_JSONNode__op_Implicit(v10, v13);
              if ( !v9 )
                goto LABEL_104;
              ((void (__fastcall *)(Il2CppObject *, System_String_o *, unsigned __int64, const MethodInfo *))v9->klass->vtable[4].methodPtr)(
                v9,
                v7,
                Chars,
                v9->klass->vtable[4].method);
            }
          }
          v7 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_91;
        }
        v6 ^= 1u;
      }
LABEL_92:
      if ( ++v8 >= aJSON->fields._stringLength )
        goto LABEL_102;
    }
  }
  v9 = 0;
  v6 = 0;
LABEL_102:
  if ( (v6 & 1) != 0 )
  {
    v48 = sub_21FFC64(&System_Exception_TypeInfo);
    v46 = (System_Exception_o *)sub_21FFEBC(v48);
    v47 = &StringLiteral_8497/*"JSON Parse: Quotation marks seems to be messed up."*/;
LABEL_107:
    v49 = (System_String_o *)sub_21FFC64(v47);
    System_Exception___ctor_77161964(v46, v49, 0);
    v50 = sub_21FFC64(&Method_AdjustSdk_JSONNode_Parse__);
    sub_21FFD90(v46, v50);
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


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__Remove_36727972(
        AdjustSdk_JSONNode_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  return 0;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__Remove_36727980(
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

  v2 = sub_21FFC64(&System_Exception_TypeInfo);
  v3 = (System_Exception_o *)sub_21FFEBC(v2);
  v4 = (System_String_o *)sub_21FFC64(&StringLiteral_4171/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_77161964(v3, v4, 0);
  v5 = sub_21FFC64(&Method_AdjustSdk_JSONNode_SaveToCompressedBase64__);
  sub_21FFD90(v3, v5);
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

  v3 = sub_21FFC64(&System_Exception_TypeInfo);
  v4 = (System_Exception_o *)sub_21FFEBC(v3);
  v5 = (System_String_o *)sub_21FFC64(&StringLiteral_4171/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_77161964(v4, v5, 0);
  v6 = sub_21FFC64(&Method_AdjustSdk_JSONNode_SaveToCompressedFile__);
  sub_21FFD90(v4, v6);
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

  v3 = sub_21FFC64(&System_Exception_TypeInfo);
  v4 = (System_Exception_o *)sub_21FFEBC(v3);
  v5 = (System_String_o *)sub_21FFC64(&StringLiteral_4171/*"Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON"*/);
  System_Exception___ctor_77161964(v4, v5, 0);
  v6 = sub_21FFC64(&Method_AdjustSdk_JSONNode_SaveToCompressedStream__);
  sub_21FFD90(v4, v6);
}


void AdjustSdk_JSONNode__SaveToStream(AdjustSdk_JSONNode_o *this, System_IO_Stream_o *aData, const MethodInfo *method)
{
  System_IO_BinaryWriter_o *v5; // x21

  if ( (byte_59304D4 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    byte_59304D4 = 1;
  }
  v5 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76739708(v5, aData, 0);
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
  if ( (byte_59304CB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8508/*"JSONNode"*/);
    byte_59304CB = 1;
  }
  return (System_String_o *)StringLiteral_8508/*"JSONNode"*/;
}


System_String_o *AdjustSdk_JSONNode__ToString_36728392(
        AdjustSdk_JSONNode_o *this,
        System_String_o *aPrefix,
        const MethodInfo *method)
{
  if ( (byte_59304CC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8508/*"JSONNode"*/);
    byte_59304CC = 1;
  }
  return (System_String_o *)StringLiteral_8508/*"JSONNode"*/;
}


AdjustSdk_JSONArray_o *AdjustSdk_JSONNode__get_AsArray(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_59304CE & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONArray_TypeInfo);
    byte_59304CE = 1;
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
  AdjustSdk_JSONNode_c *klass; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x20
  System_String_o *v8; // x0
  bool result; // [xsp+Ch] [xbp-14h] BYREF

  klass = this->klass;
  result = 0;
  v6 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))klass->vtable._9_get_Value.methodPtr)(
                            this,
                            klass->vtable._9_get_Value.method);
  if ( !*(_DWORD *)(qword_594C050 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C050, v4, v5);
  if ( System_Boolean__TryParse(v6, &result, 0) )
  {
    return result;
  }
  else
  {
    v8 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))this->klass->vtable._9_get_Value.methodPtr)(
                              this,
                              this->klass->vtable._9_get_Value.method);
    return !System_String__IsNullOrEmpty(v8, 0);
  }
}


double AdjustSdk_JSONNode__get_AsDouble(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x0
  bool v3; // w0
  double v4; // d0
  double result; // [xsp+8h] [xbp-8h] BYREF

  v2 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))this->klass->vtable._9_get_Value.methodPtr)(
                            this,
                            this->klass->vtable._9_get_Value.method);
  v3 = System_Double__TryParse(v2, &result, 0);
  v4 = 0.0;
  if ( v3 )
    return result;
  return v4;
}


float AdjustSdk_JSONNode__get_AsFloat(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  AdjustSdk_JSONNode_c *klass; // x8
  System_String_o *v3; // x0
  bool v4; // w0
  float v5; // s0
  float result; // [xsp+Ch] [xbp-4h] BYREF

  klass = this->klass;
  result = 0.0;
  v3 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))klass->vtable._9_get_Value.methodPtr)(
                            this,
                            klass->vtable._9_get_Value.method);
  v4 = System_Single__TryParse(v3, &result, 0);
  v5 = 0.0;
  if ( v4 )
    return result;
  return v5;
}


int32_t AdjustSdk_JSONNode__get_AsInt(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  AdjustSdk_JSONNode_c *klass; // x8
  System_String_o *v3; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  klass = this->klass;
  result = 0;
  v3 = (System_String_o *)((__int64 (__fastcall *)(AdjustSdk_JSONNode_o *, const MethodInfo *))klass->vtable._9_get_Value.methodPtr)(
                            this,
                            klass->vtable._9_get_Value.method);
  if ( System_Int32__TryParse(v3, &result, 0) )
    return result;
  else
    return 0;
}


AdjustSdk_JSONClass_o *AdjustSdk_JSONNode__get_AsObject(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_59304CF & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONClass_TypeInfo);
    byte_59304CF = 1;
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
  int32_t CurrentManagedThreadId; // w8
  System_Collections_Generic_IEnumerable_JSONNode__o *result; // x0

  if ( (byte_59304C9 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONNode__get_Childs_d__17_TypeInfo);
    byte_59304C9 = 1;
  }
  v2 = sub_21FFEBC(AdjustSdk_JSONNode__get_Childs_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = -2;
  CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
  result = (System_Collections_Generic_IEnumerable_JSONNode__o *)v2;
  *(_DWORD *)(v2 + 32) = CurrentManagedThreadId;
  return result;
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

  if ( (byte_59304CA & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONNode__get_DeepChilds_d__19_TypeInfo);
    byte_59304CA = 1;
  }
  v3 = sub_21FFEBC(AdjustSdk_JSONNode__get_DeepChilds_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_21FFBF4(v3 + 40, this);
  return (System_Collections_Generic_IEnumerable_JSONNode__o *)v3;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__get_Item(
        AdjustSdk_JSONNode_o *this,
        int32_t aIndex,
        const MethodInfo *method)
{
  return 0;
}


AdjustSdk_JSONNode_o *AdjustSdk_JSONNode__get_Item_36727780(
        AdjustSdk_JSONNode_o *this,
        System_String_o *aKey,
        const MethodInfo *method)
{
  return 0;
}


System_String_o *AdjustSdk_JSONNode__get_Value(AdjustSdk_JSONNode_o *this, const MethodInfo *method)
{
  if ( (byte_59304C7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59304C7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool AdjustSdk_JSONNode__op_Equality(AdjustSdk_JSONNode_o *a, Il2CppObject *b, const MethodInfo *method)
{
  bool result; // w0
  __int64 naturalAligment; // x10

  if ( (byte_59304D1 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONLazyCreator_TypeInfo);
    byte_59304D1 = 1;
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

  if ( (byte_59304D0 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONData_TypeInfo);
    byte_59304D0 = 1;
  }
  v3 = (Il2CppObject *)sub_21FFEBC(AdjustSdk_JSONData_TypeInfo);
  System_Object___ctor(v3, 0);
  v3[1].klass = (Il2CppClass *)s;
  sub_21FFBF4(&v3[1], s);
  return (AdjustSdk_JSONNode_o *)v3;
}


System_String_o *AdjustSdk_JSONNode__op_Implicit_36708380(AdjustSdk_JSONNode_o *d, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL8 v4; // x0
  __int64 v5; // x1

  v4 = AdjustSdk_JSONNode__op_Equality(d, 0, v2);
  if ( v4 )
    return 0;
  if ( !d )
    sub_21FFECC(v4, v5);
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
  AdjustSdk_JSONNode_o *v4; // x19
  __int64 *v5; // x8

  v4 = this;
  if ( (byte_59304CD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20265/*"false"*/);
    this = (AdjustSdk_JSONNode_o *)sub_21FFC50(&StringLiteral_25478/*"true"*/);
    byte_59304CD = 1;
  }
  if ( !v4 )
    sub_21FFECC(this, value);
  v5 = &StringLiteral_25478/*"true"*/;
  if ( !value )
    v5 = &StringLiteral_20265/*"false"*/;
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


void AdjustSdk_JSONNode__set_Item_36727788(
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

  if ( (byte_59304D8 & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONNode__get_Childs_d__17_TypeInfo);
    byte_59304D8 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    this = (AdjustSdk_JSONNode__get_Childs_d__17_o *)sub_21FFEBC(AdjustSdk_JSONNode__get_Childs_d__17_TypeInfo);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AdjustSdk_JSONNode__get_Childs_d__17_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  if ( (byte_59304D9 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_IEnumerable_JSONNode__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_JSONNode__TypeInfo);
    this = (AdjustSdk_JSONNode__get_DeepChilds_d__19_o *)sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_59304D9 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_41;
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_21FFECC(0, method);
  v5 = ((__int64 (__fastcall *)(struct AdjustSdk_JSONNode_o *, const MethodInfo *))_4__this->klass->vtable._16_get_Childs.methodPtr)(
         _4__this,
         _4__this->klass->vtable._16_get_Childs.method);
  v7 = v5;
  if ( !v5 )
    sub_21FFECC(0, v6);
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
    v11 = sub_2237E2C(v5, System_Collections_Generic_IEnumerable_JSONNode__TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))v11)(v7, *(_QWORD *)(v11 + 8));
  v50->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_JSONNode__o *)v12;
  v13 = sub_21FFBF4(&v50->fields.__7__wrap1, v12);
  v15 = v50;
  v50->fields.__1__state = -3;
  while ( 1 )
  {
    _7__wrap1 = v15->fields.__7__wrap1;
    if ( !_7__wrap1 )
      sub_21FFECC(v13, v14);
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
      v21 = sub_2237E2C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v21)(
            _7__wrap1,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
    {
      AdjustSdk_JSONNode__get_DeepChilds_d__19____m__Finally1(v50, v22);
      v50->fields.__7__wrap1 = 0;
      sub_21FFBF4(&v50->fields.__7__wrap1, 0);
      return 0;
    }
    v23 = v50->fields.__7__wrap1;
    if ( !v23 )
      sub_21FFECC(v50, v22);
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
      v27 = sub_2237E2C(v50->fields.__7__wrap1, System_Collections_Generic_IEnumerator_JSONNode__TypeInfo, 0);
    }
    v28 = (AdjustSdk_JSONNode_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v27)(
                                    v23,
                                    *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_21FFECC(0, v29);
    DeepChilds = AdjustSdk_JSONNode__get_DeepChilds(v28, v29);
    v32 = DeepChilds;
    if ( !DeepChilds )
      sub_21FFECC(0, v31);
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
      v36 = sub_2237E2C(DeepChilds, System_Collections_Generic_IEnumerable_JSONNode__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_JSONNode__o *, _QWORD))v36)(
            v32,
            *(_QWORD *)(v36 + 8));
    v50->fields.__7__wrap2 = (struct System_Collections_Generic_IEnumerator_JSONNode__o *)v37;
    this = (AdjustSdk_JSONNode__get_DeepChilds_d__19_o *)sub_21FFBF4(&v50->fields.__7__wrap2, v37);
    v2 = v50;
LABEL_41:
    _7__wrap2 = v2->fields.__7__wrap2;
    v2->fields.__1__state = -4;
    if ( !_7__wrap2 )
      sub_21FFECC(this, method);
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
      v42 = sub_2237E2C(_7__wrap2, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v42)(
            _7__wrap2,
            *(_QWORD *)(v42 + 8))
        & 1) != 0 )
      break;
    AdjustSdk_JSONNode__get_DeepChilds_d__19____m__Finally2(v50, v43);
    v50->fields.__7__wrap2 = 0;
    v13 = sub_21FFBF4(&v50->fields.__7__wrap2, 0);
    v15 = v50;
  }
  v44 = v50->fields.__7__wrap2;
  if ( !v44 )
    sub_21FFECC(v50, v43);
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
    v48 = sub_2237E2C(v50->fields.__7__wrap2, System_Collections_Generic_IEnumerator_JSONNode__TypeInfo, 0);
  }
  v49 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v48)(
          v44,
          *(_QWORD *)(v48 + 8));
  v50->fields.__2__current = (struct AdjustSdk_JSONNode_o *)v49;
  sub_21FFBF4(&v50->fields.__2__current, v49);
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
  int32_t CurrentManagedThreadId; // w0
  struct AdjustSdk_JSONNode_o *_4__this; // x1

  if ( (byte_59304DC & 1) == 0 )
  {
    sub_21FFC50(&AdjustSdk_JSONNode__get_DeepChilds_d__19_TypeInfo);
    byte_59304DC = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(AdjustSdk_JSONNode__get_DeepChilds_d__19_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_21FFBF4(v4 + 40, _4__this);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AdjustSdk_JSONNode__get_DeepChilds_d__19_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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

  if ( (byte_59304DA & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    byte_59304DA = 1;
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
      v7 = sub_2237E2C(_7__wrap1, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_59304DB & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    byte_59304DB = 1;
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
      v7 = sub_2237E2C(_7__wrap2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_JSONNode__o *, _QWORD))v7)(
      _7__wrap2,
      *(_QWORD *)(v7 + 8));
  }
}