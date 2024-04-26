void __fastcall EventRankingListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4352625 & 1) == 0 )
  {
    sub_B70694(&EventRankingListViewManager_TypeInfo);
    byte_4352625 = 1;
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4352621 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352621 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4352622 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352622 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall EventRankingListViewManager__CreateList(
        EventRankingListViewManager_o *this,
        int32_t eventId,
        int32_t round,
        int32_t mostSupportGroupId,
        System_Int64_array *userSupportPoints,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v10; // x1
  EventPointGroupEntity_array *EntityList; // x28
  const MethodInfo *v12; // x3
  EventRaceEntity_o *Entity; // x22
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x24
  signed int max_length; // w8
  unsigned int v17; // w9
  int v18; // w26
  __int64 v19; // x27
  EventPointGroupEntity_o **m_Items; // x20
  __int64 v21; // x26
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Int32_array *giftIds; // x8
  EventPointGroupEntity_o *v29; // x8
  System_Int32_array **name; // x1
  const MethodInfo *v31; // x4
  EventPointGroupEntity_o *v32; // x8
  int32_t groupId; // w3
  EventPointGroupEntity_o *v34; // x8
  struct System_Int64_array *goalPoints; // x8
  TotalEventRaceEntity_o *v36; // x8
  const MethodInfo *v37; // x4
  EventPointGroupEntity_o *v38; // x8
  float GoalRate; // s0
  __int64 v40; // x8
  __int64 v41; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v42; // x19
  EventRankingListViewManager___c_c *v43; // x0
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x19
  Il2CppObject *v46; // x21
  struct EventRankingListViewManager___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  unsigned __int64 v54; // x19
  EventRankingRoundItemInfo_o *v55; // x23
  EventRankingListViewItem_o *v56; // x22
  const MethodInfo *v57; // x6
  __int64 v58; // x0
  char v59; // [xsp+8h] [xbp-98h]
  bool v60; // [xsp+Ch] [xbp-94h]
  Il2CppObject *v61; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // [xsp+18h] [xbp-88h]
  EventRaceMaster_o *v63; // [xsp+20h] [xbp-80h]
  System_Int64_array *v65; // [xsp+30h] [xbp-70h]
  __int64 v66; // [xsp+38h] [xbp-68h]
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // [xsp+40h] [xbp-60h]

  if ( (byte_4352619 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
    sub_B70694(&System_Comparison_EventRankingRoundItemInfo__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_B70694(&EventRankingListViewItem_TypeInfo);
    sub_B70694(&Method_EventRankingListViewManager_GoalTimeSort__);
    sub_B70694(&EventRankingRoundItemInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventRankingListViewManager___c__CreateList_b__19_0__);
    sub_B70694(&EventRankingListViewManager___c_TypeInfo);
    byte_4352619 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_71;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0LL);
  if ( TargetTermRaceEntityList )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_71;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_71;
    v63 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, v12);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v66 = *(_QWORD *)&TargetTermRaceEntityList->max_length;
    v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v15,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v62,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_71;
    max_length = userSupportPoints->max_length;
    if ( max_length < 1 )
    {
LABEL_17:
      v60 = 0;
    }
    else
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
        {
LABEL_72:
          v58 = sub_B70798(Instance);
          sub_B70738(v58, 0LL);
        }
        if ( userSupportPoints->m_Items[v17] >= 1 )
          break;
        if ( (int)++v17 >= max_length )
          goto LABEL_17;
      }
      v60 = 1;
    }
    v61 = (Il2CppObject *)this;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v65 = userSupportPoints,
          Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventScriptMaster___),
          v18 = v66,
          !Instance) )
    {
LABEL_71:
      sub_B7076C(Instance, v10);
    }
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0LL);
    v59 = Instance;
    if ( (int)v66 >= 1 )
    {
      v19 = 0LL;
      m_Items = EntityList->m_Items;
      do
      {
        v21 = sub_B70764(EventRankingRoundItemInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v21, 0LL);
        if ( !v21 )
          goto LABEL_71;
        *(_DWORD *)(v21 + 16) = eventId;
        if ( !Entity )
          goto LABEL_71;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_71;
        if ( (unsigned int)v19 >= giftIds->max_length )
          goto LABEL_72;
        *(_DWORD *)(v21 + 20) = giftIds->m_Items[v19 + 1];
        if ( !EntityList )
          goto LABEL_71;
        if ( (unsigned int)v19 >= EntityList->max_length )
          goto LABEL_72;
        v29 = m_Items[v19];
        if ( !v29 )
          goto LABEL_71;
        name = (System_Int32_array **)v29->fields.name;
        *(_QWORD *)(v21 + 24) = name;
        sub_B70630((BattleServantConfConponent_o *)(v21 + 24), name, v22, v23, v24, v25, v26, v27);
        if ( (unsigned int)v19 >= EntityList->max_length )
          goto LABEL_72;
        v32 = m_Items[v19];
        if ( !v32 )
          goto LABEL_71;
        groupId = v32->fields.groupId;
        *(_DWORD *)(v21 + 32) = groupId;
        if ( (unsigned int)v19 >= EntityList->max_length )
          goto LABEL_72;
        v34 = m_Items[v19];
        if ( !v34 )
          goto LABEL_71;
        *(_DWORD *)(v21 + 36) = v34->fields.iconId;
        if ( (unsigned int)v19 >= v65->max_length )
          goto LABEL_72;
        *(_QWORD *)(v21 + 40) = v65->m_Items[v19];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_71;
        if ( (unsigned int)v19 >= goalPoints->max_length )
          goto LABEL_72;
        *(_QWORD *)(v21 + 48) = goalPoints->m_Items[v19];
        if ( (unsigned int)v19 >= TargetTermRaceEntityList->max_length )
          goto LABEL_72;
        v36 = TargetTermRaceEntityList->m_Items[v19];
        if ( !v36 )
          goto LABEL_71;
        *(_QWORD *)(v21 + 56) = v36->fields.totalPoint;
        *(_DWORD *)(v21 + 72) = mostSupportGroupId;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_71;
        Instance = EventRaceResultMaster__GetTargetGoalTime(
                     MasterData_WarQuestSelectionMaster,
                     eventId,
                     round,
                     groupId,
                     v31);
        *(_QWORD *)(v21 + 64) = Instance;
        if ( (unsigned int)v19 >= EntityList->max_length )
          goto LABEL_72;
        v38 = m_Items[v19];
        if ( !v38 )
          goto LABEL_71;
        GoalRate = EventRaceMaster__GetGoalRate(v63, eventId, round, v38->fields.groupId, v37);
        v40 = *(_QWORD *)(v21 + 48);
        v41 = *(_QWORD *)(v21 + 56);
        *(float *)(v21 + 76) = GoalRate;
        if ( v40 <= v41 )
        {
          if ( !v15 )
            goto LABEL_71;
          Instance = (int64_t)v15;
        }
        else
        {
          Instance = (int64_t)v62;
          if ( !v62 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
        v18 = v66;
      }
      while ( (int)++v19 < (int)v66 );
    }
    if ( v15 && v15->fields._size >= 2 )
    {
      v42 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v42,
        v61,
        Method_EventRankingListViewManager_GoalTimeSort__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
        (System_Comparison_T__o *)v42,
        (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    v10 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v62;
    if ( v62 && v62->fields._size >= 2 )
    {
      v43 = EventRankingListViewManager___c_TypeInfo;
      if ( (BYTE3(EventRankingListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo);
        v10 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v62;
        v43 = EventRankingListViewManager___c_TypeInfo;
      }
      static_fields = v43->static_fields;
      _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        }
        v46 = (Il2CppObject *)static_fields->__9;
        _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__19_0,
          v46,
          Method_EventRankingListViewManager___c__CreateList_b__19_0__,
          (const MethodInfo_2B05B38 *)Method_System_Comparison_EventRankingRoundItemInfo___ctor__);
        v47 = EventRankingListViewManager___c_TypeInfo->static_fields;
        v47->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v47->__9__19_0,
          (System_Int32_array **)_9__19_0,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        v10 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v62;
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v10,
        (System_Comparison_T__o *)_9__19_0,
        (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
      v10 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v62;
    }
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      (System_Collections_Generic_IEnumerable_T__o *)v10,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( v18 >= 1 )
    {
      v54 = 0LL;
      do
      {
        if ( v54 >= (unsigned int)v15->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v55 = (EventRankingRoundItemInfo_o *)v15->fields._items->m_Items[v54++];
        v56 = (EventRankingListViewItem_o *)sub_B70764(EventRankingListViewItem_TypeInfo);
        EventRankingListViewItem___ctor(v56, v55, v54, v60, v59 & 1, round, v57);
        Instance = (int64_t)v61[11].monitor;
        if ( !Instance )
          goto LABEL_71;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (__int64)v54 < v18 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v61, -1, 0, -1, 0LL);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_435261A & 1) == 0 )
  {
    sub_B70694(&EventRankingListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_435261A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (EventRankingListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == EventRankingListViewItem_TypeInfo )
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
    sub_B7076C(this, x);
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
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  __int64 v6; // x22

  if ( (byte_4352624 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    byte_4352624 = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      ObjectList = EventRankingListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      ObjectList = (System_Collections_Generic_List_EventRankingListViewObject__o *)ObjectList->fields._items->m_Items[v6];
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v4);
      if ( (int)++v6 >= size )
        return;
    }
LABEL_12:
    sub_B7076C(ObjectList, v4);
  }
}


void __fastcall EventRankingListViewManager__OnClickListView(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  DataManager_o *Item; // x0
  __int64 v6; // x1
  __int64 v7; // x9
  char *monitor; // x8
  unsigned int v9; // w9
  int v10; // w10
  GiftEntity_o *v11; // x20
  int32_t type; // w8
  ItemEntity_o *Entity; // x20
  CommonUI_o *v14; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v15; // x22
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v17; // x22
  __int64 v18; // x0

  if ( (byte_4352620 & 1) == 0 )
  {
    sub_B70694(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_EventRankingListViewManager_CloseItemDetail__);
    sub_B70694(&Method_EventRankingListViewManager_CloseSvtDetail__);
    sub_B70694(&EventRankingListViewObject_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352620 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_25;
  v7 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != EventRankingListViewObject_TypeInfo )
  {
    Item = (DataManager_o *)sub_B70A60(obj);
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
  v9 = *((_DWORD *)monitor + 6);
  if ( v9 != 1 )
  {
    v10 = this->fields.alphaAnimCnt % (int)v9;
    if ( v10 < v9 )
    {
      monitor += 8 * v10;
      goto LABEL_14;
    }
LABEL_27:
    v18 = sub_B70798(Item);
    sub_B70738(v18, 0LL);
  }
LABEL_14:
  v11 = (GiftEntity_o *)*((_QWORD *)monitor + 4);
  if ( !v11 )
    goto LABEL_25;
  type = v11->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenServantStatusDialog_17878868(Instance, 7, v11, v17, 0LL);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Item,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Item,
                                   v11->fields.objectId,
                                   (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v14 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B70764(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_EventRankingListViewManager_CloseItemDetail__,
          0LL);
        if ( v14 )
        {
          CommonUI__OpenItemDetailDialog(v14, Entity, v15, 50, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B7076C(Item, v6);
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

  if ( (byte_435261F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435261F = 1;
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
          sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
          if ( callbackFunc2 )
            System_Action__Invoke(callbackFunc2, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B7076C(gameObject, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__RequestInto(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  signed __int64 size; // x23
  System_Collections_Generic_List_EventRankingListViewObject__o *v7; // x20
  unsigned __int64 v8; // x25
  int v9; // w24
  EventRankingListViewObject_o *v10; // x21
  System_Action_o *v11; // x22
  float listInDelay; // s8
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_435261E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_435261E = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_15:
    sub_B7076C(ObjectList, v5);
  size = ObjectList->fields._size;
  v7 = ObjectList;
  this->fields.callbackCount = size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v8 = 0LL;
  v9 = 0;
  do
  {
    if ( v8 >= (unsigned int)v7->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v10 = v7->fields._items->m_Items[v8];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v10, 0LL) )
    {
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v9;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventRankingListViewObject__Init(v10, 4, v11, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v13);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v8;
  }
  while ( (__int64)v8 < size );
  if ( !v9 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventRankingListViewObject__o *v10; // x21
  int v11; // w24
  __int64 v12; // x25
  unsigned int v13; // w8
  EventRankingListViewObject_o *v14; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_435261D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_435261D = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v10 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v11 = ObjectList->fields._size;
    if ( v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v14 = v10->fields._items->m_Items[v12];
        v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
        if ( !v14 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventRankingListViewObject__Init(v14, mode, v15, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
        if ( (int)v12 + 1 >= v11 )
          return;
        v13 = v10->fields._size;
        ++v12;
      }
LABEL_14:
      sub_B7076C(ObjectList, v8);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventRankingListViewManager__SetMode_26199868(this, mode, v10);
}


void __fastcall EventRankingListViewManager__SetMode_26199868(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_435261C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_11583/*"RequestInto"*/);
    byte_435261C = 1;
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
          sub_B7076C(gameObject, v8);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11583/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v6 = 3;
      goto LABEL_8;
    case 2:
      v6 = 2;
LABEL_8:
      EventRankingListViewManager__RequestListObject(this, v6, 0.0, v5);
      break;
  }
}


void __fastcall EventRankingListViewManager__SetMode_26200196(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventRankingListViewManager__SetMode_26199868(this, mode, v11);
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
  if ( (byte_435261B & 1) == 0 )
  {
    this = (EventRankingListViewManager_o *)sub_B70694(&EventRankingListViewObject_TypeInfo);
    byte_435261B = 1;
  }
  if ( !obj
    || (v6 = *(&EventRankingListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
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

  if ( (byte_4352623 & 1) == 0 )
  {
    sub_B70694(&EventRankingListViewManager_TypeInfo);
    byte_4352623 = 1;
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

  if ( (byte_4352615 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4352615 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_B70A60(v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x21

  if ( (byte_4352618 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352618 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Inequality(
                                                                                         v9,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v9,
                                                                                           (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v10 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)EventRankingListViewObject__GetItem(
                                                                                           (EventRankingListViewObject_o *)Component_srcLineSprite,
                                                                                           v5);
        if ( !Component_srcLineSprite )
          break;
        v5 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_23985548(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v10,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
        }
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B7076C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
}


System_Collections_Generic_List_EventRankingListViewObject__o *__fastcall EventRankingListViewManager__get_ObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21

  if ( (byte_4352617 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352617 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v9,
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B7076C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
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

  if ( (byte_4352616 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4352616 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_B70A60(v7);
  EventRankingListViewManager__Update(v10, v11);
}


void __fastcall EventRankingListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_434EA2C & 1) == 0 )
  {
    sub_B70694(&EventRankingListViewManager___c_TypeInfo);
    byte_434EA2C = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventRankingListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRankingListViewManager___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
  return System_Single__CompareTo_44744360(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}