void __fastcall NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B44EDD & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_long___ctor__, method);
    byte_4B44EDD = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32DF9A0 *)Method_DataEntityBase_long___ctor__);
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
  __int64 v9; // x2
  struct System_Int32_array *individuality; // x20
  __int64 v11; // x8
  unsigned __int64 v12; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4B44EDB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4B44EDB = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_16;
  v11 = *(_QWORD *)&individuality->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1BDBADC(v7, v8, v9);
      v8 = (unsigned int)individuality->m_Items[v12 + 1];
      if ( (int)v8 >= 1 )
      {
        if ( !v6 )
          goto LABEL_16;
        items = v6->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = v8;
        }
      }
      LODWORD(v11) = individuality->max_length;
    }
    while ( (__int64)++v12 < (int)v11 );
  }
  if ( !v6 )
LABEL_16:
    sub_1BDBAD4(v7, v8);
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_List_int__o *SubIndividuality; // x21
  System_Collections_Generic_List_int__o *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  int32_t *v17; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4B44EDC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, individualities);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4B44EDC = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v11 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_21;
  v15 = *(_QWORD *)&individualities->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = &individualities->m_Items[1];
    do
    {
      if ( v16 >= (unsigned int)v15 )
LABEL_20:
        sub_1BDBADC(v12, v13, v14);
      v12 = System_Collections_Generic_List_int___Contains(
              SubIndividuality,
              v17[v16],
              (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v12 )
      {
        if ( v16 >= individualities->max_length )
          goto LABEL_20;
        if ( !v11 )
          goto LABEL_21;
        v13 = (unsigned int)v17[v16];
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
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v13;
        }
      }
      LODWORD(v15) = individualities->max_length;
    }
    while ( (__int64)++v16 < (int)v15 );
  }
  if ( !v11 )
LABEL_21:
    sub_1BDBAD4(v12, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x2
  struct System_Int32_array *individuality; // x20
  __int64 v11; // x8
  unsigned __int64 i; // x21
  int v13; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4B44EDA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1BDB878(&System_Math_TypeInfo, v5);
    byte_4B44EDA = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_21:
    sub_1BDBAD4(v7, v8);
  v11 = *(_QWORD *)&individuality->max_length;
  if ( (int)v11 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        sub_1BDBADC(v7, v8, v9);
      v13 = individuality->m_Items[i + 1];
      if ( (v13 & 0x80000000) != 0 )
      {
        v7 = System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( v13 >= 0 )
          v8 = (unsigned int)v13;
        else
          v8 = (unsigned int)-v13;
        if ( !v6 )
          goto LABEL_21;
        items = v6->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = v8;
        }
      }
      LODWORD(v11) = individuality->max_length;
    }
  }
  return v6;
}