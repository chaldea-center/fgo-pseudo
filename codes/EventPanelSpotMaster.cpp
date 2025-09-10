void EventPanelSpotMaster___ctor(EventPanelSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2732C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__);
    byte_4C2732C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    349,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int___ctor__);
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
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C2732D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_4C2732D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__);
      if ( list )
      {
        v8 = list;
        if ( HIDWORD(list->fields.items) == eventId && LODWORD(list[1].klass) == mapId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v15 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v8;
            sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v8, v12, v13);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C2D6EC(list, v8);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}


EventPanelSpotEntity_array *EventPanelSpotMaster__GetEntityListFromEventId(
        EventPanelSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C2732E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_4C2732E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventPanelSpotEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( HIDWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v6;
            sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}