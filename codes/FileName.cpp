void FileName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x19
  struct FileName_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  struct FileName_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct FileName_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4CB5186 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
    sub_1C6BA08(&FileName_TypeInfo);
    sub_1C6BA08(&StringLiteral_18880/*"ef_hit_slash01_M"*/);
    sub_1C6BA08(&StringLiteral_18860/*"ef_crit01"*/);
    sub_1C6BA08(&StringLiteral_20309/*"icon_support_02"*/);
    sub_1C6BA08(&StringLiteral_18879/*"ef_hit01_M"*/);
    sub_1C6BA08(&StringLiteral_20264/*"icon_eventjoin_02"*/);
    sub_1C6BA08(&StringLiteral_18881/*"ef_hit_slash02_M"*/);
    byte_4CB5186 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v1 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_18880/*"ef_hit_slash01_M"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_18881/*"ef_hit_slash02_M"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_18879/*"ef_hit01_M"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  FileName_TypeInfo->static_fields->hiteffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)FileName_TypeInfo->static_fields, (int32_t)v1, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v6,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v6 )
LABEL_6:
    sub_1C6BC60(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    0,
    0,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    1,
    (Il2CppObject *)StringLiteral_18860/*"ef_crit01"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    2,
    (Il2CppObject *)StringLiteral_18860/*"ef_crit01"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    3,
    (Il2CppObject *)StringLiteral_18860/*"ef_crit01"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = FileName_TypeInfo->static_fields;
  static_fields->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->criticaleffectlist, (int32_t)v6, v8, v9);
  v10 = StringLiteral_20309/*"icon_support_02"*/;
  v11 = FileName_TypeInfo->static_fields;
  v11->friendIconName = (struct System_String_o *)StringLiteral_20309/*"icon_support_02"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->friendIconName, v10, v12, v13);
  v14 = StringLiteral_20264/*"icon_eventjoin_02"*/;
  v15 = FileName_TypeInfo->static_fields;
  v15->eventJoinIconName = (struct System_String_o *)StringLiteral_20264/*"icon_eventjoin_02"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->eventJoinIconName, v14, v16, v17);
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

  if ( (byte_4CB5185 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
    sub_1C6BA08(&FileName_TypeInfo);
    byte_4CB5185 = 1;
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
         (const MethodInfo_3485B20 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
                                  (const MethodInfo_348588C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1C6BC60(criticaleffectlist, method);
  }
  return 0;
}


System_String_o *FileName__getEffectName(int32_t type, const MethodInfo *method)
{
  FileName_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *hiteffectlist; // x0
  FileName_c *v5; // x0

  if ( (byte_4CB5184 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
    sub_1C6BA08(&FileName_TypeInfo);
    byte_4CB5184 = 1;
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
         (const MethodInfo_3485B20 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
                                  (const MethodInfo_348588C *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1C6BC60(hiteffectlist, method);
  }
  return 0;
}