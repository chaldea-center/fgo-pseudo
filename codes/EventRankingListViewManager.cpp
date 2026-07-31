void EventRankingListViewManager___cctor(const MethodInfo *method)
{
  struct EventRankingListViewManager_StaticFields *static_fields; // x8

  if ( (byte_593288D & 1) == 0 )
  {
    sub_21FFC50(&EventRankingListViewManager_TypeInfo);
    byte_593288D = 1;
  }
  static_fields = EventRankingListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x404000003F000000LL;
  static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
}


void EventRankingListViewManager___ctor(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventRankingListViewManager__CloseItemDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5932889 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventRankingListViewManager_CloseItemDetail__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932889 = 1;
  }
  v3 = Method_EventRankingListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_EventRankingListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593288A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593288A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void EventRankingListViewManager__CreateList(
        EventRankingListViewManager_o *this,
        int32_t eventId,
        int32_t round,
        int32_t mostSupportGroupId,
        System_Int64_array *userSupportPoints,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v10; // x1
  EventPointGroupEntity_array *EntityList; // x27
  EventRaceMaster_o *v12; // x28
  EventRaceEntity_o *Entity; // x29
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v15; // x23
  System_Collections_Generic_List_object__o *v16; // x25
  int v17; // w8
  int v18; // w8
  int v19; // w28
  __int64 v20; // x2
  __int64 v21; // x21
  EventPointGroupEntity_o **m_Items; // x26
  __int64 v23; // x24
  struct System_Int32_array *giftIds; // x8
  EventPointGroupEntity_o *v25; // x8
  int32_t groupId; // w3
  int32_t iconId; // w8
  unsigned int v28; // w9
  struct System_Int64_array *goalPoints; // x8
  unsigned int v30; // w9
  TotalEventRaceEntity_o *v31; // x8
  unsigned int v32; // w8
  EventPointGroupEntity_o *v33; // x8
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  float GoalRate; // s0
  __int64 v41; // x8
  __int64 v42; // x9
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  __int64 v50; // x8
  System_Collections_Generic_List_object__o *v51; // x0
  System_Comparison_T__o *v52; // x20
  EventRankingListViewManager___c_c *v53; // x0
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__19_0; // x20
  Il2CppObject *v56; // x21
  struct EventRankingListViewManager___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w20
  Il2CppObject *Item; // x24
  EventRankingListViewItem_o *v66; // x21
  const MethodInfo *v67; // x6
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8
  Il2CppObject *v78; // [xsp+8h] [xbp-A8h]
  int v79; // [xsp+14h] [xbp-9Ch]
  EventRaceMaster_o *v80; // [xsp+20h] [xbp-90h]
  char v81; // [xsp+2Ch] [xbp-84h]
  System_Int64_array *v82; // [xsp+30h] [xbp-80h]
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // [xsp+38h] [xbp-78h]
  il2cpp_array_size_t max_length; // [xsp+40h] [xbp-70h]

  if ( (byte_5932881 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventRankingRoundItemInfo__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_21FFC50(&EventRankingListViewItem_TypeInfo);
    sub_21FFC50(&Method_EventRankingListViewManager_GoalTimeSort__);
    sub_21FFC50(&EventRankingRoundItemInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventRankingListViewManager___c__CreateList_b__19_0__);
    sub_21FFC50(&EventRankingListViewManager___c_TypeInfo);
    byte_5932881 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_75;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0);
  if ( TargetTermRaceEntityList )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_75;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v78 = (Il2CppObject *)this;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_75;
    v12 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, 0);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    max_length = TargetTermRaceEntityList->max_length;
    v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_75;
    v17 = userSupportPoints->max_length;
    v80 = v12;
    v79 = v17;
    if ( v17 < 1 )
    {
      v19 = 0;
    }
    else
    {
      v18 = v17 & ~(v17 >> 31);
      v19 = 0;
      do
      {
        if ( v79 == v19 )
LABEL_76:
          sub_21FFED4(Instance);
        if ( userSupportPoints->m_Items[v19] > 0 )
          break;
        ++v19;
      }
      while ( v18 != v19 );
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v82 = userSupportPoints;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventScriptMaster___);
    if ( !Instance )
      goto LABEL_75;
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0);
    v81 = Instance;
    if ( (int)max_length >= 1 )
    {
      v21 = 0;
      m_Items = EntityList->m_Items;
      do
      {
        v23 = sub_21FFEBC(EventRankingRoundItemInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v23, 0);
        if ( !v23 )
          goto LABEL_75;
        *(_DWORD *)(v23 + 16) = eventId;
        if ( !Entity )
          goto LABEL_75;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_75;
        if ( (unsigned int)v21 >= LODWORD(giftIds->max_length) )
          goto LABEL_76;
        *(_DWORD *)(v23 + 20) = giftIds->m_Items[v21];
        if ( !EntityList )
          goto LABEL_75;
        if ( (unsigned int)v21 >= LODWORD(EntityList->max_length) )
          goto LABEL_76;
        v25 = m_Items[v21];
        if ( !v25 )
          goto LABEL_75;
        groupId = v25->fields.groupId;
        iconId = v25->fields.iconId;
        v28 = v82->max_length;
        *(_DWORD *)(v23 + 24) = groupId;
        *(_DWORD *)(v23 + 28) = iconId;
        if ( (unsigned int)v21 >= v28 )
          goto LABEL_76;
        goalPoints = Entity->fields.goalPoints;
        *(_QWORD *)(v23 + 32) = v82->m_Items[v21];
        if ( !goalPoints )
          goto LABEL_75;
        if ( (unsigned int)v21 >= LODWORD(goalPoints->max_length) )
          goto LABEL_76;
        v30 = TargetTermRaceEntityList->max_length;
        *(_QWORD *)(v23 + 40) = goalPoints->m_Items[v21];
        if ( (unsigned int)v21 >= v30 )
          goto LABEL_76;
        v31 = TargetTermRaceEntityList->m_Items[v21];
        if ( !v31 )
          goto LABEL_75;
        *(_QWORD *)(v23 + 48) = v31->fields.totalPoint;
        if ( !MasterData_object )
          goto LABEL_75;
        Instance = EventRaceResultMaster__GetTargetGoalTime(
                     (EventRaceResultMaster_o *)MasterData_object,
                     eventId,
                     round,
                     groupId,
                     0);
        v32 = EntityList->max_length;
        *(_QWORD *)(v23 + 56) = Instance;
        if ( (unsigned int)v21 >= v32 )
          goto LABEL_76;
        v33 = m_Items[v21];
        if ( !v33 )
          goto LABEL_75;
        GoalRate = EventRaceMaster__GetGoalRate(v80, eventId, round, v33->fields.groupId, 0);
        v41 = *(_QWORD *)(v23 + 40);
        v42 = *(_QWORD *)(v23 + 48);
        *(float *)(v23 + 64) = GoalRate;
        if ( v41 <= v42 )
        {
          if ( !v15 )
            goto LABEL_75;
          items = v15->fields._items;
          v48 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_75;
          size = v15->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v50 = v48[4];
            v51 = v15;
            goto LABEL_51;
          }
          v46 = &items->obj.klass + size;
          v15->fields._size = size + 1;
        }
        else
        {
          if ( !v16 )
            goto LABEL_75;
          v43 = v16->fields._items;
          v44 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v16->fields._version;
          if ( !v43 )
            goto LABEL_75;
          v45 = v16->fields._size;
          if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
          {
            v50 = v44[4];
            v51 = v16;
LABEL_51:
            System_Collections_Generic_List_object___AddWithResize(
              v51,
              (Il2CppObject *)v23,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50 + 192) + 112LL));
            continue;
          }
          v46 = &v43->obj.klass + v45;
          v16->fields._size = v45 + 1;
        }
        v46[4] = (Il2CppClass *)v23;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v46 + 4), v23, v34, v35, v36, v37, v38, v39);
      }
      while ( (_DWORD)max_length != (_DWORD)++v21 );
    }
    if ( v15 && v15->fields._size >= 2 )
    {
      v52 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
      System_Comparison_object____ctor(v52, v78, Method_EventRankingListViewManager_GoalTimeSort__, 0);
      System_Collections_Generic_List_object___Sort_71636404(
        v15,
        v52,
        (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( v16 && v16->fields._size >= 2 )
    {
      v53 = EventRankingListViewManager___c_TypeInfo;
      if ( !*(&EventRankingListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo, v10, v20);
        v53 = EventRankingListViewManager___c_TypeInfo;
      }
      static_fields = v53->static_fields;
      _9__19_0 = (System_Comparison_T__o *)static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( !*(&v53->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v53, v10, v20);
          static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        }
        v56 = (Il2CppObject *)static_fields->__9;
        _9__19_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
        System_Comparison_object____ctor(_9__19_0, v56, Method_EventRankingListViewManager___c__CreateList_b__19_0__, 0);
        v57 = EventRankingListViewManager___c_TypeInfo->static_fields;
        v57->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v57->__9__19_0,
          (int32_t)_9__19_0,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
      }
      System_Collections_Generic_List_object___Sort_71636404(
        v16,
        _9__19_0,
        (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( !v15 )
LABEL_75:
      sub_21FFECC(Instance, v10);
    System_Collections_Generic_List_object___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)v16,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( (int)max_length >= 1 )
    {
      v64 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v64++,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
        v66 = (EventRankingListViewItem_o *)sub_21FFEBC(EventRankingListViewItem_TypeInfo);
        EventRankingListViewItem___ctor(v66, (EventRankingRoundItemInfo_o *)Item, v64, v19 < v79, v81 & 1, round, v67);
        Instance = (int64_t)v78[12].klass;
        if ( !Instance )
          goto LABEL_75;
        v74 = *(_QWORD *)(Instance + 16);
        v75 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v74 )
          goto LABEL_75;
        v76 = *(int *)(Instance + 24);
        if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v66,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = v74 + 8 * v76;
          *(_DWORD *)(Instance + 24) = v76 + 1;
          *(_QWORD *)(v77 + 32) = v66;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v77 + 32), (int32_t)v66, v68, v69, v70, v71, v72, v73);
        }
      }
      while ( (_DWORD)max_length != v64 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v78, -1, 0, -1, 0);
  }
}


int32_t EventRankingListViewManager__GetAlphaAnimCnt(
        EventRankingListViewManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.alphaAnimCnt % length;
}


EventRankingListViewItem_o *EventRankingListViewManager__GetItem(
        EventRankingListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventRankingListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5932882 & 1) == 0 )
  {
    sub_21FFC50(&EventRankingListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5932882 = 1;
  }
  result = (EventRankingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRankingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = EventRankingListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (EventRankingListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != EventRankingListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


int32_t EventRankingListViewManager__GoalTimeSort(
        EventRankingListViewManager_o *this,
        EventRankingRoundItemInfo_o *x,
        EventRankingRoundItemInfo_o *y,
        const MethodInfo *method)
{
  int64_t goalTime; // x8
  int64_t v5; // x9

  if ( !x || !y )
    sub_21FFECC(this, x);
  goalTime = x->fields.goalTime;
  v5 = y->fields.goalTime;
  if ( goalTime > v5 )
    return 1;
  if ( goalTime < v5 )
    return -1;
  return x->fields.groupId - y->fields.groupId;
}


void EventRankingListViewManager__OnChangeAlphaAnim(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_593288C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    byte_593288C = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventRankingListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)EventRankingListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v6,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_21FFECC(ObjectList, v4);
  }
}


void EventRankingListViewManager__OnClickListView(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  DataManager_o *Item; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 naturalAligment; // x9
  DataManager_c *klass; // x8
  __int64 namespaze_low; // x9
  int v14; // w10
  GiftEntity_o *data; // x20
  int32_t type; // w8
  Il2CppObject *Entity; // x20
  Il2CppObject *v18; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v19; // x22
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v21; // x22

  if ( (byte_5932888 & 1) == 0 )
  {
    sub_21FFC50(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_EventRankingListViewManager_CloseItemDetail__);
    sub_21FFC50(&Method_EventRankingListViewManager_CloseSvtDetail__);
    sub_21FFC50(&Method_EventRankingListViewManager_OnClickListView__);
    sub_21FFC50(&EventRankingListViewObject_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932888 = 1;
  }
  v5 = Method_EventRankingListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_EventRankingListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !obj )
    goto LABEL_24;
  naturalAligment = EventRankingListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventRankingListViewObject_TypeInfo )
  {
    Item = (DataManager_o *)sub_220024C(obj, EventRankingListViewObject_TypeInfo, v9, v10);
    goto LABEL_26;
  }
  Item = (DataManager_o *)EventRankingListViewObject__GetItem(
                            (EventRankingListViewObject_o *)obj,
                            (const MethodInfo *)EventRankingListViewObject_TypeInfo);
  if ( !Item )
    goto LABEL_24;
  klass = Item[1].klass;
  if ( !klass )
    goto LABEL_24;
  namespaze_low = LODWORD(klass->_1.namespaze);
  if ( namespaze_low != 1 )
  {
    v14 = this->fields.alphaAnimCnt % (int)namespaze_low;
    if ( v14 < (unsigned int)namespaze_low )
    {
      klass = (DataManager_c *)((char *)klass + 8 * v14);
      goto LABEL_13;
    }
LABEL_26:
    sub_21FFED4(Item);
  }
LABEL_13:
  data = (GiftEntity_o *)klass->_1.byval_arg.data;
  if ( !data )
    goto LABEL_24;
  type = data->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v21,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0);
    if ( !Instance )
      goto LABEL_24;
    CommonUI__OpenServantStatusDialog_37305676((CommonUI_o *)Instance, 7, data, v21, 0);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_object_(
                                Item,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                   data->fields.objectId,
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v19 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_21FFEBC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          (intptr_t)Method_EventRankingListViewManager_CloseItemDetail__,
          0);
        if ( v18 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v18, (ItemEntity_o *)Entity, v19, 50, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_21FFECC(Item, v8);
  }
}


void EventRankingListViewManager__OnMoveEnd(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_5932887 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932887 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_20;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.element_class)(
          gameObject,
          1,
          gameObject->klass[1]._1.castClass);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_18;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
LABEL_18:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
          if ( callbackFunc2 )
            ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
              callbackFunc2->fields.method_code,
              callbackFunc2->fields.method);
          return;
        }
      }
LABEL_20:
      sub_21FFECC(gameObject, v8);
    }
  }
}


void EventRankingListViewManager__RequestInto(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w24
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w25
  int32_t i; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3
  System_String_o *v13; // x1
  float v14; // s0

  if ( (byte_5932886 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5932886 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_21FFECC(ObjectList, v5);
  size = ObjectList->fields._size;
  v7 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v8 = 0;
  for ( i = 0; i != size; ++i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             i,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      EventRankingListViewObject__Init_38546136(
        (EventRankingListViewObject_o *)Item,
        4,
        v11,
        this->fields.listInDelay,
        v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
  }
  if ( !v8 )
  {
LABEL_12:
    v13 = (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/;
    v14 = this->fields.listInDelay + 0.5;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v13, v14, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRankingListViewManager__RequestListObject(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3
  System_String_o *v15; // x1

  if ( (byte_5932885 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5932885 = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v11 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventRankingListViewObject__Init_38545616((EventRankingListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_21FFECC(ObjectList, v8);
  }
  v15 = (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/;
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v15, delay, 0);
}


void EventRankingListViewManager__ResetAlphaAnimTime(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.alphaAnimNow = _D0;
  this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
}


void EventRankingListViewManager__SetMode(
        EventRankingListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EventRankingListViewManager__SetMode_38544888(this, mode, v10);
}


void EventRankingListViewManager__SetMode_38544888(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  EventRankingListViewManager_o *v6; // x0
  int32_t v7; // w1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_5932884 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_11820/*"RequestInto"*/);
    byte_5932884 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  switch ( mode )
  {
    case 1:
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
        {
          sub_21FFECC(gameObject, v11);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11820/*"RequestInto"*/,
        0.0,
        0);
      break;
    case 3:
      v6 = this;
      v7 = 3;
      goto LABEL_8;
    case 2:
      v6 = this;
      v7 = 2;
LABEL_8:
      EventRankingListViewManager__RequestListObject(v6, v7, 0.0, v5);
      break;
  }
}


void EventRankingListViewManager__SetMode_38545196(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  EventRankingListViewManager__SetMode_38544888(this, mode, v11);
}


void EventRankingListViewManager__SetObjectItem(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5932883 & 1) == 0 )
  {
    sub_21FFC50(&EventRankingListViewObject_TypeInfo);
    byte_5932883 = 1;
  }
  if ( obj
    && (naturalAligment = EventRankingListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == EventRankingListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 3 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  EventRankingListViewObject__Init_38544760((EventRankingListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void EventRankingListViewManager__Update(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0);
  EventRankingListViewManager__UpdateAnim(this, v3);
}


void EventRankingListViewManager__UpdateAnim(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventRankingListViewManager_c *v4; // x0
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  float realtimeSinceStartup; // s0
  EventRankingListViewManager_c *v10; // x0
  int32_t alphaAnimCnt; // w8
  int v12; // w9
  int32_t v13; // w21
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v15; // w21

  if ( (byte_593288B & 1) == 0 )
  {
    sub_21FFC50(&EventRankingListViewManager_TypeInfo);
    byte_593288B = 1;
  }
  v4 = EventRankingListViewManager_TypeInfo;
  alphaAnimNow = this->fields.alphaAnimNow;
  alphaAnimTgt = this->fields.alphaAnimTgt;
  if ( !*(&EventRankingListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewManager_TypeInfo, method, v2);
    v4 = EventRankingListViewManager_TypeInfo;
  }
  this->fields.alphaAnimNow = alphaAnimNow
                            + (float)((float)(alphaAnimTgt - alphaAnimNow) * v4->static_fields->ALPHA_ANIMATION_SPD);
  if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.alphaAnimTimeOld) >= EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL )
  {
    this->fields.alphaAnimTgt = 0.0;
    this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
  }
  if ( this->fields.alphaAnimTgt <= 0.0 && this->fields.alphaAnimNow <= 0.01 )
  {
    *(_QWORD *)&this->fields.alphaAnimNow = 0x3F80000000000000LL;
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    v10 = EventRankingListViewManager_TypeInfo;
    alphaAnimCnt = this->fields.alphaAnimCnt;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    v12 = *(&v10->_2.cctor_finished + 1);
    v13 = alphaAnimCnt + 1;
    this->fields.alphaAnimCnt = alphaAnimCnt + 1;
    if ( !v12 )
    {
      j_il2cpp_runtime_class_init_0(v10, v7, v8);
      v10 = EventRankingListViewManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v10->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v13 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v15 = this->fields.alphaAnimCnt;
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v7, v8);
        ALPHA_ANIM_COUNT_RESET_VAL = EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.alphaAnimCnt = v15 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    EventRankingListViewManager__OnChangeAlphaAnim(this, v7);
  }
}


void EventRankingListViewManager__add_callbackFunc2(
        EventRankingListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_593287D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593287D = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRankingListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  EventRankingListViewManager__remove_callbackFunc2(v11, v12, v13);
}


float EventRankingListViewManager__get_AlphaAnimNow(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


System_Collections_Generic_List_EventRankingListViewObject__o *EventRankingListViewManager__get_ClippingObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  Il2CppObject *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0

  if ( (byte_5932880 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932880 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_22;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !Component_object )
          break;
        v12 = (Il2CppObject *)Component_object;
        Component_object = (System_Collections_Generic_List_object__o *)EventRankingListViewObject__GetItem(
                                                                          (EventRankingListViewObject_o *)Component_object,
                                                                          v5);
        if ( !Component_object )
          break;
        v5 = (const MethodInfo *)Component_object;
        if ( !LOBYTE(Component_object[2].fields._items)
          || (Component_object = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50765052(
                                                                                (ListViewManager_o *)this,
                                                                                (ListViewItem_o *)Component_object,
                                                                                0),
              ((unsigned __int8)Component_object & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v20 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v21 = v3->fields._size;
          if ( (unsigned int)v21 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v12,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + v21;
            v3->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
    }
LABEL_22:
    sub_21FFECC(Component_object, v5);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
}


System_Collections_Generic_List_EventRankingListViewObject__o *EventRankingListViewManager__get_ObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_object__o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_593287F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593287F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v20 = v3->fields._size;
        v21 = Component_object;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v20;
          v3->fields._size = v20 + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
    }
LABEL_18:
    sub_21FFECC(Component_object, v5);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
}


void EventRankingListViewManager__remove_callbackFunc2(
        EventRankingListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventRankingListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_593287E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593287E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventRankingListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  EventRankingListViewManager__Update(v11, v12);
}


void EventRankingListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593288E & 1) == 0 )
  {
    sub_21FFC50(&EventRankingListViewManager___c_TypeInfo);
    byte_593288E = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventRankingListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRankingListViewManager___c_TypeInfo->static_fields->__9 = (struct EventRankingListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventRankingListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventRankingListViewManager___c___ctor(EventRankingListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventRankingListViewManager___c___CreateList_b__19_0(
        EventRankingListViewManager___c_o *this,
        EventRankingRoundItemInfo_o *a,
        EventRankingRoundItemInfo_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  if ( !b || !a )
    sub_21FFECC(this, a);
  return System_Single__CompareTo_77012320(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}