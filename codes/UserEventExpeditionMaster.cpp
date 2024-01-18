void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B53 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__, method);
    byte_4188B53 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    377,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
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
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  int32_t v16; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v18; // x24
  __int64 v19; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x22
  int namespaze; // w8
  unsigned int v23; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x20
  int64_t v25; // x21
  System_String_o *RestTime; // x21
  __int64 v27; // x0

  if ( (byte_4188B58 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&UserEventExpeditionEntity_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_13411/*"TIME_REST_TIMEOVER"*/, v12);
    byte_4188B58 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v16,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        v19 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          list = NetworkManager__get_UserId(0LL);
          if ( (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)list == v18[1].klass
            && LODWORD(v18[1].monitor) == eventId )
          {
            break;
          }
        }
      }
      if ( ++v16 >= Count )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v15;
    }
    klass = v18[2].klass;
    if ( !klass )
LABEL_32:
      sub_B2C434(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= namespaze )
        {
          v27 = sub_B2C460(list);
          sub_B2C400(v27, 0LL);
        }
        v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v23);
        if ( !v24 )
          goto LABEL_32;
        if ( v24->fields.missionConditionDetailId )
        {
          v25 = (unsigned int)v24->fields.eventId;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          RestTime = LocalizationManager__GetRestTime(v25, 0LL);
          list = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TIME_REST_TIMEOVER"*/, 0LL);
          if ( !RestTime )
            goto LABEL_32;
          list = System_String__Equals_44292872(RestTime, (System_String_o *)list, 0LL);
          if ( (list & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_32;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              v24,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ExpeditionInfo__Add__);
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v23 >= namespaze )
          return (System_Collections_Generic_List_ExpeditionInfo__o *)v15;
      }
    }
  }
  return (System_Collections_Generic_List_ExpeditionInfo__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188B54 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__, userId);
    byte_4188B54 = 1;
  }
  PK = UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *__fastcall UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  UserEventExpeditionMaster___c_c *v9; // x0
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x20
  Il2CppObject *v12; // x21
  struct UserEventExpeditionMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4188B56 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___, v3);
    sub_B2C35C(&Method_System_Func_DataEntityBase__UserEventExpeditionEntity___ctor__, v4);
    sub_B2C35C(&System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo, v5);
    sub_B2C35C(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, v6);
    sub_B2C35C(&UserEventExpeditionMaster___c_TypeInfo, v7);
    byte_4188B56 = 1;
  }
  list = this->fields.list;
  v9 = UserEventExpeditionMaster___c_TypeInfo;
  if ( (BYTE3(UserEventExpeditionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventExpeditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventExpeditionMaster___c_TypeInfo);
    v9 = UserEventExpeditionMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v12,
      Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__UserEventExpeditionEntity___ctor__);
    v13 = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    v13->__9__3_0 = (struct System_Func_DataEntityBase__UserEventExpeditionEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                           v20,
                                                                           (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
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
  ExpeditionInfo_o *result; // x0
  int32_t Count; // w0
  int32_t v12; // w22
  int32_t v13; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v15; // x24
  __int64 v16; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  int v19; // w10
  __int64 v20; // x0

  if ( (byte_4188B57 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&UserEventExpeditionEntity_TypeInfo, v9);
    byte_4188B57 = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      result = (ExpeditionInfo_o *)this->fields.list;
      if ( !result )
        goto LABEL_26;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
               v13,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        v16 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          result = (ExpeditionInfo_o *)NetworkManager__get_UserId(0LL);
          if ( result == (ExpeditionInfo_o *)v15[1].klass && LODWORD(v15[1].monitor) == eventId )
            break;
        }
      }
      if ( ++v13 >= v12 )
        return 0LL;
    }
    klass = v15[2].klass;
    if ( !klass )
LABEL_26:
      sub_B2C434(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)namespaze )
        {
          v20 = sub_B2C460(result);
          sub_B2C400(v20, 0LL);
        }
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v19);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx != idx )
        {
          ++v19;
          result = 0LL;
          if ( v19 < namespaze )
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

  if ( (byte_4188B55 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__,
      entity);
    byte_4188B55 = 1;
  }
  PK = UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41856A0 & 1) == 0 )
  {
    sub_B2C35C(&UserEventExpeditionMaster___c_TypeInfo, v1);
    byte_41856A0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserEventExpeditionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserEventExpeditionMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41856A1 & 1) == 0 )
  {
    sub_B2C35C(&UserEventExpeditionEntity_TypeInfo, data);
    byte_41856A1 = 1;
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