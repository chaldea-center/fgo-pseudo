void __fastcall UserEventCooltimeRewardMaster___ctor(UserEventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1F2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA1F2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    423,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  UserEventCooltimeRewardEntity_o *v16; // x23
  int32_t v17; // w24
  UserEventCooltimeRewardEntity_o *v18; // x25
  __int64 v19; // x10
  EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0

  if ( (byte_42EA1F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, spotId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&UserEventCooltimeRewardEntity_TypeInfo, v10, v11, v12);
    byte_42EA1F6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0LL;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v18 = (UserEventCooltimeRewardEntity_o *)list;
      v19 = *(&UserEventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != UserEventCooltimeRewardEntity_TypeInfo )
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
            if ( v16 )
            {
              if ( v16->fields.lv < v18->fields.lv )
                v16 = v18;
            }
            else
            {
              v16 = v18;
            }
          }
        }
      }
      if ( ++v17 >= v15 )
        return v16;
    }
LABEL_23:
    sub_B5D69C(list, *(_QWORD *)&eventId);
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

  if ( (byte_42EA1F3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&spotId);
    byte_42EA1F3 = 1;
  }
  PK = UserEventCooltimeRewardEntity__CreatePK(userId, eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (UserEventCooltimeRewardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__GetEntity__);
}


System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventId(
        UserEventCooltimeRewardMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v25; // w22
  int32_t v26; // w23
  __int64 v27; // x10

  if ( (byte_42EA1F5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UserEventCooltimeRewardEntity_TypeInfo, v18, v19, v20);
    byte_42EA1F5 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v26,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v22 = list;
      v27 = *(&UserEventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v27 - 1] != UserEventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields._syncRoot) == eventId )
      {
        if ( !v21 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
      }
      if ( ++v26 >= v25 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v21;
    }
LABEL_15:
    sub_B5D69C(list, v22);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v21;
}


System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *__fastcall UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 v28; // x10

  if ( (byte_42EA1F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, spotId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&UserEventCooltimeRewardEntity_TypeInfo, v19, v20, v21);
    byte_42EA1F7 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventCooltimeRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = list;
        v28 = *(&UserEventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (UserEventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == UserEventCooltimeRewardEntity_TypeInfo
          && LODWORD(list->fields._syncRoot) == eventId
          && HIDWORD(list->fields._syncRoot) == spotId )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Add__);
        }
      }
      if ( ++v27 >= v26 )
        return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v22;
    }
LABEL_16:
    sub_B5D69C(list, v23);
  }
  return (System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *)v22;
}


UserEventCooltimeRewardEntity_o *__fastcall UserEventCooltimeRewardMaster__GetMaxLevelEntity(
        UserEventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventIdAndSpotId; // x0
  __int64 v26; // x1
  int size; // w8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v28; // x19
  UserEventCooltimeRewardMaster___c_c *v29; // x0
  struct UserEventCooltimeRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x20
  Il2CppObject *v32; // x21
  struct UserEventCooltimeRewardMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42EA1F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_UserEventCooltimeRewardEntity___ctor__, eventId, spotId, method);
    sub_B5D5C4(&System_Comparison_UserEventCooltimeRewardEntity__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__get_Item__, v16, v17, v18);
    sub_B5D5C4(&Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__, v19, v20, v21);
    sub_B5D5C4(&UserEventCooltimeRewardMaster___c_TypeInfo, v22, v23, v24);
    byte_42EA1F8 = 1;
  }
  EntityListByEventIdAndSpotId = UserEventCooltimeRewardMaster__GetEntityListByEventIdAndSpotId(
                                   this,
                                   eventId,
                                   spotId,
                                   method);
  if ( !EntityListByEventIdAndSpotId )
    sub_B5D69C(0LL, v26);
  size = EntityListByEventIdAndSpotId->fields._size;
  v28 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityListByEventIdAndSpotId;
  if ( size < 1 )
    return 0LL;
  if ( size != 1 )
  {
    v29 = UserEventCooltimeRewardMaster___c_TypeInfo;
    if ( (BYTE3(UserEventCooltimeRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEventCooltimeRewardMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventCooltimeRewardMaster___c_TypeInfo);
      v29 = UserEventCooltimeRewardMaster___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        static_fields = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserEventCooltimeRewardEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v32,
        Method_UserEventCooltimeRewardMaster___c__GetMaxLevelEntity_b__6_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_UserEventCooltimeRewardEntity___ctor__);
      v33 = UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
      v33->__9__6_0 = (struct System_Comparison_UserEventCooltimeRewardEntity__o *)_9__6_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v33->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v28,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserEventCooltimeRewardEntity__Sort__);
    if ( !v28->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  }
  return (UserEventCooltimeRewardEntity_o *)v28->fields._items->m_Items[0];
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

  if ( (byte_42EA1F4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42EA1F4 = 1;
  }
  PK = UserEventCooltimeRewardEntity__CreatePK(userId, eventId, spotId, lv, *(const MethodInfo **)&spotId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventCooltimeRewardMaster__UserEventCooltimeRewardEntity__string__TryGetEntity__);
}


void __fastcall UserEventCooltimeRewardMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E6FF1 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventCooltimeRewardMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6FF1 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserEventCooltimeRewardMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserEventCooltimeRewardMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return b->fields.lv - a->fields.lv;
}