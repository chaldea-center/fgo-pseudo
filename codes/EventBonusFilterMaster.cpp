void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A230 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__, method);
    byte_418A230 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    274,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  int32_t v23; // w23
  __int64 v24; // x24
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x10
  System_Int32_array **v32; // x1
  System_Func_int__bool__o *v33; // x26
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v36; // x20
  struct EventBonusFilterMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_418A235 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_EventBonusFilterEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventBonusFilterEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int____67413072, v8);
    sub_B2C35C(&EventBonusFilterEntity_TypeInfo, v9);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v10);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v15);
    sub_B2C35C(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__, v16);
    sub_B2C35C(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__, v17);
    sub_B2C35C(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v18);
    sub_B2C35C(&EventBonusFilterMaster___c_TypeInfo, v19);
    byte_418A235 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length )
  {
    if ( Count >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        v24 = sub_B2C42C(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo);
        EventBonusFilterMaster___c__DisplayClass7_0___ctor((EventBonusFilterMaster___c__DisplayClass7_0_o *)v24, 0LL);
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 v23,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v24 )
          break;
        if ( list
          && (v31 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v31) )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v31 - 8) == EventBonusFilterEntity_TypeInfo )
            v32 = (System_Int32_array **)list;
          else
            v32 = 0LL;
        }
        else
        {
          v32 = 0LL;
        }
        *(_QWORD *)(v24 + 16) = v32;
        sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 16), v32, v25, v26, v27, v28, v29, v30);
        if ( *(_QWORD *)(v24 + 16) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v24 + 16) + 20LL) & 0xFFFFFFFE) == 4 )
          {
            v33 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v33,
              (Il2CppObject *)v24,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
            list = (void *)System_Linq_Enumerable__Any_int__24354728(
                             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                             (System_Func_TSource__bool__o *)v33,
                             (const MethodInfo_1739FA8 *)Method_System_Linq_Enumerable_Any_int____67413072);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v22 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v22,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(v24 + 16),
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
        if ( ++v23 >= Count )
          goto LABEL_22;
      }
LABEL_33:
      sub_B2C434(list, eventIdList);
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
      v36 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventBonusFilterEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__7_0,
        v36,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
      v37 = EventBonusFilterMaster___c_TypeInfo->static_fields;
      v37->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__7_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v37->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    if ( !v22 )
      goto LABEL_33;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
      (System_Comparison_T__o *)_9__7_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v22;
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

  if ( (byte_418A22E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A22E = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&priority);
  return (EventBonusFilterEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v24; // w24
  int32_t v25; // w25
  __int64 v26; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x10
  System_Int32_array **v34; // x1
  __int64 *v35; // x27
  __int64 v36; // x8
  System_Func_int__bool__o *v37; // x28
  __int64 v38; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v41; // [xsp+10h] [xbp-60h]

  if ( (byte_418A236 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int____67413072, v10);
    sub_B2C35C(&EventBonusFilterEntity_TypeInfo, v11);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v12);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B2C35C(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__, v19);
    sub_B2C35C(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v20);
    byte_418A236 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v41 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      v26 = sub_B2C42C(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo);
      EventBonusFilterMaster___c__DisplayClass8_0___ctor((EventBonusFilterMaster___c__DisplayClass8_0_o *)v26, 0LL);
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v25,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v26 )
        break;
      if ( list
        && (v33 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v33) )
      {
        if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v33 - 8) == EventBonusFilterEntity_TypeInfo )
          v34 = (System_Int32_array **)list;
        else
          v34 = 0LL;
      }
      else
      {
        v34 = 0LL;
      }
      *(_QWORD *)(v26 + 16) = v34;
      v35 = (__int64 *)(v26 + 16);
      sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 16), v34, v27, v28, v29, v30, v31, v32);
      v36 = *(_QWORD *)(v26 + 16);
      if ( v36 )
      {
        if ( *(_DWORD *)(v36 + 16) == eventId && (*(_DWORD *)(v36 + 20) & 0xFFFFFFFE) == 4 )
        {
          v37 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v37,
            (Il2CppObject *)v26,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
          list = (void *)System_Linq_Enumerable__Any_int__24354728(
                           (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                           (System_Func_TSource__bool__o *)v37,
                           (const MethodInfo_1739FA8 *)Method_System_Linq_Enumerable_Any_int____67413072);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            v38 = *v35;
            if ( !*v35 )
              break;
            v21 = *(unsigned int *)(v38 + 24);
            if ( *(_DWORD *)(v38 + 20) == 4 )
            {
              list = v41;
              if ( !v41 )
                break;
              System_Collections_Generic_List_int___Add(
                v41,
                v21,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
            else
            {
              list = Master_WarQuestSelectionMaster;
              if ( !Master_WarQuestSelectionMaster )
                break;
              list = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       Master_WarQuestSelectionMaster,
                       v21,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v41 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v41,
                *((System_Collections_Generic_IEnumerable_T__o **)list + 5),
                (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( ++v25 >= v24 )
        goto LABEL_30;
    }
LABEL_32:
    sub_B2C434(list, v21);
  }
LABEL_30:
  list = v41;
  if ( !v41 )
    goto LABEL_32;
  return System_Collections_Generic_List_int___ToArray(
           v41,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_int__o *v20; // x21
  int32_t v21; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v23; // x24
  __int64 v24; // x10
  System_Int32_array *EquipIdList; // x25
  System_Func_int__bool__o *klass; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleServantConfConponent_o *p__9__0; // [xsp+8h] [xbp-58h]

  if ( (byte_418A232 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&EventBonusFilterEntity_TypeInfo, v7);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v8);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B2C35C(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__, v15);
    sub_B2C35C(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, v16);
    byte_418A232 = 1;
  }
  v17 = (EventBonusFilterMaster___c__DisplayClass4_0_o *)sub_B2C42C(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
  EventBonusFilterMaster___c__DisplayClass4_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_20;
  v17->fields.svtId = svtId;
  v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  p__9__0 = (BattleServantConfConponent_o *)&v17->fields.__9__0;
  v21 = 0;
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                                             (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v21,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v23 = Item;
      v24 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, v19);
        klass = (System_Func_int__bool__o *)p__9__0->klass;
        if ( !p__9__0->klass )
        {
          klass = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            klass,
            (Il2CppObject *)v17,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
          v17->fields.__9__0 = klass;
          sub_B2C2F8(p__9__0, (System_Int32_array **)klass, v27, v28, v29, v30, v31, v32);
        }
        list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)BasicHelper__Any_int__24273940(
                                                                                                 EquipIdList,
                                                                                                 (System_Func_T__bool__o *)klass,
                                                                                                 (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_20;
          System_Collections_Generic_List_int___Add(
            v20,
            (int32_t)v23[1].klass,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    list = this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v20 )
LABEL_20:
    sub_B2C434(list, v19);
  System_Collections_Generic_List_int___Sort(
    v20,
    (const MethodInfo_2F68F18 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_Int32_array *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x23
  int32_t v15; // w24
  int items_high; // w8
  unsigned int v17; // w9
  _BOOL4 v18; // w8
  int max_length; // w8
  __int64 v20; // x9
  __int64 v21; // x10
  __int64 v23; // x0

  v4 = ignoreExpCard;
  v5 = eventIdList;
  if ( (byte_418A231 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventBonusFilterEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v11);
    byte_418A231 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v5 && *(_QWORD *)&v5->max_length && Count >= 1 )
  {
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
      if ( list )
      {
        eventIdList = (System_Int32_array *)list;
        v21 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (EventBonusFilterEntity_c *)list->klass->_2.typeHierarchy[v21 - 1] == EventBonusFilterEntity_TypeInfo )
        {
          items_high = HIDWORD(list->fields.items);
          v17 = items_high - 1;
          v18 = items_high == 3;
          if ( v17 <= 1 && (!v18 || !v4) )
          {
            max_length = v5->max_length;
            if ( max_length >= 1 )
            {
              v20 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v20 >= max_length )
                {
                  v23 = sub_B2C460(list);
                  sub_B2C400(v23, 0LL);
                }
                if ( LODWORD(list->fields.items) == v5->m_Items[v20 + 1] )
                  break;
                if ( (int)++v20 >= max_length )
                  goto LABEL_22;
              }
              if ( !v14 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v14,
                (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
      }
LABEL_22:
      if ( ++v15 >= Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v14;
    }
LABEL_24:
    sub_B2C434(list, eventIdList);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v14;
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
  const MethodInfo *v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  System_Int32_array *v24; // x22
  int32_t v25; // w23
  __int64 v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x10
  System_Int32_array **v34; // x1
  void **v35; // x25
  System_Func_int__bool__o *v36; // x26
  System_Int32_array *v37; // x24
  unsigned __int64 v38; // x20
  EventBonusFilterMaster___c__DisplayClass6_1_o *v39; // x25
  System_Func_int__bool__o *v40; // x26
  __int64 v42; // x0
  System_Int32_array *v43; // [xsp+0h] [xbp-60h]
  EventBonusFilterMaster_o *v44; // [xsp+8h] [xbp-58h]

  if ( (byte_418A234 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, eventIdList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&EventBonusFilterEntity_TypeInfo, v7);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v8);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__IndexOf__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B2C35C(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__, v15);
    sub_B2C35C(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v16);
    sub_B2C35C(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__, v17);
    sub_B2C35C(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v18);
    byte_418A234 = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v43 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v20);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  v24 = TargetEventEquipIdList;
  v25 = 0;
  v44 = this;
  while ( 1 )
  {
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                     list,
                                                     (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v25 >= (int)TargetEventEquipIdList )
      break;
    v26 = sub_B2C42C(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo);
    EventBonusFilterMaster___c__DisplayClass6_0___ctor((EventBonusFilterMaster___c__DisplayClass6_0_o *)v26, 0LL);
    TargetEventEquipIdList = (System_Int32_array *)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_33;
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)TargetEventEquipIdList,
                                                     v25,
                                                     (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v26 )
      goto LABEL_33;
    if ( TargetEventEquipIdList
      && (v33 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
          *(&TargetEventEquipIdList->obj.klass->_2.bitflags2 + 1) >= (unsigned int)v33) )
    {
      if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[v33 - 1] == EventBonusFilterEntity_TypeInfo )
        v34 = (System_Int32_array **)TargetEventEquipIdList;
      else
        v34 = 0LL;
    }
    else
    {
      v34 = 0LL;
    }
    *(_QWORD *)(v26 + 16) = v34;
    v35 = (void **)(v26 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 16), v34, v27, v28, v29, v30, v31, v32);
    TargetEventEquipIdList = *(System_Int32_array **)(v26 + 16);
    if ( TargetEventEquipIdList )
    {
      if ( v43 )
      {
        v36 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v36,
          (Il2CppObject *)v26,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__24273940(
                                                         v43,
                                                         (System_Func_T__bool__o *)v36,
                                                         (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
        if ( ((unsigned __int8)TargetEventEquipIdList & 1) != 0 )
          goto LABEL_29;
        TargetEventEquipIdList = (System_Int32_array *)*v35;
        if ( !*v35 )
          goto LABEL_33;
      }
      TargetEventEquipIdList = EventBonusFilterEntity__GetEquipIdList(
                                 (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                 v22);
      if ( !TargetEventEquipIdList )
        goto LABEL_33;
      v37 = TargetEventEquipIdList;
      if ( (int)TargetEventEquipIdList->max_length >= 1 )
      {
        v38 = 0LL;
        while ( 1 )
        {
          v39 = (EventBonusFilterMaster___c__DisplayClass6_1_o *)sub_B2C42C(EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo);
          EventBonusFilterMaster___c__DisplayClass6_1___ctor(v39, 0LL);
          if ( v38 >= v37->max_length )
          {
            v42 = sub_B2C460(TargetEventEquipIdList);
            sub_B2C400(v42, 0LL);
          }
          if ( !v39 )
            break;
          v39->fields.id = v37->m_Items[v38 + 1];
          if ( !v24
            || (v40 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v40,
                  (Il2CppObject *)v39,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__),
                TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__24273940(
                                                                 v24,
                                                                 (System_Func_T__bool__o *)v40,
                                                                 (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496),
                ((unsigned __int8)TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v19 )
              break;
            TargetEventEquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                             v19,
                                                             v39->fields.id,
                                                             (const MethodInfo_2F68070 *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
              System_Collections_Generic_List_int___Add(
                v19,
                v39->fields.id,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( (__int64)++v38 >= (int)v37->max_length )
            goto LABEL_29;
        }
LABEL_33:
        sub_B2C434(TargetEventEquipIdList, v22);
      }
    }
LABEL_29:
    this = v44;
    ++v25;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v44->fields.list;
    if ( !list )
      goto LABEL_33;
  }
  if ( !v19 )
    goto LABEL_33;
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_Int32_array *EquipIdList; // x0
  __int64 v18; // x1
  System_Int32_array *v19; // x20
  __int64 v20; // x8
  unsigned __int64 v21; // x25
  int32_t v22; // w21
  const MethodInfo *v23; // x1
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418A233 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, eventIdList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__IndexOf__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_418A233 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = EventBonusFilterMaster__GetFilterList(this, eventIdList, 0, v16);
    if ( !FilterList )
      goto LABEL_23;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FilterList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v27 = v26;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v27.fields.current )
        sub_B2C434(0LL, v23);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v27.fields.current, v23);
      v19 = EquipIdList;
      if ( !EquipIdList )
        sub_B2C434(0LL, v18);
      v20 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v20 >= 1 )
      {
        v21 = 0LL;
        do
        {
          if ( v21 >= (unsigned int)v20 )
          {
            v25 = sub_B2C460(EquipIdList);
            sub_B2C400(v25, 0LL);
          }
          if ( !v13 )
            sub_B2C434(EquipIdList, v18);
          v22 = v19->m_Items[v21 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v13,
                                                v22,
                                                (const MethodInfo_2F68070 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
            System_Collections_Generic_List_int___Add(
              v13,
              v22,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v20) = v19->max_length;
          ++v21;
        }
        while ( (__int64)v21 < (int)v20 );
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v13 )
LABEL_23:
    sub_B2C434(FilterList, v15);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_418A22F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__, entity);
    byte_418A22F = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&value);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184AB8 & 1) == 0 )
  {
    sub_B2C35C(&EventBonusFilterMaster___c_TypeInfo, v1);
    byte_4184AB8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventBonusFilterMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, eventId);
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
    sub_B2C434(this, value);
  return e->fields.value == value;
}