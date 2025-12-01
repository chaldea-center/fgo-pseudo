void NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC797C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_long___ctor__);
    byte_4CC797C = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_34069E4 *)Method_DataEntityBase_long___ctor__);
}


int64_t NpcServantFollowerIndividualityEntity__CreatePrimaryKey(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.npcSvtFollowerId;
}


System_Int32_array *NpcServantFollowerIndividualityEntity__GetAddIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Int32_array *individuality; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4CC797A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC797A = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_16;
  max_length = individuality->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C71610(v4);
      v5 = (unsigned int)individuality->m_Items[v8];
      if ( (int)v5 >= 1 )
      {
        if ( !v3 )
          goto LABEL_16;
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v5,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
      }
      LODWORD(max_length) = individuality->max_length;
    }
    while ( (__int64)++v8 < (int)max_length );
  }
  if ( !v3 )
LABEL_16:
    sub_1C71608(v4, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *SubIndividuality; // x21
  System_Collections_Generic_List_int__o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  int32_t *m_Items; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4CC797B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC797B = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_21;
  max_length = individualities->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    m_Items = individualities->m_Items;
    do
    {
      if ( v10 >= (unsigned int)max_length )
LABEL_20:
        sub_1C71610(v7);
      v7 = System_Collections_Generic_List_int___Contains(
             SubIndividuality,
             m_Items[v10],
             (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v7 )
      {
        if ( v10 >= LODWORD(individualities->max_length) )
          goto LABEL_20;
        if ( !v6 )
          goto LABEL_21;
        v8 = (unsigned int)m_Items[v10];
        items = v6->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = v8;
        }
      }
      LODWORD(max_length) = individualities->max_length;
    }
    while ( (__int64)++v10 < (int)max_length );
  }
  if ( !v6 )
LABEL_21:
    sub_1C71608(v7, v8);
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *NpcServantFollowerIndividualityEntity__GetSubIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  System_Math_c *v4; // x0
  __int64 v5; // x1
  struct System_Int32_array *individuality; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x21
  int v9; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_4CC7979 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC7979 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_21:
    sub_1C71608(v4, v5);
  max_length = individuality->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C71610(v4);
      v9 = individuality->m_Items[i];
      if ( v9 < 0 )
      {
        v4 = System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( v9 >= 0 )
          v5 = (unsigned int)v9;
        else
          v5 = (unsigned int)-v9;
        if ( !v3 )
          goto LABEL_21;
        items = v3->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v5,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
      }
      LODWORD(max_length) = individuality->max_length;
    }
  }
  return v3;
}