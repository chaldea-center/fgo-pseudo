void __fastcall EventBonusFilterMaster___ctor(EventBonusFilterMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB8BD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB8BD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    275,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string___ctor__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetBonusSkillFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x21
  int32_t v54; // w23
  __int64 v55; // x24
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x10
  System_Int32_array **v63; // x1
  System_Func_int__bool__o *v64; // x26
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v67; // x20
  struct EventBonusFilterMaster___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7

  if ( (byte_42EB8C2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)eventIdList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventBonusFilterEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventBonusFilterEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int____68844208, v15, v16, v17);
    sub_B5D5C4(&EventBonusFilterEntity_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__, v39, v40, v41);
    sub_B5D5C4(&Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__, v42, v43, v44);
    sub_B5D5C4(&EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&EventBonusFilterMaster___c_TypeInfo, v48, v49, v50);
    byte_42EB8C2 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( eventIdList && *(_QWORD *)&eventIdList->max_length )
  {
    if ( Count >= 1 )
    {
      v54 = 0;
      while ( 1 )
      {
        v55 = sub_B5D694(EventBonusFilterMaster___c__DisplayClass7_0_TypeInfo);
        EventBonusFilterMaster___c__DisplayClass7_0___ctor((EventBonusFilterMaster___c__DisplayClass7_0_o *)v55, 0LL);
        list = this->fields.list;
        if ( !list )
          break;
        list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 v54,
                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v55 )
          break;
        if ( list
          && (v62 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v62) )
        {
          if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v62 - 8) == EventBonusFilterEntity_TypeInfo )
            v63 = (System_Int32_array **)list;
          else
            v63 = 0LL;
        }
        else
        {
          v63 = 0LL;
        }
        *(_QWORD *)(v55 + 16) = v63;
        sub_B5D560((BattleServantConfConponent_o *)(v55 + 16), v63, v56, v57, v58, v59, v60, v61);
        if ( *(_QWORD *)(v55 + 16) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v55 + 16) + 20LL) & 0xFFFFFFFE) == 4 )
          {
            v64 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v64,
              (Il2CppObject *)v55,
              Method_EventBonusFilterMaster___c__DisplayClass7_0__GetBonusSkillFilterList_b__1__,
              (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
            list = (void *)System_Linq_Enumerable__Any_int__29992412(
                             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                             (System_Func_TSource__bool__o *)v64,
                             (const MethodInfo_1C9A5DC *)Method_System_Linq_Enumerable_Any_int____68844208);
            if ( ((unsigned __int8)list & 1) != 0 )
            {
              if ( !v53 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v53,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(v55 + 16),
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
        if ( ++v54 >= Count )
          goto LABEL_22;
      }
LABEL_33:
      sub_B5D69C(list, eventIdList);
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
      v67 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventBonusFilterEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__7_0,
        v67,
        Method_EventBonusFilterMaster___c__GetBonusSkillFilterList_b__7_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
      v68 = EventBonusFilterMaster___c_TypeInfo->static_fields;
      v68->__9__7_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__7_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v68->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74);
    }
    if ( !v53 )
      goto LABEL_33;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v53,
      (System_Comparison_T__o *)_9__7_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v53;
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

  if ( (byte_42EB8BB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__,
      eventId,
      type,
      *(_QWORD *)&value);
    byte_42EB8BB = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&priority);
  return (EventBonusFilterEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__GetEntity__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetEventBonusSkillIds(
        EventBonusFilterMaster_o *this,
        int32_t eventId,
        System_Int32_array *objectValues,
        const MethodInfo *method)
{
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  __int64 v51; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v54; // w24
  int32_t v55; // w25
  __int64 v56; // x26
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x10
  System_Int32_array **v64; // x1
  __int64 *v65; // x27
  __int64 v66; // x8
  System_Func_int__bool__o *v67; // x28
  __int64 v68; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v71; // [xsp+10h] [xbp-60h]

  if ( (byte_42EB8C3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)objectValues,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int____68844208, v18, v19, v20);
    sub_B5D5C4(&EventBonusFilterEntity_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__, v45, v46, v47);
    sub_B5D5C4(&EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo, v48, v49, v50);
    byte_42EB8C3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
  v71 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v71,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v54 = Count;
    v55 = 0;
    while ( 1 )
    {
      v56 = sub_B5D694(EventBonusFilterMaster___c__DisplayClass8_0_TypeInfo);
      EventBonusFilterMaster___c__DisplayClass8_0___ctor((EventBonusFilterMaster___c__DisplayClass8_0_o *)v56, 0LL);
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v55,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v56 )
        break;
      if ( list
        && (v63 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v63) )
      {
        if ( *(EventBonusFilterEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v63 - 8) == EventBonusFilterEntity_TypeInfo )
          v64 = (System_Int32_array **)list;
        else
          v64 = 0LL;
      }
      else
      {
        v64 = 0LL;
      }
      *(_QWORD *)(v56 + 16) = v64;
      v65 = (__int64 *)(v56 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v56 + 16), v64, v57, v58, v59, v60, v61, v62);
      v66 = *(_QWORD *)(v56 + 16);
      if ( v66 )
      {
        if ( *(_DWORD *)(v66 + 16) == eventId && (*(_DWORD *)(v66 + 20) & 0xFFFFFFFE) == 4 )
        {
          v67 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v67,
            (Il2CppObject *)v56,
            Method_EventBonusFilterMaster___c__DisplayClass8_0__GetEventBonusSkillIds_b__0__,
            (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
          list = (void *)System_Linq_Enumerable__Any_int__29992412(
                           (System_Collections_Generic_IEnumerable_TSource__o *)objectValues,
                           (System_Func_TSource__bool__o *)v67,
                           (const MethodInfo_1C9A5DC *)Method_System_Linq_Enumerable_Any_int____68844208);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            v68 = *v65;
            if ( !*v65 )
              break;
            v51 = *(unsigned int *)(v68 + 24);
            if ( *(_DWORD *)(v68 + 20) == 4 )
            {
              list = v71;
              if ( !v71 )
                break;
              System_Collections_Generic_List_int___Add(
                v71,
                v51,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            }
            else
            {
              list = Master_WarQuestSelectionMaster;
              if ( !Master_WarQuestSelectionMaster )
                break;
              list = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       Master_WarQuestSelectionMaster,
                       v51,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
              if ( !list || !v71 )
                break;
              System_Collections_Generic_List_int___AddRange(
                v71,
                *((System_Collections_Generic_IEnumerable_T__o **)list + 5),
                (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
            }
          }
        }
      }
      if ( ++v55 >= v54 )
        goto LABEL_30;
    }
LABEL_32:
    sub_B5D69C(list, v51);
  }
LABEL_30:
  list = v71;
  if ( !v71 )
    goto LABEL_32;
  return System_Collections_Generic_List_int___ToArray(
           v71,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetEventIdListBySvtId(
        EventBonusFilterMaster_o *this,
        int32_t svtId,
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  EventBonusFilterMaster___c__DisplayClass4_0_o *v42; // x20
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  const MethodInfo *v44; // x1
  System_Collections_Generic_List_int__o *v45; // x21
  int32_t v46; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v48; // x24
  __int64 v49; // x10
  System_Int32_array *EquipIdList; // x25
  System_Func_int__bool__o *klass; // x26
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  BattleServantConfConponent_o *p__9__0; // [xsp+8h] [xbp-58h]

  if ( (byte_42EB8BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&EventBonusFilterEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__, v36, v37, v38);
    sub_B5D5C4(&EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo, v39, v40, v41);
    byte_42EB8BF = 1;
  }
  v42 = (EventBonusFilterMaster___c__DisplayClass4_0_o *)sub_B5D694(EventBonusFilterMaster___c__DisplayClass4_0_TypeInfo);
  EventBonusFilterMaster___c__DisplayClass4_0___ctor(v42, 0LL);
  if ( !v42 )
    goto LABEL_20;
  v42->fields.svtId = svtId;
  v45 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  p__9__0 = (BattleServantConfConponent_o *)&v42->fields.__9__0;
  v46 = 0;
  while ( 1 )
  {
    list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                                             (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v46 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v46,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v48 = Item;
      v49 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v49
        && (EventBonusFilterEntity_c *)Item->klass->_2.typeHierarchy[v49 - 1] == EventBonusFilterEntity_TypeInfo )
      {
        EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)Item, v44);
        klass = (System_Func_int__bool__o *)p__9__0->klass;
        if ( !p__9__0->klass )
        {
          klass = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            klass,
            (Il2CppObject *)v42,
            Method_EventBonusFilterMaster___c__DisplayClass4_0__GetEventIdListBySvtId_b__0__,
            (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
          v42->fields.__9__0 = klass;
          sub_B5D560(p__9__0, (System_Int32_array **)klass, v52, v53, v54, v55, v56, v57);
        }
        list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)BasicHelper__Any_int__28142236(
                                                                                                 EquipIdList,
                                                                                                 (System_Func_T__bool__o *)klass,
                                                                                                 (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v45 )
            goto LABEL_20;
          System_Collections_Generic_List_int___Add(
            v45,
            (int32_t)v48[1].klass,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
    }
    list = this->fields.list;
    ++v46;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v45 )
LABEL_20:
    sub_B5D69C(list, v44);
  System_Collections_Generic_List_int___Sort(
    v45,
    (const MethodInfo_308632C *)Method_System_Collections_Generic_List_int__Sort__);
  return System_Collections_Generic_List_int___ToArray(
           v45,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_EventBonusFilterEntity__o *__fastcall EventBonusFilterMaster__GetFilterList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
        bool ignoreExpCard,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_Int32_array *v5; // x20
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  int32_t v25; // w24
  int items_high; // w8
  unsigned int v27; // w9
  _BOOL4 v28; // w8
  int max_length; // w8
  __int64 v30; // x9
  __int64 v31; // x10
  __int64 v33; // x0

  v4 = ignoreExpCard;
  v5 = eventIdList;
  if ( (byte_42EB8BE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)eventIdList,
      ignoreExpCard,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventBonusFilterEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo, v19, v20, v21);
    byte_42EB8BE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventBonusFilterEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventBonusFilterEntity___ctor__);
  if ( v5 && *(_QWORD *)&v5->max_length && Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v25,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        eventIdList = (System_Int32_array *)list;
        v31 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v31
          && (EventBonusFilterEntity_c *)list->klass->_2.typeHierarchy[v31 - 1] == EventBonusFilterEntity_TypeInfo )
        {
          items_high = HIDWORD(list->fields.items);
          v27 = items_high - 1;
          v28 = items_high == 3;
          if ( v27 <= 1 && (!v28 || !v4) )
          {
            max_length = v5->max_length;
            if ( max_length >= 1 )
            {
              v30 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v30 >= max_length )
                {
                  v33 = sub_B5D6C8(list);
                  sub_B5D668(v33, 0LL);
                }
                if ( LODWORD(list->fields.items) == v5->m_Items[v30 + 1] )
                  break;
                if ( (int)++v30 >= max_length )
                  goto LABEL_22;
              }
              if ( !v24 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Add__);
            }
          }
        }
      }
LABEL_22:
      if ( ++v25 >= Count )
        return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v24;
    }
LABEL_24:
    sub_B5D69C(list, eventIdList);
  }
  return (System_Collections_Generic_List_EventBonusFilterEntity__o *)v24;
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetOtherEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_Collections_Generic_List_int__o *v48; // x21
  const MethodInfo *v49; // x2
  System_Int32_array *TargetEventEquipIdList; // x0
  const MethodInfo *v51; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  System_Int32_array *v53; // x22
  int32_t v54; // w23
  __int64 v55; // x24
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x10
  System_Int32_array **v63; // x1
  void **v64; // x25
  System_Func_int__bool__o *v65; // x26
  System_Int32_array *v66; // x24
  unsigned __int64 v67; // x20
  EventBonusFilterMaster___c__DisplayClass6_1_o *v68; // x25
  System_Func_int__bool__o *v69; // x26
  __int64 v71; // x0
  System_Int32_array *v72; // [xsp+0h] [xbp-60h]
  EventBonusFilterMaster_o *v73; // [xsp+8h] [xbp-58h]

  if ( (byte_42EB8C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)eventIdList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&EventBonusFilterEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__IndexOf__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__, v36, v37, v38);
    sub_B5D5C4(&EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__, v42, v43, v44);
    sub_B5D5C4(&EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo, v45, v46, v47);
    byte_42EB8C1 = 1;
  }
  v48 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v72 = eventIdList;
  TargetEventEquipIdList = EventBonusFilterMaster__GetTargetEventEquipIdList(this, eventIdList, v49);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  v53 = TargetEventEquipIdList;
  v54 = 0;
  v73 = this;
  while ( 1 )
  {
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                     list,
                                                     (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v54 >= (int)TargetEventEquipIdList )
      break;
    v55 = sub_B5D694(EventBonusFilterMaster___c__DisplayClass6_0_TypeInfo);
    EventBonusFilterMaster___c__DisplayClass6_0___ctor((EventBonusFilterMaster___c__DisplayClass6_0_o *)v55, 0LL);
    TargetEventEquipIdList = (System_Int32_array *)this->fields.list;
    if ( !TargetEventEquipIdList )
      goto LABEL_33;
    TargetEventEquipIdList = (System_Int32_array *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)TargetEventEquipIdList,
                                                     v54,
                                                     (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v55 )
      goto LABEL_33;
    if ( TargetEventEquipIdList
      && (v62 = *(&EventBonusFilterEntity_TypeInfo->_2.bitflags2 + 1),
          *(&TargetEventEquipIdList->obj.klass->_2.bitflags2 + 1) >= (unsigned int)v62) )
    {
      if ( (EventBonusFilterEntity_c *)TargetEventEquipIdList->obj.klass->_2.typeHierarchy[v62 - 1] == EventBonusFilterEntity_TypeInfo )
        v63 = (System_Int32_array **)TargetEventEquipIdList;
      else
        v63 = 0LL;
    }
    else
    {
      v63 = 0LL;
    }
    *(_QWORD *)(v55 + 16) = v63;
    v64 = (void **)(v55 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v55 + 16), v63, v56, v57, v58, v59, v60, v61);
    TargetEventEquipIdList = *(System_Int32_array **)(v55 + 16);
    if ( TargetEventEquipIdList )
    {
      if ( v72 )
      {
        v65 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v65,
          (Il2CppObject *)v55,
          Method_EventBonusFilterMaster___c__DisplayClass6_0__GetOtherEventEquipIdList_b__0__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
        TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__28142236(
                                                         v72,
                                                         (System_Func_T__bool__o *)v65,
                                                         (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
        if ( ((unsigned __int8)TargetEventEquipIdList & 1) != 0 )
          goto LABEL_29;
        TargetEventEquipIdList = (System_Int32_array *)*v64;
        if ( !*v64 )
          goto LABEL_33;
      }
      TargetEventEquipIdList = EventBonusFilterEntity__GetEquipIdList(
                                 (EventBonusFilterEntity_o *)TargetEventEquipIdList,
                                 v51);
      if ( !TargetEventEquipIdList )
        goto LABEL_33;
      v66 = TargetEventEquipIdList;
      if ( (int)TargetEventEquipIdList->max_length >= 1 )
      {
        v67 = 0LL;
        while ( 1 )
        {
          v68 = (EventBonusFilterMaster___c__DisplayClass6_1_o *)sub_B5D694(EventBonusFilterMaster___c__DisplayClass6_1_TypeInfo);
          EventBonusFilterMaster___c__DisplayClass6_1___ctor(v68, 0LL);
          if ( v67 >= v66->max_length )
          {
            v71 = sub_B5D6C8(TargetEventEquipIdList);
            sub_B5D668(v71, 0LL);
          }
          if ( !v68 )
            break;
          v68->fields.id = v66->m_Items[v67 + 1];
          if ( !v53
            || (v69 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v69,
                  (Il2CppObject *)v68,
                  Method_EventBonusFilterMaster___c__DisplayClass6_1__GetOtherEventEquipIdList_b__1__,
                  (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__),
                TargetEventEquipIdList = (System_Int32_array *)BasicHelper__Any_int__28142236(
                                                                 v53,
                                                                 (System_Func_T__bool__o *)v69,
                                                                 (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384),
                ((unsigned __int8)TargetEventEquipIdList & 1) == 0) )
          {
            if ( !v48 )
              break;
            TargetEventEquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                             v48,
                                                             v68->fields.id,
                                                             (const MethodInfo_3085484 *)Method_System_Collections_Generic_List_int__IndexOf__);
            if ( (_DWORD)TargetEventEquipIdList == -1 )
              System_Collections_Generic_List_int___Add(
                v48,
                v68->fields.id,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( (__int64)++v67 >= (int)v66->max_length )
            goto LABEL_29;
        }
LABEL_33:
        sub_B5D69C(TargetEventEquipIdList, v51);
      }
    }
LABEL_29:
    this = v73;
    ++v54;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v73->fields.list;
    if ( !list )
      goto LABEL_33;
  }
  if ( !v48 )
    goto LABEL_33;
  return System_Collections_Generic_List_int___ToArray(
           v48,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterMaster__GetTargetEventEquipIdList(
        EventBonusFilterMaster_o *this,
        System_Int32_array *eventIdList,
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
  System_Collections_Generic_List_int__o *v30; // x19
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  System_Int32_array *EquipIdList; // x0
  __int64 v35; // x1
  System_Int32_array *v36; // x20
  __int64 v37; // x8
  unsigned __int64 v38; // x25
  int32_t v39; // w21
  const MethodInfo *v40; // x1
  __int64 v42; // x0
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EB8C0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__,
      (_DWORD)eventIdList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__IndexOf__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v27, v28, v29);
    byte_42EB8C0 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v30 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( eventIdList )
  {
    FilterList = EventBonusFilterMaster__GetFilterList(this, eventIdList, 0, v33);
    if ( !FilterList )
      goto LABEL_23;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v43,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FilterList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__GetEnumerator__);
    v44 = v43;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v44,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__MoveNext__) )
    {
      if ( !v44.fields.current )
        sub_B5D69C(0LL, v40);
      EquipIdList = EventBonusFilterEntity__GetEquipIdList((EventBonusFilterEntity_o *)v44.fields.current, v40);
      v36 = EquipIdList;
      if ( !EquipIdList )
        sub_B5D69C(0LL, v35);
      v37 = *(_QWORD *)&EquipIdList->max_length;
      if ( (int)v37 >= 1 )
      {
        v38 = 0LL;
        do
        {
          if ( v38 >= (unsigned int)v37 )
          {
            v42 = sub_B5D6C8(EquipIdList);
            sub_B5D668(v42, 0LL);
          }
          if ( !v30 )
            sub_B5D69C(EquipIdList, v35);
          v39 = v36->m_Items[v38 + 1];
          EquipIdList = (System_Int32_array *)System_Collections_Generic_List_int___IndexOf(
                                                v30,
                                                v39,
                                                (const MethodInfo_3085484 *)Method_System_Collections_Generic_List_int__IndexOf__);
          if ( (_DWORD)EquipIdList == -1 )
            System_Collections_Generic_List_int___Add(
              v30,
              v39,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v37) = v36->max_length;
          ++v38;
        }
        while ( (__int64)v38 < (int)v37 );
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v44,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventBonusFilterEntity__Dispose__);
  }
  if ( !v30 )
LABEL_23:
    sub_B5D69C(FilterList, v32);
  return System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_42EB8BC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&type);
    byte_42EB8BC = 1;
  }
  PK = EventBonusFilterEntity__CreatePK(eventId, type, value, priority, *(const MethodInfo **)&value);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventBonusFilterMaster__EventBonusFilterEntity__string__TryGetEntity__);
}


void __fastcall EventBonusFilterMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventBonusFilterMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E64EB & 1) == 0 )
  {
    sub_B5D5C4(&EventBonusFilterMaster___c_TypeInfo, v1, v2, v3);
    byte_42E64EB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventBonusFilterMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventBonusFilterMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBonusFilterMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, eventId);
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
    sub_B5D69C(this, value);
  return e->fields.value == value;
}