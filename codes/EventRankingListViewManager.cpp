void __fastcall EventRankingListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4188774 & 1) == 0 )
  {
    sub_B2C35C(&EventRankingListViewManager_TypeInfo, v1);
    byte_4188774 = 1;
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
  __int64 v5; // x1

  if ( (byte_4188770 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4188770 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4188771 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4188771 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v30; // x1
  EventPointGroupEntity_array *EntityList; // x28
  const MethodInfo *v32; // x3
  EventRaceEntity_o *Entity; // x22
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x24
  signed int max_length; // w8
  unsigned int v37; // w9
  int v38; // w26
  __int64 v39; // x27
  EventPointGroupEntity_o **m_Items; // x20
  __int64 v41; // x26
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct System_Int32_array *giftIds; // x8
  EventPointGroupEntity_o *v49; // x8
  System_Int32_array **name; // x1
  const MethodInfo *v51; // x4
  EventPointGroupEntity_o *v52; // x8
  int32_t groupId; // w3
  EventPointGroupEntity_o *v54; // x8
  struct System_Int64_array *goalPoints; // x8
  TotalEventRaceEntity_o *v56; // x8
  const MethodInfo *v57; // x4
  EventPointGroupEntity_o *v58; // x8
  float GoalRate; // s0
  __int64 v60; // x8
  __int64 v61; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v62; // x19
  EventRankingListViewManager___c_c *v63; // x0
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x19
  Il2CppObject *v66; // x21
  struct EventRankingListViewManager___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  unsigned __int64 v74; // x19
  EventRankingRoundItemInfo_o *v75; // x23
  EventRankingListViewItem_o *v76; // x22
  const MethodInfo *v77; // x6
  __int64 v78; // x0
  char v79; // [xsp+8h] [xbp-98h]
  bool v80; // [xsp+Ch] [xbp-94h]
  Il2CppObject *v81; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // [xsp+18h] [xbp-88h]
  EventRaceMaster_o *v83; // [xsp+20h] [xbp-80h]
  System_Int64_array *v85; // [xsp+30h] [xbp-70h]
  __int64 v86; // [xsp+38h] [xbp-68h]
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // [xsp+40h] [xbp-60h]

  if ( (byte_4188768 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventRankingRoundItemInfo___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_EventRankingRoundItemInfo__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventScriptMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, v14);
    sub_B2C35C(&EventRankingListViewItem_TypeInfo, v15);
    sub_B2C35C(&Method_EventRankingListViewManager_GoalTimeSort__, v16);
    sub_B2C35C(&EventRankingRoundItemInfo_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__, v24);
    sub_B2C35C(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B2C35C(&Method_EventRankingListViewManager___c__CreateList_b__19_0__, v27);
    sub_B2C35C(&EventRankingListViewManager___c_TypeInfo, v28);
    byte_4188768 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_71;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0LL);
  if ( TargetTermRaceEntityList )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_71;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_71;
    v83 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, v32);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v86 = *(_QWORD *)&TargetTermRaceEntityList->max_length;
    v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v35,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v82,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_71;
    max_length = userSupportPoints->max_length;
    if ( max_length < 1 )
    {
LABEL_17:
      v80 = 0;
    }
    else
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= max_length )
        {
LABEL_72:
          v78 = sub_B2C460(Instance);
          sub_B2C400(v78, 0LL);
        }
        if ( userSupportPoints->m_Items[v37] >= 1 )
          break;
        if ( (int)++v37 >= max_length )
          goto LABEL_17;
      }
      v80 = 1;
    }
    v81 = (Il2CppObject *)this;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v85 = userSupportPoints,
          Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventScriptMaster___),
          v38 = v86,
          !Instance) )
    {
LABEL_71:
      sub_B2C434(Instance, v30);
    }
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0LL);
    v79 = Instance;
    if ( (int)v86 >= 1 )
    {
      v39 = 0LL;
      m_Items = EntityList->m_Items;
      do
      {
        v41 = sub_B2C42C(EventRankingRoundItemInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v41, 0LL);
        if ( !v41 )
          goto LABEL_71;
        *(_DWORD *)(v41 + 16) = eventId;
        if ( !Entity )
          goto LABEL_71;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_71;
        if ( (unsigned int)v39 >= giftIds->max_length )
          goto LABEL_72;
        *(_DWORD *)(v41 + 20) = giftIds->m_Items[v39 + 1];
        if ( !EntityList )
          goto LABEL_71;
        if ( (unsigned int)v39 >= EntityList->max_length )
          goto LABEL_72;
        v49 = m_Items[v39];
        if ( !v49 )
          goto LABEL_71;
        name = (System_Int32_array **)v49->fields.name;
        *(_QWORD *)(v41 + 24) = name;
        sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 24), name, v42, v43, v44, v45, v46, v47);
        if ( (unsigned int)v39 >= EntityList->max_length )
          goto LABEL_72;
        v52 = m_Items[v39];
        if ( !v52 )
          goto LABEL_71;
        groupId = v52->fields.groupId;
        *(_DWORD *)(v41 + 32) = groupId;
        if ( (unsigned int)v39 >= EntityList->max_length )
          goto LABEL_72;
        v54 = m_Items[v39];
        if ( !v54 )
          goto LABEL_71;
        *(_DWORD *)(v41 + 36) = v54->fields.iconId;
        if ( (unsigned int)v39 >= v85->max_length )
          goto LABEL_72;
        *(_QWORD *)(v41 + 40) = v85->m_Items[v39];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_71;
        if ( (unsigned int)v39 >= goalPoints->max_length )
          goto LABEL_72;
        *(_QWORD *)(v41 + 48) = goalPoints->m_Items[v39];
        if ( (unsigned int)v39 >= TargetTermRaceEntityList->max_length )
          goto LABEL_72;
        v56 = TargetTermRaceEntityList->m_Items[v39];
        if ( !v56 )
          goto LABEL_71;
        *(_QWORD *)(v41 + 56) = v56->fields.totalPoint;
        *(_DWORD *)(v41 + 72) = mostSupportGroupId;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_71;
        Instance = EventRaceResultMaster__GetTargetGoalTime(
                     MasterData_WarQuestSelectionMaster,
                     eventId,
                     round,
                     groupId,
                     v51);
        *(_QWORD *)(v41 + 64) = Instance;
        if ( (unsigned int)v39 >= EntityList->max_length )
          goto LABEL_72;
        v58 = m_Items[v39];
        if ( !v58 )
          goto LABEL_71;
        GoalRate = EventRaceMaster__GetGoalRate(v83, eventId, round, v58->fields.groupId, v57);
        v60 = *(_QWORD *)(v41 + 48);
        v61 = *(_QWORD *)(v41 + 56);
        *(float *)(v41 + 76) = GoalRate;
        if ( v60 <= v61 )
        {
          if ( !v35 )
            goto LABEL_71;
          Instance = (int64_t)v35;
        }
        else
        {
          Instance = (int64_t)v82;
          if ( !v82 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
        v38 = v86;
      }
      while ( (int)++v39 < (int)v86 );
    }
    if ( v35 && v35->fields._size >= 2 )
    {
      v62 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v62,
        v81,
        Method_EventRankingListViewManager_GoalTimeSort__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v35,
        (System_Comparison_T__o *)v62,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    v30 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v82;
    if ( v82 && v82->fields._size >= 2 )
    {
      v63 = EventRankingListViewManager___c_TypeInfo;
      if ( (BYTE3(EventRankingListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo);
        v30 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v82;
        v63 = EventRankingListViewManager___c_TypeInfo;
      }
      static_fields = v63->static_fields;
      _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v63);
          static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        }
        v66 = (Il2CppObject *)static_fields->__9;
        _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__19_0,
          v66,
          Method_EventRankingListViewManager___c__CreateList_b__19_0__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
        v67 = EventRankingListViewManager___c_TypeInfo->static_fields;
        v67->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v67->__9__19_0,
          (System_Int32_array **)_9__19_0,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
        v30 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v82;
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v30,
        (System_Comparison_T__o *)_9__19_0,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
      v30 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v82;
    }
    if ( !v35 )
      goto LABEL_71;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
      (System_Collections_Generic_IEnumerable_T__o *)v30,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( v38 >= 1 )
    {
      v74 = 0LL;
      do
      {
        if ( v74 >= (unsigned int)v35->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v75 = (EventRankingRoundItemInfo_o *)v35->fields._items->m_Items[v74++];
        v76 = (EventRankingListViewItem_o *)sub_B2C42C(EventRankingListViewItem_TypeInfo);
        EventRankingListViewItem___ctor(v76, v75, v74, v80, v79 & 1, round, v77);
        Instance = (int64_t)v81[11].monitor;
        if ( !Instance )
          goto LABEL_71;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (__int64)v74 < v38 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v81, -1, 0, -1, 0LL);
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

  if ( (byte_4188769 & 1) == 0 )
  {
    sub_B2C35C(&EventRankingListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4188769 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, x);
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

  if ( (byte_4188773 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v3);
    byte_4188773 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      ObjectList = (System_Collections_Generic_List_EventRankingListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v5);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B2C434(ObjectList, v5);
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
  __int64 v15; // x1
  __int64 v16; // x9
  char *monitor; // x8
  unsigned int v18; // w9
  int v19; // w10
  GiftEntity_o *v20; // x20
  int32_t type; // w8
  ItemEntity_o *Entity; // x20
  CommonUI_o *v23; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v24; // x22
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v26; // x22
  __int64 v27; // x0

  if ( (byte_418876F & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B2C35C(&Method_EventRankingListViewManager_CloseItemDetail__, v8);
    sub_B2C35C(&Method_EventRankingListViewManager_CloseSvtDetail__, v9);
    sub_B2C35C(&EventRankingListViewObject_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    byte_418876F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_25;
  v16 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v16 - 1] != EventRankingListViewObject_TypeInfo )
  {
    Item = (DataManager_o *)sub_B2C728(obj);
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
  v18 = *((_DWORD *)monitor + 6);
  if ( v18 != 1 )
  {
    v19 = this->fields.alphaAnimCnt % (int)v18;
    if ( v19 < v18 )
    {
      monitor += 8 * v19;
      goto LABEL_14;
    }
LABEL_27:
    v27 = sub_B2C460(Item);
    sub_B2C400(v27, 0LL);
  }
LABEL_14:
  v20 = (GiftEntity_o *)*((_QWORD *)monitor + 4);
  if ( !v20 )
    goto LABEL_25;
  type = v20->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v26,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenServantStatusDialog_17945944(Instance, 7, v20, v26, 0LL);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Item,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Item,
                                   v20->fields.objectId,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v24 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v24,
          (Il2CppObject *)this,
          Method_EventRankingListViewManager_CloseItemDetail__,
          0LL);
        if ( v23 )
        {
          CommonUI__OpenItemDetailDialog(v23, Entity, v24, 50, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B2C434(Item, v15);
  }
}


void __fastcall EventRankingListViewManager__OnMoveEnd(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  System_Action_o *callbackFunc2; // x20

  if ( (byte_418876E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418876E = 1;
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
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B2C434(gameObject, v7);
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
  __int64 v9; // x1
  signed __int64 size; // x23
  System_Collections_Generic_List_EventRankingListViewObject__o *v11; // x20
  unsigned __int64 v12; // x25
  int v13; // w24
  EventRankingListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  float listInDelay; // s8
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418876D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventRankingListViewManager_OnMoveEnd__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v5);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v6);
    byte_418876D = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B2C434(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = ObjectList;
  this->fields.callbackCount = size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)v11->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = v11->fields._items->m_Items[v12];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v14, 0LL) )
    {
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v13;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventRankingListViewObject__Init(v14, 4, v15, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v17);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v12;
  }
  while ( (__int64)v12 < size );
  if ( !v13 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  int32_t size; // w8
  System_Collections_Generic_List_EventRankingListViewObject__o *v14; // x21
  int v15; // w24
  __int64 v16; // x25
  unsigned int v17; // w8
  EventRankingListViewObject_o *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418876C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_EventRankingListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v9);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v10);
    byte_418876C = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v14 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v15 = ObjectList->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      v17 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v17 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v18 = v14->fields._items->m_Items[v16];
        v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventRankingListViewObject__Init(v18, mode, v19, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v20);
        if ( (int)v16 + 1 >= v15 )
          return;
        v17 = v14->fields._size;
        ++v16;
      }
LABEL_14:
      sub_B2C434(ObjectList, v12);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventRankingListViewManager__SetMode_26668128(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__SetMode_26668128(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_418876B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&StringLiteral_11429/*"RequestInto"*/, v5);
    byte_418876B = 1;
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
          sub_B2C434(gameObject, v9);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11429/*"RequestInto"*/,
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


void __fastcall EventRankingListViewManager__SetMode_26668456(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventRankingListViewManager__SetMode_26668128(this, mode, v11);
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
  if ( (byte_418876A & 1) == 0 )
  {
    this = (EventRankingListViewManager_o *)sub_B2C35C(&EventRankingListViewObject_TypeInfo, obj);
    byte_418876A = 1;
  }
  if ( !obj
    || (v6 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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

  if ( (byte_4188772 & 1) == 0 )
  {
    sub_B2C35C(&EventRankingListViewManager_TypeInfo, method);
    byte_4188772 = 1;
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

  if ( (byte_4188764 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4188764 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_B2C728(v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x21

  if ( (byte_4188767 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4188767 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                                                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v16 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)EventRankingListViewObject__GetItem(
                                                                                           (EventRankingListViewObject_o *)Component_srcLineSprite,
                                                                                           v11);
        if ( !Component_srcLineSprite )
          break;
        v11 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_24147020(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v9 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            v16,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
        }
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v9;
}


System_Collections_Generic_List_EventRankingListViewObject__o *__fastcall EventRankingListViewManager__get_ObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4188766 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4188766 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v9;
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

  if ( (byte_4188765 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4188765 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_B2C728(v7);
  EventRankingListViewManager__Update(v10, v11);
}


void __fastcall EventRankingListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184B58 & 1) == 0 )
  {
    sub_B2C35C(&EventRankingListViewManager___c_TypeInfo, v1);
    byte_4184B58 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventRankingListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRankingListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return System_Single__CompareTo_44291724(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}