void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1540 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
    byte_42B1540 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    378,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ExpeditionInfo__o *__fastcall UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  int32_t v8; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v10; // x24
  __int64 v11; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x22
  int namespaze; // w8
  unsigned int v15; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x20
  int64_t v17; // x21
  System_String_o *RestTime; // x21
  __int64 v19; // x0

  if ( (byte_42B1545 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UserEventExpeditionEntity_TypeInfo);
    sub_B52984(&StringLiteral_13508/*"TIME_REST_TIMEOVER"*/);
    byte_42B1545 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v8,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = Item;
        v11 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          list = NetworkManager__get_UserId(0LL);
          if ( (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)list == v10[1].klass
            && LODWORD(v10[1].monitor) == eventId )
          {
            break;
          }
        }
      }
      if ( ++v8 >= Count )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v7;
    }
    klass = v10[2].klass;
    if ( !klass )
LABEL_32:
      sub_B52A5C(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= namespaze )
        {
          v19 = sub_B52A88(list);
          sub_B52A28(v19, 0LL);
        }
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v15);
        if ( !v16 )
          goto LABEL_32;
        if ( v16->fields.missionConditionDetailId )
        {
          v17 = (unsigned int)v16->fields.eventId;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          RestTime = LocalizationManager__GetRestTime(v17, 0LL);
          list = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13508/*"TIME_REST_TIMEOVER"*/, 0LL);
          if ( !RestTime )
            goto LABEL_32;
          list = System_String__Equals_44555656(RestTime, (System_String_o *)list, 0LL);
          if ( (list & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_32;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              v16,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ExpeditionInfo__Add__);
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v15 >= namespaze )
          return (System_Collections_Generic_List_ExpeditionInfo__o *)v7;
      }
    }
  }
  return (System_Collections_Generic_List_ExpeditionInfo__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B1541 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
    byte_42B1541 = 1;
  }
  PK = UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *__fastcall UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
{
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  UserEventExpeditionMaster___c_c *v4; // x0
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct UserEventExpeditionMaster___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42B1543 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
    sub_B52984(&Method_System_Func_DataEntityBase__UserEventExpeditionEntity___ctor__);
    sub_B52984(&System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo);
    sub_B52984(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__);
    sub_B52984(&UserEventExpeditionMaster___c_TypeInfo);
    byte_42B1543 = 1;
  }
  list = this->fields.list;
  v4 = UserEventExpeditionMaster___c_TypeInfo;
  if ( (BYTE3(UserEventExpeditionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventExpeditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventExpeditionMaster___c_TypeInfo);
    v4 = UserEventExpeditionMaster___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v7,
      Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_DataEntityBase__UserEventExpeditionEntity___ctor__);
    v8 = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    v8->__9__3_0 = (struct System_Func_DataEntityBase__UserEventExpeditionEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                           v15,
                                                                           (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
}


// local variable allocation has failed, the output may be wrong!
ExpeditionInfo_o *__fastcall UserEventExpeditionMaster__GetExpeditionInfo(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  ExpeditionInfo_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v12; // x24
  __int64 v13; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  int v16; // w10
  __int64 v17; // x0

  if ( (byte_42B1544 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UserEventExpeditionEntity_TypeInfo);
    byte_42B1544 = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (ExpeditionInfo_o *)this->fields.list;
      if ( !result )
        goto LABEL_26;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        v13 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          result = (ExpeditionInfo_o *)NetworkManager__get_UserId(0LL);
          if ( result == (ExpeditionInfo_o *)v12[1].klass && LODWORD(v12[1].monitor) == eventId )
            break;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
    klass = v12[2].klass;
    if ( !klass )
LABEL_26:
      sub_B52A5C(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)namespaze )
        {
          v17 = sub_B52A88(result);
          sub_B52A28(v17, 0LL);
        }
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v16);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx != idx )
        {
          ++v16;
          result = 0LL;
          if ( v16 < namespaze )
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

  if ( (byte_42B1542 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
    byte_42B1542 = 1;
  }
  PK = UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE57F & 1) == 0 )
  {
    sub_B52984(&UserEventExpeditionMaster___c_TypeInfo);
    byte_42AE57F = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(UserEventExpeditionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AE580 & 1) == 0 )
  {
    sub_B52984(&UserEventExpeditionEntity_TypeInfo);
    byte_42AE580 = 1;
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