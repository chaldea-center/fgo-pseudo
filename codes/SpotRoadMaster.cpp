void __fastcall SpotRoadMaster___ctor(SpotRoadMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB9C3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__, method);
    byte_49BB9C3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    22,
    (const MethodInfo_319B678 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotRoadEntity_array *__fastcall SpotRoadMaster__getList(
        SpotRoadMaster_o *this,
        int32_t map_id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_49BB9C4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Count__, *(_QWORD *)&map_id);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SpotRoadEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SpotRoadEntity___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_SpotRoadEntity__TypeInfo, v9);
    byte_49BB9C4 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SpotRoadEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SpotRoadEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( HIDWORD(list->fields.items) == map_id )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_SpotRoadEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1B4D1EC(list, v11);
  return (SpotRoadEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v10,
                                   (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__);
}