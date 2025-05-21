void __fastcall BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44747 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__, method);
    byte_4B44747 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    324,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
}


BoostEntity_array *__fastcall BoostMaster__GetAvailableEntities(BoostMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v11; // w21
  int32_t v12; // w22
  Il2CppObject *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B44745 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoostEntity__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BoostEntity__TypeInfo, v7);
    byte_4B44745 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = (int)list;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
      if ( list )
      {
        v13 = (Il2CppObject *)list;
        list = (System_Collections_ObjectModel_Collection_T__o *)BoostEntity__IsValidPeriod((BoostEntity_o *)list, v9);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v8 )
            break;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              v13,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v13;
            sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BDBAD4(list, v9);
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_17;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v8,
                                (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoostEntity_array *__fastcall BoostMaster__GetBoostListRecommendFirst(
        BoostMaster_o *this,
        int32_t RecommendedBoostId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w23
  Il2CppObject *v15; // x22
  int32_t i; // w24
  Il2CppObject *v17; // x29
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B44746 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__,
      *(_QWORD *)&RecommendedBoostId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoostEntity__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_BoostEntity__TypeInfo, v10);
    byte_4B44746 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_21:
    if ( v11 )
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_22:
    sub_1BDBAD4(list, v12);
  }
  v14 = (int)list;
  v15 = 0LL;
  for ( i = 0; i != v14; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    v17 = v15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               i,
                                                               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    if ( list )
    {
      v15 = (Il2CppObject *)list;
      if ( LODWORD(list->fields.items) == RecommendedBoostId )
        continue;
      if ( !v11 )
        goto LABEL_22;
      items = v11->fields._items;
      v21 = Method_System_Collections_Generic_List_BoostEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_22;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)list,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v15;
        sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v15, v18, v19);
      }
    }
    v15 = v17;
  }
  if ( !v15 )
    goto LABEL_21;
  v24 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v24 )
    goto LABEL_22;
  v27 = v24->fields._items;
  v28 = Method_System_Collections_Generic_List_BoostEntity__Add__;
  ++v24->fields._version;
  if ( !v27 )
    goto LABEL_22;
  v29 = v24->fields._size;
  if ( (unsigned int)v29 >= v27->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v15,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &v27->obj.klass + v29;
    v24->fields._size = v29 + 1;
    v30[4] = (Il2CppClass *)v15;
    sub_1BDB81C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v15, v25, v26);
  }
  System_Collections_Generic_List_object___AddRange(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)v11,
    (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v11 = v24;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}