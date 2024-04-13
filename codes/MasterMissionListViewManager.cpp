void __fastcall MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E89D5 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89D5 = 1;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  __int64 v37; // x21
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  DataManager_o **v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  GiftMaster_o *v54; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x24
  __int64 v56; // x8
  unsigned __int64 v57; // x25
  GiftEntity_array *v58; // x20
  System_Action_o *v59; // x22
  const MethodInfo *v60; // x1
  __int64 v61; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E89CB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)receiveMissionIds, (_DWORD)callback, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__, v31, v32, v33);
    sub_B5D5C4(&MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo, v34, v35, v36);
    byte_42E89CB = 1;
  }
  entity = 0LL;
  v37 = sub_B5D694(MasterMissionListViewManager___c__DisplayClass37_0_TypeInfo);
  MasterMissionListViewManager___c__DisplayClass37_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass37_0_o *)v37,
    0LL);
  if ( !v37 )
    goto LABEL_23;
  *(_QWORD *)(v37 + 16) = callback;
  v46 = (DataManager_o **)(v37 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)callback, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v37 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v37 + 24), (System_Int32_array **)this, v47, v48, v49, v50, v51, v52);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          Instance,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    v54 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
    v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v55,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    v56 = *(_QWORD *)&receiveMissionIds->max_length;
    if ( (int)v56 >= 1 )
    {
      v57 = 0LL;
      while ( 1 )
      {
        if ( v57 >= (unsigned int)v56 )
        {
          v61 = sub_B5D6C8(Instance);
          sub_B5D668(v61, 0LL);
        }
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      &entity,
                                      receiveMissionIds->m_Items[v57 + 1],
                                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v54 )
            break;
          Instance = (DataManager_o *)GiftMaster__GetGiftListById(v54, *(&entity->fields.startType + 1), 0LL);
          if ( !v55 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v55,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(v56) = receiveMissionIds->max_length;
        if ( (__int64)++v57 >= (int)v56 )
          goto LABEL_18;
      }
LABEL_23:
      sub_B5D69C(Instance, v39);
    }
LABEL_18:
    if ( !v55 )
      goto LABEL_23;
    v58 = (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v55,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)v37,
      Method_MasterMissionListViewManager___c__DisplayClass37_0__AcceptReward_b__0__,
      0LL);
    MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v58, 0, v59, 0LL);
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0LL);
    Instance = *v46;
    if ( !*v46 )
      goto LABEL_23;
    System_Action__Invoke((System_Action_o *)Instance, 0LL);
    MasterMissionListViewManager__afterReward(this, v60);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__CheckBulkButton(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Object_o *bulkButton; // x20
  __int64 v21; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemSortList; // x0
  UIWidget_o *bulkButtonTxt; // x20
  int v24; // s0
  __int64 v28; // x1
  __int64 v29; // x11
  struct UICommonButton_o *v30; // x0
  UIWidget_o *v31; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  int v34; // s0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E89C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E89C8 = 1;
  }
  memset(&v38, 0, sizeof(v38));
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
          *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL),
          !bulkButtonTxt)
      || (UIWidget__set_color(bulkButtonTxt, *(UnityEngine_Color_o *)&v24, 0LL),
          (itemSortList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemSortList) == 0LL) )
    {
      sub_B5D69C(itemSortList, v21);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v38,
      itemSortList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v38.fields.current )
      {
        v29 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v38.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (MasterMissionListViewItem_c *)v38.fields.current->klass->_2.typeHierarchy[v29 - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v38.fields.current[17].klass) == 3 )
        {
          v30 = this->fields.bulkButton;
          if ( !v30 )
            sub_B5D69C(0LL, v28);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v30->klass->vtable._14_SetState.method)(
            v30,
            0LL,
            1LL,
            v30->klass->vtable._15_OnPress.methodPtr);
          v31 = (UIWidget_o *)this->fields.bulkButtonTxt;
          *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
          if ( !v31 )
            sub_B5D69C(v32, v33);
          UIWidget__set_color(v31, *(UnityEngine_Color_o *)&v34, 0LL);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewManager__CreateList(
        MasterMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  Il2CppObject *current; // x24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  MasterMissionListViewItem_o *v54; // x23
  const MethodInfo *v55; // x3
  __int64 v56; // x0
  __int64 v57; // x1
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  __int64 *v60; // x8
  UILabel_o *v61; // x21
  void *ObjectList; // x0
  __int64 v63; // x1
  const MethodInfo *v64; // x1
  int v65; // w2
  __int64 v66; // x3
  int32_t DailyFilterId_k__BackingField; // w8
  UILabel_o *v68; // x21
  int v69; // w2
  __int64 v70; // x3
  UILabel_o *v71; // x21
  __int64 *v72; // x8
  int v73; // w2
  __int64 v74; // x3
  int v75; // w2
  __int64 v76; // x3
  const MethodInfo *v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int v84; // w8
  void *v85; // x19
  unsigned __int64 v86; // x21
  signed __int64 v87; // x22
  UnityEngine_Object_o *v88; // x20
  System_Collections_Generic_List_Enumerator_T__o v89; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E89C0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__,
      (_DWORD)missionList,
      (_DWORD)mstMissionIdList,
      *(_QWORD *)&type);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_8938/*"MST_MISSION_EMPTY_TXT"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, v43, v44, v45);
    byte_42E89C0 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v89,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)missionList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v90 = v89;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v90,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v90.fields.current;
      itemList = this->fields.itemList;
      v54 = (MasterMissionListViewItem_o *)sub_B5D694(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v54, (EventMissionEntity_o *)current, type, v55);
      if ( !itemList )
        sub_B5D69C(v56, v57);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v90,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_42E8A36 )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)sort, (_DWORD)v46, v47);
        byte_42E8A36 = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v60 = &StringLiteral_8843/*"MISSION_EMPTY_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v60 = &StringLiteral_8938/*"MST_MISSION_EMPTY_TXT"*/;
      }
      ObjectList = LocalizationManager__Get((System_String_o *)*v60, 0LL);
      if ( !emptyMessageLabel )
        goto LABEL_74;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
      if ( !byte_42E8A36 )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v64, v73, v74);
        byte_42E8A36 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      break;
    case 1:
      v71 = this->fields.emptyMessageLabel;
      if ( !byte_42E8A37 )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)sort, (_DWORD)v46, v47);
        byte_42E8A37 = 1;
      }
      if ( EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v72 = &StringLiteral_8843/*"MISSION_EMPTY_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v72 = &StringLiteral_8938/*"MST_MISSION_EMPTY_TXT"*/;
      }
      ObjectList = LocalizationManager__Get((System_String_o *)*v72, 0LL);
      if ( !v71 )
        goto LABEL_74;
      UILabel__set_text(v71, (System_String_o *)ObjectList, 0LL);
      if ( !byte_42E8A37 )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v64, v75, v76);
        byte_42E8A37 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      break;
    case 2:
      v61 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v61 )
        goto LABEL_74;
      UILabel__set_text(v61, (System_String_o *)ObjectList, 0LL);
      if ( !byte_42E8A38 )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v64, v65, v66);
        byte_42E8A38 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
      break;
    case 3:
      v68 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v68 )
        goto LABEL_74;
      UILabel__set_text(v68, (System_String_o *)ObjectList, 0LL);
      if ( !byte_42E8A39 )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v64, v69, v70);
        byte_42E8A39 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
      break;
    default:
      goto LABEL_58;
  }
  this->fields.filterStatus = DailyFilterId_k__BackingField;
  MasterMissionListViewManager__setList(this, v64);
LABEL_58:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.reDispAct,
      (System_Int32_array **)redispCallBack,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v77);
  if ( !ObjectList )
LABEL_74:
    sub_B5D69C(ObjectList, v63);
  v84 = *((_DWORD *)ObjectList + 6);
  v85 = ObjectList;
  if ( v84 >= 1 )
  {
    v86 = 0LL;
    v87 = v84;
    while ( 1 )
    {
      if ( v86 >= (unsigned int)v84 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v88 = *(UnityEngine_Object_o **)(*((_QWORD *)v85 + 2) + 8 * v86 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ObjectList = (void *)UnityEngine_Object__op_Inequality(v88, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !v88 )
          goto LABEL_74;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)v88, 0LL);
      }
      if ( (__int64)++v86 >= v87 )
        break;
      v84 = *((_DWORD *)v85 + 6);
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
    sub_B5D69C(0LL, method);
  return MissionListViewItem__get_MissionId(receiveItem, 0LL);
}


MasterMissionListViewItem_o *__fastcall MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E89C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v6, v7, v8);
    byte_42E89C3 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (MasterMissionListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == MasterMissionListViewItem_TypeInfo )
    return (MasterMissionListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall MasterMissionListViewManager__ModifyItem(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  DataManager_o *Instance; // x0
  __int64 v51; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t Time; // x0
  int64_t v54; // x9
  unsigned __int64 v55; // x28
  __int64 v56; // x23
  MasterMissionListViewManager___c__DisplayClass42_0_o *v57; // x25
  int64_t UserId; // x2
  int32_t missionProgressType; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v61; // x27
  __int64 v62; // x0
  __int64 v63; // x1
  int v64; // w2
  __int64 v65; // x3
  __int64 v66; // x11
  MissionListViewItem_o *current; // x26
  int32_t missionId; // w27
  UnityEngine_Object_o *viewObject; // x27
  __int64 v70; // x1
  struct ListViewObject_o *v71; // x0
  int v72; // w26
  __int64 v73; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v74; // [xsp+10h] [xbp-B0h]
  UserEventMissionMaster_o *v75; // [xsp+18h] [xbp-A8h]
  int v76; // [xsp+24h] [xbp-9Ch]
  _BYTE v78[28]; // [xsp+30h] [xbp-90h] BYREF
  int v79; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+50h] [xbp-70h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42E89D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)receiveMissionIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__FindAll__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&NetworkManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Predicate_ListViewItem___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Predicate_ListViewItem__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__, v44, v45, v46);
    sub_B5D5C4(&MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo, v47, v48, v49);
    byte_42E89D0 = 1;
  }
  entity = 0LL;
  memset(&v80, 0, sizeof(v80));
  v79 = 0;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
LABEL_54:
      sub_B5D69C(Instance, v51);
    }
    v75 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( (int)receiveMissionIds->max_length >= 1 )
    {
      v76 = 0;
      v54 = Time;
      v55 = 0LL;
      v74 = MasterData_WarQuestSelectionMaster;
      do
      {
        v56 = v54;
        v57 = (MasterMissionListViewManager___c__DisplayClass42_0_o *)sub_B5D694(MasterMissionListViewManager___c__DisplayClass42_0_TypeInfo);
        MasterMissionListViewManager___c__DisplayClass42_0___ctor(v57, 0LL);
        if ( v55 >= receiveMissionIds->max_length )
        {
          v73 = sub_B5D6C8(Instance);
          sub_B5D668(v73, 0LL);
        }
        if ( !v57 )
          goto LABEL_54;
        v51 = (unsigned int)receiveMissionIds->m_Items[v55 + 1];
        v57->fields.missionId = v51;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_54;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v51,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_54;
        v54 = v56;
        if ( v56 > *(_QWORD *)&Instance->fields.lastFrameTime && v56 <= (__int64)Instance->fields.masterCheckName )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)v75;
          if ( !v75 )
            goto LABEL_54;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v75,
                                        &entity,
                                        UserId,
                                        v57->fields.missionId,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_54;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v61 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v61,
              (Il2CppObject *)v57,
              Method_MasterMissionListViewManager___c__DisplayClass42_0__ModifyItem_b__0__,
              (const MethodInfo_2B9320C *)Method_System_Predicate_ListViewItem___ctor__);
            if ( !itemList )
              goto LABEL_54;
            Instance = (DataManager_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)itemList,
                                          (System_Predicate_T__o *)v61,
                                          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              goto LABEL_54;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v78,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v80 = *(System_Collections_Generic_List_Enumerator_T__o *)v78;
            while ( 1 )
            {
              v62 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v80,
                      (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v62 & 1) == 0 )
                break;
              if ( v80.fields.current
                && (v66 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
                    *(&v80.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v66) )
              {
                if ( (MasterMissionListViewItem_c *)v80.fields.current->klass->_2.typeHierarchy[v66 - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v80.fields.current;
                else
                  current = 0LL;
              }
              else
              {
                current = 0LL;
              }
              missionId = v57->fields.missionId;
              if ( !byte_42E5F9E )
              {
                v62 = sub_B5D5C4(&EventRewardSaveData_TypeInfo, v63, v64, v65);
                byte_42E5F9E = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = missionId;
              if ( !current )
                sub_B5D69C(v62, v63);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0LL);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v71 = current->fields.viewObject;
                if ( !v71 )
                  sub_B5D69C(0LL, v70);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v71->klass->vtable._5_SetItem.method)(
                  v71,
                  current,
                  v71->klass->vtable._6_SetItem.methodPtr);
              }
            }
            *(_DWORD *)&v78[4 * v76 + 24] = 279;
            v72 = ++v79;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v80,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            MasterData_WarQuestSelectionMaster = v74;
            if ( v72 )
            {
              v76 = v72;
              v54 = v56;
              if ( *(_DWORD *)&v78[4 * v72 + 20] == 279 )
              {
                v79 = v72 - 1;
                v76 = v72 - 1;
              }
              goto LABEL_49;
            }
            v76 = 0;
          }
          v54 = v56;
        }
LABEL_49:
        ++v55;
      }
      while ( (__int64)v55 < (int)receiveMissionIds->max_length );
    }
  }
}


void __fastcall MasterMissionListViewManager__OnChangeAlphaAnim(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_MasterMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x1
  int size; // w21
  __int64 v11; // x22

  if ( (byte_42E89D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v5, v6, v7);
    byte_42E89D3 = 1;
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      ObjectList = MasterMissionListViewManager__get_ObjectList(this, v9);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_MasterMissionListViewObject__o *)ObjectList->fields._items->m_Items[v11];
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v9);
      if ( (int)++v11 >= size )
        return;
    }
LABEL_12:
    sub_B5D69C(ObjectList, v9);
  }
}


void __fastcall MasterMissionListViewManager__OnClickFilterList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_42E89C6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89C6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_32A2F98[filterStatus];
  MasterMissionListViewManager__setList(this, v5);
}


void __fastcall MasterMissionListViewManager__OnClickListView(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 v14; // x10
  struct MasterMissionListViewItem_o *v15; // x20
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v24; // x2

  if ( (byte_42E89C4 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionListViewObject_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_15588/*"Wait_Action"*/, v9, v10, v11);
    byte_42E89C4 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_19;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15588/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (v14 = *(&MasterMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14)
    || (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != MasterMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem(
                                        (MasterMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0LL )
  {
LABEL_19:
    sub_B5D69C(targetFSM, obj);
  }
  v15 = (struct MasterMissionListViewItem_o *)targetFSM;
  if ( ((*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
          targetFSM,
          targetFSM->klass[1]._1.this_arg.data) & 1) == 0
    || MasterMissionListViewItem__get_IsHideReward(v15, v16)
    || v15->fields.isHideRewardDetail )
  {
    if ( v15->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v15;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.receiveItem,
        (System_Int32_array **)v15,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v15, 0LL);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v24);
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
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v15, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  __int64 v87; // x28
  void *Instance; // x0
  System_String_o *v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v98; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v99; // x25
  int max_length; // w26
  __int64 v101; // x21
  GiftEntity_o **m_Items; // x22
  GiftEntity_o *v103; // x8
  int32_t type; // w19
  GiftEntity_o *v105; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x28
  __int64 v107; // x27
  GiftEntity_o **v108; // x24
  Il2CppObject *CountableString; // x21
  System_Text_StringBuilder_o *v110; // x19
  GiftEntity_o *v111; // x8
  System_String_o *v112; // x22
  Il2CppObject *v113; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v114; // x1
  GiftEntity_o *v115; // x8
  int32_t v116; // w19
  GiftEntity_o *v117; // x8
  ServantEntity_o *v118; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v120; // x0
  GiftEntity_o *v121; // x8
  Il2CppObject *v122; // x19
  Il2CppObject *v123; // x0
  Il2CppObject *v124; // x19
  System_String_o *v125; // x0
  GiftEntity_o *v126; // x8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v127; // x23
  System_Text_StringBuilder_o *v128; // x21
  System_String_o *v129; // x19
  System_String_o *v130; // x0
  System_String_o *v131; // x0
  System_String_o *v132; // x19
  System_String_o *v133; // x0
  CommonUI_o *v134; // x19
  GiftEntity_array *v135; // x20
  System_String_o *v136; // x21
  MissionRewardGetDialog_ClickDelegate_o *v137; // x22
  __int64 v138; // x0
  void **v139; // [xsp+0h] [xbp-A0h]
  Il2CppObject *v140; // [xsp+8h] [xbp-98h]
  System_Text_StringBuilder_o *v141; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+18h] [xbp-88h]
  int v143; // [xsp+24h] [xbp-7Ch]
  System_String_o *format; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+30h] [xbp-70h]
  int32_t num; // [xsp+3Ch] [xbp-64h] BYREF
  WarEntity_o *v147; // [xsp+40h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42E89CC & 1) == 0 )
  {
    sub_B5D5C4(&MissionRewardGetDialog_ClickDelegate_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor___68739288, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v51, v52, v53);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__, v57, v58, v59);
    sub_B5D5C4(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_8836/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_8840/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_3335/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_32/*"\n \n "*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_8835/*"MISSION_ACTION_ITEM_FORMAT"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_30/*"\n "*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_8842/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, v84, v85, v86);
    byte_42E89CC = 1;
  }
  v147 = 0LL;
  entity = 0LL;
  v87 = sub_B5D694(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  MasterMissionListViewManager___c__DisplayClass38_0___ctor(
    (MasterMissionListViewManager___c__DisplayClass38_0_o *)v87,
    0LL);
  if ( !v87 )
    goto LABEL_113;
  *(_QWORD *)(v87 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v87 + 16), (System_Int32_array **)callback, v90, v91, v92, v93, v94, v95);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_113;
  v139 = (void **)(v87 + 16);
  if ( !Instance )
    goto LABEL_113;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v98 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v98, 0LL);
  v141 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v141, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_113;
  v99 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  max_length = GiftListById->max_length;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3335/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v143 = 0;
    v101 = 0LL;
    m_Items = GiftListById->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v101 >= GiftListById->max_length )
      {
LABEL_114:
        v138 = sub_B5D6C8(Instance);
        sub_B5D668(v138, 0LL);
      }
      v103 = m_Items[v101];
      if ( !v103 )
        goto LABEL_113;
      type = v103->fields.type;
      Instance = (void *)Gift__IsServant_28424960(type, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (void *)Gift__IsCommandCode_28425356(type, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)Gift__IsCostumeRelease(type, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            if ( (unsigned int)v101 >= GiftListById->max_length )
              goto LABEL_114;
            v105 = m_Items[v101];
            Instance = MasterData_WarQuestSelectionMaster;
            if ( !v105 || !MasterData_WarQuestSelectionMaster )
              goto LABEL_113;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 &entity,
                                 v105->fields.objectId,
                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_113;
              Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, entity->fields.id, 0LL);
              v143 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
        }
      }
      if ( (int)++v101 >= max_length )
        goto LABEL_30;
    }
  }
  v143 = 0;
LABEL_30:
  v140 = (Il2CppObject *)v87;
  collection = (System_Collections_Generic_IEnumerable_T__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)collection,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v106,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v107 = 0LL;
    v108 = GiftListById->m_Items;
    do
    {
      if ( (unsigned int)v107 >= GiftListById->max_length )
        goto LABEL_114;
      v115 = v108[v107];
      if ( !v115 )
        goto LABEL_113;
      v116 = v115->fields.type;
      Instance = (void *)Gift__IsServant_28424960(v116, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (unsigned int)v107 >= GiftListById->max_length )
          goto LABEL_114;
        v117 = v108[v107];
        if ( !v117 )
          goto LABEL_113;
        if ( !v99 )
          goto LABEL_113;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v99,
                     v117->fields.objectId,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_113;
        v118 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*((_DWORD *)Instance + 21), 0LL);
        Instance = (void *)SvtType__IsStatusUp(v118->fields.type, 0LL);
        if ( IsCombineMaterial || ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v98 )
            goto LABEL_113;
          v120 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v98->klass->vtable._3_ToString.method)(
                                      v98,
                                      v98->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          if ( !System_String__IsNullOrEmpty(v120, 0LL) )
            System_Text_StringBuilder__Append_42953744(v98, (System_String_o *)StringLiteral_30/*"\n "*/, 0LL);
          Instance = ServantEntity__getName(v118, -1, -1, 0LL);
          if ( (unsigned int)v107 >= GiftListById->max_length )
            goto LABEL_114;
          v121 = v108[v107];
          if ( !v121 )
            goto LABEL_113;
          v122 = (Il2CppObject *)Instance;
          num = v121->fields.num;
          v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          v124 = (Il2CppObject *)System_String__Format_44573324(format, v122, v123, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v125 = LocalizationManager__Get((System_String_o *)StringLiteral_8835/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
          Instance = System_Text_StringBuilder__AppendFormat(v98, v125, v124, 0LL);
          if ( (unsigned int)v107 >= GiftListById->max_length )
            goto LABEL_114;
          if ( !v106 )
            goto LABEL_113;
          v114 = (EventMissionProgressRequest_Argument_ProgressData_o *)v108[v107];
          Instance = v106;
LABEL_71:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            v114,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
        }
      }
      else
      {
        Instance = (void *)Gift__IsItem_28424904(v116, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( (unsigned int)v107 >= GiftListById->max_length )
            goto LABEL_114;
          v126 = v108[v107];
          Instance = MasterData_WarQuestSelectionMaster;
          if ( !v126 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_113;
          Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               MasterData_WarQuestSelectionMaster,
                               &v147,
                               v126->fields.objectId,
                               (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !v147 || !Instance )
              goto LABEL_113;
            Instance = (void *)CommonUI__IsGetItemEffect((CommonUI_o *)Instance, v147->fields.id, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !v147 )
                goto LABEL_113;
              CountableString = (Il2CppObject *)ItemType__GetCountableString(v147->fields.bannerId, 0LL);
              v110 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v110, 0LL);
              if ( !v147 || !v110 )
                goto LABEL_113;
              System_Text_StringBuilder__Append_42953744(v110, v147->fields.age, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
              if ( (unsigned int)v107 >= GiftListById->max_length )
                goto LABEL_114;
              v111 = v108[v107];
              if ( !v111 )
                goto LABEL_113;
              v112 = (System_String_o *)Instance;
              num = v111->fields.num;
              v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
              System_Text_StringBuilder__AppendFormat_42960296(v110, v112, CountableString, v113, 0LL);
              if ( v143 >= 2 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8835/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !v141 )
                  goto LABEL_113;
                System_Text_StringBuilder__AppendFormat(v141, (System_String_o *)Instance, (Il2CppObject *)v110, 0LL);
                Instance = v141;
                v89 = (System_String_o *)StringLiteral_30/*"\n "*/;
              }
              else
              {
                v89 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v110->klass->vtable._3_ToString.method)(
                                           v110,
                                           v110->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                Instance = v141;
                if ( !v141 )
                  goto LABEL_113;
              }
              Instance = System_Text_StringBuilder__Append_42953744((System_Text_StringBuilder_o *)Instance, v89, 0LL);
              if ( (unsigned int)v107 >= GiftListById->max_length )
                goto LABEL_114;
              Instance = collection;
              if ( !collection )
                goto LABEL_113;
              v114 = (EventMissionProgressRequest_Argument_ProgressData_o *)v108[v107];
              goto LABEL_71;
            }
          }
        }
      }
      ++v107;
    }
    while ( (int)v107 < max_length );
  }
  v127 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v127,
    collection,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_GiftEntity___ctor___68739288);
  if ( !v127 )
    goto LABEL_113;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v127,
    (System_Collections_Generic_IEnumerable_T__o *)v106,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v127->fields._size >= 1 )
  {
    v128 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v128, 0LL);
    Instance = v141;
    if ( !v141 )
      goto LABEL_113;
    v129 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v141->klass->vtable._3_ToString.method)(
                                v141,
                                v141->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = (void *)System_String__IsNullOrEmpty(v129, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v98 )
        goto LABEL_113;
    }
    else
    {
      if ( v143 >= 2 )
      {
        if ( !v129 )
          goto LABEL_113;
        Instance = System_String__Substring_44641524(v129, 0, v129->fields.m_stringLength - 2, 0LL);
        if ( !v128 )
          goto LABEL_113;
        System_Text_StringBuilder__Append_42953744(v128, (System_String_o *)Instance, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v130 = LocalizationManager__Get((System_String_o *)StringLiteral_8836/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
        Instance = System_Text_StringBuilder__Append_42953744(v128, v130, 0LL);
        if ( !v98 )
          goto LABEL_113;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"MISSION_ACTION_SUCCESS"*/, 0LL);
        if ( !v128 )
          goto LABEL_113;
        Instance = System_Text_StringBuilder__AppendFormat(v128, (System_String_o *)Instance, (Il2CppObject *)v129, 0LL);
        if ( !v98 )
          goto LABEL_113;
      }
      v131 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v98->klass->vtable._3_ToString.method)(
                                  v98,
                                  v98->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      if ( !System_String__IsNullOrEmpty(v131, 0LL) )
        System_Text_StringBuilder__Append_42953744(v128, (System_String_o *)StringLiteral_32/*"\n \n "*/, 0LL);
    }
    v132 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v98->klass->vtable._3_ToString.method)(
                                v98,
                                v98->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    Instance = (void *)System_String__IsNullOrEmpty(v132, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v128 )
        goto LABEL_113;
      System_Text_StringBuilder__Append_42953744(v128, v132, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v133 = LocalizationManager__Get((System_String_o *)StringLiteral_8842/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
      System_Text_StringBuilder__Append_42953744(v128, v133, 0LL);
    }
    v134 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v127,
                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v128 )
    {
      v135 = (GiftEntity_array *)Instance;
      v136 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v128->klass->vtable._3_ToString.method)(
                                  v128,
                                  v128->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v137 = (MissionRewardGetDialog_ClickDelegate_o *)sub_B5D694(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v137,
        v140,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__OpenOneResultDialog_b__0__,
        0LL);
      if ( v134 )
      {
        CommonUI__OpenMissionRewardGetDialog(v134, v135, v136, v137, 0, 0LL);
        return;
      }
    }
LABEL_113:
    sub_B5D69C(Instance, v89);
  }
  Instance = *v139;
  if ( !*v139 )
    goto LABEL_113;
  System_Action__Invoke((System_Action_o *)Instance, 0LL);
}


System_Collections_Generic_List_MasterMissionListViewItem__o *__fastcall MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  struct MasterMissionListViewItem_o *receiveItem; // x1
  _BOOL8 v30; // x0
  __int64 v31; // x10
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E89D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, bulk, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v24, v25, v26);
    byte_42E89D4 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v27;
    if ( v27 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)receiveItem,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v27;
    }
LABEL_19:
    sub_B5D69C(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemSortList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v30 )
      break;
    if ( v33.fields.current )
    {
      v31 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v33.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v31
        && (MasterMissionListViewItem_c *)v33.fields.current->klass->_2.typeHierarchy[v31 - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v33.fields.current[17].klass) == 3 )
      {
        if ( !v27 )
          sub_B5D69C(v30, v33.fields.current);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33.fields.current,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v27;
}


void __fastcall MasterMissionListViewManager__RefrashListDisp(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_MasterMissionListViewObject__o *ObjectList; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_MasterMissionListViewObject__o *v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x11
  __int64 v29; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v32; // w8
  __int64 v33; // x21
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E89C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__, v17, v18, v19);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v20, v21, v22);
    byte_42E89C5 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v25 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v26 )
      break;
    if ( !v35.fields.current
      || (v28 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v35.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (MasterMissionListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v28 - 1] != MasterMissionListViewItem_TypeInfo )
    {
      sub_B5D69C(v26, v27);
    }
    v29 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v35.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v29 )
    {
      if ( (MasterMissionListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v29 - 1] == MasterMissionListViewItem_TypeInfo )
        current = v35.fields.current;
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
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v25 )
    goto LABEL_25;
  size = v25->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v32 = v25->fields._size;
    if ( v32 >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( v32 <= (unsigned int)v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        ObjectList = (System_Collections_Generic_List_MasterMissionListViewObject__o *)v25->fields._items->m_Items[v33];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_MasterMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v32 = v25->fields._size;
        if ( (int)++v33 >= v32 )
          return;
      }
LABEL_25:
      sub_B5D69C(ObjectList, v24);
    }
  }
}


void __fastcall MasterMissionListViewManager__SetOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v29; // x1
  struct MasterMissionListViewItem_o *v30; // x21
  int v31; // w1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E89D1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18425/*"ef_mission_extric01"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20828/*"modifyOpenItem"*/, v20, v21, v22);
    byte_42E89D1 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MasterMissionListViewManager__get_ObjectList(
                                                                                                  this,
                                                                                                  method);
    if ( !ObjectList )
      sub_B5D69C(0LL, v24);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v41,
        ObjectList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v42 = v41;
      while ( 1 )
      {
        v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v42,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v25 )
          break;
        current = v42.fields.current;
        if ( !v42.fields.current )
          sub_B5D69C(v25, v26);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v42.fields.current,
                                          v26);
        v30 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_B5D69C(0LL, v29);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_42E5F9E )
          {
            sub_B5D5C4(&EventRewardSaveData_TypeInfo, v31, (_DWORD)v32, v33);
            byte_42E5F9E = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v30;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.openTargetItem,
            (System_Int32_array **)v30,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v30, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18425/*"ef_mission_extric01"*/, transform, v40);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v42,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_20828/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0LL);
  }
}


void __fastcall MasterMissionListViewManager__SetReceiveReward(
        MasterMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_42E89C9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)missionEntity, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8846/*"MISSION_REWARD"*/, v6, v7, v8);
    byte_42E89C9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  this->fields.missionToRecieve = missionEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.missionToRecieve,
    (System_Int32_array **)missionEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B5D69C(0LL, v15);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8846/*"MISSION_REWARD"*/, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.getSvtList,
    (System_Int32_array **)svts,
    (System_String_array **)cmds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E89D6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16429/*"actionAfterCallback"*/, (_DWORD)method, v2, v3);
    byte_42E89D6 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16429/*"actionAfterCallback"*/,
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
    sub_B5D560(p_actionCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(actionCallback, 0LL);
  }
}


void __fastcall MasterMissionListViewManager__afterReward(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_42E89CD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5559/*"END_EFFECT"*/, (_DWORD)method, v2, v3);
    byte_42E89CD = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5559/*"END_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *transform; // x19
  int v19; // s0
  UnityEngine_Transform_o *v22; // x19
  int v23; // s0

  if ( (byte_42E89CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)parentTr, (_DWORD)method, v3);
    sub_B5D5C4(&MasterMissionListViewManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E89CF = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v17 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v17, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL),
        v22 = UnityEngine_GameObject__get_transform(v17, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL),
        !v22) )
  {
LABEL_12:
    sub_B5D69C(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  return v17;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  MasterMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E89BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E89BF = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (MasterMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v29;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *__fastcall MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E89BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___, (_DWORD)method, v2, v3);
    byte_42E89BE = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_1E649B4 *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void __fastcall MasterMissionListViewManager__modifyOpenItem(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x20
  __int64 v30; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v32; // x1
  void *v33; // x0
  System_Action_o *v34; // x20
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E89D2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_MasterMissionListViewManager__modifyOpenItem_b__44_0__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    byte_42E89D2 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v36 = v35;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v27 )
        break;
      current = v36.fields.current;
      if ( !v36.fields.current
        || (v30 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v36.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v30)
        || (MasterMissionListViewItem_c *)v36.fields.current->klass->_2.typeHierarchy[v30 - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_B5D69C(v27, v28);
      }
      monitor = (UnityEngine_Object_o *)v36.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v33 = current[6].monitor;
        if ( !v33 )
          sub_B5D69C(0LL, v32);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v33 + 392LL))(
          v33,
          current,
          *(_QWORD *)(*(_QWORD *)v33 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__44_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v34, 0LL);
}


void __fastcall MasterMissionListViewManager__setAfterAction(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  const MethodInfo *v18; // x1
  AutomatedAction_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  int32_t v22; // w19
  int64_t Time; // x20
  _BOOL4 v24; // w20
  bool v25; // w3
  int32_t v26; // w1
  __int64 v27; // x0

  if ( (byte_42E89CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)receiveMissionIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E89CE = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, (const MethodInfo *)receiveMissionIds);
  MasterMissionListViewManager__CheckBulkButton(this, v18);
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL);
    v21 = UnityEngine_Random__Range_35654020(0, receiveMissionIds->max_length, 0LL);
    if ( (unsigned int)v21 >= receiveMissionIds->max_length )
    {
      v27 = sub_B5D6C8(v21);
      sub_B5D668(v27, 0LL);
    }
    v22 = receiveMissionIds->m_Items[(int)v21 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( (Time = NetworkManager__getTime(0LL),
          (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (AutomatedAction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
      || (Instance = (AutomatedAction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            v22,
                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL
      || (Time <= (__int64)Instance[1].klass ? (v24 = 0) : (v24 = Time <= (__int64)Instance[1].monitor),
          (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
    {
LABEL_22:
      sub_B5D69C(Instance, v20);
    }
    if ( v24 )
    {
      v25 = 1;
      v26 = v22;
    }
    else
    {
      v26 = v22;
      v25 = 0;
    }
    AutomatedAction__SetMissionAction(Instance, v26, 5, v25, 0LL);
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
    sub_B5D69C(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v27; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  UILabel_o *v39; // x21
  bool v40; // w2
  struct ListViewSort_o *v41; // x8
  int v42; // w9
  const MethodInfo *v43; // x1
  int v44; // w2
  __int64 v45; // x3
  int32_t filterStatus; // w20
  int32_t v47; // w20
  int32_t v48; // w20
  int32_t v49; // w20

  if ( (byte_42E89C7 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8938/*"MST_MISSION_EMPTY_TXT"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17255/*"btn_txt_completed"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17288/*"btn_txt_receipt"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17287/*"btn_txt_progress"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17238/*"btn_txt_all"*/, v23, v24, v25);
    byte_42E89C7 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v27 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34029496(v27, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_55:
    sub_B5D69C(operationSortInfo, v37);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17238/*"btn_txt_all"*/, v38);
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
      v39 = this->fields.emptyMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8938/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v39 )
        goto LABEL_55;
      UILabel__set_text(v39, operationSortInfo, 0LL);
      goto LABEL_37;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17288/*"btn_txt_receipt"*/, v38);
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
      v41 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v42 = 1;
      goto LABEL_39;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17287/*"btn_txt_progress"*/, v38);
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
      v40 = 0;
      goto LABEL_35;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17255/*"btn_txt_completed"*/, v38);
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
      v40 = 1;
LABEL_35:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v40, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_37:
      v41 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_55;
      v42 = 13;
LABEL_39:
      v41->fields.sortKind = v42;
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
          if ( !byte_42E8A3A )
          {
            sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v43, v44, v45);
            byte_42E8A3A = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0LL);
          break;
        case 1:
          v47 = this->fields.filterStatus;
          if ( !byte_42E8A3B )
          {
            sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v43, v44, v45);
            byte_42E8A3B = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v47;
          EventRewardSaveData__SaveWeeklyMissionData(0LL);
          break;
        case 2:
          v48 = this->fields.filterStatus;
          if ( !byte_42E8A3C )
          {
            sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v43, v44, v45);
            byte_42E8A3C = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v48;
          EventRewardSaveData__SaveExtraMissionData(0LL);
          break;
        case 3:
          v49 = this->fields.filterStatus;
          if ( !byte_42E8A3D )
          {
            sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v43, v44, v45);
            byte_42E8A3D = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v49;
          EventRewardSaveData__SaveLimitedMissionData(0LL);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v43);
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
  __int64 v3; // x3
  MasterMissionListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t *p_DailyFilterId_k__BackingField; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v15; // x21
  ListViewItem_o *v16; // x8
  __int64 v17; // x11

  v5 = this;
  if ( (byte_42E89C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, targetMissionId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (MasterMissionListViewManager_o *)sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v9, v10, v11);
    byte_42E89C2 = 1;
  }
  switch ( v5->fields.listType )
  {
    case 0:
      if ( !byte_42E8A36 )
      {
        this = (MasterMissionListViewManager_o *)sub_B5D5C4(
                                                   &EventRewardSaveData_TypeInfo,
                                                   targetMissionId,
                                                   (_DWORD)method,
                                                   v3);
        byte_42E8A36 = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      goto LABEL_16;
    case 1:
      if ( !byte_42E8A37 )
      {
        this = (MasterMissionListViewManager_o *)sub_B5D5C4(
                                                   &EventRewardSaveData_TypeInfo,
                                                   targetMissionId,
                                                   (_DWORD)method,
                                                   v3);
        byte_42E8A37 = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      goto LABEL_16;
    case 2:
      if ( !byte_42E8A38 )
      {
        this = (MasterMissionListViewManager_o *)sub_B5D5C4(
                                                   &EventRewardSaveData_TypeInfo,
                                                   targetMissionId,
                                                   (_DWORD)method,
                                                   v3);
        byte_42E8A38 = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
      goto LABEL_16;
    case 3:
      if ( !byte_42E8A39 )
      {
        this = (MasterMissionListViewManager_o *)sub_B5D5C4(
                                                   &EventRewardSaveData_TypeInfo,
                                                   targetMissionId,
                                                   (_DWORD)method,
                                                   v3);
        byte_42E8A39 = 1;
      }
      p_DailyFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
LABEL_16:
      if ( v5->fields.listType != 1 || *p_DailyFilterId_k__BackingField )
        return;
      itemList = v5->fields.itemList;
      if ( !itemList )
        goto LABEL_35;
      size = itemList->fields._size;
      if ( (int)size < 1 )
        goto LABEL_36;
      v15 = 0LL;
      break;
    default:
      return;
  }
  while ( 1 )
  {
    if ( v15 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v16 = itemList->fields._items->m_Items[v15];
    if ( v16
      && (v17 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
    {
      this = (MasterMissionListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] == MasterMissionListViewItem_TypeInfo
           ? (MasterMissionListViewManager_o *)itemList->fields._items->m_Items[v15]
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
    if ( (__int64)++v15 >= size )
    {
LABEL_36:
      LODWORD(v15) = 0;
      break;
    }
    itemList = v5->fields.itemList;
    if ( !itemList )
LABEL_35:
      sub_B5D69C(this, *(_QWORD *)&targetMissionId);
  }
  ListViewManager__SetTopItem((ListViewManager_o *)v5, v15, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  signed __int64 size; // x22
  unsigned __int64 v25; // x21
  ListViewItem_o *v26; // x8
  __int64 v27; // x11
  __int64 v28; // x11
  MissionListViewItem_o *v29; // x0
  System_Action_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  v10 = this;
  if ( (byte_42E89C1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, missionID, (_DWORD)callback, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v17, v18, v19);
    this = (MasterMissionListViewManager_o *)sub_B5D5C4(
                                               &Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__,
                                               v20,
                                               v21,
                                               v22);
    byte_42E89C1 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_B5D560(
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
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v26 = itemList->fields._items->m_Items[v25];
      if ( !v26 )
        break;
      v27 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (MasterMissionListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] != MasterMissionListViewItem_TypeInfo )
      {
        break;
      }
      v28 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) >= (unsigned int)v28 )
        v29 = (MasterMissionListViewItem_c *)v26->klass->_2.typeHierarchy[v28 - 1] == MasterMissionListViewItem_TypeInfo
            ? (MissionListViewItem_o *)itemList->fields._items->m_Items[v25]
            : 0LL;
      else
        v29 = 0LL;
      this = (MasterMissionListViewManager_o *)MissionListViewItem__get_EventMissionEntity(v29, 0LL);
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == missionID )
        goto LABEL_24;
      if ( (__int64)++v25 >= size )
        goto LABEL_23;
      itemList = v10->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&missionID);
  }
LABEL_23:
  LODWORD(v25) = 0;
LABEL_24:
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v10, Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, 0LL);
  v10->fields.callbackAfterScroll = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v10->fields.callbackAfterScroll,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ListViewManager__MoveTopItem((ListViewManager_o *)v10, v25, 1, 0LL);
}


void __fastcall MasterMissionListViewManager__unAcceptableDlg(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_o *ShowMSG; // x0

  if ( (byte_42E89CA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5564/*"END_NOTICE"*/, (_DWORD)method, v2, v3);
    byte_42E89CA = 1;
  }
  ShowMSG = this->fields.ShowMSG;
  if ( !ShowMSG || (System_Action__Invoke(ShowMSG, 0LL), (ShowMSG = (System_Action_o *)this->fields.targetFSM) == 0LL) )
    sub_B5D69C(ShowMSG, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ShowMSG, (System_String_o *)StringLiteral_5564/*"END_NOTICE"*/, 0LL);
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
    sub_B5D69C(callback, method);
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E5F3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F3A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.callback) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
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
  __int64 v3; // x3
  MasterMissionListViewManager___c__DisplayClass42_0_o *v5; // x19
  __int64 v6; // x10

  v5 = this;
  if ( (byte_42E5F3B & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass42_0_o *)sub_B5D5C4(
                                                                     &MasterMissionListViewItem_TypeInfo,
                                                                     (_DWORD)x,
                                                                     (_DWORD)method,
                                                                     v3);
    byte_42E5F3B = 1;
  }
  if ( !x
    || (v6 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1), *(&x->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[v6 - 1] != MasterMissionListViewItem_TypeInfo )
  {
    sub_B5D69C(this, x);
  }
  return MissionListViewItem__get_MissionId((MissionListViewItem_o *)x, 0LL) == v5->fields.missionId;
}