void __fastcall EventVoicePlayMaster___ctor(EventVoicePlayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A713 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
    byte_438A713 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    185,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetConfirmVoiceData(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v9; // x3

  result = (System_Collections_Generic_List_ServantVoiceData____o *)EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                                                      this,
                                                                      eventId,
                                                                      slot,
                                                                      svtId,
                                                                      *(const MethodInfo **)&svtLimitCnt);
  if ( result )
    return EventVoicePlayEntity__GetConfirmVoiceData((EventVoicePlayEntity_o *)result, svtId, svtLimitCnt, v9);
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventVoicePlayEntity_o *__fastcall EventVoicePlayMaster__GetEntity(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438A711 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
    byte_438A711 = 1;
  }
  PK = EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&guideImageId);
  return (EventVoicePlayEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetEventRewardWelcomeVoiceData(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **eventVoicePlayEntity,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *ValidEventVoicePlayEntity; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  EventVoicePlayEntity_o *v17; // x22
  const MethodInfo *v18; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v17 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_B77560(
      (BattleServantConfConponent_o *)eventVoicePlayEntity,
      (System_Int32_array **)ValidEventVoicePlayEntity,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    return EventVoicePlayEntity__GetEventRewardVoiceRandList(v17, svtId, svtLimitCnt, v18);
  }
  else
  {
    *eventVoicePlayEntity = 0LL;
    sub_B77560((BattleServantConfConponent_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetShopWelcomeVoiceData(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **eventVoicePlayEntity,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *ValidEventVoicePlayEntity; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  EventVoicePlayEntity_o *v17; // x22
  const MethodInfo *v18; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v17 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_B77560(
      (BattleServantConfConponent_o *)eventVoicePlayEntity,
      (System_Int32_array **)ValidEventVoicePlayEntity,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    return EventVoicePlayEntity__GetEventShopWelcomeVoiceList(v17, svtId, svtLimitCnt, v18);
  }
  else
  {
    *eventVoicePlayEntity = 0LL;
    sub_B77560((BattleServantConfConponent_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
    return 0LL;
  }
}


EventVoicePlayEntity_array *__fastcall EventVoicePlayMaster__GetTargetEventIdEntityList(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_438A715 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventVoicePlayEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
    byte_438A715 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v10 = *(&EventVoicePlayEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (EventVoicePlayEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7769C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (EventVoicePlayEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                         (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
}


EventVoicePlayEntity_o *__fastcall EventVoicePlayMaster__GetValidEventVoicePlayEntity(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  int64_t v10; // x1
  int64_t list; // x0
  int32_t Count; // w26
  int64_t v13; // x25
  int32_t v14; // w27
  __int64 v15; // x10
  int size; // w8
  unsigned int v17; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x23
  __int64 v19; // x24
  __int64 v20; // x26
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v23; // x20
  struct EventVoicePlayMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v32; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_438A716 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventVoicePlayEntity___ctor__);
    sub_B775C4(&System_Comparison_EventVoicePlayEntity__TypeInfo);
    sub_B775C4(&EventVoicePlayEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__);
    sub_B775C4(&EventVoicePlayMaster___c_TypeInfo);
    byte_438A716 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_46;
  v32 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  v13 = list;
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v14,
                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = list;
      v15 = *(&EventVoicePlayEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v15
        || *(EventVoicePlayEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v15 - 8) != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 20) == slot )
      {
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
      }
      if ( ++v14 >= Count )
        goto LABEL_18;
    }
LABEL_46:
    sub_B7769C(list, v10);
  }
LABEL_18:
  if ( !v8 )
    goto LABEL_46;
  size = v8->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    do
    {
      if ( size <= v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v18 = v8->fields._items->m_Items[v17];
      if ( !v18 )
        goto LABEL_46;
      if ( *(_QWORD *)&v18[1].fields.addCount <= v13
        && v13 <= (__int64)v18[2].klass
        && LODWORD(v18[1].monitor) == eventId )
      {
        v19 = *(_QWORD *)&v18->fields.eventId;
        v20 = *(_QWORD *)(&v18->fields + 1);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v34.fields.currentCryptoKey = v19;
        *(_QWORD *)&v34.fields.fakeValue = v20;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v34, 0LL);
        if ( (_DWORD)list == svtId )
        {
          if ( !v9 )
            goto LABEL_46;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            v18,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
        }
      }
      size = v8->fields._size;
    }
    while ( (int)++v17 < size );
  }
  list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  if ( (BYTE3(EventVoicePlayMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventVoicePlayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventVoicePlayMaster___c_TypeInfo);
    list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  }
  static_fields = *(struct EventVoicePlayMaster___c_StaticFields **)(list + 184);
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (*(_BYTE *)(list + 307) & 4) != 0 && !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventVoicePlayEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v23,
      Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventVoicePlayEntity___ctor__);
    v24 = EventVoicePlayMaster___c_TypeInfo->static_fields;
    v24->__9__6_0 = (struct System_Comparison_EventVoicePlayEntity__o *)_9__6_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v24->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !v32 )
    goto LABEL_46;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v32,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
  if ( v32->fields._size < 1 )
    return 0LL;
  else
    return (EventVoicePlayEntity_o *)v32->fields._items->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventVoicePlayMaster__GetVoiceAssetName(
        EventVoicePlayMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  return EventVoicePlayMaster__getVoiceAssetName(svtId, *(const MethodInfo **)&svtId);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventVoicePlayMaster__TryGetEntity(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438A712 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
    byte_438A712 = 1;
  }
  PK = EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
}


System_String_o *__fastcall EventVoicePlayMaster__getVoiceAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = svtId;
  if ( (byte_438A714 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4090/*"ChrVoice_"*/);
    byte_438A714 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44901936((System_String_o *)StringLiteral_4090/*"ChrVoice_"*/, v2, 0LL);
}


void __fastcall EventVoicePlayMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4388065 & 1) == 0 )
  {
    sub_B775C4(&EventVoicePlayMaster___c_TypeInfo);
    byte_4388065 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventVoicePlayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventVoicePlayMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall EventVoicePlayMaster___c___ctor(EventVoicePlayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventVoicePlayMaster___c___GetValidEventVoicePlayEntity_b__6_0(
        EventVoicePlayMaster___c_o *this,
        EventVoicePlayEntity_o *a,
        EventVoicePlayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7769C(this, a);
  return b->fields.idx - a->fields.idx;
}