void __fastcall EventPanelMapDetailMaster___ctor(EventPanelMapDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAEBB & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int___ctor__, method);
    byte_49BAEBB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    348,
    (const MethodInfo_319B678 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPanelMapDetailEntity_array *__fastcall EventPanelMapDetailMaster__GetListByMapId(
        EventPanelMapDetailMaster_o *this,
        int32_t mapId,
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
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49BAEBC & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventPanelMapDetailEntity__get_Count__,
      *(_QWORD *)&mapId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventPanelMapDetailEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_EventPanelMapDetailEntity__TypeInfo, v9);
    byte_49BAEBC = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventPanelMapDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventPanelMapDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventPanelMapDetailEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventPanelMapDetailEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( HIDWORD(list->fields.items) == mapId )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_EventPanelMapDetailEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B4D1EC(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventPanelMapDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v10,
                                              (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventPanelMapDetailEntity__ToArray__);
}