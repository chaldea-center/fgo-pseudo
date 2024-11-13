void __fastcall NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B165F1 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_4B165EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B165EF = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_16;
  v15 = *(_QWORD *)&individuality->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1BCAA44(v12, v13);
      v13 = (unsigned int)individuality->m_Items[v16 + 1];
      if ( (int)v13 >= 1 )
      {
        if ( !v11 )
          goto LABEL_16;
        items = v11->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v13,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v13;
        }
      }
      LODWORD(v15) = individuality->max_length;
    }
    while ( (__int64)++v16 < (int)v15 );
  }
  if ( !v11 )
LABEL_16:
    sub_1BCAA3C(v12, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *SubIndividuality; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_int__o *v19; // x20
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  unsigned __int64 v23; // x22
  int32_t *v24; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10

  if ( (byte_4B165F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, individualities, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    byte_4B165F0 = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_21;
  v22 = *(_QWORD *)&individualities->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    v24 = &individualities->m_Items[1];
    do
    {
      if ( v23 >= (unsigned int)v22 )
LABEL_20:
        sub_1BCAA44(v20, v21);
      v20 = System_Collections_Generic_List_int___Contains(
              SubIndividuality,
              v24[v23],
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v20 )
      {
        if ( v23 >= individualities->max_length )
          goto LABEL_20;
        if ( !v19 )
          goto LABEL_21;
        v21 = (unsigned int)v24[v23];
        items = v19->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            v21,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size + 1] = v21;
        }
      }
      LODWORD(v22) = individualities->max_length;
    }
    while ( (__int64)++v23 < (int)v22 );
  }
  if ( !v19 )
LABEL_21:
    sub_1BCAA3C(v20, v21);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall NpcServantFollowerIndividualityEntity__GetSubIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x19
  System_Math_c *v12; // x0
  __int64 v13; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v15; // x8
  unsigned __int64 i; // x21
  int v17; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4B165EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Math_TypeInfo, v9, v10);
    byte_4B165EE = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_21:
    sub_1BCAA3C(v12, v13);
  v15 = *(_QWORD *)&individuality->max_length;
  if ( (int)v15 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
        sub_1BCAA44(v12, v13);
      v17 = individuality->m_Items[i + 1];
      if ( (v17 & 0x80000000) != 0 )
      {
        v12 = System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
        if ( v17 >= 0 )
          v13 = (unsigned int)v17;
        else
          v13 = (unsigned int)-v17;
        if ( !v11 )
          goto LABEL_21;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v13,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v13;
        }
      }
      LODWORD(v15) = individuality->max_length;
    }
  }
  return v11;
}