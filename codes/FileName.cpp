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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x19
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x19
  struct FileName_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  struct FileName_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  struct FileName_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49FB417 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo, v4);
    sub_1B640C8(&FileName_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_18765/*"ef_hit_slash01_M"*/, v6);
    sub_1B640C8(&StringLiteral_18749/*"ef_crit01"*/, v7);
    sub_1B640C8(&StringLiteral_20111/*"icon_support_02"*/, v8);
    sub_1B640C8(&StringLiteral_18764/*"ef_hit01_M"*/, v9);
    sub_1B640C8(&StringLiteral_20071/*"icon_eventjoin_02"*/, v10);
    sub_1B640C8(&StringLiteral_18766/*"ef_hit_slash02_M"*/, v11);
    byte_49FB417 = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo,
                                                                   v1,
                                                                   v2);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v12,
    (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v12 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    0,
    0LL,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    1,
    (Il2CppObject *)StringLiteral_18765/*"ef_hit_slash01_M"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    2,
    (Il2CppObject *)StringLiteral_18766/*"ef_hit_slash02_M"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v12,
    3,
    (Il2CppObject *)StringLiteral_18764/*"ef_hit01_M"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  FileName_TypeInfo->static_fields->hiteffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)FileName_TypeInfo->static_fields, (int32_t)v12, v14, v15);
  v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo,
                                                                   v16,
                                                                   v17);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v18,
    (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v18 )
LABEL_6:
    sub_1B64324(v13);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    0,
    0LL,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    1,
    (Il2CppObject *)StringLiteral_18749/*"ef_crit01"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    2,
    (Il2CppObject *)StringLiteral_18749/*"ef_crit01"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    3,
    (Il2CppObject *)StringLiteral_18749/*"ef_crit01"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = FileName_TypeInfo->static_fields;
  static_fields->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->criticaleffectlist, (int32_t)v18, v20, v21);
  v22 = StringLiteral_20111/*"icon_support_02"*/;
  v23 = FileName_TypeInfo->static_fields;
  v23->friendIconName = (struct System_String_o *)StringLiteral_20111/*"icon_support_02"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->friendIconName, v22, v24, v25);
  v26 = StringLiteral_20071/*"icon_eventjoin_02"*/;
  v27 = FileName_TypeInfo->static_fields;
  v27->eventJoinIconName = (struct System_String_o *)StringLiteral_20071/*"icon_eventjoin_02"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->eventJoinIconName, v26, v28, v29);
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

  if ( (byte_49FB416 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_1B640C8(&FileName_TypeInfo, v4);
    byte_49FB416 = 1;
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
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
                                  (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1B64324(criticaleffectlist);
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

  if ( (byte_49FB415 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_1B640C8(&FileName_TypeInfo, v4);
    byte_49FB415 = 1;
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
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
                                  (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1B64324(hiteffectlist);
  }
  return 0LL;
}