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

  if ( (byte_4C218EF & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_15378/*"XAAT "*/, v8);
    byte_4C218EF = 1;
  }
  PurchaseLogicAndroid_TypeInfo->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY = (struct System_String_o *)StringLiteral_15378/*"XAAT "*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)PurchaseLogicAndroid_TypeInfo->static_fields,
    StringLiteral_15378/*"XAAT "*/,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PurchaseLogicAndroid_c *v6; // x0
  int32_t Int; // w0
  struct System_Action_string__o *logOutputAction; // x21
  System_String_o *v9; // x20
  float v10; // s0
  System_String_o *v11; // x0
  CrashReporter_o *Instance; // x0
  __int64 v13; // x1
  float v14; // [xsp+8h] [xbp-38h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C218EB & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v3);
    sub_1C3B764(&StringLiteral_300/*" shader doesn't have a clipped shader version for "*/, v4);
    sub_1C3B764(&StringLiteral_16273/*"`"*/, v5);
    byte_4C218EB = 1;
  }
  v6 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v6 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v6->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  v15 = Int;
  if ( Int >= 1 )
  {
    v14 = fmaxf(1.0 / (float)(Int + 1), 0.1);
    logOutputAction = this->fields._logOutputAction;
    v9 = System_Int32__ToString((int32_t)&v15, 0LL);
    v11 = System_Single__ToString(v10, (const MethodInfo *)&v14);
    Instance = (CrashReporter_o *)System_String__Concat_63381876(
                                    (System_String_o *)StringLiteral_16273/*"`"*/,
                                    v9,
                                    (System_String_o *)StringLiteral_300/*" shader doesn't have a clipped shader version for "*/,
                                    v11,
                                    0LL);
    if ( !logOutputAction )
      goto LABEL_11;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, CrashReporter_o *, _QWORD))logOutputAction->fields.m_target)(
      logOutputAction->fields.original_method_info,
      Instance,
      *(_QWORD *)&logOutputAction->fields.extra_arg);
    if ( UnityEngine_Random__Range(0.0, 1.0, 0LL) < v14 )
      return;
    this->fields._isCrashReporterTemporarilyDisabled = 1;
    Instance = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1C3B9C0(Instance, v13);
    CrashReporter__DisableSampling(Instance, 0LL);
  }
}


void __fastcall PurchaseLogicAndroid__EnableCrashReporterOnInitializeFailed(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  PurchaseLogicAndroid_c *v6; // x0
  int32_t Int; // w0
  PurchaseLogicAndroid_c *v8; // x8
  int MAX_COUNT_FOR_INITIALIZE_FAILED; // w19

  if ( (byte_4C218ED & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v3);
    byte_4C218ED = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C3B9C0(0LL, v5);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0LL);
  }
  v6 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v6 = PurchaseLogicAndroid_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v6->static_fields->INITIALIZE_FAILED_COUNT_PREF_KEY, 0, 0LL);
  v8 = PurchaseLogicAndroid_TypeInfo;
  MAX_COUNT_FOR_INITIALIZE_FAILED = (Int & ~(Int >> 31)) + 1;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v8 = PurchaseLogicAndroid_TypeInfo;
  }
  if ( MAX_COUNT_FOR_INITIALIZE_FAILED > v8->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED )
  {
    if ( v8->_2.cctor_finished )
    {
      MAX_COUNT_FOR_INITIALIZE_FAILED = v8->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = PurchaseLogicAndroid_TypeInfo;
      MAX_COUNT_FOR_INITIALIZE_FAILED = PurchaseLogicAndroid_TypeInfo->static_fields->MAX_COUNT_FOR_INITIALIZE_FAILED;
    }
  }
  if ( !v8->_2.cctor_finished )
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  PurchaseLogicAndroid_c *v6; // x0

  if ( (byte_4C218EC & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v3);
    byte_4C218EC = 1;
  }
  if ( this->fields._isCrashReporterTemporarilyDisabled )
  {
    this->fields._isCrashReporterTemporarilyDisabled = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C3B9C0(0LL, v5);
    CrashReporter__EnableSampling((CrashReporter_o *)Instance, 0LL);
  }
  v6 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
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
  PurchaseLogic_ReceiptContents_o *v12; // x19
  const MethodInfo *v13; // x1
  __int64 methodPtr_low; // x10
  System_String_o *v15; // x0
  PurchaseLogicAndroid_o *v16; // x20
  __int64 v17; // x10
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *v24; // x8
  System_String_c *v25; // x9
  Il2CppObject *v26; // x10
  PartyOrganizationUtility_o *p_fields; // x20
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *v35; // x8
  System_String_c *v36; // x9
  Il2CppObject *v37; // x10
  PartyOrganizationUtility_o *p_googleSignatureStr; // x21
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  void *v46; // x1
  void *v47; // x1
  Il2CppObject *v49; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v50; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C218E2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, product);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4);
    sub_1C3B764(&PurchaseLogic_ReceiptContents_TypeInfo, v5);
    sub_1C3B764(&string_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_21380/*"mstEventSuperBoss"*/, v7);
    sub_1C3B764(&StringLiteral_10806/*"REJECT_ITEM_WARNING_TXT"*/, v8);
    sub_1C3B764(&StringLiteral_23812/*"uint"*/, v9);
    this = (PurchaseLogicAndroid_o *)sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C218E2 = 1;
  }
  v50 = 0LL;
  value = 0LL;
  v49 = 0LL;
  if ( !product )
    goto LABEL_37;
  receipt_k__BackingField = product->fields._receipt_k__BackingField;
  v12 = (PurchaseLogic_ReceiptContents_o *)sub_1C3B9B0(PurchaseLogic_ReceiptContents_TypeInfo);
  PurchaseLogic_ReceiptContents___ctor(v12, v13);
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
    (Il2CppObject *)StringLiteral_10806/*"REJECT_ITEM_WARNING_TXT"*/,
    &value,
    (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( value )
    v15 = (System_String_c *)value->klass == string_TypeInfo ? (System_String_o *)value : 0LL;
  else
    v15 = 0LL;
  this = (PurchaseLogicAndroid_o *)UnityEngine_Purchasing_MiniJson__JsonDecode(v15, 0LL);
  if ( !this
    || (v16 = this,
        v17 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v17)
    || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v17 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo
    || (System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)StringLiteral_21380/*"mstEventSuperBoss"*/,
          &v50,
          (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        this = (PurchaseLogicAndroid_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                           (System_Collections_Generic_Dictionary_object__object__o *)v16,
                                           (Il2CppObject *)StringLiteral_23812/*"uint"*/,
                                           &v49,
                                           (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__),
        !v12) )
  {
LABEL_37:
    sub_1C3B9C0(this, product);
  }
  v24 = v50;
  if ( v50 )
  {
    v25 = string_TypeInfo;
    if ( (System_String_c *)v50->klass == string_TypeInfo )
      v26 = v50;
    else
      v26 = 0LL;
    v12->fields.payloadJsonStr = (struct System_String_o *)v26;
    p_fields = (PartyOrganizationUtility_o *)&v12->fields;
    if ( (System_String_c *)v24->klass == v25 )
      v28 = (int64_t)v24;
    else
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
    v12->fields.payloadJsonStr = 0LL;
    p_fields = (PartyOrganizationUtility_o *)&v12->fields;
  }
  sub_1C3B708(p_fields, v28, v18, v19, v20, v21, v22, v23);
  v35 = v49;
  if ( v49 )
  {
    v36 = string_TypeInfo;
    if ( (System_String_c *)v49->klass == string_TypeInfo )
      v37 = v49;
    else
      v37 = 0LL;
    v12->fields.googleSignatureStr = (struct System_String_o *)v37;
    p_googleSignatureStr = (PartyOrganizationUtility_o *)&v12->fields.googleSignatureStr;
    if ( (System_String_c *)v35->klass == v36 )
      v39 = (int64_t)v35;
    else
      v39 = 0LL;
  }
  else
  {
    v39 = 0LL;
    v12->fields.googleSignatureStr = 0LL;
    p_googleSignatureStr = (PartyOrganizationUtility_o *)&v12->fields.googleSignatureStr;
  }
  sub_1C3B708(p_googleSignatureStr, v39, v29, v30, v31, v32, v33, v34);
  if ( !p_fields->klass )
  {
    v46 = StringLiteral_1/*""*/;
    p_fields->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
    sub_1C3B708(p_fields, (int64_t)v46, v40, v41, v42, v43, v44, v45);
  }
  if ( !p_googleSignatureStr->klass )
  {
    v47 = StringLiteral_1/*""*/;
    p_googleSignatureStr->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
    sub_1C3B708(p_googleSignatureStr, (int64_t)v47, v40, v41, v42, v43, v44, v45);
  }
  return v12;
}


System_String_o *__fastcall PurchaseLogicAndroid__GetCachedObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4C218E3 & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, method);
    byte_4C218E3 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Purchasing_ConfigurationBuilder_o *ConfigurationBuilder; // x0
  __int64 v6; // x1
  UnityEngine_Purchasing_ConfigurationBuilder_o *v7; // x19
  Il2CppObject *v8; // x20
  UnityEngine_Purchasing_ConfigurationBuilder_o *v9; // x21
  Il2CppClass *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4C218E1 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_Product__TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v3);
    this = (PurchaseLogicAndroid_o *)sub_1C3B764(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, v4);
    byte_4C218E1 = 1;
  }
  ConfigurationBuilder = PurchaseLogic__GetConfigurationBuilder((PurchaseLogic_o *)this, method);
  if ( !ConfigurationBuilder
    || (v7 = ConfigurationBuilder,
        v8 = UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
               ConfigurationBuilder,
               (const MethodInfo_2FE8650 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___),
        ConfigurationBuilder = (UnityEngine_Purchasing_ConfigurationBuilder_o *)sub_1C3B9B0(System_Action_Product__TypeInfo),
        !v2)
    || (v9 = ConfigurationBuilder,
        System_Action_object____ctor(
          (System_Action_object__o *)ConfigurationBuilder,
          v2,
          (intptr_t)v2->klass->vtable[26].methodPtr,
          0LL),
        !v8) )
  {
    sub_1C3B9C0(ConfigurationBuilder, v6);
  }
  klass = v8->klass;
  v11 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((UnityEngine_Purchasing_IGooglePlayConfiguration_c **)p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C8D744(v8, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(Il2CppObject *, UnityEngine_Purchasing_ConfigurationBuilder_o *, _QWORD))p_method)(
    v8,
    v9,
    *(_QWORD *)(p_method + 8));
  return v7;
}


bool __fastcall PurchaseLogicAndroid__IsAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v2; // x0

  if ( (byte_4C218E7 & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, method);
    byte_4C218E7 = 1;
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

  if ( (byte_4C218E9 & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, method);
    byte_4C218E9 = 1;
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

  if ( (byte_4C218E6 & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, method);
    byte_4C218E6 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UnityEngine_Purchasing_ProductDefinition_o *definition_k__BackingField; // x8
  int64_t id_k__BackingField; // x1
  PurchaseBehaviour_c *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BankShopEntityCollection; // x21
  System_Func_object__bool__o *v22; // x22
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x7
  int32_t klass; // w5

  if ( (byte_4C218EE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___, product);
    sub_1C3B764(&System_Func_BankShopEntity__bool__TypeInfo, v5);
    sub_1C3B764(&PurchaseBehaviour_TypeInfo, v6);
    sub_1C3B764(&Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__, v7);
    sub_1C3B764(&PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo, v8);
    byte_4C218EE = 1;
  }
  v9 = sub_1C3B9B0(PurchaseLogicAndroid___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  this->fields._existsDeferredPurchase = 1;
  if ( !product || (definition_k__BackingField = product->fields._definition_k__BackingField) == 0LL || !v9 )
    sub_1C3B9C0(v10, v11);
  id_k__BackingField = (int64_t)definition_k__BackingField->fields._id_k__BackingField;
  *(_QWORD *)(v9 + 16) = id_k__BackingField;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), id_k__BackingField, v12, v13, v14, v15, v16, v17);
  v20 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v20 = PurchaseBehaviour_TypeInfo;
  }
  BankShopEntityCollection = (System_Collections_Generic_IEnumerable_TSource__o *)v20->static_fields->BankShopEntityCollection;
  v22 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BankShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v9,
    Method_PurchaseLogicAndroid___c__DisplayClass22_0__OnDeferred_b__0__,
    0LL);
  v23 = System_Linq_Enumerable__FirstOrDefault_object__50415372(
          BankShopEntityCollection,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_BankShopEntity___);
  if ( v23 )
    klass = (int32_t)v23[1].klass;
  else
    klass = 0;
  PurchaseLogic__ExecuteBuyProductFinishedActionAndClear((PurchaseLogic_o *)this, 15, 0, 0, 0, klass, 0, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PurchaseLogicAndroid__SetAlreadyInitializedWithObfuscatedAccountId(
        PurchaseLogicAndroid_o *this,
        bool isInitialized,
        const MethodInfo *method)
{
  PurchaseLogicAndroid_c *v4; // x0

  if ( (byte_4C218E8 & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, isInitialized);
    byte_4C218E8 = 1;
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

  if ( (byte_4C218E5 & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, obfuscatedAccountId);
    byte_4C218E5 = 1;
  }
  v9 = PurchaseLogicAndroid_TypeInfo;
  if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
    v9 = PurchaseLogicAndroid_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_cachedObfuscatedAccountId = obfuscatedAccountId;
  sub_1C3B708(
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

  if ( (byte_4C218EA & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, isMismatched);
    byte_4C218EA = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PurchaseLogicAndroid_c *v10; // x0
  System_String_o *cachedObfuscatedAccountId; // x21
  System_String_o *IsNullOrEmpty; // x0
  __int64 v13; // x1
  struct System_Action_string__o *logErrorOutputAction; // x19
  System_String_o *v15; // x1
  System_String_o *v16; // x1
  Il2CppObject *m_target; // x3
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v19; // x2
  System_String_c *klass; // x8
  struct System_Reflection_MethodInfo_o *v21; // x19
  __int64 v22; // x9
  UnityEngine_Purchasing_IGooglePlayConfiguration_c **p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4C218E4 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Application_TypeInfo, builder);
    sub_1C3B764(&Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___, v5);
    sub_1C3B764(&UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_24672/*"{0} on {1}"*/, v7);
    sub_1C3B764(&StringLiteral_771/*")   Max ("*/, v8);
    byte_4C218E4 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
  {
    if ( !byte_4C21A00 )
    {
      sub_1C3B764(&PurchaseLogicAndroid_TypeInfo, v9);
      byte_4C21A00 = 1;
    }
    v10 = PurchaseLogicAndroid_TypeInfo;
    if ( !PurchaseLogicAndroid_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PurchaseLogicAndroid_TypeInfo);
      v10 = PurchaseLogicAndroid_TypeInfo;
    }
    cachedObfuscatedAccountId = v10->static_fields->_cachedObfuscatedAccountId;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(cachedObfuscatedAccountId, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      logErrorOutputAction = this->fields._logErrorOutputAction;
      if ( cachedObfuscatedAccountId )
        v15 = cachedObfuscatedAccountId;
      else
        v15 = (System_String_o *)StringLiteral_771/*")   Max ("*/;
      IsNullOrEmpty = System_String__Concat_63368612((System_String_o *)StringLiteral_24672/*"{0} on {1}"*/, v15, 0LL);
      if ( logErrorOutputAction )
      {
        v16 = IsNullOrEmpty;
        m_target = logErrorOutputAction->fields.m_target;
        original_method_info = logErrorOutputAction->fields.original_method_info;
        v19 = *(_QWORD *)&logErrorOutputAction->fields.extra_arg;
LABEL_26:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, __int64))m_target)(
          original_method_info,
          v16,
          v19);
        return;
      }
    }
    else if ( builder )
    {
      IsNullOrEmpty = (System_String_o *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object_(
                                           builder,
                                           (const MethodInfo_2FE8650 *)Method_UnityEngine_Purchasing_ConfigurationBuilder_Configure_IGooglePlayConfiguration___);
      if ( IsNullOrEmpty )
      {
        klass = IsNullOrEmpty->klass;
        v21 = (struct System_Reflection_MethodInfo_o *)IsNullOrEmpty;
        v22 = *(unsigned __int16 *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3) )
        {
          p_offset = (UnityEngine_Purchasing_IGooglePlayConfiguration_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo )
          {
            --v22;
            p_offset += 2;
            if ( !v22 )
              goto LABEL_23;
          }
          v24 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_23:
          v24 = sub_1C8D744(IsNullOrEmpty, UnityEngine_Purchasing_IGooglePlayConfiguration_TypeInfo, 1LL);
        }
        m_target = *(Il2CppObject **)v24;
        v19 = *(_QWORD *)(v24 + 8);
        original_method_info = v21;
        v16 = cachedObfuscatedAccountId;
        goto LABEL_26;
      }
    }
    sub_1C3B9C0(IsNullOrEmpty, v13);
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
    sub_1C3B9C0(this, 0LL);
  return System_String__Equals_63377732(this->fields.productId, bankShop->fields.googleShopId, 4, 0LL);
}