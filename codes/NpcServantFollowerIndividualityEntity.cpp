void __fastcall NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4212006 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_long___ctor__, method);
    byte_4212006 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_2669AD8 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall NpcServantFollowerIndividualityEntity__CreatePrimaryKey(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.npcSvtFollowerId;
}


System_Int32_array *__fastcall NpcServantFollowerIndividualityEntity__GetAddIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  __int64 v8; // x0
  struct System_Int32_array *individuality; // x20
  __int64 v10; // x8
  unsigned __int64 v11; // x21
  int32_t v12; // w1
  __int64 v14; // x0

  if ( (byte_4212004 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4212004 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_14;
  v10 = *(_QWORD *)&individuality->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v14 = sub_B0D9A8(v8);
        sub_B0D948(v14, 0LL);
      }
      v12 = individuality->m_Items[v11 + 1];
      if ( v12 >= 1 )
      {
        if ( !v7 )
          goto LABEL_14;
        System_Collections_Generic_List_int___Add(
          v7,
          v12,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v10) = individuality->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v10 );
  }
  if ( !v7 )
LABEL_14:
    sub_B0D97C(v8);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *SubIndividuality; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  int32_t *v17; // x23
  __int64 v19; // x0

  if ( (byte_4212005 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, individualities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4212005 = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v13 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v11, v12);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_18;
  v15 = *(_QWORD *)&individualities->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = &individualities->m_Items[1];
    do
    {
      if ( v16 >= (unsigned int)v15 )
      {
LABEL_17:
        v19 = sub_B0D9A8(v14);
        sub_B0D948(v19, 0LL);
      }
      v14 = System_Collections_Generic_List_int___Contains(
              SubIndividuality,
              v17[v16],
              (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v14 )
      {
        if ( v16 >= individualities->max_length )
          goto LABEL_17;
        if ( !v13 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v13,
          v17[v16],
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v15) = individualities->max_length;
    }
    while ( (__int64)++v16 < (int)v15 );
  }
  if ( !v13 )
LABEL_18:
    sub_B0D97C(v14);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall NpcServantFollowerIndividualityEntity__GetSubIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  System_Math_c *v8; // x0
  struct System_Int32_array *individuality; // x20
  __int64 v10; // x8
  unsigned __int64 i; // x21
  int32_t v12; // w25
  __int64 v14; // x0

  if ( (byte_4212003 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B0D8A4(&System_Math_TypeInfo, v6);
    byte_4212003 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_16:
    sub_B0D97C(v8);
  v10 = *(_QWORD *)&individuality->max_length;
  if ( (int)v10 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v10; ++i )
    {
      if ( i >= (unsigned int)v10 )
      {
        v14 = sub_B0D9A8(v8);
        sub_B0D948(v14, 0LL);
      }
      v12 = individuality->m_Items[i + 1];
      if ( (v12 & 0x80000000) != 0 )
      {
        v8 = System_Math_TypeInfo;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        if ( !v7 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v7,
          -v12,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v10) = individuality->max_length;
    }
  }
  return v7;
}