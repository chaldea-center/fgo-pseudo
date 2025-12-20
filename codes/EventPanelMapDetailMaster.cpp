void EventPanelMapDetailMaster___ctor(EventPanelMapDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C8C7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int___ctor__);
    byte_4D2C8C7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    348,
    (const MethodInfo_345919C *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int___ctor__);
}


EventPanelMapDetailEntity_array *EventPanelMapDetailMaster__GetListByMapId(
        EventPanelMapDetailMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4D2C8C8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventPanelMapDetailEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventPanelMapDetailEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPanelMapDetailEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventPanelMapDetailEntity__TypeInfo);
    byte_4D2C8C8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventPanelMapDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventPanelMapDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventPanelMapDetailEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventPanelMapDetailEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( HIDWORD(list->fields.items) == mapId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_EventPanelMapDetailEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C942F0(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventPanelMapDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v5,
                                              (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventPanelMapDetailEntity__ToArray__);
}