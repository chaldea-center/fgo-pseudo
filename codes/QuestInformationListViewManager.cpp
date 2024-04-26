void __fastcall QuestInformationListViewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct QuestInformationListViewManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4352521 & 1) == 0 )
  {
    sub_B70694(&QuestInformationListViewManager_TypeInfo);
    sub_B70694(&StringLiteral_15202/*"Unlit/Transparent Colored_Choco"*/);
    sub_B70694(&StringLiteral_4620/*"Custom/SpriteWithMask_Choco"*/);
    byte_4352521 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_15202/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15202/*"Unlit/Transparent Colored_Choco"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = QuestInformationListViewManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_4620/*"Custom/SpriteWithMask_Choco"*/;
  v9->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4620/*"Custom/SpriteWithMask_Choco"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->CHOCO_SHADER_SP, v10, v11, v12, v13, v14, v15, v16);
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
  struct ListViewItemSeed_o *rewardSeed; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v14; // x1
  int32_t v15; // w21
  __int64 v16; // x23
  int v17; // w24
  __int64 v18; // x22
  struct UIScrollView_o *scrollView; // x8

  if ( (byte_435251A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&QuestInformationListViewItem_TypeInfo);
    byte_435251A = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.mIsBuildingList = 1;
  this->fields.seed = rewardSeed;
  sub_B70630(
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
      v15 = 0;
      while ( 1 )
      {
        v16 = sub_B70764(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_23967088((ListViewItem_o *)v16, v15, 0LL);
        *(_DWORD *)(v16 + 124) = 0;
        *(_QWORD *)(v16 + 112) = 0LL;
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( ++v15 >= itemCnt )
          goto LABEL_10;
      }
LABEL_16:
      sub_B7076C(itemList, v14);
    }
    v15 = 0;
LABEL_10:
    if ( svtCnt >= 1 )
    {
      v17 = 0;
      do
      {
        v18 = sub_B70764(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_23967088((ListViewItem_o *)v18, v15 + v17, 0LL);
        *(_DWORD *)(v18 + 124) = 0;
        *(_QWORD *)(v18 + 112) = 0LL;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( ++v17 < svtCnt );
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
  __int64 v9; // x20
  __int64 QuestEntity; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ListViewItemSeed_o *enemySeed; // x1
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x24
  unsigned int **v34; // x25
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  bool HasFlag; // w28
  UserQuestInfoMaster_o *v44; // x27
  __int64 v45; // x8
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x8
  __int64 v59; // x23
  __int64 v60; // x26
  unsigned __int64 v61; // x9
  unsigned __int64 v62; // x19
  System_String_array **v63; // x3
  __int64 v64; // x8
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  ViewEnemyEntity_o *v71; // x27
  unsigned int *v72; // x8
  System_String_o *v73; // x0
  System_String_o *v74; // x27
  ViewEnemyEntity_o *v75; // x28
  unsigned int *v76; // x28
  System_Int32_array **v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Action_o *v84; // x19
  __int64 v85; // x0
  __int64 v86; // x0
  QuestInformationListViewManager_o *v87; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v88; // [xsp+8h] [xbp-78h]
  bool v89; // [xsp+14h] [xbp-6Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v91; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v92; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_435251B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__);
    sub_B70694(&QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo);
    sub_B70694(&ViewEnemyEntity___TypeInfo);
    sub_B70694(&ViewEnemyEntity_TypeInfo);
    sub_B70694(&StringLiteral_12912/*"Servants/Commands/"*/);
    byte_435251B = 1;
  }
  v91 = 0LL;
  v92 = 0LL;
  entity = 0LL;
  v9 = sub_B70764(QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo);
  QuestInformationListViewManager___c__DisplayClass33_0___ctor(
    (QuestInformationListViewManager___c__DisplayClass33_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_64;
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = enemies;
  v18 = (__int64 *)(v9 + 32);
  *(_DWORD *)(v9 + 24) = questId;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)enemies, v19, v20, v21, v22, v23, v24);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)enemySeed,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  v88 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v88,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 40) = 0LL;
  v34 = (unsigned int **)(v9 + 40);
  sub_B70630((BattleServantConfConponent_o *)(v9 + 40), 0LL, v35, v36, v37, v38, v39, v40);
  QuestEntity = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_64;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v9 + 24), v41);
  if ( !QuestEntity )
    goto LABEL_64;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, v42);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v87 = this;
  v44 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v44 )
    goto LABEL_64;
  UserQuestInfoMaster__TryGetEntity(v44, &entity, QuestEntity, *(_DWORD *)(v9 + 24), 0LL);
  v45 = *(_QWORD *)(v9 + 32);
  if ( v45 )
  {
    v46 = (System_Int32_array **)sub_B706AC(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v45 + 24));
    *v34 = (unsigned int *)v46;
    sub_B70630((BattleServantConfConponent_o *)(v9 + 40), v46, v47, v48, v49, v50, v51, v52);
    v58 = *v18;
    if ( !*v18 )
      goto LABEL_64;
    v59 = 8LL;
    v60 = 8LL;
    v89 = HasFlag;
    while ( 1 )
    {
      v61 = *(unsigned int *)(v58 + 24);
      v62 = v59 - 8;
      if ( v59 - 8 >= (int)v61 )
        break;
      if ( v62 >= v61 )
        goto LABEL_65;
      v63 = (System_String_array **)*(unsigned int *)(v58 + 4 * v59);
      if ( (int)v63 < 1 )
        goto LABEL_42;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_64;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      Master_WarQuestSelectionMaster,
                      &v91,
                      *(_DWORD *)(v9 + 24),
                      (int32_t)v63,
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
        if ( !v91 )
          goto LABEL_64;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v91->fields.enemyId,
                        (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_31:
          v64 = *v18;
          if ( !*v18 )
            goto LABEL_64;
          if ( v62 >= *(unsigned int *)(v64 + 24) )
            goto LABEL_65;
          *(_DWORD *)(v64 + 4 * v59) = 0;
        }
      }
      if ( !v91 || !v33 )
        goto LABEL_64;
      QuestEntity = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      v33,
                      &v92,
                      v91->fields.svtId,
                      (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v92;
        if ( !v92 )
          goto LABEL_64;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v92, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_41;
        QuestEntity = (__int64)v91;
        if ( !v91 )
          goto LABEL_64;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v91, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v91 )
            goto LABEL_64;
          v73 = System_Int32__ToString((int)v91 + 36, 0LL);
          v74 = System_String__Concat_44758168((System_String_o *)StringLiteral_12912/*"Servants/Commands/"*/, v73, 0LL);
          QuestEntity = (__int64)v88;
          if ( !v88 )
            goto LABEL_64;
          if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  v88,
                  (WarBoardManager_TaskList_o *)v74,
                  (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v88,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
          v75 = v91;
          v71 = (ViewEnemyEntity_o *)sub_B70764(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_35478332(v71, v75, 0LL);
          v91 = v71;
          if ( !v71 )
            goto LABEL_64;
          v71->fields.iconId = 0;
        }
        else
        {
LABEL_41:
          v71 = v91;
        }
        v76 = *v34;
        if ( !*v34 )
          goto LABEL_64;
        if ( v71 )
        {
          QuestEntity = sub_B70754(v71, *(_QWORD *)(*(_QWORD *)v76 + 64LL));
          if ( !QuestEntity )
          {
            v86 = sub_B7078C(0LL);
            sub_B70738(v86, 0LL);
          }
        }
        if ( v62 >= v76[6] )
        {
LABEL_65:
          v85 = sub_B70798(QuestEntity);
          sub_B70738(v85, 0LL);
        }
        *(_QWORD *)&v76[v60] = v71;
        sub_B70630((BattleServantConfConponent_o *)&v76[v60], (System_Int32_array **)v71, v65, v66, v67, v68, v69, v70);
        HasFlag = v89;
      }
      else
      {
LABEL_42:
        v72 = *v34;
        if ( !*v34 )
          goto LABEL_64;
        if ( v62 >= v72[6] )
          goto LABEL_65;
        *(_QWORD *)&v72[v60] = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&v72[v60], 0LL, v53, v63, v54, v55, v56, v57);
      }
      v58 = *v18;
      ++v59;
      v60 += 2LL;
      if ( !*v18 )
        goto LABEL_64;
    }
  }
  QuestEntity = (__int64)v88;
  if ( !v88 )
LABEL_64:
    sub_B7076C(QuestEntity, v11);
  v77 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v88,
                                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v87->fields.loadedAssets = (struct System_String_array *)v77;
  sub_B70630((BattleServantConfConponent_o *)&v87->fields.loadedAssets, v77, v78, v79, v80, v81, v82, v83);
  v87->fields.loading = 1;
  v84 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v84,
    (Il2CppObject *)v9,
    Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v84, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_26114140(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  int32_t v12; // w22
  ViewEnemyEntity_o *v13; // x24
  QuestInformationListViewItem_o *v14; // x0
  const MethodInfo *v15; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x23
  int32_t v17; // w1
  ViewEnemyEntity_o *v18; // x2
  bool v19; // w3
  __int64 v20; // x0

  if ( (byte_435251C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&QuestInformationListViewItem_TypeInfo);
    byte_435251C = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( enemies )
    {
      v10 = *(_QWORD *)&enemies->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = 0LL;
        v12 = 0;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)v10 )
            goto LABEL_19;
          if ( !veEnts )
            goto LABEL_20;
          if ( v11 >= veEnts->max_length )
          {
LABEL_19:
            v20 = sub_B70798(itemList);
            sub_B70738(v20, 0LL);
          }
          v13 = veEnts->m_Items[v11];
          if ( enemies->m_Items[v11 + 1] <= 0 )
            break;
          if ( v13 )
          {
            v14 = (QuestInformationListViewItem_o *)sub_B70764(QuestInformationListViewItem_TypeInfo);
            v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)v14;
            v17 = v12;
            v18 = v13;
            v19 = 0;
LABEL_14:
            QuestInformationListViewItem___ctor_26102544(v14, v17, v18, v19, v15);
            itemList = this->fields.itemList;
            if ( !itemList )
LABEL_20:
              sub_B7076C(itemList, v9);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              v16,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v10) = enemies->max_length;
            ++v12;
          }
          if ( (__int64)++v11 >= (int)v10 )
            goto LABEL_17;
        }
        v14 = (QuestInformationListViewItem_o *)sub_B70764(QuestInformationListViewItem_TypeInfo);
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)v14;
        v19 = 1;
        v17 = v12;
        v18 = v13;
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
  QuestInformationListViewManager_o *v6; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x24
  int32_t v9; // w26
  int32_t v10; // w19
  __int64 v11; // x22
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-54h]

  v6 = this;
  if ( (byte_4352518 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (QuestInformationListViewManager_o *)sub_B70694(&QuestInformationListViewItem_TypeInfo);
    byte_4352518 = 1;
  }
  if ( items )
  {
    v7 = *(_QWORD *)&items->max_length;
    if ( (int)v7 >= 1 )
    {
      v16 = sum;
      v8 = 0LL;
      v9 = sum;
      do
      {
        if ( v8 >= (unsigned int)v7 )
        {
          v15 = sub_B70798(this);
          sub_B70738(v15, 0LL);
        }
        v10 = items->m_Items[v8 + 1];
        v11 = sub_B70764(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_23967088((ListViewItem_o *)v11, v9 + v8, 0LL);
        *(_QWORD *)(v11 + 112) = 0x200000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.itemList;
        if ( !itemList )
          sub_B7076C(0LL, v12);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v7) = items->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
      return v16 + v8;
    }
  }
  return sum;
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
  sub_B70630(
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
  QuestInformationListViewManager_o *v6; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x24
  int32_t v9; // w26
  int32_t v10; // w19
  __int64 v11; // x22
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-54h]

  v6 = this;
  if ( (byte_4352519 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (QuestInformationListViewManager_o *)sub_B70694(&QuestInformationListViewItem_TypeInfo);
    byte_4352519 = 1;
  }
  if ( svts )
  {
    v7 = *(_QWORD *)&svts->max_length;
    if ( (int)v7 >= 1 )
    {
      v16 = sum;
      v8 = 0LL;
      v9 = sum;
      do
      {
        if ( v8 >= (unsigned int)v7 )
        {
          v15 = sub_B70798(this);
          sub_B70738(v15, 0LL);
        }
        v10 = svts->m_Items[v8 + 1];
        v11 = sub_B70764(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_23967088((ListViewItem_o *)v11, v9 + v8, 0LL);
        *(_QWORD *)(v11 + 112) = 0x100000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.itemList;
        if ( !itemList )
          sub_B7076C(0LL, v12);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v7) = svts->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
      return v16 + v8;
    }
  }
  return sum;
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

  if ( (byte_4352515 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_4352515 = 1;
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
      AssetManager__releaseAssetStorage_31205608(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.loadedAssets, 0LL, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  BattleServantConfConponent_o *p_mChocoMaterialSp; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  BattleServantConfConponent_o *p_mChocoTex; // x20
  System_Int32_array **UIAtlas; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  QuestInformationListViewManager_c *v14; // x0
  UnityEngine_Shader_o *v15; // x21
  UnityEngine_Material_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1

  if ( (byte_4352520 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&QuestInformationListViewManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B70694(&StringLiteral_16161/*"_ChocoTex"*/);
    sub_B70694(&StringLiteral_13008/*"Shaders/ChocoMap"*/);
    byte_4352520 = 1;
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
                                         (System_String_o *)StringLiteral_13008/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B70630(p_mChocoTex, UIAtlas, v8, v9, v10, v11, v12, v13);
    }
    v14 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v14 = QuestInformationListViewManager_TypeInfo;
    }
    v15 = UnityEngine_Shader__Find(v14->static_fields->CHOCO_SHADER_SP, 0LL);
    v16 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v16, v15, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v16;
    sub_B70630(p_mChocoMaterialSp, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
    if ( !p_mChocoMaterialSp->klass )
      sub_B7076C(0LL, v23);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16161/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall QuestInformationListViewManager__NewChocoMaterialForTexture(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  BattleServantConfConponent_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  BattleServantConfConponent_o *p_mChocoTex; // x20
  System_Int32_array **UIAtlas; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  QuestInformationListViewManager_c *v14; // x0
  UnityEngine_Shader_o *v15; // x21
  UnityEngine_Material_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1

  if ( (byte_435251F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&QuestInformationListViewManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B70694(&StringLiteral_16161/*"_ChocoTex"*/);
    sub_B70694(&StringLiteral_13008/*"Shaders/ChocoMap"*/);
    byte_435251F = 1;
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
                                         (System_String_o *)StringLiteral_13008/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B70630(p_mChocoTex, UIAtlas, v8, v9, v10, v11, v12, v13);
    }
    v14 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v14 = QuestInformationListViewManager_TypeInfo;
    }
    v15 = UnityEngine_Shader__Find(v14->static_fields->CHOCO_SHADER_TX, 0LL);
    v16 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v16, v15, 0LL);
    p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)v16;
    sub_B70630(p_mChocoMaterialTx, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
    if ( !p_mChocoMaterialTx->klass )
      sub_B7076C(0LL, v23);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16161/*"_ChocoTex"*/,
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
  struct ListViewItem_o *linkItem; // x19
  __int64 v6; // x9
  int klass_high; // w8
  ItemEntity_o *Entity; // x19
  CommonUI_o *v9; // x20
  QuestInformationListViewManager___c_c *v10; // x8
  struct QuestInformationListViewManager___c_StaticFields *v11; // x9
  ItemDetailInfoComponent_CallbackFunc_o *_9__36_1; // x21
  Il2CppObject *v13; // x22
  struct QuestInformationListViewManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t monitor_high; // w19
  CommonUI_o *v22; // x20
  QuestInformationListViewManager___c_c *v23; // x8
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__36_0; // x21
  Il2CppObject *v26; // x22
  struct QuestInformationListViewManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  QuestInformationListViewManager_o *v34; // x0
  const MethodInfo *v35; // x1

  v4 = this;
  if ( (byte_435251E & 1) == 0 )
  {
    sub_B70694(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&QuestInformationListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__);
    sub_B70694(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__);
    this = (QuestInformationListViewManager_o *)sub_B70694(&QuestInformationListViewManager___c_TypeInfo);
    byte_435251E = 1;
  }
  if ( v4->fields.mIsResetReady )
    return;
  if ( !obj || (linkItem = obj->fields.linkItem) == 0LL )
LABEL_40:
    sub_B7076C(this, obj);
  v6 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != QuestInformationListViewItem_TypeInfo )
  {
    v34 = (QuestInformationListViewManager_o *)sub_B70A60(linkItem);
    QuestInformationListViewManager__IsListBuilding(v34, v35);
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
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      monitor_high = HIDWORD(linkItem[1].monitor);
      v22 = (CommonUI_o *)this;
      v23 = QuestInformationListViewManager___c_TypeInfo;
      if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
        v23 = QuestInformationListViewManager___c_TypeInfo;
      }
      static_fields = v23->static_fields;
      _9__36_0 = static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__36_0,
          v26,
          Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__,
          0LL);
        v27 = QuestInformationListViewManager___c_TypeInfo->static_fields;
        v27->__9__36_0 = _9__36_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v27->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      if ( v22 )
      {
        CommonUI__OpenServantStatusDialog_17918128(v22, 0, monitor_high, _9__36_0, 0LL);
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
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (QuestInformationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( this )
        {
          Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     HIDWORD(linkItem[1].monitor),
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v9 = (CommonUI_o *)this;
          v10 = QuestInformationListViewManager___c_TypeInfo;
          if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
            v10 = QuestInformationListViewManager___c_TypeInfo;
          }
          v11 = v10->static_fields;
          _9__36_1 = v11->__9__36_1;
          if ( !_9__36_1 )
          {
            if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v10);
              v11 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            }
            v13 = (Il2CppObject *)v11->__9;
            _9__36_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B70764(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              _9__36_1,
              v13,
              Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__,
              0LL);
            v14 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            v14->__9__36_1 = _9__36_1;
            sub_B70630(
              (BattleServantConfConponent_o *)&v14->__9__36_1,
              (System_Int32_array **)_9__36_1,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
          }
          if ( v9 )
          {
            CommonUI__OpenItemDetailDialog(v9, Entity, _9__36_1, 50, 0LL);
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

  if ( (byte_435251D & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_B70694(&QuestInformationListViewObject_TypeInfo);
    byte_435251D = 1;
  }
  if ( !obj
    || (v5 = *(&QuestInformationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
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
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  ItemMaster_o *v13; // x24
  unsigned __int64 v14; // x25
  int32_t *v15; // x26
  const MethodInfo_30B61D8 *v16; // x2
  System_Collections_Generic_List_int__o *v17; // x0
  System_Int32_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0

  if ( (byte_4352517 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352517 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_26;
  v12 = *(_QWORD *)&itms->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = (ItemMaster_o *)Instance;
    v14 = 0LL;
    v15 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
      {
LABEL_27:
        v32 = sub_B70798(Instance);
        sub_B70738(v32, 0LL);
      }
      v11 = (unsigned int)v15[v14];
      if ( !(_DWORD)v11 )
        break;
      if ( (_DWORD)v11 == -1 )
      {
        if ( !v9 )
          goto LABEL_26;
        v16 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
        v17 = v9;
LABEL_21:
        LODWORD(v11) = 0;
        goto LABEL_22;
      }
      if ( !v13 )
        goto LABEL_26;
      Instance = (DataManager_o *)ItemMaster__isQP(v13, v11, 0LL);
      if ( v14 >= itms->max_length )
        goto LABEL_27;
      v11 = (unsigned int)v15[v14];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_26;
        v16 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
        v17 = v9;
      }
      else
      {
        if ( !v8 )
          goto LABEL_26;
        v16 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
        v17 = v8;
      }
LABEL_22:
      System_Collections_Generic_List_int___Add(v17, v11, v16);
      LODWORD(v12) = itms->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_23;
    }
    if ( !v8 )
      goto LABEL_26;
    v16 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
    v17 = v8;
    goto LABEL_21;
  }
LABEL_23:
  if ( !v8
    || (v18 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v18,
        sub_B70630((BattleServantConfConponent_o *)withoutQP, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24),
        !v9) )
  {
LABEL_26:
    sub_B7076C(Instance, v11);
  }
  v25 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v25;
  sub_B70630((BattleServantConfConponent_o *)qps, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
}


void __fastcall QuestInformationListViewManager__SplitSvtsWithCombineMaterial(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x24
  unsigned __int64 v14; // x25
  int32_t *v15; // x26
  int32_t v16; // w2
  const MethodInfo_30B61D8 *v17; // x2
  System_Collections_Generic_List_int__o *v18; // x0
  int32_t v19; // w1
  System_Int32_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4352516 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352516 = 1;
  }
  entity = 0LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_29;
  v12 = *(_QWORD *)&svts->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v14 = 0LL;
    v15 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
      {
LABEL_30:
        v34 = sub_B70798(Instance);
        sub_B70738(v34, 0LL);
      }
      v16 = v15[v14];
      if ( !v16 )
        break;
      if ( v16 == -1 )
      {
        if ( !v9 )
          goto LABEL_29;
        v17 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
        v18 = v9;
LABEL_14:
        v19 = 0;
        goto LABEL_25;
      }
      if ( !v13 )
        goto LABEL_29;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v13,
                                    &entity,
                                    v16,
                                    (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_22;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_29;
      Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v14 >= svts->max_length )
          goto LABEL_30;
        if ( !v9 )
          goto LABEL_29;
        v19 = v15[v14];
        v17 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
        v18 = v9;
      }
      else
      {
LABEL_22:
        if ( v14 >= svts->max_length )
          goto LABEL_30;
        if ( !v8 )
          goto LABEL_29;
        v19 = v15[v14];
        v17 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
        v18 = v8;
      }
LABEL_25:
      System_Collections_Generic_List_int___Add(v18, v19, v17);
      LODWORD(v12) = svts->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_26;
    }
    if ( !v8 )
      goto LABEL_29;
    v17 = (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__;
    v18 = v8;
    goto LABEL_14;
  }
LABEL_26:
  if ( !v8
    || (v20 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v20,
        sub_B70630((BattleServantConfConponent_o *)withoutCM, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26),
        !v9) )
  {
LABEL_29:
    sub_B7076C(Instance, v11);
  }
  v27 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v27;
  sub_B70630((BattleServantConfConponent_o *)combineMaterials, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_435250F & 1) == 0 )
  {
    sub_B70694(&QuestInformationListViewManager_CallbackFunc_TypeInfo);
    byte_435250F = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B70A60(v7);
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

  if ( (byte_4352511 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4352511 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B70A60(v7);
  QuestInformationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  QuestInformationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4352514 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352514 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (QuestInformationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7076C(0LL, v10);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7076C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23985548((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7076C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7076C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v3;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4352513 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352513 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v3;
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

  if ( (byte_4352510 & 1) == 0 )
  {
    sub_B70694(&QuestInformationListViewManager_CallbackFunc_TypeInfo);
    byte_4352510 = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B70A60(v7);
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

  if ( (byte_4352512 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4352512 = 1;
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
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B70A60(v7);
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
  sub_B70630(
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
  if ( (byte_4351B03 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    byte_4351B03 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall QuestInformationListViewManager_CallbackFunc__EndInvoke(
        QuestInformationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B706C4(v20) & 1) == 0 )
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
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
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
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B70744(v15, v20);
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
            v14 = sub_B08590(v19, class_0, v9);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4351AFF & 1) == 0 )
  {
    sub_B70694(&QuestInformationListViewManager___c_TypeInfo);
    byte_4351AFF = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(QuestInformationListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4351B01 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4351B01 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall QuestInformationListViewManager___c___OnClickListView_b__36_1(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4351B00 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351B00 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
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
  QuestInformationListViewManager___c__DisplayClass33_0_o *v2; // x20
  struct QuestInformationListViewManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x19
  System_Action_o *_9__1; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v2 = this;
  if ( (byte_4351B02 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AssetManager_TypeInfo);
    this = (QuestInformationListViewManager___c__DisplayClass33_0_o *)sub_B70694(&Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__);
    byte_4351B02 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.__9__1,
      (System_Int32_array **)_9__1,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_31203564(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass33_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  QuestInformationListViewManager__CreateEnemyList_26114140(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}