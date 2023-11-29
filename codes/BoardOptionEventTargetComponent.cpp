void __fastcall BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
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
  struct BoardOptionEventTargetComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FB0D1 & 1) == 0 )
  {
    sub_B16FFC(&BoardOptionEventTargetComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_14955, v8);
    sub_B16FFC(&StringLiteral_4520, v9);
    byte_40FB0D1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_14955;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_14955;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_4520;
  v12->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4520;
  sub_B16F98((BattleServantConfConponent_o *)&v12->CHOCO_SHADER_SP, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall BoardOptionEventTargetComponent___ctor(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
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
  __int64 v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 *v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x24
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  unsigned int **v64; // x25
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  UserQuestInfoMaster_o *v71; // x26
  int64_t UserId; // x0
  __int64 v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  __int64 v77; // x8
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct System_Int32_array *enemyIds; // x0
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x8
  __int64 v90; // x28
  __int64 v91; // x21
  unsigned __int64 v92; // x19
  unsigned int *v93; // x8
  __int64 v94; // x8
  __int64 v95; // x8
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  ViewEnemyEntity_o *v101; // x26
  System_String_o *v102; // x0
  System_String_o *v103; // x26
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  ViewEnemyEntity_o *v108; // x27
  unsigned int *v109; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x22
  BoardOptionEventTargetComponent_o *v111; // x21
  BoardOptionEventTargetComponent___c_c *v112; // x0
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x23
  Il2CppObject *v115; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  int32_t v123; // w1
  System_Int32_array **v124; // x0
  bool *p_loading; // x21
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  __int64 v135; // x4
  System_Action_o *v136; // x19
  BoardOptionEventTargetComponent_o *v137; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v138; // [xsp+8h] [xbp-78h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-6Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v141; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v142; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FB0C9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&AtlasManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ViewEnemyMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___, v15);
    sub_B16FFC(&Method_System_Func_ViewEnemyEntity__bool___ctor__, v16);
    sub_B16FFC(&System_Func_ViewEnemyEntity__bool__TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v22);
    sub_B16FFC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v23);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v24);
    sub_B16FFC(&NetworkManager_TypeInfo, v25);
    sub_B16FFC(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__, v26);
    sub_B16FFC(&Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__, v27);
    sub_B16FFC(&BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo, v28);
    sub_B16FFC(&BoardOptionEventTargetComponent___c_TypeInfo, v29);
    sub_B16FFC(&ViewEnemyEntity___TypeInfo, v30);
    sub_B16FFC(&ViewEnemyEntity_TypeInfo, v31);
    sub_B16FFC(&StringLiteral_12679, v32);
    byte_40FB0C9 = 1;
  }
  v142 = 0LL;
  entity = 0LL;
  v141 = 0LL;
  missionTargetState = 0;
  v33 = sub_B170CC(
          BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo,
          *(_QWORD *)&questId,
          enemies,
          method,
          v4);
  BoardOptionEventTargetComponent___c__DisplayClass7_0___ctor(
    (BoardOptionEventTargetComponent___c__DisplayClass7_0_o *)v33,
    0LL);
  if ( !v33 )
    goto LABEL_52;
  *(_QWORD *)(v33 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v33 + 32) = enemies;
  v40 = (__int64 *)(v33 + 32);
  *(_DWORD *)(v33 + 24) = questId;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 32), (System_Int32_array **)enemies, v41, v42, v43, v44, v45, v46);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v47,
                                                                                                  v48,
                                                                                                  v49,
                                                                                                  v50);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.eventTargetItemDrawList = (struct BoardOptionEventTargetListViewItemDraw_array *)v51;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventTargetItemDrawList,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v137 = this;
  LOBYTE(this->fields.loadedAssets) = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v138 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_string__TypeInfo,
                                                                          v60,
                                                                          v61,
                                                                          v62,
                                                                          v63);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v138,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v33 + 40) = 0LL;
  v64 = (unsigned int **)(v33 + 40);
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 40), 0LL, v65, v66, v67, v68, v69, v70);
  v71 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v71 )
    goto LABEL_52;
  UserQuestInfoMaster__TryGetEntity(v71, &entity, UserId, *(_DWORD *)(v33 + 24), 0LL);
  v77 = *(_QWORD *)(v33 + 32);
  if ( v77 )
  {
    v78 = (System_Int32_array **)sub_B17014(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v77 + 24), v74);
    *v64 = (unsigned int *)v78;
    sub_B16F98((BattleServantConfConponent_o *)(v33 + 40), v78, v79, v80, v81, v82, v83, v84);
    v89 = *v40;
    if ( !*v40 )
      goto LABEL_52;
    v90 = 8LL;
    v91 = 8LL;
    while ( 1 )
    {
      v92 = v90 - 8;
      if ( v90 - 8 >= *(int *)(v89 + 24) )
        break;
      v93 = *v64;
      if ( !*v64 )
        goto LABEL_52;
      if ( v92 >= v93[6] )
        goto LABEL_69;
      *(_QWORD *)&v93[v91] = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&v93[v91], 0LL, v74, v75, v76, v86, v87, v88);
      v94 = *v40;
      if ( !*v40 )
        goto LABEL_52;
      if ( v92 >= *(unsigned int *)(v94 + 24) )
        goto LABEL_69;
      v75 = (System_String_array **)*(unsigned int *)(v94 + 4 * v90);
      if ( (int)v75 >= 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        enemyIds = (struct System_Int32_array *)ViewEnemyMaster__TryGetEntity(
                                                  Master_WarQuestSelectionMaster,
                                                  &v141,
                                                  *(_DWORD *)(v33 + 24),
                                                  (int32_t)v75,
                                                  0LL);
        if ( ((unsigned __int8)enemyIds & 1) != 0 )
        {
          if ( !v141 )
            goto LABEL_52;
          ViewEnemyEntity__IsMissionTarget(v141, v141->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_29;
            enemyIds = entity->fields.enemyIds;
            if ( !enemyIds || !*(_QWORD *)&enemyIds->max_length )
              goto LABEL_29;
            if ( !v141 )
              goto LABEL_52;
            enemyIds = (struct System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)enemyIds,
                                                      v141->fields.enemyId,
                                                      (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
            if ( ((unsigned __int8)enemyIds & 1) == 0 )
            {
LABEL_29:
              v95 = *v40;
              if ( !*v40 )
                goto LABEL_52;
              if ( v92 >= *(unsigned int *)(v95 + 24) )
                goto LABEL_69;
              *(_DWORD *)(v95 + 4 * v90) = 0;
            }
            if ( !v141 || !v59 )
              goto LABEL_52;
            enemyIds = (struct System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      v59,
                                                      &v142,
                                                      v141->fields.svtId,
                                                      (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)enemyIds & 1) != 0 )
            {
              if ( !v142 )
                goto LABEL_52;
              enemyIds = (struct System_Int32_array *)ServantEntity__get_IsOrganization((ServantEntity_o *)v142, 0LL);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
                goto LABEL_39;
              if ( !v141 )
                goto LABEL_52;
              enemyIds = (struct System_Int32_array *)ViewEnemyEntity__IsIconIdUnique(v141, 0LL);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
              {
                if ( !v141 )
                  goto LABEL_52;
                v102 = System_Int32__ToString((int)v141 + 36, 0LL);
                v103 = System_String__Concat_43743732((System_String_o *)StringLiteral_12679, v102, 0LL);
                if ( !v138 )
                  goto LABEL_52;
                if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        v138,
                        (WarBoardManager_TaskList_o *)v103,
                        (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v138,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
                v108 = v141;
                v101 = (ViewEnemyEntity_o *)sub_B170CC(ViewEnemyEntity_TypeInfo, v104, v105, v106, v107);
                ViewEnemyEntity___ctor_34371856(v101, v108, 0LL);
                v141 = v101;
                if ( !v101 )
                  goto LABEL_52;
                v101->fields.iconId = 0;
              }
              else
              {
LABEL_39:
                v101 = v141;
              }
              v109 = *v64;
              if ( !*v64 )
                goto LABEL_52;
              if ( v101 )
              {
                enemyIds = (struct System_Int32_array *)sub_B170BC(v101, *(_QWORD *)(*(_QWORD *)v109 + 64LL));
                if ( !enemyIds )
                {
                  sub_B170F4(0LL);
                  sub_B170A0();
                }
              }
              if ( v92 >= v109[6] )
              {
LABEL_69:
                sub_B17100(enemyIds, v73, v74);
                sub_B170A0();
              }
              *(_QWORD *)&v109[v91] = v101;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v109[v91],
                (System_Int32_array **)v101,
                v74,
                v96,
                v97,
                v98,
                v99,
                v100);
            }
          }
        }
      }
      v89 = *v40;
      ++v90;
      v91 += 2LL;
      if ( !*v40 )
        goto LABEL_52;
    }
  }
  v110 = (System_Collections_Generic_IEnumerable_TSource__o *)*v64;
  if ( *v64 )
  {
    v111 = v137;
    v112 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v112 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    static_fields = v112->static_fields;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v112->vtable._0_Equals.methodPtr) & 4) != 0 && !v112->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v112);
        static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      }
      v115 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_ViewEnemyEntity__bool__TypeInfo,
                                                                                     v73,
                                                                                     v74,
                                                                                     v75,
                                                                                     v76);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_0,
        v115,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_ViewEnemyEntity__bool___ctor__);
      v116 = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      v116->__9__7_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__7_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v116->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122);
    }
    v123 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
             v110,
             (System_Func_TSource__bool__o *)_9__7_0,
             (const MethodInfo_18D4A90 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v111 = v137;
    v123 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(v111, v123, (const MethodInfo *)v74);
  if ( !v138 )
LABEL_52:
    sub_B170D4();
  v124 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v138,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
  *(_QWORD *)&v111->fields.loading = v124;
  p_loading = &v111->fields.loading;
  sub_B16F98((BattleServantConfConponent_o *)p_loading, v124, v126, v127, v128, v129, v130, v131);
  p_loading[8] = 1;
  v136 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v132, v133, v134, v135);
  System_Action___ctor(
    v136,
    (Il2CppObject *)v33,
    Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v136, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_27163780(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w22
  ViewEnemyEntity_o *v12; // x24
  QuestInformationListViewItem_o *v13; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x23
  int32_t v15; // w1
  ViewEnemyEntity_o *v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *eventTargetItemDrawList; // x0

  v7 = this;
  if ( (byte_40FB0CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    this = (BoardOptionEventTargetComponent_o *)sub_B16FFC(&QuestInformationListViewItem_TypeInfo, v8);
    byte_40FB0CA = 1;
  }
  if ( LOBYTE(v7->fields.itemList) )
  {
    LOBYTE(v7->fields.itemList) = 0;
    if ( enemies )
    {
      v9 = *(_QWORD *)&enemies->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = 0LL;
        v11 = 0;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)v9 )
          {
LABEL_19:
            sub_B17100(this, *(_QWORD *)&questId, enemies);
            sub_B170A0();
          }
          if ( enemies->m_Items[v10 + 1] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_20;
          if ( v10 >= veEnts->max_length )
            goto LABEL_19;
          v12 = veEnts->m_Items[v10];
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_B170CC(
                                                      QuestInformationListViewItem_TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      enemies,
                                                      veEnts,
                                                      method);
            v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13;
            v15 = v11;
            v16 = v12;
LABEL_14:
            QuestInformationListViewItem___ctor_23945588(v13, v15, v16, 0, 0LL);
            eventTargetItemDrawList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7->fields.eventTargetItemDrawList;
            if ( !eventTargetItemDrawList )
LABEL_20:
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              eventTargetItemDrawList,
              v14,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v9) = enemies->max_length;
            ++v11;
          }
          if ( (__int64)++v10 >= (int)v9 )
            goto LABEL_17;
        }
        v13 = (QuestInformationListViewItem_o *)sub_B170CC(
                                                  QuestInformationListViewItem_TypeInfo,
                                                  *(_QWORD *)&questId,
                                                  enemies,
                                                  veEnts,
                                                  method);
        v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13;
        v15 = v11;
        v16 = 0LL;
        goto LABEL_14;
      }
    }
LABEL_17:
    BoardOptionEventTargetComponent__DispList(v7, 0, (const MethodInfo *)enemies);
    LOBYTE(v7->fields.loadedAssets) = 0;
  }
  else
  {
    BoardOptionEventTargetComponent__DestroyList(v7, *(const MethodInfo **)&questId);
  }
}


void __fastcall BoardOptionEventTargetComponent__DestroyList(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_loading; // x19
  System_String_array *v4; // x20
  System_String_array *v5; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FB0CC & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40FB0CC = 1;
  }
  if ( LOBYTE(this->fields.itemList) )
  {
    LOBYTE(this->fields.itemList) = 0;
  }
  else
  {
    v5 = *(System_String_array **)&this->fields.loading;
    p_loading = (BattleServantConfConponent_o *)&this->fields.loading;
    v4 = v5;
    if ( v5 )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage_29955940(v4, 0LL);
      p_loading->klass = 0LL;
      sub_B16F98(p_loading, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent__DispEmptyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t useNum,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v4; // x0
  int32_t v5; // w20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UnityEngine_GameObject_o *missionTargetLabel; // x8
  int klass; // w9
  signed int v11; // w10
  __int64 v12; // x21
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x3
  struct UnityEngine_GameObject_o *v16; // x8
  BoardOptionEventTargetListViewItemDraw_o *v17; // x0

  v4 = *(UnityEngine_GameObject_o **)&this->fields.nowOffset;
  if ( !v4
    || (v5 = useNum,
        UnityEngine_GameObject__SetActive(v4, useNum > 0, 0LL),
        (missionTargetLabel = this->fields.missionTargetLabel) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  klass = (int)missionTargetLabel[1].klass;
  if ( klass < v5 )
    v5 = (int32_t)missionTargetLabel[1].klass;
  if ( klass >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)klass )
      {
LABEL_20:
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
      v12 = v11;
      v13 = (UnityEngine_Component_o *)*((_QWORD *)&missionTargetLabel[1].monitor + v11);
      if ( !v13 )
        goto LABEL_19;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !gameObject )
        goto LABEL_19;
      if ( (int)v12 >= v5 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v16 = this->fields.missionTargetLabel;
        if ( !v16 )
          goto LABEL_19;
        if ( (unsigned int)v12 >= LODWORD(v16[1].klass) )
          goto LABEL_20;
        v17 = (BoardOptionEventTargetListViewItemDraw_o *)*((_QWORD *)&v16[1].monitor + v12);
        if ( !v17 )
          goto LABEL_19;
        BoardOptionEventTargetListViewItemDraw__SetItem(v17, 0LL, 0, v15);
      }
      missionTargetLabel = this->fields.missionTargetLabel;
      if ( !missionTargetLabel )
        goto LABEL_19;
      klass = (int)missionTargetLabel[1].klass;
      v11 = v12 + 1;
    }
    while ( (int)v12 + 1 < klass );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__DispList(
        BoardOptionEventTargetComponent_o *this,
        int32_t offset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x0
  QuestInformationListViewItem_o *v10; // x1
  __int64 v11; // x2
  struct BoardOptionEventTargetListViewItemDraw_array *v12; // x9
  struct UnityEngine_GameObject_o *missionTargetLabel; // x8
  __int64 v14; // x21
  int32_t v15; // w22
  unsigned int v16; // w20
  UnityEngine_GameObject_c *klass; // x9
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v21; // x24
  int v22; // w25
  Il2CppArrayBounds v23; // x8
  __int64 v24; // x11
  struct UnityEngine_GameObject_o *v25; // x8
  BoardOptionEventTargetListViewItemDraw_o *v26; // x0
  struct BoardOptionEventTargetListViewItemDraw_array *v27; // x8

  if ( (byte_40FB0CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&offset);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&QuestInformationListViewItem_TypeInfo, v6);
    byte_40FB0CB = 1;
  }
  eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    goto LABEL_29;
  v8 = *(UnityEngine_GameObject_o **)&this->fields.nowOffset;
  if ( !v8 )
    goto LABEL_29;
  if ( (int)eventTargetItemDrawList->max_length <= 0 )
  {
    UnityEngine_GameObject__SetActive(v8, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(v8, 1, 0LL);
  v12 = this->fields.eventTargetItemDrawList;
  LODWORD(this->fields.mChocoTex) = offset;
  if ( !v12 )
    goto LABEL_29;
  missionTargetLabel = this->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    goto LABEL_29;
  v14 = 0LL;
  v15 = offset;
  v16 = (v12->max_length - offset) & ~((signed int)(v12->max_length - offset) >> 31);
  while ( 1 )
  {
    klass = missionTargetLabel[1].klass;
    if ( (int)v14 >= (int)klass )
      break;
    if ( (unsigned int)v14 >= (unsigned int)klass )
      goto LABEL_35;
    v18 = (UnityEngine_Component_o *)*((_QWORD *)&missionTargetLabel[1].monitor + v14);
    if ( !v18 )
      goto LABEL_29;
    gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    if ( (unsigned int)v14 >= v16 )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v21 = this->fields.eventTargetItemDrawList;
      if ( !v21 )
        goto LABEL_29;
      v22 = v15 + v14;
      if ( v21->max_length <= (unsigned int)(v15 + v14) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v23 = v21->bounds[v22 + 4];
      if ( *(_QWORD *)&v23
        && (v24 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(**(_QWORD **)&v23 + 300LL) >= (unsigned int)v24) )
      {
        v10 = *(QuestInformationListViewItem_c **)(*(_QWORD *)(**(_QWORD **)&v23 + 200LL) + 8 * v24 - 8) == QuestInformationListViewItem_TypeInfo
            ? *(QuestInformationListViewItem_o **)&v21->bounds[v22 + 4]
            : 0LL;
      }
      else
      {
        v10 = 0LL;
      }
      v25 = this->fields.missionTargetLabel;
      if ( !v25 )
        goto LABEL_29;
      if ( (unsigned int)v14 >= LODWORD(v25[1].klass) )
      {
LABEL_35:
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      v26 = (BoardOptionEventTargetListViewItemDraw_o *)*((_QWORD *)&v25[1].monitor + v14);
      if ( !v26 )
        goto LABEL_29;
      BoardOptionEventTargetListViewItemDraw__SetItem(v26, v10, 2, v20);
    }
    missionTargetLabel = this->fields.missionTargetLabel;
    ++v14;
    if ( !missionTargetLabel )
      goto LABEL_29;
  }
  v27 = this->fields.eventTargetItemDrawList;
  if ( !v27 )
LABEL_29:
    sub_B170D4();
  if ( (signed int)v27->max_length <= (int)klass )
    BoardOptionEventTargetComponent__SetAlpha(this, 1.0, (const MethodInfo *)v10);
}


bool __fastcall BoardOptionEventTargetComponent__IsNeedAnim(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct UnityEngine_GameObject_o *missionTargetLabel; // x9

  if ( (byte_40FB0CF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_40FB0CF = 1;
  }
  eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    return 0;
  missionTargetLabel = this->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    sub_B170D4();
  return (signed int)eventTargetItemDrawList->max_length > SLODWORD(missionTargetLabel[1].klass);
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantConfConponent_o *v8; // x20
  UnityEngine_Object_o *klass; // x21
  BattleServantConfConponent_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Material_o *mChocoMaterialTx; // t1
  System_Int32_array **UIAtlas; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BoardOptionEventTargetComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UnityEngine_Material_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FB0CE & 1) == 0 )
  {
    sub_B16FFC(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B16FFC(&StringLiteral_15875, v6);
    sub_B16FFC(&StringLiteral_12773, v7);
    byte_40FB0CE = 1;
  }
  v8 = (BattleServantConfConponent_o *)&this[1];
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    mChocoMaterialTx = this->fields.mChocoMaterialTx;
    p_mChocoMaterialTx = (BattleServantConfConponent_o *)&this->fields.mChocoMaterialTx;
    v11 = (UnityEngine_Object_o *)mChocoMaterialTx;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      UIAtlas = (System_Int32_array **)UnityEngine_Resources__Load_UIAtlas_(
                                         (System_String_o *)StringLiteral_12773,
                                         (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B16F98(p_mChocoMaterialTx, UIAtlas, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_SP, 0LL);
    v26 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v22, v23, v24, v25);
    UnityEngine_Material___ctor(v26, v21, 0LL);
    v8->klass = (BattleServantConfConponent_c *)v26;
    sub_B16F98(v8, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    if ( !v8->klass )
      sub_B170D4();
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)v8->klass,
      (System_String_o *)StringLiteral_15875,
      (UnityEngine_Texture_o *)p_mChocoMaterialTx->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)v8->klass;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantConfConponent_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  BattleServantConfConponent_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Material_o *mChocoMaterialTx; // t1
  System_Int32_array **UIAtlas; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BoardOptionEventTargetComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UnityEngine_Material_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FB0CD & 1) == 0 )
  {
    sub_B16FFC(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B16FFC(&StringLiteral_15875, v6);
    sub_B16FFC(&StringLiteral_12773, v7);
    byte_40FB0CD = 1;
  }
  p_mChocoMaterialSp = (BattleServantConfConponent_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoMaterialTx = this->fields.mChocoMaterialTx;
    p_mChocoMaterialTx = (BattleServantConfConponent_o *)&this->fields.mChocoMaterialTx;
    v11 = (UnityEngine_Object_o *)mChocoMaterialTx;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      UIAtlas = (System_Int32_array **)UnityEngine_Resources__Load_UIAtlas_(
                                         (System_String_o *)StringLiteral_12773,
                                         (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B16F98(p_mChocoMaterialTx, UIAtlas, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_TX, 0LL);
    v26 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v22, v23, v24, v25);
    UnityEngine_Material___ctor(v26, v21, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v26;
    sub_B16F98(p_mChocoMaterialSp, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    if ( !p_mChocoMaterialSp->klass )
      sub_B170D4();
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_15875,
      (UnityEngine_Texture_o *)p_mChocoMaterialTx->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__SetAlpha(
        BoardOptionEventTargetComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  __int64 v3; // x2
  struct UnityEngine_GameObject_o *missionTargetLabel; // x8
  BoardOptionEventTargetComponent_o *v5; // x19
  long double v6; // q8
  __int64 v7; // x20
  int klass; // w9
  __int64 v9; // x8
  __int64 v10; // x0

  missionTargetLabel = this->fields.missionTargetLabel;
  if ( !missionTargetLabel )
LABEL_8:
    sub_B170D4();
  v5 = this;
  v6 = *(long double *)&alpha;
  v7 = 0LL;
  while ( 1 )
  {
    klass = (int)missionTargetLabel[1].klass;
    if ( (int)v7 >= klass )
      break;
    if ( (unsigned int)v7 >= klass )
    {
      sub_B17100(this, method, v3);
      sub_B170A0();
    }
    v9 = *((_QWORD *)&missionTargetLabel[1].monitor + v7);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 152);
      if ( v10 )
      {
        this = (BoardOptionEventTargetComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v10 + 440LL))(
                                                      v10,
                                                      *(_QWORD *)(*(_QWORD *)v10 + 448LL),
                                                      v6);
        missionTargetLabel = v5->fields.missionTargetLabel;
        ++v7;
        if ( missionTargetLabel )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void __fastcall BoardOptionEventTargetComponent__SetNextTarget(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct UnityEngine_GameObject_o *missionTargetLabel; // x9
  signed int max_length; // w8
  signed int klass; // w9
  int32_t v8; // w9
  int32_t v9; // w1

  if ( (byte_40FB0D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    byte_40FB0D0 = 1;
  }
  eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
  if ( eventTargetItemDrawList )
  {
    missionTargetLabel = this->fields.missionTargetLabel;
    if ( !missionTargetLabel )
      sub_B170D4();
    max_length = eventTargetItemDrawList->max_length;
    klass = (signed int)missionTargetLabel[1].klass;
    if ( max_length > klass )
    {
      v8 = LODWORD(this->fields.mChocoTex) + klass;
      if ( v8 <= max_length )
        v9 = v8;
      else
        v9 = 0;
      BoardOptionEventTargetComponent__DispList(this, v9, v2);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F708F & 1) == 0 )
  {
    sub_B16FFC(&BoardOptionEventTargetComponent___c_TypeInfo, v1);
    byte_40F708F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BoardOptionEventTargetComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BoardOptionEventTargetComponent___c___ctor(
        BoardOptionEventTargetComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BoardOptionEventTargetComponent___c___CreateEnemyList_b__7_0(
        BoardOptionEventTargetComponent___c_o *this,
        ViewEnemyEntity_o *n,
        const MethodInfo *method)
{
  return n != 0LL;
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass7_0___ctor(
        BoardOptionEventTargetComponent___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass7_0___CreateEnemyList_b__1(
        BoardOptionEventTargetComponent___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BoardOptionEventTargetComponent_o *_4__this; // x8
  System_String_array *v9; // x19
  System_Action_o *_9__2; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40F7090 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    sub_B16FFC(&Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__, v7);
    byte_40F7090 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  v9 = *(System_String_array **)&_4__this->fields.loading;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953896(v9, _9__2, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass7_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  BoardOptionEventTargetComponent__CreateEnemyList_27163780(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}