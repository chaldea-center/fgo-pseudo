void __fastcall UserEventCooltimeRewardMaster___ctor(UserEventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B2A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__,
      method);
    byte_4188B2A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    422,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  UserEventCooltimeRewardEntity_o *v12; // x23
  int32_t v13; // w24
  UserEventCooltimeRewardEntity_o *v14; // x25
  __int64 v15; // x10
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0

  if ( (byte_4188B2E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&UserEventCooltimeRewardEntity_TypeInfo, v8);
    byte_4188B2E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = (UserEventCooltimeRewardEntity_o *)list;
      v15 = *(&UserEventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != UserEventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields._syncRoot) == eventId && HIDWORD(list->fields._syncRoot) == spotId )
      {
        EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                      (UserEventCooltimeRewardEntity_o *)list,
                                      *(const MethodInfo **)&eventId);
        if ( EventCooltimeRewardEntity )
        {
          if ( EventCooltimeRewardEntity__IsOpen(EventCooltimeRewardEntity, 0LL) )
          {
            if ( v12 )
            {
              if ( v12->fields.lv < v14->fields.lv )
                v12 = v14;
            }
            else
            {
              v12 = v14;
            }
          }
        }
      }
      if ( ++v13 >= v11 )
        return v12;
    }
LABEL_23:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetEntity(
        UserEventCooltimeRewardMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188B2B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__,
      userId);
    byte_4188B2B = 1;
  }
  PK = UserEventCooltimeRewardEntity__CreatePK(userId, eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (UserEventCooltimeRewardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_4188B2D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo, v8);
    sub_B2C35C(&UserEventCooltimeRewardEntity_TypeInfo, v9);
    byte_4188B2D = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
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
      if ( !list )
        break;
      v11 = list;
      v16 = *(&UserEventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != UserEventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields._syncRoot) == eventId )
      {
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
      }
      if ( ++v15 >= v14 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v10;
    }
LABEL_15:
    sub_B2C434(list, v11);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_4188B2F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo, v10);
    sub_B2C35C(&UserEventCooltimeRewardEntity_TypeInfo, v11);
    byte_4188B2F = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        v18 = *(&UserEventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == UserEventCooltimeRewardEntity_TypeInfo
          && LODWORD(list->fields._syncRoot) == eventId
          && HIDWORD(list->fields._syncRoot) == spotId )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v12;
    }
LABEL_16:
    sub_B2C434(list, v13);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetMaxLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventIdAndSpotId; // x0
  __int64 v14; // x1
  int size; // w8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v16; // x19
  UserEventCooltimeRewardMaster___c_c *v17; // x0
  struct UserEventCooltimeRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x20
  Il2CppObject *v20; // x21
  struct UserEventCooltimeRewardMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4188B30 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_UserEventCooltimeRewardEntity___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_UserEventCooltimeRewardEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Item__, v10);
    sub_B2C35C(&Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__, v11);
    sub_B2C35C(&UserEventCooltimeRewardMaster___c_TypeInfo, v12);
    byte_4188B30 = 1;
  }
  EntityListByEventIdAndSpotId = UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
                                   this,
                                   eventId,
                                   spotId,
                                   method);
  if ( !EntityListByEventIdAndSpotId )
    sub_B2C434(0LL, v14);
  size = EntityListByEventIdAndSpotId->fields._size;
  v16 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityListByEventIdAndSpotId;
  if ( size < 1 )
    return 0LL;
  if ( size != 1 )
  {
    v17 = UserEventCooltimeRewardMaster___c_TypeInfo;
    if ( (BYTE3(UserEventCooltimeRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEventCooltimeRewardMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventCooltimeRewardMaster___c_TypeInfo);
      v17 = UserEventCooltimeRewardMaster___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserEventCooltimeRewardEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v20,
        Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserEventCooltimeRewardEntity___ctor__);
      v21 = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
      v21->__9__6_0 = (struct System_Comparison_UserEventCooltimeRewardEntity__o *)_9__6_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v21->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v16,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__);
    if ( !v16->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  }
  return (UserEventCooltimeRewardEntity_o *)v16->fields._items->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventCooltimeRewardMaster__TryGetEntity(
        UserEventCooltimeRewardMaster_o *this,
        UserEventCooltimeRewardEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188B2C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__,
      entity);
    byte_4188B2C = 1;
  }
  PK = UserEventCooltimeRewardEntity__CreatePK(userId, eventId, spotId, lv, *(const MethodInfo **)&spotId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__);
}


void __fastcall UserEventCooltimeRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserEventCooltimeRewardMaster___c_StaticFields *static_fields; // x0

  if ( (byte_418569F & 1) == 0 )
  {
    sub_B2C35C(&UserEventCooltimeRewardMaster___c_TypeInfo, v1);
    byte_418569F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserEventCooltimeRewardMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserEventCooltimeRewardMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall UserEventCooltimeRewardMaster___c___ctor(
        UserEventCooltimeRewardMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserEventCooltimeRewardMaster___c___GetMaxLevelEntity_b__6_0(
        UserEventCooltimeRewardMaster___c_o *this,
        UserEventCooltimeRewardEntity_o *a,
        UserEventCooltimeRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.lv - a->fields.lv;
}