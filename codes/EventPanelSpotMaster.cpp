void EventPanelSpotMaster___ctor(EventPanelSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE6EF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__);
    byte_4CEE6EF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    349,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__);
}


EventPanelSpotEntity_array *EventPanelSpotMaster__GetEntityList(
        EventPanelSpotMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v10; // w23
  int32_t v11; // w24
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

  if ( (byte_4CEE6F0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_4CEE6F0 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__);
      if ( list )
      {
        v8 = list;
        if ( HIDWORD(list->fields.items) == eventId && LODWORD(list[1].klass) == mapId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v19 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v8;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v8, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C7BD40(list, v8);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}