void __fastcall QuestInformationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct QuestInformationListViewManager_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F95CE & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_14955, v8);
    sub_B16FFC(&StringLiteral_4520, v9);
    byte_40F95CE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_14955;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_14955;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = QuestInformationListViewManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_4520;
  v12->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4520;
  sub_B16F98((BattleServantConfConponent_o *)&v12->CHOCO_SHADER_SP, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall QuestInformationListViewManager___ctor(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEmptyRewardList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  struct ListViewItemSeed_o *rewardSeed; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int32_t v18; // w21
  __int64 v19; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int v21; // w24
  __int64 v22; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x0
  struct UIScrollView_o *scrollView; // x8

  if ( (byte_40F95C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_B16FFC(&QuestInformationListViewItem_TypeInfo, v12);
    byte_40F95C7 = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.mIsBuildingList = 1;
  this->fields.seed = rewardSeed;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)rewardSeed,
    *(System_String_array ***)&itemCnt,
    *(System_String_array ***)&svtCnt,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( itemCnt >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = sub_B170CC(QuestInformationListViewItem_TypeInfo, v14, v15, v16, v17);
        ListViewItem___ctor_30173668((ListViewItem_o *)v19, v18, 0LL);
        *(_DWORD *)(v19 + 124) = 0;
        *(_QWORD *)(v19 + 112) = 0LL;
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( ++v18 >= itemCnt )
          goto LABEL_10;
      }
LABEL_16:
      sub_B170D4();
    }
    v18 = 0;
LABEL_10:
    if ( svtCnt >= 1 )
    {
      v21 = 0;
      do
      {
        v22 = sub_B170CC(QuestInformationListViewItem_TypeInfo, v14, v15, v16, v17);
        ListViewItem___ctor_30173668((ListViewItem_o *)v22, v18 + v21, 0LL);
        *(_DWORD *)(v22 + 124) = 0;
        *(_QWORD *)(v22 + 112) = 0LL;
        v23 = this->fields.itemList;
        if ( !v23 )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( ++v21 < svtCnt );
    }
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_16;
  HIDWORD(scrollView->fields.onDragStarted) = 1;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  this->fields.mIsBuildingList = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
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
  __int64 v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct ListViewItemSeed_o *enemySeed; // x1
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v50; // x24
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  unsigned int **v55; // x25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  QuestMaster_o *v62; // x0
  const MethodInfo *v63; // x2
  QuestEntity_o *QuestEntity; // x0
  const MethodInfo *v65; // x1
  QuestEntity_o *v66; // x26
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestInfoMaster_o *v69; // x26
  int64_t UserId; // x0
  __int64 v71; // x2
  __int64 v72; // x8
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct System_Int32_array *enemyIds; // x0
  __int64 v81; // x1
  System_String_array **v82; // x2
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x8
  __int64 v88; // x23
  __int64 v89; // x28
  unsigned __int64 v90; // x9
  unsigned __int64 v91; // x19
  System_String_array **v92; // x3
  __int64 v93; // x8
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  ViewEnemyEntity_o *v99; // x26
  unsigned int *v100; // x8
  System_String_o *v101; // x0
  System_String_o *v102; // x26
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  ViewEnemyEntity_o *v107; // x27
  unsigned int *v108; // x27
  System_Int32_array **v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  System_Action_o *v120; // x19
  QuestInformationListViewManager_o *v121; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v122; // [xsp+8h] [xbp-78h]
  int64_t v123; // [xsp+10h] [xbp-70h]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v125; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v126; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40F95C8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&AtlasManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_ViewEnemyMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    sub_B16FFC(&Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__, v23);
    sub_B16FFC(&QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo, v24);
    sub_B16FFC(&ViewEnemyEntity___TypeInfo, v25);
    sub_B16FFC(&ViewEnemyEntity_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_12679, v27);
    byte_40F95C8 = 1;
  }
  v125 = 0LL;
  v126 = 0LL;
  entity = 0LL;
  v28 = sub_B170CC(
          QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&questId,
          enemies,
          method);
  QuestInformationListViewManager___c__DisplayClass33_0___ctor(
    (QuestInformationListViewManager___c__DisplayClass33_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_68;
  *(_QWORD *)(v28 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v28 + 32) = enemies;
  v35 = (__int64 *)(v28 + 32);
  *(_DWORD *)(v28 + 24) = questId;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)enemies, v36, v37, v38, v39, v40, v41);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)enemySeed,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v50 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v122 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_string__TypeInfo,
                                                                          v51,
                                                                          v52,
                                                                          v53,
                                                                          v54);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v122,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v28 + 40) = 0LL;
  v55 = (unsigned int **)(v28 + 40);
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 40), 0LL, v56, v57, v58, v59, v60, v61);
  v62 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v62 )
    goto LABEL_68;
  QuestEntity = QuestMaster__getQuestEntity(v62, *(_DWORD *)(v28 + 24), v63);
  if ( !QuestEntity )
    goto LABEL_68;
  v66 = QuestEntity;
  if ( QuestEntity->fields.mIsPhaseDetailed || (PhaseDetail = QuestEntity__GetPhaseDetail(QuestEntity, v65)) == 0LL )
    p_flag = &v66->fields.flag;
  else
    p_flag = &PhaseDetail->fields.flag;
  v123 = *p_flag;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v121 = this;
  v69 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v69 )
    goto LABEL_68;
  UserQuestInfoMaster__TryGetEntity(v69, &entity, UserId, *(_DWORD *)(v28 + 24), 0LL);
  v72 = *(_QWORD *)(v28 + 32);
  if ( v72 )
  {
    v73 = (System_Int32_array **)sub_B17014(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v72 + 24), v71);
    *v55 = (unsigned int *)v73;
    sub_B16F98((BattleServantConfConponent_o *)(v28 + 40), v73, v74, v75, v76, v77, v78, v79);
    v87 = *v35;
    if ( !*v35 )
      goto LABEL_68;
    v88 = 8LL;
    v89 = 8LL;
    while ( 1 )
    {
      v90 = *(unsigned int *)(v87 + 24);
      v91 = v88 - 8;
      if ( v88 - 8 >= (int)v90 )
        break;
      if ( v91 >= v90 )
        goto LABEL_69;
      v92 = (System_String_array **)*(unsigned int *)(v87 + 4 * v88);
      if ( (int)v92 < 1 )
        goto LABEL_46;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_68;
      enemyIds = (struct System_Int32_array *)ViewEnemyMaster__TryGetEntity(
                                                Master_WarQuestSelectionMaster,
                                                &v125,
                                                *(_DWORD *)(v28 + 24),
                                                (int32_t)v92,
                                                0LL);
      if ( ((unsigned __int8)enemyIds & 1) == 0 )
        goto LABEL_46;
      if ( (v123 & 0x200000000000000LL) == 0 )
      {
        if ( !entity )
          goto LABEL_35;
        enemyIds = entity->fields.enemyIds;
        if ( !enemyIds || !*(_QWORD *)&enemyIds->max_length )
          goto LABEL_35;
        if ( !v125 )
          goto LABEL_68;
        enemyIds = (struct System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                                  (System_Collections_Generic_IEnumerable_TSource__o *)enemyIds,
                                                  v125->fields.enemyId,
                                                  (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)enemyIds & 1) == 0 )
        {
LABEL_35:
          v93 = *v35;
          if ( !*v35 )
            goto LABEL_68;
          if ( v91 >= *(unsigned int *)(v93 + 24) )
            goto LABEL_69;
          *(_DWORD *)(v93 + 4 * v88) = 0;
        }
      }
      if ( !v125 || !v50 )
        goto LABEL_68;
      enemyIds = (struct System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                v50,
                                                &v126,
                                                v125->fields.svtId,
                                                (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)enemyIds & 1) != 0 )
      {
        if ( !v126 )
          goto LABEL_68;
        enemyIds = (struct System_Int32_array *)ServantEntity__get_IsOrganization((ServantEntity_o *)v126, 0LL);
        if ( ((unsigned __int8)enemyIds & 1) == 0 )
          goto LABEL_45;
        if ( !v125 )
          goto LABEL_68;
        enemyIds = (struct System_Int32_array *)ViewEnemyEntity__IsIconIdUnique(v125, 0LL);
        if ( ((unsigned __int8)enemyIds & 1) == 0 )
        {
          if ( !v125 )
            goto LABEL_68;
          v101 = System_Int32__ToString((int)v125 + 36, 0LL);
          v102 = System_String__Concat_43743732((System_String_o *)StringLiteral_12679, v101, 0LL);
          if ( !v122 )
            goto LABEL_68;
          if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  v122,
                  (WarBoardManager_TaskList_o *)v102,
                  (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v122,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v102,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          v107 = v125;
          v99 = (ViewEnemyEntity_o *)sub_B170CC(ViewEnemyEntity_TypeInfo, v103, v104, v105, v106);
          ViewEnemyEntity___ctor_34371856(v99, v107, 0LL);
          v125 = v99;
          if ( !v99 )
            goto LABEL_68;
          v99->fields.iconId = 0;
        }
        else
        {
LABEL_45:
          v99 = v125;
        }
        v108 = *v55;
        if ( !*v55 )
          goto LABEL_68;
        if ( v99 )
        {
          enemyIds = (struct System_Int32_array *)sub_B170BC(v99, *(_QWORD *)(*(_QWORD *)v108 + 64LL));
          if ( !enemyIds )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( v91 >= v108[6] )
        {
LABEL_69:
          sub_B17100(enemyIds, v81, v82);
          sub_B170A0();
        }
        *(_QWORD *)&v108[v89] = v99;
        sub_B16F98((BattleServantConfConponent_o *)&v108[v89], (System_Int32_array **)v99, v82, v94, v95, v96, v97, v98);
      }
      else
      {
LABEL_46:
        v100 = *v55;
        if ( !*v55 )
          goto LABEL_68;
        if ( v91 >= v100[6] )
          goto LABEL_69;
        *(_QWORD *)&v100[v89] = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&v100[v89], 0LL, v82, v92, v83, v84, v85, v86);
      }
      v87 = *v35;
      ++v88;
      v89 += 2LL;
      if ( !*v35 )
        goto LABEL_68;
    }
  }
  if ( !v122 )
LABEL_68:
    sub_B170D4();
  v109 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v122,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
  v121->fields.loadedAssets = (struct System_String_array *)v109;
  sub_B16F98((BattleServantConfConponent_o *)&v121->fields.loadedAssets, v109, v110, v111, v112, v113, v114, v115);
  v121->fields.loading = 1;
  v120 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v116, v117, v118, v119);
  System_Action___ctor(
    v120,
    (Il2CppObject *)v28,
    Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v120, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_23957184(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x8
  unsigned __int64 v15; // x25
  int32_t v16; // w22
  ViewEnemyEntity_o *v17; // x24
  QuestInformationListViewItem_o *v18; // x0
  const MethodInfo *v19; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x23
  int32_t v21; // w1
  ViewEnemyEntity_o *v22; // x2
  bool v23; // w3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0

  if ( (byte_40F95C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    sub_B16FFC(&QuestInformationListViewItem_TypeInfo, v8);
    byte_40F95C9 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( enemies )
    {
      v14 = *(_QWORD *)&enemies->max_length;
      if ( (int)v14 >= 1 )
      {
        v15 = 0LL;
        v16 = 0;
        while ( 1 )
        {
          if ( v15 >= (unsigned int)v14 )
            goto LABEL_19;
          if ( !veEnts )
            goto LABEL_20;
          if ( v15 >= veEnts->max_length )
          {
LABEL_19:
            sub_B17100(v9, v10, v11);
            sub_B170A0();
          }
          v17 = veEnts->m_Items[v15];
          if ( enemies->m_Items[v15 + 1] <= 0 )
            break;
          if ( v17 )
          {
            v18 = (QuestInformationListViewItem_o *)sub_B170CC(
                                                      QuestInformationListViewItem_TypeInfo,
                                                      v10,
                                                      v11,
                                                      v12,
                                                      v13);
            v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)v18;
            v21 = v16;
            v22 = v17;
            v23 = 0;
LABEL_14:
            QuestInformationListViewItem___ctor_23945588(v18, v21, v22, v23, v19);
            itemList = this->fields.itemList;
            if ( !itemList )
LABEL_20:
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              v20,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v14) = enemies->max_length;
            ++v16;
          }
          if ( (__int64)++v15 >= (int)v14 )
            goto LABEL_17;
        }
        v18 = (QuestInformationListViewItem_o *)sub_B170CC(QuestInformationListViewItem_TypeInfo, v10, v11, v12, v13);
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)v18;
        v23 = 1;
        v21 = v16;
        v22 = v17;
        goto LABEL_14;
      }
    }
LABEL_17:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    this->fields.mIsBuildingList = 0;
  }
  else
  {
    QuestInformationListViewManager__DestroyList(this, *(const MethodInfo **)&questId);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestInformationListViewManager__CreateRewardItemList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t v5; // w19
  QuestInformationListViewManager_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  int32_t v11; // w26
  int32_t v12; // w19
  __int64 v13; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  int32_t v16; // [xsp+Ch] [xbp-54h]

  v5 = sum;
  v7 = this;
  if ( (byte_40F95C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, items);
    this = (QuestInformationListViewManager_o *)sub_B16FFC(&QuestInformationListViewItem_TypeInfo, v8);
    byte_40F95C5 = 1;
  }
  if ( items )
  {
    v9 = *(_QWORD *)&items->max_length;
    if ( (int)v9 >= 1 )
    {
      v16 = v5;
      v10 = 0LL;
      v11 = v5;
      do
      {
        if ( v10 >= (unsigned int)v9 )
        {
          sub_B17100(this, items, *(_QWORD *)&sum);
          sub_B170A0();
        }
        v12 = items->m_Items[v10 + 1];
        v13 = sub_B170CC(QuestInformationListViewItem_TypeInfo, items, *(_QWORD *)&sum, method, v4);
        ListViewItem___ctor_30173668((ListViewItem_o *)v13, v11 + v10, 0LL);
        *(_QWORD *)(v13 + 112) = 0x200000000LL;
        *(_DWORD *)(v13 + 124) = v12;
        if ( !v12 )
          *(_DWORD *)(v13 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7->fields.itemList;
        if ( !itemList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v9) = items->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)v9 );
      return v16 + v10;
    }
  }
  return v5;
}


void __fastcall QuestInformationListViewManager__CreateRewardList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        System_Int32_array *items,
        System_Int32_array *svts,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ListViewItemSeed_o *rewardSeed; // x1
  QuestInformationListViewManager_o *v13; // x0
  const MethodInfo *v14; // x4
  QuestInformationListViewManager_o *v15; // x0
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x3
  int32_t RewardSvtList; // w0
  const MethodInfo *v19; // x3
  int32_t RewardItemList; // w0
  const MethodInfo *v21; // x3
  int32_t v22; // w0
  const MethodInfo *v23; // x3
  System_Int32_array *itemsa; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *withoutQP; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *combineMaterials; // [xsp+10h] [xbp-30h] BYREF
  System_Int32_array *withoutCM; // [xsp+18h] [xbp-28h] BYREF

  combineMaterials = 0LL;
  withoutCM = 0LL;
  itemsa = 0LL;
  withoutQP = 0LL;
  rewardSeed = this->fields.rewardSeed;
  this->fields.mIsBuildingList = 1;
  this->fields.seed = rewardSeed;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)rewardSeed,
    (System_String_array **)items,
    (System_String_array **)svts,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    QuestInformationListViewManager__SplitSvtsWithCombineMaterial(v13, svts, &withoutCM, &combineMaterials, v14);
    QuestInformationListViewManager__SplitItemsWithQP(v15, items, &withoutQP, &itemsa, v16);
    RewardSvtList = QuestInformationListViewManager__CreateRewardSvtList(this, withoutCM, 0, v17);
    RewardItemList = QuestInformationListViewManager__CreateRewardItemList(this, withoutQP, RewardSvtList, v19);
    v22 = QuestInformationListViewManager__CreateRewardSvtList(this, combineMaterials, RewardItemList, v21);
    QuestInformationListViewManager__CreateRewardItemList(this, itemsa, v22, v23);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  this->fields.mIsBuildingList = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestInformationListViewManager__CreateRewardSvtList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t v5; // w19
  QuestInformationListViewManager_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  int32_t v11; // w26
  int32_t v12; // w19
  __int64 v13; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  int32_t v16; // [xsp+Ch] [xbp-54h]

  v5 = sum;
  v7 = this;
  if ( (byte_40F95C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, svts);
    this = (QuestInformationListViewManager_o *)sub_B16FFC(&QuestInformationListViewItem_TypeInfo, v8);
    byte_40F95C6 = 1;
  }
  if ( svts )
  {
    v9 = *(_QWORD *)&svts->max_length;
    if ( (int)v9 >= 1 )
    {
      v16 = v5;
      v10 = 0LL;
      v11 = v5;
      do
      {
        if ( v10 >= (unsigned int)v9 )
        {
          sub_B17100(this, svts, *(_QWORD *)&sum);
          sub_B170A0();
        }
        v12 = svts->m_Items[v10 + 1];
        v13 = sub_B170CC(QuestInformationListViewItem_TypeInfo, svts, *(_QWORD *)&sum, method, v4);
        ListViewItem___ctor_30173668((ListViewItem_o *)v13, v11 + v10, 0LL);
        *(_QWORD *)(v13 + 112) = 0x100000000LL;
        *(_DWORD *)(v13 + 124) = v12;
        if ( !v12 )
          *(_DWORD *)(v13 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7->fields.itemList;
        if ( !itemList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v9) = svts->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)v9 );
      return v16 + v10;
    }
  }
  return v5;
}


void __fastcall QuestInformationListViewManager__DestroyList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array *loadedAssets; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_40F95C2 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40F95C2 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    if ( loadedAssets )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage_29955940(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.loadedAssets, 0LL, v4, v5, v6, v7, v8, v9);
    }
    ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
    this->fields.mIsBuildingList = 0;
  }
}


bool __fastcall QuestInformationListViewManager__IsListBuilding(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mIsBuildingList;
}


bool __fastcall QuestInformationListViewManager__IsTouchable(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  return !this->fields.mIsResetReady && !this->fields.mIsBuildingList;
}


UnityEngine_Material_o *__fastcall QuestInformationListViewManager__NewChocoMaterialForSprite(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  BattleServantConfConponent_o *p_mChocoMaterialSp; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  BattleServantConfConponent_o *p_mChocoTex; // x20
  System_Int32_array **UIAtlas; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  QuestInformationListViewManager_c *v19; // x0
  UnityEngine_Shader_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Material_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40F95CD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Material_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&QuestInformationListViewManager_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B16FFC(&StringLiteral_15875, v6);
    sub_B16FFC(&StringLiteral_12773, v7);
    byte_40F95CD = 1;
  }
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_mChocoMaterialSp = (BattleServantConfConponent_o *)&this->fields.mChocoMaterialSp;
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_mChocoTex = (BattleServantConfConponent_o *)&this->fields.mChocoTex;
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0LL, 0LL) )
    {
      UIAtlas = (System_Int32_array **)UnityEngine_Resources__Load_UIAtlas_(
                                         (System_String_o *)StringLiteral_12773,
                                         (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B16F98(p_mChocoTex, UIAtlas, v13, v14, v15, v16, v17, v18);
    }
    v19 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v19 = QuestInformationListViewManager_TypeInfo;
    }
    v20 = UnityEngine_Shader__Find(v19->static_fields->CHOCO_SHADER_SP, 0LL);
    v25 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v21, v22, v23, v24);
    UnityEngine_Material___ctor(v25, v20, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v25;
    sub_B16F98(p_mChocoMaterialSp, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
    if ( !p_mChocoMaterialSp->klass )
      sub_B170D4();
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_15875,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall QuestInformationListViewManager__NewChocoMaterialForTexture(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  BattleServantConfConponent_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  BattleServantConfConponent_o *p_mChocoTex; // x20
  System_Int32_array **UIAtlas; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  QuestInformationListViewManager_c *v19; // x0
  UnityEngine_Shader_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Material_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40F95CC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Material_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&QuestInformationListViewManager_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B16FFC(&StringLiteral_15875, v6);
    sub_B16FFC(&StringLiteral_12773, v7);
    byte_40F95CC = 1;
  }
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_mChocoMaterialTx = (BattleServantConfConponent_o *)&this->fields.mChocoMaterialTx;
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_mChocoTex = (BattleServantConfConponent_o *)&this->fields.mChocoTex;
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0LL, 0LL) )
    {
      UIAtlas = (System_Int32_array **)UnityEngine_Resources__Load_UIAtlas_(
                                         (System_String_o *)StringLiteral_12773,
                                         (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B16F98(p_mChocoTex, UIAtlas, v13, v14, v15, v16, v17, v18);
    }
    v19 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v19 = QuestInformationListViewManager_TypeInfo;
    }
    v20 = UnityEngine_Shader__Find(v19->static_fields->CHOCO_SHADER_TX, 0LL);
    v25 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v21, v22, v23, v24);
    UnityEngine_Material___ctor(v25, v20, 0LL);
    p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)v25;
    sub_B16F98(p_mChocoMaterialTx, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
    if ( !p_mChocoMaterialTx->klass )
      sub_B170D4();
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_15875,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


void __fastcall QuestInformationListViewManager__OnClickListView(
        QuestInformationListViewManager_o *this,
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
  __int64 v14; // x1
  struct ListViewItem_o *linkItem; // x19
  __int64 v16; // x9
  int klass_high; // w8
  WebViewManager_o *v18; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *Entity; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  CommonUI_o *v25; // x20
  QuestInformationListViewManager___c_c *v26; // x8
  struct QuestInformationListViewManager___c_StaticFields *v27; // x9
  ItemDetailInfoComponent_CallbackFunc_o *_9__36_1; // x21
  Il2CppObject *v29; // x22
  struct QuestInformationListViewManager___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WebViewManager_o *Instance; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int32_t monitor_high; // w19
  CommonUI_o *v43; // x20
  QuestInformationListViewManager___c_c *v44; // x8
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__36_0; // x21
  Il2CppObject *v47; // x22
  struct QuestInformationListViewManager___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  QuestInformationListViewManager_o *v55; // x0
  const MethodInfo *v56; // x1

  if ( (byte_40F95CB & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B16FFC(&QuestInformationListViewItem_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__, v12);
    sub_B16FFC(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__, v13);
    sub_B16FFC(&QuestInformationListViewManager___c_TypeInfo, v14);
    byte_40F95CB = 1;
  }
  if ( this->fields.mIsResetReady )
    return;
  if ( !obj || (linkItem = obj->fields.linkItem) == 0LL )
LABEL_40:
    sub_B170D4();
  v16 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v16 - 1] != QuestInformationListViewItem_TypeInfo )
  {
    v55 = (QuestInformationListViewManager_o *)sub_B173C8(linkItem);
    QuestInformationListViewManager__IsListBuilding(v55, v56);
    return;
  }
  if ( !LODWORD(linkItem[1].klass) )
  {
    klass_high = HIDWORD(linkItem[1].klass);
    if ( klass_high == 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      monitor_high = HIDWORD(linkItem[1].monitor);
      v43 = (CommonUI_o *)Instance;
      v44 = QuestInformationListViewManager___c_TypeInfo;
      if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
        v44 = QuestInformationListViewManager___c_TypeInfo;
      }
      static_fields = v44->static_fields;
      _9__36_0 = static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        }
        v47 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                          ServantStatusDialog_EndDelegate_TypeInfo,
                                                          v38,
                                                          v39,
                                                          v40,
                                                          v41);
        ServantStatusDialog_EndDelegate___ctor(
          _9__36_0,
          v47,
          Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__,
          0LL);
        v48 = QuestInformationListViewManager___c_TypeInfo->static_fields;
        v48->__9__36_0 = _9__36_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v48->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
      }
      if ( v43 )
      {
        CommonUI__OpenServantStatusDialog_18251308(v43, 0, monitor_high, _9__36_0, 0LL);
        return;
      }
    }
    else
    {
      if ( klass_high != 2 )
        return;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v18 )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)v18,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( MasterData_WarQuestSelectionMaster )
        {
          Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     HIDWORD(linkItem[1].monitor),
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v25 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v26 = QuestInformationListViewManager___c_TypeInfo;
          if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
            v26 = QuestInformationListViewManager___c_TypeInfo;
          }
          v27 = v26->static_fields;
          _9__36_1 = v27->__9__36_1;
          if ( !_9__36_1 )
          {
            if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v26);
              v27 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            }
            v29 = (Il2CppObject *)v27->__9;
            _9__36_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                                   ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                                   v21,
                                                                   v22,
                                                                   v23,
                                                                   v24);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              _9__36_1,
              v29,
              Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__,
              0LL);
            v30 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            v30->__9__36_1 = _9__36_1;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v30->__9__36_1,
              (System_Int32_array **)_9__36_1,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
          }
          if ( v25 )
          {
            CommonUI__OpenItemDetailDialog(v25, Entity, _9__36_1, 50, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_40;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__SetObjectItem(
        QuestInformationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10
  const MethodInfo *v6; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F95CA & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewObject_TypeInfo, obj);
    byte_40F95CA = 1;
  }
  if ( !obj
    || (v5 = *(&QuestInformationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  QuestInformationListViewObject__Init(
    (QuestInformationListViewObject_o *)obj,
    3,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v6);
}


void __fastcall QuestInformationListViewManager__SetResetReady(
        QuestInformationListViewManager_o *this,
        bool onOff,
        const MethodInfo *method)
{
  this->fields.mIsResetReady = onOff;
}


void __fastcall QuestInformationListViewManager__SplitItemsWithQP(
        QuestInformationListViewManager_o *this,
        System_Int32_array *itms,
        System_Int32_array **withoutQP,
        System_Int32_array **qps,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_int__o *v18; // x22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x8
  ItemMaster_o *v24; // x24
  unsigned __int64 v25; // x25
  int32_t *v26; // x26
  int32_t v27; // w1
  const MethodInfo_2F104F0 *v28; // x2
  System_Collections_Generic_List_int__o *v29; // x0
  int32_t v30; // w1
  System_Int32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_40F95C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, itms);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40F95C4 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    itms,
                                                    withoutQP,
                                                    qps,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v18 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16,
                                                    v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_26;
  v23 = *(_QWORD *)&itms->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = (ItemMaster_o *)MasterData_WarQuestSelectionMaster;
    v25 = 0LL;
    v26 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v23 )
      {
LABEL_27:
        sub_B17100(MasterData_WarQuestSelectionMaster, v21, v22);
        sub_B170A0();
      }
      v30 = v26[v25];
      if ( !v30 )
        break;
      if ( v30 == -1 )
      {
        if ( !v18 )
          goto LABEL_26;
        v28 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v29 = v18;
LABEL_21:
        v27 = 0;
        goto LABEL_22;
      }
      if ( !v24 )
        goto LABEL_26;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)ItemMaster__isQP(v24, v30, 0LL);
      if ( v25 >= itms->max_length )
        goto LABEL_27;
      v27 = v26[v25];
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_26;
        v28 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v29 = v18;
      }
      else
      {
        if ( !v13 )
          goto LABEL_26;
        v28 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v29 = v13;
      }
LABEL_22:
      System_Collections_Generic_List_int___Add(v29, v27, v28);
      LODWORD(v23) = itms->max_length;
      if ( (__int64)++v25 >= (int)v23 )
        goto LABEL_23;
    }
    if ( !v13 )
      goto LABEL_26;
    v28 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
    v29 = v13;
    goto LABEL_21;
  }
LABEL_23:
  if ( !v13
    || (v31 = System_Collections_Generic_List_int___ToArray(
                v13,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v31,
        sub_B16F98((BattleServantConfConponent_o *)withoutQP, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37),
        !v18) )
  {
LABEL_26:
    sub_B170D4();
  }
  v38 = System_Collections_Generic_List_int___ToArray(
          v18,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v38;
  sub_B16F98((BattleServantConfConponent_o *)qps, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
}


void __fastcall QuestInformationListViewManager__SplitSvtsWithCombineMaterial(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_int__o *v19; // x22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x24
  unsigned __int64 v26; // x25
  int32_t *v27; // x26
  int32_t v28; // w2
  const MethodInfo_2F104F0 *v29; // x2
  System_Collections_Generic_List_int__o *v30; // x0
  int32_t v31; // w1
  System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F95C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, svts);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F95C3 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    svts,
                                                    withoutCM,
                                                    combineMaterials,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_29;
  v24 = *(_QWORD *)&svts->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v26 = 0LL;
    v27 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v24 )
      {
LABEL_30:
        sub_B17100(MasterData_WarQuestSelectionMaster, v22, v23);
        sub_B170A0();
      }
      v28 = v27[v26];
      if ( !v28 )
        break;
      if ( v28 == -1 )
      {
        if ( !v19 )
          goto LABEL_29;
        v29 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v30 = v19;
LABEL_14:
        v31 = 0;
        goto LABEL_25;
      }
      if ( !v25 )
        goto LABEL_29;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                          v25,
                                                                          &entity,
                                                                          v28,
                                                                          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
        goto LABEL_22;
      if ( !entity )
        goto LABEL_29;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)ServantEntity__get_IsCombineMaterial(
                                                                          (ServantEntity_o *)entity,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( v26 >= svts->max_length )
          goto LABEL_30;
        if ( !v19 )
          goto LABEL_29;
        v31 = v27[v26];
        v29 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v30 = v19;
      }
      else
      {
LABEL_22:
        if ( v26 >= svts->max_length )
          goto LABEL_30;
        if ( !v14 )
          goto LABEL_29;
        v31 = v27[v26];
        v29 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
        v30 = v14;
      }
LABEL_25:
      System_Collections_Generic_List_int___Add(v30, v31, v29);
      LODWORD(v24) = svts->max_length;
      if ( (__int64)++v26 >= (int)v24 )
        goto LABEL_26;
    }
    if ( !v14 )
      goto LABEL_29;
    v29 = (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__;
    v30 = v14;
    goto LABEL_14;
  }
LABEL_26:
  if ( !v14
    || (v32 = System_Collections_Generic_List_int___ToArray(
                v14,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v32,
        sub_B16F98((BattleServantConfConponent_o *)withoutCM, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38),
        !v19) )
  {
LABEL_29:
    sub_B170D4();
  }
  v39 = System_Collections_Generic_List_int___ToArray(
          v19,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v39;
  sub_B16F98((BattleServantConfConponent_o *)combineMaterials, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
}


void __fastcall QuestInformationListViewManager__add_callbackFunc(
        QuestInformationListViewManager_o *this,
        QuestInformationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct QuestInformationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  QuestInformationListViewManager_o *v10; // x0
  QuestInformationListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F95BC & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F95BC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (QuestInformationListViewManager_CallbackFunc_c *)v7->klass != QuestInformationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B173C8(v7);
  QuestInformationListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall QuestInformationListViewManager__add_callbackFunc2(
        QuestInformationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  QuestInformationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F95BE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F95BE = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B173C8(v7);
  QuestInformationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
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
  QuestInformationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F95C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F95C1 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (QuestInformationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(Component_srcLineSprite, v18);
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
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v14;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
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
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F95C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F95C0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v14;
}


void __fastcall QuestInformationListViewManager__remove_callbackFunc(
        QuestInformationListViewManager_o *this,
        QuestInformationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct QuestInformationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  QuestInformationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F95BD & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F95BD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (QuestInformationListViewManager_CallbackFunc_c *)v7->klass != QuestInformationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B173C8(v7);
  QuestInformationListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall QuestInformationListViewManager__remove_callbackFunc2(
        QuestInformationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  QuestInformationListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40F95BF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F95BF = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B173C8(v7);
  QuestInformationListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager_CallbackFunc___ctor(
        QuestInformationListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall QuestInformationListViewManager_CallbackFunc__BeginInvoke(
        QuestInformationListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_40FA30A & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    byte_40FA30A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall QuestInformationListViewManager_CallbackFunc__EndInvoke(
        QuestInformationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager_CallbackFunc__Invoke(
        QuestInformationListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  QuestInformationListViewManager_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  QuestInformationListViewManager_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  QuestInformationListViewManager_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (QuestInformationListViewManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)result, v20);
    goto LABEL_37;
  }
}


void __fastcall QuestInformationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA306 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewManager___c_TypeInfo, v1);
    byte_40FA306 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestInformationListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestInformationListViewManager___c___ctor(
        QuestInformationListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager___c___OnClickListView_b__36_0(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FA308 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FA308 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager___c___OnClickListView_b__36_1(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40FA307 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FA307 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass33_0___ctor(
        QuestInformationListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass33_0___CreateEnemyList_b__0(
        QuestInformationListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct QuestInformationListViewManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x19
  System_Action_o *_9__1; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FA309 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    sub_B16FFC(&Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__, v7);
    byte_40FA309 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953896(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass33_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  QuestInformationListViewManager__CreateEnemyList_23957184(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}