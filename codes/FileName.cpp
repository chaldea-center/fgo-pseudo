void __fastcall FileName___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v31; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v41; // x19
  struct FileName_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct FileName_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct FileName_StaticFields *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_42E69D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&FileName_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_18420/*"ef_hit_slash01_M"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18404/*"ef_crit01"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_19621/*"icon_support_02"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_18419/*"ef_hit01_M"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_19585/*"icon_eventjoin_02"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_18421/*"ef_hit_slash02_M"*/, v28, v29, v30);
    byte_42E69D3 = 1;
  }
  v31 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v31,
    (const MethodInfo_2F48DA8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v31 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v31,
    0,
    0LL,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v31,
    1,
    (System_String_o *)StringLiteral_18420/*"ef_hit_slash01_M"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v31,
    2,
    (System_String_o *)StringLiteral_18421/*"ef_hit_slash02_M"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v31,
    3,
    (System_String_o *)StringLiteral_18419/*"ef_hit01_M"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = (BattleServantConfConponent_o *)FileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v31;
  sub_B5D560(static_fields, (System_Int32_array **)v31, v35, v36, v37, v38, v39, v40);
  v41 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v41,
    (const MethodInfo_2F48DA8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v41 )
LABEL_6:
    sub_B5D69C(v32, v33);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v41,
    0,
    0LL,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v41,
    1,
    (System_String_o *)StringLiteral_18404/*"ef_crit01"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v41,
    2,
    (System_String_o *)StringLiteral_18404/*"ef_crit01"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v41,
    3,
    (System_String_o *)StringLiteral_18404/*"ef_crit01"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  v42 = FileName_TypeInfo->static_fields;
  v42->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v42->criticaleffectlist,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = FileName_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_19621/*"icon_support_02"*/;
  v49->friendIconName = (struct System_String_o *)StringLiteral_19621/*"icon_support_02"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v49->friendIconName, v50, v51, v52, v53, v54, v55, v56);
  v57 = FileName_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_19585/*"icon_eventjoin_02"*/;
  v57->eventJoinIconName = (struct System_String_o *)StringLiteral_19585/*"icon_eventjoin_02"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v57->eventJoinIconName, v58, v59, v60, v61, v62, v63, v64);
}


void __fastcall FileName___ctor(FileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall FileName__getCriticalEffectName(int32_t type, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FileName_c *v11; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *criticaleffectlist; // x0
  FileName_c *v13; // x0

  if ( (byte_42E69D2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v5, v6, v7);
    sub_B5D5C4(&FileName_TypeInfo, v8, v9, v10);
    byte_42E69D2 = 1;
  }
  v11 = FileName_TypeInfo;
  if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v11 = FileName_TypeInfo;
  }
  criticaleffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v11->static_fields->criticaleffectlist;
  if ( !criticaleffectlist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         criticaleffectlist,
         type,
         (const MethodInfo_2F49BD0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v13 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v13 = FileName_TypeInfo;
    }
    criticaleffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v13->static_fields->criticaleffectlist;
    if ( criticaleffectlist )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               criticaleffectlist,
               type,
               (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B5D69C(criticaleffectlist, method);
  }
  return 0LL;
}


System_String_o *__fastcall FileName__getEffectName(int32_t type, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FileName_c *v11; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *hiteffectlist; // x0
  FileName_c *v13; // x0

  if ( (byte_42E69D1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v5, v6, v7);
    sub_B5D5C4(&FileName_TypeInfo, v8, v9, v10);
    byte_42E69D1 = 1;
  }
  v11 = FileName_TypeInfo;
  if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v11 = FileName_TypeInfo;
  }
  hiteffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v11->static_fields->hiteffectlist;
  if ( !hiteffectlist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         hiteffectlist,
         type,
         (const MethodInfo_2F49BD0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v13 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v13 = FileName_TypeInfo;
    }
    hiteffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v13->static_fields->hiteffectlist;
    if ( hiteffectlist )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               hiteffectlist,
               type,
               (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B5D69C(hiteffectlist, method);
  }
  return 0LL;
}