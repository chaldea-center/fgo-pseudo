void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC561 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__, method);
    byte_40FC561 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    274,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w23
  __int64 v32; // x24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v33; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x10
  System_Int32_array **v42; // x1
  System_Func_int__bool__o *v43; // x26
  EventBonusFilterMaster___c_c *v44; // x0
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v47; // x20
  struct EventBonusFilterMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40FC566 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_EventBonusFilterEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_EventBonusFilterEntity__TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int____66837904, v8);
    sub_B16FFC(&EventBonusFilterEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v15);
    sub_B16FFC(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__, v16);
    sub_B16FFC(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__, v17);
    sub_B16FFC(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v18);
    sub_B16FFC(&EventBonusFilterMaster___c_TypeInfo, v19);
    byte_40FC566 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length )
  {
    if ( Count >= 1 )
    {
      v31 = 0;
      while ( 1 )
      {
        v32 = sub_B170CC(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v27, v28, v29, v30);
        EventBonusFilterMaster___c__DisplayClass7_0___ctor((EventBonusFilterMaster___c__DisplayClass7_0_o *)v32, 0LL);
        v33 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v33 )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 v33,
                 v31,
                 (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v32 )
          break;
        if ( Item
          && (v41 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
              *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v41) )
        {
          if ( (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[v41 - 1] == EventBonusFilterEntity_TypeInfo )
            v42 = (System_Int32_array **)Item;
          else
            v42 = 0LL;
        }
        else
        {
          v42 = 0LL;
        }
        *(_QWORD *)(v32 + 16) = v42;
        sub_B16F98((BattleServantConfConponent_o *)(v32 + 16), v42, v35, v36, v37, v38, v39, v40);
        if ( *(_QWORD *)(v32 + 16) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v32 + 16) + 20LL) & 0xFFFFFFFE) == 4 )
          {
            v43 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v27, v28, v29, v30);
            System_Func_int__bool____ctor(
              v43,
              (Il2CppObject *)v32,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
            if ( System_Linq_Enumerable__Any_int__25991232(
                   (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                   (System_Func_TSource__bool__o *)v43,
                   (const MethodInfo_18C9840 *)Method_System_Linq_Enumerable_Any_int____66837904) )
            {
              if ( !v26 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v26,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(v32 + 16),
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
        if ( ++v31 >= Count )
          goto LABEL_22;
      }
LABEL_33:
      sub_B170D4();
    }
LABEL_22:
    v44 = EventBonusFilterMaster___c_TypeInfo;
    if ( (BYTE3(EventBonusFilterMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventBonusFilterMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBonusFilterMaster___c_TypeInfo);
      v44 = EventBonusFilterMaster___c_TypeInfo;
    }
    static_fields = v44->static_fields;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_EventBonusFilterEntity__TypeInfo,
                                                                            v27,
                                                                            v28,
                                                                            v29,
                                                                            v30);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__7_0,
        v47,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
      v48 = EventBonusFilterMaster___c_TypeInfo->static_fields;
      v48->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__7_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v48->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    if ( !v26 )
      goto LABEL_33;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
      (System_Comparison_T__o *)_9__7_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v26;
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

  if ( (byte_40FC55F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40FC55F = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&priority);
  return (EventBonusFilterEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
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
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w24
  int32_t v32; // w25
  __int64 v33; // x26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v34; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x10
  System_Int32_array **v43; // x1
  __int64 *v44; // x27
  __int64 v45; // x8
  System_Func_int__bool__o *v46; // x28
  __int64 v47; // x8
  int32_t v48; // w1
  WarEntity_o *Entity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v52; // [xsp+10h] [xbp-60h]

  if ( (byte_40FC567 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int____66837904, v10);
    sub_B16FFC(&EventBonusFilterEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v12);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B16FFC(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__, v19);
    sub_B16FFC(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v20);
    byte_40FC567 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v52 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23,
                                                    v24);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = Count;
    v32 = 0;
    while ( 1 )
    {
      v33 = sub_B170CC(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v27, v28, v29, v30);
      EventBonusFilterMaster___c__DisplayClass8_0___ctor((EventBonusFilterMaster___c__DisplayClass8_0_o *)v33, 0LL);
      v34 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v34 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v34,
               v32,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v33 )
        break;
      if ( Item
        && (v42 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v42) )
      {
        if ( (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[v42 - 1] == EventBonusFilterEntity_TypeInfo )
          v43 = (System_Int32_array **)Item;
        else
          v43 = 0LL;
      }
      else
      {
        v43 = 0LL;
      }
      *(_QWORD *)(v33 + 16) = v43;
      v44 = (__int64 *)(v33 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v33 + 16), v43, v36, v37, v38, v39, v40, v41);
      v45 = *(_QWORD *)(v33 + 16);
      if ( v45 )
      {
        if ( *(_DWORD *)(v45 + 16) == eventId && (*(_DWORD *)(v45 + 20) & 0xFFFFFFFE) == 4 )
        {
          v46 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v27, v28, v29, v30);
          System_Func_int__bool____ctor(
            v46,
            (Il2CppObject *)v33,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
          if ( System_Linq_Enumerable__Any_int__25991232(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                 (System_Func_TSource__bool__o *)v46,
                 (const MethodInfo_18C9840 *)Method_System_Linq_Enumerable_Any_int____66837904) )
          {
            v47 = *v44;
            if ( !*v44 )
              break;
            v48 = *(_DWORD *)(v47 + 24);
            if ( *(_DWORD *)(v47 + 20) == 4 )
            {
              if ( !v52 )
                break;
              System_Collections_Generic_List_int___Add(
                v52,
                v48,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            }
            else
            {
              if ( !Master_WarQuestSelectionMaster )
                break;
              Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         Master_WarQuestSelectionMaster,
                         v48,
                         (const MethodInfo_266F388 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !Entity || !v52 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v52,
                (System_Collections_Generic_IEnumerable_T__o *)Entity->fields.longName,
                (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( ++v32 >= v31 )
        goto LABEL_30;
    }
LABEL_32:
    sub_B170D4();
  }
LABEL_30:
  if ( !v52 )
    goto LABEL_32;
  return System_Collections_Generic_List_int___ToArray(
           v52,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventBonusFilterMaster__GetEventIdListBySvtId(
        EventBonusFilterMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  EventBonusFilterMaster___c__DisplayClass4_0_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_int__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v26; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v29; // x1
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v30; // x24
  __int64 v31; // x10
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Int32_array *EquipIdList; // x25
  System_Func_int__bool__o *klass; // x26
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  BattleServantConfConponent_o *p__9__0; // [xsp+8h] [xbp-58h]

  if ( (byte_40FC563 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&EventBonusFilterEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B16FFC(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__, v17);
    sub_B16FFC(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, v18);
    byte_40FC563 = 1;
  }
  v19 = (EventBonusFilterMaster___c__DisplayClass4_0_o *)sub_B170CC(
                                                           EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo,
                                                           *(_QWORD *)&svtId,
                                                           method,
                                                           v3,
                                                           v4);
  EventBonusFilterMaster___c__DisplayClass4_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_20;
  v19->fields.svtId = svtId;
  v24 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  p__9__0 = (BattleServantConfConponent_o *)&v19->fields.__9__0;
  v26 = 0;
  while ( v26 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v27 )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v27,
             v26,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v30 = Item;
      v31 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v31
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[v31 - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, v29);
        klass = (System_Func_int__bool__o *)p__9__0->klass;
        if ( !p__9__0->klass )
        {
          klass = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v32, v33, v34, v35);
          System_Func_int__bool____ctor(
            klass,
            (Il2CppObject *)v19,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
          v19->fields.__9__0 = klass;
          sub_B16F98(p__9__0, (System_Int32_array **)klass, v38, v39, v40, v41, v42, v43);
        }
        if ( BasicHelper__Any_int__25910576(
               EquipIdList,
               (System_Func_T__bool__o *)klass,
               (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
        {
          if ( !v24 )
            goto LABEL_20;
          System_Collections_Generic_List_int___Add(
            v24,
            (int32_t)v30[1].klass,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v26;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v24 )
LABEL_20:
    sub_B170D4();
  System_Collections_Generic_List_int___Sort(
    v24,
    (const MethodInfo_2F12410 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v24,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x23
  int32_t v19; // w24
  int32_t missionConditionDetailId; // w8
  unsigned int v21; // w9
  _BOOL4 v22; // w8
  signed int max_length; // w8
  __int64 v24; // x9
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v27; // x2
  __int64 v28; // x10

  v4 = ignoreExpCard;
  if ( (byte_40FC562 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventBonusFilterEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v11);
    byte_40FC562 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length && Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v25 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v25 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v25,
                                                                      v19,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] == EventBonusFilterEntity_TypeInfo )
        {
          missionConditionDetailId = Item->fields.missionConditionDetailId;
          v21 = missionConditionDetailId - 1;
          v22 = missionConditionDetailId == 3;
          if ( v21 <= 1 && (!v22 || !v4) )
          {
            max_length = eventIdList->max_length;
            if ( max_length >= 1 )
            {
              v24 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v24 >= max_length )
                {
                  sub_B17100(Item, Item, v27);
                  sub_B170A0();
                }
                if ( Item->fields.missionTargetId == eventIdList->m_Items[v24 + 1] )
                  break;
                if ( (int)++v24 >= max_length )
                  goto LABEL_22;
              }
              if ( !v18 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v18,
                Item,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
      }
LABEL_22:
      if ( ++v19 >= Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v18;
    }
LABEL_24:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v18;
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetOtherEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_int__o *v21; // x21
  const MethodInfo *v22; // x2
  System_Int32_array *TargetEventEquipIdList; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  System_Int32_array *v25; // x22
  int32_t v26; // w23
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v32; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x10
  System_Int32_array **v41; // x1
  EventBonusFilterEntity_o **v42; // x25
  const MethodInfo *v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  EventBonusFilterEntity_o *v47; // x0
  System_Func_int__bool__o *v48; // x26
  System_Int32_array *EquipIdList; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Int32_array *v54; // x24
  unsigned __int64 v55; // x20
  EventBonusFilterMaster___c__DisplayClass6_1_o *v56; // x25
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Func_int__bool__o *v62; // x26
  System_Int32_array *v64; // [xsp+0h] [xbp-60h]
  EventBonusFilterMaster_o *v65; // [xsp+8h] [xbp-58h]

  if ( (byte_40FC565 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, eventIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&EventBonusFilterEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__IndexOf__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B16FFC(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__, v17);
    sub_B16FFC(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v18);
    sub_B16FFC(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__, v19);
    sub_B16FFC(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v20);
    byte_40FC565 = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    eventIdList,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v64 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v22);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  v25 = TargetEventEquipIdList;
  v26 = 0;
  v65 = this;
  while ( v26 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v31 = sub_B170CC(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v27, v28, v29, v30);
    EventBonusFilterMaster___c__DisplayClass6_0___ctor((EventBonusFilterMaster___c__DisplayClass6_0_o *)v31, 0LL);
    v32 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v32 )
      goto LABEL_33;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v32,
             v26,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v31 )
      goto LABEL_33;
    if ( Item
      && (v40 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
          *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v40) )
    {
      if ( (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[v40 - 1] == EventBonusFilterEntity_TypeInfo )
        v41 = (System_Int32_array **)Item;
      else
        v41 = 0LL;
    }
    else
    {
      v41 = 0LL;
    }
    *(_QWORD *)(v31 + 16) = v41;
    v42 = (EventBonusFilterEntity_o **)(v31 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), v41, v34, v35, v36, v37, v38, v39);
    v47 = *(EventBonusFilterEntity_o **)(v31 + 16);
    if ( v47 )
    {
      if ( v64 )
      {
        v48 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v43, v44, v45, v46);
        System_Func_int__bool____ctor(
          v48,
          (Il2CppObject *)v31,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        if ( BasicHelper__Any_int__25910576(
               v64,
               (System_Func_T__bool__o *)v48,
               (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
        {
          goto LABEL_29;
        }
        v47 = *v42;
        if ( !*v42 )
          goto LABEL_33;
      }
      EquipIdList = EventBonusFilterEntity__GetEquipIdList(v47, v43);
      if ( !EquipIdList )
        goto LABEL_33;
      v54 = EquipIdList;
      if ( (int)EquipIdList->max_length >= 1 )
      {
        v55 = 0LL;
        while ( 1 )
        {
          v56 = (EventBonusFilterMaster___c__DisplayClass6_1_o *)sub_B170CC(
                                                                   EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo,
                                                                   v50,
                                                                   v51,
                                                                   v52,
                                                                   v53);
          EventBonusFilterMaster___c__DisplayClass6_1___ctor(v56, 0LL);
          if ( v55 >= v54->max_length )
          {
            sub_B17100(v57, v58, v59);
            sub_B170A0();
          }
          if ( !v56 )
            break;
          v56->fields.id = v54->m_Items[v55 + 1];
          if ( !v25
            || (v62 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v58, v59, v60, v61),
                System_Func_int__bool____ctor(
                  v62,
                  (Il2CppObject *)v56,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__),
                !BasicHelper__Any_int__25910576(
                   v25,
                   (System_Func_T__bool__o *)v62,
                   (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656)) )
          {
            if ( !v21 )
              break;
            if ( System_Collections_Generic_List_int___IndexOf(
                   v21,
                   v56->fields.id,
                   (const MethodInfo_2F11568 *)Method_System_Collections_Generic_List_int__IndexOf__) == -1 )
              System_Collections_Generic_List_int___Add(
                v21,
                v56->fields.id,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( (__int64)++v55 >= (int)v54->max_length )
            goto LABEL_29;
        }
LABEL_33:
        sub_B170D4();
      }
    }
LABEL_29:
    this = v65;
    ++v26;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v65->fields.list;
    if ( !list )
      goto LABEL_33;
  }
  if ( !v21 )
    goto LABEL_33;
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetTargetEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x19
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  System_Int32_array *EquipIdList; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Int32_array *v21; // x20
  __int64 v22; // x8
  unsigned __int64 v23; // x25
  int32_t v24; // w21
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FC564 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__, eventIdList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__IndexOf__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_40FC564 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    eventIdList,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( eventIdList )
  {
    FilterList = EventBonusFilterMaster__GetFilterList(this, eventIdList, 0, v16);
    if ( !FilterList )
      goto LABEL_23;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FilterList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v28 = v27;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v28,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v28.fields.current )
        sub_B170D4();
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v28.fields.current, v25);
      v21 = EquipIdList;
      if ( !EquipIdList )
        sub_B170D4();
      v22 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v22 >= 1 )
      {
        v23 = 0LL;
        do
        {
          if ( v23 >= (unsigned int)v22 )
          {
            sub_B17100(EquipIdList, v19, v20);
            sub_B170A0();
          }
          if ( !v15 )
            sub_B170D4();
          v24 = v21->m_Items[v23 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v15,
                                                v24,
                                                (const MethodInfo_2F11568 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
            System_Collections_Generic_List_int___Add(
              v15,
              v24,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v22) = v21->max_length;
          ++v23;
        }
        while ( (__int64)v23 < (int)v22 );
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v28,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v15 )
LABEL_23:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_40FC560 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__, entity);
    byte_40FC560 = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&value);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B93 & 1) == 0 )
  {
    sub_B16FFC(&EventBonusFilterMaster___c_TypeInfo, v1);
    byte_40F8B93 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventBonusFilterMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventBonusFilterMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return e->fields.value == value;
}