void __fastcall PurchaseLogicAndroid___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5AB14 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    sub_1B885B0(&StringLiteral_15076/*"UnityPurchasingInitializeFailedCount"*/);
    byte_4A5AB14 = 1;
  }
  PurchaseLogicAndroid_TypeInfo->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY = (struct System_String_o *)StringLiteral_15076/*"UnityPurchasingInitializeFailedCount"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PurchaseLogicAndroid_TypeInfo->static_fields,
    StringLiteral_15076/*"UnityPurchasingInitializeFailedCount"*/,
    v1,
    v2);
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

  if ( (byte_4A5AB10 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1B885B0(&StringLiteral_323/*" rateToSend:"*/);
    sub_1B885B0(&StringLiteral_15957/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/);
    byte_4A5AB10 = 1;
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
    Instance = (CrashReporter_o *)System_String__Concat_61720296(
                                    (System_String_o *)StringLiteral_15957/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/,
                                    v6,
                                    (System_String_o *)StringLiteral_323/*" rateToSend:"*/,
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
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1B8880C(Instance, v10);
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

  if ( (byte_4A5AB12 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4A5AB12 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5AB11 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4A5AB11 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v4);
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
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x8
  System_String_c *v14; // x9
  Il2CppObject *v15; // x10
  ServantStatusBattleListViewItem_o *p_fields; // x20
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x8
  System_String_c *v21; // x9
  Il2CppObject *v22; // x10
  ServantStatusBattleListViewItem_o *p_googleSignatureStr; // x21
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w1
  Il2CppObject *v30; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v31; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5AB07 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_20957/*"json"*/);
    sub_1B885B0(&StringLiteral_10587/*"Payload"*/);
    sub_1B885B0(&StringLiteral_23320/*"signature"*/);
    this = (PurchaseLogicAndroid_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AB07 = 1;
  }
  v31 = 0LL;
  value = 0LL;
  v30 = 0LL;
  if ( !product )
    goto LABEL_37;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v5 = (PurchaseLogic_ReceiptContents_o *)sub_1B887FC(PurchaseLogic_ReceiptContents_TypeInfo);
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
    (Il2CppObject *)StringLiteral_10587/*"Payload"*/,
    &value,
    (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
          (Il2CppObject *)StringLiteral_20957/*"json"*/,
          &v31,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                           (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                           (Il2CppObject *)StringLiteral_23320/*"signature"*/,
                                           &v30,
                                           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v5) )
  {
LABEL_37:
    sub_1B8880C(this, product);
  }
  v13 = v31;
  if ( v31 )
  {
    v14 = string_TypeInfo;
    if ( (System_String_c *)v31->klass == string_TypeInfo )
      v15 = v31;
    else
      v15 = 0LL;
    v5->fields.payloadJsonStr = (struct System_String_o *)v15;
    p_fields = (ServantStatusBattleListViewItem_o *)&v5->fields;
    if ( (System_String_c *)v13->klass == v14 )
      v17 = (int)v13;
    else
      v17 = 0;
  }
  else
  {
    v17 = 0;
    v5->fields.payloadJsonStr = 0LL;
    p_fields = (ServantStatusBattleListViewItem_o *)&v5->fields;
  }
  sub_1B88554(p_fields, v17, v11, v12);
  v20 = v30;
  if ( v30 )
  {
    v21 = string_TypeInfo;
    if ( (System_String_c *)v30->klass == string_TypeInfo )
      v22 = v30;
    else
      v22 = 0LL;
    v5->fields.googleSignatureStr = (struct System_String_o *)v22;
    p_googleSignatureStr = (ServantStatusBattleListViewItem_o *)&v5->fields.googleSignatureStr;
    if ( (System_String_c *)v20->klass == v21 )
      v24 = (int)v20;
    else
      v24 = 0;
  }
  else
  {
    v24 = 0;
    v5->fields.googleSignatureStr = 0LL;
    p_googleSignatureStr = (ServantStatusBattleListViewItem_o *)&v5->fields.googleSignatureStr;
  }
  sub_1B88554(p_googleSignatureStr, v24, v18, v19);
  if ( !p_fields->klass )
  {
    v27 = (int)StringLiteral_1/*""*/;
    p_fields->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
    sub_1B88554(p_fields, v27, v25, v26);
  }
  if ( !p_googleSignatureStr->klass )
  {
    v28 = (int)StringLiteral_1/*""*/;
    p_googleSignatureStr->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
    sub_1B88554(p_googleSignatureStr, v28, v25, v26);
  }
  return v5;
}


System_String_o *__fastcall PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4A5AB08 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    byte_4A5AB08 = 1;
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
  if ( (byte_4A5AB06 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_Product__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    this = (PurchaseLogicAndroid_o *)sub_1B885B0(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    byte_4A5AB06 = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v5 = ConfigurationBuilder,
        v6 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
               ConfigurationBuilder,
               (const MethodInfo_2E77DF0 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_1B887FC(System_Action_Product__TypeInfo),
        !v2)
    || (v7 = ConfigurationBuilder,
        System_Action_object____ctor(
          (System_Action_object__o *)ConfigurationBuilder,
          v2,
          (intptr_t)v2->klass->vtable[26].methodPtr,
          0LL),
        !v6) )
  {
    sub_1B8880C(ConfigurationBuilder, v4);
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
    p_method = sub_1BDA590(v6, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0LL);
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

  if ( (byte_4A5AB0C & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    byte_4A5AB0C = 1;
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

  if ( (byte_4A5AB0E & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    byte_4A5AB0E = 1;
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

  if ( (byte_4A5AB0B & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    byte_4A5AB0B = 1;
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o *id_k__BackingField; // x1
  PurchaseBehaviour_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x21
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x7
  int32_t klass; // w5

  if ( (byte_4A5AB13 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_1B885B0(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__);
    sub_1B885B0(&PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
    byte_4A5AB13 = 1;
  }
  v5 = sub_1B887FC(PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  this->fields._existsDeferredPurchase = 1;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL || !v5 )
    sub_1B8880C(v6, v7);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v5 + 16) = id_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)id_k__BackingField, v8, v9);
  v12 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v12 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->BankShopEntityCollection;
  v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v15 )
    klass = (int32_t)v15[1].klass;
  else
    klass = 0;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 15, 0, 0, 0, klass, 0, v16);
}


void __fastcall PurchaseLogicAndroid__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4A5AB0D & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    byte_4A5AB0D = 1;
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
  PurchaseLogicAndroid_c *v5; // x0
  struct PurchaseLogicAndroid_StaticFields *static_fields; // x0

  if ( (byte_4A5AB0A & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    byte_4A5AB0A = 1;
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_cachedObfuscatedAccountId = obfuscatedAccountId;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_cachedObfuscatedAccountId,
    (int32_t)obfuscatedAccountId,
    (int32_t)method,
    v3);
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

  if ( (byte_4A5AB0F & 1) == 0 )
  {
    sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
    byte_4A5AB0F = 1;
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

  if ( (byte_4A5AB09 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    sub_1B885B0(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    sub_1B885B0(&StringLiteral_24169/*"unexpected obfuscatedAccountId:"*/);
    sub_1B885B0(&StringLiteral_794/*"(null)"*/);
    byte_4A5AB09 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
  {
    if ( !byte_4A5AC23 )
    {
      sub_1B885B0(&PurchaseLogicAndroid_TypeInfo);
      byte_4A5AC23 = 1;
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
        v10 = (System_String_o *)StringLiteral_794/*"(null)"*/;
      IsNullOrEmpty = System_String__Concat_61707032((System_String_o *)StringLiteral_24169/*"unexpected obfuscatedAccountId:"*/, v10, 0LL);
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
                                           (const MethodInfo_2E77DF0 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
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
          v19 = sub_1BDA590(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1LL);
        }
        m_target = *(Il2CppObject **)v19;
        v14 = *(_QWORD *)(v19 + 8);
        original_method_info = v16;
        v11 = cachedObfuscatedAccountId;
        goto LABEL_26;
      }
    }
    sub_1B8880C(IsNullOrEmpty, v8);
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
    sub_1B8880C(this, 0LL);
  return System_String__Equals_61716152(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
}