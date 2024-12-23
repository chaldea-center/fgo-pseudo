void __fastcall EventBoardGameTokenMaster___ctor(EventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66A6A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string___ctor__, method);
    byte_4B66A6A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    311,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string___ctor__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int32_t v14; // w22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B66A6B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventBoardGameTokenEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBoardGameTokenEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBoardGameTokenEntity__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBoardGameTokenEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_EventBoardGameTokenEntity__TypeInfo, v10);
    byte_4B66A6B = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventBoardGameTokenEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v14,
                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(EventBoardGameTokenEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(EventBoardGameTokenEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventBoardGameTokenEntity_TypeInfo
        && *(_DWORD *)(list + 16) == eventId )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_EventBoardGameTokenEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), v12, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1BE4D28(list, v12);
  return (EventBoardGameTokenEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v11,
                                              (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventBoardGameTokenEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameTokenEntity_o *__fastcall EventBoardGameTokenMaster__GetEntity(
        EventBoardGameTokenMaster_o *this,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66A68 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B66A68 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenEntity__CreatePK(eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (EventBoardGameTokenEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__GetEntity__);
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

  if ( (byte_4B66A69 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__TryGetEntity__,
      entity);
    byte_4B66A69 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenEntity__CreatePK(eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__TryGetEntity__);
}