void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FB254 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewManager_TypeInfo, method);
    byte_40FB254 = 1;
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
  __int64 v4; // x4
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
  __int64 v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o **v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v34; // x0
  GiftMaster_o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x24
  _BOOL8 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x8
  unsigned __int64 v45; // x25
  System_Collections_Generic_IEnumerable_T__o *GiftListById; // x0
  GiftEntity_array *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x22
  const MethodInfo *v53; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FB24A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, receiveMissionIds);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__, v16);
    sub_B16FFC(&MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo, v17);
    byte_40FB24A = 1;
  }
  entity = 0LL;
  v18 = sub_B170CC(MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo, receiveMissionIds, callback, method, v4);
  MasterMissionListViewManager___c__DisplayClass37_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass37_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_23;
  *(_QWORD *)(v18 + 16) = callback;
  v25 = (System_Action_o **)(v18 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v34 )
      goto LABEL_23;
    v35 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)v34,
                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
    v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                    v36,
                                                                                                    v37,
                                                                                                    v38,
                                                                                                    v39);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v40,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v44 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v44 >= 1 )
    {
      v45 = 0LL;
      while ( 1 )
      {
        if ( v45 >= (unsigned int)v44 )
        {
          sub_B17100(v41, v42, v43);
          sub_B170A0();
        }
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v41 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                receiveMissionIds->m_Items[v45 + 1],
                (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( v41 )
        {
          if ( !entity )
            break;
          if ( !v35 )
            break;
          GiftListById = (System_Collections_Generic_IEnumerable_T__o *)GiftMaster__GetGiftListById(
                                                                          v35,
                                                                          *(&entity->fields.startType + 1),
                                                                          0LL);
          if ( !v40 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v40,
            GiftListById,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v44) = receiveMissionIds->max_length;
        if ( (__int64)++v45 >= (int)v44 )
          goto LABEL_18;
      }
LABEL_23:
      sub_B170D4();
    }
LABEL_18:
    if ( !v40 )
      goto LABEL_23;
    v47 = (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v18,
      Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v47, 0, v52, 0LL);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    if ( !*v25 )
      goto LABEL_23;
    System_Action__Invoke(*v25, 0LL);
    MasterMissionListViewManager__afterReward(this, v53);
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
  struct UICommonButton_o *v9; // x0
  UIWidget_o *bulkButtonTxt; // x20
  int v11; // s0
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  __int64 v16; // x11
  struct UICommonButton_o *v17; // x0
  UIWidget_o *v18; // x19
  int v19; // s0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB247 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FB247 = 1;
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
    v9 = this->fields.bulkButton;
    if ( !v9
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v9->klass->vtable._14_SetState.method)(
            v9,
            3LL,
            1LL,
            v9->klass->vtable._15_OnPress.methodPtr),
          bulkButtonTxt = (UIWidget_o *)this->fields.bulkButtonTxt,
          *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_gray(0LL),
          !bulkButtonTxt)
      || (UIWidget__set_color(bulkButtonTxt, *(UnityEngine_Color_o *)&v11, 0LL),
          (itemSortList = this->fields.itemSortList) == 0LL) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v23.fields.current )
      {
        v16 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (MasterMissionListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v16 - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v23.fields.current[17].klass) == 3 )
        {
          v17 = this->fields.bulkButton;
          if ( !v17 )
            sub_B170D4();
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v17->klass->vtable._14_SetState.method)(
            v17,
            0LL,
            1LL,
            v17->klass->vtable._15_OnPress.methodPtr);
          v18 = (UIWidget_o *)this->fields.bulkButtonTxt;
          *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
          if ( !v18 )
            sub_B170D4();
          UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *current; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  MasterMissionListViewItem_o *v34; // x23
  const MethodInfo *v35; // x3
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  __int64 *v38; // x8
  UILabel_o *v39; // x21
  System_String_o *v40; // x0
  const MethodInfo *v41; // x1
  int32_t DailyFilterId_k__BackingField; // w8
  UILabel_o *v43; // x21
  System_String_o *v44; // x0
  UILabel_o *v45; // x21
  __int64 *v46; // x8
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  const MethodInfo *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_List_MasterMissionListViewObject__o *ObjectList; // x0
  int size; // w8
  System_Collections_Generic_List_MasterMissionListViewObject__o *v58; // x19
  unsigned __int64 v59; // x21
  signed __int64 v60; // x22
  MissionListViewObject_o *v61; // x20
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FB23F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__, missionList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_8818, v20);
    sub_B16FFC(&StringLiteral_8724, v21);
    byte_40FB23F = 1;
  }
  memset(&v63, 0, sizeof(v63));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v62,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)missionList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v63 = v62;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v63,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v63.fields.current;
      itemList = this->fields.itemList;
      v34 = (MasterMissionListViewItem_o *)sub_B170CC(MasterMissionListViewItem_TypeInfo, v28, v29, v30, v31);
      MasterMissionListViewItem___ctor(v34, (EventMissionEntity_o *)current, type, v35);
      if ( !itemList )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v63,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B16F98(
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
      if ( !byte_40FB27E )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, sort);
        byte_40FB27E = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v38 = &StringLiteral_8724;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v38 = &StringLiteral_8818;
      }
      v47 = LocalizationManager__Get((System_String_o *)*v38, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_74;
      UILabel__set_text(emptyMessageLabel, v47, 0LL);
      if ( !byte_40FB27E )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v41);
        byte_40FB27E = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      break;
    case 1:
      v45 = this->fields.emptyMessageLabel;
      if ( !byte_40FB27F )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, sort);
        byte_40FB27F = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v46 = &StringLiteral_8724;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v46 = &StringLiteral_8818;
      }
      v48 = LocalizationManager__Get((System_String_o *)*v46, 0LL);
      if ( !v45 )
        goto LABEL_74;
      UILabel__set_text(v45, v48, 0LL);
      if ( !byte_40FB27F )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v41);
        byte_40FB27F = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      break;
    case 2:
      v39 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8724, 0LL);
      if ( !v39 )
        goto LABEL_74;
      UILabel__set_text(v39, v40, 0LL);
      if ( !byte_40FB280 )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v41);
        byte_40FB280 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
      break;
    case 3:
      v43 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8724, 0LL);
      if ( !v43 )
        goto LABEL_74;
      UILabel__set_text(v43, v44, 0LL);
      if ( !byte_40FB281 )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v41);
        byte_40FB281 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
      break;
    default:
      goto LABEL_58;
  }
  this->fields.filterStatus = DailyFilterId_k__BackingField;
  MasterMissionListViewManager__setList(this, v41);
LABEL_58:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.reDispAct,
      (System_Int32_array **)redispCallBack,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v49);
  if ( !ObjectList )
LABEL_74:
    sub_B170D4();
  size = ObjectList->fields._size;
  v58 = ObjectList;
  if ( size >= 1 )
  {
    v59 = 0LL;
    v60 = size;
    while ( 1 )
    {
      if ( v59 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v61 = (MissionListViewObject_o *)v58->fields._items->m_Items[v59];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v61, 0LL, 0LL) )
      {
        if ( !v61 )
          goto LABEL_74;
        MissionListViewObject__RedispResTime(v61, 0LL);
      }
      if ( (__int64)++v59 >= v60 )
        break;
      size = v58->fields._size;
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
    sub_B170D4();
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

  if ( (byte_40FB242 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v5);
    byte_40FB242 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v21; // x0
  int64_t Time; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int64_t v27; // x9
  unsigned __int64 v28; // x28
  __int64 v29; // x23
  MasterMissionListViewManager___c__DisplayClass42_0_o *v30; // x25
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t v34; // w1
  WarEntity_o *v35; // x0
  int64_t UserId; // x2
  int32_t missionProgressType; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x27
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v41; // x1
  __int64 v42; // x11
  MissionListViewItem_o *current; // x26
  int32_t missionId; // w27
  UnityEngine_Object_o *viewObject; // x27
  struct ListViewObject_o *v46; // x0
  int v47; // w26
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // [xsp+10h] [xbp-B0h]
  UserEventMissionMaster_o *v49; // [xsp+18h] [xbp-A8h]
  int v50; // [xsp+24h] [xbp-9Ch]
  _BYTE v52[28]; // [xsp+30h] [xbp-90h] BYREF
  int v53; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+50h] [xbp-70h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40FB24F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__FindAll__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_System_Predicate_ListViewItem___ctor__, v14);
    sub_B16FFC(&System_Predicate_ListViewItem__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__, v17);
    sub_B16FFC(&MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo, v18);
    byte_40FB24F = 1;
  }
  entity = 0LL;
  memset(&v54, 0, sizeof(v54));
  v53 = 0;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___),
          (v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
LABEL_54:
      sub_B170D4();
    }
    v49 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v21,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v50 = 0;
      v27 = Time;
      v28 = 0LL;
      v48 = MasterData_WarQuestSelectionMaster;
      do
      {
        v29 = v27;
        v30 = (MasterMissionListViewManager___c__DisplayClass42_0_o *)sub_B170CC(
                                                                        MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo,
                                                                        v23,
                                                                        v24,
                                                                        v25,
                                                                        v26);
        MasterMissionListViewManager___c__DisplayClass42_0___ctor(v30, 0LL);
        if ( v28 >= receiveMissionIds->max_length )
        {
          sub_B17100(v31, v32, v33);
          sub_B170A0();
        }
        if ( !v30 )
          goto LABEL_54;
        v34 = receiveMissionIds->m_Items[v28 + 1];
        v30->fields.missionId = v34;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_54;
        v35 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                v34,
                (const MethodInfo_266F388 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !v35 )
          goto LABEL_54;
        v27 = v29;
        if ( v29 > *(_QWORD *)&v35->fields.flag && v29 <= (__int64)v35->fields.emptyMessage )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( !v49 )
            goto LABEL_54;
          if ( UserEventMissionMaster__TryGetEntity(v49, &entity, UserId, v30->fields.missionId, 0LL) )
          {
            if ( !entity )
              goto LABEL_54;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                             System_Predicate_ListViewItem__TypeInfo,
                                                                             v23,
                                                                             v24,
                                                                             v25,
                                                                             v26);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v39,
              (Il2CppObject *)v30,
              Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__,
              (const MethodInfo_2B0B204 *)Method_System_Predicate_ListViewItem___ctor__);
            if ( !itemList )
              goto LABEL_54;
            All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                    (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                    (System_Predicate_T__o *)v39,
                    (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !All )
              goto LABEL_54;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v52,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)All,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v54 = *(System_Collections_Generic_List_Enumerator_T__o *)v52;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v54,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
            {
              if ( v54.fields.current
                && (v42 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v54.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v42) )
              {
                if ( (MasterMissionListViewItem_c *)v54.fields.current->klass->_2.typeHierarchy[v42 - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v54.fields.current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              missionId = v30->fields.missionId;
              if ( !byte_40F6976 )
              {
                sub_B16FFC(&EventRewardSaveData_TypeInfo, v41);
                byte_40F6976 = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = missionId;
              if ( !current )
                sub_B170D4();
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v46 = current->fields.viewObject;
                if ( !v46 )
                  sub_B170D4();
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v46->klass->vtable._5_SetItem.method)(
                  v46,
                  current,
                  v46->klass->vtable._6_SetItem.methodPtr);
              }
            }
            *(_DWORD *)&v52[4 * v50 + 24] = 279;
            v47 = ++v53;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v54,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            MasterData_WarQuestSelectionMaster = v48;
            if ( v47 )
            {
              v50 = v47;
              v27 = v29;
              if ( *(_DWORD *)&v52[4 * v47 + 20] == 279 )
              {
                v53 = v47 - 1;
                v50 = v47 - 1;
              }
              goto LABEL_49;
            }
            v50 = 0;
          }
          v27 = v29;
        }
LABEL_49:
        ++v28;
      }
      while ( (__int64)v28 < (int)receiveMissionIds->max_length );
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
  System_Collections_Generic_List_MasterMissionListViewObject__o *v8; // x0
  const MethodInfo *v9; // x1
  MasterMissionListViewObject_o *v10; // x0

  if ( (byte_40FB252 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v3);
    byte_40FB252 = 1;
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
      v8 = MasterMissionListViewManager__get_ObjectList(this, v5);
      if ( !v8 )
        break;
      if ( v8->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v10 = v8->fields._items->m_Items[v7];
      if ( !v10 )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim(v10, v9);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall MasterMissionListViewManager__OnClickFilterList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 filterStatus; // x8

  if ( (byte_40FB245 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB245 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_3136618[filterStatus];
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
  MasterMissionListViewItem_o *Item; // x0
  struct MasterMissionListViewItem_o *v12; // x20
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v21; // x2

  if ( (byte_40FB243 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionListViewObject_TypeInfo, obj);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15336, v6);
    byte_40FB243 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_19;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15336, 0LL) )
    return;
  if ( !obj
    || (v10 = *(&MasterMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v10 - 1] != MasterMissionListViewObject_TypeInfo
    || (Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)obj, v9)) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  v12 = Item;
  if ( (((__int64 (__fastcall *)(MasterMissionListViewItem_o *, void *))Item->klass->vtable._8_get_IsShowRewardInfo.method)(
          Item,
          Item->klass[1]._1.image) & 1) == 0
    || MasterMissionListViewItem__get_IsHideReward(v12, v13)
    || v12->fields.isHideRewardDetail )
  {
    if ( v12->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v12;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.receiveItem,
        (System_Int32_array **)v12,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v12, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v21);
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
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v12, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x28
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Text_StringBuilder_o *v49; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  WebViewManager_o *v54; // x0
  WebViewManager_o *v55; // x0
  WarQuestSelectionMaster_o *v56; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x25
  int max_length; // w26
  System_String_o *IsServant_28854740; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x21
  GiftEntity_o **m_Items; // x22
  GiftEntity_o *v66; // x8
  int32_t type; // w19
  GiftEntity_o *v68; // x8
  CommonUI_o *v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x28
  __int64 v75; // x3
  __int64 v76; // x4
  __int64 v77; // x27
  GiftEntity_o **v78; // x24
  Il2CppObject *CountableString; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  System_Text_StringBuilder_o *v84; // x19
  GiftEntity_o *v85; // x8
  System_String_o *v86; // x22
  Il2CppObject *v87; // x0
  System_String_o *v88; // x1
  System_Text_StringBuilder_o *v89; // x0
  System_String_o *v90; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v91; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v92; // x1
  GiftEntity_o *v93; // x8
  int32_t v94; // w19
  GiftEntity_o *v95; // x8
  WarEntity_o *v96; // x0
  ServantEntity_o *v97; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v99; // x0
  GiftEntity_o *v100; // x8
  Il2CppObject *v101; // x19
  Il2CppObject *v102; // x0
  Il2CppObject *v103; // x19
  System_String_o *v104; // x0
  GiftEntity_o *v105; // x8
  CommonUI_o *v106; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v107; // x23
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  System_Text_StringBuilder_o *v112; // x21
  System_String_o *v113; // x19
  System_String_o *v114; // x0
  System_String_o *v115; // x0
  System_String_o *v116; // x0
  System_String_o *v117; // x0
  System_String_o *v118; // x19
  System_String_o *v119; // x0
  CommonUI_o *v120; // x19
  WarBoardUiData_SaveData_array *v121; // x0
  GiftEntity_array *v122; // x20
  System_String_o *v123; // x21
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  MissionRewardGetDialog_ClickDelegate_o *v128; // x22
  System_Action_o **v129; // [xsp+0h] [xbp-A0h]
  Il2CppObject *v130; // [xsp+8h] [xbp-98h]
  System_Text_StringBuilder_o *v131; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+18h] [xbp-88h]
  int v133; // [xsp+24h] [xbp-7Ch]
  System_String_o *format; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *v135; // [xsp+30h] [xbp-70h]
  int32_t num; // [xsp+3Ch] [xbp-64h] BYREF
  WarEntity_o *v137; // [xsp+40h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FB24B & 1) == 0 )
  {
    sub_B16FFC(&MissionRewardGetDialog_ClickDelegate_TypeInfo, callback);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor___66736296, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v18);
    sub_B16FFC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v23);
    sub_B16FFC(&Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__, v24);
    sub_B16FFC(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, v25);
    sub_B16FFC(&StringLiteral_8717, v26);
    sub_B16FFC(&StringLiteral_8721, v27);
    sub_B16FFC(&StringLiteral_8720, v28);
    sub_B16FFC(&StringLiteral_3260, v29);
    sub_B16FFC(&StringLiteral_32, v30);
    sub_B16FFC(&StringLiteral_8716, v31);
    sub_B16FFC(&StringLiteral_30, v32);
    sub_B16FFC(&StringLiteral_8723, v33);
    byte_40FB24B = 1;
  }
  v137 = 0LL;
  entity = 0LL;
  v34 = sub_B170CC(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, callback, method, v3, v4);
  MasterMissionListViewManager___c__DisplayClass38_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass38_0_o *)v34,
    0LL);
  if ( !v34 )
    goto LABEL_113;
  *(_QWORD *)(v34 + 16) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v34 + 16), (System_Int32_array **)callback, v35, v36, v37, v38, v39, v40);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_113;
  v129 = (System_Action_o **)(v34 + 16);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_113;
  GiftListById = GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, missionToRecieve->fields.giftId, 0LL);
  v49 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v45, v46, v47, v48);
  System_Text_StringBuilder___ctor(v49, 0LL);
  v131 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v50, v51, v52, v53);
  System_Text_StringBuilder___ctor(v131, 0LL);
  v54 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v54 )
    goto LABEL_113;
  v135 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v54,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v55 )
    goto LABEL_113;
  v56 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v55,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_113;
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)v56;
  max_length = GiftListById->max_length;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  IsServant_28854740 = LocalizationManager__Get((System_String_o *)StringLiteral_3260, 0LL);
  format = IsServant_28854740;
  if ( max_length >= 1 )
  {
    v133 = 0;
    v64 = 0LL;
    m_Items = GiftListById->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v64 >= GiftListById->max_length )
      {
LABEL_114:
        sub_B17100(IsServant_28854740, v60, v61);
        sub_B170A0();
      }
      v66 = m_Items[v64];
      if ( !v66 )
        goto LABEL_113;
      type = v66->fields.type;
      IsServant_28854740 = (System_String_o *)Gift__IsServant_28854740(type, 0LL);
      if ( ((unsigned __int8)IsServant_28854740 & 1) == 0 )
      {
        IsServant_28854740 = (System_String_o *)Gift__IsCommandCode_28855136(type, 0LL);
        if ( ((unsigned __int8)IsServant_28854740 & 1) == 0 )
        {
          IsServant_28854740 = (System_String_o *)Gift__IsCostumeRelease(type, 0LL);
          if ( ((unsigned __int8)IsServant_28854740 & 1) == 0 )
          {
            if ( (unsigned int)v64 >= GiftListById->max_length )
              goto LABEL_114;
            v68 = m_Items[v64];
            if ( !v68 || !v135 )
              goto LABEL_113;
            IsServant_28854740 = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      v135,
                                                      &entity,
                                                      v68->fields.objectId,
                                                      (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsServant_28854740 & 1) != 0 )
            {
              v69 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !v69 )
                goto LABEL_113;
              IsServant_28854740 = (System_String_o *)CommonUI__IsGetItemEffect(v69, entity->fields.id, 0LL);
              v133 += ((unsigned __int8)IsServant_28854740 & 1) == 0;
            }
          }
        }
      }
      if ( (int)++v64 >= max_length )
        goto LABEL_30;
    }
  }
  v133 = 0;
LABEL_30:
  v130 = (Il2CppObject *)v34;
  collection = (System_Collections_Generic_IEnumerable_T__o *)sub_B170CC(
                                                                System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                v60,
                                                                v61,
                                                                v62,
                                                                v63);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)collection,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                  v70,
                                                                                                  v71,
                                                                                                  v72,
                                                                                                  v73);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v77 = 0LL;
    v78 = GiftListById->m_Items;
    do
    {
      if ( (unsigned int)v77 >= GiftListById->max_length )
        goto LABEL_114;
      v93 = v78[v77];
      if ( !v93 )
        goto LABEL_113;
      v94 = v93->fields.type;
      IsServant_28854740 = (System_String_o *)Gift__IsServant_28854740(v94, 0LL);
      if ( ((unsigned __int8)IsServant_28854740 & 1) != 0 )
      {
        if ( (unsigned int)v77 >= GiftListById->max_length )
          goto LABEL_114;
        v95 = v78[v77];
        if ( !v95 )
          goto LABEL_113;
        if ( !v57 )
          goto LABEL_113;
        v96 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v57,
                v95->fields.objectId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v96 )
          goto LABEL_113;
        v97 = (ServantEntity_o *)v96;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(&v96->fields.startType + 1), 0LL);
        IsServant_28854740 = (System_String_o *)SvtType__IsStatusUp(v97->fields.type, 0LL);
        if ( IsCombineMaterial || ((unsigned __int8)IsServant_28854740 & 1) != 0 )
        {
          if ( !v49 )
            goto LABEL_113;
          v99 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v49->klass->vtable._3_ToString.method)(
                                     v49,
                                     v49->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v99, 0LL) )
            System_Text_StringBuilder__Append_41914240(v49, (System_String_o *)StringLiteral_30, 0LL);
          IsServant_28854740 = ServantEntity__getName(v97, -1, -1, 0LL);
          if ( (unsigned int)v77 >= GiftListById->max_length )
            goto LABEL_114;
          v100 = v78[v77];
          if ( !v100 )
            goto LABEL_113;
          v101 = (Il2CppObject *)IsServant_28854740;
          num = v100->fields.num;
          v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v103 = (Il2CppObject *)System_String__Format_43739268(format, v101, v102, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_8716, 0LL);
          IsServant_28854740 = (System_String_o *)System_Text_StringBuilder__AppendFormat(v49, v104, v103, 0LL);
          if ( (unsigned int)v77 >= GiftListById->max_length )
            goto LABEL_114;
          if ( !v74 )
            goto LABEL_113;
          v92 = (EventMissionProgressRequest_Argument_ProgressData_o *)v78[v77];
          v91 = v74;
LABEL_71:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v91,
            v92,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        }
      }
      else
      {
        IsServant_28854740 = (System_String_o *)Gift__IsItem_28854684(v94, 0LL);
        if ( ((unsigned __int8)IsServant_28854740 & 1) != 0 )
        {
          if ( (unsigned int)v77 >= GiftListById->max_length )
            goto LABEL_114;
          v105 = v78[v77];
          if ( !v105 || !v135 )
            goto LABEL_113;
          IsServant_28854740 = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                    v135,
                                                    &v137,
                                                    v105->fields.objectId,
                                                    (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsServant_28854740 & 1) != 0 )
          {
            v106 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !v137 || !v106 )
              goto LABEL_113;
            IsServant_28854740 = (System_String_o *)CommonUI__IsGetItemEffect(v106, v137->fields.id, 0LL);
            if ( ((unsigned __int8)IsServant_28854740 & 1) == 0 )
            {
              if ( !v137 )
                goto LABEL_113;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(v137->fields.bannerId, 0LL);
              v84 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v80, v81, v82, v83);
              System_Text_StringBuilder___ctor(v84, 0LL);
              if ( !v137 || !v84 )
                goto LABEL_113;
              System_Text_StringBuilder__Append_41914240(v84, v137->fields.age, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              IsServant_28854740 = LocalizationManager__Get((System_String_o *)StringLiteral_8721, 0LL);
              if ( (unsigned int)v77 >= GiftListById->max_length )
                goto LABEL_114;
              v85 = v78[v77];
              if ( !v85 )
                goto LABEL_113;
              v86 = IsServant_28854740;
              num = v85->fields.num;
              v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
              System_Text_StringBuilder__AppendFormat_41920792(v84, v86, CountableString, v87, 0LL);
              if ( v133 >= 2 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v90 = LocalizationManager__Get((System_String_o *)StringLiteral_8716, 0LL);
                if ( !v131 )
                  goto LABEL_113;
                System_Text_StringBuilder__AppendFormat(v131, v90, (Il2CppObject *)v84, 0LL);
                v89 = v131;
                v88 = (System_String_o *)StringLiteral_30;
              }
              else
              {
                v88 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v84->klass->vtable._3_ToString.method)(
                                           v84,
                                           v84->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                v89 = v131;
                if ( !v131 )
                  goto LABEL_113;
              }
              IsServant_28854740 = (System_String_o *)System_Text_StringBuilder__Append_41914240(v89, v88, 0LL);
              if ( (unsigned int)v77 >= GiftListById->max_length )
                goto LABEL_114;
              v91 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)collection;
              if ( !collection )
                goto LABEL_113;
              v92 = (EventMissionProgressRequest_Argument_ProgressData_o *)v78[v77];
              goto LABEL_71;
            }
          }
        }
      }
      ++v77;
    }
    while ( (int)v77 < max_length );
  }
  v107 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                           System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                           v60,
                                                                           v61,
                                                                           v75,
                                                                           v76);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v107,
    collection,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_GiftEntity___ctor___66736296);
  if ( !v107 )
    goto LABEL_113;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v107,
    (System_Collections_Generic_IEnumerable_T__o *)v74,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v107->fields._size >= 1 )
  {
    v112 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v108, v109, v110, v111);
    System_Text_StringBuilder___ctor(v112, 0LL);
    if ( !v131 )
      goto LABEL_113;
    v113 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v131->klass->vtable._3_ToString.method)(
                                v131,
                                v131->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( System_String__IsNullOrEmpty(v113, 0LL) )
    {
      if ( !v49 )
        goto LABEL_113;
    }
    else
    {
      if ( v133 >= 2 )
      {
        if ( !v113 )
          goto LABEL_113;
        v115 = System_String__Substring_43807468(v113, 0, v113->fields.m_stringLength - 2, 0LL);
        if ( !v112 )
          goto LABEL_113;
        System_Text_StringBuilder__Append_41914240(v112, v115, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v116 = LocalizationManager__Get((System_String_o *)StringLiteral_8717, 0LL);
        System_Text_StringBuilder__Append_41914240(v112, v116, 0LL);
        if ( !v49 )
          goto LABEL_113;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v114 = LocalizationManager__Get((System_String_o *)StringLiteral_8720, 0LL);
        if ( !v112 )
          goto LABEL_113;
        System_Text_StringBuilder__AppendFormat(v112, v114, (Il2CppObject *)v113, 0LL);
        if ( !v49 )
          goto LABEL_113;
      }
      v117 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v49->klass->vtable._3_ToString.method)(
                                  v49,
                                  v49->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v117, 0LL) )
        System_Text_StringBuilder__Append_41914240(v112, (System_String_o *)StringLiteral_32, 0LL);
    }
    v118 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v49->klass->vtable._3_ToString.method)(
                                v49,
                                v49->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !System_String__IsNullOrEmpty(v118, 0LL) )
    {
      if ( !v112 )
        goto LABEL_113;
      System_Text_StringBuilder__Append_41914240(v112, v118, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v119 = LocalizationManager__Get((System_String_o *)StringLiteral_8723, 0LL);
      System_Text_StringBuilder__Append_41914240(v112, v119, 0LL);
    }
    v120 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v121 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v107,
             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v112 )
    {
      v122 = (GiftEntity_array *)v121;
      v123 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v112->klass->vtable._3_ToString.method)(
                                  v112,
                                  v112->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v128 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B170CC(
                                                         MissionRewardGetDialog_ClickDelegate_TypeInfo,
                                                         v124,
                                                         v125,
                                                         v126,
                                                         v127);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v128,
        v130,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v120 )
      {
        CommonUI__OpenMissionRewardGetDialog(v120, v122, v123, v128, 0, 0LL);
        return;
      }
    }
LABEL_113:
    sub_B170D4();
  }
  if ( !*v129 )
    goto LABEL_113;
  System_Action__Invoke(*v129, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MasterMissionListViewItem__o *__fastcall MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  __int64 v16; // x10
  struct MasterMissionListViewItem_o *receiveItem; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FB253 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, bulk);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo, v12);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v13);
    byte_40FB253 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo,
                                                                                                  bulk,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v14;
    if ( v14 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)receiveItem,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v14;
    }
LABEL_19:
    sub_B170D4();
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v19.fields.current )
    {
      v16 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (MasterMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v16 - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v19.fields.current[17].klass) == 3 )
      {
        if ( !v14 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19.fields.current,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v14;
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
  __int64 v11; // x11
  __int64 v12; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v15; // w8
  __int64 v16; // x21
  MasterMissionListViewObject_o *v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FB244 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v7);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v8);
    byte_40FB244 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v10 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v19.fields.current
      || (v11 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11)
      || (MasterMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v11 - 1] != MasterMissionListViewItem_TypeInfo )
    {
      sub_B170D4();
    }
    v12 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
    {
      if ( (MasterMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v12 - 1] == MasterMissionListViewItem_TypeInfo )
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_25;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v15 = v10->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( v15 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v17 = v10->fields._items->m_Items[v16];
        if ( !v17 )
          break;
        ((void (__fastcall *)(MasterMissionListViewObject_o *, bool, Il2CppMethodPointer))v17->klass->vtable._9_SetInput.method)(
          v17,
          this->fields.isInput,
          v17->klass->vtable._10_Invalidation.methodPtr);
        v15 = v10->fields._size;
        if ( (int)++v16 >= v15 )
          return;
      }
LABEL_25:
      sub_B170D4();
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
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  struct MasterMissionListViewItem_o *v13; // x21
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FB250 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v6);
    sub_B16FFC(&StringLiteral_18129, v7);
    sub_B16FFC(&StringLiteral_20480, v8);
    byte_40FB250 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MasterMissionListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B170D4();
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v24,
        ObjectList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v25 = v24;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v25,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__) )
      {
        current = v25.fields.current;
        if ( !v25.fields.current )
          sub_B170D4();
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v25.fields.current,
                                          v10);
        v13 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_B170D4();
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_40F6976 )
          {
            sub_B16FFC(&EventRewardSaveData_TypeInfo, v14);
            byte_40F6976 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v13;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v13,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v13, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18129, transform, v23);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v25,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20480,
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

  if ( (byte_40FB248 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, missionEntity);
    sub_B16FFC(&StringLiteral_8727, v5);
    byte_40FB248 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_B16F98(
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
    sub_B170D4();
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8727, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.getSvtList,
    (System_Int32_array **)svts,
    (System_String_array **)cmds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_B16F98(
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
  if ( (byte_40FB255 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16170, method);
    byte_40FB255 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16170,
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
    sub_B16F98(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__afterReward(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_40FB24C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5467, method);
    byte_40FB24C = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B170D4();
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5467, 0LL);
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
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v13; // x19
  int v14; // s0
  UnityEngine_Transform_o *v17; // x19
  int v18; // s0

  if ( (byte_40FB24E & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, parentTr);
    sub_B16FFC(&MasterMissionListViewManager_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FB24E = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_12;
  v11 = v10;
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_parent(transform, parentTr, 0LL),
        v13 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL),
        !v13)
    || (UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v14, 0LL),
        v17 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL),
        !v17) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  return v11;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  MasterMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FB23E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FB23E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (MasterMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v14;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB23D & 1) == 0 )
  {
    sub_B16FFC(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___, method);
    byte_40FB23D = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_19DCC28 *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void __fastcall MasterMissionListViewManager__modifyOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x20
  __int64 v15; // x10
  UnityEngine_Object_o *monitor; // x21
  void *v17; // x0
  System_Action_o *v18; // x20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FB251 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v10);
    sub_B16FFC(&Method_MasterMissionListViewManager__modifyOpenItem_b__44_0__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FB251 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v20.fields.current;
      if ( !v20.fields.current
        || (v15 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v20.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15)
        || (MasterMissionListViewItem_c *)v20.fields.current->klass->_2.typeHierarchy[v15 - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_B170D4();
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
          sub_B170D4();
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
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
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w19
  int64_t Time; // x20
  WebViewManager_o *v16; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  _BOOL4 v19; // w20
  AutomatedAction_o *v20; // x0
  bool v21; // w3
  int32_t v22; // w1

  if ( (byte_40FB24D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, receiveMissionIds);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FB24D = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, (const MethodInfo *)receiveMissionIds);
  MasterMissionListViewManager__CheckBulkButton(this, v9);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    v11 = UnityEngine_Random__Range_34843248(0, receiveMissionIds->max_length, 0LL);
    if ( (unsigned int)v11 >= receiveMissionIds->max_length )
    {
      sub_B17100(v11, v12, v13);
      sub_B170A0();
    }
    v14 = receiveMissionIds->m_Items[(int)v11 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( (Time = NetworkManager__getTime(0LL),
          (v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)v16,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
      || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v14,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL
      || (Time <= *(_QWORD *)&Entity->fields.flag ? (v19 = 0) : (v19 = Time <= (__int64)Entity->fields.emptyMessage),
          (v20 = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
    {
LABEL_22:
      sub_B170D4();
    }
    if ( v19 )
    {
      v21 = 1;
      v22 = v14;
    }
    else
    {
      v22 = v14;
      v21 = 0;
    }
    AutomatedAction__SetMissionAction(v20, v22, 5, v21, 0LL);
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
  struct UISprite_o *v5; // x0

  filterBtnTxt = this->fields.filterBtnTxt;
  if ( !filterBtnTxt
    || (UISprite__set_spriteName(filterBtnTxt, targetFile, 0LL), (v5 = this->fields.filterBtnTxt) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._33_MakePixelPerfect.method)(
    v5,
    v5->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v14; // x21
  ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  ListViewSort_o *operationSortInfo; // x0
  UILabel_o *v26; // x21
  System_String_o *v27; // x0
  ListViewSort_o *v28; // x0
  ListViewSort_o *v29; // x0
  bool v30; // w2
  ListViewSort_o *v31; // x0
  ListViewSort_o *v32; // x8
  int v33; // w9
  ListViewSort_o *v34; // x0
  ListViewSort_o *v35; // x0
  const MethodInfo *v36; // x1
  int32_t filterStatus; // w20
  int32_t v38; // w20
  int32_t v39; // w20
  int32_t v40; // w20

  if ( (byte_40FB246 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_8818, v7);
    sub_B16FFC(&StringLiteral_16980, v8);
    sub_B16FFC(&StringLiteral_17013, v9);
    sub_B16FFC(&StringLiteral_17012, v10);
    sub_B16FFC(&StringLiteral_8724, v11);
    sub_B16FFC(&StringLiteral_16963, v12);
    byte_40FB246 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v14 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, method, v2, v3, v4);
  ListViewSort___ctor_30209040(v14, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8724, 0LL);
  if ( !emptyMessageLabel )
LABEL_55:
    sub_B170D4();
  UILabel__set_text(emptyMessageLabel, v23, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_16963, v24);
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(operationSortInfo, 13, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 14, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 15, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 16, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 17, 1, 0LL);
      v26 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8818, 0LL);
      if ( !v26 )
        goto LABEL_55;
      UILabel__set_text(v26, v27, 0LL);
      goto LABEL_37;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17013, v24);
      v31 = this->fields.operationSortInfo;
      if ( !v31 )
        goto LABEL_55;
      ListViewSort__SetFilter(v31, 13, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 14, 0, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 15, 0, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 16, 0, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 17, 0, 0LL);
      v32 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v33 = 1;
      goto LABEL_39;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17012, v24);
      v28 = this->fields.operationSortInfo;
      if ( !v28 )
        goto LABEL_55;
      ListViewSort__SetFilter(v28, 13, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 14, 1, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 15, 0, 0LL);
      v29 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v30 = 0;
      goto LABEL_35;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_16980, v24);
      v34 = this->fields.operationSortInfo;
      if ( !v34 )
        goto LABEL_55;
      ListViewSort__SetFilter(v34, 13, 0, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 14, 0, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 15, 0, 0LL);
      v29 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v30 = 1;
LABEL_35:
      ListViewSort__SetFilter(v29, 16, v30, 0LL);
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter(*p_operationSortInfo, 17, 0, 0LL);
LABEL_37:
      v32 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v33 = 13;
LABEL_39:
      v32->fields.sortKind = v33;
LABEL_40:
      v35 = this->fields.baseSortInfo;
      if ( !v35 )
        goto LABEL_55;
      ListViewSort__Set(v35, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      switch ( this->fields.listType )
      {
        case 0:
          filterStatus = this->fields.filterStatus;
          if ( !byte_40FB282 )
          {
            sub_B16FFC(&EventRewardSaveData_TypeInfo, v36);
            byte_40FB282 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v38 = this->fields.filterStatus;
          if ( !byte_40FB283 )
          {
            sub_B16FFC(&EventRewardSaveData_TypeInfo, v36);
            byte_40FB283 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v38;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v39 = this->fields.filterStatus;
          if ( !byte_40FB284 )
          {
            sub_B16FFC(&EventRewardSaveData_TypeInfo, v36);
            byte_40FB284 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v39;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v40 = this->fields.filterStatus;
          if ( !byte_40FB285 )
          {
            sub_B16FFC(&EventRewardSaveData_TypeInfo, v36);
            byte_40FB285 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v40;
          EventRewardSaveData__SaveLimitedMissionData(0LL);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v36);
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
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t *p_DailyFilterId_k__BackingField; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v10; // x21
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  MissionListViewItem_o *v13; // x0

  if ( (byte_40FB241 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&targetMissionId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v6);
    byte_40FB241 = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_40FB27E )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_40FB27E = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      goto LABEL_16;
    case 1:
      if ( !byte_40FB27F )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_40FB27F = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      goto LABEL_16;
    case 2:
      if ( !byte_40FB280 )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_40FB280 = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
      goto LABEL_16;
    case 3:
      if ( !byte_40FB281 )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, *(_QWORD *)&targetMissionId);
        byte_40FB281 = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
LABEL_16:
      if ( this->fields.listType != 1 || *p_DailyFilterId_k__BackingField )
        return;
      itemList = this->fields.itemList;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v11 = itemList->fields._items->m_Items[v10];
    if ( v11
      && (v12 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
    {
      v13 = (MasterMissionListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == MasterMissionListViewItem_TypeInfo
          ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v10]
          : 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( targetMissionId >= 1 )
    {
      if ( !v13 )
        goto LABEL_35;
      if ( MissionListViewItem__get_MissionId(v13, 0LL) == targetMissionId )
        break;
    }
    if ( (__int64)++v10 >= size )
    {
LABEL_36:
      LODWORD(v10) = 0;
      break;
    }
    itemList = this->fields.itemList;
    if ( !itemList )
LABEL_35:
      sub_B170D4();
  }
  ListViewManager__SetTopItem((ListViewManager_o *)this, v10, 0LL);
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
  EventMissionEntity_o *EventMissionEntity; // x0
  System_Action_o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40FB240 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v13);
    sub_B16FFC(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, v14);
    byte_40FB240 = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.actionCallback,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity(v21, 0LL);
      if ( !EventMissionEntity )
        break;
      if ( EventMissionEntity->fields.id == missionID )
        goto LABEL_24;
      if ( (__int64)++v17 >= size )
        goto LABEL_23;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B170D4();
  }
LABEL_23:
  LODWORD(v17) = 0;
LABEL_24:
  v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, *(_QWORD *)&missionID, callback, method, v4);
  System_Action___ctor(
    v23,
    (Il2CppObject *)this,
    Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
    0LL);
  this->fields.callbackAfterScroll = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackAfterScroll,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v17, 1, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *ShowMSG; // x0
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_40FB249 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5472, method);
    byte_40FB249 = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (targetFSM = this->fields.targetFSM) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5472, 0LL);
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
  MasterMissionListViewManager_o *_4__this; // x0

  callback = this->fields.callback;
  if ( !callback || (System_Action__Invoke(callback, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  MasterMissionListViewManager__afterReward(_4__this, 0LL);
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
  System_Action_o *callback; // x0

  if ( (byte_40F695D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F695D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (callback = this->fields.callback) == 0LL) )
    sub_B170D4();
  System_Action__Invoke(callback, 0LL);
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
  __int64 v5; // x10

  if ( (byte_40F695E & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, x);
    byte_40F695E = 1;
  }
  if ( !x
    || (v5 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1), *(&x->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[v5 - 1] != MasterMissionListViewItem_TypeInfo )
  {
    sub_B170D4();
  }
  return MissionListViewItem__get_MissionId((MissionListViewItem_o *)x, 0LL) == this->fields.missionId;
}