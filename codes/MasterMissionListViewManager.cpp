void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4216AFF & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewManager_TypeInfo, method);
    byte_4216AFF = 1;
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DataManager_o **v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  GiftMaster_o *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x24
  __int64 v37; // x8
  unsigned __int64 v38; // x25
  GiftEntity_array *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x22
  const MethodInfo *v43; // x1
  __int64 v44; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4216AF5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, receiveMissionIds);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__, v15);
    sub_B0D8A4(&MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo, v16);
    byte_4216AF5 = 1;
  }
  entity = 0LL;
  v17 = sub_B0D974(MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo, receiveMissionIds, callback);
  MasterMissionListViewManager___c__DisplayClass37_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass37_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_23;
  *(_QWORD *)(v17 + 16) = callback;
  v25 = (DataManager_o **)(v17 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v17 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          Instance,
                                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    v33 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
    v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                    v34,
                                                                                                    v35);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v36,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v37 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v37 >= 1 )
    {
      v38 = 0LL;
      while ( 1 )
      {
        if ( v38 >= (unsigned int)v37 )
        {
          v44 = sub_B0D9A8(Instance);
          sub_B0D948(v44, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &entity,
                                      receiveMissionIds->m_Items[v38 + 1],
                                      (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v33 )
            break;
          Instance = (DataManager_o *)GiftMaster__GetGiftListById(v33, *(&entity->fields.startType + 1), 0LL);
          if ( !v36 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v37) = receiveMissionIds->max_length;
        if ( (__int64)++v38 >= (int)v37 )
          goto LABEL_18;
      }
LABEL_23:
      sub_B0D97C(Instance);
    }
LABEL_18:
    if ( !v36 )
      goto LABEL_23;
    v39 = (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v36,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v40, v41);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v17,
      Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v39, 0, v42, 0LL);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    Instance = *v25;
    if ( !*v25 )
      goto LABEL_23;
    System_Action__Invoke((System_Action_o *)Instance, 0LL);
    MasterMissionListViewManager__afterReward(this, v43);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemSortList; // x0
  UIWidget_o *bulkButtonTxt; // x20
  int v11; // s0
  __int64 v15; // x11
  struct UICommonButton_o *v16; // x0
  UIWidget_o *v17; // x19
  __int64 v18; // x0
  int v19; // s0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4216AF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4216AF2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
          *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_gray(0LL),
          !bulkButtonTxt)
      || (UIWidget__set_color(bulkButtonTxt, *(UnityEngine_Color_o *)&v11, 0LL),
          (itemSortList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemSortList) == 0LL) )
    {
      sub_B0D97C(itemSortList);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      itemSortList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v23.fields.current )
      {
        v15 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (MasterMissionListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v15 - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v23.fields.current[17].klass) == 3 )
        {
          v16 = this->fields.bulkButton;
          if ( !v16 )
            sub_B0D97C(0LL);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v16->klass->vtable._14_SetState.method)(
            v16,
            0LL,
            1LL,
            v16->klass->vtable._15_OnPress.methodPtr);
          v17 = (UIWidget_o *)this->fields.bulkButtonTxt;
          *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
          if ( !v17 )
            sub_B0D97C(v18);
          UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v19, 0LL);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *current; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  MasterMissionListViewItem_o *v32; // x23
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  __int64 *v37; // x8
  UILabel_o *v38; // x21
  void *ObjectList; // x0
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

  if ( (byte_4216AEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, missionList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_8870/*"MST_MISSION_EMPTY_TXT"*/, v20);
    sub_B0D8A4(&StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, v21);
    byte_4216AEA = 1;
  }
  memset(&v58, 0, sizeof(v58));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)missionList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v58 = v57;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v58,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v58.fields.current;
      itemList = this->fields.itemList;
      v32 = (MasterMissionListViewItem_o *)sub_B0D974(MasterMissionListViewItem_TypeInfo, v28, v29);
      MasterMissionListViewItem___ctor(v32, (EventMissionEntity_o *)current, type, v33);
      if ( !itemList )
        sub_B0D97C(v34);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v58,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B0D840(
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
      if ( !byte_4216BDC )
      {
        sub_B0D8A4(&EventRewardSaveData_TypeInfo, sort);
        byte_4216BDC = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v37 = &StringLiteral_8775/*"MISSION_EMPTY_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v37 = &StringLiteral_8870/*"MST_MISSION_EMPTY_TXT"*/;
      }
      ObjectList = LocalizationManager__Get((System_String_o *)*v37, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_74;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4216BDC )
      {
        sub_B0D8A4(&EventRewardSaveData_TypeInfo, v40);
        byte_4216BDC = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      break;
    case 1:
      v43 = this->fields.emptyMessageLabel;
      if ( !byte_4216BDD )
      {
        sub_B0D8A4(&EventRewardSaveData_TypeInfo, sort);
        byte_4216BDD = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v44 = &StringLiteral_8775/*"MISSION_EMPTY_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v44 = &StringLiteral_8870/*"MST_MISSION_EMPTY_TXT"*/;
      }
      ObjectList = LocalizationManager__Get((System_String_o *)*v44, 0LL);
      if ( !v43 )
        goto LABEL_74;
      UILabel__set_text(v43, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4216BDD )
      {
        sub_B0D8A4(&EventRewardSaveData_TypeInfo, v40);
        byte_4216BDD = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      break;
    case 2:
      v38 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v38 )
        goto LABEL_74;
      UILabel__set_text(v38, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4216BDE )
      {
        sub_B0D8A4(&EventRewardSaveData_TypeInfo, v40);
        byte_4216BDE = 1;
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
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v42 )
        goto LABEL_74;
      UILabel__set_text(v42, (System_String_o *)ObjectList, 0LL);
      if ( !byte_4216BDF )
      {
        sub_B0D8A4(&EventRewardSaveData_TypeInfo, v40);
        byte_4216BDF = 1;
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
    sub_B0D840(
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
    sub_B0D97C(ObjectList);
  v52 = *((_DWORD *)ObjectList + 6);
  v53 = ObjectList;
  if ( v52 >= 1 )
  {
    v54 = 0LL;
    v55 = v52;
    while ( 1 )
    {
      if ( v54 >= (unsigned int)v52 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(0LL);
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

  if ( (byte_4216AED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v5);
    byte_4216AED = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t Time; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x9
  unsigned __int64 v25; // x28
  __int64 v26; // x23
  MasterMissionListViewManager___c__DisplayClass42_0_o *v27; // x25
  int32_t v28; // w1
  int64_t UserId; // x2
  int32_t missionProgressType; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x27
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x11
  MissionListViewItem_o *current; // x26
  int32_t missionId; // w27
  UnityEngine_Object_o *viewObject; // x27
  struct ListViewObject_o *v39; // x0
  int v40; // w26
  __int64 v41; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // [xsp+10h] [xbp-B0h]
  UserEventMissionMaster_o *v43; // [xsp+18h] [xbp-A8h]
  int v44; // [xsp+24h] [xbp-9Ch]
  _BYTE v46[28]; // [xsp+30h] [xbp-90h] BYREF
  int v47; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+50h] [xbp-70h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4216AFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__FindAll__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Predicate_ListViewItem___ctor__, v14);
    sub_B0D8A4(&System_Predicate_ListViewItem__TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__, v17);
    sub_B0D8A4(&MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo, v18);
    byte_4216AFA = 1;
  }
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  v47 = 0;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
LABEL_54:
      sub_B0D97C(Instance);
    }
    v43 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v44 = 0;
      v24 = Time;
      v25 = 0LL;
      v42 = MasterData_WarQuestSelectionMaster;
      do
      {
        v26 = v24;
        v27 = (MasterMissionListViewManager___c__DisplayClass42_0_o *)sub_B0D974(
                                                                        MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo,
                                                                        v22,
                                                                        v23);
        MasterMissionListViewManager___c__DisplayClass42_0___ctor(v27, 0LL);
        if ( v25 >= receiveMissionIds->max_length )
        {
          v41 = sub_B0D9A8(Instance);
          sub_B0D948(v41, 0LL);
        }
        if ( !v27 )
          goto LABEL_54;
        v28 = receiveMissionIds->m_Items[v25 + 1];
        v27->fields.missionId = v28;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_54;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v28,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_54;
        v24 = v26;
        if ( v26 > *(_QWORD *)&Instance->fields.lastFrameTime && v26 <= (__int64)Instance->fields.masterCheckName )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)v43;
          if ( !v43 )
            goto LABEL_54;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v43,
                                        &entity,
                                        UserId,
                                        v27->fields.missionId,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_54;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                             System_Predicate_ListViewItem__TypeInfo,
                                                                             v22,
                                                                             v23);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v32,
              (Il2CppObject *)v27,
              Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__,
              (const MethodInfo_2AF7E30 *)Method_System_Predicate_ListViewItem___ctor__);
            if ( !itemList )
              goto LABEL_54;
            Instance = (DataManager_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                                          (System_Predicate_T__o *)v32,
                                          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              goto LABEL_54;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v46,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v48 = *(System_Collections_Generic_List_Enumerator_T__o *)v46;
            while ( 1 )
            {
              v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v48,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v33 & 1) == 0 )
                break;
              if ( v48.fields.current
                && (v35 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v48.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v35) )
              {
                if ( (MasterMissionListViewItem_c *)v48.fields.current->klass->_2.typeHierarchy[v35 - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v48.fields.current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              missionId = v27->fields.missionId;
              if ( !byte_421277E )
              {
                v33 = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v34);
                byte_421277E = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = missionId;
              if ( !current )
                sub_B0D97C(v33);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v39 = current->fields.viewObject;
                if ( !v39 )
                  sub_B0D97C(0LL);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v39->klass->vtable._5_SetItem.method)(
                  v39,
                  current,
                  v39->klass->vtable._6_SetItem.methodPtr);
              }
            }
            *(_DWORD *)&v46[4 * v44 + 24] = 279;
            v40 = ++v47;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v48,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            MasterData_WarQuestSelectionMaster = v42;
            if ( v40 )
            {
              v44 = v40;
              v24 = v26;
              if ( *(_DWORD *)&v46[4 * v40 + 20] == 279 )
              {
                v47 = v40 - 1;
                v44 = v40 - 1;
              }
              goto LABEL_49;
            }
            v44 = 0;
          }
          v24 = v26;
        }
LABEL_49:
        ++v25;
      }
      while ( (__int64)v25 < (int)receiveMissionIds->max_length );
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
  const MethodInfo *v8; // x1

  if ( (byte_4216AFD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v3);
    byte_4216AFD = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      ObjectList = (System_Collections_Generic_List_MasterMissionListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v8);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B0D97C(ObjectList);
  }
}


void __fastcall MasterMissionListViewManager__OnClickFilterList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_4216AF0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216AF0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_3204518[filterStatus];
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
  const MethodInfo *v9; // x1
  __int64 v10; // x10
  struct MasterMissionListViewItem_o *v11; // x20
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4216AEE & 1) == 0 )
  {
    sub_B0D8A4(&MasterMissionListViewObject_TypeInfo, obj);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_15445/*"Wait_Action"*/, v6);
    byte_4216AEE = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_19;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15445/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (v10 = *(&MasterMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v10 - 1] != MasterMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)obj, v9)) == 0LL )
  {
LABEL_19:
    sub_B0D97C(targetFSM);
  }
  v11 = (struct MasterMissionListViewItem_o *)targetFSM;
  if ( ((*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
          targetFSM,
          targetFSM->klass[1]._1.this_arg.data) & 1) == 0
    || MasterMissionListViewItem__get_IsHideReward(v11, v12)
    || v11->fields.isHideRewardDetail )
  {
    if ( v11->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v11;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.receiveItem,
        (System_Int32_array **)v11,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v11, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v20);
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
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v11, 0LL);
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
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  System_Text_StringBuilder_o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x25
  int max_length; // w26
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x21
  GiftEntity_o **m_Items; // x22
  GiftEntity_o *v53; // x8
  int32_t type; // w19
  GiftEntity_o *v55; // x8
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x28
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x27
  GiftEntity_o **v62; // x24
  Il2CppObject *CountableString; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  System_Text_StringBuilder_o *v66; // x19
  GiftEntity_o *v67; // x8
  System_String_o *v68; // x22
  Il2CppObject *v69; // x0
  System_String_o *v70; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v71; // x1
  GiftEntity_o *v72; // x8
  int32_t v73; // w19
  GiftEntity_o *v74; // x8
  ServantEntity_o *v75; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v77; // x0
  GiftEntity_o *v78; // x8
  Il2CppObject *v79; // x19
  Il2CppObject *v80; // x0
  Il2CppObject *v81; // x19
  System_String_o *v82; // x0
  GiftEntity_o *v83; // x8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v84; // x23
  __int64 v85; // x1
  __int64 v86; // x2
  System_Text_StringBuilder_o *v87; // x21
  System_String_o *v88; // x19
  System_String_o *v89; // x0
  System_String_o *v90; // x0
  System_String_o *v91; // x19
  System_String_o *v92; // x0
  CommonUI_o *v93; // x19
  GiftEntity_array *v94; // x20
  System_String_o *v95; // x21
  __int64 v96; // x1
  __int64 v97; // x2
  MissionRewardGetDialog_ClickDelegate_o *v98; // x22
  __int64 v99; // x0
  void **v100; // [xsp+0h] [xbp-A0h]
  Il2CppObject *v101; // [xsp+8h] [xbp-98h]
  System_Text_StringBuilder_o *v102; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+18h] [xbp-88h]
  int v104; // [xsp+24h] [xbp-7Ch]
  System_String_o *format; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-70h]
  int32_t num; // [xsp+3Ch] [xbp-64h] BYREF
  WarEntity_o *v108; // [xsp+40h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4216AF6 & 1) == 0 )
  {
    sub_B0D8A4(&MissionRewardGetDialog_ClickDelegate_TypeInfo, callback);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor___67884040, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v21);
    sub_B0D8A4(&Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__, v22);
    sub_B0D8A4(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v24);
    sub_B0D8A4(&StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v25);
    sub_B0D8A4(&StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, v26);
    sub_B0D8A4(&StringLiteral_3282/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v27);
    sub_B0D8A4(&StringLiteral_32/*"\n \n "*/, v28);
    sub_B0D8A4(&StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, v29);
    sub_B0D8A4(&StringLiteral_30/*"\n "*/, v30);
    sub_B0D8A4(&StringLiteral_8774/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v31);
    byte_4216AF6 = 1;
  }
  v108 = 0LL;
  entity = 0LL;
  v32 = sub_B0D974(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, callback, method);
  MasterMissionListViewManager___c__DisplayClass38_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass38_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_113;
  *(_QWORD *)(v32 + 16) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_113;
  v100 = (void **)(v32 + 16);
  if ( !Instance )
    goto LABEL_113;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v44 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v42, v43);
  System_Text_StringBuilder___ctor(v44, 0LL);
  v102 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v45, v46);
  System_Text_StringBuilder___ctor(v102, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_113;
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  max_length = GiftListById->max_length;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3282/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v104 = 0;
    v51 = 0LL;
    m_Items = GiftListById->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v51 >= GiftListById->max_length )
      {
LABEL_114:
        v99 = sub_B0D9A8(Instance);
        sub_B0D948(v99, 0LL);
      }
      v53 = m_Items[v51];
      if ( !v53 )
        goto LABEL_113;
      type = v53->fields.type;
      Instance = (void *)Gift__IsServant_26783204(type, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (void *)Gift__IsCommandCode_26783600(type, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)Gift__IsCostumeRelease(type, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            if ( (unsigned int)v51 >= GiftListById->max_length )
              goto LABEL_114;
            v55 = m_Items[v51];
            Instance = MasterData_WarQuestSelectionMaster;
            if ( !v55 || !MasterData_WarQuestSelectionMaster )
              goto LABEL_113;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 &entity,
                                 v55->fields.objectId,
                                 (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_113;
              Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, entity->fields.id, 0LL);
              v104 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
        }
      }
      if ( (int)++v51 >= max_length )
        goto LABEL_30;
    }
  }
  v104 = 0;
LABEL_30:
  v101 = (Il2CppObject *)v32;
  collection = (System_Collections_Generic_IEnumerable_T__o *)sub_B0D974(
                                                                System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                v49,
                                                                v50);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)collection,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                  v56,
                                                                                                  v57);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v61 = 0LL;
    v62 = GiftListById->m_Items;
    do
    {
      if ( (unsigned int)v61 >= GiftListById->max_length )
        goto LABEL_114;
      v72 = v62[v61];
      if ( !v72 )
        goto LABEL_113;
      v73 = v72->fields.type;
      Instance = (void *)Gift__IsServant_26783204(v73, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (unsigned int)v61 >= GiftListById->max_length )
          goto LABEL_114;
        v74 = v62[v61];
        if ( !v74 )
          goto LABEL_113;
        if ( !v47 )
          goto LABEL_113;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v47,
                     v74->fields.objectId,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_113;
        v75 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0LL);
        Instance = (void *)SvtType__IsStatusUp(v75->fields.type, 0LL);
        if ( IsCombineMaterial || ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v44 )
            goto LABEL_113;
          v77 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v44->klass->vtable._3_ToString.method)(
                                     v44,
                                     v44->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v77, 0LL) )
            System_Text_StringBuilder__Append_42155400(v44, (System_String_o *)StringLiteral_30/*"\n "*/, 0LL);
          Instance = ServantEntity__getName(v75, -1, -1, 0LL);
          if ( (unsigned int)v61 >= GiftListById->max_length )
            goto LABEL_114;
          v78 = v62[v61];
          if ( !v78 )
            goto LABEL_113;
          v79 = (Il2CppObject *)Instance;
          num = v78->fields.num;
          v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v81 = (Il2CppObject *)System_String__Format_43845440(format, v79, v80, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
          Instance = System_Text_StringBuilder__AppendFormat(v44, v82, v81, 0LL);
          if ( (unsigned int)v61 >= GiftListById->max_length )
            goto LABEL_114;
          if ( !v58 )
            goto LABEL_113;
          v71 = (EventMissionProgressRequest_Argument_ProgressData_o *)v62[v61];
          Instance = v58;
LABEL_71:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            v71,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        }
      }
      else
      {
        Instance = (void *)Gift__IsItem_26783148(v73, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( (unsigned int)v61 >= GiftListById->max_length )
            goto LABEL_114;
          v83 = v62[v61];
          Instance = MasterData_WarQuestSelectionMaster;
          if ( !v83 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_113;
          Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               MasterData_WarQuestSelectionMaster,
                               &v108,
                               v83->fields.objectId,
                               (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !v108 || !Instance )
              goto LABEL_113;
            Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, v108->fields.id, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !v108 )
                goto LABEL_113;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(v108->fields.bannerId, 0LL);
              v66 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v64, v65);
              System_Text_StringBuilder___ctor(v66, 0LL);
              if ( !v108 || !v66 )
                goto LABEL_113;
              System_Text_StringBuilder__Append_42155400(v66, v108->fields.age, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8772/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( (unsigned int)v61 >= GiftListById->max_length )
                goto LABEL_114;
              v67 = v62[v61];
              if ( !v67 )
                goto LABEL_113;
              v68 = (System_String_o *)Instance;
              num = v67->fields.num;
              v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
              System_Text_StringBuilder__AppendFormat_42161952(v66, v68, CountableString, v69, 0LL);
              if ( v104 >= 2 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v102 )
                  goto LABEL_113;
                System_Text_StringBuilder__AppendFormat(v102, (System_String_o *)Instance, (Il2CppObject *)v66, 0LL);
                Instance = v102;
                v70 = (System_String_o *)StringLiteral_30/*"\n "*/;
              }
              else
              {
                v70 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v66->klass->vtable._3_ToString.method)(
                                           v66,
                                           v66->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                Instance = v102;
                if ( !v102 )
                  goto LABEL_113;
              }
              Instance = System_Text_StringBuilder__Append_42155400((System_Text_StringBuilder_o *)Instance, v70, 0LL);
              if ( (unsigned int)v61 >= GiftListById->max_length )
                goto LABEL_114;
              Instance = collection;
              if ( !collection )
                goto LABEL_113;
              v71 = (EventMissionProgressRequest_Argument_ProgressData_o *)v62[v61];
              goto LABEL_71;
            }
          }
        }
      }
      ++v61;
    }
    while ( (int)v61 < max_length );
  }
  v84 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                          v59,
                                                                          v60);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v84,
    collection,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_GiftEntity___ctor___67884040);
  if ( !v84 )
    goto LABEL_113;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v84,
    (System_Collections_Generic_IEnumerable_T__o *)v58,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v84->fields._size >= 1 )
  {
    v87 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v85, v86);
    System_Text_StringBuilder___ctor(v87, 0LL);
    Instance = v102;
    if ( !v102 )
      goto LABEL_113;
    v88 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v102->klass->vtable._3_ToString.method)(
                               v102,
                               v102->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = (void *)System_String__IsNullOrEmpty(v88, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v44 )
        goto LABEL_113;
    }
    else
    {
      if ( v104 >= 2 )
      {
        if ( !v88 )
          goto LABEL_113;
        Instance = System_String__Substring_43913640(v88, 0, v88->fields.m_stringLength - 2, 0LL);
        if ( !v87 )
          goto LABEL_113;
        System_Text_StringBuilder__Append_42155400(v87, (System_String_o *)Instance, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_8768/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = System_Text_StringBuilder__Append_42155400(v87, v89, 0LL);
        if ( !v44 )
          goto LABEL_113;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MISSION_ACTION_SUCCESS"*/, 0LL);
        if ( !v87 )
          goto LABEL_113;
        Instance = System_Text_StringBuilder__AppendFormat(v87, (System_String_o *)Instance, (Il2CppObject *)v88, 0LL);
        if ( !v44 )
          goto LABEL_113;
      }
      v90 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v44->klass->vtable._3_ToString.method)(
                                 v44,
                                 v44->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v90, 0LL) )
        System_Text_StringBuilder__Append_42155400(v87, (System_String_o *)StringLiteral_32/*"\n \n "*/, 0LL);
    }
    v91 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v44->klass->vtable._3_ToString.method)(
                               v44,
                               v44->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = (void *)System_String__IsNullOrEmpty(v91, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v87 )
        goto LABEL_113;
      System_Text_StringBuilder__Append_42155400(v87, v91, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_8774/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_42155400(v87, v92, 0LL);
    }
    v93 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v84,
                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v87 )
    {
      v94 = (GiftEntity_array *)Instance;
      v95 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v87->klass->vtable._3_ToString.method)(
                                 v87,
                                 v87->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v98 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B0D974(
                                                        MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                        v96,
                                                        v97);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v98,
        v101,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v93 )
      {
        CommonUI__OpenMissionRewardGetDialog(v93, v94, v95, v98, 0, 0LL);
        return;
      }
    }
LABEL_113:
    sub_B0D97C(Instance);
  }
  Instance = *v100;
  if ( !*v100 )
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
  _BOOL8 v14; // x0
  __int64 v15; // x10
  struct MasterMissionListViewItem_o *receiveItem; // x1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4216AFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, bulk);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo, v10);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v11);
    byte_4216AFE = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo,
                                                                                                  bulk,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
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
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v12;
    }
LABEL_19:
    sub_B0D97C(itemSortList);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    if ( v18.fields.current )
    {
      v15 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (MasterMissionListViewItem_c *)v18.fields.current->klass->_2.typeHierarchy[v15 - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v18.fields.current[17].klass) == 3 )
      {
        if ( !v12 )
          sub_B0D97C(v14);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18.fields.current,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  System_Collections_Generic_List_MasterMissionListViewObject__o *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x11
  __int64 v13; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v16; // w8
  __int64 v17; // x21
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4216AEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v7);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v8);
    byte_4216AEF = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v10 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    if ( !v19.fields.current
      || (v12 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v12)
      || (MasterMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v12 - 1] != MasterMissionListViewItem_TypeInfo )
    {
      sub_B0D97C(v11);
    }
    v13 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
    {
      if ( (MasterMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v13 - 1] == MasterMissionListViewItem_TypeInfo )
        current = v19.fields.current;
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
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_25;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v16 = v10->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v16 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        ObjectList = (System_Collections_Generic_List_MasterMissionListViewObject__o *)v10->fields._items->m_Items[v17];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_MasterMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v16 = v10->fields._size;
        if ( (int)++v17 >= v16 )
          return;
      }
LABEL_25:
      sub_B0D97C(ObjectList);
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
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  struct MasterMissionListViewItem_o *v14; // x21
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4216AFB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_B0D8A4(&StringLiteral_18253/*"ef_mission_extric01"*/, v7);
    sub_B0D8A4(&StringLiteral_20628/*"modifyOpenItem"*/, v8);
    byte_4216AFB = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MasterMissionListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B0D97C(0LL);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v25,
        ObjectList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v26 = v25;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v26,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v10 )
          break;
        current = v26.fields.current;
        if ( !v26.fields.current )
          sub_B0D97C(v10);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v26.fields.current,
                                          v11);
        v14 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_B0D97C(0LL);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_421277E )
          {
            sub_B0D8A4(&EventRewardSaveData_TypeInfo, v15);
            byte_421277E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v14;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v14,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v14, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18253/*"ef_mission_extric01"*/, transform, v24);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v26,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20628/*"modifyOpenItem"*/,
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
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4216AF3 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, missionEntity);
    sub_B0D8A4(&StringLiteral_8778/*"MISSION_REWARD"*/, v5);
    byte_4216AF3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_B0D840(
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
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8778/*"MISSION_REWARD"*/, 0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.getSvtList,
    (System_Int32_array **)svts,
    (System_String_array **)cmds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_B0D840(
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
  if ( (byte_4216B00 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16283/*"actionAfterCallback"*/, method);
    byte_4216B00 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16283/*"actionAfterCallback"*/,
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
    sub_B0D840(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__afterReward(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4216AF7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5498/*"END_EFFECT"*/, method);
    byte_4216AF7 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5498/*"END_EFFECT"*/, 0LL);
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

  if ( (byte_4216AF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, parentTr);
    sub_B0D8A4(&MasterMissionListViewManager_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4216AF9 = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    sub_B0D97C(effectAssetData);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  return v10;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  MasterMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4216AE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4216AE9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (MasterMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v12;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4216AE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___, method);
    byte_4216AE8 = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_2049060 *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void __fastcall MasterMissionListViewManager__modifyOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x20
  __int64 v14; // x10
  UnityEngine_Object_o *monitor; // x21
  void *v16; // x0
  System_Action_o *v17; // x20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4216AFC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v8);
    sub_B0D8A4(&Method_MasterMissionListViewManager__modifyOpenItem_b__44_0__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_4216AFC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v12 )
        break;
      current = v19.fields.current;
      if ( !v19.fields.current
        || (v14 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
        || (MasterMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v14 - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_B0D97C(v12);
      }
      monitor = (UnityEngine_Object_o *)v19.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v16 = current[6].monitor;
        if ( !v16 )
          sub_B0D97C(0LL);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v16 + 392LL))(
          v16,
          current,
          *(_QWORD *)(*(_QWORD *)v16 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__44_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v17, 0LL);
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
  __int64 v11; // x0
  int32_t v12; // w19
  int64_t Time; // x20
  _BOOL4 v14; // w20
  bool v15; // w3
  int32_t v16; // w1
  __int64 v17; // x0

  if ( (byte_4216AF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4216AF8 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, (const MethodInfo *)receiveMissionIds);
  MasterMissionListViewManager__CheckBulkButton(this, v9);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    v11 = UnityEngine_Random__Range_34969060(0, receiveMissionIds->max_length, 0LL);
    if ( (unsigned int)v11 >= receiveMissionIds->max_length )
    {
      v17 = sub_B0D9A8(v11);
      sub_B0D948(v17, 0LL);
    }
    v12 = receiveMissionIds->m_Items[(int)v11 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( (Time = NetworkManager__getTime(0LL),
          (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (AutomatedAction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
      || (Instance = (AutomatedAction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            v12,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL
      || (Time <= (__int64)Instance[1].klass ? (v14 = 0) : (v14 = Time <= (__int64)Instance[1].monitor),
          (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
    {
LABEL_22:
      sub_B0D97C(Instance);
    }
    if ( v14 )
    {
      v15 = 1;
      v16 = v12;
    }
    else
    {
      v16 = v12;
      v15 = 0;
    }
    AutomatedAction__SetMissionAction(Instance, v16, 5, v15, 0LL);
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
    sub_B0D97C(filterBtnTxt);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v12; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
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

  if ( (byte_4216AF1 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_8870/*"MST_MISSION_EMPTY_TXT"*/, v5);
    sub_B0D8A4(&StringLiteral_17097/*"btn_txt_completed"*/, v6);
    sub_B0D8A4(&StringLiteral_17130/*"btn_txt_receipt"*/, v7);
    sub_B0D8A4(&StringLiteral_17129/*"btn_txt_progress"*/, v8);
    sub_B0D8A4(&StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, v9);
    sub_B0D8A4(&StringLiteral_17080/*"btn_txt_all"*/, v10);
    byte_4216AF1 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v12 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor_32823928(v12, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8775/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_55:
    sub_B0D97C(operationSortInfo);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17080/*"btn_txt_all"*/, v22);
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
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8870/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v23 )
        goto LABEL_55;
      UILabel__set_text(v23, operationSortInfo, 0LL);
      goto LABEL_37;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17130/*"btn_txt_receipt"*/, v22);
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
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17129/*"btn_txt_progress"*/, v22);
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
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17097/*"btn_txt_completed"*/, v22);
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
          if ( !byte_4216BE0 )
          {
            sub_B0D8A4(&EventRewardSaveData_TypeInfo, v27);
            byte_4216BE0 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v29 = this->fields.filterStatus;
          if ( !byte_4216BE1 )
          {
            sub_B0D8A4(&EventRewardSaveData_TypeInfo, v27);
            byte_4216BE1 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v29;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v30 = this->fields.filterStatus;
          if ( !byte_4216BE2 )
          {
            sub_B0D8A4(&EventRewardSaveData_TypeInfo, v27);
            byte_4216BE2 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v30;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v31 = this->fields.filterStatus;
          if ( !byte_4216BE3 )
          {
            sub_B0D8A4(&EventRewardSaveData_TypeInfo, v27);
            byte_4216BE3 = 1;
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
  if ( (byte_4216AEC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&targetMissionId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (MasterMissionListViewManager_o *)sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v6);
    byte_4216AEC = 1;
  }
  switch ( v4->fields.listType )
  {
    case 0:
      if ( !byte_4216BDC )
      {
        this = (MasterMissionListViewManager_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4216BDC = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      goto LABEL_16;
    case 1:
      if ( !byte_4216BDD )
      {
        this = (MasterMissionListViewManager_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4216BDD = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      goto LABEL_16;
    case 2:
      if ( !byte_4216BDE )
      {
        this = (MasterMissionListViewManager_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4216BDE = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
      goto LABEL_16;
    case 3:
      if ( !byte_4216BDF )
      {
        this = (MasterMissionListViewManager_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_4216BDF = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      sub_B0D97C(this);
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
  if ( (byte_4216AEB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v13);
    this = (MasterMissionListViewManager_o *)sub_B0D8A4(
                                               &Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
                                               v14);
    byte_4216AEB = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B0D840(
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    sub_B0D97C(this);
  }
LABEL_23:
  LODWORD(v17) = 0;
LABEL_24:
  v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, *(_QWORD *)&missionID, callback);
  System_Action___ctor(v22, (Il2CppObject *)v10, Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, 0LL);
  v10->fields.callbackAfterScroll = v22;
  sub_B0D840(
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

  if ( (byte_4216AF4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5503/*"END_NOTICE"*/, method);
    byte_4216AF4 = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B0D97C(ShowMSG);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5503/*"END_NOTICE"*/, 0LL);
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
    sub_B0D97C(callback);
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

  if ( (byte_4212711 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212711 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.callback) == 0LL) )
  {
    sub_B0D97C(Instance);
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
  if ( (byte_4212712 & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass42_0_o *)sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, x);
    byte_4212712 = 1;
  }
  if ( !x
    || (v5 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1), *(&x->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[v5 - 1] != MasterMissionListViewItem_TypeInfo )
  {
    sub_B0D97C(this);
  }
  return MissionListViewItem__get_MissionId((MissionListViewItem_o *)x, 0LL) == v4->fields.missionId;
}