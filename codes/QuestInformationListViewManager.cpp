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

  if ( (byte_4213CEA & 1) == 0 )
  {
    sub_B0D8A4(&QuestInformationListViewManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_15061/*"Unlit/Transparent Colored_Choco"*/, v8);
    sub_B0D8A4(&StringLiteral_4553/*"Custom/SpriteWithMask_Choco"*/, v9);
    byte_4213CEA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15061/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15061/*"Unlit/Transparent Colored_Choco"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = QuestInformationListViewManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_4553/*"Custom/SpriteWithMask_Choco"*/;
  v12->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4553/*"Custom/SpriteWithMask_Choco"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->CHOCO_SHADER_SP, v13, v14, v15, v16, v17, v18, v19);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t v17; // w21
  __int64 v18; // x23
  int v19; // w24
  __int64 v20; // x22
  struct UIScrollView_o *scrollView; // x8

  if ( (byte_4213CE3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_B0D8A4(&QuestInformationListViewItem_TypeInfo, v12);
    byte_4213CE3 = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.mIsBuildingList = 1;
  this->fields.seed = rewardSeed;
  sub_B0D840(
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
      v17 = 0;
      while ( 1 )
      {
        v18 = sub_B0D974(QuestInformationListViewItem_TypeInfo, v15, v16);
        ListViewItem___ctor_23700744((ListViewItem_o *)v18, v17, 0LL);
        *(_DWORD *)(v18 + 124) = 0;
        *(_QWORD *)(v18 + 112) = 0LL;
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( ++v17 >= itemCnt )
          goto LABEL_10;
      }
LABEL_16:
      sub_B0D97C(itemList);
    }
    v17 = 0;
LABEL_10:
    if ( svtCnt >= 1 )
    {
      v19 = 0;
      do
      {
        v20 = sub_B0D974(QuestInformationListViewItem_TypeInfo, v15, v16);
        ListViewItem___ctor_23700744((ListViewItem_o *)v20, v17 + v19, 0LL);
        *(_DWORD *)(v20 + 124) = 0;
        *(_QWORD *)(v20 + 112) = 0LL;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( ++v19 < svtCnt );
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
  __int64 QuestEntity; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct ListViewItemSeed_o *enemySeed; // x1
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x24
  __int64 v52; // x1
  __int64 v53; // x2
  unsigned int **v54; // x25
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  __int64 v63; // x26
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestInfoMaster_o *v66; // x26
  __int64 v67; // x8
  System_Int32_array **v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x8
  __int64 v81; // x23
  __int64 v82; // x28
  unsigned __int64 v83; // x9
  unsigned __int64 v84; // x19
  System_String_array **v85; // x3
  __int64 v86; // x8
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  ViewEnemyEntity_o *v93; // x26
  unsigned int *v94; // x8
  System_String_o *v95; // x0
  System_String_o *v96; // x26
  __int64 v97; // x1
  __int64 v98; // x2
  ViewEnemyEntity_o *v99; // x27
  unsigned int *v100; // x27
  System_Int32_array **v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  __int64 v108; // x1
  __int64 v109; // x2
  System_Action_o *v110; // x19
  __int64 v111; // x0
  __int64 v112; // x0
  QuestInformationListViewManager_o *v113; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v114; // [xsp+8h] [xbp-78h]
  int64_t v115; // [xsp+10h] [xbp-70h]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v117; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v118; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4213CE4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&AtlasManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_ViewEnemyMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_B0D8A4(&NetworkManager_TypeInfo, v22);
    sub_B0D8A4(&Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__, v23);
    sub_B0D8A4(&QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo, v24);
    sub_B0D8A4(&ViewEnemyEntity___TypeInfo, v25);
    sub_B0D8A4(&ViewEnemyEntity_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_12779/*"Servants/Commands/"*/, v27);
    byte_4213CE4 = 1;
  }
  v117 = 0LL;
  v118 = 0LL;
  entity = 0LL;
  v28 = sub_B0D974(
          QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&questId);
  QuestInformationListViewManager___c__DisplayClass33_0___ctor(
    (QuestInformationListViewManager___c__DisplayClass33_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_68;
  *(_QWORD *)(v28 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v28 + 32) = enemies;
  v36 = (__int64 *)(v28 + 32);
  *(_DWORD *)(v28 + 24) = questId;
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)enemies, v37, v38, v39, v40, v41, v42);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)enemySeed,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  v114 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_string__TypeInfo,
                                                                          v52,
                                                                          v53);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v114,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v28 + 40) = 0LL;
  v54 = (unsigned int **)(v28 + 40);
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 40), 0LL, v55, v56, v57, v58, v59, v60);
  QuestEntity = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_68;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v28 + 24), v61);
  if ( !QuestEntity )
    goto LABEL_68;
  v63 = QuestEntity;
  if ( *(_BYTE *)(QuestEntity + 172)
    || (PhaseDetail = QuestEntity__GetPhaseDetail((QuestEntity_o *)QuestEntity, v62)) == 0LL )
  {
    p_flag = (int64_t *)(v63 + 144);
  }
  else
  {
    p_flag = &PhaseDetail->fields.flag;
  }
  v115 = *p_flag;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v113 = this;
  v66 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v66 )
    goto LABEL_68;
  UserQuestInfoMaster__TryGetEntity(v66, &entity, QuestEntity, *(_DWORD *)(v28 + 24), 0LL);
  v67 = *(_QWORD *)(v28 + 32);
  if ( v67 )
  {
    v68 = (System_Int32_array **)sub_B0D8BC(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v67 + 24));
    *v54 = (unsigned int *)v68;
    sub_B0D840((BattleServantConfConponent_o *)(v28 + 40), v68, v69, v70, v71, v72, v73, v74);
    v80 = *v36;
    if ( !*v36 )
      goto LABEL_68;
    v81 = 8LL;
    v82 = 8LL;
    while ( 1 )
    {
      v83 = *(unsigned int *)(v80 + 24);
      v84 = v81 - 8;
      if ( v81 - 8 >= (int)v83 )
        break;
      if ( v84 >= v83 )
        goto LABEL_69;
      v85 = (System_String_array **)*(unsigned int *)(v80 + 4 * v81);
      if ( (int)v85 < 1 )
        goto LABEL_46;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_68;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      Master_WarQuestSelectionMaster,
                      &v117,
                      *(_DWORD *)(v28 + 24),
                      (int32_t)v85,
                      0LL);
      if ( (QuestEntity & 1) == 0 )
        goto LABEL_46;
      if ( (v115 & 0x200000000000000LL) == 0 )
      {
        if ( !entity )
          goto LABEL_35;
        QuestEntity = (__int64)entity->fields.enemyIds;
        if ( !QuestEntity || !*(_QWORD *)(QuestEntity + 24) )
          goto LABEL_35;
        if ( !v117 )
          goto LABEL_68;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v117->fields.enemyId,
                        (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_35:
          v86 = *v36;
          if ( !*v36 )
            goto LABEL_68;
          if ( v84 >= *(unsigned int *)(v86 + 24) )
            goto LABEL_69;
          *(_DWORD *)(v86 + 4 * v81) = 0;
        }
      }
      if ( !v117 || !v51 )
        goto LABEL_68;
      QuestEntity = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      v51,
                      &v118,
                      v117->fields.svtId,
                      (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v118;
        if ( !v118 )
          goto LABEL_68;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v118, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_45;
        QuestEntity = (__int64)v117;
        if ( !v117 )
          goto LABEL_68;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v117, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v117 )
            goto LABEL_68;
          v95 = System_Int32__ToString((int)v117 + 36, 0LL);
          v96 = System_String__Concat_43849904((System_String_o *)StringLiteral_12779/*"Servants/Commands/"*/, v95, 0LL);
          QuestEntity = (__int64)v114;
          if ( !v114 )
            goto LABEL_68;
          if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  v114,
                  (WarBoardManager_TaskList_o *)v96,
                  (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v114,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v96,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
          v99 = v117;
          v93 = (ViewEnemyEntity_o *)sub_B0D974(ViewEnemyEntity_TypeInfo, v97, v98);
          ViewEnemyEntity___ctor_34343148(v93, v99, 0LL);
          v117 = v93;
          if ( !v93 )
            goto LABEL_68;
          v93->fields.iconId = 0;
        }
        else
        {
LABEL_45:
          v93 = v117;
        }
        v100 = *v54;
        if ( !*v54 )
          goto LABEL_68;
        if ( v93 )
        {
          QuestEntity = sub_B0D964(v93, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
          if ( !QuestEntity )
          {
            v112 = sub_B0D99C(0LL);
            sub_B0D948(v112, 0LL);
          }
        }
        if ( v84 >= v100[6] )
        {
LABEL_69:
          v111 = sub_B0D9A8(QuestEntity);
          sub_B0D948(v111, 0LL);
        }
        *(_QWORD *)&v100[v82] = v93;
        sub_B0D840((BattleServantConfConponent_o *)&v100[v82], (System_Int32_array **)v93, v87, v88, v89, v90, v91, v92);
      }
      else
      {
LABEL_46:
        v94 = *v54;
        if ( !*v54 )
          goto LABEL_68;
        if ( v84 >= v94[6] )
          goto LABEL_69;
        *(_QWORD *)&v94[v82] = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&v94[v82], 0LL, v75, v85, v76, v77, v78, v79);
      }
      v80 = *v36;
      ++v81;
      v82 += 2LL;
      if ( !*v36 )
        goto LABEL_68;
    }
  }
  QuestEntity = (__int64)v114;
  if ( !v114 )
LABEL_68:
    sub_B0D97C(QuestEntity);
  v101 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v114,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
  v113->fields.loadedAssets = (struct System_String_array *)v101;
  sub_B0D840((BattleServantConfConponent_o *)&v113->fields.loadedAssets, v101, v102, v103, v104, v105, v106, v107);
  v113->fields.loading = 1;
  v110 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v108, v109);
  System_Action___ctor(
    v110,
    (Il2CppObject *)v28,
    Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v110, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_23279316(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x25
  int32_t v14; // w22
  ViewEnemyEntity_o *v15; // x24
  QuestInformationListViewItem_o *v16; // x0
  const MethodInfo *v17; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x23
  int32_t v19; // w1
  ViewEnemyEntity_o *v20; // x2
  bool v21; // w3
  __int64 v22; // x0

  if ( (byte_4213CE5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    sub_B0D8A4(&QuestInformationListViewItem_TypeInfo, v8);
    byte_4213CE5 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( enemies )
    {
      v12 = *(_QWORD *)&enemies->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = 0LL;
        v14 = 0;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)v12 )
            goto LABEL_19;
          if ( !veEnts )
            goto LABEL_20;
          if ( v13 >= veEnts->max_length )
          {
LABEL_19:
            v22 = sub_B0D9A8(itemList);
            sub_B0D948(v22, 0LL);
          }
          v15 = veEnts->m_Items[v13];
          if ( enemies->m_Items[v13 + 1] <= 0 )
            break;
          if ( v15 )
          {
            v16 = (QuestInformationListViewItem_o *)sub_B0D974(QuestInformationListViewItem_TypeInfo, v10, v11);
            v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16;
            v19 = v14;
            v20 = v15;
            v21 = 0;
LABEL_14:
            QuestInformationListViewItem___ctor_23267720(v16, v19, v20, v21, v17);
            itemList = this->fields.itemList;
            if ( !itemList )
LABEL_20:
              sub_B0D97C(itemList);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              v18,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v12) = enemies->max_length;
            ++v14;
          }
          if ( (__int64)++v13 >= (int)v12 )
            goto LABEL_17;
        }
        v16 = (QuestInformationListViewItem_o *)sub_B0D974(QuestInformationListViewItem_TypeInfo, v10, v11);
        v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16;
        v21 = 1;
        v19 = v14;
        v20 = v15;
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
  int32_t v4; // w19
  QuestInformationListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w26
  int32_t v11; // w19
  __int64 v12; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-54h]

  v4 = sum;
  v6 = this;
  if ( (byte_4213CE1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, items);
    this = (QuestInformationListViewManager_o *)sub_B0D8A4(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4213CE1 = 1;
  }
  if ( items )
  {
    v8 = *(_QWORD *)&items->max_length;
    if ( (int)v8 >= 1 )
    {
      v16 = v4;
      v9 = 0LL;
      v10 = v4;
      do
      {
        if ( v9 >= (unsigned int)v8 )
        {
          v15 = sub_B0D9A8(this);
          sub_B0D948(v15, 0LL);
        }
        v11 = items->m_Items[v9 + 1];
        v12 = sub_B0D974(QuestInformationListViewItem_TypeInfo, items, *(_QWORD *)&sum);
        ListViewItem___ctor_23700744((ListViewItem_o *)v12, v10 + v9, 0LL);
        *(_QWORD *)(v12 + 112) = 0x200000000LL;
        *(_DWORD *)(v12 + 124) = v11;
        if ( !v11 )
          *(_DWORD *)(v12 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.itemList;
        if ( !itemList )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v8) = items->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      return v16 + v9;
    }
  }
  return v4;
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
  sub_B0D840(
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
  int32_t v4; // w19
  QuestInformationListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w26
  int32_t v11; // w19
  __int64 v12; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-54h]

  v4 = sum;
  v6 = this;
  if ( (byte_4213CE2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, svts);
    this = (QuestInformationListViewManager_o *)sub_B0D8A4(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4213CE2 = 1;
  }
  if ( svts )
  {
    v8 = *(_QWORD *)&svts->max_length;
    if ( (int)v8 >= 1 )
    {
      v16 = v4;
      v9 = 0LL;
      v10 = v4;
      do
      {
        if ( v9 >= (unsigned int)v8 )
        {
          v15 = sub_B0D9A8(this);
          sub_B0D948(v15, 0LL);
        }
        v11 = svts->m_Items[v9 + 1];
        v12 = sub_B0D974(QuestInformationListViewItem_TypeInfo, svts, *(_QWORD *)&sum);
        ListViewItem___ctor_23700744((ListViewItem_o *)v12, v10 + v9, 0LL);
        *(_QWORD *)(v12 + 112) = 0x100000000LL;
        *(_DWORD *)(v12 + 124) = v11;
        if ( !v11 )
          *(_DWORD *)(v12 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.itemList;
        if ( !itemList )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v8) = svts->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      return v16 + v9;
    }
  }
  return v4;
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

  if ( (byte_4213CDE & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_4213CDE = 1;
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
      AssetManager__releaseAssetStorage_29524964(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.loadedAssets, 0LL, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_Material_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4213CE9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&QuestInformationListViewManager_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B0D8A4(&StringLiteral_15986/*"_ChocoTex"*/, v6);
    sub_B0D8A4(&StringLiteral_12873/*"Shaders/ChocoMap"*/, v7);
    byte_4213CE9 = 1;
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
                                         (System_String_o *)StringLiteral_12873/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B0D840(p_mChocoTex, UIAtlas, v13, v14, v15, v16, v17, v18);
    }
    v19 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v19 = QuestInformationListViewManager_TypeInfo;
    }
    v20 = UnityEngine_Shader__Find(v19->static_fields->CHOCO_SHADER_SP, 0LL);
    v23 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v21, v22);
    UnityEngine_Material___ctor(v23, v20, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v23;
    sub_B0D840(p_mChocoMaterialSp, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
    if ( !p_mChocoMaterialSp->klass )
      sub_B0D97C(0LL);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_15986/*"_ChocoTex"*/,
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
  UnityEngine_Material_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4213CE8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&QuestInformationListViewManager_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B0D8A4(&StringLiteral_15986/*"_ChocoTex"*/, v6);
    sub_B0D8A4(&StringLiteral_12873/*"Shaders/ChocoMap"*/, v7);
    byte_4213CE8 = 1;
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
                                         (System_String_o *)StringLiteral_12873/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B0D840(p_mChocoTex, UIAtlas, v13, v14, v15, v16, v17, v18);
    }
    v19 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v19 = QuestInformationListViewManager_TypeInfo;
    }
    v20 = UnityEngine_Shader__Find(v19->static_fields->CHOCO_SHADER_TX, 0LL);
    v23 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v21, v22);
    UnityEngine_Material___ctor(v23, v20, 0LL);
    p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)v23;
    sub_B0D840(p_mChocoMaterialTx, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
    if ( !p_mChocoMaterialTx->klass )
      sub_B0D97C(0LL);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_15986/*"_ChocoTex"*/,
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
  QuestInformationListViewManager_o *v4; // x20
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
  ItemEntity_o *Entity; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  CommonUI_o *v21; // x20
  QuestInformationListViewManager___c_c *v22; // x8
  struct QuestInformationListViewManager___c_StaticFields *v23; // x9
  ItemDetailInfoComponent_CallbackFunc_o *_9__36_1; // x21
  Il2CppObject *v25; // x22
  struct QuestInformationListViewManager___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t monitor_high; // w19
  CommonUI_o *v36; // x20
  QuestInformationListViewManager___c_c *v37; // x8
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__36_0; // x21
  Il2CppObject *v40; // x22
  struct QuestInformationListViewManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  QuestInformationListViewManager_o *v48; // x0
  const MethodInfo *v49; // x1

  v4 = this;
  if ( (byte_4213CE7 & 1) == 0 )
  {
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B0D8A4(&QuestInformationListViewItem_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    sub_B0D8A4(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__, v12);
    sub_B0D8A4(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__, v13);
    this = (QuestInformationListViewManager_o *)sub_B0D8A4(&QuestInformationListViewManager___c_TypeInfo, v14);
    byte_4213CE7 = 1;
  }
  if ( v4->fields.mIsResetReady )
    return;
  if ( !obj || (linkItem = obj->fields.linkItem) == 0LL )
LABEL_40:
    sub_B0D97C(this);
  v16 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v16 - 1] != QuestInformationListViewItem_TypeInfo )
  {
    v48 = (QuestInformationListViewManager_o *)sub_B0DC70(linkItem);
    QuestInformationListViewManager__IsListBuilding(v48, v49);
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
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      monitor_high = HIDWORD(linkItem[1].monitor);
      v36 = (CommonUI_o *)this;
      v37 = QuestInformationListViewManager___c_TypeInfo;
      if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
        v37 = QuestInformationListViewManager___c_TypeInfo;
      }
      static_fields = v37->static_fields;
      _9__36_0 = static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v33, v34);
        ServantStatusDialog_EndDelegate___ctor(
          _9__36_0,
          v40,
          Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__,
          0LL);
        v41 = QuestInformationListViewManager___c_TypeInfo->static_fields;
        v41->__9__36_0 = _9__36_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v41->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      if ( v36 )
      {
        CommonUI__OpenServantStatusDialog_17030764(v36, 0, monitor_high, _9__36_0, 0LL);
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
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (QuestInformationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( this )
        {
          Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     HIDWORD(linkItem[1].monitor),
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = (CommonUI_o *)this;
          v22 = QuestInformationListViewManager___c_TypeInfo;
          if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
            v22 = QuestInformationListViewManager___c_TypeInfo;
          }
          v23 = v22->static_fields;
          _9__36_1 = v23->__9__36_1;
          if ( !_9__36_1 )
          {
            if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v22);
              v23 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            }
            v25 = (Il2CppObject *)v23->__9;
            _9__36_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(
                                                                   ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                                   v19,
                                                                   v20);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              _9__36_1,
              v25,
              Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__,
              0LL);
            v26 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            v26->__9__36_1 = _9__36_1;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v26->__9__36_1,
              (System_Int32_array **)_9__36_1,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
          }
          if ( v21 )
          {
            CommonUI__OpenItemDetailDialog(v21, Entity, _9__36_1, 50, 0LL);
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

  if ( (byte_4213CE6 & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_B0D8A4(&QuestInformationListViewObject_TypeInfo, obj);
    byte_4213CE6 = 1;
  }
  if ( !obj
    || (v5 = *(&QuestInformationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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
  System_Collections_Generic_List_int__o *v16; // x22
  DataManager_o *Instance; // x0
  __int64 v18; // x8
  ItemMaster_o *v19; // x24
  unsigned __int64 v20; // x25
  int32_t *v21; // x26
  int32_t v22; // w1
  const MethodInfo_2FAFF00 *v23; // x2
  System_Collections_Generic_List_int__o *v24; // x0
  int32_t v25; // w1
  System_Int32_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0

  if ( (byte_4213CE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, itms);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4213CE0 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    itms,
                                                    withoutQP);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_26;
  v18 = *(_QWORD *)&itms->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (ItemMaster_o *)Instance;
    v20 = 0LL;
    v21 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
      {
LABEL_27:
        v40 = sub_B0D9A8(Instance);
        sub_B0D948(v40, 0LL);
      }
      v25 = v21[v20];
      if ( !v25 )
        break;
      if ( v25 == -1 )
      {
        if ( !v16 )
          goto LABEL_26;
        v23 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v24 = v16;
LABEL_21:
        v22 = 0;
        goto LABEL_22;
      }
      if ( !v19 )
        goto LABEL_26;
      Instance = (DataManager_o *)ItemMaster__isQP(v19, v25, 0LL);
      if ( v20 >= itms->max_length )
        goto LABEL_27;
      v22 = v21[v20];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_26;
        v23 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v24 = v16;
      }
      else
      {
        if ( !v13 )
          goto LABEL_26;
        v23 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v24 = v13;
      }
LABEL_22:
      System_Collections_Generic_List_int___Add(v24, v22, v23);
      LODWORD(v18) = itms->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_23;
    }
    if ( !v13 )
      goto LABEL_26;
    v23 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
    v24 = v13;
    goto LABEL_21;
  }
LABEL_23:
  if ( !v13
    || (v26 = System_Collections_Generic_List_int___ToArray(
                v13,
                (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v26,
        sub_B0D840((BattleServantConfConponent_o *)withoutQP, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32),
        !v16) )
  {
LABEL_26:
    sub_B0D97C(Instance);
  }
  v33 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v33;
  sub_B0D840((BattleServantConfConponent_o *)qps, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
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
  System_Collections_Generic_List_int__o *v17; // x22
  DataManager_o *Instance; // x0
  __int64 v19; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x24
  unsigned __int64 v21; // x25
  int32_t *v22; // x26
  int32_t v23; // w2
  const MethodInfo_2FAFF00 *v24; // x2
  System_Collections_Generic_List_int__o *v25; // x0
  int32_t v26; // w1
  System_Int32_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4213CDF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, svts);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4213CDF = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    svts,
                                                    withoutCM);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v15, v16);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_29;
  v19 = *(_QWORD *)&svts->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v21 = 0LL;
    v22 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
      {
LABEL_30:
        v41 = sub_B0D9A8(Instance);
        sub_B0D948(v41, 0LL);
      }
      v23 = v22[v21];
      if ( !v23 )
        break;
      if ( v23 == -1 )
      {
        if ( !v17 )
          goto LABEL_29;
        v24 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v25 = v17;
LABEL_14:
        v26 = 0;
        goto LABEL_25;
      }
      if ( !v20 )
        goto LABEL_29;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v20,
                                    &entity,
                                    v23,
                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_22;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_29;
      Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v21 >= svts->max_length )
          goto LABEL_30;
        if ( !v17 )
          goto LABEL_29;
        v26 = v22[v21];
        v24 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v25 = v17;
      }
      else
      {
LABEL_22:
        if ( v21 >= svts->max_length )
          goto LABEL_30;
        if ( !v14 )
          goto LABEL_29;
        v26 = v22[v21];
        v24 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
        v25 = v14;
      }
LABEL_25:
      System_Collections_Generic_List_int___Add(v25, v26, v24);
      LODWORD(v19) = svts->max_length;
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_26;
    }
    if ( !v14 )
      goto LABEL_29;
    v24 = (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__;
    v25 = v14;
    goto LABEL_14;
  }
LABEL_26:
  if ( !v14
    || (v27 = System_Collections_Generic_List_int___ToArray(
                v14,
                (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v27,
        sub_B0D840((BattleServantConfConponent_o *)withoutCM, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33),
        !v17) )
  {
LABEL_29:
    sub_B0D97C(Instance);
  }
  v34 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v34;
  sub_B0D840((BattleServantConfConponent_o *)combineMaterials, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
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

  if ( (byte_4213CD8 & 1) == 0 )
  {
    sub_B0D8A4(&QuestInformationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4213CD8 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4213CDA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4213CDA = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B0DC70(v7);
  QuestInformationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
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
  QuestInformationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4213CDD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4213CDD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
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
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (QuestInformationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(Component_srcLineSprite, v17);
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
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v12;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
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
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4213CDC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4213CDC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v12;
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

  if ( (byte_4213CD9 & 1) == 0 )
  {
    sub_B0D8A4(&QuestInformationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4213CD9 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4213CDB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4213CDB = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B0DC70(v7);
  QuestInformationListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager_CallbackFunc___ctor(
        QuestInformationListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  if ( (byte_42124D6 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&result);
    byte_42124D6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall QuestInformationListViewManager_CallbackFunc__EndInvoke(
        QuestInformationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager_CallbackFunc__Invoke(
        QuestInformationListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  QuestInformationListViewManager_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  QuestInformationListViewManager_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  QuestInformationListViewManager_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (QuestInformationListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, (unsigned int)result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)result, v21);
    goto LABEL_37;
  }
}


void __fastcall QuestInformationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42124D2 & 1) == 0 )
  {
    sub_B0D8A4(&QuestInformationListViewManager___c_TypeInfo, v1);
    byte_42124D2 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestInformationListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestInformationListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_42124D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_42124D4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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

  if ( (byte_42124D3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42124D3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  System_String_array *methodPtr; // x19
  System_Action_o *v8; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_42124D5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v4);
    this = (QuestInformationListViewManager___c__DisplayClass33_0_o *)sub_B0D8A4(
                                                                        &Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__,
                                                                        v5);
    byte_42124D5 = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    sub_B0D97C(this);
  methodPtr = (System_String_array *)klass->vtable[4].methodPtr;
  v8 = (System_Action_o *)v3[3].klass;
  if ( !v8 )
  {
    v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v8,
      v3,
      Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__,
      0LL);
    v3[3].klass = (Il2CppClass *)v8;
    sub_B0D840(&v3[3], v8);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29522920(methodPtr, v8, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass33_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  QuestInformationListViewManager__CreateEnemyList_23279316(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}