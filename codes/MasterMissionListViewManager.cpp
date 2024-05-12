void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_438BB66 & 1) == 0 )
  {
    sub_B775C4(&MissionListViewManager_TypeInfo);
    byte_438BB66 = 1;
  }
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  }
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall MasterMissionListViewManager__AcceptReward(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  DataManager_o **v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  GiftMaster_o *v24; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x24
  __int64 v26; // x8
  unsigned __int64 v27; // x25
  GiftEntity_array *v28; // x20
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x1
  __int64 v31; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438BB5C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__);
    sub_B775C4(&MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo);
    byte_438BB5C = 1;
  }
  entity = 0LL;
  v7 = sub_B77694(MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo);
  MasterMissionListViewManager___c__DisplayClass37_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass37_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_23;
  *(_QWORD *)(v7 + 16) = callback;
  v16 = (DataManager_o **)(v7 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)callback, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          Instance,
                                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    v24 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            Instance,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GiftMaster___);
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v26 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)v26 )
        {
          v31 = sub_B776C8(Instance);
          sub_B77668(v31, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &entity,
                                      receiveMissionIds->m_Items[v27 + 1],
                                      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v24 )
            break;
          Instance = (DataManager_o *)GiftMaster__GetGiftListById(v24, *(&entity->fields.startType + 1), 0LL);
          if ( !v25 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v26) = receiveMissionIds->max_length;
        if ( (__int64)++v27 >= (int)v26 )
          goto LABEL_18;
      }
LABEL_23:
      sub_B7769C(Instance, v9);
    }
LABEL_18:
    if ( !v25 )
      goto LABEL_23;
    v28 = (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v29 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v7,
      Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v28, 0, v29, 0LL);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_23;
    System_Action__Invoke((System_Action_o *)Instance, 0LL);
    MasterMissionListViewManager__afterReward(this, v30);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__CheckBulkButton(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bulkButton; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemSortList; // x0
  UIWidget_o *bulkButtonTxt; // x20
  int v7; // s0
  __int64 v11; // x1
  __int64 v12; // x11
  struct UICommonButton_o *v13; // x0
  UIWidget_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  int v17; // s0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438BB59 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BB59 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  bulkButton = (UnityEngine_Object_o *)this->fields.bulkButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bulkButton, 0LL, 0LL) )
  {
    itemSortList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.bulkButton;
    if ( !itemSortList
      || (((void (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, __int64, __int64, Il2CppMethodPointer))itemSortList->klass->vtable._14_CopyTo.method)(
            itemSortList,
            3LL,
            1LL,
            itemSortList->klass->vtable._15_Remove.methodPtr),
          bulkButtonTxt = (UIWidget_o *)this->fields.bulkButtonTxt,
          *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL),
          !bulkButtonTxt)
      || (UIWidget__set_color(bulkButtonTxt, *(UnityEngine_Color_o *)&v7, 0LL),
          (itemSortList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemSortList) == 0LL) )
    {
      sub_B7769C(itemSortList, v4);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      itemSortList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v21.fields.current )
      {
        v12 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (MasterMissionListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v12 - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v21.fields.current[17].klass) == 3 )
        {
          v13 = this->fields.bulkButton;
          if ( !v13 )
            sub_B7769C(0LL, v11);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v13->klass->vtable._14_SetState.method)(
            v13,
            0LL,
            1LL,
            v13->klass->vtable._15_OnPress.methodPtr);
          v14 = (UIWidget_o *)this->fields.bulkButtonTxt;
          *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
          if ( !v14 )
            sub_B7769C(v15, v16);
          UIWidget__set_color(v14, *(UnityEngine_Color_o *)&v17, 0LL);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall MasterMissionListViewManager__CreateList(
        MasterMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  Il2CppObject *current; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  MasterMissionListViewItem_o *v18; // x23
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  __int64 *v24; // x8
  UILabel_o *v25; // x21
  void *ObjectList; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x1
  int32_t DailyFilterId_k__BackingField; // w8
  UILabel_o *v30; // x21
  UILabel_o *v31; // x21
  __int64 *v32; // x8
  const MethodInfo *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int v40; // w8
  void *v41; // x19
  unsigned __int64 v42; // x21
  signed __int64 v43; // x22
  UnityEngine_Object_o *v44; // x20
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_438BB51 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_9009/*"MST_MISSION_EMPTY_TXT"*/);
    sub_B775C4(&StringLiteral_8914/*"MISSION_EMPTY_TXT"*/);
    byte_438BB51 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v45,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)missionList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v46 = v45;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v46,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v46.fields.current;
      itemList = this->fields.itemList;
      v18 = (MasterMissionListViewItem_o *)sub_B77694(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v18, (EventMissionEntity_o *)current, type, v19);
      if ( !itemList )
        sub_B7769C(v20, v21);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v46,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_438BBC7 )
      {
        sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBC7 = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v24 = &StringLiteral_8914/*"MISSION_EMPTY_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v24 = &StringLiteral_9009/*"MST_MISSION_EMPTY_TXT"*/;
      }
      ObjectList = LocalizationManager__Get((System_String_o *)*v24, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_74;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_438BBC7 )
      {
        sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBC7 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      break;
    case 1:
      v31 = this->fields.emptyMessageLabel;
      if ( !byte_438BBC8 )
      {
        sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBC8 = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v32 = &StringLiteral_8914/*"MISSION_EMPTY_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v32 = &StringLiteral_9009/*"MST_MISSION_EMPTY_TXT"*/;
      }
      ObjectList = LocalizationManager__Get((System_String_o *)*v32, 0LL);
      if ( !v31 )
        goto LABEL_74;
      UILabel__set_text(v31, (System_String_o *)ObjectList, 0LL);
      if ( !byte_438BBC8 )
      {
        sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBC8 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      break;
    case 2:
      v25 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8914/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v25 )
        goto LABEL_74;
      UILabel__set_text(v25, (System_String_o *)ObjectList, 0LL);
      if ( !byte_438BBC9 )
      {
        sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBC9 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
      break;
    case 3:
      v30 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8914/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v30 )
        goto LABEL_74;
      UILabel__set_text(v30, (System_String_o *)ObjectList, 0LL);
      if ( !byte_438BBCA )
      {
        sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBCA = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
      break;
    default:
      goto LABEL_58;
  }
  this->fields.filterStatus = DailyFilterId_k__BackingField;
  MasterMissionListViewManager__setList(this, v28);
LABEL_58:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.reDispAct,
      (System_Int32_array **)redispCallBack,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v33);
  if ( !ObjectList )
LABEL_74:
    sub_B7769C(ObjectList, v27);
  v40 = *((_DWORD *)ObjectList + 6);
  v41 = ObjectList;
  if ( v40 >= 1 )
  {
    v42 = 0LL;
    v43 = v40;
    while ( 1 )
    {
      if ( v42 >= (unsigned int)v40 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v44 = *(UnityEngine_Object_o **)(*((_QWORD *)v41 + 2) + 8 * v42 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ObjectList = (void *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_74;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)v44, 0LL);
      }
      if ( (__int64)++v42 >= v43 )
        break;
      v40 = *((_DWORD *)v41 + 6);
    }
  }
}


void __fastcall MasterMissionListViewManager__DestroyList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall MasterMissionListViewManager__GetBoardTouchMissionId(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  MissionListViewItem_o *receiveItem; // x0

  receiveItem = (MissionListViewItem_o *)this->fields.receiveItem;
  if ( !receiveItem )
    sub_B7769C(0LL, method);
  return MissionListViewItem__get_MissionId(receiveItem, 0LL);
}


MasterMissionListViewItem_o *__fastcall MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438BB54 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    byte_438BB54 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (MasterMissionListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == MasterMissionListViewItem_TypeInfo )
    return (MasterMissionListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall MasterMissionListViewManager__ModifyItem(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t Time; // x0
  int64_t v8; // x9
  unsigned __int64 v9; // x28
  __int64 v10; // x23
  MasterMissionListViewManager___c__DisplayClass42_0_o *v11; // x25
  int64_t UserId; // x2
  int32_t missionProgressType; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x27
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x11
  MissionListViewItem_o *current; // x26
  int32_t missionId; // w27
  UnityEngine_Object_o *viewObject; // x27
  __int64 v22; // x1
  struct ListViewObject_o *v23; // x0
  int v24; // w26
  __int64 v25; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // [xsp+10h] [xbp-B0h]
  UserEventMissionMaster_o *v27; // [xsp+18h] [xbp-A8h]
  int v28; // [xsp+24h] [xbp-9Ch]
  _BYTE v30[28]; // [xsp+30h] [xbp-90h] BYREF
  int v31; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+50h] [xbp-70h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_438BB61 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__FindAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Predicate_ListViewItem___ctor__);
    sub_B775C4(&System_Predicate_ListViewItem__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__);
    sub_B775C4(&MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo);
    byte_438BB61 = 1;
  }
  entity = 0LL;
  memset(&v32, 0, sizeof(v32));
  v31 = 0;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
LABEL_54:
      sub_B7769C(Instance, v5);
    }
    v27 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v28 = 0;
      v8 = Time;
      v9 = 0LL;
      v26 = MasterData_WarQuestSelectionMaster;
      do
      {
        v10 = v8;
        v11 = (MasterMissionListViewManager___c__DisplayClass42_0_o *)sub_B77694(MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo);
        MasterMissionListViewManager___c__DisplayClass42_0___ctor(v11, 0LL);
        if ( v9 >= receiveMissionIds->max_length )
        {
          v25 = sub_B776C8(Instance);
          sub_B77668(v25, 0LL);
        }
        if ( !v11 )
          goto LABEL_54;
        v5 = (unsigned int)receiveMissionIds->m_Items[v9 + 1];
        v11->fields.missionId = v5;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_54;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v5,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_54;
        v8 = v10;
        if ( v10 > *(_QWORD *)&Instance->fields.lastFrameTime && v10 <= (__int64)Instance->fields.masterCheckName )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)v27;
          if ( !v27 )
            goto LABEL_54;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v27,
                                        &entity,
                                        UserId,
                                        v11->fields.missionId,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_54;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v15,
              (Il2CppObject *)v11,
              Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__,
              (const MethodInfo_2C3248C *)Method_System_Predicate_ListViewItem___ctor__);
            if ( !itemList )
              goto LABEL_54;
            Instance = (DataManager_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                                          (System_Predicate_T__o *)v15,
                                          (const MethodInfo_3053C20 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              goto LABEL_54;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v30,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v32 = *(System_Collections_Generic_List_Enumerator_T__o *)v30;
            while ( 1 )
            {
              v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v32,
                      (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v16 & 1) == 0 )
                break;
              if ( v32.fields.current
                && (v18 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v32.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v18) )
              {
                if ( (MasterMissionListViewItem_c *)v32.fields.current->klass->_2.typeHierarchy[v18 - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v32.fields.current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              missionId = v11->fields.missionId;
              if ( !byte_43889FE )
              {
                v16 = sub_B775C4(&EventRewardSaveData_TypeInfo);
                byte_43889FE = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = missionId;
              if ( !current )
                sub_B7769C(v16, v17);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v23 = current->fields.viewObject;
                if ( !v23 )
                  sub_B7769C(0LL, v22);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v23->klass->vtable._5_SetItem.method)(
                  v23,
                  current,
                  v23->klass->vtable._6_SetItem.methodPtr);
              }
            }
            *(_DWORD *)&v30[4 * v28 + 24] = 279;
            v24 = ++v31;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v32,
              (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            MasterData_WarQuestSelectionMaster = v26;
            if ( v24 )
            {
              v28 = v24;
              v8 = v10;
              if ( *(_DWORD *)&v30[4 * v24 + 20] == 279 )
              {
                v31 = v24 - 1;
                v28 = v24 - 1;
              }
              goto LABEL_49;
            }
            v28 = 0;
          }
          v8 = v10;
        }
LABEL_49:
        ++v9;
      }
      while ( (__int64)v9 < (int)receiveMissionIds->max_length );
    }
  }
}


void __fastcall MasterMissionListViewManager__OnChangeAlphaAnim(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_MasterMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  __int64 v6; // x22

  if ( (byte_438BB64 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    byte_438BB64 = 1;
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      ObjectList = MasterMissionListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      ObjectList = (System_Collections_Generic_List_MasterMissionListViewObject__o *)ObjectList->fields._items->m_Items[v6];
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v4);
      if ( (int)++v6 >= size )
        return;
    }
LABEL_12:
    sub_B7769C(ObjectList, v4);
  }
}


void __fastcall MasterMissionListViewManager__OnClickFilterList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_438BB57 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BB57 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_331DD98[filterStatus];
  MasterMissionListViewManager__setList(this, v3);
}


void __fastcall MasterMissionListViewManager__OnClickListView(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 v7; // x10
  struct MasterMissionListViewItem_o *v8; // x20
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v17; // x2

  if ( (byte_438BB55 & 1) == 0 )
  {
    sub_B775C4(&MasterMissionListViewObject_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_15689/*"Wait_Action"*/);
    byte_438BB55 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_19;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15689/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (v7 = *(&MasterMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != MasterMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem(
                                        (MasterMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0LL )
  {
LABEL_19:
    sub_B7769C(targetFSM, obj);
  }
  v8 = (struct MasterMissionListViewItem_o *)targetFSM;
  if ( ((*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
          targetFSM,
          targetFSM->klass[1]._1.this_arg.data) & 1) == 0
    || MasterMissionListViewItem__get_IsHideReward(v8, v9)
    || v8->fields.isHideRewardDetail )
  {
    if ( v8->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v8;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.receiveItem,
        (System_Int32_array **)v8,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v8, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v17);
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
  }
  else
  {
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v8, 0, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x28
  void *Instance; // x0
  System_String_o *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v16; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x25
  int max_length; // w26
  __int64 v19; // x21
  GiftEntity_o **m_Items; // x22
  GiftEntity_o *v21; // x8
  int32_t type; // w19
  GiftEntity_o *v23; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x28
  __int64 v25; // x27
  GiftEntity_o **v26; // x24
  Il2CppObject *CountableString; // x21
  System_Text_StringBuilder_o *v28; // x19
  __int64 v29; // x2
  GiftEntity_o *v30; // x8
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x1
  GiftEntity_o *v34; // x8
  int32_t v35; // w19
  GiftEntity_o *v36; // x8
  ServantEntity_o *v37; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v39; // x0
  __int64 v40; // x2
  GiftEntity_o *v41; // x8
  Il2CppObject *v42; // x19
  Il2CppObject *v43; // x0
  Il2CppObject *v44; // x19
  System_String_o *v45; // x0
  GiftEntity_o *v46; // x8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v47; // x23
  System_Text_StringBuilder_o *v48; // x21
  System_String_o *v49; // x19
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x19
  System_String_o *v53; // x0
  CommonUI_o *v54; // x19
  GiftEntity_array *v55; // x20
  System_String_o *v56; // x21
  MissionRewardGetDialog_ClickDelegate_o *v57; // x22
  __int64 v58; // x0
  void **v59; // [xsp+0h] [xbp-A0h]
  Il2CppObject *v60; // [xsp+8h] [xbp-98h]
  System_Text_StringBuilder_o *v61; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+18h] [xbp-88h]
  int v63; // [xsp+24h] [xbp-7Ch]
  System_String_o *format; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-70h]
  int32_t num; // [xsp+3Ch] [xbp-64h] BYREF
  WarEntity_o *v67; // [xsp+40h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_438BB5D & 1) == 0 )
  {
    sub_B775C4(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity___ctor___69396392);
    sub_B775C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__);
    sub_B775C4(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
    sub_B775C4(&StringLiteral_8907/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_B775C4(&StringLiteral_8911/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_B775C4(&StringLiteral_8910/*"MISSION_ACTION_SUCCESS"*/);
    sub_B775C4(&StringLiteral_3395/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_B775C4(&StringLiteral_32/*"\n \n "*/);
    sub_B775C4(&StringLiteral_8906/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_B775C4(&StringLiteral_30/*"\n "*/);
    sub_B775C4(&StringLiteral_8913/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_438BB5D = 1;
  }
  v67 = 0LL;
  entity = 0LL;
  v5 = sub_B77694(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  MasterMissionListViewManager___c__DisplayClass38_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass38_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_113;
  *(_QWORD *)(v5 + 16) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_113;
  v59 = (void **)(v5 + 16);
  if ( !Instance )
    goto LABEL_113;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v16 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0LL);
  v61 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v61, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_113;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  max_length = GiftListById->max_length;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3395/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v63 = 0;
    v19 = 0LL;
    m_Items = GiftListById->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v19 >= GiftListById->max_length )
      {
LABEL_114:
        v58 = sub_B776C8(Instance);
        sub_B77668(v58, 0LL);
      }
      v21 = m_Items[v19];
      if ( !v21 )
        goto LABEL_113;
      type = v21->fields.type;
      Instance = (void *)Gift__IsServant_28103552(type, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (void *)Gift__IsCommandCode_28103948(type, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)Gift__IsCostumeRelease(type, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            if ( (unsigned int)v19 >= GiftListById->max_length )
              goto LABEL_114;
            v23 = m_Items[v19];
            Instance = MasterData_WarQuestSelectionMaster;
            if ( !v23 || !MasterData_WarQuestSelectionMaster )
              goto LABEL_113;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 &entity,
                                 v23->fields.objectId,
                                 (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_113;
              Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, entity->fields.id, 0LL);
              v63 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
        }
      }
      if ( (int)++v19 >= max_length )
        goto LABEL_30;
    }
  }
  v63 = 0;
LABEL_30:
  v60 = (Il2CppObject *)v5;
  collection = (System_Collections_Generic_IEnumerable_T__o *)sub_B77694(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)collection,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v25 = 0LL;
    v26 = GiftListById->m_Items;
    do
    {
      if ( (unsigned int)v25 >= GiftListById->max_length )
        goto LABEL_114;
      v34 = v26[v25];
      if ( !v34 )
        goto LABEL_113;
      v35 = v34->fields.type;
      Instance = (void *)Gift__IsServant_28103552(v35, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (unsigned int)v25 >= GiftListById->max_length )
          goto LABEL_114;
        v36 = v26[v25];
        if ( !v36 )
          goto LABEL_113;
        if ( !v17 )
          goto LABEL_113;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v17,
                     v36->fields.objectId,
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_113;
        v37 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0LL);
        Instance = (void *)SvtType__IsStatusUp(v37->fields.type, 0LL);
        if ( IsCombineMaterial || ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_113;
          v39 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                                     v16,
                                     v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v39, 0LL) )
            System_Text_StringBuilder__Append_42951964(v16, (System_String_o *)StringLiteral_30/*"\n "*/, 0LL);
          Instance = ServantEntity__getName(v37, -1, -1, 0LL);
          if ( (unsigned int)v25 >= GiftListById->max_length )
            goto LABEL_114;
          v41 = v26[v25];
          if ( !v41 )
            goto LABEL_113;
          v42 = (Il2CppObject *)Instance;
          num = v41->fields.num;
          v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v40);
          v44 = (Il2CppObject *)System_String__Format_44897472(format, v42, v43, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_8906/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
          Instance = System_Text_StringBuilder__AppendFormat(v16, v45, v44, 0LL);
          if ( (unsigned int)v25 >= GiftListById->max_length )
            goto LABEL_114;
          if ( !v24 )
            goto LABEL_113;
          v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)v26[v25];
          Instance = v24;
LABEL_71:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            v33,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        }
      }
      else
      {
        Instance = (void *)Gift__IsItem_28103496(v35, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( (unsigned int)v25 >= GiftListById->max_length )
            goto LABEL_114;
          v46 = v26[v25];
          Instance = MasterData_WarQuestSelectionMaster;
          if ( !v46 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_113;
          Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               MasterData_WarQuestSelectionMaster,
                               &v67,
                               v46->fields.objectId,
                               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !v67 || !Instance )
              goto LABEL_113;
            Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, v67->fields.id, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !v67 )
                goto LABEL_113;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(v67->fields.bannerId, 0LL);
              v28 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v28, 0LL);
              if ( !v67 || !v28 )
                goto LABEL_113;
              System_Text_StringBuilder__Append_42951964(v28, v67->fields.age, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8911/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( (unsigned int)v25 >= GiftListById->max_length )
                goto LABEL_114;
              v30 = v26[v25];
              if ( !v30 )
                goto LABEL_113;
              v31 = (System_String_o *)Instance;
              num = v30->fields.num;
              v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v29);
              System_Text_StringBuilder__AppendFormat_42958516(v28, v31, CountableString, v32, 0LL);
              if ( v63 >= 2 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8906/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v61 )
                  goto LABEL_113;
                System_Text_StringBuilder__AppendFormat(v61, (System_String_o *)Instance, (Il2CppObject *)v28, 0LL);
                Instance = v61;
                v7 = (System_String_o *)StringLiteral_30/*"\n "*/;
              }
              else
              {
                v7 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v28->klass->vtable._3_ToString.method)(
                                          v28,
                                          v28->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                Instance = v61;
                if ( !v61 )
                  goto LABEL_113;
              }
              Instance = System_Text_StringBuilder__Append_42951964((System_Text_StringBuilder_o *)Instance, v7, 0LL);
              if ( (unsigned int)v25 >= GiftListById->max_length )
                goto LABEL_114;
              Instance = collection;
              if ( !collection )
                goto LABEL_113;
              v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)v26[v25];
              goto LABEL_71;
            }
          }
        }
      }
      ++v25;
    }
    while ( (int)v25 < max_length );
  }
  v47 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v47,
    collection,
    (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_GiftEntity___ctor___69396392);
  if ( !v47 )
    goto LABEL_113;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v47,
    (System_Collections_Generic_IEnumerable_T__o *)v24,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v47->fields._size >= 1 )
  {
    v48 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v48, 0LL);
    Instance = v61;
    if ( !v61 )
      goto LABEL_113;
    v49 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v61->klass->vtable._3_ToString.method)(
                               v61,
                               v61->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = (void *)System_String__IsNullOrEmpty(v49, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_113;
    }
    else
    {
      if ( v63 >= 2 )
      {
        if ( !v49 )
          goto LABEL_113;
        Instance = System_String__Substring_44965672(v49, 0, v49->fields.m_stringLength - 2, 0LL);
        if ( !v48 )
          goto LABEL_113;
        System_Text_StringBuilder__Append_42951964(v48, (System_String_o *)Instance, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8907/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = System_Text_StringBuilder__Append_42951964(v48, v50, 0LL);
        if ( !v16 )
          goto LABEL_113;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8910/*"MISSION_ACTION_SUCCESS"*/, 0LL);
        if ( !v48 )
          goto LABEL_113;
        Instance = System_Text_StringBuilder__AppendFormat(v48, (System_String_o *)Instance, (Il2CppObject *)v49, 0LL);
        if ( !v16 )
          goto LABEL_113;
      }
      v51 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                                 v16,
                                 v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v51, 0LL) )
        System_Text_StringBuilder__Append_42951964(v48, (System_String_o *)StringLiteral_32/*"\n \n "*/, 0LL);
    }
    v52 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                               v16,
                               v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = (void *)System_String__IsNullOrEmpty(v52, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v48 )
        goto LABEL_113;
      System_Text_StringBuilder__Append_42951964(v48, v52, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8913/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_42951964(v48, v53, 0LL);
    }
    v54 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                 (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v48 )
    {
      v55 = (GiftEntity_array *)Instance;
      v56 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v48->klass->vtable._3_ToString.method)(
                                 v48,
                                 v48->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v57 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B77694(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v57,
        v60,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v54 )
      {
        CommonUI__OpenMissionRewardGetDialog(v54, v55, v56, v57, 0, 0LL);
        return;
      }
    }
LABEL_113:
    sub_B7769C(Instance, v7);
  }
  Instance = *v59;
  if ( !*v59 )
    goto LABEL_113;
  System_Action__Invoke((System_Action_o *)Instance, 0LL);
}


System_Collections_Generic_List_MasterMissionListViewItem__o *__fastcall MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  struct MasterMissionListViewItem_o *receiveItem; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x10
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438BB65 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
    sub_B775C4(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
    sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    byte_438BB65 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
    if ( v5 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)receiveItem,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
    }
LABEL_19:
    sub_B7769C(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( v11.fields.current )
    {
      v9 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (MasterMissionListViewItem_c *)v11.fields.current->klass->_2.typeHierarchy[v9 - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v11.fields.current[17].klass) == 3 )
      {
        if ( !v5 )
          sub_B7769C(v8, v11.fields.current);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11.fields.current,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
}


void __fastcall MasterMissionListViewManager__RefrashListDisp(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_MasterMissionListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_MasterMissionListViewObject__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x11
  __int64 v9; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v12; // w8
  __int64 v13; // x21
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_438BB56 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    byte_438BB56 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v5 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v15,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( !v15.fields.current
      || (v8 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v15.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8)
      || (MasterMissionListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v8 - 1] != MasterMissionListViewItem_TypeInfo )
    {
      sub_B7769C(v6, v7);
    }
    v9 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      if ( (MasterMissionListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v9 - 1] == MasterMissionListViewItem_TypeInfo )
        current = v15.fields.current;
      else
        current = 0LL;
    }
    else
    {
      current = 0LL;
    }
    ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
      current,
      current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_25;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v12 = v5->fields._size;
    if ( v12 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( v12 <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        ObjectList = (System_Collections_Generic_List_MasterMissionListViewObject__o *)v5->fields._items->m_Items[v13];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_MasterMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v12 = v5->fields._size;
        if ( (int)++v13 >= v12 )
          return;
      }
LABEL_25:
      sub_B7769C(ObjectList, v4);
    }
  }
}


void __fastcall MasterMissionListViewManager__SetOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v9; // x1
  struct MasterMissionListViewItem_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438BB62 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_18562/*"ef_mission_extric01"*/);
    sub_B775C4(&StringLiteral_20984/*"modifyOpenItem"*/);
    byte_438BB62 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MasterMissionListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B7769C(0LL, v4);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v20,
        ObjectList,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v21 = v20;
      while ( 1 )
      {
        v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v21,
               (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v5 )
          break;
        current = v21.fields.current;
        if ( !v21.fields.current )
          sub_B7769C(v5, v6);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v21.fields.current,
                                          v6);
        v10 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_B7769C(0LL, v9);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_43889FE )
          {
            sub_B775C4(&EventRewardSaveData_TypeInfo);
            byte_43889FE = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v10;
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v10, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18562/*"ef_mission_extric01"*/, transform, v19);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v21,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20984/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0LL);
  }
}


void __fastcall MasterMissionListViewManager__SetReceiveReward(
        MasterMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_438BB5A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_8917/*"MISSION_REWARD"*/);
    byte_438BB5A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.missionToRecieve,
    (System_Int32_array **)missionEntity,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B7769C(0LL, v11);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8917/*"MISSION_REWARD"*/, 0LL);
}


void __fastcall MasterMissionListViewManager__SetResultData(
        MasterMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  this->fields.getSvtList = svts;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.getSvtList,
    (System_Int32_array **)svts,
    (System_String_array **)cmds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.getCommandCodeList,
    (System_Int32_array **)cmds,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall MasterMissionListViewManager___modifyOpenItem_b__44_0(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_438BB67 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16551/*"actionAfterCallback"*/);
    byte_438BB67 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16551/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0LL);
}


void __fastcall MasterMissionListViewManager__actionAfterCallback(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *actionCallback; // x19
  BattleServantConfConponent_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (BattleServantConfConponent_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0LL;
    sub_B77560(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__afterReward(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_438BB5E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5624/*"END_EFFECT"*/);
    byte_438BB5E = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5624/*"END_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *transform; // x19
  int v9; // s0
  UnityEngine_Transform_o *v12; // x19
  int v13; // s0

  if ( (byte_438BB60 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&MasterMissionListViewManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BB60 = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL),
        v12 = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL),
        !v12) )
  {
LABEL_12:
    sub_B7769C(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  return v7;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  MasterMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438BB50 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BB50 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (MasterMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_438BB4F & 1) == 0 )
  {
    sub_B775C4(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
    byte_438BB4F = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_1DF7EB0 *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void __fastcall MasterMissionListViewManager__modifyOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 v7; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v9; // x1
  void *v10; // x0
  System_Action_o *v11; // x20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438BB63 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    sub_B775C4(&Method_MasterMissionListViewManager__modifyOpenItem_b__44_0__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BB63 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B7769C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v13,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v13.fields.current;
      if ( !v13.fields.current
        || (v7 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v13.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v7)
        || (MasterMissionListViewItem_c *)v13.fields.current->klass->_2.typeHierarchy[v7 - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_B7769C(v4, v5);
      }
      monitor = (UnityEngine_Object_o *)v13.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v10 = current[6].monitor;
        if ( !v10 )
          sub_B7769C(0LL, v9);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v10 + 392LL))(
          v10,
          current,
          *(_QWORD *)(*(_QWORD *)v10 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__44_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v11, 0LL);
}


void __fastcall MasterMissionListViewManager__setAfterAction(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  AutomatedAction_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  int32_t v9; // w19
  int64_t Time; // x20
  _BOOL4 v11; // w20
  bool v12; // w3
  int32_t v13; // w1
  __int64 v14; // x0

  if ( (byte_438BB5F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BB5F = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, (const MethodInfo *)receiveMissionIds);
  MasterMissionListViewManager__CheckBulkButton(this, v5);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    v8 = UnityEngine_Random__Range_36343764(0, receiveMissionIds->max_length, 0LL);
    if ( (unsigned int)v8 >= receiveMissionIds->max_length )
    {
      v14 = sub_B776C8(v8);
      sub_B77668(v14, 0LL);
    }
    v9 = receiveMissionIds->m_Items[(int)v8 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( (Time = NetworkManager__getTime(0LL),
          (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (AutomatedAction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
      || (Instance = (AutomatedAction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            v9,
                                            (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL
      || (Time <= (__int64)Instance[1].klass ? (v11 = 0) : (v11 = Time <= (__int64)Instance[1].monitor),
          (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
    {
LABEL_22:
      sub_B7769C(Instance, v7);
    }
    if ( v11 )
    {
      v12 = 1;
      v13 = v9;
    }
    else
    {
      v13 = v9;
      v12 = 0;
    }
    AutomatedAction__SetMissionAction(Instance, v13, 5, v12, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__setFilterId(
        MasterMissionListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  MasterMissionListViewManager__setList(this, *(const MethodInfo **)&id);
}


void __fastcall MasterMissionListViewManager__setFilterName(
        MasterMissionListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UISprite_o *filterBtnTxt; // x0

  filterBtnTxt = this->fields.filterBtnTxt;
  if ( !filterBtnTxt
    || (UISprite__set_spriteName(filterBtnTxt, targetFile, 0LL), (filterBtnTxt = this->fields.filterBtnTxt) == 0LL) )
  {
    sub_B7769C(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  UILabel_o *v16; // x21
  bool v17; // w2
  struct ListViewSort_o *v18; // x8
  int v19; // w9
  const MethodInfo *v20; // x1
  int32_t filterStatus; // w20
  int32_t v22; // w20
  int32_t v23; // w20
  int32_t v24; // w20

  if ( (byte_438BB58 & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_9009/*"MST_MISSION_EMPTY_TXT"*/);
    sub_B775C4(&StringLiteral_17385/*"btn_txt_completed"*/);
    sub_B775C4(&StringLiteral_17418/*"btn_txt_receipt"*/);
    sub_B775C4(&StringLiteral_17417/*"btn_txt_progress"*/);
    sub_B775C4(&StringLiteral_8914/*"MISSION_EMPTY_TXT"*/);
    sub_B775C4(&StringLiteral_17368/*"btn_txt_all"*/);
    byte_438BB58 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308964(v4, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8914/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_55:
    sub_B7769C(operationSortInfo, v14);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17368/*"btn_txt_all"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0LL);
      v16 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_9009/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v16 )
        goto LABEL_55;
      UILabel__set_text(v16, operationSortInfo, 0LL);
      goto LABEL_37;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17418/*"btn_txt_receipt"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
      v18 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v19 = 1;
      goto LABEL_39;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17417/*"btn_txt_progress"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v17 = 0;
      goto LABEL_35;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17385/*"btn_txt_completed"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v17 = 1;
LABEL_35:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v17, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_37:
      v18 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v19 = 13;
LABEL_39:
      v18->fields.sortKind = v19;
LABEL_40:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_55;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      switch ( this->fields.listType )
      {
        case 0:
          filterStatus = this->fields.filterStatus;
          if ( !byte_438BBCB )
          {
            sub_B775C4(&EventRewardSaveData_TypeInfo);
            byte_438BBCB = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v22 = this->fields.filterStatus;
          if ( !byte_438BBCC )
          {
            sub_B775C4(&EventRewardSaveData_TypeInfo);
            byte_438BBCC = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v22;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v23 = this->fields.filterStatus;
          if ( !byte_438BBCD )
          {
            sub_B775C4(&EventRewardSaveData_TypeInfo);
            byte_438BBCD = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v23;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v24 = this->fields.filterStatus;
          if ( !byte_438BBCE )
          {
            sub_B775C4(&EventRewardSaveData_TypeInfo);
            byte_438BBCE = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v24;
          EventRewardSaveData__SaveLimitedMissionData(0LL);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v20);
      return;
    default:
      goto LABEL_40;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__setMissionListIdx(
        MasterMissionListViewManager_o *this,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  MasterMissionListViewManager_o *v4; // x19
  int32_t *p_DailyFilterId_k__BackingField; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v8; // x21
  ListViewItem_o *v9; // x8
  __int64 v10; // x11

  v4 = this;
  if ( (byte_438BB53 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MasterMissionListViewManager_o *)sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    byte_438BB53 = 1;
  }
  switch ( v4->fields.listType )
  {
    case 0:
      if ( !byte_438BBC7 )
      {
        this = (MasterMissionListViewManager_o *)sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBC7 = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      goto LABEL_16;
    case 1:
      if ( !byte_438BBC8 )
      {
        this = (MasterMissionListViewManager_o *)sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBC8 = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      goto LABEL_16;
    case 2:
      if ( !byte_438BBC9 )
      {
        this = (MasterMissionListViewManager_o *)sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBC9 = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
      goto LABEL_16;
    case 3:
      if ( !byte_438BBCA )
      {
        this = (MasterMissionListViewManager_o *)sub_B775C4(&EventRewardSaveData_TypeInfo);
        byte_438BBCA = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
LABEL_16:
      if ( v4->fields.listType != 1 || *p_DailyFilterId_k__BackingField )
        return;
      itemList = v4->fields.itemList;
      if ( !itemList )
        goto LABEL_35;
      size = itemList->fields._size;
      if ( (int)size < 1 )
        goto LABEL_36;
      v8 = 0LL;
      break;
    default:
      return;
  }
  while ( 1 )
  {
    if ( v8 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( v9
      && (v10 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
    {
      this = (MasterMissionListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] == MasterMissionListViewItem_TypeInfo
           ? (MasterMissionListViewManager_o *)itemList->fields._items->m_Items[v8]
           : 0LL;
    }
    else
    {
      this = 0LL;
    }
    if ( targetMissionId >= 1 )
    {
      if ( !this )
        goto LABEL_35;
      this = (MasterMissionListViewManager_o *)MissionListViewItem__get_MissionId((MissionListViewItem_o *)this, 0LL);
      if ( (_DWORD)this == targetMissionId )
        break;
    }
    if ( (__int64)++v8 >= size )
    {
LABEL_36:
      LODWORD(v8) = 0;
      break;
    }
    itemList = v4->fields.itemList;
    if ( !itemList )
LABEL_35:
      sub_B7769C(this, *(_QWORD *)&targetMissionId);
  }
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__setNextMissionInfo(
        MasterMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MasterMissionListViewManager_o *v10; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v13; // x21
  ListViewItem_o *v14; // x8
  __int64 v15; // x11
  __int64 v16; // x11
  MissionListViewItem_o *v17; // x0
  System_Action_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v10 = this;
  if ( (byte_438BB52 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    this = (MasterMissionListViewManager_o *)sub_B775C4(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__);
    byte_438BB52 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&v10->fields.actionCallback,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = v10->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v14 = itemList->fields._items->m_Items[v13];
      if ( !v14 )
        break;
      v15 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (MasterMissionListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != MasterMissionListViewItem_TypeInfo )
      {
        break;
      }
      v16 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
        v17 = (MasterMissionListViewItem_c *)v14->klass->_2.typeHierarchy[v16 - 1] == MasterMissionListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v13]
            : 0LL;
      else
        v17 = 0LL;
      this = (MasterMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v17, 0LL);
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( (__int64)++v13 >= size )
        goto LABEL_23;
      itemList = v10->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B7769C(this, *(_QWORD *)&missionID);
  }
LABEL_23:
  LODWORD(v13) = 0;
LABEL_24:
  v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v10, Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, 0LL);
  v10->fields.callbackAfterScroll = v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&v10->fields.callbackAfterScroll,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  ListViewManager__MoveTopItem((ListViewManager_o *)v10, v13, 1, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *ShowMSG; // x0

  if ( (byte_438BB5B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5629/*"END_NOTICE"*/);
    byte_438BB5B = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B7769C(ShowMSG, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5629/*"END_NOTICE"*/, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass37_0___ctor(
        MasterMissionListViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass37_0___AcceptReward_b__0(
        MasterMissionListViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback
    || (System_Action__Invoke(callback, 0LL), (callback = (System_Action_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B7769C(callback, method);
  }
  MasterMissionListViewManager__afterReward((MasterMissionListViewManager_o *)callback, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass38_0___ctor(
        MasterMissionListViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass38_0___OpenOneResultDialog_b__0(
        MasterMissionListViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_43889BA & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43889BA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.callback) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  System_Action__Invoke((System_Action_o *)Instance, 0LL);
}


void __fastcall MasterMissionListViewManager___c__DisplayClass42_0___ctor(
        MasterMissionListViewManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MasterMissionListViewManager___c__DisplayClass42_0___ModifyItem_b__0(
        MasterMissionListViewManager___c__DisplayClass42_0_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  MasterMissionListViewManager___c__DisplayClass42_0_o *v4; // x19
  __int64 v5; // x10

  v4 = this;
  if ( (byte_43889BB & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass42_0_o *)sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    byte_43889BB = 1;
  }
  if ( !x
    || (v5 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1), *(&x->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[v5 - 1] != MasterMissionListViewItem_TypeInfo )
  {
    sub_B7769C(this, x);
  }
  return MissionListViewItem__get_MissionId((MissionListViewItem_o *)x, 0LL) == v4->fields.missionId;
}