void BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37681 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
    byte_4C37681 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    324,
    (const MethodInfo_3394514 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v5; // w21
  int32_t v6; // w22
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C3767F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4C3767F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v5 = (int)list;
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
      if ( list )
      {
        v8 = (Il2CppObject *)list;
        list = (System_Collections_ObjectModel_Collection_T__o *)BoostEntity__IsValidPeriod((BoostEntity_o *)list, v7);
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
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
          }
        }
      }
      if ( v5 == ++v6 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C32E7C(list);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


BoostEntity_array *BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w23
  Il2CppObject *v8; // x22
  int32_t i; // w24
  Il2CppObject *v10; // x29
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C37680 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4C37680 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_21:
    if ( v5 )
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_22:
    sub_1C32E7C(list);
  }
  v7 = (int)list;
  v8 = 0;
  for ( i = 0; i != v7; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    v10 = v8;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    if ( list )
    {
      v8 = (Il2CppObject *)list;
      if ( LODWORD(list->fields.items) == RecommendedBoostId )
        continue;
      if ( !v5 )
        goto LABEL_22;
      items = v5->fields._items;
      v14 = Method_System_Collections_Generic_List_BoostEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_22;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v8;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v8, v11, v12);
      }
    }
    v8 = v10;
  }
  if ( !v8 )
    goto LABEL_21;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v17 )
    goto LABEL_22;
  v20 = v17->fields._items;
  v21 = Method_System_Collections_Generic_List_BoostEntity__Add__;
  ++v17->fields._version;
  if ( !v20 )
    goto LABEL_22;
  v22 = v17->fields._size;
  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      v8,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v17->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v8;
    sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v8, v18, v19);
  }
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v5 = v17;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}