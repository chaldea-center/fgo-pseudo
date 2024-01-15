void __fastcall EventRankingListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F60D8 & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewManager_TypeInfo, v1);
    byte_40F60D8 = 1;
  }
  EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall EventRankingListViewManager___ctor(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__CloseItemDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40F60D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F60D4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F60D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F60D5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__CreateList(
        EventRankingListViewManager_o *this,
        int32_t eventId,
        int32_t round,
        int32_t mostSupportGroupId,
        System_Int64_array *userSupportPoints,
        const MethodInfo *method)
{
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  WebViewManager_o *Instance; // x0
  TotalEventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v31; // x0
  EventPointGroupMaster_o *v32; // x0
  EventPointGroupEntity_array *EntityList; // x28
  WebViewManager_o *v34; // x0
  EventRaceMaster_o *v35; // x0
  EventRaceEntity_o *Entity; // x22
  WebViewManager_o *v37; // x0
  EventRaceResultMaster_o *v38; // x25
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int64_t TargetGoalTime; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  signed int max_length; // w8
  unsigned int v52; // w9
  WebViewManager_o *v53; // x0
  EventScriptMaster_o *v54; // x0
  int v55; // w26
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x27
  EventPointGroupEntity_o **m_Items; // x20
  __int64 v62; // x26
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct System_Int32_array *giftIds; // x8
  EventPointGroupEntity_o *v69; // x8
  System_Int32_array **name; // x1
  EventPointGroupEntity_o *v71; // x8
  int32_t groupId; // w3
  EventPointGroupEntity_o *v73; // x8
  struct System_Int64_array *goalPoints; // x8
  TotalEventRaceEntity_o *v75; // x8
  EventPointGroupEntity_o *v76; // x8
  float GoalRate; // s0
  __int64 v78; // x8
  __int64 v79; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v80; // x0
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v81; // x19
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v82; // x1
  EventRankingListViewManager___c_c *v83; // x0
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x19
  Il2CppObject *v86; // x21
  struct EventRankingListViewManager___c_StaticFields *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  unsigned __int64 v98; // x19
  EventRankingRoundItemInfo_o *v99; // x23
  EventRankingListViewItem_o *v100; // x22
  const MethodInfo *v101; // x6
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *monitor; // x0
  bool IsRaceResultFlagged; // [xsp+8h] [xbp-98h]
  bool v104; // [xsp+Ch] [xbp-94h]
  Il2CppObject *v105; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // [xsp+18h] [xbp-88h]
  EventRaceMaster_o *v107; // [xsp+20h] [xbp-80h]
  System_Int64_array *v109; // [xsp+30h] [xbp-70h]
  __int64 v110; // [xsp+38h] [xbp-68h]
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // [xsp+40h] [xbp-60h]

  if ( (byte_40F60CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventRankingRoundItemInfo___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventRankingRoundItemInfo__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventScriptMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, v14);
    sub_B16FFC(&EventRankingListViewItem_TypeInfo, v15);
    sub_B16FFC(&Method_EventRankingListViewManager_GoalTimeSort__, v16);
    sub_B16FFC(&EventRankingRoundItemInfo_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__, v24);
    sub_B16FFC(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&Method_EventRankingListViewManager___c__CreateList_b__19_0__, v27);
    sub_B16FFC(&EventRankingListViewManager___c_TypeInfo, v28);
    byte_40F60CC = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_WarQuestSelectionMaster = (TotalEventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_71;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               MasterData_WarQuestSelectionMaster,
                               eventId,
                               round,
                               0LL);
  if ( TargetTermRaceEntityList )
  {
    v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v31 )
      goto LABEL_71;
    v32 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v31,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !v32 )
      goto LABEL_71;
    EntityList = EventPointGroupMaster__getEntityList(v32, eventId, 0LL);
    v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v34 )
      goto LABEL_71;
    v35 = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v34,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !v35 )
      goto LABEL_71;
    v107 = v35;
    Entity = EventRaceMaster__GetEntity(v35, eventId, round, 0LL);
    v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v37 )
      goto LABEL_71;
    v38 = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v37,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v110 = *(_QWORD *)&TargetTermRaceEntityList->max_length;
    v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo,
                                                                                                    v39,
                                                                                                    v40,
                                                                                                    v41,
                                                                                                    v42);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v43,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo,
                                                                                                     v44,
                                                                                                     v45,
                                                                                                     v46,
                                                                                                     v47);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v106,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_71;
    max_length = userSupportPoints->max_length;
    if ( max_length < 1 )
    {
LABEL_17:
      v104 = 0;
    }
    else
    {
      v52 = 0;
      while ( 1 )
      {
        if ( v52 >= max_length )
        {
LABEL_72:
          sub_B17100(TargetGoalTime, v49, v50);
          sub_B170A0();
        }
        if ( userSupportPoints->m_Items[v52] >= 1 )
          break;
        if ( (int)++v52 >= max_length )
          goto LABEL_17;
      }
      v104 = 1;
    }
    v105 = (Il2CppObject *)this;
    v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v53
      || (v109 = userSupportPoints,
          v54 = (EventScriptMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v53,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventScriptMaster___),
          v55 = v110,
          !v54) )
    {
LABEL_71:
      sub_B170D4();
    }
    IsRaceResultFlagged = EventScriptMaster__IsRaceResultFlagged(v54, eventId, round, 0LL);
    if ( (int)v110 >= 1 )
    {
      v60 = 0LL;
      m_Items = EntityList->m_Items;
      do
      {
        v62 = sub_B170CC(EventRankingRoundItemInfo_TypeInfo, v56, v57, v58, v59);
        System_Object___ctor((Il2CppObject *)v62, 0LL);
        if ( !v62 )
          goto LABEL_71;
        *(_DWORD *)(v62 + 16) = eventId;
        if ( !Entity )
          goto LABEL_71;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_71;
        if ( (unsigned int)v60 >= giftIds->max_length )
          goto LABEL_72;
        *(_DWORD *)(v62 + 20) = giftIds->m_Items[v60 + 1];
        if ( !EntityList )
          goto LABEL_71;
        if ( (unsigned int)v60 >= EntityList->max_length )
          goto LABEL_72;
        v69 = m_Items[v60];
        if ( !v69 )
          goto LABEL_71;
        name = (System_Int32_array **)v69->fields.name;
        *(_QWORD *)(v62 + 24) = name;
        sub_B16F98((BattleServantConfConponent_o *)(v62 + 24), name, v50, v63, v64, v65, v66, v67);
        if ( (unsigned int)v60 >= EntityList->max_length )
          goto LABEL_72;
        v71 = m_Items[v60];
        if ( !v71 )
          goto LABEL_71;
        groupId = v71->fields.groupId;
        *(_DWORD *)(v62 + 32) = groupId;
        if ( (unsigned int)v60 >= EntityList->max_length )
          goto LABEL_72;
        v73 = m_Items[v60];
        if ( !v73 )
          goto LABEL_71;
        *(_DWORD *)(v62 + 36) = v73->fields.iconId;
        if ( (unsigned int)v60 >= v109->max_length )
          goto LABEL_72;
        *(_QWORD *)(v62 + 40) = v109->m_Items[v60];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_71;
        if ( (unsigned int)v60 >= goalPoints->max_length )
          goto LABEL_72;
        *(_QWORD *)(v62 + 48) = goalPoints->m_Items[v60];
        if ( (unsigned int)v60 >= TargetTermRaceEntityList->max_length )
          goto LABEL_72;
        v75 = TargetTermRaceEntityList->m_Items[v60];
        if ( !v75 )
          goto LABEL_71;
        *(_QWORD *)(v62 + 56) = v75->fields.totalPoint;
        *(_DWORD *)(v62 + 72) = mostSupportGroupId;
        if ( !v38 )
          goto LABEL_71;
        TargetGoalTime = EventRaceResultMaster__GetTargetGoalTime(v38, eventId, round, groupId, 0LL);
        *(_QWORD *)(v62 + 64) = TargetGoalTime;
        if ( (unsigned int)v60 >= EntityList->max_length )
          goto LABEL_72;
        v76 = m_Items[v60];
        if ( !v76 )
          goto LABEL_71;
        GoalRate = EventRaceMaster__GetGoalRate(v107, eventId, round, v76->fields.groupId, 0LL);
        v78 = *(_QWORD *)(v62 + 48);
        v79 = *(_QWORD *)(v62 + 56);
        *(float *)(v62 + 76) = GoalRate;
        if ( v78 <= v79 )
        {
          if ( !v43 )
            goto LABEL_71;
          v80 = v43;
        }
        else
        {
          v80 = v106;
          if ( !v106 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v80,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
        v55 = v110;
      }
      while ( (int)++v60 < (int)v110 );
    }
    if ( v43 && v43->fields._size >= 2 )
    {
      v81 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                        System_Comparison_EventRankingRoundItemInfo__TypeInfo,
                                                                        v56,
                                                                        v57,
                                                                        v58,
                                                                        v59);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v81,
        v105,
        Method_EventRankingListViewManager_GoalTimeSort__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v43,
        (System_Comparison_T__o *)v81,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    v82 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v106;
    if ( v106 && v106->fields._size >= 2 )
    {
      v83 = EventRankingListViewManager___c_TypeInfo;
      if ( (BYTE3(EventRankingListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo);
        v82 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v106;
        v83 = EventRankingListViewManager___c_TypeInfo;
      }
      static_fields = v83->static_fields;
      _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v83);
          static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        }
        v86 = (Il2CppObject *)static_fields->__9;
        _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                               System_Comparison_EventRankingRoundItemInfo__TypeInfo,
                                                                               v82,
                                                                               v57,
                                                                               v58,
                                                                               v59);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__19_0,
          v86,
          Method_EventRankingListViewManager___c__CreateList_b__19_0__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
        v87 = EventRankingListViewManager___c_TypeInfo->static_fields;
        v87->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v87->__9__19_0,
          (System_Int32_array **)_9__19_0,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
        v82 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v106;
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v82,
        (System_Comparison_T__o *)_9__19_0,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
      v82 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v106;
    }
    if ( !v43 )
      goto LABEL_71;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v43,
      (System_Collections_Generic_IEnumerable_T__o *)v82,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( v55 >= 1 )
    {
      v98 = 0LL;
      do
      {
        if ( v98 >= (unsigned int)v43->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v99 = (EventRankingRoundItemInfo_o *)v43->fields._items->m_Items[v98++];
        v100 = (EventRankingListViewItem_o *)sub_B170CC(EventRankingListViewItem_TypeInfo, v94, v95, v96, v97);
        EventRankingListViewItem___ctor(v100, v99, v98, v104, IsRaceResultFlagged, round, v101);
        monitor = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v105[11].monitor;
        if ( !monitor )
          goto LABEL_71;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          monitor,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (__int64)v98 < v55 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v105, -1, 0, -1, 0LL);
  }
}


int32_t __fastcall EventRankingListViewManager__GetAlphaAnimCnt(
        EventRankingListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


// local variable allocation has failed, the output may be wrong!
EventRankingListViewItem_o *__fastcall EventRankingListViewManager__GetItem(
        EventRankingListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40F60CD & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40F60CD = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (EventRankingListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == EventRankingListViewItem_TypeInfo )
    return (EventRankingListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


int32_t __fastcall EventRankingListViewManager__GoalTimeSort(
        EventRankingListViewManager_o *this,
        EventRankingRoundItemInfo_o *x,
        EventRankingRoundItemInfo_o *y,
        const MethodInfo *method)
{
  int64_t goalTime; // x8
  int64_t v5; // x9

  if ( !x || !y )
    sub_B170D4();
  goalTime = x->fields.goalTime;
  v5 = y->fields.goalTime;
  if ( goalTime > v5 )
    return 1;
  if ( goalTime < v5 )
    return -1;
  return x->fields.groupId - y->fields.groupId;
}


void __fastcall EventRankingListViewManager__OnChangeAlphaAnim(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  __int64 v7; // x22
  System_Collections_Generic_List_EventRankingListViewObject__o *v8; // x0
  const MethodInfo *v9; // x1
  EventRankingListViewObject_o *v10; // x0

  if ( (byte_40F60D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v3);
    byte_40F60D7 = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = EventRankingListViewManager__get_ObjectList(this, v5);
      if ( !v8 )
        break;
      if ( v8->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v10 = v8->fields._items->m_Items[v7];
      if ( !v10 )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim(v10, v9);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall EventRankingListViewManager__OnClickListView(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
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
  __int64 v14; // x9
  EventRankingListViewItem_o *Item; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct GiftEntity_array *giftEntityList; // x8
  unsigned int max_length; // w9
  int v20; // w10
  GiftEntity_o *v21; // x20
  int32_t type; // w8
  WebViewManager_o *v23; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *Entity; // x20
  CommonUI_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v31; // x22
  CommonUI_o *Instance; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  ServantStatusDialog_EndDelegate_o *v37; // x22

  if ( (byte_40F60D3 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B16FFC(&Method_EventRankingListViewManager_CloseItemDetail__, v8);
    sub_B16FFC(&Method_EventRankingListViewManager_CloseSvtDetail__, v9);
    sub_B16FFC(&EventRankingListViewObject_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    byte_40F60D3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_25;
  v14 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != EventRankingListViewObject_TypeInfo )
  {
    Item = (EventRankingListViewItem_o *)sub_B173C8(obj);
    goto LABEL_27;
  }
  Item = EventRankingListViewObject__GetItem(
           (EventRankingListViewObject_o *)obj,
           (const MethodInfo *)EventRankingListViewObject_TypeInfo);
  if ( !Item )
    goto LABEL_25;
  giftEntityList = Item->fields.giftEntityList;
  if ( !giftEntityList )
    goto LABEL_25;
  max_length = giftEntityList->max_length;
  if ( max_length != 1 )
  {
    v20 = this->fields.alphaAnimCnt % (int)max_length;
    if ( v20 < max_length )
    {
      giftEntityList = (struct GiftEntity_array *)((char *)giftEntityList + 8 * v20);
      goto LABEL_14;
    }
LABEL_27:
    sub_B17100(Item, v16, v17);
    sub_B170A0();
  }
LABEL_14:
  v21 = giftEntityList->m_Items[0];
  if ( !v21 )
    goto LABEL_25;
  type = v21->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v37 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v33, v34, v35, v36);
    ServantStatusDialog_EndDelegate___ctor(
      v37,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenServantStatusDialog_18212288(Instance, 7, v21, v37, 0LL);
  }
  else if ( type == 2 )
  {
    v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v23 )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)v23,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   v21->fields.objectId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v26 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v27,
                                                          v28,
                                                          v29,
                                                          v30);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v31,
          (Il2CppObject *)this,
          Method_EventRankingListViewManager_CloseItemDetail__,
          0LL);
        if ( v26 )
        {
          CommonUI__OpenItemDetailDialog(v26, Entity, v31, 50, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
}


void __fastcall EventRankingListViewManager__OnMoveEnd(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40F60D2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F60D2 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v13 = this->fields.scrollView;
        if ( !v13 )
          goto LABEL_22;
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_20;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
        goto LABEL_20;
      v15 = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( v15 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_20:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__RequestInto(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  signed __int64 size; // x23
  System_Collections_Generic_List_EventRankingListViewObject__o *v10; // x20
  unsigned __int64 v11; // x25
  int v12; // w24
  EventRankingListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  float listInDelay; // s8
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F60D1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventRankingListViewManager_OnMoveEnd__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v5);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v6);
    byte_40F60D1 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B170D4();
  size = ObjectList->fields._size;
  v10 = ObjectList;
  this->fields.callbackCount = size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)v10->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = v10->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventRankingListViewObject__Init(v13, 4, v18, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v20);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__RequestListObject(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t size; // w8
  System_Collections_Generic_List_EventRankingListViewObject__o *v17; // x21
  int v18; // w24
  __int64 v19; // x25
  unsigned int v20; // w8
  EventRankingListViewObject_o *v21; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F60D0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_EventRankingListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v9);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v10);
    byte_40F60D0 = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v17 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v18 = ObjectList->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      v20 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v20 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v21 = v17->fields._items->m_Items[v19];
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
        if ( !v21 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventRankingListViewObject__Init(v21, mode, v22, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v23);
        if ( (int)v19 + 1 >= v18 )
          return;
        v20 = v17->fields._size;
        ++v19;
      }
LABEL_14:
      sub_B170D4();
    }
  }
}


void __fastcall EventRankingListViewManager__ResetAlphaAnimTime(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.alphaAnimNow = _D0;
  this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
}


void __fastcall EventRankingListViewManager__SetMode(
        EventRankingListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventRankingListViewManager__SetMode_17457172(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__SetMode_17457172(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F60CF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&StringLiteral_11393/*"RequestInto"*/, v5);
    byte_40F60CF = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  switch ( mode )
  {
    case 1:
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
      {
        v9 = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !v9 || (gameObject = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL )
          sub_B170D4();
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11393/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v7 = 3;
      goto LABEL_8;
    case 2:
      v7 = 2;
LABEL_8:
      EventRankingListViewManager__RequestListObject(this, v7, 0.0, v6);
      break;
  }
}


void __fastcall EventRankingListViewManager__SetMode_17457500(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventRankingListViewManager__SetMode_17457172(this, mode, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__SetObjectItem(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  if ( (byte_40F60CE & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewObject_TypeInfo, obj);
    byte_40F60CE = 1;
  }
  if ( !obj
    || (v6 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 3 )
    v12 = 3;
  else
    v12 = 2;
  EventRankingListViewObject__Init(
    (EventRankingListViewObject_o *)obj,
    v12,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&v9,
    v8);
}


void __fastcall EventRankingListViewManager__Update(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  EventRankingListViewManager__UpdateAnim(this, v3);
}


void __fastcall EventRankingListViewManager__UpdateAnim(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  EventRankingListViewManager_c *v5; // x0
  const MethodInfo *v6; // x1
  float realtimeSinceStartup; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v9; // w21
  EventRankingListViewManager_c *v10; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v12; // w21

  if ( (byte_40F60D6 & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewManager_TypeInfo, method);
    byte_40F60D6 = 1;
  }
  alphaAnimNow = this->fields.alphaAnimNow;
  alphaAnimTgt = this->fields.alphaAnimTgt;
  v5 = EventRankingListViewManager_TypeInfo;
  if ( (BYTE3(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRankingListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewManager_TypeInfo);
    v5 = EventRankingListViewManager_TypeInfo;
  }
  this->fields.alphaAnimNow = alphaAnimNow
                            + (float)((float)(alphaAnimTgt - alphaAnimNow) * v5->static_fields->ALPHA_ANIMATION_SPD);
  if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.alphaAnimTimeOld) >= EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL )
  {
    this->fields.alphaAnimTgt = 0.0;
    this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  }
  if ( this->fields.alphaAnimTgt <= 0.0 && this->fields.alphaAnimNow <= 0.01 )
  {
    *(_QWORD *)&this->fields.alphaAnimNow = 0x3F80000000000000LL;
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimCnt = this->fields.alphaAnimCnt;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    v9 = alphaAnimCnt + 1;
    this->fields.alphaAnimCnt = alphaAnimCnt + 1;
    v10 = EventRankingListViewManager_TypeInfo;
    if ( (BYTE3(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRankingListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRankingListViewManager_TypeInfo);
      v10 = EventRankingListViewManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v10->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v9 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v12 = this->fields.alphaAnimCnt;
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        ALPHA_ANIM_COUNT_RESET_VAL = EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.alphaAnimCnt = v12 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    EventRankingListViewManager__OnChangeAlphaAnim(this, v6);
  }
}


void __fastcall EventRankingListViewManager__add_callbackFunc2(
        EventRankingListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventRankingListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F60C8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F60C8 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_B173C8(v7);
  EventRankingListViewManager__remove_callbackFunc2(v10, v11, v12);
}


float __fastcall EventRankingListViewManager__get_AlphaAnimNow(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


System_Collections_Generic_List_EventRankingListViewObject__o *__fastcall EventRankingListViewManager__get_ClippingObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  EventRankingListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40F60CB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F60CB = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRankingListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (EventRankingListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v16,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
        Item = (ListViewItem_o *)EventRankingListViewObject__GetItem(Component_srcLineSprite, v18);
        if ( !Item )
          break;
        if ( !Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            v19,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
        }
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v12;
}


System_Collections_Generic_List_EventRankingListViewObject__o *__fastcall EventRankingListViewManager__get_ObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40F60CA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F60CA = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRankingListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v16,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v12;
}


void __fastcall EventRankingListViewManager__remove_callbackFunc2(
        EventRankingListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventRankingListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40F60C9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F60C9 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_B173C8(v7);
  EventRankingListViewManager__Update(v10, v11);
}


void __fastcall EventRankingListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7024 & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewManager___c_TypeInfo, v1);
    byte_40F7024 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventRankingListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventRankingListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventRankingListViewManager___c___ctor(
        EventRankingListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRankingListViewManager___c___CreateList_b__19_0(
        EventRankingListViewManager___c_o *this,
        EventRankingRoundItemInfo_o *a,
        EventRankingRoundItemInfo_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  if ( !b || !a )
    sub_B170D4();
  return System_Single__CompareTo_43729924(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}