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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x19
  struct FileName_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct FileName_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct FileName_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B65B59 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__, v2);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo, v3);
    sub_1BE4ACC(&FileName_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_19089/*"ef_hit_slash01_M"*/, v5);
    sub_1BE4ACC(&StringLiteral_19073/*"ef_crit01"*/, v6);
    sub_1BE4ACC(&StringLiteral_20473/*"icon_support_02"*/, v7);
    sub_1BE4ACC(&StringLiteral_19088/*"ef_hit01_M"*/, v8);
    sub_1BE4ACC(&StringLiteral_20432/*"icon_eventjoin_02"*/, v9);
    sub_1BE4ACC(&StringLiteral_19090/*"ef_hit_slash02_M"*/, v10);
    byte_4B65B59 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v11,
    (const MethodInfo_327F5E8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v11 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    0,
    0LL,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    1,
    (Il2CppObject *)StringLiteral_19089/*"ef_hit_slash01_M"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    2,
    (Il2CppObject *)StringLiteral_19090/*"ef_hit_slash02_M"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    3,
    (Il2CppObject *)StringLiteral_19088/*"ef_hit01_M"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  FileName_TypeInfo->static_fields->hiteffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v11;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)FileName_TypeInfo->static_fields,
    (int64_t)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v20,
    (const MethodInfo_327F5E8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v20 )
LABEL_6:
    sub_1BE4D28(v12, v13);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    0,
    0LL,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    1,
    (Il2CppObject *)StringLiteral_19073/*"ef_crit01"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    2,
    (Il2CppObject *)StringLiteral_19073/*"ef_crit01"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v20,
    3,
    (Il2CppObject *)StringLiteral_19073/*"ef_crit01"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = FileName_TypeInfo->static_fields;
  static_fields->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v20;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->criticaleffectlist,
    (int64_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = StringLiteral_20473/*"icon_support_02"*/;
  v29 = FileName_TypeInfo->static_fields;
  v29->friendIconName = (struct System_String_o *)StringLiteral_20473/*"icon_support_02"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v29->friendIconName, v28, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_20432/*"icon_eventjoin_02"*/;
  v37 = FileName_TypeInfo->static_fields;
  v37->eventJoinIconName = (struct System_String_o *)StringLiteral_20432/*"icon_eventjoin_02"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v37->eventJoinIconName, v36, v38, v39, v40, v41, v42, v43);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *criticaleffectlist; // x0
  FileName_c *v7; // x0

  if ( (byte_4B65B58 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_1BE4ACC(&FileName_TypeInfo, v4);
    byte_4B65B58 = 1;
  }
  v5 = FileName_TypeInfo;
  if ( !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v5 = FileName_TypeInfo;
  }
  criticaleffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->criticaleffectlist;
  if ( !criticaleffectlist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         criticaleffectlist,
         type,
         (const MethodInfo_32801B0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v7 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v7 = FileName_TypeInfo;
    }
    criticaleffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->criticaleffectlist;
    if ( criticaleffectlist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  criticaleffectlist,
                                  type,
                                  (const MethodInfo_327FF1C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1BE4D28(criticaleffectlist, method);
  }
  return 0LL;
}


System_String_o *__fastcall FileName__getEffectName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FileName_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *hiteffectlist; // x0
  FileName_c *v7; // x0

  if ( (byte_4B65B57 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_1BE4ACC(&FileName_TypeInfo, v4);
    byte_4B65B57 = 1;
  }
  v5 = FileName_TypeInfo;
  if ( !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v5 = FileName_TypeInfo;
  }
  hiteffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->hiteffectlist;
  if ( !hiteffectlist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         hiteffectlist,
         type,
         (const MethodInfo_32801B0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v7 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v7 = FileName_TypeInfo;
    }
    hiteffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->hiteffectlist;
    if ( hiteffectlist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  hiteffectlist,
                                  type,
                                  (const MethodInfo_327FF1C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1BE4D28(hiteffectlist, method);
  }
  return 0LL;
}