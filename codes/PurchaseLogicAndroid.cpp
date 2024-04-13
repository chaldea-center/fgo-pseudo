void __fastcall PurchaseLogicAndroid___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E8853 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_15115/*"UnityPurchasingInitializeFailedCount"*/, v8, v9, v10);
    byte_42E8853 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PurchaseLogicAndroid_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_15115/*"UnityPurchasingInitializeFailedCount"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15115/*"UnityPurchasingInitializeFailedCount"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
  PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED = 1000;
}


void __fastcall PurchaseLogicAndroid__DisableCrashReporterOnInitialize(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  PurchaseLogicAndroid_c *v17; // x0
  int32_t Int; // w0
  struct System_Action_string__o *logOutputAction; // x20
  System_String_o *v20; // x21
  float v21; // s0
  System_String_o *v22; // x0
  System_Uri_o *Instance; // x0
  __int64 v24; // x1
  _QWORD _8[5]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8850 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_256/*" rateToSend:"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_15951/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/, v14, v15, v16);
    byte_42E8850 = 1;
  }
  _8[0] = 0LL;
  v17 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v17 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v17->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  HIDWORD(_8[0]) = Int;
  if ( Int >= 1 )
  {
    LODWORD(_8[0]) = fmaxf(1.0 / (float)(Int + 1), 0.1);
    logOutputAction = this->fields._logOutputAction;
    v20 = System_Int32__ToString((int32_t)_8 + 4, 0LL);
    v22 = System_Single__ToString(v21, (const MethodInfo *)_8);
    Instance = (System_Uri_o *)System_String__Concat_44581200(
                                 (System_String_o *)StringLiteral_15951/*"[UnityIAP]unityPurchasingInitializeFailedCount:"*/,
                                 v20,
                                 (System_String_o *)StringLiteral_256/*" rateToSend:"*/,
                                 v22,
                                 0LL);
    if ( !logOutputAction )
      goto LABEL_12;
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)logOutputAction,
      Instance,
      (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) < *(float *)_8 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (System_Uri_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_12:
      sub_B5D69C(Instance, v24);
    CrashReporter__DisableSampling((CrashReporter_o *)Instance, 0LL);
  }
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeFailed(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CrashReporter_o *Instance; // x0
  __int64 v9; // x1
  PurchaseLogicAndroid_c *v10; // x0
  int32_t Int; // w0
  PurchaseLogicAndroid_c *v12; // x8
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_42E8852 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5, v6, v7);
    byte_42E8852 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v9);
    CrashReporter__EnableSampling(Instance, 0LL);
  }
  v10 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v10 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v10->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  v12 = PurchaseLogicAndroid_TypeInfo;
  MAX_COUNT_FOR_INITIALIZE_FAILED = (Int & ~(Int >> 31)) + 1;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v12 = PurchaseLogicAndroid_TypeInfo;
  }
  if ( MAX_COUNT_FOR_INITIALIZE_FAILED > v12->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = PurchaseLogicAndroid_TypeInfo;
      MAX_COUNT_FOR_INITIALIZE_FAILED = PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
    else
    {
      MAX_COUNT_FOR_INITIALIZE_FAILED = v12->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
  }
  if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v12->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY,
    MAX_COUNT_FOR_INITIALIZE_FAILED,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeSucceeded(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CrashReporter_o *Instance; // x0
  __int64 v9; // x1
  PurchaseLogicAndroid_c *v10; // x0

  if ( (byte_42E8851 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5, v6, v7);
    byte_42E8851 = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v9);
    CrashReporter__EnableSampling(Instance, 0LL);
  }
  v10 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v10 = PurchaseLogicAndroid_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v10->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


PurchaseLogic_ReceiptContents_o *__fastcall PurchaseLogicAndroid__ExtractReceiptContents(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_Product_o *product,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_String_o *receipt_k__BackingField; // x20
  __int64 v27; // x19
  __int64 v28; // x10
  System_String_o *v29; // x0
  PurchaseLogicAndroid_o *v30; // x20
  __int64 v31; // x10
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  _QWORD *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_Int32_array **v54; // x1
  System_Xml_Schema_XmlSchemaObject_o *v56; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v57; // [xsp+10h] [xbp-30h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E8847 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)product,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&PurchaseLogic_ReceiptContents_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&string_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_20332/*"json"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10746/*"Payload"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_22426/*"signature"*/, v20, v21, v22);
    this = (PurchaseLogicAndroid_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E8847 = 1;
  }
  v57 = 0LL;
  value = 0LL;
  v56 = 0LL;
  if ( !product )
    goto LABEL_31;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v27 = sub_B5D694(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v27, 0LL);
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !this )
    goto LABEL_31;
  v28 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v28
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v28 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_31;
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_10746/*"Payload"*/,
    &value,
    (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
    v29 = (System_String_c *)value->klass == string_TypeInfo ? (System_String_o *)value : 0LL;
  else
    v29 = 0LL;
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(v29, 0LL);
  if ( !this
    || (v30 = this,
        v31 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v31)
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20332/*"json"*/,
          &v57,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v30,
                                           (System_Xml_XmlQualifiedName_o *)StringLiteral_22426/*"signature"*/,
                                           &v56,
                                           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v27) )
  {
LABEL_31:
    sub_B5D69C(this, product);
  }
  if ( v57 )
  {
    if ( (System_String_c *)v57->klass == string_TypeInfo )
      v38 = (System_Int32_array **)v57;
    else
      v38 = 0LL;
  }
  else
  {
    v38 = 0LL;
  }
  *(_QWORD *)(v27 + 16) = v38;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), v38, v32, v33, v34, v35, v36, v37);
  if ( v56 )
  {
    if ( (System_String_c *)v56->klass == string_TypeInfo )
      v45 = (System_Int32_array **)v56;
    else
      v45 = 0LL;
  }
  else
  {
    v45 = 0LL;
  }
  *(_QWORD *)(v27 + 24) = v45;
  v46 = (_QWORD *)(v27 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 24), v45, v39, v40, v41, v42, v43, v44);
  if ( !*(_QWORD *)(v27 + 16) )
  {
    v53 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v27 + 16) = StringLiteral_1/*""*/;
    sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), v53, v47, v48, v49, v50, v51, v52);
  }
  if ( !*v46 )
  {
    v54 = (System_Int32_array **)StringLiteral_1/*""*/;
    *v46 = StringLiteral_1/*""*/;
    sub_B5D560((BattleServantConfConponent_o *)(v27 + 24), v54, v47, v48, v49, v50, v51, v52);
  }
  return (PurchaseLogic_ReceiptContents_o *)v27;
}


System_String_o *__fastcall PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_42E8848 & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8848 = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  return v4->static_fields->_cachedObfuscatedAccountId;
}


UnityEngine_Purchasing_ConfigurationBuilder_o *__fastcall PurchaseLogicAndroid__GetConfigurationBuilder(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x22
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Purchasing_ConfigurationBuilder_o *ConfigurationBuilder; // x0
  __int64 v15; // x1
  UnityEngine_Purchasing_ConfigurationBuilder_o *v16; // x19
  Il2CppObject *v17; // x20
  UnityEngine_Purchasing_ConfigurationBuilder_o *v18; // x21
  __int64 v19; // x3
  Il2CppClass *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42E8846 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Product___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_Product__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v8, v9, v10);
    this = (PurchaseLogicAndroid_o *)sub_B5D5C4(
                                       &UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo,
                                       v11,
                                       v12,
                                       v13);
    byte_42E8846 = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v16 = ConfigurationBuilder,
        v17 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                ConfigurationBuilder,
                (const MethodInfo_1ADEC24 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_B5D694(System_Action_Product__TypeInfo),
        !v4)
    || (v18 = ConfigurationBuilder,
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)ConfigurationBuilder,
          v4,
          (intptr_t)v4->klass->vtable[26].methodPtr,
          (const MethodInfo_258B320 *)Method_System_Action_Product___ctor__),
        !v17) )
  {
    sub_B5D69C(ConfigurationBuilder, v15);
  }
  klass = v17->klass;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IGooglePlayConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(v17, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(Il2CppObject *, UnityEngine_Purchasing_ConfigurationBuilder_o *, _QWORD))p_method)(
    v17,
    v18,
    *(_QWORD *)(p_method + 8));
  return v16;
}


bool __fastcall PurchaseLogicAndroid__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_42E884C & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E884C = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  return v4->static_fields->_isAlreadyInitializedWithObfuscatedAccountId;
}


bool __fastcall PurchaseLogicAndroid__IsDeferredPurchaseExists(PurchaseLogicAndroid_o *this, const MethodInfo *method)
{
  return this->fields._existsDeferredPurchase;
}


bool __fastcall PurchaseLogicAndroid__IsInitializedWithMismatchedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_42E884E & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E884E = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  return v4->static_fields->_isObfuscatedAccountIdMismatched;
}


bool __fastcall PurchaseLogicAndroid__IsObfuscatedAccountIdCached(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_42E884B & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E884B = 1;
  }
  v4 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v4 = PurchaseLogicAndroid_TypeInfo;
  }
  return !System_String__IsNullOrEmpty(v4->static_fields->_cachedObfuscatedAccountId, 0LL);
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
  __int64 v3; // x3
  PurchaseLogicAndroid_c *v5; // x0

  if ( (byte_42E884D & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, isInitialized, (_DWORD)method, v3);
    byte_42E884D = 1;
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  v5->static_fields->_isAlreadyInitializedWithObfuscatedAccountId = isInitialized;
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

  if ( (byte_42E884A & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, (_DWORD)obfuscatedAccountId, (_DWORD)method, v3);
    byte_42E884A = 1;
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
  sub_B5D560(
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
  __int64 v3; // x3
  PurchaseLogicAndroid_c *v5; // x0

  if ( (byte_42E884F & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, isMismatched, (_DWORD)method, v3);
    byte_42E884F = 1;
  }
  v5 = PurchaseLogicAndroid_TypeInfo;
  if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v5 = PurchaseLogicAndroid_TypeInfo;
  }
  v5->static_fields->_isObfuscatedAccountIdMismatched = isMismatched;
}


void __fastcall PurchaseLogicAndroid__SetObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        UnityEngine_Purchasing_ConfigurationBuilder_o *builder,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  PurchaseLogicAndroid_c *v21; // x0
  System_String_o *cachedObfuscatedAccountId; // x20
  System_Uri_o *IsNullOrEmpty; // x0
  __int64 v24; // x1
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v26; // x1
  __int64 v27; // x3
  System_Uri_c *klass; // x8
  System_Uri_o *v29; // x19
  unsigned __int64 v30; // x10
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x11
  __int64 v32; // x0

  if ( (byte_42E8849 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)builder, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23198/*"unexpected obfuscatedAccountId:"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_646/*"(null)"*/, v15, v16, v17);
    byte_42E8849 = 1;
  }
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
  {
    if ( !byte_42E8898 )
    {
      sub_B5D5C4(&PurchaseLogicAndroid_TypeInfo, v18, v19, v20);
      byte_42E8898 = 1;
    }
    v21 = PurchaseLogicAndroid_TypeInfo;
    if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
      v21 = PurchaseLogicAndroid_TypeInfo;
    }
    cachedObfuscatedAccountId = v21->static_fields->_cachedObfuscatedAccountId;
    IsNullOrEmpty = (System_Uri_o *)System_String__IsNullOrEmpty(cachedObfuscatedAccountId, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( cachedObfuscatedAccountId )
        v26 = cachedObfuscatedAccountId;
      else
        v26 = (System_String_o *)StringLiteral_646/*"(null)"*/;
      IsNullOrEmpty = (System_Uri_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_23198/*"unexpected obfuscatedAccountId:"*/, v26, 0LL);
      if ( logErrorOutputAction )
      {
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)logErrorOutputAction,
          IsNullOrEmpty,
          (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
        return;
      }
LABEL_25:
      sub_B5D69C(IsNullOrEmpty, v24);
    }
    if ( !builder )
      goto LABEL_25;
    IsNullOrEmpty = (System_Uri_o *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                                      builder,
                                      (const MethodInfo_1ADEC24 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    if ( !IsNullOrEmpty )
      goto LABEL_25;
    klass = IsNullOrEmpty->klass;
    v29 = IsNullOrEmpty;
    if ( *(_WORD *)&IsNullOrEmpty->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
      {
        ++v30;
        p_offset += 2;
        if ( v30 >= *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v32 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_22:
      v32 = sub_AF54C0(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1LL, v27);
    }
    (*(void (__fastcall **)(System_Uri_o *, System_String_o *, _QWORD))v32)(
      v29,
      cachedObfuscatedAccountId,
      *(_QWORD *)(v32 + 8));
  }
}


void __fastcall PurchaseLogicAndroid__ShowPurchaseFailedNotification(
        PurchaseLogicAndroid_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  ;
}