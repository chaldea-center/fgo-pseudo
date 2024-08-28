void __fastcall EventRankingListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventRankingListViewManager_StaticFields *static_fields; // x8

  if ( (byte_4A0CBB7 & 1) == 0 )
  {
    sub_1B686D4(&EventRankingListViewManager_TypeInfo, v1);
    byte_4A0CBB7 = 1;
  }
  static_fields = EventRankingListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x404000003F000000LL;
  static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A0CBB3 & 1) == 0 )
  {
    sub_1B686D4(&Method_EventRankingListViewManager_CloseItemDetail__, isDecide);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A0CBB3 = 1;
  }
  v4 = Method_EventRankingListViewManager_CloseItemDetail__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_CloseItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B686EC(Method_EventRankingListViewManager_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__CloseSvtDetail(
        EventRankingListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A0CBB4 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A0CBB4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  __int64 v8; // x1
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
  int64_t Instance; // x0
  __int64 v28; // x1
  TotalEventRaceEntity_array *TargetTermRaceEntityList; // x0
  EventPointGroupEntity_array *EntityList; // x27
  EventRaceMaster_o *v31; // x26
  EventRaceEntity_o *Entity; // x28
  System_Collections_Generic_List_object__o *v33; // x24
  System_Collections_Generic_List_object__o *v34; // x25
  signed int v35; // w20
  signed int i; // w29
  il2cpp_array_size_t v37; // w20
  __int64 v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Int32_array *giftIds; // x8
  Il2CppClass **v42; // x21
  Il2CppClass *v43; // x8
  char *v44; // x21
  Il2CppClass *v45; // t1
  const char *namespaze; // x1
  __int64 v47; // x8
  int32_t v48; // w3
  struct System_Int64_array *goalPoints; // x8
  TotalEventRaceEntity_o *v50; // x8
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  System_Collections_Generic_List_object__o *v61; // x0
  System_Comparison_T__o *v62; // x19
  EventRankingListViewManager___c_c *v63; // x0
  System_Comparison_T__o *_9__19_0; // x19
  Il2CppObject *v65; // x21
  struct EventRankingListViewManager___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w19
  Il2CppObject *Item; // x25
  EventRankingListViewItem_o *v71; // x22
  const MethodInfo *v72; // x6
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8
  char v79; // [xsp+Ch] [xbp-94h]
  Il2CppObject *v80; // [xsp+10h] [xbp-90h]
  EventRaceResultMaster_o *MasterData_object; // [xsp+18h] [xbp-88h]
  signed int v82; // [xsp+20h] [xbp-80h]
  TotalEventRaceEntity_array *v84; // [xsp+28h] [xbp-78h]
  int max_length; // [xsp+38h] [xbp-68h]

  if ( (byte_4A0CBAB & 1) == 0 )
  {
    sub_1B686D4(&System_Comparison_EventRankingRoundItemInfo__TypeInfo, *(_QWORD *)&eventId);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v8);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventRaceMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v10);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventScriptMaster___, v11);
    sub_1B686D4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, v12);
    sub_1B686D4(&EventRankingListViewItem_TypeInfo, v13);
    sub_1B686D4(&Method_EventRankingListViewManager_GoalTimeSort__, v14);
    sub_1B686D4(&EventRankingRoundItemInfo_TypeInfo, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__, v17);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v18);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__, v19);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__, v20);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Count__, v21);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__, v22);
    sub_1B686D4(&System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo, v23);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B686D4(&Method_EventRankingListViewManager___c__CreateList_b__19_0__, v25);
    sub_1B686D4(&EventRankingListViewManager___c_TypeInfo, v26);
    byte_4A0CBAB = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___);
  if ( !Instance )
    goto LABEL_77;
  TargetTermRaceEntityList = TotalEventRaceMaster__GetTargetTermRaceEntityList(
                               (TotalEventRaceMaster_o *)Instance,
                               eventId,
                               round,
                               0LL);
  if ( TargetTermRaceEntityList )
  {
    v84 = TargetTermRaceEntityList;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
    if ( !Instance )
      goto LABEL_77;
    EntityList = EventPointGroupMaster__getEntityList((EventPointGroupMaster_o *)Instance, eventId, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v80 = (Il2CppObject *)this;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !Instance )
      goto LABEL_77;
    v31 = (EventRaceMaster_o *)Instance;
    Entity = EventRaceMaster__GetEntity((EventRaceMaster_o *)Instance, eventId, round, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    MasterData_object = (EventRaceResultMaster_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    max_length = v84->max_length;
    v33 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v33,
      (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    v34 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EventRankingRoundItemInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo___ctor__);
    if ( !userSupportPoints )
      goto LABEL_77;
    v35 = userSupportPoints->max_length;
    if ( v35 < 1 )
    {
      i = 0;
    }
    else
    {
      for ( i = 0; i != v35; ++i )
      {
        if ( v35 == i )
LABEL_78:
          sub_1B68938(Instance, v28);
        if ( userSupportPoints->m_Items[i] > 0 )
          break;
      }
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v82 = v35;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventScriptMaster___);
    if ( !Instance )
      goto LABEL_77;
    Instance = EventScriptMaster__IsRaceResultFlagged((EventScriptMaster_o *)Instance, eventId, round, 0LL);
    v79 = Instance;
    if ( max_length >= 1 )
    {
      v37 = 0;
      do
      {
        v38 = sub_1B68920(EventRankingRoundItemInfo_TypeInfo);
        EventRankingRoundItemInfo___ctor((EventRankingRoundItemInfo_o *)v38, 0LL);
        if ( !v38 )
          goto LABEL_77;
        *(_DWORD *)(v38 + 16) = eventId;
        if ( !Entity )
          goto LABEL_77;
        giftIds = Entity->fields.giftIds;
        if ( !giftIds )
          goto LABEL_77;
        if ( v37 >= giftIds->max_length )
          goto LABEL_78;
        *(_DWORD *)(v38 + 20) = giftIds->m_Items[v37 + 1];
        if ( !EntityList )
          goto LABEL_77;
        if ( v37 >= EntityList->max_length )
          goto LABEL_78;
        v42 = &EntityList->obj.klass + (int)v37;
        v45 = v42[4];
        v44 = (char *)(v42 + 4);
        v43 = v45;
        if ( !v45 )
          goto LABEL_77;
        namespaze = v43->_1.namespaze;
        *(_QWORD *)(v38 + 24) = namespaze;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 24), (int32_t)namespaze, v39, v40);
        if ( v37 >= EntityList->max_length )
          goto LABEL_78;
        v47 = *(_QWORD *)v44;
        if ( !*(_QWORD *)v44 )
          goto LABEL_77;
        v48 = *(_DWORD *)(v47 + 20);
        *(_DWORD *)(v38 + 32) = v48;
        *(_DWORD *)(v38 + 36) = *(_DWORD *)(v47 + 32);
        if ( v37 >= userSupportPoints->max_length )
          goto LABEL_78;
        *(_QWORD *)(v38 + 40) = userSupportPoints->m_Items[v37];
        goalPoints = Entity->fields.goalPoints;
        if ( !goalPoints )
          goto LABEL_77;
        if ( v37 >= goalPoints->max_length )
          goto LABEL_78;
        *(_QWORD *)(v38 + 48) = goalPoints->m_Items[v37];
        if ( v37 >= v84->max_length )
          goto LABEL_78;
        v50 = v84->m_Items[v37];
        if ( !v50 )
          goto LABEL_77;
        Instance = (int64_t)MasterData_object;
        *(_QWORD *)(v38 + 56) = v50->fields.totalPoint;
        *(_DWORD *)(v38 + 72) = mostSupportGroupId;
        if ( !MasterData_object )
          goto LABEL_77;
        Instance = EventRaceResultMaster__GetTargetGoalTime(MasterData_object, eventId, round, v48, 0LL);
        *(_QWORD *)(v38 + 64) = Instance;
        if ( v37 >= EntityList->max_length )
          goto LABEL_78;
        if ( !*(_QWORD *)v44 )
          goto LABEL_77;
        *(float *)(v38 + 76) = EventRaceMaster__GetGoalRate(
                                 v31,
                                 eventId,
                                 round,
                                 *(_DWORD *)(*(_QWORD *)v44 + 20LL),
                                 0LL);
        Instance = EventRankingRoundItemInfo__get_IsGoal((EventRankingRoundItemInfo_o *)v38, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_77;
          items = v33->fields._items;
          v54 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v33->fields._version;
          if ( !items )
            goto LABEL_77;
          size = v33->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v60 = v54[4];
            v61 = v33;
LABEL_53:
            System_Collections_Generic_List_object___AddWithResize(
              v61,
              (Il2CppObject *)v38,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v60 + 192) + 112LL));
            continue;
          }
          v56 = &items->obj.klass + size;
          v33->fields._size = size + 1;
        }
        else
        {
          if ( !v34 )
            goto LABEL_77;
          v57 = v34->fields._items;
          v58 = Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Add__;
          ++v34->fields._version;
          if ( !v57 )
            goto LABEL_77;
          v59 = v34->fields._size;
          if ( (unsigned int)v59 >= v57->max_length )
          {
            v60 = v58[4];
            v61 = v34;
            goto LABEL_53;
          }
          v56 = &v57->obj.klass + v59;
          v34->fields._size = v59 + 1;
        }
        v56[4] = (Il2CppClass *)v38;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v56 + 4), v38, v51, v52);
      }
      while ( max_length != ++v37 );
    }
    if ( v33 && v33->fields._size >= 2 )
    {
      v62 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
      System_Comparison_object____ctor(v62, v80, Method_EventRankingListViewManager_GoalTimeSort__, 0LL);
      System_Collections_Generic_List_object___Sort_55303484(
        v33,
        v62,
        (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( v34 && v34->fields._size >= 2 )
    {
      v63 = EventRankingListViewManager___c_TypeInfo;
      if ( !EventRankingListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewManager___c_TypeInfo);
        v63 = EventRankingListViewManager___c_TypeInfo;
      }
      _9__19_0 = (System_Comparison_T__o *)v63->static_fields->__9__19_0;
      if ( !_9__19_0 )
      {
        if ( !v63->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v63);
          v63 = EventRankingListViewManager___c_TypeInfo;
        }
        v65 = (Il2CppObject *)v63->static_fields->__9;
        _9__19_0 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_EventRankingRoundItemInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__19_0,
          v65,
          Method_EventRankingListViewManager___c__CreateList_b__19_0__,
          0LL);
        static_fields = EventRankingListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__19_0 = (struct System_Comparison_EventRankingRoundItemInfo__o *)_9__19_0;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v67, v68);
      }
      System_Collections_Generic_List_object___Sort_55303484(
        v34,
        _9__19_0,
        (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__Sort__);
    }
    if ( !v33 )
LABEL_77:
      sub_1B68930(Instance, v28);
    System_Collections_Generic_List_object___AddRange(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)v34,
      (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__AddRange__);
    if ( max_length >= 1 )
    {
      v69 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v33,
                 v69++,
                 (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventRankingRoundItemInfo__get_Item__);
        v71 = (EventRankingListViewItem_o *)sub_1B68920(EventRankingListViewItem_TypeInfo);
        EventRankingListViewItem___ctor(v71, (EventRankingRoundItemInfo_o *)Item, v69, i < v82, v79 & 1, round, v72);
        Instance = (int64_t)v80[12].klass;
        if ( !Instance )
          goto LABEL_77;
        v75 = *(_QWORD *)(Instance + 16);
        v76 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v75 )
          goto LABEL_77;
        v77 = *(int *)(Instance + 24);
        if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v71,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
        }
        else
        {
          v78 = v75 + 8 * v77;
          *(_DWORD *)(Instance + 24) = v77 + 1;
          *(_QWORD *)(v78 + 32) = v71;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v78 + 32), (int32_t)v71, v73, v74);
        }
      }
      while ( max_length != v69 );
    }
    ListViewManager__SortItem((ListViewManager_o *)v80, -1, 0, -1, 0LL);
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
  EventRankingListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A0CBAC & 1) == 0 )
  {
    sub_1B686D4(&EventRankingListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4A0CBAC = 1;
  }
  result = (EventRankingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventRankingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B68930(this, x);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  int32_t v7; // w20

  if ( (byte_4A0CBB6 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v3);
    byte_4A0CBB6 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)EventRankingListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)EventRankingListViewManager__get_ObjectList(this, v5);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v7,
                                                                  (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      EventRankingListViewObject__OnChangeAlphaAnim((EventRankingListViewObject_o *)ObjectList, v5);
      if ( size == ++v7 )
        return;
    }
LABEL_10:
    sub_1B68930(ObjectList, v5);
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
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  DataManager_o *Item; // x0
  __int64 v17; // x1
  __int64 methodPtr_low; // x9
  struct System_Exception_o *writeMasterDataThreadException; // x8
  unsigned int message; // w9
  int v21; // w10
  GiftEntity_o *data; // x20
  int32_t type; // w8
  Il2CppObject *Entity; // x20
  Il2CppObject *v25; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v26; // x22
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v28; // x22

  if ( (byte_4A0CBB2 & 1) == 0 )
  {
    sub_1B686D4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_1B686D4(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B686D4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B686D4(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_1B686D4(&Method_EventRankingListViewManager_CloseItemDetail__, v8);
    sub_1B686D4(&Method_EventRankingListViewManager_CloseSvtDetail__, v9);
    sub_1B686D4(&Method_EventRankingListViewManager_OnClickListView__, v10);
    sub_1B686D4(&EventRankingListViewObject_TypeInfo, v11);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A0CBB2 = 1;
  }
  v14 = Method_EventRankingListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRankingListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B686EC(Method_EventRankingListViewManager_OnClickListView__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B686B8(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  if ( !obj )
    goto LABEL_24;
  methodPtr_low = LOBYTE(EventRankingListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_1B68BF0(obj);
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
    v21 = this->fields.alphaAnimCnt % (int)message;
    if ( v21 < message )
    {
      writeMasterDataThreadException = (struct System_Exception_o *)((char *)writeMasterDataThreadException + 8 * v21);
      goto LABEL_13;
    }
LABEL_26:
    sub_1B68938(Item, v17);
  }
LABEL_13:
  data = (GiftEntity_o *)writeMasterDataThreadException->fields._data;
  if ( !data )
    goto LABEL_24;
  type = data->fields.type;
  if ( (unsigned int)(type - 6) < 2 || type == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (ServantStatusDialog_EndDelegate_o *)sub_1B68920(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v28,
      (Il2CppObject *)this,
      Method_EventRankingListViewManager_CloseSvtDetail__,
      0LL);
    if ( !Instance )
      goto LABEL_24;
    CommonUI__OpenServantStatusDialog_30376892((CommonUI_o *)Instance, 7, data, v28, 0LL);
  }
  else if ( type == 2 )
  {
    Item = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Item )
    {
      Item = (DataManager_o *)DataManager__GetMasterData_object_(
                                Item,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Item )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                   data->fields.objectId,
                   (const MethodInfo_30E44C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v26 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B68920(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v26,
          (Il2CppObject *)this,
          (intptr_t)Method_EventRankingListViewManager_CloseItemDetail__,
          0LL);
        if ( v25 )
        {
          CommonUI__OpenItemDetailDialog((CommonUI_o *)v25, (ItemEntity_o *)Entity, v26, 50, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1B68930(Item, v17);
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

  if ( (byte_4A0CBB1 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0CBB1 = 1;
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
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
          if ( callbackFunc2 )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
              callbackFunc2->fields.original_method_info,
              *(_QWORD *)&callbackFunc2->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1B68930(gameObject, v7);
    }
  }
}


void __fastcall EventRankingListViewManager__RequestInto(EventRankingListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_EventRankingListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w24
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w25
  int32_t i; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4A0CBB0 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_EventRankingListViewManager_OnMoveEnd__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v5);
    sub_1B686D4(&StringLiteral_9894/*"OnMoveEnd"*/, v6);
    byte_4A0CBB0 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventRankingListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1B68930(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v12 = 0;
  for ( i = 0; i != size; ++i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             i,
             (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      EventRankingListViewObject__Init_45525928(
        (EventRankingListViewObject_o *)Item,
        4,
        v15,
        this->fields.listInDelay,
        v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
  }
  if ( !v12 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9894/*"OnMoveEnd"*/,
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
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x3

  if ( (byte_4A0CBAF & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B686D4(&Method_EventRankingListViewManager_OnMoveEnd__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Count__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__, v9);
    sub_1B686D4(&StringLiteral_9894/*"OnMoveEnd"*/, v10);
    byte_4A0CBAF = 1;
  }
  ObjectList = EventRankingListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v14 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v15 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               v15,
               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_EventRankingListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventRankingListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventRankingListViewObject__Init_45525408((EventRankingListViewObject_o *)Item, mode, v17, v18);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1B68930(ObjectList, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9894/*"OnMoveEnd"*/,
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventRankingListViewManager__SetMode_45524684(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewManager__SetMode_45524684(
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

  if ( (byte_4A0CBAE & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_1B686D4(&StringLiteral_11262/*"RequestInto"*/, v5);
    byte_4A0CBAE = 1;
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
          sub_1B68930(gameObject, v9);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11262/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v7 = 3;
      goto LABEL_15;
    case 2:
      v7 = 2;
LABEL_15:
      EventRankingListViewManager__RequestListObject(this, v7, 0.0, v6);
      break;
  }
}


void __fastcall EventRankingListViewManager__SetMode_45524988(
        EventRankingListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventRankingListViewManager__SetMode_45524684(this, mode, v7);
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
  if ( (byte_4A0CBAD & 1) == 0 )
  {
    this = (EventRankingListViewManager_o *)sub_1B686D4(&EventRankingListViewObject_TypeInfo, obj);
    byte_4A0CBAD = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventRankingListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRankingListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRankingListViewObject_TypeInfo )
  {
    sub_1B68930(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  EventRankingListViewObject__Init_45524556((EventRankingListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4A0CBB5 & 1) == 0 )
  {
    sub_1B686D4(&EventRankingListViewManager_TypeInfo, method);
    byte_4A0CBB5 = 1;
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

  if ( (byte_4A0CBA7 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, value);
    byte_4A0CBA7 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B68BF0(v7);
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
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A0CBAA & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B686D4(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    byte_4A0CBAA = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !objectList )
          break;
        v15 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)EventRankingListViewObject__GetItem(
                                                                    (EventRankingListViewObject_o *)objectList,
                                                                    v10);
        if ( !objectList )
          break;
        v10 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_40459252(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          v20 = v9->fields._size;
          if ( (unsigned int)v20 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v15,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + v20;
            v9->fields._size = v20 + 1;
            v21[4] = (Il2CppClass *)v15;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
          }
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1B68930(objectList, v10);
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
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Collections_Generic_List_object__o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4A0CBA9 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject__Add__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B686D4(&System_Collections_Generic_List_EventRankingListViewObject__TypeInfo, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    byte_4A0CBA9 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EventRankingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventRankingListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
                                                                    (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_EventRankingListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        v19 = v9->fields._size;
        v20 = objectList;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v9->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_EventRankingListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1B68930(objectList, v10);
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

  if ( (byte_4A0CBA8 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, value);
    byte_4A0CBA8 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B68BF0(v7);
  EventRankingListViewManager__Update(v10, v11);
}


void __fastcall EventRankingListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0CBB8 & 1) == 0 )
  {
    sub_1B686D4(&EventRankingListViewManager___c_TypeInfo, v1);
    byte_4A0CBB8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(EventRankingListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventRankingListViewManager___c_TypeInfo->static_fields->__9 = (struct EventRankingListViewManager___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)EventRankingListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B68930(this, a);
  return System_Single__CompareTo_62306916(a->fields.goalRate, v4, (const MethodInfo *)&b->fields.goalRate);
}