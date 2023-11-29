void __fastcall UserEventRaceMaster___ctor(UserEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F966F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__, method);
    byte_40F966F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    212,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRaceEntity_o *__fastcall UserEventRaceMaster__GetEntity(
        UserEventRaceMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F966D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__, userId);
    byte_40F966D = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&termId);
  return (UserEventRaceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventRaceMaster__GetTotalMostProgressedGroupId(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t baseEventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_Dictionary_int__long__o *v19; // x23
  int32_t v20; // w27
  int64_t v21; // x19
  int32_t v22; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x28
  __int64 v26; // x10
  int32_t monitor; // w2
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x9
  const char *namespaze; // x9
  struct System_Int32_array *groupIds; // x21
  unsigned __int64 v34; // x24
  signed __int64 v35; // x25
  int32_t *v36; // x22
  int64_t v37; // x8
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v38; // x9
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-88h]
  int32_t Count; // [xsp+1Ch] [xbp-74h]
  int64_t UserId; // [xsp+20h] [xbp-70h]
  int64_t value; // [xsp+30h] [xbp-60h] BYREF
  EventRaceEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40F9670 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__long__Remove__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&UserEventRaceEntity_TypeInfo, v13);
    byte_40F9670 = 1;
  }
  value = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceMaster___);
  v19 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                v15,
                                                                v16,
                                                                v17,
                                                                v18);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v19,
    (const MethodInfo_2DE3B70 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = 0;
    v21 = 0LL;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_46;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v22,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_46;
      v25 = Item;
      v26 = *(&UserEventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v26
        || (UserEventRaceEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] != UserEventRaceEntity_TypeInfo )
      {
        goto LABEL_46;
      }
      if ( Item[1].klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)UserId )
      {
        monitor = (int32_t)Item[1].monitor;
        if ( monitor == eventId || monitor == baseEventId )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_46;
          v28 = EventRaceMaster__TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  monitor,
                  HIDWORD(Item[1].monitor),
                  0LL);
          if ( v28 )
          {
            if ( !entity )
              goto LABEL_46;
            klass = v25[2].klass;
            if ( !klass )
              goto LABEL_46;
            namespaze = klass->_1.namespaze;
            if ( (int)namespaze >= 1 )
              break;
          }
        }
      }
LABEL_42:
      if ( ++v22 >= Count )
        return v20;
    }
    groupIds = entity->fields.groupIds;
    if ( groupIds )
    {
      v34 = 0LL;
      v35 = (int)namespaze;
      v36 = &groupIds->m_Items[1];
      while ( 1 )
      {
        if ( v34 >= groupIds->max_length )
        {
LABEL_47:
          sub_B17100(v28, v29, v30);
          sub_B170A0();
        }
        if ( !v19 )
          break;
        v28 = System_Collections_Generic_Dictionary_int__long___TryGetValue(
                v19,
                v36[v34],
                &value,
                (const MethodInfo_2DE63E0 *)Method_System_Collections_Generic_Dictionary_int__long__TryGetValue__);
        if ( v28 )
        {
          if ( v34 >= groupIds->max_length )
            goto LABEL_47;
          v28 = System_Collections_Generic_Dictionary_int__long___Remove(
                  v19,
                  v36[v34],
                  (const MethodInfo_2DE6098 *)Method_System_Collections_Generic_Dictionary_int__long__Remove__);
          v37 = value;
        }
        else
        {
          v37 = 0LL;
          value = 0LL;
        }
        v38 = v25[2].klass;
        if ( !v38 )
          break;
        if ( v34 >= LODWORD(v38->_1.namespaze) )
          goto LABEL_47;
        v30 = *((_QWORD *)&v38->_1.byval_arg.data + v34) + v37;
        value = v30;
        if ( v34 >= groupIds->max_length )
          goto LABEL_47;
        System_Collections_Generic_Dictionary_int__long___Add(
          v19,
          v36[v34],
          v30,
          (const MethodInfo_2DE4724 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        if ( value == v21 )
        {
          if ( v34 >= groupIds->max_length )
            goto LABEL_47;
          if ( v36[v34] < v20 )
            v20 = v36[v34];
        }
        else if ( value > v21 )
        {
          if ( v34 >= groupIds->max_length )
            goto LABEL_47;
          v20 = v36[v34];
          v21 = value;
        }
        if ( (__int64)++v34 >= v35 )
          goto LABEL_42;
      }
    }
LABEL_46:
    sub_B170D4();
  }
  return 0;
}


int64_t __fastcall UserEventRaceMaster__GetTotalRacePointInTerm(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  System_Int64_array *UserRacePoints; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned __int64 max_length; // x9
  System_Int64_array *v8; // x8
  int64_t result; // x0
  unsigned __int64 v10; // x10
  int64_t *m_Items; // x8
  int64_t v12; // x12

  UserRacePoints = UserEventRaceMaster__GetUserRacePoints(this, eventId, term, method);
  if ( !UserRacePoints )
    sub_B170D4();
  max_length = UserRacePoints->max_length;
  v8 = UserRacePoints;
  if ( (__int64)(max_length << 32) < 1 )
    return 0LL;
  result = 0LL;
  v10 = 0LL;
  m_Items = v8->m_Items;
  do
  {
    if ( v10 >= max_length )
    {
      sub_B17100(result, v5, v6);
      sub_B170A0();
    }
    v12 = m_Items[v10++];
    result += v12;
  }
  while ( (__int64)v10 < (int)max_length );
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserEventRaceMaster__GetUserRacePoints(
        UserEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t UserId; // x0
  const MethodInfo *v11; // x5
  WebViewManager_o *Instance; // x0
  EventPointGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  unsigned int EventJoinGroupNum; // w0
  __int64 v16; // x2
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9671 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&long___TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F9671 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( UserEventRaceMaster__TryGetEntity(this, &entity, UserId, eventId, term, v11) )
  {
    if ( entity )
      return entity->fields.points;
LABEL_13:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  EventJoinGroupNum = EventPointGroupMaster__getEventJoinGroupNum(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  return (System_Int64_array *)sub_B17014(long___TypeInfo, EventJoinGroupNum, v16);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventRaceMaster__TryGetEntity(
        UserEventRaceMaster_o *this,
        UserEventRaceEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F966E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__, entity);
    byte_40F966E = 1;
  }
  PK = UserEventRaceEntity__CreatePK(userId, eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserEventRaceMaster__UserEventRaceEntity__string__TryGetEntity__);
}