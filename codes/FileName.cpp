void __fastcall FileName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v34; // x19
  struct FileName_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  struct FileName_StaticFields *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  struct FileName_StaticFields *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4B151A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo, v6, v7);
    sub_1BCA7E0(&FileName_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_19032/*"ef_hit_slash01_M"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19016/*"ef_crit01"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20405/*"icon_support_02"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_19031/*"ef_hit01_M"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_20364/*"icon_eventjoin_02"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19033/*"ef_hit_slash02_M"*/, v20, v21);
    byte_4B151A9 = 1;
  }
  v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo,
                                                                   v1,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v22,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v22 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    0,
    0LL,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    1,
    (Il2CppObject *)StringLiteral_19032/*"ef_hit_slash01_M"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    2,
    (Il2CppObject *)StringLiteral_19033/*"ef_hit_slash02_M"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    3,
    (Il2CppObject *)StringLiteral_19031/*"ef_hit01_M"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  FileName_TypeInfo->static_fields->hiteffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v22;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)FileName_TypeInfo->static_fields,
    (int64_t)v22,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo,
                                                                   v31,
                                                                   v32,
                                                                   v33);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v34,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v34 )
LABEL_6:
    sub_1BCAA3C(v23, v24);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    0,
    0LL,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    1,
    (Il2CppObject *)StringLiteral_19016/*"ef_crit01"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    2,
    (Il2CppObject *)StringLiteral_19016/*"ef_crit01"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    3,
    (Il2CppObject *)StringLiteral_19016/*"ef_crit01"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = FileName_TypeInfo->static_fields;
  static_fields->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v34;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->criticaleffectlist,
    (int64_t)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = StringLiteral_20405/*"icon_support_02"*/;
  v43 = FileName_TypeInfo->static_fields;
  v43->friendIconName = (struct System_String_o *)StringLiteral_20405/*"icon_support_02"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v43->friendIconName, v42, v44, v45, v46, v47, v48, v49);
  v50 = StringLiteral_20364/*"icon_eventjoin_02"*/;
  v51 = FileName_TypeInfo->static_fields;
  v51->eventJoinIconName = (struct System_String_o *)StringLiteral_20364/*"icon_eventjoin_02"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v51->eventJoinIconName, v50, v52, v53, v54, v55, v56, v57);
}


void __fastcall FileName___ctor(FileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall FileName__getCriticalEffectName(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  FileName_c *v8; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *criticaleffectlist; // x0
  FileName_c *v10; // x0

  if ( (byte_4B151A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v4, v5);
    sub_1BCA7E0(&FileName_TypeInfo, v6, v7);
    byte_4B151A8 = 1;
  }
  v8 = FileName_TypeInfo;
  if ( !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo, method);
    v8 = FileName_TypeInfo;
  }
  criticaleffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->criticaleffectlist;
  if ( !criticaleffectlist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         criticaleffectlist,
         type,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v10 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo, method);
      v10 = FileName_TypeInfo;
    }
    criticaleffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->criticaleffectlist;
    if ( criticaleffectlist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  criticaleffectlist,
                                  type,
                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1BCAA3C(criticaleffectlist, method);
  }
  return 0LL;
}


System_String_o *__fastcall FileName__getEffectName(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  FileName_c *v8; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *hiteffectlist; // x0
  FileName_c *v10; // x0

  if ( (byte_4B151A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v4, v5);
    sub_1BCA7E0(&FileName_TypeInfo, v6, v7);
    byte_4B151A7 = 1;
  }
  v8 = FileName_TypeInfo;
  if ( !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo, method);
    v8 = FileName_TypeInfo;
  }
  hiteffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->hiteffectlist;
  if ( !hiteffectlist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         hiteffectlist,
         type,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v10 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo, method);
      v10 = FileName_TypeInfo;
    }
    hiteffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->hiteffectlist;
    if ( hiteffectlist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  hiteffectlist,
                                  type,
                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1BCAA3C(hiteffectlist, method);
  }
  return 0LL;
}