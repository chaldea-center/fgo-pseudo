void __fastcall PurchaseLogicAndroid___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4187AD3 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_14957/*"UnityPurchasingInitializeFailedCount"*/, v8);
    byte_4187AD3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PurchaseLogicAndroid_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_14957/*"UnityPurchasingInitializeFailedCount"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_14957/*"UnityPurchasingInitializeFailedCount"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
  PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED = 1000;
}


void __fastcall PurchaseLogicAndroid__DisableCrashReporterOnInitialize(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PurchaseLogicAndroid_c *v7; // x0
  int32_t Int; // w0
  struct System_Action_string__o *logOutputAction; // x20
  System_String_o *v10; // x21
  float v11; // s0
  System_String_o *v12; // x0
  System_Uri_o *Instance; // x0
  __int64 v14; // x1
  _QWORD _8[5]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187AD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, method);
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_252/*" rateToSend:"*/, v5);
    sub_B2C35C(&StringLiteral_15761/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/, v6);
    byte_4187AD0 = 1;
  }
  _8[0] = 0LL;
  v7 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v7 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v7->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  HIDWORD(_8[0]) = Int;
  if ( Int >= 1 )
  {
    LODWORD(_8[0]) = fmaxf(1.0 / (float)(Int + 1), 0.1);
    logOutputAction = this->fields._logOutputAction;
    v10 = System_Int32__ToString((int32_t)_8 + 4, 0LL);
    v12 = System_Single__ToString(v11, (const MethodInfo *)_8);
    Instance = (System_Uri_o *)System_String__Concat_44308944(
                                 (System_String_o *)StringLiteral_15761/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/,
                                 v10,
                                 (System_String_o *)StringLiteral_252/*" rateToSend:"*/,
                                 v12,
                                 0LL);
    if ( !logOutputAction )
      goto LABEL_12;
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)logOutputAction,
      Instance,
      (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) < *(float *)_8 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (System_Uri_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_12:
      sub_B2C434(Instance, v14);
    CrashReporter__DisableSampling((CrashReporter_o *)Instance, 0LL);
  }
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeFailed(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CrashReporter_o *Instance; // x0
  __int64 v5; // x1
  PurchaseLogicAndroid_c *v6; // x0
  int32_t Int; // w0
  PurchaseLogicAndroid_c *v8; // x8
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_4187AD2 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v3);
    byte_4187AD2 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v5);
    CrashReporter__EnableSampling(Instance, 0LL);
  }
  v6 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v6 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v6->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  v8 = PurchaseLogicAndroid_TypeInfo;
  MAX_COUNT_FOR_INITIALIZE_FAILED = (Int & ~(Int >> 31)) + 1;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v8 = PurchaseLogicAndroid_TypeInfo;
  }
  if ( MAX_COUNT_FOR_INITIALIZE_FAILED > v8->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = PurchaseLogicAndroid_TypeInfo;
      MAX_COUNT_FOR_INITIALIZE_FAILED = PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
    else
    {
      MAX_COUNT_FOR_INITIALIZE_FAILED = v8->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v8->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY,
    MAX_COUNT_FOR_INITIALIZE_FAILED,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeSucceeded(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CrashReporter_o *Instance; // x0
  __int64 v5; // x1
  PurchaseLogicAndroid_c *v6; // x0

  if ( (byte_4187AD1 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v3);
    byte_4187AD1 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v5);
    CrashReporter__EnableSampling(Instance, 0LL);
  }
  v6 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v6 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogicAndroid__ExtractReceiptContents(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *receipt_k__BackingField; // x20
  __int64 v12; // x19
  __int64 v13; // x10
  System_String_o *v14; // x0
  PurchaseLogicAndroid_o *v15; // x20
  __int64 v16; // x10
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  _QWORD *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_Int32_array **v39; // x1
  System_Xml_Schema_XmlSchemaObject_o *v41; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v42; // [xsp+10h] [xbp-30h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4187AC7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, product);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4);
    sub_B2C35C(&PurchaseLogic_ReceiptContents_TypeInfo, v5);
    sub_B2C35C(&string_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_20078/*"json"*/, v7);
    sub_B2C35C(&StringLiteral_10626/*"Payload"*/, v8);
    sub_B2C35C(&StringLiteral_22124/*"signature"*/, v9);
    this = (PurchaseLogicAndroid_o *)sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4187AC7 = 1;
  }
  v42 = 0LL;
  value = 0LL;
  v41 = 0LL;
  if ( !product )
    goto LABEL_31;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v12 = sub_B2C42C(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v12, 0LL);
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !this )
    goto LABEL_31;
  v13 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v13 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_31;
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_10626/*"Payload"*/,
    &value,
    (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
    v14 = (System_String_c *)value->klass == string_TypeInfo ? (System_String_o *)value : 0LL;
  else
    v14 = 0LL;
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(v14, 0LL);
  if ( !this
    || (v15 = this,
        v16 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v16)
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20078/*"json"*/,
          &v42,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
                                           (System_Xml_XmlQualifiedName_o *)StringLiteral_22124/*"signature"*/,
                                           &v41,
                                           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v12) )
  {
LABEL_31:
    sub_B2C434(this, product);
  }
  if ( v42 )
  {
    if ( (System_String_c *)v42->klass == string_TypeInfo )
      v23 = (System_Int32_array **)v42;
    else
      v23 = 0LL;
  }
  else
  {
    v23 = 0LL;
  }
  *(_QWORD *)(v12 + 16) = v23;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), v23, v17, v18, v19, v20, v21, v22);
  if ( v41 )
  {
    if ( (System_String_c *)v41->klass == string_TypeInfo )
      v30 = (System_Int32_array **)v41;
    else
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  *(_QWORD *)(v12 + 24) = v30;
  v31 = (_QWORD *)(v12 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), v30, v24, v25, v26, v27, v28, v29);
  if ( !*(_QWORD *)(v12 + 16) )
  {
    v38 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v12 + 16) = StringLiteral_1/*""*/;
    sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), v38, v32, v33, v34, v35, v36, v37);
  }
  if ( !*v31 )
  {
    v39 = (System_Int32_array **)StringLiteral_1/*""*/;
    *v31 = StringLiteral_1/*""*/;
    sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), v39, v32, v33, v34, v35, v36, v37);
  }
  return (PurchaseLogic_ReceiptContents_o *)v12;
}


System_String_o *__fastcall PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4187AC8 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, method);
    byte_4187AC8 = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Purchasing_ConfigurationBuilder_o *ConfigurationBuilder; // x0
  __int64 v7; // x1
  UnityEngine_Purchasing_ConfigurationBuilder_o *v8; // x19
  Il2CppObject *v9; // x20
  UnityEngine_Purchasing_ConfigurationBuilder_o *v10; // x21
  __int64 v11; // x3
  Il2CppClass *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4187AC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_Product___ctor__, method);
    sub_B2C35C(&System_Action_Product__TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v4);
    this = (PurchaseLogicAndroid_o *)sub_B2C35C(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, v5);
    byte_4187AC6 = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v8 = ConfigurationBuilder,
        v9 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
               ConfigurationBuilder,
               (const MethodInfo_172E514 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_B2C42C(System_Action_Product__TypeInfo),
        !v2)
    || (v10 = ConfigurationBuilder,
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)ConfigurationBuilder,
          v2,
          (intptr_t)v2->klass->vtable[26].methodPtr,
          (const MethodInfo_24BBAD8 *)Method_System_Action_Product___ctor__),
        !v9) )
  {
    sub_B2C434(ConfigurationBuilder, v7);
  }
  klass = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IGooglePlayConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AC5258(v9, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(Il2CppObject *, UnityEngine_Purchasing_ConfigurationBuilder_o *, _QWORD))p_method)(
    v9,
    v10,
    *(_QWORD *)(p_method + 8));
  return v8;
}


bool __fastcall PurchaseLogicAndroid__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4187ACC & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, method);
    byte_4187ACC = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4187ACE & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, method);
    byte_4187ACE = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4187ACB & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, method);
    byte_4187ACB = 1;
  }
  v2 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
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
  const MethodInfo *v3; // x5

  this->fields._existsDeferredPurchase = 1;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 14, 0, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicAndroid__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4187ACD & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, isInitialized);
    byte_4187ACD = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PurchaseLogicAndroid_c *v9; // x0
  struct PurchaseLogicAndroid_StaticFields *static_fields; // x0

  if ( (byte_4187ACA & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, obfuscatedAccountId);
    byte_4187ACA = 1;
  }
  v9 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v9 = PurchaseLogicAndroid_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_cachedObfuscatedAccountId = obfuscatedAccountId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->_cachedObfuscatedAccountId,
    (System_Int32_array **)obfuscatedAccountId,
    (System_String_array **)method,
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

  if ( (byte_4187ACF & 1) == 0 )
  {
    sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, isMismatched);
    byte_4187ACF = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PurchaseLogicAndroid_c *v10; // x0
  System_String_o *cachedObfuscatedAccountId; // x20
  System_Uri_o *IsNullOrEmpty; // x0
  __int64 v13; // x1
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v15; // x1
  __int64 v16; // x3
  System_Uri_c *klass; // x8
  System_Uri_o *v18; // x19
  unsigned __int64 v19; // x10
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x11
  __int64 v21; // x0

  if ( (byte_4187AC9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string__Invoke__, builder);
    sub_B2C35C(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v5);
    sub_B2C35C(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22893/*"unexpected obfuscatedAccountId:"*/, v7);
    sub_B2C35C(&StringLiteral_639/*"(null)"*/, v8);
    byte_4187AC9 = 1;
  }
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
  {
    if ( !byte_4187B1E )
    {
      sub_B2C35C(&PurchaseLogicAndroid_TypeInfo, v9);
      byte_4187B1E = 1;
    }
    v10 = PurchaseLogicAndroid_TypeInfo;
    if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
      v10 = PurchaseLogicAndroid_TypeInfo;
    }
    cachedObfuscatedAccountId = v10->static_fields->_cachedObfuscatedAccountId;
    IsNullOrEmpty = (System_Uri_o *)System_String__IsNullOrEmpty(cachedObfuscatedAccountId, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( cachedObfuscatedAccountId )
        v15 = cachedObfuscatedAccountId;
      else
        v15 = (System_String_o *)StringLiteral_639/*"(null)"*/;
      IsNullOrEmpty = (System_Uri_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_22893/*"unexpected obfuscatedAccountId:"*/, v15, 0LL);
      if ( logErrorOutputAction )
      {
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)logErrorOutputAction,
          IsNullOrEmpty,
          (const MethodInfo_24BBAEC *)Method_System_Action_string__Invoke__);
        return;
      }
LABEL_25:
      sub_B2C434(IsNullOrEmpty, v13);
    }
    if ( !builder )
      goto LABEL_25;
    IsNullOrEmpty = (System_Uri_o *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                                      builder,
                                      (const MethodInfo_172E514 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    if ( !IsNullOrEmpty )
      goto LABEL_25;
    klass = IsNullOrEmpty->klass;
    v18 = IsNullOrEmpty;
    if ( *(_WORD *)&IsNullOrEmpty->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
      {
        ++v19;
        p_offset += 2;
        if ( v19 >= *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v21 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_22:
      v21 = sub_AC5258(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1LL, v16);
    }
    (*(void (__fastcall **)(System_Uri_o *, System_String_o *, _QWORD))v21)(
      v18,
      cachedObfuscatedAccountId,
      *(_QWORD *)(v21 + 8));
  }
}


void __fastcall PurchaseLogicAndroid__ShowPurchaseFailedNotification(
        PurchaseLogicAndroid_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  ;
}