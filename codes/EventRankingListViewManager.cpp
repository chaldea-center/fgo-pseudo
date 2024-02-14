void __fastcall EventRankingListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4214A30 & 1) == 0 )
  {
    sub_B0D8A4(&EventRankingListViewManager_TypeInfo, v1);
    byte_4214A30 = 1;
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

  if ( (byte_4214A2C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4214A2C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4214A2D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4214A2D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  int64_t Instance; // x0
  EventPointGroupEntity_array *EntityList; // x28
  const MethodInfo *v31; // x3
  EventRaceEntity_o *Entity; // x22
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x25
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  signed int max_length; // w8
  unsigned int v40; // w9
  int v41; // w26
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x27
  EventPointGroupEntity_o **m_Items; // x20
  __int64 v46; // x26
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct System_Int32_array *giftIds; // x8
  EventPointGroupEntity_o *v54; // x8
  System_Int32_array **name; // x1
  const MethodInfo *v56; // x4
  EventPointGroupEntity_o *v57; // x8
  int32_t groupId; // w3
  EventPointGroupEntity_o *v59; // x8
  struct System_Int64_array *goalPoints; // x8
  TotalEventRaceEntity_o *v61; // x8
  const MethodInfo *v62; // x4
  EventPointGroupEntity_o *v63; // x8
  float GoalRate; // s0
  __int64 v65; // x8
  __int64 v66; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v67; // x19
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v68; // x1
  EventRankingListViewManager___c_c *v69; // x0
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x19
  Il2CppObject *v72; // x21
  struct EventRankingListViewManager___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x2
  unsigned __int64 v82; // x19
  EventRankingRoundItemInfo_o *v83; // x23
  EventRankingListViewItem_o *v84; // x22
  const MethodInfo *v85; // x6
  __int64 v86; // x0
  char v87; // [xsp+8h] [xbp-98h]
  bool v88; // [xsp+Ch] [xbp-94h]
  Il2CppObject *v89; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v90; // [xsp+18h] [xbp-88h]
  EventRaceMaster_o *v91; // [xsp+20h] [xbp-80h]
  System_Int64_array *v93; // [xsp+30h] [xbp-70h]
  __int64 v94; // [xsp+38h] [xbp-68h]
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // [xsp+40h] [xbp-60h]

  if ( (byte_4214A24 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventRankingRoundItemInfo___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_EventRankingRoundItemInfo__TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventScriptMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, v14);
    sub_B0D8A4(&EventRankingListViewItem_TypeInfo, v15);
    sub_B0D8A4(&Method_EventRankingListViewManager_GoalTimeSort__, v16);
    sub_B0D8A4(&EventRankingRoundItemInfo_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B0D8A4(&Method_EventRankingListViewManager___c__CreateList_b__19_0__, v27);
    sub_B0D8A4(&EventRankingListViewManager___c_TypeInfo, v28);
    byte_4214A24 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_71;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0LL);
  if ( TargetTermRaceEntityList )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_71;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_71;
    v91 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, v31);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v94 = *(_QWORD *)&TargetTermRaceEntityList->max_length;
    v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo,
                                                                                                    v34,
                                                                                                    v35);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v36,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo,
                                                                                                    v37,
                                                                                                    v38);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v90,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_71;
    max_length = userSupportPoints->max_length;
    if ( max_length < 1 )
    {
LABEL_17:
      v88 = 0;
    }
    else
    {
      v40 = 0;
      while ( 1 )
      {
        if ( v40 >= max_length )
        {
LABEL_72:
          v86 = sub_B0D9A8(Instance);
          sub_B0D948(v86, 0LL);
        }
        if ( userSupportPoints->m_Items[v40] >= 1 )
          break;
        if ( (int)++v40 >= max_length )
          goto LABEL_17;
      }
      v88 = 1;
    }
    v89 = (Il2CppObject *)this;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v93 = userSupportPoints,
          Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventScriptMaster___),
          v41 = v94,
          !Instance) )
    {
LABEL_71:
      sub_B0D97C(Instance);
    }
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0LL);
    v87 = Instance;
    if ( (int)v94 >= 1 )
    {
      v44 = 0LL;
      m_Items = EntityList->m_Items;
      do
      {
        v46 = sub_B0D974(EventRankingRoundItemInfo_TypeInfo, v42, v43);
        System_Object___ctor((Il2CppObject *)v46, 0LL);
        if ( !v46 )
          goto LABEL_71;
        *(_DWORD *)(v46 + 16) = eventId;
        if ( !Entity )
          goto LABEL_71;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_71;
        if ( (unsigned int)v44 >= giftIds->max_length )
          goto LABEL_72;
        *(_DWORD *)(v46 + 20) = giftIds->m_Items[v44 + 1];
        if ( !EntityList )
          goto LABEL_71;
        if ( (unsigned int)v44 >= EntityList->max_length )
          goto LABEL_72;
        v54 = m_Items[v44];
        if ( !v54 )
          goto LABEL_71;
        name = (System_Int32_array **)v54->fields.name;
        *(_QWORD *)(v46 + 24) = name;
        sub_B0D840((BattleServantConfConponent_o *)(v46 + 24), name, v47, v48, v49, v50, v51, v52);
        if ( (unsigned int)v44 >= EntityList->max_length )
          goto LABEL_72;
        v57 = m_Items[v44];
        if ( !v57 )
          goto LABEL_71;
        groupId = v57->fields.groupId;
        *(_DWORD *)(v46 + 32) = groupId;
        if ( (unsigned int)v44 >= EntityList->max_length )
          goto LABEL_72;
        v59 = m_Items[v44];
        if ( !v59 )
          goto LABEL_71;
        *(_DWORD *)(v46 + 36) = v59->fields.iconId;
        if ( (unsigned int)v44 >= v93->max_length )
          goto LABEL_72;
        *(_QWORD *)(v46 + 40) = v93->m_Items[v44];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_71;
        if ( (unsigned int)v44 >= goalPoints->max_length )
          goto LABEL_72;
        *(_QWORD *)(v46 + 48) = goalPoints->m_Items[v44];
        if ( (unsigned int)v44 >= TargetTermRaceEntityList->max_length )
          goto LABEL_72;
        v61 = TargetTermRaceEntityList->m_Items[v44];
        if ( !v61 )
          goto LABEL_71;
        *(_QWORD *)(v46 + 56) = v61->fields.totalPoint;
        *(_DWORD *)(v46 + 72) = mostSupportGroupId;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_71;
        Instance = EventRaceResultMaster__GetTargetGoalTime(
                     MasterData_WarQuestSelectionMaster,
                     eventId,
                     round,
                     groupId,
                     v56);
        *(_QWORD *)(v46 + 64) = Instance;
        if ( (unsigned int)v44 >= EntityList->max_length )
          goto LABEL_72;
        v63 = m_Items[v44];
        if ( !v63 )
          goto LABEL_71;
        GoalRate = EventRaceMaster__GetGoalRate(v91, eventId, round, v63->fields.groupId, v62);
        v65 = *(_QWORD *)(v46 + 48);
        v66 = *(_QWORD *)(v46 + 56);
        *(float *)(v46 + 76) = GoalRate;
        if ( v65 <= v66 )
        {
          if ( !v36 )
            goto LABEL_71;
          Instance = (int64_t)v36;
        }
        else
        {
          Instance = (int64_t)v90;
          if ( !v90 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
        v41 = v94;
      }
      while ( (int)++v44 < (int)v94 );
    }
    if ( v36 && v36->fields._size >= 2 )
    {
      v67 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                        System_Comparison_EventRankingRoundItemInfo__TypeInfo,
                                                                        v42,
                                                                        v43);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v67,
        v89,
        Method_EventRankingListViewManager_GoalTimeSort__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36,
        (System_Comparison_T__o *)v67,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    v68 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v90;
    if ( v90 && v90->fields._size >= 2 )
    {
      v69 = EventRankingListViewManager___c_TypeInfo;
      if ( (BYTE3(EventRankingListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo);
        v68 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v90;
        v69 = EventRankingListViewManager___c_TypeInfo;
      }
      static_fields = v69->static_fields;
      _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v69);
          static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        }
        v72 = (Il2CppObject *)static_fields->__9;
        _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                               System_Comparison_EventRankingRoundItemInfo__TypeInfo,
                                                                               v68,
                                                                               v43);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__19_0,
          v72,
          Method_EventRankingListViewManager___c__CreateList_b__19_0__,
          (const MethodInfo_2412E90 *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
        v73 = EventRankingListViewManager___c_TypeInfo->static_fields;
        v73->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v73->__9__19_0,
          (System_Int32_array **)_9__19_0,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
        v68 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v90;
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v68,
        (System_Comparison_T__o *)_9__19_0,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
      v68 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v90;
    }
    if ( !v36 )
      goto LABEL_71;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
      (System_Collections_Generic_IEnumerable_T__o *)v68,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( v41 >= 1 )
    {
      v82 = 0LL;
      do
      {
        if ( v82 >= (unsigned int)v36->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v83 = (EventRankingRoundItemInfo_o *)v36->fields._items->m_Items[v82++];
        v84 = (EventRankingListViewItem_o *)sub_B0D974(EventRankingListViewItem_TypeInfo, v80, v81);
        EventRankingListViewItem___ctor(v84, v83, v82, v88, v87 & 1, round, v85);
        Instance = (int64_t)v89[11].monitor;
        if ( !Instance )
          goto LABEL_71;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (__int64)v82 < v41 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v89, -1, 0, -1, 0LL);
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

  if ( (byte_4214A25 & 1) == 0 )
  {
    sub_B0D8A4(&EventRankingListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4214A25 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
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
  const MethodInfo *v8; // x1

  if ( (byte_4214A2F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v3);
    byte_4214A2F = 1;
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
      ObjectList = EventRankingListViewManager__get_ObjectList(this, v5);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      ObjectList = (System_Collections_Generic_List_EventRankingListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v8);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B0D97C(ObjectList);
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
  DataManager_o *Item; // x0
  __int64 v15; // x9
  char *monitor; // x8
  unsigned int v17; // w9
  int v18; // w10
  GiftEntity_o *v19; // x20
  int32_t type; // w8
  ItemEntity_o *Entity; // x20
  CommonUI_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v25; // x22
  CommonUI_o *Instance; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  ServantStatusDialog_EndDelegate_o *v29; // x22
  __int64 v30; // x0

  if ( (byte_4214A2B & 1) == 0 )
  {
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B0D8A4(&Method_EventRankingListViewManager_CloseItemDetail__, v8);
    sub_B0D8A4(&Method_EventRankingListViewManager_CloseSvtDetail__, v9);
    sub_B0D8A4(&EventRankingListViewObject_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B0D8A4(&SoundManager_TypeInfo, v13);
    byte_4214A2B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_25;
  v15 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v15 - 1] != EventRankingListViewObject_TypeInfo )
  {
    Item = (DataManager_o *)sub_B0DC70(obj);
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
  v17 = *((_DWORD *)monitor + 6);
  if ( v17 != 1 )
  {
    v18 = this->fields.alphaAnimCnt % (int)v17;
    if ( v18 < v17 )
    {
      monitor += 8 * v18;
      goto LABEL_14;
    }
LABEL_27:
    v30 = sub_B0D9A8(Item);
    sub_B0D948(v30, 0LL);
  }
LABEL_14:
  v19 = (GiftEntity_o *)*((_QWORD *)monitor + 4);
  if ( !v19 )
    goto LABEL_25;
  type = v19->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v27, v28);
    ServantStatusDialog_EndDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenServantStatusDialog_16991516(Instance, 7, v19, v29, 0LL);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Item,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Item,
                                   v19->fields.objectId,
                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v22 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v25 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v23,
                                                          v24);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v25,
          (Il2CppObject *)this,
          Method_EventRankingListViewManager_CloseItemDetail__,
          0LL);
        if ( v22 )
        {
          CommonUI__OpenItemDetailDialog(v22, Entity, v25, 50, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B0D97C(Item);
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4214A2A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214A2A = 1;
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
          sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B0D97C(gameObject);
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
  System_Action_o *v16; // x22
  float listInDelay; // s8
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4214A29 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventRankingListViewManager_OnMoveEnd__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v5);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v6);
    byte_4214A29 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B0D97C(ObjectList);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = v10->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventRankingListViewObject__Init(v13, 4, v16, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v18);
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
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
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
  int32_t size; // w8
  System_Collections_Generic_List_EventRankingListViewObject__o *v15; // x21
  int v16; // w24
  __int64 v17; // x25
  unsigned int v18; // w8
  EventRankingListViewObject_o *v19; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4214A28 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_EventRankingListViewManager_OnMoveEnd__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v9);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v10);
    byte_4214A28 = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v15 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v16 = ObjectList->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      v18 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v18 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v19 = v15->fields._items->m_Items[v17];
        v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
        if ( !v19 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventRankingListViewObject__Init(v19, mode, v20, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v21);
        if ( (int)v17 + 1 >= v16 )
          return;
        v18 = v15->fields._size;
        ++v17;
      }
LABEL_14:
      sub_B0D97C(ObjectList);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventRankingListViewManager__SetMode_24928768(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__SetMode_24928768(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4214A27 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&StringLiteral_11456/*"RequestInto"*/, v5);
    byte_4214A27 = 1;
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
          sub_B0D97C(gameObject);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11456/*"RequestInto"*/,
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


void __fastcall EventRankingListViewManager__SetMode_24929096(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventRankingListViewManager__SetMode_24928768(this, mode, v11);
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
  if ( (byte_4214A26 & 1) == 0 )
  {
    this = (EventRankingListViewManager_o *)sub_B0D8A4(&EventRankingListViewObject_TypeInfo, obj);
    byte_4214A26 = 1;
  }
  if ( !obj
    || (v6 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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

  if ( (byte_4214A2E & 1) == 0 )
  {
    sub_B0D8A4(&EventRankingListViewManager_TypeInfo, method);
    byte_4214A2E = 1;
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

  if ( (byte_4214A20 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4214A20 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_B0DC70(v7);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21
  const MethodInfo *v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21

  if ( (byte_4214A23 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4214A23 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRankingListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Inequality(
                                                                                         v15,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v15,
                                                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v17 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)EventRankingListViewObject__GetItem(
                                                                                           (EventRankingListViewObject_o *)Component_srcLineSprite,
                                                                                           v16);
        if ( !Component_srcLineSprite )
          break;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_23719204(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            v17,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
        }
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v10;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B0D97C(Component_srcLineSprite);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v10;
}


System_Collections_Generic_List_EventRankingListViewObject__o *__fastcall EventRankingListViewManager__get_ObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4214A22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4214A22 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRankingListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v15,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v10;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B0D97C(Component_srcLineSprite);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v10;
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

  if ( (byte_4214A21 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4214A21 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_B0DC70(v7);
  EventRankingListViewManager__Update(v10, v11);
}


void __fastcall EventRankingListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211BBF & 1) == 0 )
  {
    sub_B0D8A4(&EventRankingListViewManager___c_TypeInfo, v1);
    byte_4211BBF = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventRankingListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRankingListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return System_Single__CompareTo_43836096(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}