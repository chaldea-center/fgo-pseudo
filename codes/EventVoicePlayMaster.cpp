void __fastcall EventVoicePlayMaster___ctor(EventVoicePlayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41882CB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__, method);
    byte_41882CB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    184,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
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

  if ( (byte_41882C9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_41882C9 = 1;
  }
  PK = EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&guideImageId);
  return (EventVoicePlayEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
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
    sub_B2C2F8(
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
    sub_B2C2F8((BattleServantConfConponent_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_B2C2F8(
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
    sub_B2C2F8((BattleServantConfConponent_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
EventVoicePlayEntity_array *__fastcall EventVoicePlayMaster__GetTargetEventIdEntityList(
        EventVoicePlayMaster_o *this,
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

  if ( (byte_41882CD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventVoicePlayEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v10);
    byte_41882CD = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
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
      if ( !list )
        break;
      v12 = list;
      v16 = *(&EventVoicePlayEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (EventVoicePlayEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
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
  return (EventVoicePlayEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventVoicePlayEntity_o *__fastcall EventVoicePlayMaster__GetValidEventVoicePlayEntity(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19
  int64_t v24; // x1
  int64_t list; // x0
  int32_t Count; // w26
  int64_t v27; // x25
  int32_t v28; // w27
  __int64 v29; // x10
  int size; // w8
  unsigned int v31; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x23
  __int64 v33; // x24
  __int64 v34; // x26
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v37; // x20
  struct EventVoicePlayMaster___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v46; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_41882CE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&Method_System_Comparison_EventVoicePlayEntity___ctor__, v9);
    sub_B2C35C(&System_Comparison_EventVoicePlayEntity__TypeInfo, v10);
    sub_B2C35C(&EventVoicePlayEntity_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__, v20);
    sub_B2C35C(&EventVoicePlayMaster___c_TypeInfo, v21);
    byte_41882CE = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_46;
  v46 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  v27 = list;
  if ( Count >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v28,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v24 = list;
      v29 = *(&EventVoicePlayEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v29
        || *(EventVoicePlayEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v29 - 8) != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 20) == slot )
      {
        if ( !v22 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
      }
      if ( ++v28 >= Count )
        goto LABEL_18;
    }
LABEL_46:
    sub_B2C434(list, v24);
  }
LABEL_18:
  if ( !v22 )
    goto LABEL_46;
  size = v22->fields._size;
  if ( size >= 1 )
  {
    v31 = 0;
    do
    {
      if ( size <= v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v32 = v22->fields._items->m_Items[v31];
      if ( !v32 )
        goto LABEL_46;
      if ( *(_QWORD *)&v32[1].fields.addCount <= v27
        && v27 <= (__int64)v32[2].klass
        && LODWORD(v32[1].monitor) == eventId )
      {
        v33 = *(_QWORD *)&v32->fields.eventId;
        v34 = *(_QWORD *)(&v32->fields + 1);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v48.fields.currentCryptoKey = v33;
        *(_QWORD *)&v48.fields.fakeValue = v34;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
        if ( (_DWORD)list == svtId )
        {
          if ( !v23 )
            goto LABEL_46;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v32,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
        }
      }
      size = v22->fields._size;
    }
    while ( (int)++v31 < size );
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
    v37 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventVoicePlayEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v37,
      Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventVoicePlayEntity___ctor__);
    v38 = EventVoicePlayMaster___c_TypeInfo->static_fields;
    v38->__9__6_0 = (struct System_Comparison_EventVoicePlayEntity__o *)_9__6_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v38->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !v46 )
    goto LABEL_46;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v46,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
  if ( v46->fields._size < 1 )
    return 0LL;
  else
    return (EventVoicePlayEntity_o *)v46->fields._items->m_Items[0];
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

  if ( (byte_41882CA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__, entity);
    byte_41882CA = 1;
  }
  PK = EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
}


System_String_o *__fastcall EventVoicePlayMaster__getVoiceAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = svtId;
  if ( (byte_41882CC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3963/*"ChrVoice_"*/, method);
    byte_41882CC = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_3963/*"ChrVoice_"*/, v2, 0LL);
}


void __fastcall EventVoicePlayMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41841B2 & 1) == 0 )
  {
    sub_B2C35C(&EventVoicePlayMaster___c_TypeInfo, v1);
    byte_41841B2 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventVoicePlayMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventVoicePlayMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.idx - a->fields.idx;
}