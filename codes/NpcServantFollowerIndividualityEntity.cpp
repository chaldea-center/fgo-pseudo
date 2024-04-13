void __fastcall NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E62A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42E62A3 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_int__o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v18; // x8
  unsigned __int64 v19; // x21
  __int64 v21; // x0

  if ( (byte_42E62A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42E62A1 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_14;
  v18 = *(_QWORD *)&individuality->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    do
    {
      if ( v19 >= (unsigned int)v18 )
      {
        v21 = sub_B5D6C8(v15);
        sub_B5D668(v21, 0LL);
      }
      v16 = (unsigned int)individuality->m_Items[v19 + 1];
      if ( (int)v16 >= 1 )
      {
        if ( !v14 )
          goto LABEL_14;
        System_Collections_Generic_List_int___Add(
          v14,
          v16,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v18) = individuality->max_length;
      ++v19;
    }
    while ( (__int64)v19 < (int)v18 );
  }
  if ( !v14 )
LABEL_14:
    sub_B5D69C(v15, v16);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_int__o *SubIndividuality; // x20
  System_Collections_Generic_List_int__o *v22; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  unsigned __int64 v26; // x22
  int32_t *v27; // x23
  __int64 v29; // x0

  if ( (byte_42E62A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)individualities, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v18, v19, v20);
    byte_42E62A2 = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v22 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_18;
  v25 = *(_QWORD *)&individualities->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    v27 = &individualities->m_Items[1];
    do
    {
      if ( v26 >= (unsigned int)v25 )
      {
LABEL_17:
        v29 = sub_B5D6C8(v23);
        sub_B5D668(v29, 0LL);
      }
      v23 = System_Collections_Generic_List_int___Contains(
              SubIndividuality,
              v27[v26],
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v23 )
      {
        if ( v26 >= individualities->max_length )
          goto LABEL_17;
        if ( !v22 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v22,
          v27[v26],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v25) = individualities->max_length;
    }
    while ( (__int64)++v26 < (int)v25 );
  }
  if ( !v22 )
LABEL_18:
    sub_B5D69C(v23, v24);
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall NpcServantFollowerIndividualityEntity__GetSubIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_int__o *v14; // x19
  System_Math_c *v15; // x0
  __int64 v16; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v18; // x8
  unsigned __int64 i; // x21
  int32_t v20; // w25
  __int64 v22; // x0

  if ( (byte_42E62A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Math_TypeInfo, v11, v12, v13);
    byte_42E62A0 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_16:
    sub_B5D69C(v15, v16);
  v18 = *(_QWORD *)&individuality->max_length;
  if ( (int)v18 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v18; ++i )
    {
      if ( i >= (unsigned int)v18 )
      {
        v22 = sub_B5D6C8(v15);
        sub_B5D668(v22, 0LL);
      }
      v20 = individuality->m_Items[i + 1];
      if ( (v20 & 0x80000000) != 0 )
      {
        v15 = System_Math_TypeInfo;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        if ( !v14 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v14,
          -v20,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v18) = individuality->max_length;
    }
  }
  return v14;
}