void __fastcall EventRankingListViewManager___cctor(const MethodInfo *method)
{
  struct EventRankingListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4A5F127 & 1) == 0 )
  {
    sub_1B885B0(&EventRankingListViewManager_TypeInfo);
    byte_4A5F127 = 1;
  }
  static_fields = EventRankingListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x404000003F000000LL;
  static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5F123 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRankingListViewManager_CloseItemDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F123 = 1;
  }
  v3 = Method_EventRankingListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventRankingListViewManager_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5F124 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F124 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  __int64 v9; // x1
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // x0
  EventPointGroupEntity_array *EntityList; // x27
  EventRaceMaster_o *v12; // x26
  EventRaceEntity_o *Entity; // x28
  System_Collections_Generic_List_object__o *v14; // x24
  System_Collections_Generic_List_object__o *v15; // x25
  signed int v16; // w20
  signed int i; // w29
  il2cpp_array_size_t v18; // w20
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Int32_array *giftIds; // x8
  Il2CppClass **v23; // x21
  Il2CppClass *v24; // x8
  char *v25; // x21
  Il2CppClass *v26; // t1
  const char *namespaze; // x1
  __int64 v28; // x8
  int32_t v29; // w3
  struct System_Int64_array *goalPoints; // x8
  TotalEventRaceEntity_o *v31; // x8
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  System_Collections_Generic_List_object__o *v42; // x0
  System_Comparison_T__o *v43; // x19
  EventRankingListViewManager___c_c *v44; // x0
  System_Comparison_T__o *_9__19_0; // x19
  Il2CppObject *v46; // x21
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w19
  Il2CppObject *Item; // x25
  EventRankingListViewItem_o *v52; // x22
  const MethodInfo *v53; // x6
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8
  char v60; // [xsp+Ch] [xbp-94h]
  Il2CppObject *v61; // [xsp+10h] [xbp-90h]
  EventRaceResultMaster_o *MasterData_object; // [xsp+18h] [xbp-88h]
  signed int v63; // [xsp+20h] [xbp-80h]
  TotalEventRaceEntity_array *v65; // [xsp+28h] [xbp-78h]
  int max_length; // [xsp+38h] [xbp-68h]

  if ( (byte_4A5F11B & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventRankingRoundItemInfo__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_1B885B0(&EventRankingListViewItem_TypeInfo);
    sub_1B885B0(&Method_EventRankingListViewManager_GoalTimeSort__);
    sub_1B885B0(&EventRankingRoundItemInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventRankingListViewManager___c__CreateList_b__19_0__);
    sub_1B885B0(&EventRankingListViewManager___c_TypeInfo);
    byte_4A5F11B = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_77;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0LL);
  if ( TargetTermRaceEntityList )
  {
    v65 = TargetTermRaceEntityList;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_77;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v61 = (Il2CppObject *)this;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_77;
    v12 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    MasterData_object = (EventRaceResultMaster_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    max_length = v65->max_length;
    v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
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
          sub_1B88814(Instance, v9);
        if ( userSupportPoints->m_Items[i] > 0 )
          break;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v63 = v16;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventScriptMaster___);
    if ( !Instance )
      goto LABEL_77;
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0LL);
    v60 = Instance;
    if ( max_length >= 1 )
    {
      v18 = 0;
      do
      {
        v19 = sub_1B887FC(EventRankingRoundItemInfo_TypeInfo);
        EventRankingRoundItemInfo___ctor((EventRankingRoundItemInfo_o *)v19, 0LL);
        if ( !v19 )
          goto LABEL_77;
        *(_DWORD *)(v19 + 16) = eventId;
        if ( !Entity )
          goto LABEL_77;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_77;
        if ( v18 >= giftIds->max_length )
          goto LABEL_78;
        *(_DWORD *)(v19 + 20) = giftIds->m_Items[v18 + 1];
        if ( !EntityList )
          goto LABEL_77;
        if ( v18 >= EntityList->max_length )
          goto LABEL_78;
        v23 = &EntityList->obj.klass + (int)v18;
        v26 = v23[4];
        v25 = (char *)(v23 + 4);
        v24 = v26;
        if ( !v26 )
          goto LABEL_77;
        namespaze = v24->_1.namespaze;
        *(_QWORD *)(v19 + 24) = namespaze;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 24), (int32_t)namespaze, v20, v21);
        if ( v18 >= EntityList->max_length )
          goto LABEL_78;
        v28 = *(_QWORD *)v25;
        if ( !*(_QWORD *)v25 )
          goto LABEL_77;
        v29 = *(_DWORD *)(v28 + 20);
        *(_DWORD *)(v19 + 32) = v29;
        *(_DWORD *)(v19 + 36) = *(_DWORD *)(v28 + 32);
        if ( v18 >= userSupportPoints->max_length )
          goto LABEL_78;
        *(_QWORD *)(v19 + 40) = userSupportPoints->m_Items[v18];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_77;
        if ( v18 >= goalPoints->max_length )
          goto LABEL_78;
        *(_QWORD *)(v19 + 48) = goalPoints->m_Items[v18];
        if ( v18 >= v65->max_length )
          goto LABEL_78;
        v31 = v65->m_Items[v18];
        if ( !v31 )
          goto LABEL_77;
        Instance = (int64_t)MasterData_object;
        *(_QWORD *)(v19 + 56) = v31->fields.totalPoint;
        *(_DWORD *)(v19 + 72) = mostSupportGroupId;
        if ( !MasterData_object )
          goto LABEL_77;
        Instance = EventRaceResultMaster__GetTargetGoalTime(MasterData_object, eventId, round, v29, 0LL);
        *(_QWORD *)(v19 + 64) = Instance;
        if ( v18 >= EntityList->max_length )
          goto LABEL_78;
        if ( !*(_QWORD *)v25 )
          goto LABEL_77;
        *(float *)(v19 + 76) = EventRaceMaster__GetGoalRate(
                                 v12,
                                 eventId,
                                 round,
                                 *(_DWORD *)(*(_QWORD *)v25 + 20LL),
                                 0LL);
        Instance = EventRankingRoundItemInfo__get_IsGoal((EventRankingRoundItemInfo_o *)v19, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_77;
          items = v14->fields._items;
          v35 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_77;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v41 = v35[4];
            v42 = v14;
LABEL_53:
            System_Collections_Generic_List_object___AddWithResize(
              v42,
              (Il2CppObject *)v19,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v41 + 192) + 112LL));
            continue;
          }
          v37 = &items->obj.klass + size;
          v14->fields._size = size + 1;
        }
        else
        {
          if ( !v15 )
            goto LABEL_77;
          v38 = v15->fields._items;
          v39 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v15->fields._version;
          if ( !v38 )
            goto LABEL_77;
          v40 = v15->fields._size;
          if ( (unsigned int)v40 >= v38->max_length )
          {
            v41 = v39[4];
            v42 = v15;
            goto LABEL_53;
          }
          v37 = &v38->obj.klass + v40;
          v15->fields._size = v40 + 1;
        }
        v37[4] = (Il2CppClass *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), v19, v32, v33);
      }
      while ( max_length != ++v18 );
    }
    if ( v14 && v14->fields._size >= 2 )
    {
      v43 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
      System_Comparison_object____ctor(v43, v61, Method_EventRankingListViewManager_GoalTimeSort__, 0LL);
      System_Collections_Generic_List_object___Sort_55571192(
        v14,
        v43,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( v15 && v15->fields._size >= 2 )
    {
      v44 = EventRankingListViewManager___c_TypeInfo;
      if ( !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo);
        v44 = EventRankingListViewManager___c_TypeInfo;
      }
      _9__19_0 = (System_Comparison_T__o *)v44->static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = EventRankingListViewManager___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v44->static_fields->__9;
        _9__19_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__19_0,
          v46,
          Method_EventRankingListViewManager___c__CreateList_b__19_0__,
          0LL);
        static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v48, v49);
      }
      System_Collections_Generic_List_object___Sort_55571192(
        v15,
        _9__19_0,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( !v14 )
LABEL_77:
      sub_1B8880C(Instance, v9);
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)v15,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( max_length >= 1 )
    {
      v50 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v14,
                 v50++,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
        v52 = (EventRankingListViewItem_o *)sub_1B887FC(EventRankingListViewItem_TypeInfo);
        EventRankingListViewItem___ctor(v52, (EventRankingRoundItemInfo_o *)Item, v50, i < v63, v60 & 1, round, v53);
        Instance = (int64_t)v61[12].klass;
        if ( !Instance )
          goto LABEL_77;
        v56 = *(_QWORD *)(Instance + 16);
        v57 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v56 )
          goto LABEL_77;
        v58 = *(int *)(Instance + 24);
        if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v52,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = v56 + 8 * v58;
          *(_DWORD *)(Instance + 24) = v58 + 1;
          *(_QWORD *)(v59 + 32) = v52;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 32), (int32_t)v52, v54, v55);
        }
      }
      while ( max_length != v50 );
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
  EventRankingListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5F11C & 1) == 0 )
  {
    sub_1B885B0(&EventRankingListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5F11C = 1;
  }
  result = (EventRankingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRankingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventRankingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventRankingListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRankingListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
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
    sub_1B8880C(this, x);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4A5F126 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    byte_4A5F126 = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v4);
  }
}


void __fastcall EventRankingListViewManager__OnClickListView(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  DataManager_o *Item; // x0
  __int64 v8; // x1
  __int64 methodPtr_low; // x9
  struct System_Exception_o *writeMasterDataThreadException; // x8
  unsigned int message; // w9
  int v12; // w10
  GiftEntity_o *data; // x20
  int32_t type; // w8
  Il2CppObject *Entity; // x20
  Il2CppObject *v16; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x22
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v19; // x22

  if ( (byte_4A5F122 & 1) == 0 )
  {
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_EventRankingListViewManager_CloseItemDetail__);
    sub_1B885B0(&Method_EventRankingListViewManager_CloseSvtDetail__);
    sub_1B885B0(&Method_EventRankingListViewManager_OnClickListView__);
    sub_1B885B0(&EventRankingListViewObject_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F122 = 1;
  }
  v5 = Method_EventRankingListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_EventRankingListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !obj )
    goto LABEL_24;
  methodPtr_low = LOBYTE(EventRankingListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_1B88ACC(obj);
    goto LABEL_26;
  }
  Item = (DataManager_o *)EventRankingListViewObject__GetItem(
                            (EventRankingListViewObject_o *)obj,
                            (const MethodInfo *)EventRankingListViewObject_TypeInfo);
  if ( !Item )
    goto LABEL_24;
  writeMasterDataThreadException = Item->fields.writeMasterDataThreadException;
  if ( !writeMasterDataThreadException )
    goto LABEL_24;
  message = (unsigned int)writeMasterDataThreadException->fields._message;
  if ( message != 1 )
  {
    v12 = this->fields.alphaAnimCnt % (int)message;
    if ( v12 < message )
    {
      writeMasterDataThreadException = (struct System_Exception_o *)((char *)writeMasterDataThreadException + 8 * v12);
      goto LABEL_13;
    }
LABEL_26:
    sub_1B88814(Item, v8);
  }
LABEL_13:
  data = (GiftEntity_o *)writeMasterDataThreadException->fields._data;
  if ( !data )
    goto LABEL_24;
  type = data->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0LL);
    if ( !Instance )
      goto LABEL_24;
    CommonUI__OpenServantStatusDialog_30507920((CommonUI_o *)Instance, 7, data, v19, 0LL);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_object_(
                                Item,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                   data->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          (intptr_t)Method_EventRankingListViewManager_CloseItemDetail__,
          0LL);
        if ( v16 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v16, (ItemEntity_o *)Entity, v17, 50, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1B8880C(Item, v8);
  }
}


void __fastcall EventRankingListViewManager__OnMoveEnd(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A5F121 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F121 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_20;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.castClass)(
          gameObject,
          1LL,
          gameObject->klass[1]._1.declaringType);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_18;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_18:
          callbackFunc2 = this->fields.callbackFunc2;
          this->fields.callbackFunc2 = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1B8880C(gameObject, v7);
    }
  }
}


void __fastcall EventRankingListViewManager__RequestInto(EventRankingListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5F120 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5F120 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1B8880C(ObjectList, v5);
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
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      EventRankingListViewObject__Init_45821132(
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
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3

  if ( (byte_4A5F11F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventRankingListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5F11F = 1;
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventRankingListViewObject__Init_45820612((EventRankingListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
    delay,
    0LL);
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
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventRankingListViewManager__SetMode_45819888(this, mode, v6);
}


void __fastcall EventRankingListViewManager__SetMode_45819888(
        EventRankingListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A5F11E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11311/*"RequestInto"*/);
    byte_4A5F11E = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  switch ( mode )
  {
    case 1:
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
          sub_1B8880C(gameObject, v8);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11311/*"RequestInto"*/,
        0.0,
        0LL);
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


void __fastcall EventRankingListViewManager__SetMode_45820192(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventRankingListViewManager__SetMode_45819888(this, mode, v7);
}


void __fastcall EventRankingListViewManager__SetObjectItem(
        EventRankingListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventRankingListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5F11D & 1) == 0 )
  {
    this = (EventRankingListViewManager_o *)sub_1B885B0(&EventRankingListViewObject_TypeInfo);
    byte_4A5F11D = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventRankingListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  EventRankingListViewObject__Init_45819760((EventRankingListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall EventRankingListViewManager__Update(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__Update((ListViewManager_o *)this, 0LL);
  EventRankingListViewManager__UpdateAnim(this, v3);
}


void __fastcall EventRankingListViewManager__UpdateAnim(EventRankingListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5F125 & 1) == 0 )
  {
    sub_1B885B0(&EventRankingListViewManager_TypeInfo);
    byte_4A5F125 = 1;
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

  if ( (byte_4A5F117 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F117 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5F11A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F11A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !objectList )
          break;
        v9 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)EventRankingListViewObject__GetItem(
                                                                    (EventRankingListViewObject_o *)objectList,
                                                                    v4);
        if ( !objectList )
          break;
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40722428(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v14 = v3->fields._size;
          if ( (unsigned int)v14 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v9,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + v14;
            v3->fields._size = v14 + 1;
            v15[4] = (Il2CppClass *)v9;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
          }
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1B8880C(objectList, v4);
  }
  return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
}


System_Collections_Generic_List_EventRankingListViewObject__o *__fastcall EventRankingListViewManager__get_ObjectList(
        EventRankingListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  System_Collections_Generic_List_object__o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4A5F119 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F119 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v13 = v3->fields._size;
        v14 = objectList;
        if ( (unsigned int)v13 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + v13;
          v3->fields._size = v13 + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B8880C(objectList, v4);
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

  if ( (byte_4A5F118 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F118 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  EventRankingListViewManager__Update(v10, v11);
}


void __fastcall EventRankingListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5F128 & 1) == 0 )
  {
    sub_1B885B0(&EventRankingListViewManager___c_TypeInfo);
    byte_4A5F128 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventRankingListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventRankingListViewManager___c_TypeInfo->static_fields->__9 = (struct EventRankingListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventRankingListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return System_Single__CompareTo_62594480(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}