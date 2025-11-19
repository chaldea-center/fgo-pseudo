void EventRankingListViewManager___cctor(const MethodInfo *method)
{
  struct EventRankingListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4CB084E & 1) == 0 )
  {
    sub_1C6BA08(&EventRankingListViewManager_TypeInfo);
    byte_4CB084E = 1;
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

  if ( (byte_4CB084A & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventRankingListViewManager_CloseItemDetail__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB084A = 1;
  }
  v3 = Method_EventRankingListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_EventRankingListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB084B & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB084B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
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
  __int64 Instance; // x0
  __int64 v9; // x1
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // x0
  EventPointGroupEntity_array *EntityList; // x27
  EventRaceMaster_o *v12; // x26
  EventRaceEntity_o *Entity; // x28
  System_Collections_Generic_List_object__o *v14; // x24
  System_Collections_Generic_List_object__o *v15; // x25
  int v16; // w20
  int i; // w29
  unsigned int v18; // w20
  EventRankingRoundItemInfo_o *v19; // x22
  struct System_Int32_array *giftIds; // x8
  Il2CppClass **v21; // x21
  Il2CppClass *v22; // x8
  char *v23; // x21
  Il2CppClass *v24; // t1
  struct System_String_o *namespaze; // x1
  __int64 v26; // x8
  int32_t v27; // w3
  struct System_Int64_array *goalPoints; // x8
  TotalEventRaceEntity_o *v29; // x8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  System_Collections_Generic_List_object__o *v38; // x0
  System_Comparison_T__o *v39; // x19
  EventRankingListViewManager___c_c *v40; // x0
  System_Comparison_T__o *_9__19_0; // x19
  Il2CppObject *v42; // x21
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x0
  int32_t v44; // w19
  Il2CppObject *Item; // x25
  EventRankingListViewItem_o *v46; // x22
  const MethodInfo *v47; // x6
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  char v52; // [xsp+Ch] [xbp-94h]
  Il2CppObject *v53; // [xsp+10h] [xbp-90h]
  EventRaceResultMaster_o *MasterData_object; // [xsp+18h] [xbp-88h]
  int v55; // [xsp+20h] [xbp-80h]
  TotalEventRaceEntity_array *v57; // [xsp+28h] [xbp-78h]
  int max_length; // [xsp+38h] [xbp-68h]

  if ( (byte_4CB0842 & 1) == 0 )
  {
    sub_1C6BA08(&System_Comparison_EventRankingRoundItemInfo__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1C6BA08(&EventRankingListViewItem_TypeInfo);
    sub_1C6BA08(&Method_EventRankingListViewManager_GoalTimeSort__);
    sub_1C6BA08(&EventRankingRoundItemInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_EventRankingListViewManager___c__CreateList_b__19_0__);
    sub_1C6BA08(&EventRankingListViewManager___c_TypeInfo);
    byte_4CB0842 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_77;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0);
  if ( TargetTermRaceEntityList )
  {
    v57 = TargetTermRaceEntityList;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_77;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v53 = (Il2CppObject *)this;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_77;
    v12 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    MasterData_object = (EventRaceResultMaster_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    max_length = v57->max_length;
    v14 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_77;
    v16 = userSupportPoints->max_length;
    if ( v16 < 1 )
    {
      i = 0;
    }
    else
    {
      for ( i = 0; i != v16; ++i )
      {
        if ( v16 == i )
LABEL_78:
          sub_1C6BC68(Instance);
        if ( userSupportPoints->m_Items[i] > 0 )
          break;
      }
    }
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v55 = v16;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventScriptMaster___);
    if ( !Instance )
      goto LABEL_77;
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0);
    v52 = Instance;
    if ( max_length >= 1 )
    {
      v18 = 0;
      do
      {
        v19 = (EventRankingRoundItemInfo_o *)sub_1C6BC54(EventRankingRoundItemInfo_TypeInfo);
        EventRankingRoundItemInfo___ctor(v19, 0);
        if ( !v19 )
          goto LABEL_77;
        v19->fields.eventId = eventId;
        if ( !Entity )
          goto LABEL_77;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_77;
        if ( v18 >= LODWORD(giftIds->max_length) )
          goto LABEL_78;
        v19->fields.rewardItemId = giftIds->m_Items[v18];
        if ( !EntityList )
          goto LABEL_77;
        if ( v18 >= LODWORD(EntityList->max_length) )
          goto LABEL_78;
        v21 = &EntityList->obj.klass + (int)v18;
        v24 = v21[4];
        v23 = (char *)(v21 + 4);
        v22 = v24;
        if ( !v24 )
          goto LABEL_77;
        namespaze = (struct System_String_o *)v22->_1.namespaze;
        v19->fields.teamName = namespaze;
        Instance = sub_1C6B9AC(&v19->fields.teamName, namespaze);
        if ( v18 >= LODWORD(EntityList->max_length) )
          goto LABEL_78;
        v26 = *(_QWORD *)v23;
        if ( !*(_QWORD *)v23 )
          goto LABEL_77;
        v27 = *(_DWORD *)(v26 + 20);
        v19->fields.groupId = v27;
        v19->fields.groupIconImageId = *(_DWORD *)(v26 + 32);
        if ( v18 >= LODWORD(userSupportPoints->max_length) )
          goto LABEL_78;
        v19->fields.supportPoint = userSupportPoints->m_Items[v18];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_77;
        if ( v18 >= LODWORD(goalPoints->max_length) )
          goto LABEL_78;
        v19->fields.goalPoint = goalPoints->m_Items[v18];
        if ( v18 >= LODWORD(v57->max_length) )
          goto LABEL_78;
        v29 = v57->m_Items[v18];
        if ( !v29 )
          goto LABEL_77;
        Instance = (__int64)MasterData_object;
        v19->fields.nowPoint = v29->fields.totalPoint;
        v19->fields.mostSupportGroupId = mostSupportGroupId;
        if ( !MasterData_object )
          goto LABEL_77;
        Instance = EventRaceResultMaster__GetTargetGoalTime(MasterData_object, eventId, round, v27, 0);
        v19->fields.goalTime = Instance;
        if ( v18 >= LODWORD(EntityList->max_length) )
          goto LABEL_78;
        if ( !*(_QWORD *)v23 )
          goto LABEL_77;
        v19->fields.goalRate = EventRaceMaster__GetGoalRate(v12, eventId, round, *(_DWORD *)(*(_QWORD *)v23 + 20LL), 0);
        Instance = EventRankingRoundItemInfo__get_IsGoal(v19, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_77;
          items = v14->fields._items;
          v31 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_77;
          size = v14->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v37 = v31[4];
            v38 = v14;
LABEL_53:
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)v19,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v37 + 192) + 112LL));
            continue;
          }
          v33 = &items->obj.klass + size;
          v14->fields._size = size + 1;
        }
        else
        {
          if ( !v15 )
            goto LABEL_77;
          v34 = v15->fields._items;
          v35 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v15->fields._version;
          if ( !v34 )
            goto LABEL_77;
          v36 = v15->fields._size;
          if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
          {
            v37 = v35[4];
            v38 = v15;
            goto LABEL_53;
          }
          v33 = &v34->obj.klass + v36;
          v15->fields._size = v36 + 1;
        }
        v33[4] = (Il2CppClass *)v19;
        Instance = sub_1C6B9AC(v33 + 4, v19);
      }
      while ( max_length != ++v18 );
    }
    if ( v14 && v14->fields._size >= 2 )
    {
      v39 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
      System_Comparison_object____ctor(v39, v53, Method_EventRankingListViewManager_GoalTimeSort__, 0);
      System_Collections_Generic_List_object___Sort_58729528(
        v14,
        v39,
        (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( v15 && v15->fields._size >= 2 )
    {
      v40 = EventRankingListViewManager___c_TypeInfo;
      if ( !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo);
        v40 = EventRankingListViewManager___c_TypeInfo;
      }
      _9__19_0 = (System_Comparison_T__o *)v40->static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = EventRankingListViewManager___c_TypeInfo;
        }
        v42 = (Il2CppObject *)v40->static_fields->__9;
        _9__19_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
        System_Comparison_object____ctor(_9__19_0, v42, Method_EventRankingListViewManager___c__CreateList_b__19_0__, 0);
        static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_1C6B9AC(&static_fields->__9__19_0, _9__19_0);
      }
      System_Collections_Generic_List_object___Sort_58729528(
        v15,
        _9__19_0,
        (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( !v14 )
LABEL_77:
      sub_1C6BC60(Instance, v9);
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)v15,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( max_length >= 1 )
    {
      v44 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v14,
                 v44++,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
        v46 = (EventRankingListViewItem_o *)sub_1C6BC54(EventRankingListViewItem_TypeInfo);
        EventRankingListViewItem___ctor(v46, (EventRankingRoundItemInfo_o *)Item, v44, i < v55, v52 & 1, round, v47);
        Instance = (__int64)v53[12].klass;
        if ( !Instance )
          goto LABEL_77;
        v48 = *(_QWORD *)(Instance + 16);
        v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v48 )
          goto LABEL_77;
        v50 = *(int *)(Instance + 24);
        if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v46,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = v48 + 8 * v50;
          *(_DWORD *)(Instance + 24) = v50 + 1;
          *(_QWORD *)(v51 + 32) = v46;
          sub_1C6B9AC(v51 + 32, v46);
        }
      }
      while ( max_length != v44 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v53, -1, 0, -1, 0);
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

  if ( (byte_4CB0843 & 1) == 0 )
  {
    sub_1C6BA08(&EventRankingListViewItem_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CB0843 = 1;
  }
  result = (EventRankingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRankingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C6BC60(this, x);
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

  if ( (byte_4CB084D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    byte_4CB084D = 1;
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
                                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1C6BC60(ObjectList, v4);
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
  __int64 naturalAligment; // x9
  DataManager_c *klass; // x8
  unsigned int namespaze; // w9
  int v12; // w10
  GiftEntity_o *data; // x20
  int32_t type; // w8
  Il2CppObject *Entity; // x20
  Il2CppObject *v16; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x22
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v19; // x22

  if ( (byte_4CB0849 & 1) == 0 )
  {
    sub_1C6BA08(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C6BA08(&Method_EventRankingListViewManager_CloseItemDetail__);
    sub_1C6BA08(&Method_EventRankingListViewManager_CloseSvtDetail__);
    sub_1C6BA08(&Method_EventRankingListViewManager_OnClickListView__);
    sub_1C6BA08(&EventRankingListViewObject_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB0849 = 1;
  }
  v5 = Method_EventRankingListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_EventRankingListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !obj )
    goto LABEL_24;
  naturalAligment = EventRankingListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventRankingListViewObject_TypeInfo )
  {
    Item = (DataManager_o *)sub_1C6BFFC(obj);
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
  namespaze = (unsigned int)klass->_1.namespaze;
  if ( namespaze != 1 )
  {
    v12 = this->fields.alphaAnimCnt % (int)namespaze;
    if ( v12 < namespaze )
    {
      klass = (DataManager_c *)((char *)klass + 8 * v12);
      goto LABEL_13;
    }
LABEL_26:
    sub_1C6BC68(Item);
  }
LABEL_13:
  data = (GiftEntity_o *)klass->_1.byval_arg.data;
  if ( !data )
    goto LABEL_24;
  type = data->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0);
    if ( !Instance )
      goto LABEL_24;
    CommonUI__OpenServantStatusDialog_31431504((CommonUI_o *)Instance, 7, data, v19, 0);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_object_(
                                Item,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                   data->fields.objectId,
                   (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C6BC54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          (intptr_t)Method_EventRankingListViewManager_CloseItemDetail__,
          0);
        if ( v16 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v16, (ItemEntity_o *)Entity, v17, 50, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_1C6BC60(Item, v8);
  }
}


void EventRankingListViewManager__OnMoveEnd(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CB0848 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0848 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          sub_1C6B9AC(&this->fields.callbackFunc2, 0);
          if ( callbackFunc2 )
            ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
              callbackFunc2->fields.method_code,
              callbackFunc2->fields.method);
          return;
        }
      }
LABEL_20:
      sub_1C6BC60(gameObject, v7);
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

  if ( (byte_4CB0847 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB0847 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C6BC60(ObjectList, v5);
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
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      EventRankingListViewObject__Init_32234496(
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
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0);
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

  if ( (byte_4CB0846 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB0846 = 1;
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
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventRankingListViewObject__Init_32233976((EventRankingListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1C6BC60(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
    delay,
    0);
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
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C6B9AC(&this->fields.callbackFunc2, callback);
  EventRankingListViewManager__SetMode_32233252(this, mode, v6);
}


void EventRankingListViewManager__SetMode_32233252(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4CB0845 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_11345/*"RequestInto"*/);
    byte_4CB0845 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  switch ( mode )
  {
    case 1:
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
        {
          sub_1C6BC60(gameObject, v8);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11345/*"RequestInto"*/,
        0.0,
        0);
      break;
    case 3:
      v6 = 3;
      goto LABEL_15;
    case 2:
      v6 = 2;
LABEL_15:
      EventRankingListViewManager__RequestListObject(this, v6, 0.0, v5);
      break;
  }
}


void EventRankingListViewManager__SetMode_32233556(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1C6B9AC(&this->fields.callbackFunc2, callback);
  EventRankingListViewManager__SetMode_32233252(this, mode, v7);
}


void EventRankingListViewManager__SetObjectItem(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventRankingListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CB0844 & 1) == 0 )
  {
    this = (EventRankingListViewManager_o *)sub_1C6BA08(&EventRankingListViewObject_TypeInfo);
    byte_4CB0844 = 1;
  }
  if ( !obj
    || (naturalAligment = EventRankingListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  EventRankingListViewObject__Init_32233124((EventRankingListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void EventRankingListViewManager__Update(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0);
  EventRankingListViewManager__UpdateAnim(this, v3);
}


void EventRankingListViewManager__UpdateAnim(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  EventRankingListViewManager_c *v3; // x0
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  const MethodInfo *v6; // x1
  float realtimeSinceStartup; // s0
  int32_t alphaAnimCnt; // w8
  int32_t v9; // w21
  EventRankingListViewManager_c *v10; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v12; // w21

  if ( (byte_4CB084C & 1) == 0 )
  {
    sub_1C6BA08(&EventRankingListViewManager_TypeInfo);
    byte_4CB084C = 1;
  }
  v3 = EventRankingListViewManager_TypeInfo;
  alphaAnimNow = this->fields.alphaAnimNow;
  alphaAnimTgt = this->fields.alphaAnimTgt;
  if ( !EventRankingListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewManager_TypeInfo);
    v3 = EventRankingListViewManager_TypeInfo;
  }
  this->fields.alphaAnimNow = alphaAnimNow
                            + (float)((float)(alphaAnimTgt - alphaAnimNow) * v3->static_fields->ALPHA_ANIMATION_SPD);
  if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.alphaAnimTimeOld) >= EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL )
  {
    this->fields.alphaAnimTgt = 0.0;
    this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
  }
  if ( this->fields.alphaAnimTgt <= 0.0 && this->fields.alphaAnimNow <= 0.01 )
  {
    *(_QWORD *)&this->fields.alphaAnimNow = 0x3F80000000000000LL;
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    alphaAnimCnt = this->fields.alphaAnimCnt;
    this->fields.alphaAnimTimeOld = realtimeSinceStartup;
    v9 = alphaAnimCnt + 1;
    this->fields.alphaAnimCnt = alphaAnimCnt + 1;
    v10 = EventRankingListViewManager_TypeInfo;
    if ( !EventRankingListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRankingListViewManager_TypeInfo);
      v10 = EventRankingListViewManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v10->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v9 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v12 = this->fields.alphaAnimCnt;
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        ALPHA_ANIM_COUNT_RESET_VAL = EventRankingListViewManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.alphaAnimCnt = v12 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    EventRankingListViewManager__OnChangeAlphaAnim(this, v6);
  }
}


void EventRankingListViewManager__add_callbackFunc2(
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

  if ( (byte_4CB083E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB083E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_1C6BFFC(v7);
  EventRankingListViewManager__remove_callbackFunc2(v10, v11, v12);
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
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v9; // x22
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 v12; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4CB0841 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0841 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !objectList )
          break;
        v9 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)EventRankingListViewObject__GetItem(
                                                                    (EventRankingListViewObject_o *)objectList,
                                                                    v4);
        if ( !objectList )
          break;
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44066648(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v11 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v12 = v3->fields._size;
          if ( (unsigned int)v12 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v9,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          }
          else
          {
            v13 = &items->obj.klass + v12;
            v3->fields._size = v12 + 1;
            v13[4] = (Il2CppClass *)v9;
            sub_1C6B9AC(v13 + 4, v9);
          }
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1C6BC60(objectList, v4);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
}


System_Collections_Generic_List_EventRankingListViewObject__o *EventRankingListViewManager__get_ObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  System_Collections_Generic_List_object__o *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4CB0840 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0840 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v11 = v3->fields._size;
        v12 = objectList;
        if ( (unsigned int)v11 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + v11;
          v3->fields._size = v11 + 1;
          v13[4] = (Il2CppClass *)v12;
          sub_1C6B9AC(v13 + 4, v12);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C6BC60(objectList, v4);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
}


void EventRankingListViewManager__remove_callbackFunc2(
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

  if ( (byte_4CB083F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB083F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_1C6BFFC(v7);
  EventRankingListViewManager__Update(v10, v11);
}


void EventRankingListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CB084F & 1) == 0 )
  {
    sub_1C6BA08(&EventRankingListViewManager___c_TypeInfo);
    byte_4CB084F = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventRankingListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRankingListViewManager___c_TypeInfo->static_fields->__9 = (struct EventRankingListViewManager___c_o *)v1;
  sub_1C6B9AC(EventRankingListViewManager___c_TypeInfo->static_fields, v1);
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
    sub_1C6BC60(this, a);
  return System_Single__CompareTo_65559812(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}