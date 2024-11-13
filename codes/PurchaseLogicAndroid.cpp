void __fastcall PurchaseLogicAndroid___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B15B98 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_15242/*"UnityPurchasingInitializeFailedCount"*/, v8, v9);
    byte_4B15B98 = 1;
  }
  PurchaseLogicAndroid_TypeInfo->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY = (struct System_String_o *)StringLiteral_15242/*"UnityPurchasingInitializeFailedCount"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PurchaseLogicAndroid_TypeInfo->static_fields,
    StringLiteral_15242/*"UnityPurchasingInitializeFailedCount"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED = 1000;
}


void __fastcall PurchaseLogicAndroid__DisableCrashReporterOnInitialize(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  PurchaseLogicAndroid_c *v10; // x0
  int32_t Int; // w0
  struct System_Action_string__o *logOutputAction; // x21
  System_String_o *v13; // x20
  float v14; // s0
  System_String_o *v15; // x0
  CrashReporter_o *Instance; // x0
  __int64 v17; // x1
  float v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B15B94 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_318/*" rateToSend:"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_16124/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/, v8, v9);
    byte_4B15B94 = 1;
  }
  v10 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v10 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v10->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  v19 = Int;
  if ( Int >= 1 )
  {
    v18 = fmaxf(1.0 / (float)(Int + 1), 0.1);
    logOutputAction = this->fields._logOutputAction;
    v13 = System_Int32__ToString((int32_t)&v19, 0LL);
    v15 = System_Single__ToString(v14, (const MethodInfo *)&v18);
    Instance = (CrashReporter_o *)System_String__Concat_62414484(
                                    (System_String_o *)StringLiteral_16124/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/,
                                    v13,
                                    (System_String_o *)StringLiteral_318/*" rateToSend:"*/,
                                    v15,
                                    0LL);
    if ( !logOutputAction )
      goto LABEL_11;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, CrashReporter_o *, _QWORD))logOutputAction->fields.m_target)(
      logOutputAction->fields.original_method_info,
      Instance,
      *(_QWORD *)&logOutputAction->fields.extra_arg);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) < v18 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1BCAA3C(Instance, v17);
    CrashReporter__DisableSampling(Instance, 0LL);
  }
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeFailed(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  PurchaseLogicAndroid_c *v8; // x0
  int32_t Int; // w0
  __int64 v10; // x1
  PurchaseLogicAndroid_c *v11; // x8
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_4B15B96 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v4, v5);
    byte_4B15B96 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v7);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0LL);
  }
  v8 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v8 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v8->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  v11 = PurchaseLogicAndroid_TypeInfo;
  MAX_COUNT_FOR_INITIALIZE_FAILED = (Int & ~(Int >> 31)) + 1;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, v10);
    v11 = PurchaseLogicAndroid_TypeInfo;
  }
  if ( MAX_COUNT_FOR_INITIALIZE_FAILED > v11->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED )
  {
    if ( v11->_2.cctor_finished )
    {
      MAX_COUNT_FOR_INITIALIZE_FAILED = v11->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      v11 = PurchaseLogicAndroid_TypeInfo;
      MAX_COUNT_FOR_INITIALIZE_FAILED = PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11, v10);
    v11 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v11->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY,
    MAX_COUNT_FOR_INITIALIZE_FAILED,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeSucceeded(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  PurchaseLogicAndroid_c *v8; // x0

  if ( (byte_4B15B95 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v4, v5);
    byte_4B15B95 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v7);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0LL);
  }
  v8 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v8 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v8->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogicAndroid__ExtractReceiptContents(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *receipt_k__BackingField; // x20
  PurchaseLogic_ReceiptContents_o *v20; // x19
  const MethodInfo *v21; // x1
  __int64 methodPtr_low; // x10
  System_String_o *v23; // x0
  PurchaseLogicAndroid_o *v24; // x20
  __int64 v25; // x10
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *v32; // x8
  System_String_c *v33; // x9
  Il2CppObject *v34; // x10
  PartyOrganizationUtility_o *p_fields; // x20
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *v43; // x8
  System_String_c *v44; // x9
  Il2CppObject *v45; // x10
  PartyOrganizationUtility_o *p_googleSignatureStr; // x21
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  void *v54; // x1
  void *v55; // x1
  Il2CppObject *v57; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v58; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B15B8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, product, method);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5, v6);
    sub_1BCA7E0(&PurchaseLogic_ReceiptContents_TypeInfo, v7, v8);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_21183/*"json"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_10721/*"Payload"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_23568/*"signature"*/, v15, v16);
    this = (PurchaseLogicAndroid_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B15B8B = 1;
  }
  v58 = 0LL;
  value = 0LL;
  v57 = 0LL;
  if ( !product )
    goto LABEL_37;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v20 = (PurchaseLogic_ReceiptContents_o *)sub_1BCAA2C(PurchaseLogic_ReceiptContents_TypeInfo, product, method, v3);
  PurchaseLogic_ReceiptContents___ctor(v20, v21);
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !this )
    goto LABEL_37;
  methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_37;
  }
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (Il2CppObject *)StringLiteral_10721/*"Payload"*/,
    &value,
    (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
    v23 = (System_String_c *)value->klass == string_TypeInfo ? (System_String_o *)value : 0LL;
  else
    v23 = 0LL;
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(v23, 0LL);
  if ( !this
    || (v24 = this,
        v25 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v25)
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v25 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo
    || (System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_21183/*"json"*/,
          &v58,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                           (System_Collections_Generic_Dictionary_object__object__o *)v24,
                                           (Il2CppObject *)StringLiteral_23568/*"signature"*/,
                                           &v57,
                                           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v20) )
  {
LABEL_37:
    sub_1BCAA3C(this, product);
  }
  v32 = v58;
  if ( v58 )
  {
    v33 = string_TypeInfo;
    if ( (System_String_c *)v58->klass == string_TypeInfo )
      v34 = v58;
    else
      v34 = 0LL;
    v20->fields.payloadJsonStr = (struct System_String_o *)v34;
    p_fields = (PartyOrganizationUtility_o *)&v20->fields;
    if ( (System_String_c *)v32->klass == v33 )
      v36 = (int64_t)v32;
    else
      v36 = 0LL;
  }
  else
  {
    v36 = 0LL;
    v20->fields.payloadJsonStr = 0LL;
    p_fields = (PartyOrganizationUtility_o *)&v20->fields;
  }
  sub_1BCA784(p_fields, v36, v26, v27, v28, v29, v30, v31);
  v43 = v57;
  if ( v57 )
  {
    v44 = string_TypeInfo;
    if ( (System_String_c *)v57->klass == string_TypeInfo )
      v45 = v57;
    else
      v45 = 0LL;
    v20->fields.googleSignatureStr = (struct System_String_o *)v45;
    p_googleSignatureStr = (PartyOrganizationUtility_o *)&v20->fields.googleSignatureStr;
    if ( (System_String_c *)v43->klass == v44 )
      v47 = (int64_t)v43;
    else
      v47 = 0LL;
  }
  else
  {
    v47 = 0LL;
    v20->fields.googleSignatureStr = 0LL;
    p_googleSignatureStr = (PartyOrganizationUtility_o *)&v20->fields.googleSignatureStr;
  }
  sub_1BCA784(p_googleSignatureStr, v47, v37, v38, v39, v40, v41, v42);
  if ( !p_fields->klass )
  {
    v54 = StringLiteral_1/*""*/;
    p_fields->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
    sub_1BCA784(p_fields, (int64_t)v54, v48, v49, v50, v51, v52, v53);
  }
  if ( !p_googleSignatureStr->klass )
  {
    v55 = StringLiteral_1/*""*/;
    p_googleSignatureStr->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
    sub_1BCA784(p_googleSignatureStr, (int64_t)v55, v48, v49, v50, v51, v52, v53);
  }
  return v20;
}


System_String_o *__fastcall PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseLogicAndroid_c *v3; // x0

  if ( (byte_4B15B8C & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, method, v2);
    byte_4B15B8C = 1;
  }
  v3 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v3 = PurchaseLogicAndroid_TypeInfo;
  }
  return v3->static_fields->_cachedObfuscatedAccountId;
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogicAndroid__GetConfigurationBuilder(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x22
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Purchasing_ConfigurationBuilder_o *ConfigurationBuilder; // x0
  __int64 v9; // x1
  UnityEngine_Purchasing_ConfigurationBuilder_o *v10; // x19
  Il2CppObject *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  UnityEngine_Purchasing_ConfigurationBuilder_o *v15; // x21
  Il2CppClass *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  v3 = (Il2CppObject *)this;
  if ( (byte_4B15B8A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Product__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v4, v5);
    this = (PurchaseLogicAndroid_o *)sub_1BCA7E0(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, v6, v7);
    byte_4B15B8A = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v10 = ConfigurationBuilder,
        v11 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                ConfigurationBuilder,
                (const MethodInfo_2F0B178 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_1BCAA2C(
                                                                                  System_Action_Product__TypeInfo,
                                                                                  v12,
                                                                                  v13,
                                                                                  v14),
        !v3)
    || (v15 = ConfigurationBuilder,
        System_Action_object____ctor(
          (System_Action_object__o *)ConfigurationBuilder,
          v3,
          (intptr_t)v3->klass->vtable[26].methodPtr,
          0LL),
        !v11) )
  {
    sub_1BCAA3C(ConfigurationBuilder, v9);
  }
  klass = v11->klass;
  v17 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IGooglePlayConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(v11, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(Il2CppObject *, UnityEngine_Purchasing_ConfigurationBuilder_o *, _QWORD))p_method)(
    v11,
    v15,
    *(_QWORD *)(p_method + 8));
  return v10;
}


bool __fastcall PurchaseLogicAndroid__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseLogicAndroid_c *v3; // x0

  if ( (byte_4B15B90 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, method, v2);
    byte_4B15B90 = 1;
  }
  v3 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v3 = PurchaseLogicAndroid_TypeInfo;
  }
  return v3->static_fields->_isAlreadyInitializedWithObfuscatedAccountId;
}


bool __fastcall PurchaseLogicAndroid__IsDeferredPurchaseExists(PurchaseLogicAndroid_o *this, const MethodInfo *method)
{
  return this->fields._existsDeferredPurchase;
}


bool __fastcall PurchaseLogicAndroid__IsInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseLogicAndroid_c *v3; // x0

  if ( (byte_4B15B92 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, method, v2);
    byte_4B15B92 = 1;
  }
  v3 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v3 = PurchaseLogicAndroid_TypeInfo;
  }
  return v3->static_fields->_isObfuscatedAccountIdMismatched;
}


bool __fastcall PurchaseLogicAndroid__IsObfuscatedAccountIdCached(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseLogicAndroid_c *v3; // x0

  if ( (byte_4B15B8F & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, method, v2);
    byte_4B15B8F = 1;
  }
  v3 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v3 = PurchaseLogicAndroid_TypeInfo;
  }
  return !System_String__IsNullOrEmpty(v3->static_fields->_cachedObfuscatedAccountId, 0LL);
}


bool __fastcall PurchaseLogicAndroid__IsPurchasingFrameworkAvailable(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall PurchaseLogicAndroid__OnDeferred(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  int64_t id_k__BackingField; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  PurchaseBehaviour_c *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x21
  System_Func_object__bool__o *v30; // x22
  Il2CppObject *v31; // x0
  const MethodInfo *v32; // x7
  int32_t klass; // w5

  if ( (byte_4B15B97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___, product, method);
    sub_1BCA7E0(&System_Func_BankShopEntity__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__, v10, v11);
    sub_1BCA7E0(&PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo, v12, v13);
    byte_4B15B97 = 1;
  }
  v14 = sub_1BCAA2C(PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo, product, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  this->fields._existsDeferredPurchase = 1;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL || !v14 )
    sub_1BCAA3C(v15, v16);
  id_k__BackingField = (int64_t)definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v14 + 16) = id_k__BackingField;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), id_k__BackingField, v17, v18, v19, v20, v21, v22);
  v28 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v25);
    v28 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v28->static_fields->BankShopEntityCollection;
  v30 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BankShopEntity__bool__TypeInfo, v25, v26, v27);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v14,
    Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__,
    0LL);
  v31 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v30,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v31 )
    klass = (int32_t)v31[1].klass;
  else
    klass = 0;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 15, 0, 0, 0, klass, 0, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicAndroid__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4B15B91 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, isInitialized, method);
    byte_4B15B91 = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, isInitialized);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  v4->static_fields->_isAlreadyInitializedWithObfuscatedAccountId = isInitialized;
}


void __fastcall PurchaseLogicAndroid__SetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PurchaseLogicAndroid_c *v9; // x0
  struct PurchaseLogicAndroid_StaticFields *static_fields; // x0

  if ( (byte_4B15B8E & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, obfuscatedAccountId, method);
    byte_4B15B8E = 1;
  }
  v9 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, obfuscatedAccountId);
    v9 = PurchaseLogicAndroid_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_cachedObfuscatedAccountId = obfuscatedAccountId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_cachedObfuscatedAccountId,
    (int64_t)obfuscatedAccountId,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PurchaseLogicAndroid__SetExistsDeferredPurchase(
        PurchaseLogicAndroid_o *this,
        bool exists,
        const MethodInfo *method)
{
  this->fields._existsDeferredPurchase = exists;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicAndroid__SetInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isMismatched,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4B15B93 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, isMismatched, method);
    byte_4B15B93 = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, isMismatched);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  v4->static_fields->_isObfuscatedAccountIdMismatched = isMismatched;
}


void __fastcall PurchaseLogicAndroid__SetObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_ConfigurationBuilder_o *builder,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  PurchaseLogicAndroid_c *v15; // x0
  System_String_o *cachedObfuscatedAccountId; // x21
  System_String_o *IsNullOrEmpty; // x0
  __int64 v18; // x1
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v20; // x1
  System_String_o *v21; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v24; // x2
  System_String_c *klass; // x8
  struct System_Reflection_MethodInfo_o *v26; // x19
  __int64 v27; // x9
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x10
  __int64 v29; // x0

  if ( (byte_4B15B8D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, builder, method);
    sub_1BCA7E0(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_24421/*"unexpected obfuscatedAccountId:"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_789/*"(null)"*/, v11, v12);
    byte_4B15B8D = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, builder);
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
  {
    if ( !byte_4B15CA7 )
    {
      sub_1BCA7E0(&PurchaseLogicAndroid_TypeInfo, v13, v14);
      byte_4B15CA7 = 1;
    }
    v15 = PurchaseLogicAndroid_TypeInfo;
    if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, v13);
      v15 = PurchaseLogicAndroid_TypeInfo;
    }
    cachedObfuscatedAccountId = v15->static_fields->_cachedObfuscatedAccountId;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(cachedObfuscatedAccountId, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( cachedObfuscatedAccountId )
        v20 = cachedObfuscatedAccountId;
      else
        v20 = (System_String_o *)StringLiteral_789/*"(null)"*/;
      IsNullOrEmpty = System_String__Concat_62401220((System_String_o *)StringLiteral_24421/*"unexpected obfuscatedAccountId:"*/, v20, 0LL);
      if ( logErrorOutputAction )
      {
        v21 = IsNullOrEmpty;
        m_target = logErrorOutputAction->fields.m_target;
        original_method_info = logErrorOutputAction->fields.original_method_info;
        v24 = *(_QWORD *)&logErrorOutputAction->fields.extra_arg;
LABEL_26:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, __int64))m_target)(
          original_method_info,
          v21,
          v24);
        return;
      }
    }
    else if ( builder )
    {
      IsNullOrEmpty = (System_String_o *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                                           builder,
                                           (const MethodInfo_2F0B178 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
      if ( IsNullOrEmpty )
      {
        klass = IsNullOrEmpty->klass;
        v26 = (struct System_Reflection_MethodInfo_o *)IsNullOrEmpty;
        v27 = *(unsigned __int16 *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3) )
        {
          p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
          {
            --v27;
            p_offset += 2;
            if ( !v27 )
              goto LABEL_23;
          }
          v29 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_23:
          v29 = sub_1C1C7C0(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1LL);
        }
        m_target = *(Il2CppObject **)v29;
        v24 = *(_QWORD *)(v29 + 8);
        original_method_info = v26;
        v21 = cachedObfuscatedAccountId;
        goto LABEL_26;
      }
    }
    sub_1BCAA3C(IsNullOrEmpty, v18);
  }
}


void __fastcall PurchaseLogicAndroid__ShowPurchaseFailedNotification(
        PurchaseLogicAndroid_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  ;
}


void __fastcall PurchaseLogicAndroid___c__DisplayClass22_0___ctor(
        PurchaseLogicAndroid___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PurchaseLogicAndroid___c__DisplayClass22_0___OnDeferred_b__0(
        PurchaseLogicAndroid___c__DisplayClass22_0_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  if ( !bankShop )
    sub_1BCAA3C(this, 0LL);
  return System_String__Equals_62410340(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
}