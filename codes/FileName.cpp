void __fastcall FileName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v12; // x19
  __int64 v13; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v23; // x19
  struct FileName_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct FileName_StaticFields *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct FileName_StaticFields *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_4213247 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo, v4);
    sub_B0D8A4(&FileName_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_18248/*"ef_hit_slash01_M"*/, v6);
    sub_B0D8A4(&StringLiteral_18232/*"ef_crit01"*/, v7);
    sub_B0D8A4(&StringLiteral_19438/*"icon_support_02"*/, v8);
    sub_B0D8A4(&StringLiteral_18247/*"ef_hit01_M"*/, v9);
    sub_B0D8A4(&StringLiteral_19402/*"icon_eventjoin_02"*/, v10);
    sub_B0D8A4(&StringLiteral_18249/*"ef_hit_slash02_M"*/, v11);
    byte_4213247 = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo,
                                                                           v1,
                                                                           v2);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v12,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v12 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    0,
    0LL,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    1,
    (System_String_o *)StringLiteral_18248/*"ef_hit_slash01_M"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    2,
    (System_String_o *)StringLiteral_18249/*"ef_hit_slash02_M"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    3,
    (System_String_o *)StringLiteral_18247/*"ef_hit01_M"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = (BattleServantConfConponent_o *)FileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v12;
  sub_B0D840(static_fields, (System_Int32_array **)v12, v15, v16, v17, v18, v19, v20);
  v23 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo,
                                                                           v21,
                                                                           v22);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v23,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v23 )
LABEL_6:
    sub_B0D97C(v13);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    0,
    0LL,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    1,
    (System_String_o *)StringLiteral_18232/*"ef_crit01"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    2,
    (System_String_o *)StringLiteral_18232/*"ef_crit01"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    3,
    (System_String_o *)StringLiteral_18232/*"ef_crit01"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  v24 = FileName_TypeInfo->static_fields;
  v24->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v24->criticaleffectlist,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = FileName_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_19438/*"icon_support_02"*/;
  v31->friendIconName = (struct System_String_o *)StringLiteral_19438/*"icon_support_02"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v31->friendIconName, v32, v33, v34, v35, v36, v37, v38);
  v39 = FileName_TypeInfo->static_fields;
  v40 = (System_Int32_array **)StringLiteral_19402/*"icon_eventjoin_02"*/;
  v39->eventJoinIconName = (struct System_String_o *)StringLiteral_19402/*"icon_eventjoin_02"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v39->eventJoinIconName, v40, v41, v42, v43, v44, v45, v46);
}


void __fastcall FileName___ctor(FileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall FileName__getCriticalEffectName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FileName_c *v5; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *criticaleffectlist; // x0
  FileName_c *v7; // x0

  if ( (byte_4213246 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_B0D8A4(&FileName_TypeInfo, v4);
    byte_4213246 = 1;
  }
  v5 = FileName_TypeInfo;
  if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v5 = FileName_TypeInfo;
  }
  criticaleffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->criticaleffectlist;
  if ( !criticaleffectlist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         criticaleffectlist,
         type,
         (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v7 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v7 = FileName_TypeInfo;
    }
    criticaleffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->criticaleffectlist;
    if ( criticaleffectlist )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               criticaleffectlist,
               type,
               (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B0D97C(criticaleffectlist);
  }
  return 0LL;
}


System_String_o *__fastcall FileName__getEffectName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FileName_c *v5; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *hiteffectlist; // x0
  FileName_c *v7; // x0

  if ( (byte_4213245 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_B0D8A4(&FileName_TypeInfo, v4);
    byte_4213245 = 1;
  }
  v5 = FileName_TypeInfo;
  if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v5 = FileName_TypeInfo;
  }
  hiteffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->hiteffectlist;
  if ( !hiteffectlist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         hiteffectlist,
         type,
         (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v7 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v7 = FileName_TypeInfo;
    }
    hiteffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->hiteffectlist;
    if ( hiteffectlist )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               hiteffectlist,
               type,
               (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B0D97C(hiteffectlist);
  }
  return 0LL;
}