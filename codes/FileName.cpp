void FileName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x19
  struct FileName_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct FileName_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct FileName_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C36893 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
    sub_1C32C20(&FileName_TypeInfo);
    sub_1C32C20(&StringLiteral_18841/*"ef_hit_slash01_M"*/);
    sub_1C32C20(&StringLiteral_18821/*"ef_crit01"*/);
    sub_1C32C20(&StringLiteral_20242/*"icon_support_02"*/);
    sub_1C32C20(&StringLiteral_18840/*"ef_hit01_M"*/);
    sub_1C32C20(&StringLiteral_20197/*"icon_eventjoin_02"*/);
    sub_1C32C20(&StringLiteral_18842/*"ef_hit_slash02_M"*/);
    byte_4C36893 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34223E4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v1 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_18841/*"ef_hit_slash01_M"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_18842/*"ef_hit_slash02_M"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_18840/*"ef_hit01_M"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  FileName_TypeInfo->static_fields->hiteffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)FileName_TypeInfo->static_fields, (int32_t)v1, v3, v4);
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v5,
    (const MethodInfo_34223E4 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v5 )
LABEL_6:
    sub_1C32E7C(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v5,
    0,
    0,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v5,
    1,
    (Il2CppObject *)StringLiteral_18821/*"ef_crit01"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v5,
    2,
    (Il2CppObject *)StringLiteral_18821/*"ef_crit01"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v5,
    3,
    (Il2CppObject *)StringLiteral_18821/*"ef_crit01"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = FileName_TypeInfo->static_fields;
  static_fields->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->criticaleffectlist, (int32_t)v5, v7, v8);
  v9 = StringLiteral_20242/*"icon_support_02"*/;
  v10 = FileName_TypeInfo->static_fields;
  v10->friendIconName = (struct System_String_o *)StringLiteral_20242/*"icon_support_02"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->friendIconName, v9, v11, v12);
  v13 = StringLiteral_20197/*"icon_eventjoin_02"*/;
  v14 = FileName_TypeInfo->static_fields;
  v14->eventJoinIconName = (struct System_String_o *)StringLiteral_20197/*"icon_eventjoin_02"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->eventJoinIconName, v13, v15, v16);
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

  if ( (byte_4C36892 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
    sub_1C32C20(&FileName_TypeInfo);
    byte_4C36892 = 1;
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
         (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
                                  (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1C32E7C(criticaleffectlist);
  }
  return 0;
}


System_String_o *FileName__getEffectName(int32_t type, const MethodInfo *method)
{
  FileName_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *hiteffectlist; // x0
  FileName_c *v5; // x0

  if ( (byte_4C36891 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
    sub_1C32C20(&FileName_TypeInfo);
    byte_4C36891 = 1;
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
         (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
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
                                  (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_12:
    sub_1C32E7C(hiteffectlist);
  }
  return 0;
}