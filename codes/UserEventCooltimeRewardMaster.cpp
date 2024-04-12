void __fastcall UserEventCooltimeRewardMaster___ctor(UserEventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1517 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__);
    byte_42B1517 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    423,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  UserEventCooltimeRewardEntity_o *v10; // x23
  int32_t v11; // w24
  UserEventCooltimeRewardEntity_o *v12; // x25
  __int64 v13; // x10
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0

  if ( (byte_42B151B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&UserEventCooltimeRewardEntity_TypeInfo);
    byte_42B151B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = (UserEventCooltimeRewardEntity_o *)list;
      v13 = *(&UserEventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != UserEventCooltimeRewardEntity_TypeInfo )
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
            if ( v10 )
            {
              if ( v10->fields.lv < v12->fields.lv )
                v10 = v12;
            }
            else
            {
              v10 = v12;
            }
          }
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_23:
    sub_B52A5C(list, *(_QWORD *)&eventId);
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

  if ( (byte_42B1518 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__);
    byte_42B1518 = 1;
  }
  PK = UserEventCooltimeRewardEntity__CreatePK(userId, eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (UserEventCooltimeRewardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_42B151A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
    sub_B52984(&UserEventCooltimeRewardEntity_TypeInfo);
    byte_42B151A = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v10,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v11 = *(&UserEventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != UserEventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields._syncRoot) == eventId )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
      }
      if ( ++v10 >= v9 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v5;
    }
LABEL_15:
    sub_B52A5C(list, v6);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v5;
}


System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10

  if ( (byte_42B151C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
    sub_B52984(&UserEventCooltimeRewardEntity_TypeInfo);
    byte_42B151C = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v13 = *(&UserEventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == UserEventCooltimeRewardEntity_TypeInfo
          && LODWORD(list->fields._syncRoot) == eventId
          && HIDWORD(list->fields._syncRoot) == spotId )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
        }
      }
      if ( ++v12 >= v11 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v7;
    }
LABEL_16:
    sub_B52A5C(list, v8);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v7;
}


UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetMaxLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventIdAndSpotId; // x0
  __int64 v8; // x1
  int size; // w8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v10; // x19
  UserEventCooltimeRewardMaster___c_c *v11; // x0
  struct UserEventCooltimeRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x20
  Il2CppObject *v14; // x21
  struct UserEventCooltimeRewardMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42B151D & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_UserEventCooltimeRewardEntity___ctor__);
    sub_B52984(&System_Comparison_UserEventCooltimeRewardEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Item__);
    sub_B52984(&Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__);
    sub_B52984(&UserEventCooltimeRewardMaster___c_TypeInfo);
    byte_42B151D = 1;
  }
  EntityListByEventIdAndSpotId = UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
                                   this,
                                   eventId,
                                   spotId,
                                   method);
  if ( !EntityListByEventIdAndSpotId )
    sub_B52A5C(0LL, v8);
  size = EntityListByEventIdAndSpotId->fields._size;
  v10 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityListByEventIdAndSpotId;
  if ( size < 1 )
    return 0LL;
  if ( size != 1 )
  {
    v11 = UserEventCooltimeRewardMaster___c_TypeInfo;
    if ( (BYTE3(UserEventCooltimeRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEventCooltimeRewardMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventCooltimeRewardMaster___c_TypeInfo);
      v11 = UserEventCooltimeRewardMaster___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_UserEventCooltimeRewardEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v14,
        Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_UserEventCooltimeRewardEntity___ctor__);
      v15 = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
      v15->__9__6_0 = (struct System_Comparison_UserEventCooltimeRewardEntity__o *)_9__6_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v15->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v10,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__);
    if ( !v10->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  }
  return (UserEventCooltimeRewardEntity_o *)v10->fields._items->m_Items[0];
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

  if ( (byte_42B1519 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__);
    byte_42B1519 = 1;
  }
  PK = UserEventCooltimeRewardEntity__CreatePK(userId, eventId, spotId, lv, *(const MethodInfo **)&spotId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__);
}


void __fastcall UserEventCooltimeRewardMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE57E & 1) == 0 )
  {
    sub_B52984(&UserEventCooltimeRewardMaster___c_TypeInfo);
    byte_42AE57E = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(UserEventCooltimeRewardMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, a);
  return b->fields.lv - a->fields.lv;
}