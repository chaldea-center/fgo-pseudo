void __fastcall EventExpeditionMaster___ctor(EventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4656 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__, method);
    byte_4BB4656 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    384,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_o *__fastcall EventExpeditionMaster__GetEntity(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4657 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BB4657 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_323D0DC *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_array *__fastcall EventExpeditionMaster__GetExpeditionEntityList(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v14; // x22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x24
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4BB4659 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Item__, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BB4659 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Item__);
      if ( list )
      {
        v22 = list;
        if ( *(_DWORD *)(list + 16) == eventId )
        {
          if ( !*(_DWORD *)(list + 72) )
            goto LABEL_24;
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            break;
          list = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !list )
            break;
          list = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)list, *(_DWORD *)(v22 + 72), 0LL, 0, 0LL);
          if ( (list & 1) != 0 )
          {
LABEL_24:
            if ( !v14 )
              break;
            items = v14->fields._items;
            v24 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v22,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v22;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 4), v22, v16, v17, v18, v19, v20, v21);
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C13F80(list, *(_QWORD *)&eventId);
  }
LABEL_19:
  if ( !v14 )
    goto LABEL_21;
  return (EventExpeditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v14,
                                          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionMaster__IsBestMatchPiece(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t placeIdx,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v15; // x0
  int32_t v16; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4BB465A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Item__, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v11);
    sub_1C13D24(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v12);
    byte_4BB465A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C13F80(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v16,
             (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventExpeditionEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].klass) == eventId && HIDWORD(Item[1].klass) == placeIdx )
        return System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Item[3].monitor,
                 pieceIdx,
                 (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
    }
    if ( Count == ++v16 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionMaster__TryGetEntity(
        EventExpeditionMaster_o *this,
        EventExpeditionEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB4658 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__, entity);
    byte_4BB4658 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__);
}