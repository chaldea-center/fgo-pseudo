void __fastcall FileName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v11; // x19
  struct FileName_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct FileName_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct FileName_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4389721 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
    sub_B775C4(&FileName_TypeInfo);
    sub_B775C4(&StringLiteral_18557/*"ef_hit_slash01_M"*/);
    sub_B775C4(&StringLiteral_18541/*"ef_crit01"*/);
    sub_B775C4(&StringLiteral_19770/*"icon_support_02"*/);
    sub_B775C4(&StringLiteral_18556/*"ef_hit01_M"*/);
    sub_B775C4(&StringLiteral_19733/*"icon_eventjoin_02"*/);
    sub_B775C4(&StringLiteral_18558/*"ef_hit_slash02_M"*/);
    byte_4389721 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B77694(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F9F080 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v1 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    0LL,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)StringLiteral_18557/*"ef_hit_slash01_M"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)StringLiteral_18558/*"ef_hit_slash02_M"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)StringLiteral_18556/*"ef_hit01_M"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = (BattleServantConfConponent_o *)FileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B77694(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v11,
    (const MethodInfo_2F9F080 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v11 )
LABEL_6:
    sub_B7769C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    0,
    0LL,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    1,
    (System_String_o *)StringLiteral_18541/*"ef_crit01"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    2,
    (System_String_o *)StringLiteral_18541/*"ef_crit01"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    3,
    (System_String_o *)StringLiteral_18541/*"ef_crit01"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  v12 = FileName_TypeInfo->static_fields;
  v12->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&v12->criticaleffectlist,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = FileName_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_19770/*"icon_support_02"*/;
  v19->friendIconName = (struct System_String_o *)StringLiteral_19770/*"icon_support_02"*/;
  sub_B77560((BattleServantConfConponent_o *)&v19->friendIconName, v20, v21, v22, v23, v24, v25, v26);
  v27 = FileName_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_19733/*"icon_eventjoin_02"*/;
  v27->eventJoinIconName = (struct System_String_o *)StringLiteral_19733/*"icon_eventjoin_02"*/;
  sub_B77560((BattleServantConfConponent_o *)&v27->eventJoinIconName, v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall FileName___ctor(FileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall FileName__getCriticalEffectName(int32_t type, const MethodInfo *method)
{
  FileName_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *criticaleffectlist; // x0
  FileName_c *v5; // x0

  if ( (byte_4389720 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
    sub_B775C4(&FileName_TypeInfo);
    byte_4389720 = 1;
  }
  v3 = FileName_TypeInfo;
  if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v3 = FileName_TypeInfo;
  }
  criticaleffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->criticaleffectlist;
  if ( !criticaleffectlist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         criticaleffectlist,
         type,
         (const MethodInfo_2F9FEA8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v5 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v5 = FileName_TypeInfo;
    }
    criticaleffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->criticaleffectlist;
    if ( criticaleffectlist )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               criticaleffectlist,
               type,
               (const MethodInfo_2F9FB70 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B7769C(criticaleffectlist, method);
  }
  return 0LL;
}


System_String_o *__fastcall FileName__getEffectName(int32_t type, const MethodInfo *method)
{
  FileName_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *hiteffectlist; // x0
  FileName_c *v5; // x0

  if ( (byte_438971F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
    sub_B775C4(&FileName_TypeInfo);
    byte_438971F = 1;
  }
  v3 = FileName_TypeInfo;
  if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v3 = FileName_TypeInfo;
  }
  hiteffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->hiteffectlist;
  if ( !hiteffectlist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         hiteffectlist,
         type,
         (const MethodInfo_2F9FEA8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v5 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v5 = FileName_TypeInfo;
    }
    hiteffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->hiteffectlist;
    if ( hiteffectlist )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               hiteffectlist,
               type,
               (const MethodInfo_2F9FB70 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B7769C(hiteffectlist, method);
  }
  return 0LL;
}