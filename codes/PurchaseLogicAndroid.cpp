void PurchaseLogicAndroid___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C428DB & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    sub_1C37058(&StringLiteral_15087/*"UnityPurchasingInitializeFailedCount"*/);
    byte_4C428DB = 1;
  }
  PurchaseLogicAndroid_TypeInfo->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY = (struct System_String_o *)StringLiteral_15087/*"UnityPurchasingInitializeFailedCount"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)PurchaseLogicAndroid_TypeInfo->static_fields, StringLiteral_15087/*"UnityPurchasingInitializeFailedCount"*/, v1, v2);
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
  float v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C428D7 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C37058(&StringLiteral_294/*" rateToSend:"*/);
    sub_1C37058(&StringLiteral_15948/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/);
    byte_4C428D7 = 1;
  }
  v3 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v3 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0);
  v11 = Int;
  if ( Int >= 1 )
  {
    v10 = fmaxf(1.0 / (float)(Int + 1), 0.1);
    logOutputAction = this->fields._logOutputAction;
    v6 = System_Int32__ToString((int32_t)&v11, 0);
    v8 = System_Single__ToString(v7, (const MethodInfo *)&v10);
    Instance = (CrashReporter_o *)System_String__Concat_63601908(
                                    (System_String_o *)StringLiteral_15948/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/,
                                    v6,
                                    (System_String_o *)StringLiteral_294/*" rateToSend:"*/,
                                    v8,
                                    0);
    if ( !logOutputAction )
      goto LABEL_11;
    ((void (__fastcall *)(intptr_t, CrashReporter_o *, intptr_t))logOutputAction->fields.invoke_impl)(
      logOutputAction->fields.method_code,
      Instance,
      logOutputAction->fields.method);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0) < v10 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1C372B4(Instance);
    CrashReporter__DisableSampling(Instance, 0);
  }
}


void PurchaseLogicAndroid__EnableCrashReporterOnInitializeFailed(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  PurchaseLogicAndroid_c *v4; // x0
  int32_t Int; // w0
  PurchaseLogicAndroid_c *v6; // x8
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_4C428D9 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4C428D9 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0);
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v4->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0);
  v6 = PurchaseLogicAndroid_TypeInfo;
  MAX_COUNT_FOR_INITIALIZE_FAILED = (Int & ~(Int >> 31)) + 1;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v6 = PurchaseLogicAndroid_TypeInfo;
  }
  if ( MAX_COUNT_FOR_INITIALIZE_FAILED > v6->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED )
  {
    if ( v6->_2.cctor_finished )
    {
      MAX_COUNT_FOR_INITIALIZE_FAILED = v6->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = PurchaseLogicAndroid_TypeInfo;
      MAX_COUNT_FOR_INITIALIZE_FAILED = PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v6->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY,
    MAX_COUNT_FOR_INITIALIZE_FAILED,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void PurchaseLogicAndroid__EnableCrashReporterOnInitializeSucceeded(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4C428D8 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4C428D8 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0);
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0);
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
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x8
  System_String_c *v14; // x9
  Il2CppObject *v15; // x10
  CGThumbnailListItem_o *p_fields; // x20
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x8
  System_String_c *v21; // x9
  Il2CppObject *v22; // x10
  CGThumbnailListItem_o *p_googleSignatureStr; // x21
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w1
  Il2CppObject *v30; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v31; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C428CE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_21092/*"json"*/);
    sub_1C37058(&StringLiteral_10591/*"Payload"*/);
    sub_1C37058(&StringLiteral_23495/*"signature"*/);
    this = (PurchaseLogicAndroid_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C428CE = 1;
  }
  v31 = 0;
  value = 0;
  v30 = 0;
  if ( !product )
    goto LABEL_37;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v5 = (PurchaseLogic_ReceiptContents_o *)sub_1C372A4(PurchaseLogic_ReceiptContents_TypeInfo);
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
    (Il2CppObject *)StringLiteral_10591/*"Payload"*/,
    &value,
    (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
          (Il2CppObject *)StringLiteral_21092/*"json"*/,
          &v31,
          (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                           (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                           (Il2CppObject *)StringLiteral_23495/*"signature"*/,
                                           &v30,
                                           (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v5) )
  {
LABEL_37:
    sub_1C372B4(this);
  }
  v13 = v31;
  if ( v31 )
  {
    v14 = string_TypeInfo;
    if ( (System_String_c *)v31->klass == string_TypeInfo )
      v15 = v31;
    else
      v15 = 0;
    v5->fields.payloadJsonStr = (struct System_String_o *)v15;
    p_fields = (CGThumbnailListItem_o *)&v5->fields;
    if ( (System_String_c *)v13->klass == v14 )
      v17 = (int)v13;
    else
      v17 = 0;
  }
  else
  {
    v17 = 0;
    v5->fields.payloadJsonStr = 0;
    p_fields = (CGThumbnailListItem_o *)&v5->fields;
  }
  sub_1C36FFC(p_fields, v17, v11, v12);
  v20 = v30;
  if ( v30 )
  {
    v21 = string_TypeInfo;
    if ( (System_String_c *)v30->klass == string_TypeInfo )
      v22 = v30;
    else
      v22 = 0;
    v5->fields.googleSignatureStr = (struct System_String_o *)v22;
    p_googleSignatureStr = (CGThumbnailListItem_o *)&v5->fields.googleSignatureStr;
    if ( (System_String_c *)v20->klass == v21 )
      v24 = (int)v20;
    else
      v24 = 0;
  }
  else
  {
    v24 = 0;
    v5->fields.googleSignatureStr = 0;
    p_googleSignatureStr = (CGThumbnailListItem_o *)&v5->fields.googleSignatureStr;
  }
  sub_1C36FFC(p_googleSignatureStr, v24, v18, v19);
  if ( !p_fields->klass )
  {
    v27 = StringLiteral_1/*""*/;
    p_fields->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
    sub_1C36FFC(p_fields, v27, v25, v26);
  }
  if ( !p_googleSignatureStr->klass )
  {
    v28 = StringLiteral_1/*""*/;
    p_googleSignatureStr->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
    sub_1C36FFC(p_googleSignatureStr, v28, v25, v26);
  }
  return v5;
}


System_String_o *PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4C428CF & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    byte_4C428CF = 1;
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
  UnityEngine_Purchasing_ConfigurationBuilder_o *v4; // x19
  Il2CppObject *v5; // x20
  UnityEngine_Purchasing_ConfigurationBuilder_o *v6; // x21
  Il2CppClass *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4C428CD & 1) == 0 )
  {
    sub_1C37058(&System_Action_Product__TypeInfo);
    sub_1C37058(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    this = (PurchaseLogicAndroid_o *)sub_1C37058(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    byte_4C428CD = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v4 = ConfigurationBuilder,
        v5 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
               ConfigurationBuilder,
               (const MethodInfo_30E00A4 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_1C372A4(System_Action_Product__TypeInfo),
        !v2)
    || (v6 = ConfigurationBuilder,
        System_Action_object____ctor(
          (System_Action_object__o *)ConfigurationBuilder,
          v2,
          (intptr_t)v2->klass->vtable[25].method,
          0),
        !v5) )
  {
    sub_1C372B4(ConfigurationBuilder);
  }
  klass = v5->klass;
  v8 = *(unsigned __int16 *)&v5->klass->_2.rank;
  if ( *(_WORD *)&v5->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IGooglePlayConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v10 = sub_1C87870(v5, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0);
  }
  (*(void (__fastcall **)(Il2CppObject *, UnityEngine_Purchasing_ConfigurationBuilder_o *, _QWORD))v10)(
    v5,
    v6,
    *(_QWORD *)(v10 + 8));
  return v4;
}


bool PurchaseLogicAndroid__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4C428D3 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    byte_4C428D3 = 1;
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

  if ( (byte_4C428D5 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    byte_4C428D5 = 1;
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

  if ( (byte_4C428D2 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    byte_4C428D2 = 1;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o *id_k__BackingField; // x1
  PurchaseBehaviour_c *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x21
  System_Func_object__bool__o *v13; // x22
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x7
  int32_t klass; // w5

  if ( (byte_4C428DA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_1C37058(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_1C37058(&PurchaseBehaviour_TypeInfo);
    sub_1C37058(&Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__);
    sub_1C37058(&PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
    byte_4C428DA = 1;
  }
  v5 = sub_1C372A4(PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  this->fields._existsDeferredPurchase = 1;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0 || !v5 )
    sub_1C372B4(v6);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v5 + 16) = id_k__BackingField;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)id_k__BackingField, v7, v8);
  v11 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v11 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v11->static_fields->BankShopEntityCollection;
  v13 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v14 )
    klass = (int32_t)v14[1].klass;
  else
    klass = 0;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 15, 0, 0, 0, klass, 0, v15);
}


void PurchaseLogicAndroid__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4C428D4 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    byte_4C428D4 = 1;
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
  const MethodInfo *v3; // x3
  PurchaseLogicAndroid_c *v5; // x0
  struct PurchaseLogicAndroid_StaticFields *static_fields; // x0

  if ( (byte_4C428D1 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    byte_4C428D1 = 1;
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_cachedObfuscatedAccountId = obfuscatedAccountId;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&static_fields->_cachedObfuscatedAccountId,
    (int32_t)obfuscatedAccountId,
    (int32_t)method,
    v3);
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

  if ( (byte_4C428D6 & 1) == 0 )
  {
    sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
    byte_4C428D6 = 1;
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
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v9; // x1
  System_String_o *v10; // x1
  void (__fastcall *invoke_impl)(intptr_t, System_String_o *, intptr_t); // x3
  intptr_t method_code; // x0
  intptr_t v13; // x2
  System_String_c *klass; // x8
  intptr_t v15; // x19
  __int64 v16; // x9
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x10
  __int64 v18; // x0

  if ( (byte_4C428D0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    sub_1C37058(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    sub_1C37058(&StringLiteral_24300/*"unexpected obfuscatedAccountId:"*/);
    sub_1C37058(&StringLiteral_743/*"(null)"*/);
    byte_4C428D0 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0) == 11 )
  {
    if ( !byte_4C429ED )
    {
      sub_1C37058(&PurchaseLogicAndroid_TypeInfo);
      byte_4C429ED = 1;
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
        v9 = cachedObfuscatedAccountId;
      else
        v9 = (System_String_o *)StringLiteral_743/*"(null)"*/;
      IsNullOrEmpty = System_String__Concat_63561656((System_String_o *)StringLiteral_24300/*"unexpected obfuscatedAccountId:"*/, v9, 0);
      if ( logErrorOutputAction )
      {
        v10 = IsNullOrEmpty;
        invoke_impl = (void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logErrorOutputAction->fields.invoke_impl;
        method_code = logErrorOutputAction->fields.method_code;
        v13 = logErrorOutputAction->fields.method;
LABEL_26:
        invoke_impl(method_code, v10, v13);
        return;
      }
    }
    else if ( builder )
    {
      IsNullOrEmpty = (System_String_o *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                                           builder,
                                           (const MethodInfo_30E00A4 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
      if ( IsNullOrEmpty )
      {
        klass = IsNullOrEmpty->klass;
        v15 = (intptr_t)IsNullOrEmpty;
        v16 = *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.rank;
        if ( *(_WORD *)&IsNullOrEmpty->klass->_2.rank )
        {
          p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
          {
            --v16;
            p_offset += 2;
            if ( !v16 )
              goto LABEL_23;
          }
          v18 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_23:
          v18 = sub_1C87870(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1);
        }
        invoke_impl = *(void (__fastcall **)(intptr_t, System_String_o *, intptr_t))v18;
        v13 = *(_QWORD *)(v18 + 8);
        method_code = v15;
        v10 = cachedObfuscatedAccountId;
        goto LABEL_26;
      }
    }
    sub_1C372B4(IsNullOrEmpty);
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
    sub_1C372B4(this);
  return System_String__Equals_63597764(this->fields.productId, bankShop->fields.googleShopId, 4, 0);
}