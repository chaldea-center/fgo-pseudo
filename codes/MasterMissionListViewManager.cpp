void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4189CAD & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewManager_TypeInfo, method);
    byte_4189CAD = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x21
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  DataManager_o **v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  GiftMaster_o *v34; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x24
  __int64 v36; // x8
  unsigned __int64 v37; // x25
  GiftEntity_array *v38; // x20
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x1
  __int64 v41; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4189CA3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, receiveMissionIds);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__, v15);
    sub_B2C35C(&MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo, v16);
    byte_4189CA3 = 1;
  }
  entity = 0LL;
  v17 = sub_B2C42C(MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo);
  MasterMissionListViewManager___c__DisplayClass37_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass37_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_23;
  *(_QWORD *)(v17 + 16) = callback;
  v26 = (DataManager_o **)(v17 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)callback, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          Instance,
                                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    v34 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
    v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v35,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v36 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v36 >= 1 )
    {
      v37 = 0LL;
      while ( 1 )
      {
        if ( v37 >= (unsigned int)v36 )
        {
          v41 = sub_B2C460(Instance);
          sub_B2C400(v41, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &entity,
                                      receiveMissionIds->m_Items[v37 + 1],
                                      (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v34 )
            break;
          Instance = (DataManager_o *)GiftMaster__GetGiftListById(v34, *(&entity->fields.startType + 1), 0LL);
          if ( !v35 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v36) = receiveMissionIds->max_length;
        if ( (__int64)++v37 >= (int)v36 )
          goto LABEL_18;
      }
LABEL_23:
      sub_B2C434(Instance, v19);
    }
LABEL_18:
    if ( !v35 )
      goto LABEL_23;
    v38 = (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v17,
      Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v38, 0, v39, 0LL);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    Instance = *v26;
    if ( !*v26 )
      goto LABEL_23;
    System_Action__Invoke((System_Action_o *)Instance, 0LL);
    MasterMissionListViewManager__afterReward(this, v40);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__CheckBulkButton(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *bulkButton; // x20
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemSortList; // x0
  UIWidget_o *bulkButtonTxt; // x20
  int v12; // s0
  __int64 v16; // x1
  __int64 v17; // x11
  struct UICommonButton_o *v18; // x0
  UIWidget_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  int v22; // s0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189CA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4189CA0 = 1;
  }
  memset(&v26, 0, sizeof(v26));
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
          *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL),
          !bulkButtonTxt)
      || (UIWidget__set_color(bulkButtonTxt, *(UnityEngine_Color_o *)&v12, 0LL),
          (itemSortList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemSortList) == 0LL) )
    {
      sub_B2C434(itemSortList, v9);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      itemSortList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v26.fields.current )
      {
        v17 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v26.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (MasterMissionListViewItem_c *)v26.fields.current->klass->_2.typeHierarchy[v17 - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v26.fields.current[17].klass) == 3 )
        {
          v18 = this->fields.bulkButton;
          if ( !v18 )
            sub_B2C434(0LL, v16);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v18->klass->vtable._14_SetState.method)(
            v18,
            0LL,
            1LL,
            v18->klass->vtable._15_OnPress.methodPtr);
          v19 = (UIWidget_o *)this->fields.bulkButtonTxt;
          *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
          if ( !v19 )
            sub_B2C434(v20, v21);
          UIWidget__set_color(v19, *(UnityEngine_Color_o *)&v22, 0LL);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  Il2CppObject *current; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  MasterMissionListViewItem_o *v30; // x23
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  __int64 v33; // x1
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  __int64 *v36; // x8
  UILabel_o *v37; // x21
  void *ObjectList; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x1
  int32_t DailyFilterId_k__BackingField; // w8
  UILabel_o *v42; // x21
  UILabel_o *v43; // x21
  __int64 *v44; // x8
  const MethodInfo *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int v52; // w8
  void *v53; // x19
  unsigned __int64 v54; // x21
  signed __int64 v55; // x22
  UnityEngine_Object_o *v56; // x20
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4189C98 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, missionList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_8847/*"MST_MISSION_EMPTY_TXT"*/, v20);
    sub_B2C35C(&StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, v21);
    byte_4189C98 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)missionList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v58 = v57;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v58,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v58.fields.current;
      itemList = this->fields.itemList;
      v30 = (MasterMissionListViewItem_o *)sub_B2C42C(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v30, (EventMissionEntity_o *)current, type, v31);
      if ( !itemList )
        sub_B2C434(v32, v33);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v58,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_4189D8A )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, sort);
        byte_4189D8A = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v36 = &StringLiteral_8753/*"MISSION_EMPTY_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v36 = &StringLiteral_8847/*"MST_MISSION_EMPTY_TXT"*/;
      }
      ObjectList = LocalizationManager__Get((System_String_o *)*v36, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_74;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4189D8A )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, v40);
        byte_4189D8A = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      break;
    case 1:
      v43 = this->fields.emptyMessageLabel;
      if ( !byte_4189D8B )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, sort);
        byte_4189D8B = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v44 = &StringLiteral_8753/*"MISSION_EMPTY_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v44 = &StringLiteral_8847/*"MST_MISSION_EMPTY_TXT"*/;
      }
      ObjectList = LocalizationManager__Get((System_String_o *)*v44, 0LL);
      if ( !v43 )
        goto LABEL_74;
      UILabel__set_text(v43, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4189D8B )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, v40);
        byte_4189D8B = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      break;
    case 2:
      v37 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v37 )
        goto LABEL_74;
      UILabel__set_text(v37, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4189D8C )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, v40);
        byte_4189D8C = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
      break;
    case 3:
      v42 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v42 )
        goto LABEL_74;
      UILabel__set_text(v42, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4189D8D )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, v40);
        byte_4189D8D = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
      break;
    default:
      goto LABEL_58;
  }
  this->fields.filterStatus = DailyFilterId_k__BackingField;
  MasterMissionListViewManager__setList(this, v40);
LABEL_58:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.reDispAct,
      (System_Int32_array **)redispCallBack,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v45);
  if ( !ObjectList )
LABEL_74:
    sub_B2C434(ObjectList, v39);
  v52 = *((_DWORD *)ObjectList + 6);
  v53 = ObjectList;
  if ( v52 >= 1 )
  {
    v54 = 0LL;
    v55 = v52;
    while ( 1 )
    {
      if ( v54 >= (unsigned int)v52 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v56 = *(UnityEngine_Object_o **)(*((_QWORD *)v53 + 2) + 8 * v54 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ObjectList = (void *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !v56 )
          goto LABEL_74;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)v56, 0LL);
      }
      if ( (__int64)++v54 >= v55 )
        break;
      v52 = *((_DWORD *)v53 + 6);
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
    sub_B2C434(0LL, method);
  return MissionListViewItem__get_MissionId(receiveItem, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MasterMissionListViewItem_o *__fastcall MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4189C9B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v5);
    byte_4189C9B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (MasterMissionListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == MasterMissionListViewItem_TypeInfo )
    return (MasterMissionListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall MasterMissionListViewManager__ModifyItem(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
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
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t Time; // x0
  int64_t v23; // x9
  unsigned __int64 v24; // x28
  __int64 v25; // x23
  MasterMissionListViewManager___c__DisplayClass42_0_o *v26; // x25
  int64_t UserId; // x2
  int32_t missionProgressType; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x27
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x11
  MissionListViewItem_o *current; // x26
  int32_t missionId; // w27
  UnityEngine_Object_o *viewObject; // x27
  __int64 v37; // x1
  struct ListViewObject_o *v38; // x0
  int v39; // w26
  __int64 v40; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // [xsp+10h] [xbp-B0h]
  UserEventMissionMaster_o *v42; // [xsp+18h] [xbp-A8h]
  int v43; // [xsp+24h] [xbp-9Ch]
  _BYTE v45[28]; // [xsp+30h] [xbp-90h] BYREF
  int v46; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+50h] [xbp-70h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4189CA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__FindAll__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_System_Predicate_ListViewItem___ctor__, v14);
    sub_B2C35C(&System_Predicate_ListViewItem__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__, v17);
    sub_B2C35C(&MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo, v18);
    byte_4189CA8 = 1;
  }
  entity = 0LL;
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
LABEL_54:
      sub_B2C434(Instance, v20);
    }
    v42 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v43 = 0;
      v23 = Time;
      v24 = 0LL;
      v41 = MasterData_WarQuestSelectionMaster;
      do
      {
        v25 = v23;
        v26 = (MasterMissionListViewManager___c__DisplayClass42_0_o *)sub_B2C42C(MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo);
        MasterMissionListViewManager___c__DisplayClass42_0___ctor(v26, 0LL);
        if ( v24 >= receiveMissionIds->max_length )
        {
          v40 = sub_B2C460(Instance);
          sub_B2C400(v40, 0LL);
        }
        if ( !v26 )
          goto LABEL_54;
        v20 = (unsigned int)receiveMissionIds->m_Items[v24 + 1];
        v26->fields.missionId = v20;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_54;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v20,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_54;
        v23 = v25;
        if ( v25 > *(_QWORD *)&Instance->fields.lastFrameTime && v25 <= (__int64)Instance->fields.masterCheckName )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)v42;
          if ( !v42 )
            goto LABEL_54;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v42,
                                        &entity,
                                        UserId,
                                        v26->fields.missionId,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_54;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v30,
              (Il2CppObject *)v26,
              Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_ListViewItem___ctor__);
            if ( !itemList )
              goto LABEL_54;
            Instance = (DataManager_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                                          (System_Predicate_T__o *)v30,
                                          (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              goto LABEL_54;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v45,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v47 = *(System_Collections_Generic_List_Enumerator_T__o *)v45;
            while ( 1 )
            {
              v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v47,
                      (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v31 & 1) == 0 )
                break;
              if ( v47.fields.current
                && (v33 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v47.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v33) )
              {
                if ( (MasterMissionListViewItem_c *)v47.fields.current->klass->_2.typeHierarchy[v33 - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v47.fields.current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              missionId = v26->fields.missionId;
              if ( !byte_4185D95 )
              {
                v31 = sub_B2C35C(&EventRewardSaveData_TypeInfo, v32);
                byte_4185D95 = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = missionId;
              if ( !current )
                sub_B2C434(v31, v32);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v38 = current->fields.viewObject;
                if ( !v38 )
                  sub_B2C434(0LL, v37);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v38->klass->vtable._5_SetItem.method)(
                  v38,
                  current,
                  v38->klass->vtable._6_SetItem.methodPtr);
              }
            }
            *(_DWORD *)&v45[4 * v43 + 24] = 279;
            v39 = ++v46;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v47,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            MasterData_WarQuestSelectionMaster = v41;
            if ( v39 )
            {
              v43 = v39;
              v23 = v25;
              if ( *(_DWORD *)&v45[4 * v39 + 20] == 279 )
              {
                v46 = v39 - 1;
                v43 = v39 - 1;
              }
              goto LABEL_49;
            }
            v43 = 0;
          }
          v23 = v25;
        }
LABEL_49:
        ++v24;
      }
      while ( (__int64)v24 < (int)receiveMissionIds->max_length );
    }
  }
}


void __fastcall MasterMissionListViewManager__OnChangeAlphaAnim(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_MasterMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  __int64 v7; // x22

  if ( (byte_4189CAB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v3);
    byte_4189CAB = 1;
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      ObjectList = MasterMissionListViewManager__get_ObjectList(this, v5);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      ObjectList = (System_Collections_Generic_List_MasterMissionListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v5);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B2C434(ObjectList, v5);
  }
}


void __fastcall MasterMissionListViewManager__OnClickFilterList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_4189C9E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189C9E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_31A2728[filterStatus];
  MasterMissionListViewManager__setList(this, v3);
}


void __fastcall MasterMissionListViewManager__OnClickListView(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 v9; // x10
  struct MasterMissionListViewItem_o *v10; // x20
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4189C9C & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionListViewObject_TypeInfo, obj);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_15398/*"Wait_Action"*/, v6);
    byte_4189C9C = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_19;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15398/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (v9 = *(&MasterMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v9 - 1] != MasterMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem(
                                        (MasterMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0LL )
  {
LABEL_19:
    sub_B2C434(targetFSM, obj);
  }
  v10 = (struct MasterMissionListViewItem_o *)targetFSM;
  if ( ((*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
          targetFSM,
          targetFSM->klass[1]._1.this_arg.data) & 1) == 0
    || MasterMissionListViewItem__get_IsHideReward(v10, v11)
    || v10->fields.isHideRewardDetail )
  {
    if ( v10->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v10;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.receiveItem,
        (System_Int32_array **)v10,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v10, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v19);
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
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v10, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x28
  void *Instance; // x0
  System_String_o *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v43; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x25
  int max_length; // w26
  __int64 v46; // x21
  GiftEntity_o **m_Items; // x22
  GiftEntity_o *v48; // x8
  int32_t type; // w19
  GiftEntity_o *v50; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x28
  __int64 v52; // x27
  GiftEntity_o **v53; // x24
  Il2CppObject *CountableString; // x21
  System_Text_StringBuilder_o *v55; // x19
  GiftEntity_o *v56; // x8
  System_String_o *v57; // x22
  Il2CppObject *v58; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x1
  GiftEntity_o *v60; // x8
  int32_t v61; // w19
  GiftEntity_o *v62; // x8
  ServantEntity_o *v63; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v65; // x0
  GiftEntity_o *v66; // x8
  Il2CppObject *v67; // x19
  Il2CppObject *v68; // x0
  Il2CppObject *v69; // x19
  System_String_o *v70; // x0
  GiftEntity_o *v71; // x8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v72; // x23
  System_Text_StringBuilder_o *v73; // x21
  System_String_o *v74; // x19
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  System_String_o *v77; // x19
  System_String_o *v78; // x0
  CommonUI_o *v79; // x19
  GiftEntity_array *v80; // x20
  System_String_o *v81; // x21
  MissionRewardGetDialog_ClickDelegate_o *v82; // x22
  __int64 v83; // x0
  void **v84; // [xsp+0h] [xbp-A0h]
  Il2CppObject *v85; // [xsp+8h] [xbp-98h]
  System_Text_StringBuilder_o *v86; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+18h] [xbp-88h]
  int v88; // [xsp+24h] [xbp-7Ch]
  System_String_o *format; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-70h]
  int32_t num; // [xsp+3Ch] [xbp-64h] BYREF
  WarEntity_o *v92; // [xsp+40h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4189CA4 & 1) == 0 )
  {
    sub_B2C35C(&MissionRewardGetDialog_ClickDelegate_TypeInfo, callback);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor___67310480, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v16);
    sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v21);
    sub_B2C35C(&Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__, v22);
    sub_B2C35C(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_8746/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v24);
    sub_B2C35C(&StringLiteral_8750/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v25);
    sub_B2C35C(&StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, v26);
    sub_B2C35C(&StringLiteral_3269/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v27);
    sub_B2C35C(&StringLiteral_32/*"\n \n "*/, v28);
    sub_B2C35C(&StringLiteral_8745/*"MISSION_ACTION_ITEM_FORMAT"*/, v29);
    sub_B2C35C(&StringLiteral_30/*"\n "*/, v30);
    sub_B2C35C(&StringLiteral_8752/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v31);
    byte_4189CA4 = 1;
  }
  v92 = 0LL;
  entity = 0LL;
  v32 = sub_B2C42C(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  MasterMissionListViewManager___c__DisplayClass38_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass38_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_113;
  *(_QWORD *)(v32 + 16) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)callback, v35, v36, v37, v38, v39, v40);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_113;
  v84 = (void **)(v32 + 16);
  if ( !Instance )
    goto LABEL_113;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v43 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v43, 0LL);
  v86 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v86, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_113;
  v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  max_length = GiftListById->max_length;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3269/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v88 = 0;
    v46 = 0LL;
    m_Items = GiftListById->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v46 >= GiftListById->max_length )
      {
LABEL_114:
        v83 = sub_B2C460(Instance);
        sub_B2C400(v83, 0LL);
      }
      v48 = m_Items[v46];
      if ( !v48 )
        goto LABEL_113;
      type = v48->fields.type;
      Instance = (void *)Gift__IsServant_27324084(type, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (void *)Gift__IsCommandCode_27324480(type, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)Gift__IsCostumeRelease(type, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            if ( (unsigned int)v46 >= GiftListById->max_length )
              goto LABEL_114;
            v50 = m_Items[v46];
            Instance = MasterData_WarQuestSelectionMaster;
            if ( !v50 || !MasterData_WarQuestSelectionMaster )
              goto LABEL_113;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 &entity,
                                 v50->fields.objectId,
                                 (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_113;
              Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, entity->fields.id, 0LL);
              v88 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
        }
      }
      if ( (int)++v46 >= max_length )
        goto LABEL_30;
    }
  }
  v88 = 0;
LABEL_30:
  v85 = (Il2CppObject *)v32;
  collection = (System_Collections_Generic_IEnumerable_T__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)collection,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v52 = 0LL;
    v53 = GiftListById->m_Items;
    do
    {
      if ( (unsigned int)v52 >= GiftListById->max_length )
        goto LABEL_114;
      v60 = v53[v52];
      if ( !v60 )
        goto LABEL_113;
      v61 = v60->fields.type;
      Instance = (void *)Gift__IsServant_27324084(v61, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (unsigned int)v52 >= GiftListById->max_length )
          goto LABEL_114;
        v62 = v53[v52];
        if ( !v62 )
          goto LABEL_113;
        if ( !v44 )
          goto LABEL_113;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v44,
                     v62->fields.objectId,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_113;
        v63 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0LL);
        Instance = (void *)SvtType__IsStatusUp(v63->fields.type, 0LL);
        if ( IsCombineMaterial || ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v43 )
            goto LABEL_113;
          v65 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v43->klass->vtable._3_ToString.method)(
                                     v43,
                                     v43->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v65, 0LL) )
            System_Text_StringBuilder__Append_42408700(v43, (System_String_o *)StringLiteral_30/*"\n "*/, 0LL);
          Instance = ServantEntity__getName(v63, -1, -1, 0LL);
          if ( (unsigned int)v52 >= GiftListById->max_length )
            goto LABEL_114;
          v66 = v53[v52];
          if ( !v66 )
            goto LABEL_113;
          v67 = (Il2CppObject *)Instance;
          num = v66->fields.num;
          v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v69 = (Il2CppObject *)System_String__Format_44301068(format, v67, v68, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_8745/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
          Instance = System_Text_StringBuilder__AppendFormat(v43, v70, v69, 0LL);
          if ( (unsigned int)v52 >= GiftListById->max_length )
            goto LABEL_114;
          if ( !v51 )
            goto LABEL_113;
          v59 = (EventMissionProgressRequest_Argument_ProgressData_o *)v53[v52];
          Instance = v51;
LABEL_71:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            v59,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        }
      }
      else
      {
        Instance = (void *)Gift__IsItem_27324028(v61, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( (unsigned int)v52 >= GiftListById->max_length )
            goto LABEL_114;
          v71 = v53[v52];
          Instance = MasterData_WarQuestSelectionMaster;
          if ( !v71 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_113;
          Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               MasterData_WarQuestSelectionMaster,
                               &v92,
                               v71->fields.objectId,
                               (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !v92 || !Instance )
              goto LABEL_113;
            Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, v92->fields.id, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !v92 )
                goto LABEL_113;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(v92->fields.bannerId, 0LL);
              v55 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v55, 0LL);
              if ( !v92 || !v55 )
                goto LABEL_113;
              System_Text_StringBuilder__Append_42408700(v55, v92->fields.age, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8750/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( (unsigned int)v52 >= GiftListById->max_length )
                goto LABEL_114;
              v56 = v53[v52];
              if ( !v56 )
                goto LABEL_113;
              v57 = (System_String_o *)Instance;
              num = v56->fields.num;
              v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
              System_Text_StringBuilder__AppendFormat_42415252(v55, v57, CountableString, v58, 0LL);
              if ( v88 >= 2 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8745/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v86 )
                  goto LABEL_113;
                System_Text_StringBuilder__AppendFormat(v86, (System_String_o *)Instance, (Il2CppObject *)v55, 0LL);
                Instance = v86;
                v34 = (System_String_o *)StringLiteral_30/*"\n "*/;
              }
              else
              {
                v34 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v55->klass->vtable._3_ToString.method)(
                                           v55,
                                           v55->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                Instance = v86;
                if ( !v86 )
                  goto LABEL_113;
              }
              Instance = System_Text_StringBuilder__Append_42408700((System_Text_StringBuilder_o *)Instance, v34, 0LL);
              if ( (unsigned int)v52 >= GiftListById->max_length )
                goto LABEL_114;
              Instance = collection;
              if ( !collection )
                goto LABEL_113;
              v59 = (EventMissionProgressRequest_Argument_ProgressData_o *)v53[v52];
              goto LABEL_71;
            }
          }
        }
      }
      ++v52;
    }
    while ( (int)v52 < max_length );
  }
  v72 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v72,
    collection,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_GiftEntity___ctor___67310480);
  if ( !v72 )
    goto LABEL_113;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v72,
    (System_Collections_Generic_IEnumerable_T__o *)v51,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v72->fields._size >= 1 )
  {
    v73 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v73, 0LL);
    Instance = v86;
    if ( !v86 )
      goto LABEL_113;
    v74 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v86->klass->vtable._3_ToString.method)(
                               v86,
                               v86->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = (void *)System_String__IsNullOrEmpty(v74, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_113;
    }
    else
    {
      if ( v88 >= 2 )
      {
        if ( !v74 )
          goto LABEL_113;
        Instance = System_String__Substring_44369268(v74, 0, v74->fields.m_stringLength - 2, 0LL);
        if ( !v73 )
          goto LABEL_113;
        System_Text_StringBuilder__Append_42408700(v73, (System_String_o *)Instance, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_8746/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = System_Text_StringBuilder__Append_42408700(v73, v75, 0LL);
        if ( !v43 )
          goto LABEL_113;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8749/*"MISSION_ACTION_SUCCESS"*/, 0LL);
        if ( !v73 )
          goto LABEL_113;
        Instance = System_Text_StringBuilder__AppendFormat(v73, (System_String_o *)Instance, (Il2CppObject *)v74, 0LL);
        if ( !v43 )
          goto LABEL_113;
      }
      v76 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v43->klass->vtable._3_ToString.method)(
                                 v43,
                                 v43->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v76, 0LL) )
        System_Text_StringBuilder__Append_42408700(v73, (System_String_o *)StringLiteral_32/*"\n \n "*/, 0LL);
    }
    v77 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v43->klass->vtable._3_ToString.method)(
                               v43,
                               v43->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = (void *)System_String__IsNullOrEmpty(v77, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v73 )
        goto LABEL_113;
      System_Text_StringBuilder__Append_42408700(v73, v77, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8752/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_42408700(v73, v78, 0LL);
    }
    v79 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v72,
                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v73 )
    {
      v80 = (GiftEntity_array *)Instance;
      v81 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v73->klass->vtable._3_ToString.method)(
                                 v73,
                                 v73->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v82 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B2C42C(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v82,
        v85,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v79 )
      {
        CommonUI__OpenMissionRewardGetDialog(v79, v80, v81, v82, 0, 0LL);
        return;
      }
    }
LABEL_113:
    sub_B2C434(Instance, v34);
  }
  Instance = *v84;
  if ( !*v84 )
    goto LABEL_113;
  System_Action__Invoke((System_Action_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MasterMissionListViewItem__o *__fastcall MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  struct MasterMissionListViewItem_o *receiveItem; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x10
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4189CAC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, bulk);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo, v10);
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v11);
    byte_4189CAC = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
    if ( v12 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        (EventMissionProgressRequest_Argument_ProgressData_o *)receiveItem,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
    }
LABEL_19:
    sub_B2C434(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v15 )
      break;
    if ( v18.fields.current )
    {
      v16 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (MasterMissionListViewItem_c *)v18.fields.current->klass->_2.typeHierarchy[v16 - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v18.fields.current[17].klass) == 3 )
      {
        if ( !v12 )
          sub_B2C434(v15, v18.fields.current);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18.fields.current,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
}


void __fastcall MasterMissionListViewManager__RefrashListDisp(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_MasterMissionListViewObject__o *ObjectList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_MasterMissionListViewObject__o *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x11
  __int64 v15; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v18; // w8
  __int64 v19; // x21
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4189C9D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v7);
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v8);
    byte_4189C9D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v11 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    if ( !v21.fields.current
      || (v14 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v21.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
      || (MasterMissionListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v14 - 1] != MasterMissionListViewItem_TypeInfo )
    {
      sub_B2C434(v12, v13);
    }
    v15 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
    {
      if ( (MasterMissionListViewItem_c *)v21.fields.current->klass->_2.typeHierarchy[v15 - 1] == MasterMissionListViewItem_TypeInfo )
        current = v21.fields.current;
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
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v11 )
    goto LABEL_25;
  size = v11->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v18 = v11->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( v18 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ObjectList = (System_Collections_Generic_List_MasterMissionListViewObject__o *)v11->fields._items->m_Items[v19];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_MasterMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v18 = v11->fields._size;
        if ( (int)++v19 >= v18 )
          return;
      }
LABEL_25:
      sub_B2C434(ObjectList, v10);
    }
  }
}


void __fastcall MasterMissionListViewManager__SetOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v15; // x1
  struct MasterMissionListViewItem_o *v16; // x21
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4189CA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_B2C35C(&StringLiteral_18197/*"ef_mission_extric01"*/, v7);
    sub_B2C35C(&StringLiteral_20565/*"modifyOpenItem"*/, v8);
    byte_4189CA9 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MasterMissionListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B2C434(0LL, v10);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v27,
        ObjectList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v28 = v27;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v28,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v11 )
          break;
        current = v28.fields.current;
        if ( !v28.fields.current )
          sub_B2C434(v11, v12);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v28.fields.current,
                                          v12);
        v16 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_B2C434(0LL, v15);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4185D95 )
          {
            sub_B2C35C(&EventRewardSaveData_TypeInfo, v17);
            byte_4185D95 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v16;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v16,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v16, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18197/*"ef_mission_extric01"*/, transform, v26);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v28,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20565/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0LL);
  }
}


void __fastcall MasterMissionListViewManager__SetReceiveReward(
        MasterMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4189CA1 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, missionEntity);
    sub_B2C35C(&StringLiteral_8756/*"MISSION_REWARD"*/, v5);
    byte_4189CA1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.missionToRecieve,
    (System_Int32_array **)missionEntity,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B2C434(0LL, v12);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8756/*"MISSION_REWARD"*/, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.getSvtList,
    (System_Int32_array **)svts,
    (System_String_array **)cmds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_B2C2F8(
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
  if ( (byte_4189CAE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16235/*"actionAfterCallback"*/, method);
    byte_4189CAE = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16235/*"actionAfterCallback"*/,
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
    sub_B2C2F8(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__afterReward(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4189CA5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5482/*"END_EFFECT"*/, method);
    byte_4189CA5 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5482/*"END_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x19
  int v12; // s0
  UnityEngine_Transform_o *v15; // x19
  int v16; // s0

  if ( (byte_4189CA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, parentTr);
    sub_B2C35C(&MasterMissionListViewManager_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4189CA7 = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15) )
  {
LABEL_12:
    sub_B2C434(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  return v10;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  MasterMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4189C97 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4189C97 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (MasterMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v11;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189C96 & 1) == 0 )
  {
    sub_B2C35C(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___, method);
    byte_4189C96 = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_1AB37C8 *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void __fastcall MasterMissionListViewManager__modifyOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 v14; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v16; // x1
  void *v17; // x0
  System_Action_o *v18; // x20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4189CAA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v7);
    sub_B2C35C(&Method_MasterMissionListViewManager__modifyOpenItem_b__44_0__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4189CAA = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B2C434(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v20.fields.current;
      if ( !v20.fields.current
        || (v14 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
        || (MasterMissionListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[v14 - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_B2C434(v11, v12);
      }
      monitor = (UnityEngine_Object_o *)v20.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_B2C434(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__44_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v18, 0LL);
}


void __fastcall MasterMissionListViewManager__setAfterAction(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  AutomatedAction_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x0
  int32_t v13; // w19
  int64_t Time; // x20
  _BOOL4 v15; // w20
  bool v16; // w3
  int32_t v17; // w1
  __int64 v18; // x0

  if ( (byte_4189CA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4189CA6 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, (const MethodInfo *)receiveMissionIds);
  MasterMissionListViewManager__CheckBulkButton(this, v9);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    v12 = UnityEngine_Random__Range_35348680(0, receiveMissionIds->max_length, 0LL);
    if ( (unsigned int)v12 >= receiveMissionIds->max_length )
    {
      v18 = sub_B2C460(v12);
      sub_B2C400(v18, 0LL);
    }
    v13 = receiveMissionIds->m_Items[(int)v12 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( (Time = NetworkManager__getTime(0LL),
          (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (AutomatedAction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
      || (Instance = (AutomatedAction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            v13,
                                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL
      || (Time <= (__int64)Instance[1].klass ? (v15 = 0) : (v15 = Time <= (__int64)Instance[1].monitor),
          (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
    {
LABEL_22:
      sub_B2C434(Instance, v11);
    }
    if ( v15 )
    {
      v16 = 1;
      v17 = v13;
    }
    else
    {
      v17 = v13;
      v16 = 0;
    }
    AutomatedAction__SetMissionAction(Instance, v17, 5, v16, 0LL);
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
    sub_B2C434(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v11; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UILabel_o *v23; // x21
  bool v24; // w2
  struct ListViewSort_o *v25; // x8
  int v26; // w9
  const MethodInfo *v27; // x1
  int32_t filterStatus; // w20
  int32_t v29; // w20
  int32_t v30; // w20
  int32_t v31; // w20

  if ( (byte_4189C9F & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_8847/*"MST_MISSION_EMPTY_TXT"*/, v4);
    sub_B2C35C(&StringLiteral_17046/*"btn_txt_completed"*/, v5);
    sub_B2C35C(&StringLiteral_17079/*"btn_txt_receipt"*/, v6);
    sub_B2C35C(&StringLiteral_17078/*"btn_txt_progress"*/, v7);
    sub_B2C35C(&StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, v8);
    sub_B2C35C(&StringLiteral_17029/*"btn_txt_all"*/, v9);
    byte_4189C9F = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v11 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914748(v11, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8753/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_55:
    sub_B2C434(operationSortInfo, v21);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17029/*"btn_txt_all"*/, v22);
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
      v23 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8847/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v23 )
        goto LABEL_55;
      UILabel__set_text(v23, operationSortInfo, 0LL);
      goto LABEL_37;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17079/*"btn_txt_receipt"*/, v22);
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
      v25 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v26 = 1;
      goto LABEL_39;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17078/*"btn_txt_progress"*/, v22);
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
      v24 = 0;
      goto LABEL_35;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17046/*"btn_txt_completed"*/, v22);
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
      v24 = 1;
LABEL_35:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v24, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_37:
      v25 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v26 = 13;
LABEL_39:
      v25->fields.sortKind = v26;
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
          if ( !byte_4189D8E )
          {
            sub_B2C35C(&EventRewardSaveData_TypeInfo, v27);
            byte_4189D8E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v29 = this->fields.filterStatus;
          if ( !byte_4189D8F )
          {
            sub_B2C35C(&EventRewardSaveData_TypeInfo, v27);
            byte_4189D8F = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v29;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v30 = this->fields.filterStatus;
          if ( !byte_4189D90 )
          {
            sub_B2C35C(&EventRewardSaveData_TypeInfo, v27);
            byte_4189D90 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v30;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v31 = this->fields.filterStatus;
          if ( !byte_4189D91 )
          {
            sub_B2C35C(&EventRewardSaveData_TypeInfo, v27);
            byte_4189D91 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v31;
          EventRewardSaveData__SaveLimitedMissionData(0LL);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v27);
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
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t *p_DailyFilterId_k__BackingField; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v10; // x21
  ListViewItem_o *v11; // x8
  __int64 v12; // x11

  v4 = this;
  if ( (byte_4189C9A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&targetMissionId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (MasterMissionListViewManager_o *)sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v6);
    byte_4189C9A = 1;
  }
  switch ( v4->fields.listType )
  {
    case 0:
      if ( !byte_4189D8A )
      {
        this = (MasterMissionListViewManager_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4189D8A = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      goto LABEL_16;
    case 1:
      if ( !byte_4189D8B )
      {
        this = (MasterMissionListViewManager_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4189D8B = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      goto LABEL_16;
    case 2:
      if ( !byte_4189D8C )
      {
        this = (MasterMissionListViewManager_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4189D8C = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
      goto LABEL_16;
    case 3:
      if ( !byte_4189D8D )
      {
        this = (MasterMissionListViewManager_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4189D8D = 1;
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
      v10 = 0LL;
      break;
    default:
      return;
  }
  while ( 1 )
  {
    if ( v10 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v11 = itemList->fields._items->m_Items[v10];
    if ( v11
      && (v12 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
    {
      this = (MasterMissionListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == MasterMissionListViewItem_TypeInfo
           ? (MasterMissionListViewManager_o *)itemList->fields._items->m_Items[v10]
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
    if ( (__int64)++v10 >= size )
    {
LABEL_36:
      LODWORD(v10) = 0;
      break;
    }
    itemList = v4->fields.itemList;
    if ( !itemList )
LABEL_35:
      sub_B2C434(this, *(_QWORD *)&targetMissionId);
  }
  ListViewManager__SetTopItem((ListViewManager_o *)v4, v10, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v17; // x21
  ListViewItem_o *v18; // x8
  __int64 v19; // x11
  __int64 v20; // x11
  MissionListViewItem_o *v21; // x0
  System_Action_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  v10 = this;
  if ( (byte_4189C99 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v13);
    this = (MasterMissionListViewManager_o *)sub_B2C35C(
                                               &Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
                                               v14);
    byte_4189C99 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B2C2F8(
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
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v18 = itemList->fields._items->m_Items[v17];
      if ( !v18 )
        break;
      v19 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (MasterMissionListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != MasterMissionListViewItem_TypeInfo )
      {
        break;
      }
      v20 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v20 )
        v21 = (MasterMissionListViewItem_c *)v18->klass->_2.typeHierarchy[v20 - 1] == MasterMissionListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v17]
            : 0LL;
      else
        v21 = 0LL;
      this = (MasterMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v21, 0LL);
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( (__int64)++v17 >= size )
        goto LABEL_23;
      itemList = v10->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&missionID);
  }
LABEL_23:
  LODWORD(v17) = 0;
LABEL_24:
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v10, Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, 0LL);
  v10->fields.callbackAfterScroll = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v10->fields.callbackAfterScroll,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ListViewManager__MoveTopItem((ListViewManager_o *)v10, v17, 1, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *ShowMSG; // x0

  if ( (byte_4189CA2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5487/*"END_NOTICE"*/, method);
    byte_4189CA2 = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B2C434(ShowMSG, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5487/*"END_NOTICE"*/, 0LL);
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
    sub_B2C434(callback, method);
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

  if ( (byte_4185D10 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185D10 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.callback) == 0LL) )
  {
    sub_B2C434(Instance, v4);
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
  if ( (byte_4185D11 & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass42_0_o *)sub_B2C35C(&MasterMissionListViewItem_TypeInfo, x);
    byte_4185D11 = 1;
  }
  if ( !x
    || (v5 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1), *(&x->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[v5 - 1] != MasterMissionListViewItem_TypeInfo )
  {
    sub_B2C434(this, x);
  }
  return MissionListViewItem__get_MissionId((MissionListViewItem_o *)x, 0LL) == v4->fields.missionId;
}