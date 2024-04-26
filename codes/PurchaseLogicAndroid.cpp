void __fastcall PurchaseLogicAndroid___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4351F8D & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    sub_B70694(&StringLiteral_15143/*"UnityPurchasingInitializeFailedCount"*/);
    byte_4351F8D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PurchaseLogicAndroid_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_15143/*"UnityPurchasingInitializeFailedCount"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15143/*"UnityPurchasingInitializeFailedCount"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED = 1000;
}


void __fastcall PurchaseLogicAndroid__DisableCrashReporterOnInitialize(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v3; // x0
  int32_t Int; // w0
  struct System_Action_string__o *logOutputAction; // x20
  System_String_o *v6; // x21
  float v7; // s0
  System_String_o *v8; // x0
  System_Uri_o *Instance; // x0
  __int64 v10; // x1
  _QWORD _8[5]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351F8A & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string__Invoke__);
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_B70694(&StringLiteral_260/*" rateToSend:"*/);
    sub_B70694(&StringLiteral_15982/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/);
    byte_4351F8A = 1;
  }
  _8[0] = 0LL;
  v3 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v3 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  HIDWORD(_8[0]) = Int;
  if ( Int >= 1 )
  {
    LODWORD(_8[0]) = fmaxf(1.0 / (float)(Int + 1), 0.1);
    logOutputAction = this->fields._logOutputAction;
    v6 = System_Int32__ToString((int32_t)_8 + 4, 0LL);
    v8 = System_Single__ToString(v7, (const MethodInfo *)_8);
    Instance = (System_Uri_o *)System_String__Concat_44761580(
                                 (System_String_o *)StringLiteral_15982/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/,
                                 v6,
                                 (System_String_o *)StringLiteral_260/*" rateToSend:"*/,
                                 v8,
                                 0LL);
    if ( !logOutputAction )
      goto LABEL_12;
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)logOutputAction,
      Instance,
      (const MethodInfo_264C15C *)Method_System_Action_string__Invoke__);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) < *(float *)_8 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (System_Uri_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_12:
      sub_B7076C(Instance, v10);
    CrashReporter__DisableSampling((CrashReporter_o *)Instance, 0LL);
  }
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeFailed(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  CrashReporter_o *Instance; // x0
  __int64 v4; // x1
  PurchaseLogicAndroid_c *v5; // x0
  int32_t Int; // w0
  PurchaseLogicAndroid_c *v7; // x8
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_4351F8C & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4351F8C = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v4);
    CrashReporter__EnableSampling(Instance, 0LL);
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  v7 = PurchaseLogicAndroid_TypeInfo;
  MAX_COUNT_FOR_INITIALIZE_FAILED = (Int & ~(Int >> 31)) + 1;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v7 = PurchaseLogicAndroid_TypeInfo;
  }
  if ( MAX_COUNT_FOR_INITIALIZE_FAILED > v7->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PurchaseLogicAndroid_TypeInfo;
      MAX_COUNT_FOR_INITIALIZE_FAILED = PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
    else
    {
      MAX_COUNT_FOR_INITIALIZE_FAILED = v7->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
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
  CrashReporter_o *Instance; // x0
  __int64 v4; // x1
  PurchaseLogicAndroid_c *v5; // x0

  if ( (byte_4351F8B & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    byte_4351F8B = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v4);
    CrashReporter__EnableSampling(Instance, 0LL);
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
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
  __int64 v5; // x19
  __int64 v6; // x10
  System_String_o *v7; // x0
  PurchaseLogicAndroid_o *v8; // x20
  __int64 v9; // x10
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  _QWORD *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_Int32_array **v32; // x1
  System_Xml_Schema_XmlSchemaObject_o *v34; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v35; // [xsp+10h] [xbp-30h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4351F81 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&PurchaseLogic_ReceiptContents_TypeInfo);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_20392/*"json"*/);
    sub_B70694(&StringLiteral_10767/*"Payload"*/);
    sub_B70694(&StringLiteral_22496/*"signature"*/);
    this = (PurchaseLogicAndroid_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4351F81 = 1;
  }
  v35 = 0LL;
  value = 0LL;
  v34 = 0LL;
  if ( !product )
    goto LABEL_31;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v5 = sub_B70764(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v5, 0LL);
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !this )
    goto LABEL_31;
  v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_31;
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_10767/*"Payload"*/,
    &value,
    (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
    v7 = (System_String_c *)value->klass == string_TypeInfo ? (System_String_o *)value : 0LL;
  else
    v7 = 0LL;
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(v7, 0LL);
  if ( !this
    || (v8 = this,
        v9 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v9 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20392/*"json"*/,
          &v35,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8,
                                           (System_Xml_XmlQualifiedName_o *)StringLiteral_22496/*"signature"*/,
                                           &v34,
                                           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v5) )
  {
LABEL_31:
    sub_B7076C(this, product);
  }
  if ( v35 )
  {
    if ( (System_String_c *)v35->klass == string_TypeInfo )
      v16 = (System_Int32_array **)v35;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  *(_QWORD *)(v5 + 16) = v16;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), v16, v10, v11, v12, v13, v14, v15);
  if ( v34 )
  {
    if ( (System_String_c *)v34->klass == string_TypeInfo )
      v23 = (System_Int32_array **)v34;
    else
      v23 = 0LL;
  }
  else
  {
    v23 = 0LL;
  }
  *(_QWORD *)(v5 + 24) = v23;
  v24 = (_QWORD *)(v5 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), v23, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v5 + 16) )
  {
    v31 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v5 + 16) = StringLiteral_1/*""*/;
    sub_B70630((BattleServantConfConponent_o *)(v5 + 16), v31, v25, v26, v27, v28, v29, v30);
  }
  if ( !*v24 )
  {
    v32 = (System_Int32_array **)StringLiteral_1/*""*/;
    *v24 = StringLiteral_1/*""*/;
    sub_B70630((BattleServantConfConponent_o *)(v5 + 24), v32, v25, v26, v27, v28, v29, v30);
  }
  return (PurchaseLogic_ReceiptContents_o *)v5;
}


System_String_o *__fastcall PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4351F82 & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    byte_4351F82 = 1;
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
  UnityEngine_Purchasing_ConfigurationBuilder_o *ConfigurationBuilder; // x0
  __int64 v4; // x1
  UnityEngine_Purchasing_ConfigurationBuilder_o *v5; // x19
  Il2CppObject *v6; // x20
  UnityEngine_Purchasing_ConfigurationBuilder_o *v7; // x21
  Il2CppClass *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4351F80 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_Product___ctor__);
    sub_B70694(&System_Action_Product__TypeInfo);
    sub_B70694(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    this = (PurchaseLogicAndroid_o *)sub_B70694(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    byte_4351F80 = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v5 = ConfigurationBuilder,
        v6 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
               ConfigurationBuilder,
               (const MethodInfo_1BE4978 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_B70764(System_Action_Product__TypeInfo),
        !v2)
    || (v7 = ConfigurationBuilder,
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)ConfigurationBuilder,
          v2,
          (intptr_t)v2->klass->vtable[26].methodPtr,
          (const MethodInfo_264C148 *)Method_System_Action_Product___ctor__),
        !v6) )
  {
    sub_B7076C(ConfigurationBuilder, v4);
  }
  klass = v6->klass;
  if ( *(_WORD *)&v6->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IGooglePlayConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B08590(v6, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0LL);
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

  if ( (byte_4351F86 & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    byte_4351F86 = 1;
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

  if ( (byte_4351F88 & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    byte_4351F88 = 1;
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

  if ( (byte_4351F85 & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    byte_4351F85 = 1;
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


void __fastcall PurchaseLogicAndroid__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4351F87 & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    byte_4351F87 = 1;
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

  if ( (byte_4351F84 & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    byte_4351F84 = 1;
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
  sub_B70630(
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


void __fastcall PurchaseLogicAndroid__SetInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isMismatched,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4351F89 & 1) == 0 )
  {
    sub_B70694(&PurchaseLogicAndroid_TypeInfo);
    byte_4351F89 = 1;
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
  PurchaseLogicAndroid_c *v5; // x0
  System_String_o *cachedObfuscatedAccountId; // x20
  System_Uri_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v10; // x1
  System_Uri_c *klass; // x8
  System_Uri_o *v12; // x19
  unsigned __int64 v13; // x10
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x11
  __int64 v15; // x0

  if ( (byte_4351F83 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string__Invoke__);
    sub_B70694(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    sub_B70694(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo);
    sub_B70694(&StringLiteral_23270/*"unexpected obfuscatedAccountId:"*/);
    sub_B70694(&StringLiteral_650/*"(null)"*/);
    byte_4351F83 = 1;
  }
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
  {
    if ( !byte_4351FD2 )
    {
      sub_B70694(&PurchaseLogicAndroid_TypeInfo);
      byte_4351FD2 = 1;
    }
    v5 = PurchaseLogicAndroid_TypeInfo;
    if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
      v5 = PurchaseLogicAndroid_TypeInfo;
    }
    cachedObfuscatedAccountId = v5->static_fields->_cachedObfuscatedAccountId;
    IsNullOrEmpty = (System_Uri_o *)System_String__IsNullOrEmpty(cachedObfuscatedAccountId, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( cachedObfuscatedAccountId )
        v10 = cachedObfuscatedAccountId;
      else
        v10 = (System_String_o *)StringLiteral_650/*"(null)"*/;
      IsNullOrEmpty = (System_Uri_o *)System_String__Concat_44758168((System_String_o *)StringLiteral_23270/*"unexpected obfuscatedAccountId:"*/, v10, 0LL);
      if ( logErrorOutputAction )
      {
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)logErrorOutputAction,
          IsNullOrEmpty,
          (const MethodInfo_264C15C *)Method_System_Action_string__Invoke__);
        return;
      }
LABEL_25:
      sub_B7076C(IsNullOrEmpty, v8);
    }
    if ( !builder )
      goto LABEL_25;
    IsNullOrEmpty = (System_Uri_o *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                                      builder,
                                      (const MethodInfo_1BE4978 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    if ( !IsNullOrEmpty )
      goto LABEL_25;
    klass = IsNullOrEmpty->klass;
    v12 = IsNullOrEmpty;
    if ( *(_WORD *)&IsNullOrEmpty->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
      {
        ++v13;
        p_offset += 2;
        if ( v13 >= *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v15 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_22:
      v15 = sub_B08590(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1LL);
    }
    (*(void (__fastcall **)(System_Uri_o *, System_String_o *, _QWORD))v15)(
      v12,
      cachedObfuscatedAccountId,
      *(_QWORD *)(v15 + 8));
  }
}


void __fastcall PurchaseLogicAndroid__ShowPurchaseFailedNotification(
        PurchaseLogicAndroid_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  ;
}