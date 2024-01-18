void __fastcall NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_418511C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, method);
    byte_418511C = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v10; // x8
  unsigned __int64 v11; // x21
  __int64 v13; // x0

  if ( (byte_418511A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_418511A = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
        v13 = sub_B2C460(v7);
        sub_B2C400(v13, 0LL);
      }
      v8 = (unsigned int)individuality->m_Items[v11 + 1];
      if ( (int)v8 >= 1 )
      {
        if ( !v6 )
          goto LABEL_14;
        System_Collections_Generic_List_int___Add(
          v6,
          v8,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v10) = individuality->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v10 );
  }
  if ( !v6 )
LABEL_14:
    sub_B2C434(v7, v8);
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_List_int__o *v11; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  unsigned __int64 v15; // x22
  int32_t *v16; // x23
  __int64 v18; // x0

  if ( (byte_418511B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, individualities);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_418511B = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_18;
  v14 = *(_QWORD *)&individualities->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v16 = &individualities->m_Items[1];
    do
    {
      if ( v15 >= (unsigned int)v14 )
      {
LABEL_17:
        v18 = sub_B2C460(v12);
        sub_B2C400(v18, 0LL);
      }
      v12 = System_Collections_Generic_List_int___Contains(
              SubIndividuality,
              v16[v15],
              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v12 )
      {
        if ( v15 >= individualities->max_length )
          goto LABEL_17;
        if ( !v11 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v11,
          v16[v15],
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v14) = individualities->max_length;
    }
    while ( (__int64)++v15 < (int)v14 );
  }
  if ( !v11 )
LABEL_18:
    sub_B2C434(v12, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall NpcServantFollowerIndividualityEntity__GetSubIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x19
  System_Math_c *v7; // x0
  __int64 v8; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v10; // x8
  unsigned __int64 i; // x21
  int32_t v12; // w25
  __int64 v14; // x0

  if ( (byte_4185119 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_B2C35C(&System_Math_TypeInfo, v5);
    byte_4185119 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_16:
    sub_B2C434(v7, v8);
  v10 = *(_QWORD *)&individuality->max_length;
  if ( (int)v10 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v10; ++i )
    {
      if ( i >= (unsigned int)v10 )
      {
        v14 = sub_B2C460(v7);
        sub_B2C400(v14, 0LL);
      }
      v12 = individuality->m_Items[i + 1];
      if ( (v12 & 0x80000000) != 0 )
      {
        v7 = System_Math_TypeInfo;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        if ( !v6 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v6,
          -v12,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v10) = individuality->max_length;
    }
  }
  return v6;
}