void __fastcall PurchaseLogicAndroid___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDBEDB & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    sub_1C21E38(&StringLiteral_15339/*"UnityPurchasingInitializeFailedCount"*/);
    byte_4BDBEDB = 1;
  }
  PurchaseLogicAndroid_TypeInfo->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY = (struct System_String_o *)StringLiteral_15339/*"UnityPurchasingInitializeFailedCount"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)PurchaseLogicAndroid_TypeInfo->static_fields,
    StringLiteral_15339/*"UnityPurchasingInitializeFailedCount"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED = 1000;
}


void __fastcall PurchaseLogicAndroid__DisableCrashReporterOnInitialize(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v3; // x0
  int32_t Int; // w0
  struct System_Action_string__o *logOutputAction; // x21
  System_String_o *v6; // x20
  float v7; // s0
  System_String_o *v8; // x0
  CrashReporter_o *Instance; // x0
  __int64 v10; // x1
  float v11; // [xsp+8h] [xbp-38h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDBED7 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&StringLiteral_320/*" rateToSend:"*/);
    sub_1C21E38(&StringLiteral_16232/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/);
    byte_4BDBED7 = 1;
  }
  v3 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v3 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  v12 = Int;
  if ( Int >= 1 )
  {
    v11 = fmaxf(1.0 / (float)(Int + 1), 0.1);
    logOutputAction = this->fields._logOutputAction;
    v6 = System_Int32__ToString((int32_t)&v12, 0LL);
    v8 = System_Single__ToString(v7, (const MethodInfo *)&v11);
    Instance = (CrashReporter_o *)System_String__Concat_63128740(
                                    (System_String_o *)StringLiteral_16232/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/,
                                    v6,
                                    (System_String_o *)StringLiteral_320/*" rateToSend:"*/,
                                    v8,
                                    0LL);
    if ( !logOutputAction )
      goto LABEL_11;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, CrashReporter_o *, _QWORD))logOutputAction->fields.m_target)(
      logOutputAction->fields.original_method_info,
      Instance,
      *(_QWORD *)&logOutputAction->fields.extra_arg);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) < v11 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1C22094(Instance, v10);
    CrashReporter__DisableSampling(Instance, 0LL);
  }
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeFailed(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  PurchaseLogicAndroid_c *v5; // x0
  int32_t Int; // w0
  PurchaseLogicAndroid_c *v7; // x8
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_4BDBED9 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4BDBED9 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v4);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0LL);
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  v7 = PurchaseLogicAndroid_TypeInfo;
  MAX_COUNT_FOR_INITIALIZE_FAILED = (Int & ~(Int >> 31)) + 1;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v7 = PurchaseLogicAndroid_TypeInfo;
  }
  if ( MAX_COUNT_FOR_INITIALIZE_FAILED > v7->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED )
  {
    if ( v7->_2.cctor_finished )
    {
      MAX_COUNT_FOR_INITIALIZE_FAILED = v7->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PurchaseLogicAndroid_TypeInfo;
      MAX_COUNT_FOR_INITIALIZE_FAILED = PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v7->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY,
    MAX_COUNT_FOR_INITIALIZE_FAILED,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeSucceeded(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  PurchaseLogicAndroid_c *v5; // x0

  if ( (byte_4BDBED8 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4BDBED8 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v4);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0LL);
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v5->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogicAndroid__ExtractReceiptContents(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_String_o *receipt_k__BackingField; // x20
  PurchaseLogic_ReceiptContents_o *v5; // x19
  const MethodInfo *v6; // x1
  __int64 methodPtr_low; // x10
  System_String_o *v8; // x0
  PurchaseLogicAndroid_o *v9; // x20
  __int64 v10; // x10
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *v17; // x8
  System_String_c *v18; // x9
  Il2CppObject *v19; // x10
  PartyOrganizationUtility_o *p_fields; // x20
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x8
  System_String_c *v29; // x9
  Il2CppObject *v30; // x10
  PartyOrganizationUtility_o *p_googleSignatureStr; // x21
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  void *v39; // x1
  void *v40; // x1
  Il2CppObject *v42; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v43; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BDBECE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_21334/*"json"*/);
    sub_1C21E38(&StringLiteral_10793/*"Payload"*/);
    sub_1C21E38(&StringLiteral_23748/*"signature"*/);
    this = (PurchaseLogicAndroid_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBECE = 1;
  }
  v43 = 0LL;
  value = 0LL;
  v42 = 0LL;
  if ( !product )
    goto LABEL_37;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v5 = (PurchaseLogic_ReceiptContents_o *)sub_1C22084(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor(v5, v6);
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
    (Il2CppObject *)StringLiteral_10793/*"Payload"*/,
    &value,
    (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
    v8 = (System_String_c *)value->klass == string_TypeInfo ? (System_String_o *)value : 0LL;
  else
    v8 = 0LL;
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(v8, 0LL);
  if ( !this
    || (v9 = this,
        v10 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10)
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v10 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo
    || (System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_21334/*"json"*/,
          &v43,
          (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                           (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                           (Il2CppObject *)StringLiteral_23748/*"signature"*/,
                                           &v42,
                                           (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v5) )
  {
LABEL_37:
    sub_1C22094(this, product);
  }
  v17 = v43;
  if ( v43 )
  {
    v18 = string_TypeInfo;
    if ( (System_String_c *)v43->klass == string_TypeInfo )
      v19 = v43;
    else
      v19 = 0LL;
    v5->fields.payloadJsonStr = (struct System_String_o *)v19;
    p_fields = (PartyOrganizationUtility_o *)&v5->fields;
    if ( (System_String_c *)v17->klass == v18 )
      v21 = (int64_t)v17;
    else
      v21 = 0LL;
  }
  else
  {
    v21 = 0LL;
    v5->fields.payloadJsonStr = 0LL;
    p_fields = (PartyOrganizationUtility_o *)&v5->fields;
  }
  sub_1C21DDC(p_fields, v21, v11, v12, v13, v14, v15, v16);
  v28 = v42;
  if ( v42 )
  {
    v29 = string_TypeInfo;
    if ( (System_String_c *)v42->klass == string_TypeInfo )
      v30 = v42;
    else
      v30 = 0LL;
    v5->fields.googleSignatureStr = (struct System_String_o *)v30;
    p_googleSignatureStr = (PartyOrganizationUtility_o *)&v5->fields.googleSignatureStr;
    if ( (System_String_c *)v28->klass == v29 )
      v32 = (int64_t)v28;
    else
      v32 = 0LL;
  }
  else
  {
    v32 = 0LL;
    v5->fields.googleSignatureStr = 0LL;
    p_googleSignatureStr = (PartyOrganizationUtility_o *)&v5->fields.googleSignatureStr;
  }
  sub_1C21DDC(p_googleSignatureStr, v32, v22, v23, v24, v25, v26, v27);
  if ( !p_fields->klass )
  {
    v39 = StringLiteral_1/*""*/;
    p_fields->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
    sub_1C21DDC(p_fields, (int64_t)v39, v33, v34, v35, v36, v37, v38);
  }
  if ( !p_googleSignatureStr->klass )
  {
    v40 = StringLiteral_1/*""*/;
    p_googleSignatureStr->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
    sub_1C21DDC(p_googleSignatureStr, (int64_t)v40, v33, v34, v35, v36, v37, v38);
  }
  return v5;
}


System_String_o *__fastcall PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4BDBECF & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    byte_4BDBECF = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v2 = PurchaseLogicAndroid_TypeInfo;
  }
  return v2->static_fields->_cachedObfuscatedAccountId;
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogicAndroid__GetConfigurationBuilder(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x22
  UnityEngine_Purchasing_ConfigurationBuilder_o *ConfigurationBuilder; // x0
  __int64 v4; // x1
  UnityEngine_Purchasing_ConfigurationBuilder_o *v5; // x19
  Il2CppObject *v6; // x20
  UnityEngine_Purchasing_ConfigurationBuilder_o *v7; // x21
  Il2CppClass *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4BDBECD & 1) == 0 )
  {
    sub_1C21E38(&System_Action_Product__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    this = (PurchaseLogicAndroid_o *)sub_1C21E38(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    byte_4BDBECD = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v5 = ConfigurationBuilder,
        v6 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
               ConfigurationBuilder,
               (const MethodInfo_2FA82EC *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_1C22084(System_Action_Product__TypeInfo),
        !v2)
    || (v7 = ConfigurationBuilder,
        System_Action_object____ctor(
          (System_Action_object__o *)ConfigurationBuilder,
          v2,
          (intptr_t)v2->klass->vtable[26].methodPtr,
          0LL),
        !v6) )
  {
    sub_1C22094(ConfigurationBuilder, v4);
  }
  klass = v6->klass;
  v9 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IGooglePlayConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C73E18(v6, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(Il2CppObject *, UnityEngine_Purchasing_ConfigurationBuilder_o *, _QWORD))p_method)(
    v6,
    v7,
    *(_QWORD *)(p_method + 8));
  return v5;
}


bool __fastcall PurchaseLogicAndroid__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4BDBED3 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    byte_4BDBED3 = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v2 = PurchaseLogicAndroid_TypeInfo;
  }
  return v2->static_fields->_isAlreadyInitializedWithObfuscatedAccountId;
}


bool __fastcall PurchaseLogicAndroid__IsDeferredPurchaseExists(PurchaseLogicAndroid_o *this, const MethodInfo *method)
{
  return this->fields._existsDeferredPurchase;
}


bool __fastcall PurchaseLogicAndroid__IsInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4BDBED5 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    byte_4BDBED5 = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v2 = PurchaseLogicAndroid_TypeInfo;
  }
  return v2->static_fields->_isObfuscatedAccountIdMismatched;
}


bool __fastcall PurchaseLogicAndroid__IsObfuscatedAccountIdCached(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4BDBED2 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    byte_4BDBED2 = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v2 = PurchaseLogicAndroid_TypeInfo;
  }
  return !System_String__IsNullOrEmpty(v2->static_fields->_cachedObfuscatedAccountId, 0LL);
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
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  int64_t id_k__BackingField; // x1
  PurchaseBehaviour_c *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x21
  System_Func_object__bool__o *v18; // x22
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x7
  int32_t klass; // w5

  if ( (byte_4BDBEDA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_1C21E38(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    sub_1C21E38(&Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__);
    sub_1C21E38(&PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
    byte_4BDBEDA = 1;
  }
  v5 = sub_1C22084(PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  this->fields._existsDeferredPurchase = 1;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL || !v5 )
    sub_1C22094(v6, v7);
  id_k__BackingField = (int64_t)definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v5 + 16) = id_k__BackingField;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), id_k__BackingField, v8, v9, v10, v11, v12, v13);
  v16 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v16 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v16->static_fields->BankShopEntityCollection;
  v18 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v19 )
    klass = (int32_t)v19[1].klass;
  else
    klass = 0;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 15, 0, 0, 0, klass, 0, v20);
}


void __fastcall PurchaseLogicAndroid__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4BDBED4 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    byte_4BDBED4 = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
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

  if ( (byte_4BDBED1 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    byte_4BDBED1 = 1;
  }
  v9 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v9 = PurchaseLogicAndroid_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_cachedObfuscatedAccountId = obfuscatedAccountId;
  sub_1C21DDC(
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


void __fastcall PurchaseLogicAndroid__SetInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isMismatched,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4BDBED6 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
    byte_4BDBED6 = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  v4->static_fields->_isObfuscatedAccountIdMismatched = isMismatched;
}


void __fastcall PurchaseLogicAndroid__SetObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_ConfigurationBuilder_o *builder,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v5; // x0
  System_String_o *cachedObfuscatedAccountId; // x21
  System_String_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v10; // x1
  System_String_o *v11; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v14; // x2
  System_String_c *klass; // x8
  struct System_Reflection_MethodInfo_o *v16; // x19
  __int64 v17; // x9
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x10
  __int64 v19; // x0

  if ( (byte_4BDBED0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    sub_1C21E38(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    sub_1C21E38(&StringLiteral_24604/*"unexpected obfuscatedAccountId:"*/);
    sub_1C21E38(&StringLiteral_792/*"(null)"*/);
    byte_4BDBED0 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
  {
    if ( !byte_4BDBFEC )
    {
      sub_1C21E38(&PurchaseLogicAndroid_TypeInfo);
      byte_4BDBFEC = 1;
    }
    v5 = PurchaseLogicAndroid_TypeInfo;
    if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
      v5 = PurchaseLogicAndroid_TypeInfo;
    }
    cachedObfuscatedAccountId = v5->static_fields->_cachedObfuscatedAccountId;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(cachedObfuscatedAccountId, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( cachedObfuscatedAccountId )
        v10 = cachedObfuscatedAccountId;
      else
        v10 = (System_String_o *)StringLiteral_792/*"(null)"*/;
      IsNullOrEmpty = System_String__Concat_63115476((System_String_o *)StringLiteral_24604/*"unexpected obfuscatedAccountId:"*/, v10, 0LL);
      if ( logErrorOutputAction )
      {
        v11 = IsNullOrEmpty;
        m_target = logErrorOutputAction->fields.m_target;
        original_method_info = logErrorOutputAction->fields.original_method_info;
        v14 = *(_QWORD *)&logErrorOutputAction->fields.extra_arg;
LABEL_26:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, __int64))m_target)(
          original_method_info,
          v11,
          v14);
        return;
      }
    }
    else if ( builder )
    {
      IsNullOrEmpty = (System_String_o *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                                           builder,
                                           (const MethodInfo_2FA82EC *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
      if ( IsNullOrEmpty )
      {
        klass = IsNullOrEmpty->klass;
        v16 = (struct System_Reflection_MethodInfo_o *)IsNullOrEmpty;
        v17 = *(unsigned __int16 *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3) )
        {
          p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
          {
            --v17;
            p_offset += 2;
            if ( !v17 )
              goto LABEL_23;
          }
          v19 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_23:
          v19 = sub_1C73E18(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1LL);
        }
        m_target = *(Il2CppObject **)v19;
        v14 = *(_QWORD *)(v19 + 8);
        original_method_info = v16;
        v11 = cachedObfuscatedAccountId;
        goto LABEL_26;
      }
    }
    sub_1C22094(IsNullOrEmpty, v8);
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
    sub_1C22094(this, 0LL);
  return System_String__Equals_63124596(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
}