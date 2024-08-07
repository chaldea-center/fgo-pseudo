void __fastcall NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FEF01 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_long___ctor__, method);
    byte_49FEF01 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D65E0 *)Method_DataEntityBase_long___ctor__);
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
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_49FEEFF & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_49FEEFF = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_16;
  v10 = *(_QWORD *)&individuality->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B64C64(v7, v8);
      v8 = (unsigned int)individuality->m_Items[v11 + 1];
      if ( (int)v8 >= 1 )
      {
        if ( !v6 )
          goto LABEL_16;
        items = v6->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_34927D0 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = v8;
        }
      }
      LODWORD(v10) = individuality->max_length;
    }
    while ( (__int64)++v11 < (int)v10 );
  }
  if ( !v6 )
LABEL_16:
    sub_1B64C5C(v7, v8);
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v14; // x8
  unsigned __int64 v15; // x22
  int32_t *v16; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_49FEF00 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, individualities);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_49FEF00 = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_21;
  v14 = *(_QWORD *)&individualities->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v16 = &individualities->m_Items[1];
    do
    {
      if ( v15 >= (unsigned int)v14 )
LABEL_20:
        sub_1B64C64(v12, v13);
      v12 = System_Collections_Generic_List_int___Contains(
              SubIndividuality,
              v16[v15],
              (const MethodInfo_3492B48 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v12 )
      {
        if ( v15 >= individualities->max_length )
          goto LABEL_20;
        if ( !v11 )
          goto LABEL_21;
        v13 = (unsigned int)v16[v15];
        items = v11->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v13,
            *(const MethodInfo_34927D0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v13;
        }
      }
      LODWORD(v14) = individualities->max_length;
    }
    while ( (__int64)++v15 < (int)v14 );
  }
  if ( !v11 )
LABEL_21:
    sub_1B64C5C(v12, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v12; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_49FEEFE & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B64A00(&System_Math_TypeInfo, v5);
    byte_49FEEFE = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_21:
    sub_1B64C5C(v7, v8);
  v10 = *(_QWORD *)&individuality->max_length;
  if ( (int)v10 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v10; ++i )
    {
      if ( i >= (unsigned int)v10 )
        sub_1B64C64(v7, v8);
      v12 = individuality->m_Items[i + 1];
      if ( (v12 & 0x80000000) != 0 )
      {
        v7 = System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( v12 >= 0 )
          v8 = (unsigned int)v12;
        else
          v8 = (unsigned int)-v12;
        if ( !v6 )
          goto LABEL_21;
        items = v6->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_34927D0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = v8;
        }
      }
      LODWORD(v10) = individuality->max_length;
    }
  }
  return v6;
}