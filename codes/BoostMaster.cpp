void BoostMaster___ctor(BoostMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C517 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
    byte_4D2C517 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    324,
    (const MethodInfo_345919C *)Method_DataMasterBase_BoostMaster__BoostEntity__int___ctor__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D2C515 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4D2C515 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
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
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
      if ( list )
      {
        v8 = (Il2CppObject *)list;
        list = (System_Collections_ObjectModel_Collection_T__o *)BoostEntity__IsValidPeriod((BoostEntity_o *)list, v4);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v16 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C942F0(list, v4);
  }
LABEL_15:
  if ( !v3 )
    goto LABEL_17;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v3,
                                (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4D2C516 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4D2C516 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_21:
    if ( v5 )
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_22:
    sub_1C942F0(list, v6);
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
                                                               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_BoostEntity__get_Item__);
    if ( list )
    {
      v9 = (Il2CppObject *)list;
      if ( LODWORD(list->fields.items) == RecommendedBoostId )
        continue;
      if ( !v5 )
        goto LABEL_22;
      items = v5->fields._items;
      v19 = Method_System_Collections_Generic_List_BoostEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_22;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v9;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
      }
    }
    v9 = v11;
  }
  if ( !v9 )
    goto LABEL_21;
  v22 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v22 )
    goto LABEL_22;
  v29 = v22->fields._items;
  v30 = Method_System_Collections_Generic_List_BoostEntity__Add__;
  ++v22->fields._version;
  if ( !v29 )
    goto LABEL_22;
  v31 = v22->fields._size;
  if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      v9,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v22->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v9;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v9, v23, v24, v25, v26, v27, v28);
  }
  System_Collections_Generic_List_object___AddRange(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v5 = v22;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}