void __fastcall QuestInformationListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct QuestInformationListViewManager_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E8B0C & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_15173/*"Unlit/Transparent Colored_Choco"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_4610/*"Custom/SpriteWithMask_Choco"*/, v11, v12, v13);
    byte_42E8B0C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_15173/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15173/*"Unlit/Transparent Colored_Choco"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = QuestInformationListViewManager_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_4610/*"Custom/SpriteWithMask_Choco"*/;
  v16->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4610/*"Custom/SpriteWithMask_Choco"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->CHOCO_SHADER_SP, v17, v18, v19, v20, v21, v22, v23);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct ListViewItemSeed_o *rewardSeed; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v17; // x1
  int32_t v18; // w21
  __int64 v19; // x23
  int v20; // w24
  __int64 v21; // x22
  struct UIScrollView_o *scrollView; // x8

  if ( (byte_42E8B05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, kind, itemCnt, *(_QWORD *)&svtCnt);
    sub_B5D5C4(&QuestInformationListViewItem_TypeInfo, v12, v13, v14);
    byte_42E8B05 = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.mIsBuildingList = 1;
  this->fields.seed = rewardSeed;
  sub_B5D560(
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
        v19 = sub_B5D694(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_23901828((ListViewItem_o *)v19, v18, 0LL);
        *(_DWORD *)(v19 + 124) = 0;
        *(_QWORD *)(v19 + 112) = 0LL;
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( ++v18 >= itemCnt )
          goto LABEL_10;
      }
LABEL_16:
      sub_B5D69C(itemList, v17);
    }
    v18 = 0;
LABEL_10:
    if ( svtCnt >= 1 )
    {
      v20 = 0;
      do
      {
        v21 = sub_B5D694(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_23901828((ListViewItem_o *)v21, v18 + v20, 0LL);
        *(_DWORD *)(v21 + 124) = 0;
        *(_QWORD *)(v21 + 112) = 0LL;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( ++v20 < svtCnt );
    }
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_16;
  HIDWORD(scrollView->fields.onDragStarted) = 1;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  this->fields.mIsBuildingList = 0;
}


void __fastcall QuestInformationListViewManager__CreateEnemyList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
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
  __int64 v66; // x20
  __int64 QuestEntity; // x0
  __int64 v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 *v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct ListViewItemSeed_o *enemySeed; // x1
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v90; // x24
  unsigned int **v91; // x25
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x2
  bool HasFlag; // w28
  UserQuestInfoMaster_o *v101; // x27
  __int64 v102; // x8
  System_Int32_array **v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_array **v110; // x2
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  __int64 v115; // x8
  __int64 v116; // x23
  __int64 v117; // x26
  unsigned __int64 v118; // x9
  unsigned __int64 v119; // x19
  System_String_array **v120; // x3
  __int64 v121; // x8
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  ViewEnemyEntity_o *v128; // x27
  unsigned int *v129; // x8
  System_String_o *v130; // x0
  System_String_o *v131; // x27
  ViewEnemyEntity_o *v132; // x28
  unsigned int *v133; // x28
  System_Int32_array **v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Action_o *v141; // x19
  __int64 v142; // x0
  __int64 v143; // x0
  QuestInformationListViewManager_o *v144; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v145; // [xsp+8h] [xbp-78h]
  bool v146; // [xsp+14h] [xbp-6Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v148; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v149; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E8B06 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, questId, enemies);
    sub_B5D5C4(&AtlasManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_ViewEnemyMaster___, v21, v22, v23);
    sub_B5D5C4(&DataManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&NetworkManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__, v51, v52, v53);
    sub_B5D5C4(&QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&ViewEnemyEntity___TypeInfo, v57, v58, v59);
    sub_B5D5C4(&ViewEnemyEntity_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12891/*"Servants/Commands/"*/, v63, v64, v65);
    byte_42E8B06 = 1;
  }
  v148 = 0LL;
  v149 = 0LL;
  entity = 0LL;
  v66 = sub_B5D694(QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo);
  QuestInformationListViewManager___c__DisplayClass33_0___ctor(
    (QuestInformationListViewManager___c__DisplayClass33_0_o *)v66,
    0LL);
  if ( !v66 )
    goto LABEL_64;
  *(_QWORD *)(v66 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 16), (System_Int32_array **)this, v69, v70, v71, v72, v73, v74);
  *(_QWORD *)(v66 + 32) = enemies;
  v75 = (__int64 *)(v66 + 32);
  *(_DWORD *)(v66 + 24) = questId;
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 32), (System_Int32_array **)enemies, v76, v77, v78, v79, v80, v81);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)enemySeed,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v90 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v145 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v145,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v66 + 40) = 0LL;
  v91 = (unsigned int **)(v66 + 40);
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 40), 0LL, v92, v93, v94, v95, v96, v97);
  QuestEntity = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_64;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v66 + 24), v98);
  if ( !QuestEntity )
    goto LABEL_64;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, v99);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v144 = this;
  v101 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v101 )
    goto LABEL_64;
  UserQuestInfoMaster__TryGetEntity(v101, &entity, QuestEntity, *(_DWORD *)(v66 + 24), 0LL);
  v102 = *(_QWORD *)(v66 + 32);
  if ( v102 )
  {
    v103 = (System_Int32_array **)sub_B5D5DC(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v102 + 24));
    *v91 = (unsigned int *)v103;
    sub_B5D560((BattleServantConfConponent_o *)(v66 + 40), v103, v104, v105, v106, v107, v108, v109);
    v115 = *v75;
    if ( !*v75 )
      goto LABEL_64;
    v116 = 8LL;
    v117 = 8LL;
    v146 = HasFlag;
    while ( 1 )
    {
      v118 = *(unsigned int *)(v115 + 24);
      v119 = v116 - 8;
      if ( v116 - 8 >= (int)v118 )
        break;
      if ( v119 >= v118 )
        goto LABEL_65;
      v120 = (System_String_array **)*(unsigned int *)(v115 + 4 * v116);
      if ( (int)v120 < 1 )
        goto LABEL_42;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_64;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      Master_WarQuestSelectionMaster,
                      &v148,
                      *(_DWORD *)(v66 + 24),
                      (int32_t)v120,
                      0LL);
      if ( (QuestEntity & 1) == 0 )
        goto LABEL_42;
      if ( !HasFlag )
      {
        if ( !entity )
          goto LABEL_31;
        QuestEntity = (__int64)entity->fields.enemyIds;
        if ( !QuestEntity || !*(_QWORD *)(QuestEntity + 24) )
          goto LABEL_31;
        if ( !v148 )
          goto LABEL_64;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v148->fields.enemyId,
                        (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_31:
          v121 = *v75;
          if ( !*v75 )
            goto LABEL_64;
          if ( v119 >= *(unsigned int *)(v121 + 24) )
            goto LABEL_65;
          *(_DWORD *)(v121 + 4 * v116) = 0;
        }
      }
      if ( !v148 || !v90 )
        goto LABEL_64;
      QuestEntity = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      v90,
                      &v149,
                      v148->fields.svtId,
                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v149;
        if ( !v149 )
          goto LABEL_64;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v149, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_41;
        QuestEntity = (__int64)v148;
        if ( !v148 )
          goto LABEL_64;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v148, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v148 )
            goto LABEL_64;
          v130 = System_Int32__ToString((int)v148 + 36, 0LL);
          v131 = System_String__Concat_44577788((System_String_o *)StringLiteral_12891/*"Servants/Commands/"*/, v130, 0LL);
          QuestEntity = (__int64)v145;
          if ( !v145 )
            goto LABEL_64;
          if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  v145,
                  (WarBoardManager_TaskList_o *)v131,
                  (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v145,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v131,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          v132 = v148;
          v128 = (ViewEnemyEntity_o *)sub_B5D694(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_35264848(v128, v132, 0LL);
          v148 = v128;
          if ( !v128 )
            goto LABEL_64;
          v128->fields.iconId = 0;
        }
        else
        {
LABEL_41:
          v128 = v148;
        }
        v133 = *v91;
        if ( !*v91 )
          goto LABEL_64;
        if ( v128 )
        {
          QuestEntity = sub_B5D684(v128, *(_QWORD *)(*(_QWORD *)v133 + 64LL));
          if ( !QuestEntity )
          {
            v143 = sub_B5D6BC(0LL);
            sub_B5D668(v143, 0LL);
          }
        }
        if ( v119 >= v133[6] )
        {
LABEL_65:
          v142 = sub_B5D6C8(QuestEntity);
          sub_B5D668(v142, 0LL);
        }
        *(_QWORD *)&v133[v117] = v128;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v133[v117],
          (System_Int32_array **)v128,
          v122,
          v123,
          v124,
          v125,
          v126,
          v127);
        HasFlag = v146;
      }
      else
      {
LABEL_42:
        v129 = *v91;
        if ( !*v91 )
          goto LABEL_64;
        if ( v119 >= v129[6] )
          goto LABEL_65;
        *(_QWORD *)&v129[v117] = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&v129[v117], 0LL, v110, v120, v111, v112, v113, v114);
      }
      v115 = *v75;
      ++v116;
      v117 += 2LL;
      if ( !*v75 )
        goto LABEL_64;
    }
  }
  QuestEntity = (__int64)v145;
  if ( !v145 )
LABEL_64:
    sub_B5D69C(QuestEntity, v68);
  v134 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v145,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
  v144->fields.loadedAssets = (struct System_String_array *)v134;
  sub_B5D560((BattleServantConfConponent_o *)&v144->fields.loadedAssets, v134, v135, v136, v137, v138, v139, v140);
  v144->fields.loading = 1;
  v141 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v141,
    (Il2CppObject *)v66,
    Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v141, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_25444084(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x25
  int32_t v15; // w22
  ViewEnemyEntity_o *v16; // x24
  QuestInformationListViewItem_o *v17; // x0
  const MethodInfo *v18; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x23
  int32_t v20; // w1
  ViewEnemyEntity_o *v21; // x2
  bool v22; // w3
  __int64 v23; // x0

  if ( (byte_42E8B07 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, questId, (_DWORD)enemies, veEnts);
    sub_B5D5C4(&QuestInformationListViewItem_TypeInfo, v8, v9, v10);
    byte_42E8B07 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( enemies )
    {
      v13 = *(_QWORD *)&enemies->max_length;
      if ( (int)v13 >= 1 )
      {
        v14 = 0LL;
        v15 = 0;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)v13 )
            goto LABEL_19;
          if ( !veEnts )
            goto LABEL_20;
          if ( v14 >= veEnts->max_length )
          {
LABEL_19:
            v23 = sub_B5D6C8(itemList);
            sub_B5D668(v23, 0LL);
          }
          v16 = veEnts->m_Items[v14];
          if ( enemies->m_Items[v14 + 1] <= 0 )
            break;
          if ( v16 )
          {
            v17 = (QuestInformationListViewItem_o *)sub_B5D694(QuestInformationListViewItem_TypeInfo);
            v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)v17;
            v20 = v15;
            v21 = v16;
            v22 = 0;
LABEL_14:
            QuestInformationListViewItem___ctor_25432488(v17, v20, v21, v22, v18);
            itemList = this->fields.itemList;
            if ( !itemList )
LABEL_20:
              sub_B5D69C(itemList, v12);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              v19,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v13) = enemies->max_length;
            ++v15;
          }
          if ( (__int64)++v14 >= (int)v13 )
            goto LABEL_17;
        }
        v17 = (QuestInformationListViewItem_o *)sub_B5D694(QuestInformationListViewItem_TypeInfo);
        v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)v17;
        v22 = 1;
        v20 = v15;
        v21 = v16;
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


int32_t __fastcall QuestInformationListViewManager__CreateRewardItemList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  QuestInformationListViewManager_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x8
  unsigned __int64 v11; // x24
  int32_t v12; // w26
  int32_t v13; // w19
  __int64 v14; // x22
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-54h]

  v4 = sum;
  v6 = this;
  if ( (byte_42E8B03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, (_DWORD)items, sum, method);
    this = (QuestInformationListViewManager_o *)sub_B5D5C4(&QuestInformationListViewItem_TypeInfo, v7, v8, v9);
    byte_42E8B03 = 1;
  }
  if ( items )
  {
    v10 = *(_QWORD *)&items->max_length;
    if ( (int)v10 >= 1 )
    {
      v19 = v4;
      v11 = 0LL;
      v12 = v4;
      do
      {
        if ( v11 >= (unsigned int)v10 )
        {
          v18 = sub_B5D6C8(this);
          sub_B5D668(v18, 0LL);
        }
        v13 = items->m_Items[v11 + 1];
        v14 = sub_B5D694(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_23901828((ListViewItem_o *)v14, v12 + v11, 0LL);
        *(_QWORD *)(v14 + 112) = 0x200000000LL;
        *(_DWORD *)(v14 + 124) = v13;
        if ( !v13 )
          *(_DWORD *)(v14 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.itemList;
        if ( !itemList )
          sub_B5D69C(0LL, v15);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v10) = items->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)v10 );
      return v19 + v11;
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
  sub_B5D560(
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


int32_t __fastcall QuestInformationListViewManager__CreateRewardSvtList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  QuestInformationListViewManager_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x8
  unsigned __int64 v11; // x24
  int32_t v12; // w26
  int32_t v13; // w19
  __int64 v14; // x22
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-54h]

  v4 = sum;
  v6 = this;
  if ( (byte_42E8B04 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, (_DWORD)svts, sum, method);
    this = (QuestInformationListViewManager_o *)sub_B5D5C4(&QuestInformationListViewItem_TypeInfo, v7, v8, v9);
    byte_42E8B04 = 1;
  }
  if ( svts )
  {
    v10 = *(_QWORD *)&svts->max_length;
    if ( (int)v10 >= 1 )
    {
      v19 = v4;
      v11 = 0LL;
      v12 = v4;
      do
      {
        if ( v11 >= (unsigned int)v10 )
        {
          v18 = sub_B5D6C8(this);
          sub_B5D668(v18, 0LL);
        }
        v13 = svts->m_Items[v11 + 1];
        v14 = sub_B5D694(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_23901828((ListViewItem_o *)v14, v12 + v11, 0LL);
        *(_QWORD *)(v14 + 112) = 0x100000000LL;
        *(_DWORD *)(v14 + 124) = v13;
        if ( !v13 )
          *(_DWORD *)(v14 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.itemList;
        if ( !itemList )
          sub_B5D69C(0LL, v15);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v10) = svts->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)v10 );
      return v19 + v11;
    }
  }
  return v4;
}


void __fastcall QuestInformationListViewManager__DestroyList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_array *loadedAssets; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E8B00 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8B00 = 1;
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
      AssetManager__releaseAssetStorage_30666128(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.loadedAssets, 0LL, v6, v7, v8, v9, v10, v11);
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
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  BattleServantConfConponent_o *p_mChocoMaterialSp; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  BattleServantConfConponent_o *p_mChocoTex; // x20
  System_Int32_array **UIAtlas; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  QuestInformationListViewManager_c *v31; // x0
  UnityEngine_Shader_o *v32; // x21
  UnityEngine_Material_o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1

  if ( (byte_42E8B0B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&QuestInformationListViewManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v17, v18, v19);
    byte_42E8B0B = 1;
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
                                         (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B5D560(p_mChocoTex, UIAtlas, v25, v26, v27, v28, v29, v30);
    }
    v31 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v31 = QuestInformationListViewManager_TypeInfo;
    }
    v32 = UnityEngine_Shader__Find(v31->static_fields->CHOCO_SHADER_SP, 0LL);
    v33 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v33, v32, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v33;
    sub_B5D560(p_mChocoMaterialSp, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
    if ( !p_mChocoMaterialSp->klass )
      sub_B5D69C(0LL, v40);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall QuestInformationListViewManager__NewChocoMaterialForTexture(
        QuestInformationListViewManager_o *this,
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
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  BattleServantConfConponent_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  BattleServantConfConponent_o *p_mChocoTex; // x20
  System_Int32_array **UIAtlas; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  QuestInformationListViewManager_c *v31; // x0
  UnityEngine_Shader_o *v32; // x21
  UnityEngine_Material_o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1

  if ( (byte_42E8B0A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&QuestInformationListViewManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v17, v18, v19);
    byte_42E8B0A = 1;
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
                                         (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B5D560(p_mChocoTex, UIAtlas, v25, v26, v27, v28, v29, v30);
    }
    v31 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v31 = QuestInformationListViewManager_TypeInfo;
    }
    v32 = UnityEngine_Shader__Find(v31->static_fields->CHOCO_SHADER_TX, 0LL);
    v33 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v33, v32, 0LL);
    p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)v33;
    sub_B5D560(p_mChocoMaterialTx, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
    if ( !p_mChocoMaterialTx->klass )
      sub_B5D69C(0LL, v40);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/,
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
  __int64 v3; // x3
  QuestInformationListViewManager_o *v5; // x20
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
  struct ListViewItem_o *linkItem; // x19
  __int64 v37; // x9
  int klass_high; // w8
  ItemEntity_o *Entity; // x19
  CommonUI_o *v40; // x20
  QuestInformationListViewManager___c_c *v41; // x8
  struct QuestInformationListViewManager___c_StaticFields *v42; // x9
  ItemDetailInfoComponent_CallbackFunc_o *_9__36_1; // x21
  Il2CppObject *v44; // x22
  struct QuestInformationListViewManager___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t monitor_high; // w19
  CommonUI_o *v53; // x20
  QuestInformationListViewManager___c_c *v54; // x8
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__36_0; // x21
  Il2CppObject *v57; // x22
  struct QuestInformationListViewManager___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  QuestInformationListViewManager_o *v65; // x0
  const MethodInfo *v66; // x1

  v5 = this;
  if ( (byte_42E8B09 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&QuestInformationListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__, v27, v28, v29);
    sub_B5D5C4(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__, v30, v31, v32);
    this = (QuestInformationListViewManager_o *)sub_B5D5C4(&QuestInformationListViewManager___c_TypeInfo, v33, v34, v35);
    byte_42E8B09 = 1;
  }
  if ( v5->fields.mIsResetReady )
    return;
  if ( !obj || (linkItem = obj->fields.linkItem) == 0LL )
LABEL_40:
    sub_B5D69C(this, obj);
  v37 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v37
    || (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v37 - 1] != QuestInformationListViewItem_TypeInfo )
  {
    v65 = (QuestInformationListViewManager_o *)sub_B5D990(linkItem);
    QuestInformationListViewManager__IsListBuilding(v65, v66);
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
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      monitor_high = HIDWORD(linkItem[1].monitor);
      v53 = (CommonUI_o *)this;
      v54 = QuestInformationListViewManager___c_TypeInfo;
      if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
        v54 = QuestInformationListViewManager___c_TypeInfo;
      }
      static_fields = v54->static_fields;
      _9__36_0 = static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54);
          static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        }
        v57 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__36_0,
          v57,
          Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__,
          0LL);
        v58 = QuestInformationListViewManager___c_TypeInfo->static_fields;
        v58->__9__36_0 = _9__36_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v58->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
      }
      if ( v53 )
      {
        CommonUI__OpenServantStatusDialog_18215952(v53, 0, monitor_high, _9__36_0, 0LL);
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
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (QuestInformationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( this )
        {
          Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     HIDWORD(linkItem[1].monitor),
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v40 = (CommonUI_o *)this;
          v41 = QuestInformationListViewManager___c_TypeInfo;
          if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
            v41 = QuestInformationListViewManager___c_TypeInfo;
          }
          v42 = v41->static_fields;
          _9__36_1 = v42->__9__36_1;
          if ( !_9__36_1 )
          {
            if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v41);
              v42 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            }
            v44 = (Il2CppObject *)v42->__9;
            _9__36_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              _9__36_1,
              v44,
              Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__,
              0LL);
            v45 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            v45->__9__36_1 = _9__36_1;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v45->__9__36_1,
              (System_Int32_array **)_9__36_1,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51);
          }
          if ( v40 )
          {
            CommonUI__OpenItemDetailDialog(v40, Entity, _9__36_1, 50, 0LL);
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

  if ( (byte_42E8B08 & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_B5D5C4(
                                                  &QuestInformationListViewObject_TypeInfo,
                                                  (_DWORD)obj,
                                                  (_DWORD)item,
                                                  method);
    byte_42E8B08 = 1;
  }
  if ( !obj
    || (v5 = *(&QuestInformationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  System_Collections_Generic_List_int__o *v23; // x23
  System_Collections_Generic_List_int__o *v24; // x22
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  ItemMaster_o *v28; // x24
  unsigned __int64 v29; // x25
  int32_t *v30; // x26
  const MethodInfo_308440C *v31; // x2
  System_Collections_Generic_List_int__o *v32; // x0
  System_Int32_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0

  if ( (byte_42E8B02 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)itms, (_DWORD)withoutQP, qps);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E8B02 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v24 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_26;
  v27 = *(_QWORD *)&itms->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = (ItemMaster_o *)Instance;
    v29 = 0LL;
    v30 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v29 >= (unsigned int)v27 )
      {
LABEL_27:
        v47 = sub_B5D6C8(Instance);
        sub_B5D668(v47, 0LL);
      }
      v26 = (unsigned int)v30[v29];
      if ( !(_DWORD)v26 )
        break;
      if ( (_DWORD)v26 == -1 )
      {
        if ( !v24 )
          goto LABEL_26;
        v31 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        v32 = v24;
LABEL_21:
        LODWORD(v26) = 0;
        goto LABEL_22;
      }
      if ( !v28 )
        goto LABEL_26;
      Instance = (DataManager_o *)ItemMaster__isQP(v28, v26, 0LL);
      if ( v29 >= itms->max_length )
        goto LABEL_27;
      v26 = (unsigned int)v30[v29];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_26;
        v31 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        v32 = v24;
      }
      else
      {
        if ( !v23 )
          goto LABEL_26;
        v31 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        v32 = v23;
      }
LABEL_22:
      System_Collections_Generic_List_int___Add(v32, v26, v31);
      LODWORD(v27) = itms->max_length;
      if ( (__int64)++v29 >= (int)v27 )
        goto LABEL_23;
    }
    if ( !v23 )
      goto LABEL_26;
    v31 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
    v32 = v23;
    goto LABEL_21;
  }
LABEL_23:
  if ( !v23
    || (v33 = System_Collections_Generic_List_int___ToArray(
                v23,
                (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v33,
        sub_B5D560((BattleServantConfConponent_o *)withoutQP, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39),
        !v24) )
  {
LABEL_26:
    sub_B5D69C(Instance, v26);
  }
  v40 = System_Collections_Generic_List_int___ToArray(
          v24,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v40;
  sub_B5D560((BattleServantConfConponent_o *)qps, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
}


void __fastcall QuestInformationListViewManager__SplitSvtsWithCombineMaterial(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v26; // x23
  System_Collections_Generic_List_int__o *v27; // x22
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x24
  unsigned __int64 v32; // x25
  int32_t *v33; // x26
  int32_t v34; // w2
  const MethodInfo_308440C *v35; // x2
  System_Collections_Generic_List_int__o *v36; // x0
  int32_t v37; // w1
  System_Int32_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8B01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)svts, (_DWORD)withoutCM, combineMaterials);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42E8B01 = 1;
  }
  entity = 0LL;
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_29;
  v30 = *(_QWORD *)&svts->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v32 = 0LL;
    v33 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v30 )
      {
LABEL_30:
        v52 = sub_B5D6C8(Instance);
        sub_B5D668(v52, 0LL);
      }
      v34 = v33[v32];
      if ( !v34 )
        break;
      if ( v34 == -1 )
      {
        if ( !v27 )
          goto LABEL_29;
        v35 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        v36 = v27;
LABEL_14:
        v37 = 0;
        goto LABEL_25;
      }
      if ( !v31 )
        goto LABEL_29;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v31,
                                    &entity,
                                    v34,
                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_22;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_29;
      Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v32 >= svts->max_length )
          goto LABEL_30;
        if ( !v27 )
          goto LABEL_29;
        v37 = v33[v32];
        v35 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        v36 = v27;
      }
      else
      {
LABEL_22:
        if ( v32 >= svts->max_length )
          goto LABEL_30;
        if ( !v26 )
          goto LABEL_29;
        v37 = v33[v32];
        v35 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
        v36 = v26;
      }
LABEL_25:
      System_Collections_Generic_List_int___Add(v36, v37, v35);
      LODWORD(v30) = svts->max_length;
      if ( (__int64)++v32 >= (int)v30 )
        goto LABEL_26;
    }
    if ( !v26 )
      goto LABEL_29;
    v35 = (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__;
    v36 = v26;
    goto LABEL_14;
  }
LABEL_26:
  if ( !v26
    || (v38 = System_Collections_Generic_List_int___ToArray(
                v26,
                (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v38,
        sub_B5D560((BattleServantConfConponent_o *)withoutCM, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44),
        !v27) )
  {
LABEL_29:
    sub_B5D69C(Instance, v29);
  }
  v45 = System_Collections_Generic_List_int___ToArray(
          v27,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v45;
  sub_B5D560((BattleServantConfConponent_o *)combineMaterials, (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
}


void __fastcall QuestInformationListViewManager__add_callbackFunc(
        QuestInformationListViewManager_o *this,
        QuestInformationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct QuestInformationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  QuestInformationListViewManager_o *v11; // x0
  QuestInformationListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E8AFA & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8AFA = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (QuestInformationListViewManager_CallbackFunc_c *)v8->klass != QuestInformationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (QuestInformationListViewManager_o *)sub_B5D990(v8);
  QuestInformationListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall QuestInformationListViewManager__add_callbackFunc2(
        QuestInformationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  QuestInformationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E8AFC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8AFC = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (QuestInformationListViewManager_o *)sub_B5D990(v8);
  QuestInformationListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
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
  QuestInformationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8AFF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E8AFF = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
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
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (QuestInformationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(Component_srcLineSprite, v36);
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
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v29;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
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
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8AFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E8AFE = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v29;
}


void __fastcall QuestInformationListViewManager__remove_callbackFunc(
        QuestInformationListViewManager_o *this,
        QuestInformationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct QuestInformationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  QuestInformationListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E8AFB & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8AFB = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (QuestInformationListViewManager_CallbackFunc_c *)v8->klass != QuestInformationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (QuestInformationListViewManager_o *)sub_B5D990(v8);
  QuestInformationListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall QuestInformationListViewManager__remove_callbackFunc2(
        QuestInformationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  QuestInformationListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E8AFD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8AFD = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (QuestInformationListViewManager_o *)sub_B5D990(v8);
  QuestInformationListViewManager__get_ObjectList(v11, v12);
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
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_42E7EF9 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, (_DWORD)callback, object);
    byte_42E7EF9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall QuestInformationListViewManager_CallbackFunc__EndInvoke(
        QuestInformationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  QuestInformationListViewManager_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7EF5 & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E7EF5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestInformationListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall QuestInformationListViewManager___c___ctor(
        QuestInformationListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewManager___c___OnClickListView_b__36_0(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E7EF7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E7EF7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall QuestInformationListViewManager___c___OnClickListView_b__36_1(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7EF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v4, v5, v6);
    byte_42E7EF6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
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
  int v2; // w2
  __int64 v3; // x3
  QuestInformationListViewManager___c__DisplayClass33_0_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct QuestInformationListViewManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x19
  System_Action_o *_9__1; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  v4 = this;
  if ( (byte_42E7EF8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    this = (QuestInformationListViewManager___c__DisplayClass33_0_o *)sub_B5D5C4(
                                                                        &Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__,
                                                                        v8,
                                                                        v9,
                                                                        v10);
    byte_42E7EF8 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30664084(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass33_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  QuestInformationListViewManager__CreateEnemyList_25444084(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}