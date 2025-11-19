void SpotRoadMaster___ctor(SpotRoadMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6EF9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__);
    byte_4CB6EF9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    22,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int___ctor__);
}


SpotRoadEntity_array *SpotRoadMaster__getList(SpotRoadMaster_o *this, int32_t map_id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4CB6EFA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SpotRoadEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SpotRoadEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_SpotRoadEntity__TypeInfo);
    byte_4CB6EFA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SpotRoadEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SpotRoadEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_SpotRoadEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( HIDWORD(list->fields.items) == map_id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_SpotRoadEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v6;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C6BC60(list, v6);
  return (SpotRoadEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v5,
                                   (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_SpotRoadEntity__ToArray__);
}