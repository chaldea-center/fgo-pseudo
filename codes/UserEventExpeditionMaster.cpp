void __fastcall UserEventExpeditionMaster___ctor(UserEventExpeditionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA21B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA21B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    378,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ExpeditionInfo__o *__fastcall UserEventExpeditionMaster__GetCompleteExpeditionInfoList(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  int32_t v33; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v35; // x24
  __int64 v36; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x22
  int namespaze; // w8
  unsigned int v40; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x20
  int64_t v42; // x21
  System_String_o *RestTime; // x21
  __int64 v44; // x0

  if ( (byte_42EA220 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ExpeditionInfo__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ExpeditionInfo___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_ExpeditionInfo__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UserEventExpeditionEntity_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_13567/*"TIME_REST_TIMEOVER"*/, v27, v28, v29);
    byte_42EA220 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ExpeditionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ExpeditionInfo___ctor__);
  if ( Count >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v33,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v35 = Item;
        v36 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v36
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[v36 - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          list = NetworkManager__get_UserId(0LL);
          if ( (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)list == v35[1].klass
            && LODWORD(v35[1].monitor) == eventId )
          {
            break;
          }
        }
      }
      if ( ++v33 >= Count )
        return (System_Collections_Generic_List_ExpeditionInfo__o *)v32;
    }
    klass = v35[2].klass;
    if ( !klass )
LABEL_32:
      sub_B5D69C(list, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v40 = 0;
      while ( 1 )
      {
        if ( v40 >= namespaze )
        {
          v44 = sub_B5D6C8(list);
          sub_B5D668(v44, 0LL);
        }
        v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v40);
        if ( !v41 )
          goto LABEL_32;
        if ( v41->fields.missionConditionDetailId )
        {
          v42 = (unsigned int)v41->fields.eventId;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          RestTime = LocalizationManager__GetRestTime(v42, 0LL);
          list = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13567/*"TIME_REST_TIMEOVER"*/, 0LL);
          if ( !RestTime )
            goto LABEL_32;
          list = System_String__Equals_44565128(RestTime, (System_String_o *)list, 0LL);
          if ( (list & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_32;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              v41,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ExpeditionInfo__Add__);
          }
        }
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v40 >= namespaze )
          return (System_Collections_Generic_List_ExpeditionInfo__o *)v32;
      }
    }
  }
  return (System_Collections_Generic_List_ExpeditionInfo__o *)v32;
}


// local variable allocation has failed, the output may be wrong!
UserEventExpeditionEntity_o *__fastcall UserEventExpeditionMaster__GetEntity(
        UserEventExpeditionMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EA21C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__,
      userId,
      eventId,
      method);
    byte_42EA21C = 1;
  }
  PK = UserEventExpeditionEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventExpeditionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventExpeditionEntity__o *__fastcall UserEventExpeditionMaster__GetEntityList(
        UserEventExpeditionMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  UserEventExpeditionMaster___c_c *v21; // x0
  struct UserEventExpeditionMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x20
  Il2CppObject *v24; // x21
  struct UserEventExpeditionMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42EA21E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__UserEventExpeditionEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__, v14, v15, v16);
    sub_B5D5C4(&UserEventExpeditionMaster___c_TypeInfo, v17, v18, v19);
    byte_42EA21E = 1;
  }
  list = this->fields.list;
  v21 = UserEventExpeditionMaster___c_TypeInfo;
  if ( (BYTE3(UserEventExpeditionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventExpeditionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventExpeditionMaster___c_TypeInfo);
    v21 = UserEventExpeditionMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__UserEventExpeditionEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v24,
      Method_UserEventExpeditionMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__UserEventExpeditionEntity___ctor__);
    v25 = UserEventExpeditionMaster___c_TypeInfo->static_fields;
    v25->__9__3_0 = (struct System_Func_DataEntityBase__UserEventExpeditionEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventExpeditionEntity___);
  return (System_Collections_Generic_List_UserEventExpeditionEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                           v32,
                                                                           (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_UserEventExpeditionEntity___);
}


// local variable allocation has failed, the output may be wrong!
ExpeditionInfo_o *__fastcall UserEventExpeditionMaster__GetExpeditionInfo(
        UserEventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  ExpeditionInfo_o *result; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v21; // x24
  __int64 v22; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  int namespaze; // w9
  int v25; // w10
  __int64 v26; // x0

  if ( (byte_42EA21F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, idx, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UserEventExpeditionEntity_TypeInfo, v13, v14, v15);
    byte_42EA21F = 1;
  }
  result = (ExpeditionInfo_o *)this->fields.list;
  if ( !result )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      result = (ExpeditionInfo_o *)this->fields.list;
      if ( !result )
        goto LABEL_26;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
               v19,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        v22 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (UserEventExpeditionEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == UserEventExpeditionEntity_TypeInfo )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          result = (ExpeditionInfo_o *)NetworkManager__get_UserId(0LL);
          if ( result == (ExpeditionInfo_o *)v21[1].klass && LODWORD(v21[1].monitor) == eventId )
            break;
        }
      }
      if ( ++v19 >= v18 )
        return 0LL;
    }
    klass = v21[2].klass;
    if ( !klass )
LABEL_26:
      sub_B5D69C(result, *(_QWORD *)&eventId);
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)namespaze )
        {
          v26 = sub_B5D6C8(result);
          sub_B5D668(v26, 0LL);
        }
        result = (ExpeditionInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v25);
        if ( !result )
          break;
        if ( result->fields.expeditionIdx != idx )
        {
          ++v25;
          result = 0LL;
          if ( v25 < namespaze )
            continue;
        }
        return result;
      }
      goto LABEL_26;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventExpeditionMaster__TryGetEntity(
        UserEventExpeditionMaster_o *this,
        UserEventExpeditionEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EA21D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42EA21D = 1;
  }
  PK = UserEventExpeditionEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventExpeditionMaster__UserEventExpeditionEntity__string__TryGetEntity__);
}


void __fastcall UserEventExpeditionMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6FF2 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventExpeditionMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6FF2 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserEventExpeditionMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserEventExpeditionMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E6FF3 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventExpeditionEntity_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6FF3 = 1;
  }
  if ( !data )
    return 0LL;
  v5 = *(&UserEventExpeditionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (UserEventExpeditionEntity_c *)data->klass->_2.typeHierarchy[v5 - 1] == UserEventExpeditionEntity_TypeInfo )
    return (UserEventExpeditionEntity_o *)data;
  return 0LL;
}