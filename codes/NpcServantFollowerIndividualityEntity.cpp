void __fastcall NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC7E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_long___ctor__, method);
    byte_49FC7E8 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D3CEC *)Method_DataEntityBase_long___ctor__);
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
  __int64 v9; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v11; // x8
  unsigned __int64 v12; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_49FC7E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_49FC7E6 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1B6432C(v8, v9);
      v9 = (unsigned int)individuality->m_Items[v12 + 1];
      if ( (int)v9 >= 1 )
      {
        if ( !v7 )
          goto LABEL_16;
        items = v7->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v9,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = v9;
        }
      }
      LODWORD(v11) = individuality->max_length;
    }
    while ( (__int64)++v12 < (int)v11 );
  }
  if ( !v7 )
LABEL_16:
    sub_1B64324(v8);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  int32_t *v18; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_49FC7E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, individualities);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_49FC7E7 = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v11, v12);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_21;
  v16 = *(_QWORD *)&individualities->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    v18 = &individualities->m_Items[1];
    do
    {
      if ( v17 >= (unsigned int)v16 )
LABEL_20:
        sub_1B6432C(v14, v15);
      v14 = System_Collections_Generic_List_int___Contains(
              SubIndividuality,
              v18[v17],
              (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v14 )
      {
        if ( v17 >= individualities->max_length )
          goto LABEL_20;
        if ( !v13 )
          goto LABEL_21;
        v15 = (unsigned int)v18[v17];
        items = v13->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            v15,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = v15;
        }
      }
      LODWORD(v16) = individualities->max_length;
    }
    while ( (__int64)++v17 < (int)v16 );
  }
  if ( !v13 )
LABEL_21:
    sub_1B64324(v14);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x1
  struct System_Int32_array *individuality; // x20
  __int64 v11; // x8
  unsigned __int64 i; // x21
  int v13; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_49FC7E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B640C8(&System_Math_TypeInfo, v6);
    byte_49FC7E5 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_21:
    sub_1B64324(v8);
  v11 = *(_QWORD *)&individuality->max_length;
  if ( (int)v11 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v11; ++i )
    {
      if ( i >= (unsigned int)v11 )
        sub_1B6432C(v8, v9);
      v13 = individuality->m_Items[i + 1];
      if ( (v13 & 0x80000000) != 0 )
      {
        v8 = System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( v13 >= 0 )
          v9 = (unsigned int)v13;
        else
          v9 = (unsigned int)-v13;
        if ( !v7 )
          goto LABEL_21;
        items = v7->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v9,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = v9;
        }
      }
      LODWORD(v11) = individuality->max_length;
    }
  }
  return v7;
}