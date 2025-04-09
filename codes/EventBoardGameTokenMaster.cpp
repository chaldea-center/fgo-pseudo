void __fastcall EventBoardGameTokenMaster___ctor(EventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAD10 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string___ctor__, method);
    byte_49BAD10 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    313,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameTokenEntity_array *__fastcall EventBoardGameTokenMaster__GetEntities(
        EventBoardGameTokenMaster_o *this,
        int32_t eventId,
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

  if ( (byte_49BAD11 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventBoardGameTokenEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventBoardGameTokenEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventBoardGameTokenEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventBoardGameTokenEntity__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventBoardGameTokenEntity___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_EventBoardGameTokenEntity__TypeInfo, v9);
    byte_49BAD11 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventBoardGameTokenEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventBoardGameTokenEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_EventBoardGameTokenEntity__Add__;
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
  return (EventBoardGameTokenEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v10,
                                              (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventBoardGameTokenEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameTokenEntity_o *__fastcall EventBoardGameTokenMaster__GetEntity(
        EventBoardGameTokenMaster_o *this,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BAD0E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49BAD0E = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenEntity__CreatePK(eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (EventBoardGameTokenEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31A2454 *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBoardGameTokenMaster__TryGetEntity(
        EventBoardGameTokenMaster_o *this,
        EventBoardGameTokenEntity_o **entity,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BAD0F & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__TryGetEntity__,
      entity);
    byte_49BAD0F = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenEntity__CreatePK(eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__TryGetEntity__);
}