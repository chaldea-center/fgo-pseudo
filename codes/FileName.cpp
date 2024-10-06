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
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v16; // x19
  struct FileName_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  struct FileName_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct FileName_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A6EE53 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__, v1);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__, v2);
    sub_1B90010(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo, v3);
    sub_1B90010(&FileName_TypeInfo, v4);
    sub_1B90010(&StringLiteral_18863/*"ef_hit_slash01_M"*/, v5);
    sub_1B90010(&StringLiteral_18847/*"ef_crit01"*/, v6);
    sub_1B90010(&StringLiteral_20218/*"icon_support_02"*/, v7);
    sub_1B90010(&StringLiteral_18862/*"ef_hit01_M"*/, v8);
    sub_1B90010(&StringLiteral_20178/*"icon_eventjoin_02"*/, v9);
    sub_1B90010(&StringLiteral_18864/*"ef_hit_slash02_M"*/, v10);
    byte_4A6EE53 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B9025C(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v11,
    (const MethodInfo_31AB4E0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v11 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    0,
    0LL,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    1,
    (Il2CppObject *)StringLiteral_18863/*"ef_hit_slash01_M"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    2,
    (Il2CppObject *)StringLiteral_18864/*"ef_hit_slash02_M"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    3,
    (Il2CppObject *)StringLiteral_18862/*"ef_hit01_M"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  FileName_TypeInfo->static_fields->hiteffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v11;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)FileName_TypeInfo->static_fields, (int32_t)v11, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B9025C(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v16,
    (const MethodInfo_31AB4E0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v16 )
LABEL_6:
    sub_1B9026C(v12, v13);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v16,
    0,
    0LL,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v16,
    1,
    (Il2CppObject *)StringLiteral_18847/*"ef_crit01"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v16,
    2,
    (Il2CppObject *)StringLiteral_18847/*"ef_crit01"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v16,
    3,
    (Il2CppObject *)StringLiteral_18847/*"ef_crit01"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = FileName_TypeInfo->static_fields;
  static_fields->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v16;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->criticaleffectlist, (int32_t)v16, v18, v19);
  v20 = StringLiteral_20218/*"icon_support_02"*/;
  v21 = FileName_TypeInfo->static_fields;
  v21->friendIconName = (struct System_String_o *)StringLiteral_20218/*"icon_support_02"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->friendIconName, v20, v22, v23);
  v24 = StringLiteral_20178/*"icon_eventjoin_02"*/;
  v25 = FileName_TypeInfo->static_fields;
  v25->eventJoinIconName = (struct System_String_o *)StringLiteral_20178/*"icon_eventjoin_02"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v25->eventJoinIconName, v24, v26, v27);
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

  if ( (byte_4A6EE52 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_1B90010(&FileName_TypeInfo, v4);
    byte_4A6EE52 = 1;
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
         (const MethodInfo_31AC0A8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
                                  (const MethodInfo_31ABE14 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1B9026C(criticaleffectlist, method);
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

  if ( (byte_4A6EE51 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_1B90010(&FileName_TypeInfo, v4);
    byte_4A6EE51 = 1;
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
         (const MethodInfo_31AC0A8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
                                  (const MethodInfo_31ABE14 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1B9026C(hiteffectlist, method);
  }
  return 0LL;
}