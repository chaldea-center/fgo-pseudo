void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAC6C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__, method);
    byte_40FAC6C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    283,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_array *__fastcall EventPointUpperMaster__GetEntitiesFromEventId(
        EventPointUpperMaster_o *this,
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
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_40FAC6D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventPointUpperEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v12);
    byte_40FAC6D = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPointUpperEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v16 )
    {
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v16,
                                                                      v15,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = *(&EventPointUpperEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventPointUpperEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == EventPointUpperEntity_TypeInfo )
        {
          if ( Item->fields.addCount == eventId )
          {
            if ( !v13 )
              goto LABEL_17;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              Item,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v15;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_o *__fastcall EventPointUpperMaster__GetEntity(
        EventPointUpperMaster_o *this,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FAC6A & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_40FAC6A = 1;
  }
  PK = EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointUpperMaster__TryGetEntity(
        EventPointUpperMaster_o *this,
        EventPointUpperEntity_o **entity,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FAC6B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__, entity);
    byte_40FAC6B = 1;
  }
  PK = EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_array *__fastcall EventPointUpperMaster__getList(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v19; // x10

  if ( (byte_40FAC6E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&EventPointUpperEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v13);
    byte_40FAC6E = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPointUpperEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v17 )
      goto LABEL_18;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v17,
                                                                    v16,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = *(&EventPointUpperEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (EventPointUpperEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == EventPointUpperEntity_TypeInfo
        && Item->fields.addCount == eventId
        && Item->fields.eventId == groupId )
      {
        if ( !v14 )
          goto LABEL_18;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v14 )
LABEL_18:
    sub_B170D4();
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventPointUpperMaster__getPointUpper(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t Value; // w19
  const MethodInfo *v10; // x3
  EventPointUpperEntity_array *List; // x0
  EventPointUpperEntity_array *v12; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  EventPointUpperReleaseMaster_o *v18; // x21
  unsigned __int64 v19; // x24
  EventPointUpperEntity_o *v20; // x23
  char v21; // w25
  EventPointUpperEntity_o *v22; // x22

  if ( (byte_40FAC6F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_8659, v8);
    byte_40FAC6F = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8659, 0LL);
  List = EventPointUpperMaster__getList(this, eventId, groupId, v10);
  if ( !List )
    goto LABEL_23;
  v12 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
      v17 = *(_QWORD *)&v12->max_length;
      if ( (int)v17 >= 1 )
      {
        v18 = (EventPointUpperReleaseMaster_o *)MasterData_WarQuestSelectionMaster;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 1;
        do
        {
          if ( v19 >= (unsigned int)v17 )
          {
            sub_B17100(MasterData_WarQuestSelectionMaster, v15, v16);
            sub_B170A0();
          }
          v22 = v12->m_Items[v19];
          if ( !v20 )
            goto LABEL_12;
          if ( !v22 )
            goto LABEL_23;
          if ( v20->fields.priority < v22->fields.priority )
          {
LABEL_12:
            if ( !v18 )
              goto LABEL_23;
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)EventPointUpperReleaseMaster__IsOpen(
                                                                                v18,
                                                                                v12->m_Items[v19],
                                                                                v16);
            LODWORD(v17) = v12->max_length;
            if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
              v20 = v22;
            v21 &= (unsigned __int8)MasterData_WarQuestSelectionMaster;
          }
          ++v19;
        }
        while ( (__int64)v19 < (int)v17 );
        if ( v20 )
        {
          if ( (v21 & 1) == 0 )
            return v20->fields.value;
        }
        else if ( (v21 & 1) == 0 )
        {
          return Value;
        }
      }
      return 0;
    }
LABEL_23:
    sub_B170D4();
  }
  return Value;
}