void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216E76 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__, method);
    byte_4216E76 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    274,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetBonusSkillFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  void *list; // x0
  int32_t Count; // w22
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t v27; // w23
  __int64 v28; // x24
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x10
  System_Int32_array **v36; // x1
  System_Func_int__bool__o *v37; // x26
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v40; // x20
  struct EventBonusFilterMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_4216E7B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventBonusFilterEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventBonusFilterEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int____67987528, v8);
    sub_B0D8A4(&EventBonusFilterEntity_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v15);
    sub_B0D8A4(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__, v16);
    sub_B0D8A4(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__, v17);
    sub_B0D8A4(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v18);
    sub_B0D8A4(&EventBonusFilterMaster___c_TypeInfo, v19);
    byte_4216E7B = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length )
  {
    if ( Count >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        v28 = sub_B0D974(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v25, v26);
        EventBonusFilterMaster___c__DisplayClass7_0___ctor((EventBonusFilterMaster___c__DisplayClass7_0_o *)v28, 0LL);
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 v27,
                 (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v28 )
          break;
        if ( list
          && (v35 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v35) )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v35 - 8) == EventBonusFilterEntity_TypeInfo )
            v36 = (System_Int32_array **)list;
          else
            v36 = 0LL;
        }
        else
        {
          v36 = 0LL;
        }
        *(_QWORD *)(v28 + 16) = v36;
        sub_B0D840((BattleServantConfConponent_o *)(v28 + 16), v36, v29, v30, v31, v32, v33, v34);
        if ( *(_QWORD *)(v28 + 16) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v28 + 16) + 20LL) & 0xFFFFFFFE) == 4 )
          {
            v37 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v25, v26);
            System_Func_int__bool____ctor(
              v37,
              (Il2CppObject *)v28,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
            list = (void *)System_Linq_Enumerable__Any_int__24227480(
                             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                             (System_Func_TSource__bool__o *)v37,
                             (const MethodInfo_171AE98 *)Method_System_Linq_Enumerable_Any_int____67987528);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v24 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(v28 + 16),
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
        if ( ++v27 >= Count )
          goto LABEL_22;
      }
LABEL_33:
      sub_B0D97C(list);
    }
LABEL_22:
    list = EventBonusFilterMaster___c_TypeInfo;
    if ( (BYTE3(EventBonusFilterMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo);
      list = EventBonusFilterMaster___c_TypeInfo;
    }
    static_fields = (struct EventBonusFilterMaster___c_StaticFields *)*((_QWORD *)list + 23);
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_EventBonusFilterEntity__TypeInfo,
                                                                            v25,
                                                                            v26);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__7_0,
        v40,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
      v41 = EventBonusFilterMaster___c_TypeInfo->static_fields;
      v41->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__7_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v41->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    if ( !v24 )
      goto LABEL_33;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v24,
      (System_Comparison_T__o *)_9__7_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v24;
}


// local variable allocation has failed, the output may be wrong!
EventBonusFilterEntity_o *__fastcall EventBonusFilterMaster__GetEntity(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        int32_t type,
        int32_t value,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4216E74 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4216E74 = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&priority);
  return (EventBonusFilterEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266A024 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventBonusFilterMaster__GetEventBonusSkillIds(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        System_Int32_array *objectValues,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
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
  __int64 v22; // x2
  void *list; // x0
  int32_t Count; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t v27; // w24
  int32_t v28; // w25
  __int64 v29; // x26
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x10
  System_Int32_array **v37; // x1
  __int64 *v38; // x27
  __int64 v39; // x8
  System_Func_int__bool__o *v40; // x28
  __int64 v41; // x8
  int32_t v42; // w1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v45; // [xsp+10h] [xbp-60h]

  if ( (byte_4216E7C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int____67987528, v10);
    sub_B0D8A4(&EventBonusFilterEntity_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B0D8A4(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__, v19);
    sub_B0D8A4(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v20);
    byte_4216E7C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v45 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v21, v22);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      v29 = sub_B0D974(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v25, v26);
      EventBonusFilterMaster___c__DisplayClass8_0___ctor((EventBonusFilterMaster___c__DisplayClass8_0_o *)v29, 0LL);
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v28,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v29 )
        break;
      if ( list
        && (v36 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v36) )
      {
        if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v36 - 8) == EventBonusFilterEntity_TypeInfo )
          v37 = (System_Int32_array **)list;
        else
          v37 = 0LL;
      }
      else
      {
        v37 = 0LL;
      }
      *(_QWORD *)(v29 + 16) = v37;
      v38 = (__int64 *)(v29 + 16);
      sub_B0D840((BattleServantConfConponent_o *)(v29 + 16), v37, v30, v31, v32, v33, v34, v35);
      v39 = *(_QWORD *)(v29 + 16);
      if ( v39 )
      {
        if ( *(_DWORD *)(v39 + 16) == eventId && (*(_DWORD *)(v39 + 20) & 0xFFFFFFFE) == 4 )
        {
          v40 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v25, v26);
          System_Func_int__bool____ctor(
            v40,
            (Il2CppObject *)v29,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
          list = (void *)System_Linq_Enumerable__Any_int__24227480(
                           (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                           (System_Func_TSource__bool__o *)v40,
                           (const MethodInfo_171AE98 *)Method_System_Linq_Enumerable_Any_int____67987528);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            v41 = *v38;
            if ( !*v38 )
              break;
            v42 = *(_DWORD *)(v41 + 24);
            if ( *(_DWORD *)(v41 + 20) == 4 )
            {
              list = v45;
              if ( !v45 )
                break;
              System_Collections_Generic_List_int___Add(
                v45,
                v42,
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            }
            else
            {
              list = Master_WarQuestSelectionMaster;
              if ( !Master_WarQuestSelectionMaster )
                break;
              list = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       Master_WarQuestSelectionMaster,
                       v42,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v45 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v45,
                *((System_Collections_Generic_IEnumerable_T__o **)list + 5),
                (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_30;
    }
LABEL_32:
    sub_B0D97C(list);
  }
LABEL_30:
  list = v45;
  if ( !v45 )
    goto LABEL_32;
  return System_Collections_Generic_List_int___ToArray(
           v45,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventBonusFilterMaster__GetEventIdListBySvtId(
        EventBonusFilterMaster_o *this,
        int32_t svtId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  EventBonusFilterMaster___c__DisplayClass4_0_o *v17; // x20
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x21
  int32_t v22; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v24; // x1
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x24
  __int64 v26; // x10
  __int64 v27; // x1
  __int64 v28; // x2
  System_Int32_array *EquipIdList; // x25
  System_Func_int__bool__o *klass; // x26
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BattleServantConfConponent_o *p__9__0; // [xsp+8h] [xbp-58h]

  if ( (byte_4216E78 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&EventBonusFilterEntity_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Sort__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B0D8A4(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__, v15);
    sub_B0D8A4(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, v16);
    byte_4216E78 = 1;
  }
  v17 = (EventBonusFilterMaster___c__DisplayClass4_0_o *)sub_B0D974(
                                                           EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo,
                                                           *(_QWORD *)&svtId,
                                                           method);
  EventBonusFilterMaster___c__DisplayClass4_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_20;
  v17->fields.svtId = svtId;
  v21 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v19, v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  p__9__0 = (BattleServantConfConponent_o *)&v17->fields.__9__0;
  v22 = 0;
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                                             (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v22 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v22,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v25 = Item;
      v26 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, v24);
        klass = (System_Func_int__bool__o *)p__9__0->klass;
        if ( !p__9__0->klass )
        {
          klass = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v27, v28);
          System_Func_int__bool____ctor(
            klass,
            (Il2CppObject *)v17,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
          v17->fields.__9__0 = klass;
          sub_B0D840(p__9__0, (System_Int32_array **)klass, v31, v32, v33, v34, v35, v36);
        }
        list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)BasicHelper__Any_int__24145568(
                                                                                                 EquipIdList,
                                                                                                 (System_Func_T__bool__o *)klass,
                                                                                                 (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_20;
          System_Collections_Generic_List_int___Add(
            v21,
            (int32_t)v25[1].klass,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    list = this->fields.list;
    ++v22;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v21 )
LABEL_20:
    sub_B0D97C(list);
  System_Collections_Generic_List_int___Sort(
    v21,
    (const MethodInfo_2FB1E20 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x23
  int32_t v17; // w24
  int items_high; // w8
  unsigned int v19; // w9
  _BOOL4 v20; // w8
  signed int max_length; // w8
  __int64 v22; // x9
  __int64 v23; // x10
  __int64 v25; // x0

  v4 = ignoreExpCard;
  if ( (byte_4216E77 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&EventBonusFilterEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v11);
    byte_4216E77 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length && Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (EventBonusFilterEntity_c *)list->klass->_2.typeHierarchy[v23 - 1] == EventBonusFilterEntity_TypeInfo )
        {
          items_high = HIDWORD(list->fields.items);
          v19 = items_high - 1;
          v20 = items_high == 3;
          if ( v19 <= 1 && (!v20 || !v4) )
          {
            max_length = eventIdList->max_length;
            if ( max_length >= 1 )
            {
              v22 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v22 >= max_length )
                {
                  v25 = sub_B0D9A8(list);
                  sub_B0D948(v25, 0LL);
                }
                if ( LODWORD(list->fields.items) == eventIdList->m_Items[v22 + 1] )
                  break;
                if ( (int)++v22 >= max_length )
                  goto LABEL_22;
              }
              if ( !v16 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v16,
                (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
      }
LABEL_22:
      if ( ++v17 >= Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v16;
    }
LABEL_24:
    sub_B0D97C(list);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v16;
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetOtherEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_int__o *v19; // x21
  const MethodInfo *v20; // x2
  System_Int32_array *TargetEventEquipIdList; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  System_Int32_array *v23; // x22
  int32_t v24; // w23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x24
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x10
  System_Int32_array **v35; // x1
  void **v36; // x25
  const MethodInfo *v37; // x1
  __int64 v38; // x2
  System_Func_int__bool__o *v39; // x26
  __int64 v40; // x1
  __int64 v41; // x2
  System_Int32_array *v42; // x24
  unsigned __int64 v43; // x20
  EventBonusFilterMaster___c__DisplayClass6_1_o *v44; // x25
  __int64 v45; // x1
  __int64 v46; // x2
  System_Func_int__bool__o *v47; // x26
  __int64 v49; // x0
  System_Int32_array *v50; // [xsp+0h] [xbp-60h]
  EventBonusFilterMaster_o *v51; // [xsp+8h] [xbp-58h]

  if ( (byte_4216E7A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, eventIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&EventBonusFilterEntity_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__IndexOf__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B0D8A4(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__, v15);
    sub_B0D8A4(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v16);
    sub_B0D8A4(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__, v17);
    sub_B0D8A4(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v18);
    byte_4216E7A = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    eventIdList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v50 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v20);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  v23 = TargetEventEquipIdList;
  v24 = 0;
  v51 = this;
  while ( 1 )
  {
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                     list,
                                                     (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v24 >= (int)TargetEventEquipIdList )
      break;
    v27 = sub_B0D974(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v25, v26);
    EventBonusFilterMaster___c__DisplayClass6_0___ctor((EventBonusFilterMaster___c__DisplayClass6_0_o *)v27, 0LL);
    TargetEventEquipIdList = (System_Int32_array *)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_33;
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)TargetEventEquipIdList,
                                                     v24,
                                                     (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v27 )
      goto LABEL_33;
    if ( TargetEventEquipIdList
      && (v34 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
          *(&TargetEventEquipIdList->obj.klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
    {
      if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[v34 - 1] == EventBonusFilterEntity_TypeInfo )
        v35 = (System_Int32_array **)TargetEventEquipIdList;
      else
        v35 = 0LL;
    }
    else
    {
      v35 = 0LL;
    }
    *(_QWORD *)(v27 + 16) = v35;
    v36 = (void **)(v27 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v27 + 16), v35, v28, v29, v30, v31, v32, v33);
    TargetEventEquipIdList = *(System_Int32_array **)(v27 + 16);
    if ( TargetEventEquipIdList )
    {
      if ( v50 )
      {
        v39 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v37, v38);
        System_Func_int__bool____ctor(
          v39,
          (Il2CppObject *)v27,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__24145568(
                                                         v50,
                                                         (System_Func_T__bool__o *)v39,
                                                         (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
        if ( ((unsigned __int8)TargetEventEquipIdList & 1) != 0 )
          goto LABEL_29;
        TargetEventEquipIdList = (System_Int32_array *)*v36;
        if ( !*v36 )
          goto LABEL_33;
      }
      TargetEventEquipIdList = EventBonusFilterEntity__GetEquipIdList(
                                 (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                 v37);
      if ( !TargetEventEquipIdList )
        goto LABEL_33;
      v42 = TargetEventEquipIdList;
      if ( (int)TargetEventEquipIdList->max_length >= 1 )
      {
        v43 = 0LL;
        while ( 1 )
        {
          v44 = (EventBonusFilterMaster___c__DisplayClass6_1_o *)sub_B0D974(
                                                                   EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo,
                                                                   v40,
                                                                   v41);
          EventBonusFilterMaster___c__DisplayClass6_1___ctor(v44, 0LL);
          if ( v43 >= v42->max_length )
          {
            v49 = sub_B0D9A8(TargetEventEquipIdList);
            sub_B0D948(v49, 0LL);
          }
          if ( !v44 )
            break;
          v44->fields.id = v42->m_Items[v43 + 1];
          if ( !v23
            || (v47 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v45, v46),
                System_Func_int__bool____ctor(
                  v47,
                  (Il2CppObject *)v44,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__),
                TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__24145568(
                                                                 v23,
                                                                 (System_Func_T__bool__o *)v47,
                                                                 (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312),
                ((unsigned __int8)TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v19 )
              break;
            TargetEventEquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                             v19,
                                                             v44->fields.id,
                                                             (const MethodInfo_2FB0F78 *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
              System_Collections_Generic_List_int___Add(
                v19,
                v44->fields.id,
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( (__int64)++v43 >= (int)v42->max_length )
            goto LABEL_29;
        }
LABEL_33:
        sub_B0D97C(TargetEventEquipIdList);
      }
    }
LABEL_29:
    this = v51;
    ++v24;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v51->fields.list;
    if ( !list )
      goto LABEL_33;
  }
  if ( !v19 )
    goto LABEL_33;
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetTargetEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
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
  System_Collections_Generic_List_int__o *v13; // x19
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  const MethodInfo *v15; // x3
  System_Int32_array *EquipIdList; // x0
  System_Int32_array *v17; // x20
  __int64 v18; // x8
  unsigned __int64 v19; // x25
  int32_t v20; // w21
  const MethodInfo *v21; // x1
  __int64 v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4216E79 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, eventIdList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__IndexOf__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_4216E79 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v13 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    eventIdList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = EventBonusFilterMaster__GetFilterList(this, eventIdList, 0, v15);
    if ( !FilterList )
      goto LABEL_23;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FilterList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v25 = v24;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v25.fields.current )
        sub_B0D97C(0LL);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v25.fields.current, v21);
      v17 = EquipIdList;
      if ( !EquipIdList )
        sub_B0D97C(0LL);
      v18 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v18 >= 1 )
      {
        v19 = 0LL;
        do
        {
          if ( v19 >= (unsigned int)v18 )
          {
            v23 = sub_B0D9A8(EquipIdList);
            sub_B0D948(v23, 0LL);
          }
          if ( !v13 )
            sub_B0D97C(EquipIdList);
          v20 = v17->m_Items[v19 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v13,
                                                v20,
                                                (const MethodInfo_2FB0F78 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
            System_Collections_Generic_List_int___Add(
              v13,
              v20,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v18) = v17->max_length;
          ++v19;
        }
        while ( (__int64)v19 < (int)v18 );
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v13 )
LABEL_23:
    sub_B0D97C(FilterList);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBonusFilterMaster__TryGetEntity(
        EventBonusFilterMaster_o *this,
        EventBonusFilterEntity_o **entity,
        int32_t eventId,
        int32_t type,
        int32_t value,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4216E75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__, entity);
    byte_4216E75 = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&value);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211B17 & 1) == 0 )
  {
    sub_B0D8A4(&EventBonusFilterMaster___c_TypeInfo, v1);
    byte_4211B17 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventBonusFilterMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventBonusFilterMaster___c___ctor(EventBonusFilterMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventBonusFilterMaster___c___GetBonusSkillFilterList_b__7_0(
        EventBonusFilterMaster___c_o *this,
        EventBonusFilterEntity_o *x,
        EventBonusFilterEntity_o *y,
        const MethodInfo *method)
{
  int32_t eventId; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !x || !y )
    sub_B0D97C(this);
  eventId = x->fields.eventId;
  v5 = y->fields.eventId;
  result = eventId - v5;
  if ( eventId == v5 )
    return y->fields.priority - x->fields.priority;
  return result;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass4_0___ctor(
        EventBonusFilterMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass4_0___GetEventIdListBySvtId_b__0(
        EventBonusFilterMaster___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass6_0___ctor(
        EventBonusFilterMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass6_0___GetOtherEventEquipIdList_b__0(
        EventBonusFilterMaster___c__DisplayClass6_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(this);
  return entity->fields.eventId == x;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass6_1___ctor(
        EventBonusFilterMaster___c__DisplayClass6_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass6_1___GetOtherEventEquipIdList_b__1(
        EventBonusFilterMaster___c__DisplayClass6_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.id == x;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass7_0___ctor(
        EventBonusFilterMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass7_0___GetBonusSkillFilterList_b__1(
        EventBonusFilterMaster___c__DisplayClass7_0_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_B0D97C(this);
  return e->fields.eventId == eventId;
}


void __fastcall EventBonusFilterMaster___c__DisplayClass8_0___ctor(
        EventBonusFilterMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBonusFilterMaster___c__DisplayClass8_0___GetEventBonusSkillIds_b__0(
        EventBonusFilterMaster___c__DisplayClass8_0_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *e; // x8

  e = this->fields.e;
  if ( !e )
    sub_B0D97C(this);
  return e->fields.value == value;
}