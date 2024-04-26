void __fastcall UserEventMissionMaster___ctor(UserEventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4350661 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__);
    byte_4350661 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    141,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionEntity_o *__fastcall UserEventMissionMaster__GetEntity(
        UserEventMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_435065F & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__);
    byte_435065F = 1;
  }
  PK = UserEventMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_21C0890 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionMaster__TryGetEntity(
        UserEventMissionMaster_o *this,
        UserEventMissionEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4350660 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__);
    byte_4350660 = 1;
  }
  PK = UserEventMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__);
}


int32_t __fastcall UserEventMissionMaster__getAchiveMissionNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return UserEventMissionMaster__getMissionProgressNum(this, eventId, 5, v3);
}


int32_t __fastcall UserEventMissionMaster__getDailyMissionAchiveNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UserEventMissionEntity_array *UserEventMissionList; // x20
  int64_t Instance; // x0
  __int64 v7; // x1
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v9; // x24
  int64_t v10; // x22
  il2cpp_array_size_t v11; // w25
  int32_t v12; // w23
  UserEventMissionEntity_o *v13; // x26
  __int64 v14; // x0

  if ( (byte_4350664 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350664 = 1;
  }
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(this, eventId, method);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !UserEventMissionList )
    goto LABEL_24;
  v9 = *(_QWORD *)&UserEventMissionList->max_length;
  if ( v9 && (int)v9 >= 1 )
  {
    if ( !(_DWORD)v9 )
    {
LABEL_21:
      v14 = sub_B70798(Instance);
      sub_B70738(v14, 0LL);
    }
    v10 = Instance;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = UserEventMissionList->m_Items[v11];
      if ( !v13 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(
                            MasterData_WarQuestSelectionMaster,
                            eventId,
                            v13->fields.missionId,
                            0LL);
      if ( v13->fields.missionProgressType == 5 )
      {
        if ( !Instance )
          break;
        if ( v10 >= *(_QWORD *)(Instance + 56) && v10 < *(_QWORD *)(Instance + 64) )
          ++v12;
      }
      if ( (int)++v11 >= (int)v9 )
        return v12;
      if ( v11 >= UserEventMissionList->max_length )
        goto LABEL_21;
    }
LABEL_24:
    sub_B7076C(Instance, v7);
  }
  return 0;
}


System_Collections_Generic_List_UserEventMissionEntity__o *__fastcall UserEventMissionMaster__getListFromMissionTargetId(
        UserEventMissionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x11
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_4350665 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
    sub_B70694(&UserEventMissionEntity_TypeInfo);
    byte_4350665 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v17 + 8));
    if ( !v18
      || (v20 = *(&UserEventMissionEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20)
      || (UserEventMissionEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != UserEventMissionEntity_TypeInfo )
    {
      sub_B7076C(v18, v19);
    }
    if ( v18->fields.eventId == missionTargetId )
    {
      if ( !v5 )
        sub_B7076C(v18, v19);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v18,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return (System_Collections_Generic_List_UserEventMissionEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventMissionMaster__getMissionProgressNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        int32_t progress_type,
        const MethodInfo *method)
{
  DataManager_o *UserEventMissionList; // x0
  const MethodInfo *v8; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v10; // x20
  __int64 v11; // x23
  int32_t v12; // w21
  UserEventMissionEntity_o *v13; // x22
  __int64 v15; // x0

  if ( (byte_4350663 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350663 = 1;
  }
  UserEventMissionList = (DataManager_o *)UserEventMissionMaster__getUserEventMissionList(
                                            this,
                                            eventId,
                                            *(const MethodInfo **)&progress_type);
  if ( !UserEventMissionList )
    goto LABEL_20;
  datalist = UserEventMissionList->fields.datalist;
  v10 = UserEventMissionList;
  if ( datalist && (int)datalist >= 1 )
  {
    v11 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= (unsigned int)datalist )
      {
        v15 = sub_B70798(UserEventMissionList);
        sub_B70738(v15, 0LL);
      }
      v13 = (UserEventMissionEntity_o *)*((_QWORD *)&v10->fields.lookup + v11);
      UserEventMissionList = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                UserEventMissionList,
                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !v13 )
        break;
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)UserEventMissionList,
                                                v13->fields.missionId,
                                                (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !UserEventMissionList )
        break;
      if ( LODWORD(UserEventMissionList->fields.datalist) != 3
        || (UserEventMissionList = (DataManager_o *)UserEventMissionEntity__IsTodayMissionData(v13, v8),
            ((unsigned __int8)UserEventMissionList & 1) != 0) )
      {
        if ( v13->fields.missionProgressType == progress_type )
          ++v12;
      }
      LODWORD(datalist) = v10->fields.datalist;
      if ( (int)++v11 >= (int)datalist )
        return v12;
    }
LABEL_20:
    sub_B7076C(UserEventMissionList, v8);
  }
  return 0;
}


UserEventMissionEntity_array *__fastcall UserEventMissionMaster__getUserEventMissionList(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_4350662 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
    sub_B70694(&UserEventMissionEntity_TypeInfo);
    byte_4350662 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v10 = *(&UserEventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (UserEventMissionEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == UserEventMissionEntity_TypeInfo
          && HIDWORD(list->fields._syncRoot) == eventId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7076C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (UserEventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                           (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__);
}