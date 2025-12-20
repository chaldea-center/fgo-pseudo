void EventExpeditionMaster___ctor(EventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C7F5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__);
    byte_4D2C7F5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    386,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_o *EventExpeditionMaster__GetEntity(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C7F6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__);
    byte_4D2C7F6 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_345FF78 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_array *EventExpeditionMaster__GetExpeditionEntityList(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *v15; // x24
  const MethodInfo *v16; // x4
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4D2C7F8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Item__);
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C7F8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppObject *)list;
        if ( LODWORD(list->fields.items) == eventId )
        {
          if ( !LODWORD(list[3].klass) )
            goto LABEL_24;
          list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                     (DataManager_o *)list,
                                                                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(
                                                                     (CommonReleaseMaster_o *)list,
                                                                     (int32_t)v15[4].monitor,
                                                                     0,
                                                                     0,
                                                                     v16);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_24:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v18 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v15,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v15;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v15, v9, v10, v11, v12, v13, v14);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C942F0(list, *(_QWORD *)&eventId);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_21;
  return (EventExpeditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventExpeditionMaster__IsBestMatchPiece(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t placeIdx,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x0
  int32_t v12; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4D2C7F9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Item__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_4D2C7F9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C942F0(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v12,
             (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].klass) == eventId && HIDWORD(Item[1].klass) == placeIdx )
        return System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Item[3].monitor,
                 pieceIdx,
                 (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
    }
    if ( Count == ++v12 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool EventExpeditionMaster__TryGetEntity(
        EventExpeditionMaster_o *this,
        EventExpeditionEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2C7F7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__);
    byte_4D2C7F7 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__);
}