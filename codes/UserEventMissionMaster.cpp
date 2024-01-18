void __fastcall UserEventMissionMaster___ctor(UserEventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B7F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__, method);
    byte_4188B7F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    140,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionEntity_o *__fastcall UserEventMissionMaster__GetEntity(
        UserEventMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188B7D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__, userId);
    byte_4188B7D = 1;
  }
  PK = UserEventMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionMaster__TryGetEntity(
        UserEventMissionMaster_o *this,
        UserEventMissionEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188B7E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__, entity);
    byte_4188B7E = 1;
  }
  PK = UserEventMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__);
}


int32_t __fastcall UserEventMissionMaster__getAchiveMissionNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return UserEventMissionMaster__getMissionProgressNum(this, eventId, 5, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventMissionMaster__getDailyMissionAchiveNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UserEventMissionEntity_array *UserEventMissionList; // x20
  int64_t Instance; // x0
  __int64 v9; // x1
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v11; // x24
  int64_t v12; // x22
  il2cpp_array_size_t v13; // w25
  int32_t v14; // w23
  UserEventMissionEntity_o *v15; // x26
  __int64 v16; // x0

  if ( (byte_4188B82 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4188B82 = 1;
  }
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(this, eventId, method);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !UserEventMissionList )
    goto LABEL_24;
  v11 = *(_QWORD *)&UserEventMissionList->max_length;
  if ( v11 && (int)v11 >= 1 )
  {
    if ( !(_DWORD)v11 )
    {
LABEL_21:
      v16 = sub_B2C460(Instance);
      sub_B2C400(v16, 0LL);
    }
    v12 = Instance;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = UserEventMissionList->m_Items[v13];
      if ( !v15 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(
                            MasterData_WarQuestSelectionMaster,
                            eventId,
                            v15->fields.missionId,
                            0LL);
      if ( v15->fields.missionProgressType == 5 )
      {
        if ( !Instance )
          break;
        if ( v12 >= *(_QWORD *)(Instance + 56) && v12 < *(_QWORD *)(Instance + 64) )
          ++v14;
      }
      if ( (int)++v13 >= (int)v11 )
        return v14;
      if ( v13 >= UserEventMissionList->max_length )
        goto LABEL_21;
    }
LABEL_24:
    sub_B2C434(Instance, v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventMissionEntity__o *__fastcall UserEventMissionMaster__getListFromMissionTargetId(
        UserEventMissionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x11
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_4188B83 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo, v10);
    sub_B2C35C(&UserEventMissionEntity_TypeInfo, v11);
    byte_4188B83 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( !v27
      || (v29 = *(&UserEventMissionEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29)
      || (UserEventMissionEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != UserEventMissionEntity_TypeInfo )
    {
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.eventId == missionTargetId )
    {
      if ( !v12 )
        sub_B2C434(v27, v28);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        v27,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_28:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_UserEventMissionEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventMissionMaster__getMissionProgressNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        int32_t progress_type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *UserEventMissionList; // x0
  const MethodInfo *v10; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v12; // x20
  __int64 v13; // x23
  int32_t v14; // w21
  UserEventMissionEntity_o *v15; // x22
  __int64 v17; // x0

  if ( (byte_4188B81 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4188B81 = 1;
  }
  UserEventMissionList = (DataManager_o *)UserEventMissionMaster__getUserEventMissionList(
                                            this,
                                            eventId,
                                            *(const MethodInfo **)&progress_type);
  if ( !UserEventMissionList )
    goto LABEL_20;
  datalist = UserEventMissionList->fields.datalist;
  v12 = UserEventMissionList;
  if ( datalist && (int)datalist >= 1 )
  {
    v13 = 0LL;
    v14 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= (unsigned int)datalist )
      {
        v17 = sub_B2C460(UserEventMissionList);
        sub_B2C400(v17, 0LL);
      }
      v15 = (UserEventMissionEntity_o *)*((_QWORD *)&v12->fields.lookup + v13);
      UserEventMissionList = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                UserEventMissionList,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !v15 )
        break;
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)UserEventMissionList,
                                                v15->fields.missionId,
                                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !UserEventMissionList )
        break;
      if ( LODWORD(UserEventMissionList->fields.datalist) != 3
        || (UserEventMissionList = (DataManager_o *)UserEventMissionEntity__IsTodayMissionData(v15, v10),
            ((unsigned __int8)UserEventMissionList & 1) != 0) )
      {
        if ( v15->fields.missionProgressType == progress_type )
          ++v14;
      }
      LODWORD(datalist) = v12->fields.datalist;
      if ( (int)++v13 >= (int)datalist )
        return v14;
    }
LABEL_20:
    sub_B2C434(UserEventMissionList, v10);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionEntity_array *__fastcall UserEventMissionMaster__getUserEventMissionList(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_4188B80 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo, v9);
    sub_B2C35C(&UserEventMissionEntity_TypeInfo, v10);
    byte_4188B80 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v16 = *(&UserEventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (UserEventMissionEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == UserEventMissionEntity_TypeInfo
          && HIDWORD(list->fields._syncRoot) == eventId )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, v12);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (UserEventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__);
}