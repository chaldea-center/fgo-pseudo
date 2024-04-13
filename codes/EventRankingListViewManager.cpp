void __fastcall EventRankingListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E9F & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewManager_TypeInfo, v1, v2, v3);
    byte_42E8E9F = 1;
  }
  EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
  EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void __fastcall EventRankingListViewManager___ctor(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventRankingListViewManager__CloseItemDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E8E9B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v4, v5, v6);
    byte_42E8E9B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E8E9C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E8E9C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int64_t Instance; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v70; // x1
  EventPointGroupEntity_array *EntityList; // x28
  const MethodInfo *v72; // x3
  EventRaceEntity_o *Entity; // x22
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x24
  signed int max_length; // w8
  unsigned int v77; // w9
  int v78; // w26
  __int64 v79; // x27
  EventPointGroupEntity_o **m_Items; // x20
  __int64 v81; // x26
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct System_Int32_array *giftIds; // x8
  EventPointGroupEntity_o *v89; // x8
  System_Int32_array **name; // x1
  const MethodInfo *v91; // x4
  EventPointGroupEntity_o *v92; // x8
  int32_t groupId; // w3
  EventPointGroupEntity_o *v94; // x8
  struct System_Int64_array *goalPoints; // x8
  TotalEventRaceEntity_o *v96; // x8
  const MethodInfo *v97; // x4
  EventPointGroupEntity_o *v98; // x8
  float GoalRate; // s0
  __int64 v100; // x8
  __int64 v101; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v102; // x19
  EventRankingListViewManager___c_c *v103; // x0
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x19
  Il2CppObject *v106; // x21
  struct EventRankingListViewManager___c_StaticFields *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  unsigned __int64 v114; // x19
  EventRankingRoundItemInfo_o *v115; // x23
  EventRankingListViewItem_o *v116; // x22
  const MethodInfo *v117; // x6
  __int64 v118; // x0
  char v119; // [xsp+8h] [xbp-98h]
  bool v120; // [xsp+Ch] [xbp-94h]
  Il2CppObject *v121; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v122; // [xsp+18h] [xbp-88h]
  EventRaceMaster_o *v123; // [xsp+20h] [xbp-80h]
  System_Int64_array *v125; // [xsp+30h] [xbp-70h]
  __int64 v126; // [xsp+38h] [xbp-68h]
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // [xsp+40h] [xbp-60h]

  if ( (byte_42E8E93 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Comparison_EventRankingRoundItemInfo___ctor__,
      eventId,
      round,
      *(_QWORD *)&mostSupportGroupId);
    sub_B5D5C4(&System_Comparison_EventRankingRoundItemInfo__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventScriptMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, v24, v25, v26);
    sub_B5D5C4(&EventRankingListViewItem_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_EventRankingListViewManager_GoalTimeSort__, v30, v31, v32);
    sub_B5D5C4(&EventRankingRoundItemInfo_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__, v54, v55, v56);
    sub_B5D5C4(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v60, v61, v62);
    sub_B5D5C4(&Method_EventRankingListViewManager___c__CreateList_b__19_0__, v63, v64, v65);
    sub_B5D5C4(&EventRankingListViewManager___c_TypeInfo, v66, v67, v68);
    byte_42E8E93 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_71;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0LL);
  if ( TargetTermRaceEntityList )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_71;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_71;
    v123 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, v72);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v126 = *(_QWORD *)&TargetTermRaceEntityList->max_length;
    v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v75,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v122 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v122,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_71;
    max_length = userSupportPoints->max_length;
    if ( max_length < 1 )
    {
LABEL_17:
      v120 = 0;
    }
    else
    {
      v77 = 0;
      while ( 1 )
      {
        if ( v77 >= max_length )
        {
LABEL_72:
          v118 = sub_B5D6C8(Instance);
          sub_B5D668(v118, 0LL);
        }
        if ( userSupportPoints->m_Items[v77] >= 1 )
          break;
        if ( (int)++v77 >= max_length )
          goto LABEL_17;
      }
      v120 = 1;
    }
    v121 = (Il2CppObject *)this;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v125 = userSupportPoints,
          Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventScriptMaster___),
          v78 = v126,
          !Instance) )
    {
LABEL_71:
      sub_B5D69C(Instance, v70);
    }
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0LL);
    v119 = Instance;
    if ( (int)v126 >= 1 )
    {
      v79 = 0LL;
      m_Items = EntityList->m_Items;
      do
      {
        v81 = sub_B5D694(EventRankingRoundItemInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v81, 0LL);
        if ( !v81 )
          goto LABEL_71;
        *(_DWORD *)(v81 + 16) = eventId;
        if ( !Entity )
          goto LABEL_71;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_71;
        if ( (unsigned int)v79 >= giftIds->max_length )
          goto LABEL_72;
        *(_DWORD *)(v81 + 20) = giftIds->m_Items[v79 + 1];
        if ( !EntityList )
          goto LABEL_71;
        if ( (unsigned int)v79 >= EntityList->max_length )
          goto LABEL_72;
        v89 = m_Items[v79];
        if ( !v89 )
          goto LABEL_71;
        name = (System_Int32_array **)v89->fields.name;
        *(_QWORD *)(v81 + 24) = name;
        sub_B5D560((BattleServantConfConponent_o *)(v81 + 24), name, v82, v83, v84, v85, v86, v87);
        if ( (unsigned int)v79 >= EntityList->max_length )
          goto LABEL_72;
        v92 = m_Items[v79];
        if ( !v92 )
          goto LABEL_71;
        groupId = v92->fields.groupId;
        *(_DWORD *)(v81 + 32) = groupId;
        if ( (unsigned int)v79 >= EntityList->max_length )
          goto LABEL_72;
        v94 = m_Items[v79];
        if ( !v94 )
          goto LABEL_71;
        *(_DWORD *)(v81 + 36) = v94->fields.iconId;
        if ( (unsigned int)v79 >= v125->max_length )
          goto LABEL_72;
        *(_QWORD *)(v81 + 40) = v125->m_Items[v79];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_71;
        if ( (unsigned int)v79 >= goalPoints->max_length )
          goto LABEL_72;
        *(_QWORD *)(v81 + 48) = goalPoints->m_Items[v79];
        if ( (unsigned int)v79 >= TargetTermRaceEntityList->max_length )
          goto LABEL_72;
        v96 = TargetTermRaceEntityList->m_Items[v79];
        if ( !v96 )
          goto LABEL_71;
        *(_QWORD *)(v81 + 56) = v96->fields.totalPoint;
        *(_DWORD *)(v81 + 72) = mostSupportGroupId;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_71;
        Instance = EventRaceResultMaster__GetTargetGoalTime(
                     MasterData_WarQuestSelectionMaster,
                     eventId,
                     round,
                     groupId,
                     v91);
        *(_QWORD *)(v81 + 64) = Instance;
        if ( (unsigned int)v79 >= EntityList->max_length )
          goto LABEL_72;
        v98 = m_Items[v79];
        if ( !v98 )
          goto LABEL_71;
        GoalRate = EventRaceMaster__GetGoalRate(v123, eventId, round, v98->fields.groupId, v97);
        v100 = *(_QWORD *)(v81 + 48);
        v101 = *(_QWORD *)(v81 + 56);
        *(float *)(v81 + 76) = GoalRate;
        if ( v100 <= v101 )
        {
          if ( !v75 )
            goto LABEL_71;
          Instance = (int64_t)v75;
        }
        else
        {
          Instance = (int64_t)v122;
          if ( !v122 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
        v78 = v126;
      }
      while ( (int)++v79 < (int)v126 );
    }
    if ( v75 && v75->fields._size >= 2 )
    {
      v102 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v102,
        v121,
        Method_EventRankingListViewManager_GoalTimeSort__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v75,
        (System_Comparison_T__o *)v102,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    v70 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v122;
    if ( v122 && v122->fields._size >= 2 )
    {
      v103 = EventRankingListViewManager___c_TypeInfo;
      if ( (BYTE3(EventRankingListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo);
        v70 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v122;
        v103 = EventRankingListViewManager___c_TypeInfo;
      }
      static_fields = v103->static_fields;
      _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v103);
          static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        }
        v106 = (Il2CppObject *)static_fields->__9;
        _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__19_0,
          v106,
          Method_EventRankingListViewManager___c__CreateList_b__19_0__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
        v107 = EventRankingListViewManager___c_TypeInfo->static_fields;
        v107->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v107->__9__19_0,
          (System_Int32_array **)_9__19_0,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113);
        v70 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v122;
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v70,
        (System_Comparison_T__o *)_9__19_0,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
      v70 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v122;
    }
    if ( !v75 )
      goto LABEL_71;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v75,
      (System_Collections_Generic_IEnumerable_T__o *)v70,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( v78 >= 1 )
    {
      v114 = 0LL;
      do
      {
        if ( v114 >= (unsigned int)v75->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v115 = (EventRankingRoundItemInfo_o *)v75->fields._items->m_Items[v114++];
        v116 = (EventRankingListViewItem_o *)sub_B5D694(EventRankingListViewItem_TypeInfo);
        EventRankingListViewItem___ctor(v116, v115, v114, v120, v119 & 1, round, v117);
        Instance = (int64_t)v121[11].monitor;
        if ( !Instance )
          goto LABEL_71;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v116,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (__int64)v114 < v78 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v121, -1, 0, -1, 0LL);
  }
}


int32_t __fastcall EventRankingListViewManager__GetAlphaAnimCnt(
        EventRankingListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


EventRankingListViewItem_o *__fastcall EventRankingListViewManager__GetItem(
        EventRankingListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E8E94 & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42E8E94 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (EventRankingListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == EventRankingListViewItem_TypeInfo )
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
    sub_B5D69C(this, x);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x1
  int size; // w21
  __int64 v11; // x22

  if ( (byte_42E8E9E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v5, v6, v7);
    byte_42E8E9E = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      ObjectList = EventRankingListViewManager__get_ObjectList(this, v9);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_EventRankingListViewObject__o *)ObjectList->fields._items->m_Items[v11];
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v9);
      if ( (int)++v11 >= size )
        return;
    }
LABEL_12:
    sub_B5D69C(ObjectList, v9);
  }
}


void __fastcall EventRankingListViewManager__OnClickListView(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
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
  DataManager_o *Item; // x0
  __int64 v34; // x1
  __int64 v35; // x9
  char *monitor; // x8
  unsigned int v37; // w9
  int v38; // w10
  GiftEntity_o *v39; // x20
  int32_t type; // w8
  ItemEntity_o *Entity; // x20
  CommonUI_o *v42; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v43; // x22
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v45; // x22
  __int64 v46; // x0

  if ( (byte_42E8E9A & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventRankingListViewManager_CloseItemDetail__, v15, v16, v17);
    sub_B5D5C4(&Method_EventRankingListViewManager_CloseSvtDetail__, v18, v19, v20);
    sub_B5D5C4(&EventRankingListViewObject_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&SoundManager_TypeInfo, v30, v31, v32);
    byte_42E8E9A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_25;
  v35 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v35
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v35 - 1] != EventRankingListViewObject_TypeInfo )
  {
    Item = (DataManager_o *)sub_B5D990(obj);
    goto LABEL_27;
  }
  Item = (DataManager_o *)EventRankingListViewObject__GetItem(
                            (EventRankingListViewObject_o *)obj,
                            (const MethodInfo *)EventRankingListViewObject_TypeInfo);
  if ( !Item )
    goto LABEL_25;
  monitor = (char *)Item[1].monitor;
  if ( !monitor )
    goto LABEL_25;
  v37 = *((_DWORD *)monitor + 6);
  if ( v37 != 1 )
  {
    v38 = this->fields.alphaAnimCnt % (int)v37;
    if ( v38 < v37 )
    {
      monitor += 8 * v38;
      goto LABEL_14;
    }
LABEL_27:
    v46 = sub_B5D6C8(Item);
    sub_B5D668(v46, 0LL);
  }
LABEL_14:
  v39 = (GiftEntity_o *)*((_QWORD *)monitor + 4);
  if ( !v39 )
    goto LABEL_25;
  type = v39->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v45,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenServantStatusDialog_18176692(Instance, 7, v39, v45, 0LL);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Item,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Item,
                                   v39->fields.objectId,
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v42 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v43 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v43,
          (Il2CppObject *)this,
          Method_EventRankingListViewManager_CloseItemDetail__,
          0LL);
        if ( v42 )
        {
          CommonUI__OpenItemDetailDialog(v42, Entity, v43, 50, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B5D69C(Item, v34);
  }
}


void __fastcall EventRankingListViewManager__OnMoveEnd(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42E8E99 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8E99 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_22;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.castClass)(
          gameObject,
          1LL,
          gameObject->klass[1]._1.declaringType);
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
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_20:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B5D69C(gameObject, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__RequestInto(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v19; // x1
  signed __int64 size; // x23
  System_Collections_Generic_List_EventRankingListViewObject__o *v21; // x20
  unsigned __int64 v22; // x25
  int v23; // w24
  EventRankingListViewObject_o *v24; // x21
  System_Action_o *v25; // x22
  float listInDelay; // s8
  const MethodInfo *v27; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8E98 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventRankingListViewManager_OnMoveEnd__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v14, v15, v16);
    byte_42E8E98 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v17);
  if ( !ObjectList )
LABEL_15:
    sub_B5D69C(ObjectList, v19);
  size = ObjectList->fields._size;
  v21 = ObjectList;
  this->fields.callbackCount = size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v22 = 0LL;
  v23 = 0;
  do
  {
    if ( v22 >= (unsigned int)v21->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v24 = v21->fields._items->m_Items[v22];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v24, 0LL) )
    {
      v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !v24 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v23;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventRankingListViewObject__Init(v24, 4, v25, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v27);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v22;
  }
  while ( (__int64)v22 < size );
  if ( !v23 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v21; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventRankingListViewObject__o *v23; // x21
  int v24; // w24
  __int64 v25; // x25
  unsigned int v26; // w8
  EventRankingListViewObject_o *v27; // x22
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8E97 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_EventRankingListViewManager_OnMoveEnd__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v17, v18, v19);
    byte_42E8E97 = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v23 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v24 = ObjectList->fields._size;
    if ( v24 >= 1 )
    {
      v25 = 0LL;
      v26 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v26 <= (unsigned int)v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v27 = v23->fields._items->m_Items[v25];
        v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
        if ( !v27 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventRankingListViewObject__Init(v27, mode, v28, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v29);
        if ( (int)v25 + 1 >= v24 )
          return;
        v26 = v23->fields._size;
        ++v25;
      }
LABEL_14:
      sub_B5D69C(ObjectList, v21);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventRankingListViewManager__SetMode_25808464(this, mode, v10);
}


void __fastcall EventRankingListViewManager__SetMode_25808464(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x2
  int32_t v10; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E8E96 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11562/*"RequestInto"*/, v6, v7, v8);
    byte_42E8E96 = 1;
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
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
          sub_B5D69C(gameObject, v12);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11562/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v10 = 3;
      goto LABEL_8;
    case 2:
      v10 = 2;
LABEL_8:
      EventRankingListViewManager__RequestListObject(this, v10, 0.0, v9);
      break;
  }
}


void __fastcall EventRankingListViewManager__SetMode_25808792(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventRankingListViewManager__SetMode_25808464(this, mode, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__SetObjectItem(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventRankingListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_42E8E95 & 1) == 0 )
  {
    this = (EventRankingListViewManager_o *)sub_B5D5C4(
                                              &EventRankingListViewObject_TypeInfo,
                                              (_DWORD)obj,
                                              (_DWORD)item,
                                              method);
    byte_42E8E95 = 1;
  }
  if ( !obj
    || (v6 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  initMode = v5->fields.initMode;
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
  int v2; // w2
  __int64 v3; // x3
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  EventRankingListViewManager_c *v7; // x0
  const MethodInfo *v8; // x1
  float realtimeSinceStartup; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v11; // w21
  EventRankingListViewManager_c *v12; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v14; // w21

  if ( (byte_42E8E9D & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8E9D = 1;
  }
  alphaAnimNow = this->fields.alphaAnimNow;
  alphaAnimTgt = this->fields.alphaAnimTgt;
  v7 = EventRankingListViewManager_TypeInfo;
  if ( (BYTE3(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRankingListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewManager_TypeInfo);
    v7 = EventRankingListViewManager_TypeInfo;
  }
  this->fields.alphaAnimNow = alphaAnimNow
                            + (float)((float)(alphaAnimTgt - alphaAnimNow) * v7->static_fields->ALPHA_ANIMATION_SPD);
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
    v11 = alphaAnimCnt + 1;
    this->fields.alphaAnimCnt = alphaAnimCnt + 1;
    v12 = EventRankingListViewManager_TypeInfo;
    if ( (BYTE3(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRankingListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRankingListViewManager_TypeInfo);
      v12 = EventRankingListViewManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v12->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v11 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v14 = this->fields.alphaAnimCnt;
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        ALPHA_ANIM_COUNT_RESET_VAL = EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.alphaAnimCnt = v14 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    EventRankingListViewManager__OnChangeAlphaAnim(this, v8);
  }
}


void __fastcall EventRankingListViewManager__add_callbackFunc2(
        EventRankingListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E8E8F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8E8F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRankingListViewManager_o *)sub_B5D990(v8);
  EventRankingListViewManager__remove_callbackFunc2(v11, v12, v13);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x21

  if ( (byte_42E8E92 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E8E92 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Inequality(
                                                                                         v29,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v29,
                                                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v30 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)EventRankingListViewObject__GetItem(
                                                                                           (EventRankingListViewObject_o *)Component_srcLineSprite,
                                                                                           v25);
        if ( !Component_srcLineSprite )
          break;
        v25 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_23920288(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v30,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
        }
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v23;
}


System_Collections_Generic_List_EventRankingListViewObject__o *__fastcall EventRankingListViewManager__get_ObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21

  if ( (byte_42E8E91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E8E91 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v29,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v23;
}


void __fastcall EventRankingListViewManager__remove_callbackFunc2(
        EventRankingListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E8E90 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8E90 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRankingListViewManager_o *)sub_B5D990(v8);
  EventRankingListViewManager__Update(v11, v12);
}


void __fastcall EventRankingListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5648 & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5648 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventRankingListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRankingListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return System_Single__CompareTo_44563980(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}