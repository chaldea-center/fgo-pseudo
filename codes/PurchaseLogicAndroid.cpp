void PurchaseLogicAndroid___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CEDFCD & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15145/*"UnityPurchasingInitializeFailedCount"*/);
    byte_4CEDFCD = 1;
  }
  PurchaseLogicAndroid_TypeInfo->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY = (struct System_String_o *)StringLiteral_15145/*"UnityPurchasingInitializeFailedCount"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)PurchaseLogicAndroid_TypeInfo->static_fields,
    StringLiteral_15145/*"UnityPurchasingInitializeFailedCount"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED = 1000;
}


void PurchaseLogicAndroid__DisableCrashReporterOnInitialize(PurchaseLogicAndroid_o *this, const MethodInfo *method)
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

  if ( (byte_4CEDFC9 & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C7BAE8(&StringLiteral_295/*" rateToSend:"*/);
    sub_1C7BAE8(&StringLiteral_16004/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/);
    byte_4CEDFC9 = 1;
  }
  v3 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v3 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0);
  v12 = Int;
  if ( Int >= 1 )
  {
    v11 = fmaxf(1.0 / (float)(Int + 1), 0.1);
    logOutputAction = this->fields._logOutputAction;
    v6 = System_Int32__ToString((int32_t)&v12, 0);
    v8 = System_Single__ToString(v7, (const MethodInfo *)&v11);
    Instance = (CrashReporter_o *)System_String__Concat_64217180(
                                    (System_String_o *)StringLiteral_16004/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/,
                                    v6,
                                    (System_String_o *)StringLiteral_295/*" rateToSend:"*/,
                                    v8,
                                    0);
    if ( !logOutputAction )
      goto LABEL_11;
    ((void (__fastcall *)(intptr_t, CrashReporter_o *, intptr_t))logOutputAction->fields.invoke_impl)(
      logOutputAction->fields.method_code,
      Instance,
      logOutputAction->fields.method);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0) < v11 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1C7BD40(Instance, v10);
    CrashReporter__DisableSampling(Instance, 0);
  }
}


void PurchaseLogicAndroid__EnableCrashReporterOnInitializeFailed(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  PurchaseLogicAndroid_c *v5; // x0
  int32_t Int; // w0
  PurchaseLogicAndroid_c *v7; // x8
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_4CEDFCB & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4CEDFCB = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v4);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0);
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0);
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
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void PurchaseLogicAndroid__EnableCrashReporterOnInitializeSucceeded(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  PurchaseLogicAndroid_c *v5; // x0

  if ( (byte_4CEDFCA & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4CEDFCA = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v4);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0);
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v5->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


PurchaseLogic_ReceiptContents_o *PurchaseLogicAndroid__ExtractReceiptContents(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  System_String_o *receipt_k__BackingField; // x20
  PurchaseLogic_ReceiptContents_o *v5; // x19
  const MethodInfo *v6; // x1
  __int64 naturalAligment; // x10
  System_String_o *v8; // x0
  PurchaseLogicAndroid_o *v9; // x20
  __int64 v10; // x10
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x8
  System_String_c *v18; // x9
  Il2CppObject *v19; // x10
  GrandQuestFolderBoardItem_o *p_fields; // x20
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  Il2CppObject *v28; // x8
  System_String_c *v29; // x9
  Il2CppObject *v30; // x10
  GrandQuestFolderBoardItem_o *p_googleSignatureStr; // x21
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w1
  Il2CppObject *v42; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v43; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEDFC0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C7BAE8(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&StringLiteral_21286/*"json"*/);
    sub_1C7BAE8(&StringLiteral_10627/*"Payload"*/);
    sub_1C7BAE8(&StringLiteral_23717/*"signature"*/);
    this = (PurchaseLogicAndroid_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDFC0 = 1;
  }
  v43 = 0;
  value = 0;
  v42 = 0;
  if ( !product )
    goto LABEL_37;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v5 = (PurchaseLogic_ReceiptContents_o *)sub_1C7BD34(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor(v5, v6);
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0);
  if ( !this )
    goto LABEL_37;
  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_37;
  }
  System_Collections_Generic_Dictionary_object__object___TryGetValue(
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (Il2CppObject *)StringLiteral_10627/*"Payload"*/,
    &value,
    (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
    v8 = (System_String_c *)value->klass == string_TypeInfo ? (System_String_o *)value : 0LL;
  else
    v8 = 0;
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(v8, 0);
  if ( !this
    || (v9 = this,
        v10 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
        this->klass->_2.naturalAligment < (unsigned int)v10)
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v10 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo
    || (System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_21286/*"json"*/,
          &v43,
          (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                           (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                           (Il2CppObject *)StringLiteral_23717/*"signature"*/,
                                           &v42,
                                           (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v5) )
  {
LABEL_37:
    sub_1C7BD40(this, product);
  }
  v17 = v43;
  if ( v43 )
  {
    v18 = string_TypeInfo;
    if ( (System_String_c *)v43->klass == string_TypeInfo )
      v19 = v43;
    else
      v19 = 0;
    v5->fields.payloadJsonStr = (struct System_String_o *)v19;
    p_fields = (GrandQuestFolderBoardItem_o *)&v5->fields;
    if ( (System_String_c *)v17->klass == v18 )
      v21 = (int)v17;
    else
      v21 = 0;
  }
  else
  {
    v21 = 0;
    v5->fields.payloadJsonStr = 0;
    p_fields = (GrandQuestFolderBoardItem_o *)&v5->fields;
  }
  sub_1C7BA8C(p_fields, v21, v11, v12, v13, v14, v15, v16);
  v28 = v42;
  if ( v42 )
  {
    v29 = string_TypeInfo;
    if ( (System_String_c *)v42->klass == string_TypeInfo )
      v30 = v42;
    else
      v30 = 0;
    v5->fields.googleSignatureStr = (struct System_String_o *)v30;
    p_googleSignatureStr = (GrandQuestFolderBoardItem_o *)&v5->fields.googleSignatureStr;
    if ( (System_String_c *)v28->klass == v29 )
      v32 = (int)v28;
    else
      v32 = 0;
  }
  else
  {
    v32 = 0;
    v5->fields.googleSignatureStr = 0;
    p_googleSignatureStr = (GrandQuestFolderBoardItem_o *)&v5->fields.googleSignatureStr;
  }
  sub_1C7BA8C(p_googleSignatureStr, v32, v22, v23, v24, v25, v26, v27);
  if ( !p_fields->klass )
  {
    v39 = StringLiteral_1/*""*/;
    p_fields->klass = (GrandQuestFolderBoardItem_c *)StringLiteral_1/*""*/;
    sub_1C7BA8C(p_fields, v39, v33, v34, v35, v36, v37, v38);
  }
  if ( !p_googleSignatureStr->klass )
  {
    v40 = StringLiteral_1/*""*/;
    p_googleSignatureStr->klass = (GrandQuestFolderBoardItem_c *)StringLiteral_1/*""*/;
    sub_1C7BA8C(p_googleSignatureStr, v40, v33, v34, v35, v36, v37, v38);
  }
  return v5;
}


System_String_o *PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4CEDFC1 & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    byte_4CEDFC1 = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v2 = PurchaseLogicAndroid_TypeInfo;
  }
  return v2->static_fields->_cachedObfuscatedAccountId;
}


UnityEngine_Purchasing_ConfigurationBuilder_o *PurchaseLogicAndroid__GetConfigurationBuilder(
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
  __int64 v11; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4CEDFBF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_Product__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    this = (PurchaseLogicAndroid_o *)sub_1C7BAE8(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    byte_4CEDFBF = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v5 = ConfigurationBuilder,
        v6 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
               ConfigurationBuilder,
               (const MethodInfo_3168840 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_1C7BD34(System_Action_Product__TypeInfo),
        !v2)
    || (v7 = ConfigurationBuilder,
        System_Action_object____ctor(
          (System_Action_object__o *)ConfigurationBuilder,
          v2,
          (intptr_t)v2->klass->vtable[25].method,
          0),
        !v6) )
  {
    sub_1C7BD40(ConfigurationBuilder, v4);
  }
  klass = v6->klass;
  v9 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IGooglePlayConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v11 = sub_1C51E70(v6, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0);
  }
  (*(void (__fastcall **)(Il2CppObject *, UnityEngine_Purchasing_ConfigurationBuilder_o *, _QWORD))v11)(
    v6,
    v7,
    *(_QWORD *)(v11 + 8));
  return v5;
}


bool PurchaseLogicAndroid__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4CEDFC5 & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    byte_4CEDFC5 = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v2 = PurchaseLogicAndroid_TypeInfo;
  }
  return v2->static_fields->_isAlreadyInitializedWithObfuscatedAccountId;
}


bool PurchaseLogicAndroid__IsDeferredPurchaseExists(PurchaseLogicAndroid_o *this, const MethodInfo *method)
{
  return this->fields._existsDeferredPurchase;
}


bool PurchaseLogicAndroid__IsInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4CEDFC7 & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    byte_4CEDFC7 = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v2 = PurchaseLogicAndroid_TypeInfo;
  }
  return v2->static_fields->_isObfuscatedAccountIdMismatched;
}


bool PurchaseLogicAndroid__IsObfuscatedAccountIdCached(PurchaseLogicAndroid_o *this, const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4CEDFC4 & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    byte_4CEDFC4 = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v2 = PurchaseLogicAndroid_TypeInfo;
  }
  return !System_String__IsNullOrEmpty(v2->static_fields->_cachedObfuscatedAccountId, 0);
}


bool PurchaseLogicAndroid__IsPurchasingFrameworkAvailable(PurchaseLogicAndroid_o *this, const MethodInfo *method)
{
  return 1;
}


void PurchaseLogicAndroid__OnDeferred(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o *id_k__BackingField; // x1
  PurchaseBehaviour_c *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x21
  System_Func_object__bool__o *v18; // x22
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x7
  int32_t klass; // w5

  if ( (byte_4CEDFCC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_1C7BAE8(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_1C7BAE8(&PurchaseBehaviour_TypeInfo);
    sub_1C7BAE8(&Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__);
    sub_1C7BAE8(&PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
    byte_4CEDFCC = 1;
  }
  v5 = sub_1C7BD34(PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  this->fields._existsDeferredPurchase = 1;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0 || !v5 )
    sub_1C7BD40(v6, v7);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v5 + 16) = id_k__BackingField;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)id_k__BackingField, v8, v9, v10, v11, v12, v13);
  v16 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v16 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v16->static_fields->BankShopEntityCollection;
  v18 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__,
    0);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v19 )
    klass = (int32_t)v19[1].klass;
  else
    klass = 0;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 15, 0, 0, 0, klass, 0, v20);
}


void PurchaseLogicAndroid__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4CEDFC6 & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    byte_4CEDFC6 = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  v4->static_fields->_isAlreadyInitializedWithObfuscatedAccountId = isInitialized;
}


void PurchaseLogicAndroid__SetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  PurchaseLogicAndroid_c *v9; // x0
  struct PurchaseLogicAndroid_StaticFields *static_fields; // x0

  if ( (byte_4CEDFC3 & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    byte_4CEDFC3 = 1;
  }
  v9 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v9 = PurchaseLogicAndroid_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_cachedObfuscatedAccountId = obfuscatedAccountId;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_cachedObfuscatedAccountId,
    (int32_t)obfuscatedAccountId,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PurchaseLogicAndroid__SetExistsDeferredPurchase(
        PurchaseLogicAndroid_o *this,
        bool exists,
        const MethodInfo *method)
{
  this->fields._existsDeferredPurchase = exists;
}


void PurchaseLogicAndroid__SetInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isMismatched,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4CEDFC8 & 1) == 0 )
  {
    sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
    byte_4CEDFC8 = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  v4->static_fields->_isObfuscatedAccountIdMismatched = isMismatched;
}


void PurchaseLogicAndroid__SetObfuscatedAccountId(
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
  void (__fastcall *invoke_impl)(intptr_t, System_String_o *, intptr_t); // x3
  intptr_t method_code; // x0
  intptr_t v14; // x2
  System_String_c *klass; // x8
  intptr_t v16; // x19
  __int64 v17; // x9
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x10
  __int64 v19; // x0

  if ( (byte_4CEDFC2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    sub_1C7BAE8(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24542/*"unexpected obfuscatedAccountId:"*/);
    sub_1C7BAE8(&StringLiteral_740/*"(null)"*/);
    byte_4CEDFC2 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0) == 11 )
  {
    if ( !byte_4CEE0CC )
    {
      sub_1C7BAE8(&PurchaseLogicAndroid_TypeInfo);
      byte_4CEE0CC = 1;
    }
    v5 = PurchaseLogicAndroid_TypeInfo;
    if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
      v5 = PurchaseLogicAndroid_TypeInfo;
    }
    cachedObfuscatedAccountId = v5->static_fields->_cachedObfuscatedAccountId;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(cachedObfuscatedAccountId, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( cachedObfuscatedAccountId )
        v10 = cachedObfuscatedAccountId;
      else
        v10 = (System_String_o *)StringLiteral_740/*"(null)"*/;
      IsNullOrEmpty = System_String__Concat_64176912((System_String_o *)StringLiteral_24542/*"unexpected obfuscatedAccountId:"*/, v10, 0);
      if ( logErrorOutputAction )
      {
        v11 = IsNullOrEmpty;
        invoke_impl = (void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logErrorOutputAction->fields.invoke_impl;
        method_code = logErrorOutputAction->fields.method_code;
        v14 = logErrorOutputAction->fields.method;
LABEL_26:
        invoke_impl(method_code, v11, v14);
        return;
      }
    }
    else if ( builder )
    {
      IsNullOrEmpty = (System_String_o *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                                           builder,
                                           (const MethodInfo_3168840 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
      if ( IsNullOrEmpty )
      {
        klass = IsNullOrEmpty->klass;
        v16 = (intptr_t)IsNullOrEmpty;
        v17 = *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.rank;
        if ( *(_WORD *)&IsNullOrEmpty->klass->_2.rank )
        {
          p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
          {
            --v17;
            p_offset += 2;
            if ( !v17 )
              goto LABEL_23;
          }
          v19 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_23:
          v19 = sub_1C51E70(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1);
        }
        invoke_impl = *(void (__fastcall **)(intptr_t, System_String_o *, intptr_t))v19;
        v14 = *(_QWORD *)(v19 + 8);
        method_code = v16;
        v11 = cachedObfuscatedAccountId;
        goto LABEL_26;
      }
    }
    sub_1C7BD40(IsNullOrEmpty, v8);
  }
}


void PurchaseLogicAndroid__ShowPurchaseFailedNotification(
        PurchaseLogicAndroid_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  ;
}


void PurchaseLogicAndroid___c__DisplayClass22_0___ctor(
        PurchaseLogicAndroid___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PurchaseLogicAndroid___c__DisplayClass22_0___OnDeferred_b__0(
        PurchaseLogicAndroid___c__DisplayClass22_0_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  if ( !bankShop )
    sub_1C7BD40(this, 0);
  return System_String__Equals_64213036(this->fields.productId, bankShop->fields.googleShopId, 4, 0);
}