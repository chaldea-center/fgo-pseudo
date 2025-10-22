void BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56A1D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
    byte_4C56A1D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    324,
    (const MethodInfo_33B0C34 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  Il2CppObject *v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C56A1B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4C56A1B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
      if ( list )
      {
        v8 = (Il2CppObject *)list;
        list = (System_Collections_ObjectModel_Collection_T__o *)BoostEntity__IsValidPeriod((BoostEntity_o *)list, v4);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C3E7C0(list, v4);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


BoostEntity_array *BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w23
  Il2CppObject *v9; // x22
  int32_t i; // w24
  Il2CppObject *v11; // x29
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C56A1C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4C56A1C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_21:
    if ( v5 )
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_22:
    sub_1C3E7C0(list, v6);
  }
  v8 = (int)list;
  v9 = 0;
  for ( i = 0; i != v8; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    v11 = v9;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    if ( list )
    {
      v9 = (Il2CppObject *)list;
      if ( LODWORD(list->fields.items) == RecommendedBoostId )
        continue;
      if ( !v5 )
        goto LABEL_22;
      items = v5->fields._items;
      v15 = Method_System_Collections_Generic_List_BoostEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_22;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v12, v13);
      }
    }
    v9 = v11;
  }
  if ( !v9 )
    goto LABEL_21;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v18 )
    goto LABEL_22;
  v21 = v18->fields._items;
  v22 = Method_System_Collections_Generic_List_BoostEntity__Add__;
  ++v18->fields._version;
  if ( !v21 )
    goto LABEL_22;
  v23 = v18->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      v9,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    v18->fields._size = v23 + 1;
    v24[4] = (Il2CppClass *)v9;
    sub_1C3E508((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v9, v19, v20);
  }
  System_Collections_Generic_List_object___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v5 = v18;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}