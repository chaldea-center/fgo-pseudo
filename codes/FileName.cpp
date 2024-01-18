void __fastcall FileName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v21; // x19
  struct FileName_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct FileName_StaticFields *v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct FileName_StaticFields *v37; // x0
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_41869A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__, v2);
    sub_B2C35C(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo, v3);
    sub_B2C35C(&FileName_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_18192/*"ef_hit_slash01_M"*/, v5);
    sub_B2C35C(&StringLiteral_18176/*"ef_crit01"*/, v6);
    sub_B2C35C(&StringLiteral_19377/*"icon_support_02"*/, v7);
    sub_B2C35C(&StringLiteral_18191/*"ef_hit01_M"*/, v8);
    sub_B2C35C(&StringLiteral_19341/*"icon_eventjoin_02"*/, v9);
    sub_B2C35C(&StringLiteral_18193/*"ef_hit_slash02_M"*/, v10);
    byte_41869A0 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v11,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v11 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    0,
    0LL,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    1,
    (System_String_o *)StringLiteral_18192/*"ef_hit_slash01_M"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    2,
    (System_String_o *)StringLiteral_18193/*"ef_hit_slash02_M"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    3,
    (System_String_o *)StringLiteral_18191/*"ef_hit01_M"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = (BattleServantConfConponent_o *)FileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v11;
  sub_B2C2F8(static_fields, (System_Int32_array **)v11, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v21,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v21 )
LABEL_6:
    sub_B2C434(v12, v13);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v21,
    0,
    0LL,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v21,
    1,
    (System_String_o *)StringLiteral_18176/*"ef_crit01"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v21,
    2,
    (System_String_o *)StringLiteral_18176/*"ef_crit01"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v21,
    3,
    (System_String_o *)StringLiteral_18176/*"ef_crit01"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  v22 = FileName_TypeInfo->static_fields;
  v22->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v22->criticaleffectlist,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = FileName_TypeInfo->static_fields;
  v30 = (System_Int32_array **)StringLiteral_19377/*"icon_support_02"*/;
  v29->friendIconName = (struct System_String_o *)StringLiteral_19377/*"icon_support_02"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->friendIconName, v30, v31, v32, v33, v34, v35, v36);
  v37 = FileName_TypeInfo->static_fields;
  v38 = (System_Int32_array **)StringLiteral_19341/*"icon_eventjoin_02"*/;
  v37->eventJoinIconName = (struct System_String_o *)StringLiteral_19341/*"icon_eventjoin_02"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v37->eventJoinIconName, v38, v39, v40, v41, v42, v43, v44);
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

  if ( (byte_418699F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_B2C35C(&FileName_TypeInfo, v4);
    byte_418699F = 1;
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
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
               (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B2C434(criticaleffectlist, method);
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

  if ( (byte_418699E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_B2C35C(&FileName_TypeInfo, v4);
    byte_418699E = 1;
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
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
               (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B2C434(hiteffectlist, method);
  }
  return 0LL;
}