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

  if ( (byte_4186EC0 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_15015/*"Unlit/Transparent Colored_Choco"*/, v8);
    sub_B2C35C(&StringLiteral_4538/*"Custom/SpriteWithMask_Choco"*/, v9);
    byte_4186EC0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15015/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15015/*"Unlit/Transparent Colored_Choco"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = QuestInformationListViewManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_4538/*"Custom/SpriteWithMask_Choco"*/;
  v12->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4538/*"Custom/SpriteWithMask_Choco"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->CHOCO_SHADER_SP, v13, v14, v15, v16, v17, v18, v19);
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
  int32_t v16; // w21
  __int64 v17; // x23
  int v18; // w24
  __int64 v19; // x22
  struct UIScrollView_o *scrollView; // x8

  if ( (byte_4186EB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_B2C35C(&QuestInformationListViewItem_TypeInfo, v12);
    byte_4186EB9 = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.mIsBuildingList = 1;
  this->fields.seed = rewardSeed;
  sub_B2C2F8(
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
      v16 = 0;
      while ( 1 )
      {
        v17 = sub_B2C42C(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_24128628((ListViewItem_o *)v17, v16, 0LL);
        *(_DWORD *)(v17 + 124) = 0;
        *(_QWORD *)(v17 + 112) = 0LL;
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( ++v16 >= itemCnt )
          goto LABEL_10;
      }
LABEL_16:
      sub_B2C434(itemList, v15);
    }
    v16 = 0;
LABEL_10:
    if ( svtCnt >= 1 )
    {
      v18 = 0;
      do
      {
        v19 = sub_B2C42C(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_24128628((ListViewItem_o *)v19, v16 + v18, 0LL);
        *(_DWORD *)(v19 + 124) = 0;
        *(_QWORD *)(v19 + 112) = 0LL;
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( ++v18 < svtCnt );
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
  const MethodInfo *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct ListViewItemSeed_o *enemySeed; // x1
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x24
  unsigned int **v53; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x2
  __int64 v61; // x26
  int64_t *p_flag; // x8
  QuestPhaseDetailEntity_o *PhaseDetail; // x0
  UserQuestInfoMaster_o *v64; // x26
  __int64 v65; // x8
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x8
  __int64 v79; // x23
  __int64 v80; // x28
  unsigned __int64 v81; // x9
  unsigned __int64 v82; // x19
  System_String_array **v83; // x3
  __int64 v84; // x8
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  ViewEnemyEntity_o *v91; // x26
  unsigned int *v92; // x8
  System_String_o *v93; // x0
  System_String_o *v94; // x26
  ViewEnemyEntity_o *v95; // x27
  unsigned int *v96; // x27
  System_Int32_array **v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Action_o *v104; // x19
  __int64 v105; // x0
  __int64 v106; // x0
  QuestInformationListViewManager_o *v107; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v108; // [xsp+8h] [xbp-78h]
  int64_t v109; // [xsp+10h] [xbp-70h]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v111; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v112; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4186EBA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&AtlasManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_ViewEnemyMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v20);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_B2C35C(&NetworkManager_TypeInfo, v22);
    sub_B2C35C(&Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__, v23);
    sub_B2C35C(&QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo, v24);
    sub_B2C35C(&ViewEnemyEntity___TypeInfo, v25);
    sub_B2C35C(&ViewEnemyEntity_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_12735/*"Servants/Commands/"*/, v27);
    byte_4186EBA = 1;
  }
  v111 = 0LL;
  v112 = 0LL;
  entity = 0LL;
  v28 = sub_B2C42C(QuestInformationListViewManager___c__DisplayClass33_0_TypeInfo);
  QuestInformationListViewManager___c__DisplayClass33_0___ctor(
    (QuestInformationListViewManager___c__DisplayClass33_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_68;
  *(_QWORD *)(v28 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v28 + 32) = enemies;
  v37 = (__int64 *)(v28 + 32);
  *(_DWORD *)(v28 + 24) = questId;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)enemies, v38, v39, v40, v41, v42, v43);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)enemySeed,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v108 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  *(_QWORD *)(v28 + 40) = 0LL;
  v53 = (unsigned int **)(v28 + 40);
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 40), 0LL, v54, v55, v56, v57, v58, v59);
  QuestEntity = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_68;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v28 + 24), v60);
  if ( !QuestEntity )
    goto LABEL_68;
  v61 = QuestEntity;
  if ( *(_BYTE *)(QuestEntity + 172)
    || (PhaseDetail = QuestEntity__GetPhaseDetail((QuestEntity_o *)QuestEntity, v30)) == 0LL )
  {
    p_flag = (int64_t *)(v61 + 144);
  }
  else
  {
    p_flag = &PhaseDetail->fields.flag;
  }
  v109 = *p_flag;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v107 = this;
  v64 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v64 )
    goto LABEL_68;
  UserQuestInfoMaster__TryGetEntity(v64, &entity, QuestEntity, *(_DWORD *)(v28 + 24), 0LL);
  v65 = *(_QWORD *)(v28 + 32);
  if ( v65 )
  {
    v66 = (System_Int32_array **)sub_B2C374(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v65 + 24));
    *v53 = (unsigned int *)v66;
    sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 40), v66, v67, v68, v69, v70, v71, v72);
    v78 = *v37;
    if ( !*v37 )
      goto LABEL_68;
    v79 = 8LL;
    v80 = 8LL;
    while ( 1 )
    {
      v81 = *(unsigned int *)(v78 + 24);
      v82 = v79 - 8;
      if ( v79 - 8 >= (int)v81 )
        break;
      if ( v82 >= v81 )
        goto LABEL_69;
      v83 = (System_String_array **)*(unsigned int *)(v78 + 4 * v79);
      if ( (int)v83 < 1 )
        goto LABEL_46;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_68;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      Master_WarQuestSelectionMaster,
                      &v111,
                      *(_DWORD *)(v28 + 24),
                      (int32_t)v83,
                      0LL);
      if ( (QuestEntity & 1) == 0 )
        goto LABEL_46;
      if ( (v109 & 0x200000000000000LL) == 0 )
      {
        if ( !entity )
          goto LABEL_35;
        QuestEntity = (__int64)entity->fields.enemyIds;
        if ( !QuestEntity || !*(_QWORD *)(QuestEntity + 24) )
          goto LABEL_35;
        if ( !v111 )
          goto LABEL_68;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v111->fields.enemyId,
                        (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_35:
          v84 = *v37;
          if ( !*v37 )
            goto LABEL_68;
          if ( v82 >= *(unsigned int *)(v84 + 24) )
            goto LABEL_69;
          *(_DWORD *)(v84 + 4 * v79) = 0;
        }
      }
      if ( !v111 || !v52 )
        goto LABEL_68;
      QuestEntity = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      v52,
                      &v112,
                      v111->fields.svtId,
                      (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v112;
        if ( !v112 )
          goto LABEL_68;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v112, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_45;
        QuestEntity = (__int64)v111;
        if ( !v111 )
          goto LABEL_68;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v111, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v111 )
            goto LABEL_68;
          v93 = System_Int32__ToString((int)v111 + 36, 0LL);
          v94 = System_String__Concat_44305532((System_String_o *)StringLiteral_12735/*"Servants/Commands/"*/, v93, 0LL);
          QuestEntity = (__int64)v108;
          if ( !v108 )
            goto LABEL_68;
          if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  v108,
                  (WarBoardManager_TaskList_o *)v94,
                  (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v94,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          v95 = v111;
          v91 = (ViewEnemyEntity_o *)sub_B2C42C(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_34363392(v91, v95, 0LL);
          v111 = v91;
          if ( !v91 )
            goto LABEL_68;
          v91->fields.iconId = 0;
        }
        else
        {
LABEL_45:
          v91 = v111;
        }
        v96 = *v53;
        if ( !*v53 )
          goto LABEL_68;
        if ( v91 )
        {
          QuestEntity = sub_B2C41C(v91, *(_QWORD *)(*(_QWORD *)v96 + 64LL));
          if ( !QuestEntity )
          {
            v106 = sub_B2C454();
            sub_B2C400(v106, 0LL);
          }
        }
        if ( v82 >= v96[6] )
        {
LABEL_69:
          v105 = sub_B2C460(QuestEntity);
          sub_B2C400(v105, 0LL);
        }
        *(_QWORD *)&v96[v80] = v91;
        sub_B2C2F8((BattleServantConfConponent_o *)&v96[v80], (System_Int32_array **)v91, v85, v86, v87, v88, v89, v90);
      }
      else
      {
LABEL_46:
        v92 = *v53;
        if ( !*v53 )
          goto LABEL_68;
        if ( v82 >= v92[6] )
          goto LABEL_69;
        *(_QWORD *)&v92[v80] = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&v92[v80], 0LL, v73, v83, v74, v75, v76, v77);
      }
      v78 = *v37;
      ++v79;
      v80 += 2LL;
      if ( !*v37 )
        goto LABEL_68;
    }
  }
  QuestEntity = (__int64)v108;
  if ( !v108 )
LABEL_68:
    sub_B2C434(QuestEntity, v30);
  v97 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v108,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
  v107->fields.loadedAssets = (struct System_String_array *)v97;
  sub_B2C2F8((BattleServantConfConponent_o *)&v107->fields.loadedAssets, v97, v98, v99, v100, v101, v102, v103);
  v107->fields.loading = 1;
  v104 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v104,
    (Il2CppObject *)v28,
    Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v104, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_23914424(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x25
  int32_t v13; // w22
  ViewEnemyEntity_o *v14; // x24
  QuestInformationListViewItem_o *v15; // x0
  const MethodInfo *v16; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x23
  int32_t v18; // w1
  ViewEnemyEntity_o *v19; // x2
  bool v20; // w3
  __int64 v21; // x0

  if ( (byte_4186EBB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    sub_B2C35C(&QuestInformationListViewItem_TypeInfo, v8);
    byte_4186EBB = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( enemies )
    {
      v11 = *(_QWORD *)&enemies->max_length;
      if ( (int)v11 >= 1 )
      {
        v12 = 0LL;
        v13 = 0;
        while ( 1 )
        {
          if ( v12 >= (unsigned int)v11 )
            goto LABEL_19;
          if ( !veEnts )
            goto LABEL_20;
          if ( v12 >= veEnts->max_length )
          {
LABEL_19:
            v21 = sub_B2C460(itemList);
            sub_B2C400(v21, 0LL);
          }
          v14 = veEnts->m_Items[v12];
          if ( enemies->m_Items[v12 + 1] <= 0 )
            break;
          if ( v14 )
          {
            v15 = (QuestInformationListViewItem_o *)sub_B2C42C(QuestInformationListViewItem_TypeInfo);
            v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
            v18 = v13;
            v19 = v14;
            v20 = 0;
LABEL_14:
            QuestInformationListViewItem___ctor_23902828(v15, v18, v19, v20, v16);
            itemList = this->fields.itemList;
            if ( !itemList )
LABEL_20:
              sub_B2C434(itemList, v10);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
              v17,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v11) = enemies->max_length;
            ++v13;
          }
          if ( (__int64)++v12 >= (int)v11 )
            goto LABEL_17;
        }
        v15 = (QuestInformationListViewItem_o *)sub_B2C42C(QuestInformationListViewItem_TypeInfo);
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
        v20 = 1;
        v18 = v13;
        v19 = v14;
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
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w26
  int32_t v11; // w19
  __int64 v12; // x22
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-54h]

  v6 = this;
  if ( (byte_4186EB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, items);
    this = (QuestInformationListViewManager_o *)sub_B2C35C(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4186EB7 = 1;
  }
  if ( items )
  {
    v8 = *(_QWORD *)&items->max_length;
    if ( (int)v8 >= 1 )
    {
      v17 = sum;
      v9 = 0LL;
      v10 = sum;
      do
      {
        if ( v9 >= (unsigned int)v8 )
        {
          v16 = sub_B2C460(this);
          sub_B2C400(v16, 0LL);
        }
        v11 = items->m_Items[v9 + 1];
        v12 = sub_B2C42C(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_24128628((ListViewItem_o *)v12, v10 + v9, 0LL);
        *(_QWORD *)(v12 + 112) = 0x200000000LL;
        *(_DWORD *)(v12 + 124) = v11;
        if ( !v11 )
          *(_DWORD *)(v12 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.itemList;
        if ( !itemList )
          sub_B2C434(0LL, v13);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v8) = items->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      return v17 + v9;
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
  sub_B2C2F8(
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
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w26
  int32_t v11; // w19
  __int64 v12; // x22
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x0
  __int64 v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-54h]

  v6 = this;
  if ( (byte_4186EB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, svts);
    this = (QuestInformationListViewManager_o *)sub_B2C35C(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4186EB8 = 1;
  }
  if ( svts )
  {
    v8 = *(_QWORD *)&svts->max_length;
    if ( (int)v8 >= 1 )
    {
      v17 = sum;
      v9 = 0LL;
      v10 = sum;
      do
      {
        if ( v9 >= (unsigned int)v8 )
        {
          v16 = sub_B2C460(this);
          sub_B2C400(v16, 0LL);
        }
        v11 = svts->m_Items[v9 + 1];
        v12 = sub_B2C42C(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_24128628((ListViewItem_o *)v12, v10 + v9, 0LL);
        *(_QWORD *)(v12 + 112) = 0x100000000LL;
        *(_DWORD *)(v12 + 124) = v11;
        if ( !v11 )
          *(_DWORD *)(v12 + 116) = 0;
        itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.itemList;
        if ( !itemList )
          sub_B2C434(0LL, v13);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        LODWORD(v8) = svts->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      return v17 + v9;
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

  if ( (byte_4186EB4 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_4186EB4 = 1;
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
      AssetManager__releaseAssetStorage_30161248(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.loadedAssets, 0LL, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_Material_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1

  if ( (byte_4186EBF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Material_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&QuestInformationListViewManager_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v6);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v7);
    byte_4186EBF = 1;
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
                                         (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B2C2F8(p_mChocoTex, UIAtlas, v13, v14, v15, v16, v17, v18);
    }
    v19 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v19 = QuestInformationListViewManager_TypeInfo;
    }
    v20 = UnityEngine_Shader__Find(v19->static_fields->CHOCO_SHADER_SP, 0LL);
    v21 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v21, v20, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v21;
    sub_B2C2F8(p_mChocoMaterialSp, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
    if ( !p_mChocoMaterialSp->klass )
      sub_B2C434(0LL, v28);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/,
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
  UnityEngine_Material_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1

  if ( (byte_4186EBE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Material_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&QuestInformationListViewManager_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v6);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v7);
    byte_4186EBE = 1;
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
                                         (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B2C2F8(p_mChocoTex, UIAtlas, v13, v14, v15, v16, v17, v18);
    }
    v19 = QuestInformationListViewManager_TypeInfo;
    if ( (BYTE3(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v19 = QuestInformationListViewManager_TypeInfo;
    }
    v20 = UnityEngine_Shader__Find(v19->static_fields->CHOCO_SHADER_TX, 0LL);
    v21 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v21, v20, 0LL);
    p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)v21;
    sub_B2C2F8(p_mChocoMaterialTx, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
    if ( !p_mChocoMaterialTx->klass )
      sub_B2C434(0LL, v28);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/,
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
  CommonUI_o *v19; // x20
  QuestInformationListViewManager___c_c *v20; // x8
  struct QuestInformationListViewManager___c_StaticFields *v21; // x9
  ItemDetailInfoComponent_CallbackFunc_o *_9__36_1; // x21
  Il2CppObject *v23; // x22
  struct QuestInformationListViewManager___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t monitor_high; // w19
  CommonUI_o *v32; // x20
  QuestInformationListViewManager___c_c *v33; // x8
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__36_0; // x21
  Il2CppObject *v36; // x22
  struct QuestInformationListViewManager___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  QuestInformationListViewManager_o *v44; // x0
  const MethodInfo *v45; // x1

  v4 = this;
  if ( (byte_4186EBD & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v7);
    sub_B2C35C(&QuestInformationListViewItem_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    sub_B2C35C(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__, v12);
    sub_B2C35C(&Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__, v13);
    this = (QuestInformationListViewManager_o *)sub_B2C35C(&QuestInformationListViewManager___c_TypeInfo, v14);
    byte_4186EBD = 1;
  }
  if ( v4->fields.mIsResetReady )
    return;
  if ( !obj || (linkItem = obj->fields.linkItem) == 0LL )
LABEL_40:
    sub_B2C434(this, obj);
  v16 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v16 - 1] != QuestInformationListViewItem_TypeInfo )
  {
    v44 = (QuestInformationListViewManager_o *)sub_B2C728(linkItem);
    QuestInformationListViewManager__IsListBuilding(v44, v45);
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
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      monitor_high = HIDWORD(linkItem[1].monitor);
      v32 = (CommonUI_o *)this;
      v33 = QuestInformationListViewManager___c_TypeInfo;
      if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
        v33 = QuestInformationListViewManager___c_TypeInfo;
      }
      static_fields = v33->static_fields;
      _9__36_0 = static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        }
        v36 = (Il2CppObject *)static_fields->__9;
        _9__36_0 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__36_0,
          v36,
          Method_QuestInformationListViewManager___c__OnClickListView_b__36_0__,
          0LL);
        v37 = QuestInformationListViewManager___c_TypeInfo->static_fields;
        v37->__9__36_0 = _9__36_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v37->__9__36_0,
          (System_Int32_array **)_9__36_0,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      if ( v32 )
      {
        CommonUI__OpenServantStatusDialog_17985072(v32, 0, monitor_high, _9__36_0, 0LL);
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
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (QuestInformationListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( this )
        {
          Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     HIDWORD(linkItem[1].monitor),
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v19 = (CommonUI_o *)this;
          v20 = QuestInformationListViewManager___c_TypeInfo;
          if ( (BYTE3(QuestInformationListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
            v20 = QuestInformationListViewManager___c_TypeInfo;
          }
          v21 = v20->static_fields;
          _9__36_1 = v21->__9__36_1;
          if ( !_9__36_1 )
          {
            if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              v21 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            }
            v23 = (Il2CppObject *)v21->__9;
            _9__36_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              _9__36_1,
              v23,
              Method_QuestInformationListViewManager___c__OnClickListView_b__36_1__,
              0LL);
            v24 = QuestInformationListViewManager___c_TypeInfo->static_fields;
            v24->__9__36_1 = _9__36_1;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v24->__9__36_1,
              (System_Int32_array **)_9__36_1,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
          }
          if ( v19 )
          {
            CommonUI__OpenItemDetailDialog(v19, Entity, _9__36_1, 50, 0LL);
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

  if ( (byte_4186EBC & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_B2C35C(&QuestInformationListViewObject_TypeInfo, obj);
    byte_4186EBC = 1;
  }
  if ( !obj
    || (v5 = *(&QuestInformationListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  System_Collections_Generic_List_int__o *v14; // x22
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  ItemMaster_o *v18; // x24
  unsigned __int64 v19; // x25
  int32_t *v20; // x26
  const MethodInfo_2F66FF8 *v21; // x2
  System_Collections_Generic_List_int__o *v22; // x0
  System_Int32_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0

  if ( (byte_4186EB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, itms);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4186EB6 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_26;
  v17 = *(_QWORD *)&itms->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = (ItemMaster_o *)Instance;
    v19 = 0LL;
    v20 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
      {
LABEL_27:
        v37 = sub_B2C460(Instance);
        sub_B2C400(v37, 0LL);
      }
      v16 = (unsigned int)v20[v19];
      if ( !(_DWORD)v16 )
        break;
      if ( (_DWORD)v16 == -1 )
      {
        if ( !v14 )
          goto LABEL_26;
        v21 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        v22 = v14;
LABEL_21:
        LODWORD(v16) = 0;
        goto LABEL_22;
      }
      if ( !v18 )
        goto LABEL_26;
      Instance = (DataManager_o *)ItemMaster__isQP(v18, v16, 0LL);
      if ( v19 >= itms->max_length )
        goto LABEL_27;
      v16 = (unsigned int)v20[v19];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_26;
        v21 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        v22 = v14;
      }
      else
      {
        if ( !v13 )
          goto LABEL_26;
        v21 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        v22 = v13;
      }
LABEL_22:
      System_Collections_Generic_List_int___Add(v22, v16, v21);
      LODWORD(v17) = itms->max_length;
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_23;
    }
    if ( !v13 )
      goto LABEL_26;
    v21 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
    v22 = v13;
    goto LABEL_21;
  }
LABEL_23:
  if ( !v13
    || (v23 = System_Collections_Generic_List_int___ToArray(
                v13,
                (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v23,
        sub_B2C2F8((BattleServantConfConponent_o *)withoutQP, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29),
        !v14) )
  {
LABEL_26:
    sub_B2C434(Instance, v16);
  }
  v30 = System_Collections_Generic_List_int___ToArray(
          v14,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v30;
  sub_B2C2F8((BattleServantConfConponent_o *)qps, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
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
  System_Collections_Generic_List_int__o *v15; // x22
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x24
  unsigned __int64 v20; // x25
  int32_t *v21; // x26
  int32_t v22; // w2
  const MethodInfo_2F66FF8 *v23; // x2
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
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4186EB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, svts);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4186EB5 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_29;
  v18 = *(_QWORD *)&svts->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v20 = 0LL;
    v21 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
      {
LABEL_30:
        v40 = sub_B2C460(Instance);
        sub_B2C400(v40, 0LL);
      }
      v22 = v21[v20];
      if ( !v22 )
        break;
      if ( v22 == -1 )
      {
        if ( !v15 )
          goto LABEL_29;
        v23 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        v24 = v15;
LABEL_14:
        v25 = 0;
        goto LABEL_25;
      }
      if ( !v19 )
        goto LABEL_29;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v19,
                                    &entity,
                                    v22,
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_22;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_29;
      Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v20 >= svts->max_length )
          goto LABEL_30;
        if ( !v15 )
          goto LABEL_29;
        v25 = v21[v20];
        v23 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        v24 = v15;
      }
      else
      {
LABEL_22:
        if ( v20 >= svts->max_length )
          goto LABEL_30;
        if ( !v14 )
          goto LABEL_29;
        v25 = v21[v20];
        v23 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
        v24 = v14;
      }
LABEL_25:
      System_Collections_Generic_List_int___Add(v24, v25, v23);
      LODWORD(v18) = svts->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_26;
    }
    if ( !v14 )
      goto LABEL_29;
    v23 = (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__;
    v24 = v14;
    goto LABEL_14;
  }
LABEL_26:
  if ( !v14
    || (v26 = System_Collections_Generic_List_int___ToArray(
                v14,
                (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v26,
        sub_B2C2F8((BattleServantConfConponent_o *)withoutCM, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32),
        !v15) )
  {
LABEL_29:
    sub_B2C434(Instance, v17);
  }
  v33 = System_Collections_Generic_List_int___ToArray(
          v15,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v33;
  sub_B2C2F8((BattleServantConfConponent_o *)combineMaterials, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
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

  if ( (byte_4186EAE & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4186EAE = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4186EB0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186EB0 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B2C728(v7);
  QuestInformationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
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
  QuestInformationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4186EB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4186EB3 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
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
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (QuestInformationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)current,
                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(Component_srcLineSprite, v18);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v11;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
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
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4186EB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4186EB2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v11;
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

  if ( (byte_4186EAF & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewManager_CallbackFunc_TypeInfo, value);
    byte_4186EAF = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4186EB1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186EB1 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (QuestInformationListViewManager_o *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185605 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    byte_4185605 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall QuestInformationListViewManager_CallbackFunc__EndInvoke(
        QuestInformationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  QuestInformationListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  QuestInformationListViewManager_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)result, v22);
    goto LABEL_37;
  }
}


void __fastcall QuestInformationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4185601 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewManager___c_TypeInfo, v1);
    byte_4185601 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestInformationListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestInformationListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v4; // x1

  if ( (byte_4185603 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4185603 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  __int64 v5; // x1

  if ( (byte_4185602 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4185602 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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
  Il2CppObject *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  System_String_array *methodPtr; // x19
  System_Action_o *v7; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4185604 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    this = (QuestInformationListViewManager___c__DisplayClass33_0_o *)sub_B2C35C(
                                                                        &Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__,
                                                                        v4);
    byte_4185604 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    sub_B2C434(this, method);
  methodPtr = (System_String_array *)klass->vtable[4].methodPtr;
  v7 = (System_Action_o *)v2[3].klass;
  if ( !v7 )
  {
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      v2,
      Method_QuestInformationListViewManager___c__DisplayClass33_0__CreateEnemyList_b__1__,
      0LL);
    v2[3].klass = (Il2CppClass *)v7;
    sub_B2C2F8(&v2[3], v7);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30159204(methodPtr, v7, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass33_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  QuestInformationListViewManager__CreateEnemyList_23914424(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}