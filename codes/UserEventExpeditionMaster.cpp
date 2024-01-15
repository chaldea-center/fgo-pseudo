void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB75 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__, method);
    byte_40FAB75 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    377,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ExpeditionInfo__o *__fastcall UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
        UserEventExpeditionMaster_o *this,
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
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  int32_t v20; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v23; // x24
  __int64 v24; // x10
  int64_t UserId; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x22
  int namespaze; // w8
  unsigned int v31; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x20
  int64_t v33; // x21
  System_String_o *RestTime; // x21
  System_String_o *v35; // x0

  if ( (byte_40FAB7A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&UserEventExpeditionEntity_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_13355/*"TIME_REST_TIMEOVER"*/, v12);
    byte_40FAB7A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ExpeditionInfo__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v21 )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v21,
               v20,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = Item;
        v24 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)UserId == v23[1].klass
            && LODWORD(v23[1].monitor) == eventId )
          {
            break;
          }
        }
      }
      if ( ++v20 >= Count )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v19;
    }
    klass = v23[2].klass;
    if ( !klass )
LABEL_32:
      sub_B170D4();
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v31 = 0;
      while ( 1 )
      {
        if ( v31 >= namespaze )
        {
          sub_B17100(UserId, v26, v27);
          sub_B170A0();
        }
        v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v31);
        if ( !v32 )
          goto LABEL_32;
        if ( v32->fields.missionConditionDetailId )
        {
          v33 = (unsigned int)v32->fields.eventId;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          RestTime = LocalizationManager__GetRestTime(v33, 0LL);
          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13355/*"TIME_REST_TIMEOVER"*/, 0LL);
          if ( !RestTime )
            goto LABEL_32;
          UserId = System_String__Equals_43731072(RestTime, v35, 0LL);
          if ( (UserId & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_32;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v19,
              v32,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ExpeditionInfo__Add__);
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v31 >= namespaze )
          return (System_Collections_Generic_List_ExpeditionInfo__o *)v19;
      }
    }
  }
  return (System_Collections_Generic_List_ExpeditionInfo__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FAB76 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__, userId);
    byte_40FAB76 = 1;
  }
  PK = UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *__fastcall UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  UserEventExpeditionMaster___c_c *v12; // x0
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x20
  Il2CppObject *v15; // x21
  struct UserEventExpeditionMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40FAB78 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___, v6);
    sub_B16FFC(&Method_System_Func_DataEntityBase__UserEventExpeditionEntity___ctor__, v7);
    sub_B16FFC(&System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo, v8);
    sub_B16FFC(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, v9);
    sub_B16FFC(&UserEventExpeditionMaster___c_TypeInfo, v10);
    byte_40FAB78 = 1;
  }
  list = this->fields.list;
  v12 = UserEventExpeditionMaster___c_TypeInfo;
  if ( (BYTE3(UserEventExpeditionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventExpeditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventExpeditionMaster___c_TypeInfo);
    v12 = UserEventExpeditionMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo,
                                                                                                method,
                                                                                                v2,
                                                                                                v3,
                                                                                                v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v15,
      Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__UserEventExpeditionEntity___ctor__);
    v16 = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    v16->__9__3_0 = (struct System_Func_DataEntityBase__UserEventExpeditionEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                           v23,
                                                                           (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
}


// local variable allocation has failed, the output may be wrong!
ExpeditionInfo_o *__fastcall UserEventExpeditionMaster__GetExpeditionInfo(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w22
  int32_t v13; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x24
  __int64 v17; // x10
  ExpeditionInfo_o *result; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  int v23; // w10

  if ( (byte_40FAB79 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&UserEventExpeditionEntity_TypeInfo, v9);
    byte_40FAB79 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      v14 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v14 )
        goto LABEL_26;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v14,
               v13,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = Item;
        v17 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          result = (ExpeditionInfo_o *)NetworkManager__get_UserId(0LL);
          if ( result == (ExpeditionInfo_o *)v16[1].klass && LODWORD(v16[1].monitor) == eventId )
            break;
        }
      }
      if ( ++v13 >= v12 )
        return 0LL;
    }
    klass = v16[2].klass;
    if ( !klass )
LABEL_26:
      sub_B170D4();
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)namespaze )
        {
          sub_B17100(result, v19, v20);
          sub_B170A0();
        }
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v23);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx != idx )
        {
          ++v23;
          result = 0LL;
          if ( v23 < namespaze )
            continue;
        }
        return result;
      }
      goto LABEL_26;
    }
  }
  return 0LL;
}


bool __fastcall UserEventExpeditionMaster__TryGetEntity(
        UserEventExpeditionMaster_o *this,
        UserEventExpeditionEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FAB77 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__,
      entity);
    byte_40FAB77 = 1;
  }
  PK = UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7978 & 1) == 0 )
  {
    sub_B16FFC(&UserEventExpeditionMaster___c_TypeInfo, v1);
    byte_40F7978 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserEventExpeditionMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall UserEventExpeditionMaster___c___ctor(UserEventExpeditionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster___c___GetEntityList_b__3_0(
        UserEventExpeditionMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F7979 & 1) == 0 )
  {
    sub_B16FFC(&UserEventExpeditionEntity_TypeInfo, data);
    byte_40F7979 = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserEventExpeditionEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == UserEventExpeditionEntity_TypeInfo )
    return (UserEventExpeditionEntity_o *)data;
  return 0LL;
}