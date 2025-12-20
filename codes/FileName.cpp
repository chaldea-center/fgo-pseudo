void FileName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x19
  struct FileName_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  struct FileName_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  struct FileName_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4D2B706 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
    sub_1C94098(&FileName_TypeInfo);
    sub_1C94098(&StringLiteral_18970/*"ef_hit_slash01_M"*/);
    sub_1C94098(&StringLiteral_18947/*"ef_crit01"*/);
    sub_1C94098(&StringLiteral_20416/*"icon_support_02"*/);
    sub_1C94098(&StringLiteral_18969/*"ef_hit01_M"*/);
    sub_1C94098(&StringLiteral_20369/*"icon_eventjoin_02"*/);
    sub_1C94098(&StringLiteral_18971/*"ef_hit_slash02_M"*/);
    byte_4D2B706 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34EA2E0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v1 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_18970/*"ef_hit_slash01_M"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_18971/*"ef_hit_slash02_M"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_18969/*"ef_hit01_M"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  FileName_TypeInfo->static_fields->hiteffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)FileName_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v10,
    (const MethodInfo_34EA2E0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v10 )
LABEL_6:
    sub_1C942F0(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    0,
    0,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    1,
    (Il2CppObject *)StringLiteral_18947/*"ef_crit01"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    2,
    (Il2CppObject *)StringLiteral_18947/*"ef_crit01"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    3,
    (Il2CppObject *)StringLiteral_18947/*"ef_crit01"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = FileName_TypeInfo->static_fields;
  static_fields->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->criticaleffectlist,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_20416/*"icon_support_02"*/;
  v19 = FileName_TypeInfo->static_fields;
  v19->friendIconName = (struct System_String_o *)StringLiteral_20416/*"icon_support_02"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v19->friendIconName, v18, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_20369/*"icon_eventjoin_02"*/;
  v27 = FileName_TypeInfo->static_fields;
  v27->eventJoinIconName = (struct System_String_o *)StringLiteral_20369/*"icon_eventjoin_02"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v27->eventJoinIconName, v26, v28, v29, v30, v31, v32, v33);
}


void FileName___ctor(FileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *FileName__getCriticalEffectName(int32_t type, const MethodInfo *method)
{
  FileName_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *criticaleffectlist; // x0
  FileName_c *v5; // x0

  if ( (byte_4D2B705 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
    sub_1C94098(&FileName_TypeInfo);
    byte_4D2B705 = 1;
  }
  v3 = FileName_TypeInfo;
  if ( !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v3 = FileName_TypeInfo;
  }
  criticaleffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->criticaleffectlist;
  if ( !criticaleffectlist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         criticaleffectlist,
         type,
         (const MethodInfo_34EAEA8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v5 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v5 = FileName_TypeInfo;
    }
    criticaleffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->criticaleffectlist;
    if ( criticaleffectlist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  criticaleffectlist,
                                  type,
                                  (const MethodInfo_34EAC14 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1C942F0(criticaleffectlist, method);
  }
  return 0;
}


System_String_o *FileName__getEffectName(int32_t type, const MethodInfo *method)
{
  FileName_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *hiteffectlist; // x0
  FileName_c *v5; // x0

  if ( (byte_4D2B704 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
    sub_1C94098(&FileName_TypeInfo);
    byte_4D2B704 = 1;
  }
  v3 = FileName_TypeInfo;
  if ( !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v3 = FileName_TypeInfo;
  }
  hiteffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->hiteffectlist;
  if ( !hiteffectlist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         hiteffectlist,
         type,
         (const MethodInfo_34EAEA8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v5 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v5 = FileName_TypeInfo;
    }
    hiteffectlist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->hiteffectlist;
    if ( hiteffectlist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  hiteffectlist,
                                  type,
                                  (const MethodInfo_34EAC14 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1C942F0(hiteffectlist, method);
  }
  return 0;
}