void __fastcall EventPointGroupMaster___ctor(EventPointGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAC28 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__, method);
    byte_40FAC28 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    150,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *__fastcall EventPointGroupMaster__GetEntity(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FAC26 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40FAC26 = 1;
  }
  PK = EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&groupId);
  return (EventPointGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventPointGroupMaster__GetTermedIconIds(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x4
  __int64 v15; // x8
  System_Int32_array *v16; // x23
  unsigned __int64 v17; // x24
  int32_t iconId; // w8
  WebViewManager_o *Instance; // x0
  EventPointGroupAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v21; // x5
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FAC2B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FAC2B = 1;
  }
  entity = 0LL;
  if ( !groupIds )
    goto LABEL_20;
  v11 = sub_B17014(int___TypeInfo, groupIds->max_length, *(_QWORD *)&termId);
  v15 = *(_QWORD *)&groupIds->max_length;
  v16 = (System_Int32_array *)v11;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( v17 < (unsigned int)v15 )
    {
      v11 = EventPointGroupMaster__TryGetEntity(this, &entity, eventId, groupIds->m_Items[v17 + 1], v14);
      if ( (v11 & 1) != 0 )
      {
        if ( !entity || !v16 )
          goto LABEL_20;
        if ( v17 >= v16->max_length )
          break;
        iconId = entity->fields.iconId;
      }
      else
      {
        if ( !v16 )
          goto LABEL_20;
        if ( v17 >= v16->max_length )
          break;
        iconId = 0;
      }
      v16->m_Items[v17 + 1] = iconId;
      LODWORD(v15) = groupIds->max_length;
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_16;
    }
    sub_B17100(v11, v12, v13);
    sub_B170A0();
  }
LABEL_16:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventPointGroupAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___)) == 0LL )
  {
LABEL_20:
    sub_B170D4();
  }
  return EventPointGroupAddMaster__GetTermedIconIds(
           MasterData_WarQuestSelectionMaster,
           eventId,
           termId,
           groupIds,
           v16,
           v21);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupMaster__TryGetEntity(
        EventPointGroupMaster_o *this,
        EventPointGroupEntity_o **entity,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FAC27 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__, entity);
    byte_40FAC27 = 1;
  }
  PK = EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *__fastcall EventPointGroupMaster__getEntity(
        EventPointGroupMaster_o *this,
        int32_t event_id,
        int32_t group_id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FAC29 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_getEntityFromKey_EventPointGroupEntity___, *(_QWORD *)&event_id);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1223, v8);
    byte_40FAC29 = 1;
  }
  v14 = event_id;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = group_id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11 = System_String__Concat_43823436(v9, (Il2CppObject *)StringLiteral_1223, v10, 0LL);
  return (EventPointGroupEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                      (DataMasterBase_o *)this,
                                      v11,
                                      (const MethodInfo_18C3A2C *)Method_DataMasterBase_getEntityFromKey_EventPointGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_array *__fastcall EventPointGroupMaster__getEntityList(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FAC2A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventPointGroupEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointGroupEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventPointGroupEntity__TypeInfo, v12);
    byte_40FAC2A = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPointGroupEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v18,
                                                                      v17,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v20 = *(&EventPointGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventPointGroupEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] != EventPointGroupEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == eventId )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointGroupEntity__Add__);
      }
      if ( ++v17 >= v16 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (EventPointGroupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
}


int32_t __fastcall EventPointGroupMaster__getEventJoinGroupNum(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventPointGroupEntity_array *EntityList; // x0

  EntityList = EventPointGroupMaster__getEntityList(this, eventId, method);
  if ( !EntityList )
    sub_B170D4();
  return EntityList->max_length;
}