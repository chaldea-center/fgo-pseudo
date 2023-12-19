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

  if ( (byte_40FA08D & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_14897, v8);
    byte_40FA08D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PurchaseLogicAndroid_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_14897;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_14897;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v13; // x0
  CrashReporter_o *Instance; // x0
  _QWORD _8[5]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA08A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, method);
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_252, v5);
    sub_B16FFC(&StringLiteral_15698, v6);
    byte_40FA08A = 1;
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
    v13 = System_String__Concat_43747144(
            (System_String_o *)StringLiteral_15698,
            v10,
            (System_String_o *)StringLiteral_252,
            v12,
            0LL);
    if ( !logOutputAction )
      goto LABEL_12;
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)logOutputAction,
      (System_Uri_o *)v13,
      (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) < *(float *)_8 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_12:
      sub_B170D4();
    CrashReporter__DisableSampling(Instance, 0LL);
  }
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeFailed(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CrashReporter_o *Instance; // x0
  PurchaseLogicAndroid_c *v5; // x0
  int32_t Int; // w0
  PurchaseLogicAndroid_c *v7; // x8
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_40FA08C & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v3);
    byte_40FA08C = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_B170D4();
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
  __int64 v3; // x1
  CrashReporter_o *Instance; // x0
  PurchaseLogicAndroid_c *v5; // x0

  if ( (byte_40FA08B & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v3);
    byte_40FA08B = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *receipt_k__BackingField; // x20
  __int64 v14; // x19
  Il2CppObject *v15; // x0
  __int64 v16; // x10
  System_String_o *v17; // x0
  Il2CppObject *v18; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v19; // x20
  __int64 v20; // x10
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  _QWORD *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_Int32_array **v43; // x1
  System_Xml_Schema_XmlSchemaObject_o *v45; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v46; // [xsp+10h] [xbp-30h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FA081 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, product);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B16FFC(&PurchaseLogic_ReceiptContents_TypeInfo, v7);
    sub_B16FFC(&string_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19995, v9);
    sub_B16FFC(&StringLiteral_10592, v10);
    sub_B16FFC(&StringLiteral_22032, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FA081 = 1;
  }
  v46 = 0LL;
  value = 0LL;
  v45 = 0LL;
  if ( !product )
    goto LABEL_31;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v14 = sub_B170CC(PurchaseLogic_ReceiptContents_TypeInfo, product, method, v3, v4);
  PurchaseLogic_ReceiptContents___ctor((PurchaseLogic_ReceiptContents_o *)v14, 0LL);
  v15 = UnityEngine_Purchasing_MiniJson__JsonDecode(receipt_k__BackingField, 0LL);
  if ( !v15 )
    goto LABEL_31;
  v16 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (System_Collections_Generic_Dictionary_string__object__c *)v15->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    goto LABEL_31;
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_10592,
    &value,
    (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
    v17 = (System_String_c *)value->klass == string_TypeInfo ? (System_String_o *)value : 0LL;
  else
    v17 = 0LL;
  v18 = UnityEngine_Purchasing_MiniJson__JsonDecode(v17, 0LL);
  if ( !v18
    || (v19 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v18,
        v20 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20)
    || (System_Collections_Generic_Dictionary_string__object__c *)v18->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v18,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19995,
          &v46,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          v19,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22032,
          &v45,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v14) )
  {
LABEL_31:
    sub_B170D4();
  }
  if ( v46 )
  {
    if ( (System_String_c *)v46->klass == string_TypeInfo )
      v27 = (System_Int32_array **)v46;
    else
      v27 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  *(_QWORD *)(v14 + 16) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), v27, v21, v22, v23, v24, v25, v26);
  if ( v45 )
  {
    if ( (System_String_c *)v45->klass == string_TypeInfo )
      v34 = (System_Int32_array **)v45;
    else
      v34 = 0LL;
  }
  else
  {
    v34 = 0LL;
  }
  *(_QWORD *)(v14 + 24) = v34;
  v35 = (_QWORD *)(v14 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), v34, v28, v29, v30, v31, v32, v33);
  if ( !*(_QWORD *)(v14 + 16) )
  {
    v42 = (System_Int32_array **)StringLiteral_1;
    *(_QWORD *)(v14 + 16) = StringLiteral_1;
    sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), v42, v36, v37, v38, v39, v40, v41);
  }
  if ( !*v35 )
  {
    v43 = (System_Int32_array **)StringLiteral_1;
    *v35 = StringLiteral_1;
    sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), v43, v36, v37, v38, v39, v40, v41);
  }
  return (PurchaseLogic_ReceiptContents_o *)v14;
}


System_String_o *__fastcall PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_40FA082 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, method);
    byte_40FA082 = 1;
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
  UnityEngine_Purchasing_ConfigurationBuilder_o *v7; // x19
  Il2CppObject *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x21
  Il2CppClass *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_40FA080 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Product___ctor__, method);
    sub_B16FFC(&System_Action_Product__TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v4);
    this = (PurchaseLogicAndroid_o *)sub_B16FFC(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, v5);
    byte_40FA080 = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v7 = ConfigurationBuilder,
        v8 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
               ConfigurationBuilder,
               (const MethodInfo_18BDDAC *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_Product__TypeInfo,
                                                                                     v9,
                                                                                     v10,
                                                                                     v11,
                                                                                     v12),
        !v2)
    || (v14 = v13,
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v13,
          v2,
          (intptr_t)v2->klass->vtable[26].methodPtr,
          (const MethodInfo_24B7310 *)Method_System_Action_Product___ctor__),
        !v8) )
  {
    sub_B170D4();
  }
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IGooglePlayConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(v8, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(Il2CppObject *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))p_method)(
    v8,
    v14,
    *(_QWORD *)(p_method + 8));
  return v7;
}


bool __fastcall PurchaseLogicAndroid__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_40FA086 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, method);
    byte_40FA086 = 1;
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

  if ( (byte_40FA088 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, method);
    byte_40FA088 = 1;
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

  if ( (byte_40FA085 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, method);
    byte_40FA085 = 1;
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

  if ( (byte_40FA087 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, isInitialized);
    byte_40FA087 = 1;
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

  if ( (byte_40FA084 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, obfuscatedAccountId);
    byte_40FA084 = 1;
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
  sub_B16F98(
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

  if ( (byte_40FA089 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, isMismatched);
    byte_40FA089 = 1;
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
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v13; // x1
  System_String_o *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppClass *klass; // x8
  Il2CppObject *v17; // x19
  unsigned __int64 v18; // x10
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40FA083 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Invoke__, builder);
    sub_B16FFC(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v5);
    sub_B16FFC(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22800, v7);
    sub_B16FFC(&StringLiteral_638, v8);
    byte_40FA083 = 1;
  }
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
  {
    if ( !byte_40FA0D8 )
    {
      sub_B16FFC(&PurchaseLogicAndroid_TypeInfo, v9);
      byte_40FA0D8 = 1;
    }
    v10 = PurchaseLogicAndroid_TypeInfo;
    if ( (BYTE3(PurchaseLogicAndroid_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
      v10 = PurchaseLogicAndroid_TypeInfo;
    }
    cachedObfuscatedAccountId = v10->static_fields->_cachedObfuscatedAccountId;
    if ( System_String__IsNullOrEmpty(cachedObfuscatedAccountId, 0LL) )
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( cachedObfuscatedAccountId )
        v13 = cachedObfuscatedAccountId;
      else
        v13 = (System_String_o *)StringLiteral_638;
      v14 = System_String__Concat_43743732((System_String_o *)StringLiteral_22800, v13, 0LL);
      if ( logErrorOutputAction )
      {
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)logErrorOutputAction,
          (System_Uri_o *)v14,
          (const MethodInfo_24B7324 *)Method_System_Action_string__Invoke__);
        return;
      }
LABEL_25:
      sub_B170D4();
    }
    if ( !builder )
      goto LABEL_25;
    v15 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
            builder,
            (const MethodInfo_18BDDAC *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
    if ( !v15 )
      goto LABEL_25;
    klass = v15->klass;
    v17 = v15;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
      {
        ++v18;
        p_offset += 2;
        if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AAFEF8(v15, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))p_method)(
      v17,
      cachedObfuscatedAccountId,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall PurchaseLogicAndroid__ShowPurchaseFailedNotification(
        PurchaseLogicAndroid_o *this,
        int32_t failureReason,
        const MethodInfo *method)
{
  ;
}