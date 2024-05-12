void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438E845 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
    byte_438E845 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    275,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetBonusSkillFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  int32_t v8; // w23
  __int64 v9; // x24
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x10
  System_Int32_array **v17; // x1
  System_Func_int__bool__o *v18; // x26
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v21; // x20
  struct EventBonusFilterMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_438E84A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventBonusFilterEntity___ctor__);
    sub_B775C4(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_int____69502456);
    sub_B775C4(&EventBonusFilterEntity_TypeInfo);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
    sub_B775C4(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__);
    sub_B775C4(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__);
    sub_B775C4(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo);
    sub_B775C4(&EventBonusFilterMaster___c_TypeInfo);
    byte_438E84A = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length )
  {
    if ( Count >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = sub_B77694(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo);
        EventBonusFilterMaster___c__DisplayClass7_0___ctor((EventBonusFilterMaster___c__DisplayClass7_0_o *)v9, 0LL);
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 v8,
                 (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v9 )
          break;
        if ( list
          && (v16 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v16) )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v16 - 8) == EventBonusFilterEntity_TypeInfo )
            v17 = (System_Int32_array **)list;
          else
            v17 = 0LL;
        }
        else
        {
          v17 = 0LL;
        }
        *(_QWORD *)(v9 + 16) = v17;
        sub_B77560((BattleServantConfConponent_o *)(v9 + 16), v17, v10, v11, v12, v13, v14, v15);
        if ( *(_QWORD *)(v9 + 16) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 16) + 20LL) & 0xFFFFFFFE) == 4 )
          {
            v18 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v18,
              (Il2CppObject *)v9,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
            list = (void *)System_Linq_Enumerable__Any_int__30536520(
                             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                             (System_Func_TSource__bool__o *)v18,
                             (const MethodInfo_1D1F348 *)Method_System_Linq_Enumerable_Any_int____69502456);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v7 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v7,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(v9 + 16),
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
        if ( ++v8 >= Count )
          goto LABEL_22;
      }
LABEL_33:
      sub_B7769C(list, eventIdList);
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
      v21 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventBonusFilterEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__7_0,
        v21,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
      v22 = EventBonusFilterMaster___c_TypeInfo->static_fields;
      v22->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__7_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v22->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( !v7 )
      goto LABEL_33;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
      (System_Comparison_T__o *)_9__7_0,
      (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v7;
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

  if ( (byte_438E843 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
    byte_438E843 = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&priority);
  return (EventBonusFilterEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetEventBonusSkillIds(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        System_Int32_array *objectValues,
        const MethodInfo *method)
{
  __int64 v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w24
  int32_t v10; // w25
  __int64 v11; // x26
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x10
  System_Int32_array **v19; // x1
  __int64 *v20; // x27
  __int64 v21; // x8
  System_Func_int__bool__o *v22; // x28
  __int64 v23; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v26; // [xsp+10h] [xbp-60h]

  if ( (byte_438E84B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_int____69502456);
    sub_B775C4(&EventBonusFilterEntity_TypeInfo);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__);
    sub_B775C4(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo);
    byte_438E84B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v26 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      v11 = sub_B77694(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo);
      EventBonusFilterMaster___c__DisplayClass8_0___ctor((EventBonusFilterMaster___c__DisplayClass8_0_o *)v11, 0LL);
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v11 )
        break;
      if ( list
        && (v18 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v18) )
      {
        if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v18 - 8) == EventBonusFilterEntity_TypeInfo )
          v19 = (System_Int32_array **)list;
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      *(_QWORD *)(v11 + 16) = v19;
      v20 = (__int64 *)(v11 + 16);
      sub_B77560((BattleServantConfConponent_o *)(v11 + 16), v19, v12, v13, v14, v15, v16, v17);
      v21 = *(_QWORD *)(v11 + 16);
      if ( v21 )
      {
        if ( *(_DWORD *)(v21 + 16) == eventId && (*(_DWORD *)(v21 + 20) & 0xFFFFFFFE) == 4 )
        {
          v22 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v22,
            (Il2CppObject *)v11,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
          list = (void *)System_Linq_Enumerable__Any_int__30536520(
                           (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                           (System_Func_TSource__bool__o *)v22,
                           (const MethodInfo_1D1F348 *)Method_System_Linq_Enumerable_Any_int____69502456);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            v23 = *v20;
            if ( !*v20 )
              break;
            v6 = *(unsigned int *)(v23 + 24);
            if ( *(_DWORD *)(v23 + 20) == 4 )
            {
              list = v26;
              if ( !v26 )
                break;
              System_Collections_Generic_List_int___Add(
                v26,
                v6,
                (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
            }
            else
            {
              list = Master_WarQuestSelectionMaster;
              if ( !Master_WarQuestSelectionMaster )
                break;
              list = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       Master_WarQuestSelectionMaster,
                       v6,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v26 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v26,
                *((System_Collections_Generic_IEnumerable_T__o **)list + 5),
                (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_B7769C(list, v6);
  }
LABEL_30:
  list = v26;
  if ( !v26 )
    goto LABEL_32;
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetEventIdListBySvtId(
        EventBonusFilterMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  EventBonusFilterMaster___c__DisplayClass4_0_o *v5; // x20
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_int__o *v8; // x21
  int32_t v9; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v11; // x24
  __int64 v12; // x10
  System_Int32_array *EquipIdList; // x25
  System_Func_int__bool__o *klass; // x26
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *p__9__0; // [xsp+8h] [xbp-58h]

  if ( (byte_438E847 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventBonusFilterEntity_TypeInfo);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__);
    sub_B775C4(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
    byte_438E847 = 1;
  }
  v5 = (EventBonusFilterMaster___c__DisplayClass4_0_o *)sub_B77694(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
  EventBonusFilterMaster___c__DisplayClass4_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_20;
  v5->fields.svtId = svtId;
  v8 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  p__9__0 = (BattleServantConfConponent_o *)&v5->fields.__9__0;
  v9 = 0;
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                                             (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v9 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v9,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v11 = Item;
      v12 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, v7);
        klass = (System_Func_int__bool__o *)p__9__0->klass;
        if ( !p__9__0->klass )
        {
          klass = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            klass,
            (Il2CppObject *)v5,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
          v5->fields.__9__0 = klass;
          sub_B77560(p__9__0, (System_Int32_array **)klass, v15, v16, v17, v18, v19, v20);
        }
        list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)BasicHelper__Any_int__29777580(
                                                                                                 EquipIdList,
                                                                                                 (System_Func_T__bool__o *)klass,
                                                                                                 (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_20;
          System_Collections_Generic_List_int___Add(
            v8,
            (int32_t)v11[1].klass,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    list = this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v8 )
LABEL_20:
    sub_B7769C(list, v7);
  System_Collections_Generic_List_int___Sort(
    v8,
    (const MethodInfo_30E7D08 *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_Int32_array *v5; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  int32_t v10; // w24
  int items_high; // w8
  unsigned int v12; // w9
  _BOOL4 v13; // w8
  int max_length; // w8
  __int64 v15; // x9
  __int64 v16; // x10
  __int64 v18; // x0

  v4 = ignoreExpCard;
  v5 = eventIdList;
  if ( (byte_438E846 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventBonusFilterEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
    byte_438E846 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v5 && *(_QWORD *)&v5->max_length && Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v10,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        eventIdList = (System_Int32_array *)list;
        v16 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (EventBonusFilterEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == EventBonusFilterEntity_TypeInfo )
        {
          items_high = HIDWORD(list->fields.items);
          v12 = items_high - 1;
          v13 = items_high == 3;
          if ( v12 <= 1 && (!v13 || !v4) )
          {
            max_length = v5->max_length;
            if ( max_length >= 1 )
            {
              v15 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v15 >= max_length )
                {
                  v18 = sub_B776C8(list);
                  sub_B77668(v18, 0LL);
                }
                if ( LODWORD(list->fields.items) == v5->m_Items[v15 + 1] )
                  break;
                if ( (int)++v15 >= max_length )
                  goto LABEL_22;
              }
              if ( !v9 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v9,
                (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
      }
LABEL_22:
      if ( ++v10 >= Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v9;
    }
LABEL_24:
    sub_B7769C(list, eventIdList);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v9;
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetOtherEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  const MethodInfo *v6; // x2
  System_Int32_array *TargetEventEquipIdList; // x0
  const MethodInfo *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  System_Int32_array *v10; // x22
  int32_t v11; // w23
  __int64 v12; // x24
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x10
  System_Int32_array **v20; // x1
  void **v21; // x25
  System_Func_int__bool__o *v22; // x26
  System_Int32_array *v23; // x24
  unsigned __int64 v24; // x20
  EventBonusFilterMaster___c__DisplayClass6_1_o *v25; // x25
  System_Func_int__bool__o *v26; // x26
  __int64 v28; // x0
  System_Int32_array *v29; // [xsp+0h] [xbp-60h]
  EventBonusFilterMaster_o *v30; // [xsp+8h] [xbp-58h]

  if ( (byte_438E849 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventBonusFilterEntity_TypeInfo);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__);
    sub_B775C4(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo);
    sub_B775C4(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__);
    sub_B775C4(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo);
    byte_438E849 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v29 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v6);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  v10 = TargetEventEquipIdList;
  v11 = 0;
  v30 = this;
  while ( 1 )
  {
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                     list,
                                                     (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v11 >= (int)TargetEventEquipIdList )
      break;
    v12 = sub_B77694(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo);
    EventBonusFilterMaster___c__DisplayClass6_0___ctor((EventBonusFilterMaster___c__DisplayClass6_0_o *)v12, 0LL);
    TargetEventEquipIdList = (System_Int32_array *)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_33;
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)TargetEventEquipIdList,
                                                     v11,
                                                     (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v12 )
      goto LABEL_33;
    if ( TargetEventEquipIdList
      && (v19 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
          *(&TargetEventEquipIdList->obj.klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
    {
      if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[v19 - 1] == EventBonusFilterEntity_TypeInfo )
        v20 = (System_Int32_array **)TargetEventEquipIdList;
      else
        v20 = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    *(_QWORD *)(v12 + 16) = v20;
    v21 = (void **)(v12 + 16);
    sub_B77560((BattleServantConfConponent_o *)(v12 + 16), v20, v13, v14, v15, v16, v17, v18);
    TargetEventEquipIdList = *(System_Int32_array **)(v12 + 16);
    if ( TargetEventEquipIdList )
    {
      if ( v29 )
      {
        v22 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v22,
          (Il2CppObject *)v12,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
        TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__29777580(
                                                         v29,
                                                         (System_Func_T__bool__o *)v22,
                                                         (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304);
        if ( ((unsigned __int8)TargetEventEquipIdList & 1) != 0 )
          goto LABEL_29;
        TargetEventEquipIdList = (System_Int32_array *)*v21;
        if ( !*v21 )
          goto LABEL_33;
      }
      TargetEventEquipIdList = EventBonusFilterEntity__GetEquipIdList(
                                 (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                 v8);
      if ( !TargetEventEquipIdList )
        goto LABEL_33;
      v23 = TargetEventEquipIdList;
      if ( (int)TargetEventEquipIdList->max_length >= 1 )
      {
        v24 = 0LL;
        while ( 1 )
        {
          v25 = (EventBonusFilterMaster___c__DisplayClass6_1_o *)sub_B77694(EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo);
          EventBonusFilterMaster___c__DisplayClass6_1___ctor(v25, 0LL);
          if ( v24 >= v23->max_length )
          {
            v28 = sub_B776C8(TargetEventEquipIdList);
            sub_B77668(v28, 0LL);
          }
          if ( !v25 )
            break;
          v25->fields.id = v23->m_Items[v24 + 1];
          if ( !v10
            || (v26 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v26,
                  (Il2CppObject *)v25,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__),
                TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__29777580(
                                                                 v10,
                                                                 (System_Func_T__bool__o *)v26,
                                                                 (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304),
                ((unsigned __int8)TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v5 )
              break;
            TargetEventEquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                             v5,
                                                             v25->fields.id,
                                                             (const MethodInfo_30E6E60 *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
              System_Collections_Generic_List_int___Add(
                v5,
                v25->fields.id,
                (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( (__int64)++v24 >= (int)v23->max_length )
            goto LABEL_29;
        }
LABEL_33:
        sub_B7769C(TargetEventEquipIdList, v8);
      }
    }
LABEL_29:
    this = v30;
    ++v11;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v30->fields.list;
    if ( !list )
      goto LABEL_33;
  }
  if ( !v5 )
    goto LABEL_33;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetTargetEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Int32_array *EquipIdList; // x0
  __int64 v10; // x1
  System_Int32_array *v11; // x20
  __int64 v12; // x8
  unsigned __int64 v13; // x25
  int32_t v14; // w21
  const MethodInfo *v15; // x1
  __int64 v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438E848 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438E848 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( eventIdList )
  {
    FilterList = EventBonusFilterMaster__GetFilterList(this, eventIdList, 0, v8);
    if ( !FilterList )
      goto LABEL_23;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FilterList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v19.fields.current )
        sub_B7769C(0LL, v15);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v19.fields.current, v15);
      v11 = EquipIdList;
      if ( !EquipIdList )
        sub_B7769C(0LL, v10);
      v12 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = 0LL;
        do
        {
          if ( v13 >= (unsigned int)v12 )
          {
            v17 = sub_B776C8(EquipIdList);
            sub_B77668(v17, 0LL);
          }
          if ( !v5 )
            sub_B7769C(EquipIdList, v10);
          v14 = v11->m_Items[v13 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v5,
                                                v14,
                                                (const MethodInfo_30E6E60 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
            System_Collections_Generic_List_int___Add(
              v5,
              v14,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v12) = v11->max_length;
          ++v13;
        }
        while ( (__int64)v13 < (int)v12 );
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v5 )
LABEL_23:
    sub_B7769C(FilterList, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_438E844 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
    byte_438E844 = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&value);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4388617 & 1) == 0 )
  {
    sub_B775C4(&EventBonusFilterMaster___c_TypeInfo);
    byte_4388617 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventBonusFilterMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, x);
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
    sub_B7769C(this, x);
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
    sub_B7769C(this, eventId);
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
    sub_B7769C(this, value);
  return e->fields.value == value;
}