void EventRankingListViewManager___cctor(const MethodInfo *method)
{
  struct EventRankingListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4D2ADE8 & 1) == 0 )
  {
    sub_1C93AD4(&EventRankingListViewManager_TypeInfo);
    byte_4D2ADE8 = 1;
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

  if ( (byte_4D2ADE4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventRankingListViewManager_CloseItemDetail__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2ADE4 = 1;
  }
  v3 = Method_EventRankingListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_EventRankingListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2ADE5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2ADE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
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
  TotalEventRaceEntity_array *v11; // x25
  EventPointGroupEntity_array *EntityList; // x26
  EventRaceMaster_o *v13; // x28
  EventRaceEntity_o *Entity; // x29
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v16; // x23
  System_Collections_Generic_List_object__o *v17; // x24
  int v18; // w20
  int i; // w28
  unsigned int v20; // w20
  __int64 v21; // x19
  struct System_Int32_array *giftIds; // x9
  Il2CppClass **v23; // x21
  Il2CppClass *v24; // x9
  char *v25; // x21
  Il2CppClass *v26; // t1
  int32_t name_high; // w3
  struct System_Int64_array *goalPoints; // x9
  TotalEventRaceEntity_o *v29; // x8
  float GoalRate; // s0
  __int64 v31; // x8
  __int64 v32; // x9
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  __int64 v40; // x8
  System_Collections_Generic_List_object__o *v41; // x0
  System_Comparison_T__o *v42; // x19
  EventRankingListViewManager___c_c *v43; // x0
  System_Comparison_T__o *_9__19_0; // x19
  Il2CppObject *v45; // x21
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x0
  int32_t v47; // w19
  Il2CppObject *Item; // x25
  EventRankingListViewItem_o *v49; // x22
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  char v54; // [xsp+4h] [xbp-8Ch]
  Il2CppObject *v55; // [xsp+8h] [xbp-88h]
  EventRaceMaster_o *v56; // [xsp+10h] [xbp-80h]
  int v57; // [xsp+1Ch] [xbp-74h]
  int max_length; // [xsp+28h] [xbp-68h]

  if ( (byte_4D2ADDC & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_EventRankingRoundItemInfo__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1C93AD4(&EventRankingListViewItem_TypeInfo);
    sub_1C93AD4(&Method_EventRankingListViewManager_GoalTimeSort__);
    sub_1C93AD4(&EventRankingRoundItemInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_EventRankingListViewManager___c__CreateList_b__19_0__);
    sub_1C93AD4(&EventRankingListViewManager___c_TypeInfo);
    byte_4D2ADDC = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_75;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0);
  if ( TargetTermRaceEntityList )
  {
    v11 = TargetTermRaceEntityList;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_75;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v55 = (Il2CppObject *)this;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_75;
    v13 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    max_length = v11->max_length;
    v16 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v17 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_75;
    v18 = userSupportPoints->max_length;
    v56 = v13;
    if ( v18 < 1 )
    {
      i = 0;
    }
    else
    {
      for ( i = 0; i != v18; ++i )
      {
        if ( v18 == i )
LABEL_76:
          sub_1C93D34(Instance);
        if ( userSupportPoints->m_Items[i] > 0 )
          break;
      }
    }
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v57 = v18;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventScriptMaster___);
    if ( !Instance )
      goto LABEL_75;
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0);
    v54 = Instance;
    if ( max_length >= 1 )
    {
      v20 = 0;
      do
      {
        v21 = sub_1C93D20(EventRankingRoundItemInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v21, 0);
        if ( !v21 )
          goto LABEL_75;
        *(_DWORD *)(v21 + 16) = eventId;
        if ( !Entity )
          goto LABEL_75;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_75;
        if ( v20 >= LODWORD(giftIds->max_length) )
          goto LABEL_76;
        *(_DWORD *)(v21 + 20) = giftIds->m_Items[v20];
        if ( !EntityList )
          goto LABEL_75;
        if ( v20 >= LODWORD(EntityList->max_length) )
          goto LABEL_76;
        v23 = &EntityList->obj.klass + (int)v20;
        v26 = v23[4];
        v25 = (char *)(v23 + 4);
        v24 = v26;
        if ( !v26 )
          goto LABEL_75;
        name_high = HIDWORD(v24->_1.name);
        *(_DWORD *)(v21 + 24) = name_high;
        *(_DWORD *)(v21 + 28) = v24->_1.byval_arg.data;
        if ( v20 >= LODWORD(userSupportPoints->max_length) )
          goto LABEL_76;
        *(_QWORD *)(v21 + 32) = userSupportPoints->m_Items[v20];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_75;
        if ( v20 >= LODWORD(goalPoints->max_length) )
          goto LABEL_76;
        *(_QWORD *)(v21 + 40) = goalPoints->m_Items[v20];
        if ( v20 >= LODWORD(v11->max_length) )
          goto LABEL_76;
        v29 = v11->m_Items[v20];
        if ( !v29 )
          goto LABEL_75;
        *(_QWORD *)(v21 + 48) = v29->fields.totalPoint;
        if ( !MasterData_object )
          goto LABEL_75;
        Instance = EventRaceResultMaster__GetTargetGoalTime(
                     (EventRaceResultMaster_o *)MasterData_object,
                     eventId,
                     round,
                     name_high,
                     0);
        *(_QWORD *)(v21 + 56) = Instance;
        if ( v20 >= LODWORD(EntityList->max_length) )
          goto LABEL_76;
        if ( !*(_QWORD *)v25 )
          goto LABEL_75;
        GoalRate = EventRaceMaster__GetGoalRate(v56, eventId, round, *(_DWORD *)(*(_QWORD *)v25 + 20LL), 0);
        v31 = *(_QWORD *)(v21 + 40);
        v32 = *(_QWORD *)(v21 + 48);
        *(float *)(v21 + 64) = GoalRate;
        if ( v31 <= v32 )
        {
          if ( !v16 )
            goto LABEL_75;
          items = v16->fields._items;
          v38 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_75;
          size = v16->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v40 = v38[4];
            v41 = v16;
            goto LABEL_51;
          }
          v36 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          if ( !v17 )
            goto LABEL_75;
          v33 = v17->fields._items;
          v34 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v17->fields._version;
          if ( !v33 )
            goto LABEL_75;
          v35 = v17->fields._size;
          if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
          {
            v40 = v34[4];
            v41 = v17;
LABEL_51:
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)v21,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v40 + 192) + 112LL));
            continue;
          }
          v36 = &v33->obj.klass + v35;
          v17->fields._size = v35 + 1;
        }
        v36[4] = (Il2CppClass *)v21;
        Instance = sub_1C93A78(v36 + 4, v21);
      }
      while ( max_length != ++v20 );
    }
    if ( v16 && v16->fields._size >= 2 )
    {
      v42 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
      System_Comparison_object____ctor(v42, v55, Method_EventRankingListViewManager_GoalTimeSort__, 0);
      System_Collections_Generic_List_object___Sort_59225184(
        v16,
        v42,
        (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( v17 && v17->fields._size >= 2 )
    {
      v43 = EventRankingListViewManager___c_TypeInfo;
      if ( !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo);
        v43 = EventRankingListViewManager___c_TypeInfo;
      }
      _9__19_0 = (System_Comparison_T__o *)v43->static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = EventRankingListViewManager___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v43->static_fields->__9;
        _9__19_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
        System_Comparison_object____ctor(_9__19_0, v45, Method_EventRankingListViewManager___c__CreateList_b__19_0__, 0);
        static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_1C93A78(&static_fields->__9__19_0, _9__19_0);
      }
      System_Collections_Generic_List_object___Sort_59225184(
        v17,
        _9__19_0,
        (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( !v16 )
LABEL_75:
      sub_1C93D2C(Instance, v9);
    System_Collections_Generic_List_object___AddRange(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)v17,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( max_length >= 1 )
    {
      v47 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v16,
                 v47++,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
        v49 = (EventRankingListViewItem_o *)sub_1C93D20(EventRankingListViewItem_TypeInfo);
        EventRankingListViewItem___ctor(v49, (EventRankingRoundItemInfo_o *)Item, v47, i < v57, v54 & 1, round, 0);
        Instance = (__int64)v55[12].klass;
        if ( !Instance )
          goto LABEL_75;
        v50 = *(_QWORD *)(Instance + 16);
        v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v50 )
          goto LABEL_75;
        v52 = *(int *)(Instance + 24);
        if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v49,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = v50 + 8 * v52;
          *(_DWORD *)(Instance + 24) = v52 + 1;
          *(_QWORD *)(v53 + 32) = v49;
          sub_1C93A78(v53 + 32, v49);
        }
      }
      while ( max_length != v47 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v55, -1, 0, -1, 0);
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

  if ( (byte_4D2ADDD & 1) == 0 )
  {
    sub_1C93AD4(&EventRankingListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2ADDD = 1;
  }
  result = (EventRankingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRankingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C93D2C(this, x);
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

  if ( (byte_4D2ADE7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    byte_4D2ADE7 = 1;
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
                                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1C93D2C(ObjectList, v4);
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

  if ( (byte_4D2ADE3 & 1) == 0 )
  {
    sub_1C93AD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_EventRankingListViewManager_CloseItemDetail__);
    sub_1C93AD4(&Method_EventRankingListViewManager_CloseSvtDetail__);
    sub_1C93AD4(&Method_EventRankingListViewManager_OnClickListView__);
    sub_1C93AD4(&EventRankingListViewObject_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2ADE3 = 1;
  }
  v5 = Method_EventRankingListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C93AEC(Method_EventRankingListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !obj )
    goto LABEL_24;
  naturalAligment = EventRankingListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventRankingListViewObject_TypeInfo )
  {
    Item = (DataManager_o *)sub_1C940C8(obj);
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
    sub_1C93D34(Item);
  }
LABEL_13:
  data = (GiftEntity_o *)klass->_1.byval_arg.data;
  if ( !data )
    goto LABEL_24;
  type = data->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0);
    if ( !Instance )
      goto LABEL_24;
    CommonUI__OpenServantStatusDialog_31594436((CommonUI_o *)Instance, 7, data, v19, 0);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_object_(
                                Item,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                   data->fields.objectId,
                   (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C93D20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
    sub_1C93D2C(Item, v8);
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

  if ( (byte_4D2ADE2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ADE2 = 1;
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
          sub_1C93A78(&this->fields.callbackFunc2, 0);
          if ( callbackFunc2 )
            ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
              callbackFunc2->fields.method_code,
              callbackFunc2->fields.method);
          return;
        }
      }
LABEL_20:
      sub_1C93D2C(gameObject, v7);
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

  if ( (byte_4D2ADE1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2ADE1 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C93D2C(ObjectList, v5);
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
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      EventRankingListViewObject__Init_32516336(
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
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
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

  if ( (byte_4D2ADE0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2ADE0 = 1;
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
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventRankingListViewObject__Init_32515816((EventRankingListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1C93D2C(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
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
  sub_1C93A78(&this->fields.callbackFunc2, callback);
  EventRankingListViewManager__SetMode_32515092(this, mode, v6);
}


void EventRankingListViewManager__SetMode_32515092(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4D2ADDF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_11432/*"RequestInto"*/);
    byte_4D2ADDF = 1;
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
          sub_1C93D2C(gameObject, v8);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11432/*"RequestInto"*/,
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


void EventRankingListViewManager__SetMode_32515396(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1C93A78(&this->fields.callbackFunc2, callback);
  EventRankingListViewManager__SetMode_32515092(this, mode, v7);
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
  if ( (byte_4D2ADDE & 1) == 0 )
  {
    this = (EventRankingListViewManager_o *)sub_1C93AD4(&EventRankingListViewObject_TypeInfo);
    byte_4D2ADDE = 1;
  }
  if ( !obj
    || (naturalAligment = EventRankingListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  EventRankingListViewObject__Init_32514964((EventRankingListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4D2ADE6 & 1) == 0 )
  {
    sub_1C93AD4(&EventRankingListViewManager_TypeInfo);
    byte_4D2ADE6 = 1;
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

  if ( (byte_4D2ADD8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2ADD8 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_1C940C8(v7);
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

  if ( (byte_4D2ADDB & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ADDB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
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
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
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
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44503492(
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
              *(const MethodInfo_387999C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          }
          else
          {
            v13 = &items->obj.klass + v12;
            v3->fields._size = v12 + 1;
            v13[4] = (Il2CppClass *)v9;
            sub_1C93A78(v13 + 4, v9);
          }
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1C93D2C(objectList, v4);
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

  if ( (byte_4D2ADDA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ADDA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
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
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
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
            *(const MethodInfo_387999C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + v11;
          v3->fields._size = v11 + 1;
          v13[4] = (Il2CppClass *)v12;
          sub_1C93A78(v13 + 4, v12);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C93D2C(objectList, v4);
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

  if ( (byte_4D2ADD9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2ADD9 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventRankingListViewManager_o *)sub_1C940C8(v7);
  EventRankingListViewManager__Update(v10, v11);
}


void EventRankingListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D2ADE9 & 1) == 0 )
  {
    sub_1C93AD4(&EventRankingListViewManager___c_TypeInfo);
    byte_4D2ADE9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventRankingListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventRankingListViewManager___c_TypeInfo->static_fields->__9 = (struct EventRankingListViewManager___c_o *)v1;
  sub_1C93A78(EventRankingListViewManager___c_TypeInfo->static_fields, v1);
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
    sub_1C93D2C(this, a);
  return System_Single__CompareTo_66018744(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}