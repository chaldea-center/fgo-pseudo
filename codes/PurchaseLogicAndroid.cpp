void PurchaseLogicAndroid___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5937F95 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    sub_21FFC50(&StringLiteral_15654/*"UnityPurchasingInitializeFailedCount"*/);
    byte_5937F95 = 1;
  }
  v7 = StringLiteral_15654/*"UnityPurchasingInitializeFailedCount"*/;
  PurchaseLogicAndroid_TypeInfo->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY = (struct System_String_o *)StringLiteral_15654/*"UnityPurchasingInitializeFailedCount"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PurchaseLogicAndroid_TypeInfo->static_fields,
    v7,
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
  float v6; // s0
  System_String_o *v7; // x20
  float v8; // s0
  System_String_o *v9; // x0
  CrashReporter_o *Instance; // x0
  __int64 v11; // x1
  _QWORD v12[7]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5937F91 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_21FFC50(&StringLiteral_304/*" rateToSend:"*/);
    sub_21FFC50(&StringLiteral_16547/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/);
    byte_5937F91 = 1;
  }
  v3 = PurchaseLogicAndroid_TypeInfo;
  v12[0] = 0;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v3 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0);
  HIDWORD(v12[0]) = Int;
  if ( Int >= 1 )
  {
    logOutputAction = this->fields._logOutputAction;
    v6 = 1.0 / (float)(Int + 1);
    if ( v6 < 0.1 )
      v6 = 0.1;
    *(float *)v12 = v6;
    v7 = System_Int32__ToString((int32_t)v12 + 4, 0);
    v9 = System_Single__ToString(v8, (const MethodInfo *)v12);
    Instance = (CrashReporter_o *)System_String__Concat_75483552(
                                    (System_String_o *)StringLiteral_16547/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/,
                                    v7,
                                    (System_String_o *)StringLiteral_304/*" rateToSend:"*/,
                                    v9,
                                    0);
    if ( !logOutputAction )
      goto LABEL_13;
    ((void (__fastcall *)(intptr_t, CrashReporter_o *, intptr_t))logOutputAction->fields.invoke_impl)(
      logOutputAction->fields.method_code,
      Instance,
      logOutputAction->fields.method);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0) < *(float *)v12 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_13:
      sub_21FFECC(Instance, v11);
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
  __int64 v6; // x1
  int32_t Int; // w8
  PurchaseLogicAndroid_c *v8; // x0
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_5937F93 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_5937F93 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v4);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0);
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0);
  v8 = PurchaseLogicAndroid_TypeInfo;
  MAX_COUNT_FOR_INITIALIZE_FAILED = (Int & ~(Int >> 31)) + 1;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, v6);
    v8 = PurchaseLogicAndroid_TypeInfo;
  }
  if ( MAX_COUNT_FOR_INITIALIZE_FAILED > v8->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED )
  {
    if ( *(&v8->_2.cctor_finished + 1) )
    {
      MAX_COUNT_FOR_INITIALIZE_FAILED = v8->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v8, v6);
      v8 = PurchaseLogicAndroid_TypeInfo;
      MAX_COUNT_FOR_INITIALIZE_FAILED = PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v6);
    v8 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v8->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY,
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

  if ( (byte_5937F92 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_5937F92 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v4);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0);
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x8
  __int64 v18; // x9
  Il2CppObject *v19; // x10
  MissionNaviTransitionBoardItem_o *p_fields; // x20
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *v28; // x8
  __int64 v29; // x9
  Il2CppObject *v30; // x10
  MissionNaviTransitionBoardItem_o *p_googleSignatureStr; // x21
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  int32_t v40; // w1
  Il2CppObject *v42; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v43; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5937F88 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_21FFC50(&StringLiteral_22109/*"json"*/);
    sub_21FFC50(&StringLiteral_11016/*"Payload"*/);
    sub_21FFC50(&StringLiteral_24687/*"signature"*/);
    this = (PurchaseLogicAndroid_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937F88 = 1;
  }
  v43 = 0;
  value = 0;
  v42 = 0;
  if ( !product )
    goto LABEL_37;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v5 = (PurchaseLogic_ReceiptContents_o *)sub_21FFEBC(PurchaseLogic_ReceiptContents_TypeInfo);
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
    (Il2CppObject *)StringLiteral_11016/*"Payload"*/,
    &value,
    (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
    v8 = value->klass == (Il2CppClass *)qword_594C0B8 ? (System_String_o *)value : 0LL;
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
          (Il2CppObject *)StringLiteral_22109/*"json"*/,
          &v43,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                           (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                           (Il2CppObject *)StringLiteral_24687/*"signature"*/,
                                           &v42,
                                           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v5) )
  {
LABEL_37:
    sub_21FFECC(this, product);
  }
  v17 = v43;
  if ( v43 )
  {
    v18 = qword_594C0B8;
    if ( v43->klass == (Il2CppClass *)qword_594C0B8 )
      v19 = v43;
    else
      v19 = 0;
    v5->fields.payloadJsonStr = (struct System_String_o *)v19;
    p_fields = (MissionNaviTransitionBoardItem_o *)&v5->fields;
    if ( v17->klass == (Il2CppClass *)v18 )
      v21 = (int)v17;
    else
      v21 = 0;
  }
  else
  {
    v21 = 0;
    v5->fields.payloadJsonStr = 0;
    p_fields = (MissionNaviTransitionBoardItem_o *)&v5->fields;
  }
  sub_21FFBF4(p_fields, v21, v11, v12, v13, v14, v15, v16);
  v28 = v42;
  if ( v42 )
  {
    v29 = qword_594C0B8;
    if ( v42->klass == (Il2CppClass *)qword_594C0B8 )
      v30 = v42;
    else
      v30 = 0;
    v5->fields.googleSignatureStr = (struct System_String_o *)v30;
    p_googleSignatureStr = (MissionNaviTransitionBoardItem_o *)&v5->fields.googleSignatureStr;
    if ( v28->klass == (Il2CppClass *)v29 )
      v32 = (int)v28;
    else
      v32 = 0;
  }
  else
  {
    v32 = 0;
    v5->fields.googleSignatureStr = 0;
    p_googleSignatureStr = (MissionNaviTransitionBoardItem_o *)&v5->fields.googleSignatureStr;
  }
  sub_21FFBF4(p_googleSignatureStr, v32, v22, v23, v24, v25, v26, v27);
  if ( !p_fields->klass )
  {
    v39 = (int)StringLiteral_1/*""*/;
    p_fields->klass = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
    sub_21FFBF4(p_fields, v39, v33, v34, v35, v36, v37, v38);
  }
  if ( !p_googleSignatureStr->klass )
  {
    v40 = (int)StringLiteral_1/*""*/;
    p_googleSignatureStr->klass = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
    sub_21FFBF4(p_googleSignatureStr, v40, v33, v34, v35, v36, v37, v38);
  }
  return v5;
}


System_String_o *PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_5937F89 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    byte_5937F89 = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
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
  if ( (byte_5937F87 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_Product__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    this = (PurchaseLogicAndroid_o *)sub_21FFC50(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    byte_5937F87 = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v5 = ConfigurationBuilder,
        v6 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
               ConfigurationBuilder,
               (const MethodInfo_37F0464 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_21FFEBC(System_Action_Product__TypeInfo),
        !v2)
    || (v7 = ConfigurationBuilder,
        System_Action_object____ctor(
          (System_Action_object__o *)ConfigurationBuilder,
          v2,
          (intptr_t)v2->klass->vtable[25].method,
          0),
        !v6) )
  {
    sub_21FFECC(ConfigurationBuilder, v4);
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
    v11 = sub_2237E2C(v6, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0);
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

  if ( (byte_5937F8D & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    byte_5937F8D = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
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

  if ( (byte_5937F8F & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    byte_5937F8F = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
    v2 = PurchaseLogicAndroid_TypeInfo;
  }
  return v2->static_fields->_isObfuscatedAccountIdMismatched;
}


bool PurchaseLogicAndroid__IsObfuscatedAccountIdCached(PurchaseLogicAndroid_o *this, const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_5937F8C & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    byte_5937F8C = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  struct System_String_o *id_k__BackingField; // x1
  __int64 v16; // x1
  PurchaseBehaviour_c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x21
  System_Func_object__bool__o *v19; // x22
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x7
  int32_t klass; // w5

  if ( (byte_5937F94 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
    sub_21FFC50(&System_Func_BankShopEntity__bool__TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__);
    sub_21FFC50(&PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
    byte_5937F94 = 1;
  }
  v5 = sub_21FFEBC(PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  this->fields._existsDeferredPurchase = 1;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0 || !v5 )
    sub_21FFECC(v6, v7);
  id_k__BackingField = definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v5 + 16) = id_k__BackingField;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)id_k__BackingField, v8, v9, v10, v11, v12, v13);
  v17 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v16);
    v17 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v17->static_fields->BankShopEntityCollection;
  v19 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__,
    0);
  v20 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v20 )
    klass = (int32_t)v20[1].klass;
  else
    klass = 0;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 15, 0, 0, 0, klass, 0, v21);
}


// local variable allocation has failed, the output may be wrong!
void PurchaseLogicAndroid__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_5937F8E & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    byte_5937F8E = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, isInitialized);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  v4->static_fields->_isAlreadyInitializedWithObfuscatedAccountId = isInitialized;
}


void PurchaseLogicAndroid__SetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        System_String_o *obfuscatedAccountId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  PurchaseLogicAndroid_c *v9; // x0
  struct PurchaseLogicAndroid_StaticFields *static_fields; // x0

  if ( (byte_5937F8B & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    byte_5937F8B = 1;
  }
  v9 = PurchaseLogicAndroid_TypeInfo;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, obfuscatedAccountId);
    v9 = PurchaseLogicAndroid_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_cachedObfuscatedAccountId = obfuscatedAccountId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_cachedObfuscatedAccountId,
    (int32_t)obfuscatedAccountId,
    (System_String_o *)method,
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


// local variable allocation has failed, the output may be wrong!
void PurchaseLogicAndroid__SetInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isMismatched,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_5937F90 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
    byte_5937F90 = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, isMismatched);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  v4->static_fields->_isObfuscatedAccountIdMismatched = isMismatched;
}


void PurchaseLogicAndroid__SetObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_ConfigurationBuilder_o *builder,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PurchaseLogicAndroid_c *v6; // x0
  System_String_o *cachedObfuscatedAccountId; // x21
  System_String_o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v11; // x1
  System_String_o *v12; // x1
  intptr_t method_code; // x0
  intptr_t v14; // x2
  void (__fastcall *invoke_impl)(intptr_t, System_String_o *, intptr_t); // x3
  System_String_c *klass; // x8
  intptr_t v17; // x19
  __int64 v18; // x9
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x10
  __int64 v20; // x0

  if ( (byte_5937F8A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    sub_21FFC50(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    sub_21FFC50(&StringLiteral_25568/*"unexpected obfuscatedAccountId:"*/);
    sub_21FFC50(&StringLiteral_771/*"(null)"*/);
    byte_5937F8A = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, builder);
  if ( UnityEngine_Application__get_platform(0) == 11 )
  {
    if ( !byte_5938098 )
    {
      sub_21FFC50(&PurchaseLogicAndroid_TypeInfo);
      byte_5938098 = 1;
    }
    v6 = PurchaseLogicAndroid_TypeInfo;
    if ( !*(&PurchaseLogicAndroid_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo, v5);
      v6 = PurchaseLogicAndroid_TypeInfo;
    }
    cachedObfuscatedAccountId = v6->static_fields->_cachedObfuscatedAccountId;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(cachedObfuscatedAccountId, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( cachedObfuscatedAccountId )
        v11 = cachedObfuscatedAccountId;
      else
        v11 = (System_String_o *)StringLiteral_771/*"(null)"*/;
      IsNullOrEmpty = System_String__Concat_75438412((System_String_o *)StringLiteral_25568/*"unexpected obfuscatedAccountId:"*/, v11, 0);
      if ( logErrorOutputAction )
      {
        v12 = IsNullOrEmpty;
        method_code = logErrorOutputAction->fields.method_code;
        v14 = logErrorOutputAction->fields.method;
        invoke_impl = (void (__fastcall *)(intptr_t, System_String_o *, intptr_t))logErrorOutputAction->fields.invoke_impl;
LABEL_26:
        invoke_impl(method_code, v12, v14);
        return;
      }
    }
    else if ( builder )
    {
      IsNullOrEmpty = (System_String_o *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                                           builder,
                                           (const MethodInfo_37F0464 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
      if ( IsNullOrEmpty )
      {
        klass = IsNullOrEmpty->klass;
        v17 = (intptr_t)IsNullOrEmpty;
        v18 = *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.rank;
        if ( *(_WORD *)&IsNullOrEmpty->klass->_2.rank )
        {
          p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
          {
            --v18;
            p_offset += 2;
            if ( !v18 )
              goto LABEL_23;
          }
          v20 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_23:
          v20 = sub_2237E2C(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1);
        }
        invoke_impl = *(void (__fastcall **)(intptr_t, System_String_o *, intptr_t))v20;
        v14 = *(_QWORD *)(v20 + 8);
        method_code = v17;
        v12 = cachedObfuscatedAccountId;
        goto LABEL_26;
      }
    }
    sub_21FFECC(IsNullOrEmpty, v9);
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
    sub_21FFECC(this, 0);
  return System_String__Equals_75474028(this->fields.productId, bankShop->fields.googleShopId, 4, 0);
}