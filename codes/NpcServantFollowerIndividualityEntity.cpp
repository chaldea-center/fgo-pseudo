void __fastcall NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42ADB0C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42ADB0C = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
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
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  __int64 v10; // x0

  if ( (byte_42ADB0A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42ADB0A = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_14;
  v7 = *(_QWORD *)&individuality->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v7 )
      {
        v10 = sub_B52A88(v4);
        sub_B52A28(v10, 0LL);
      }
      v5 = (unsigned int)individuality->m_Items[v8 + 1];
      if ( (int)v5 >= 1 )
      {
        if ( !v3 )
          goto LABEL_14;
        System_Collections_Generic_List_int___Add(
          v3,
          v5,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v7) = individuality->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
  if ( !v3 )
LABEL_14:
    sub_B52A5C(v4, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *SubIndividuality; // x20
  System_Collections_Generic_List_int__o *v6; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  int32_t *v11; // x23
  __int64 v13; // x0

  if ( (byte_42ADB0B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42ADB0B = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v6 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_18;
  v9 = *(_QWORD *)&individualities->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    v11 = &individualities->m_Items[1];
    do
    {
      if ( v10 >= (unsigned int)v9 )
      {
LABEL_17:
        v13 = sub_B52A88(v7);
        sub_B52A28(v13, 0LL);
      }
      v7 = System_Collections_Generic_List_int___Contains(
             SubIndividuality,
             v11[v10],
             (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v7 )
      {
        if ( v10 >= individualities->max_length )
          goto LABEL_17;
        if ( !v6 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v6,
          v11[v10],
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v9) = individualities->max_length;
    }
    while ( (__int64)++v10 < (int)v9 );
  }
  if ( !v6 )
LABEL_18:
    sub_B52A5C(v7, v8);
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall NpcServantFollowerIndividualityEntity__GetSubIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  System_Math_c *v4; // x0
  __int64 v5; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v7; // x8
  unsigned __int64 i; // x21
  int32_t v9; // w25
  __int64 v11; // x0

  if ( (byte_42ADB09 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    byte_42ADB09 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_16:
    sub_B52A5C(v4, v5);
  v7 = *(_QWORD *)&individuality->max_length;
  if ( (int)v7 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v7; ++i )
    {
      if ( i >= (unsigned int)v7 )
      {
        v11 = sub_B52A88(v4);
        sub_B52A28(v11, 0LL);
      }
      v9 = individuality->m_Items[i + 1];
      if ( (v9 & 0x80000000) != 0 )
      {
        v4 = System_Math_TypeInfo;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        if ( !v3 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v3,
          -v9,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v7) = individuality->max_length;
    }
  }
  return v3;
}