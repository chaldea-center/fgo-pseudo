void __fastcall BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
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
  struct BoardOptionEventTargetComponent_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E863C & 1) == 0 )
  {
    sub_B5D5C4(&BoardOptionEventTargetComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_15173/*"Unlit/Transparent Colored_Choco"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_4610/*"Custom/SpriteWithMask_Choco"*/, v11, v12, v13);
    byte_42E863C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_15173/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15173/*"Unlit/Transparent Colored_Choco"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_4610/*"Custom/SpriteWithMask_Choco"*/;
  v16->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4610/*"Custom/SpriteWithMask_Choco"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->CHOCO_SHADER_SP, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall BoardOptionEventTargetComponent___ctor(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoardOptionEventTargetComponent__CreateEnemyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
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
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  __int64 v82; // x20
  __int64 UserId; // x0
  __int64 v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 *v91; // x22
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v98; // x21
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x24
  unsigned int **v107; // x25
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  UserQuestInfoMaster_o *v114; // x26
  System_String_array **v115; // x2
  __int64 v116; // x8
  System_Int32_array **v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  __int64 v129; // x8
  __int64 v130; // x28
  __int64 v131; // x21
  unsigned __int64 v132; // x19
  unsigned int *v133; // x8
  __int64 v134; // x8
  __int64 v135; // x8
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  ViewEnemyEntity_o *v142; // x26
  System_String_o *v143; // x0
  System_String_o *v144; // x26
  ViewEnemyEntity_o *v145; // x27
  unsigned int *v146; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v147; // x22
  BoardOptionEventTargetComponent_o *v148; // x21
  BoardOptionEventTargetComponent___c_c *v149; // x0
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x23
  Il2CppObject *v152; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  int32_t v160; // w1
  System_Int32_array **v161; // x0
  bool *p_loading; // x21
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Action_o *v169; // x19
  __int64 v170; // x0
  __int64 v171; // x0
  BoardOptionEventTargetComponent_o *v172; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v173; // [xsp+8h] [xbp-78h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-6Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v176; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v177; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E8634 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, questId, (_DWORD)enemies, method);
    sub_B5D5C4(&AtlasManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_ViewEnemyMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v25, v26, v27);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___, v28, v29, v30);
    sub_B5D5C4(&Method_System_Func_ViewEnemyEntity__bool___ctor__, v31, v32, v33);
    sub_B5D5C4(&System_Func_ViewEnemyEntity__bool__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v49, v50, v51);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v52, v53, v54);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v55, v56, v57);
    sub_B5D5C4(&NetworkManager_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__, v61, v62, v63);
    sub_B5D5C4(&Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__, v64, v65, v66);
    sub_B5D5C4(&BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&BoardOptionEventTargetComponent___c_TypeInfo, v70, v71, v72);
    sub_B5D5C4(&ViewEnemyEntity___TypeInfo, v73, v74, v75);
    sub_B5D5C4(&ViewEnemyEntity_TypeInfo, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_12891/*"Servants/Commands/"*/, v79, v80, v81);
    byte_42E8634 = 1;
  }
  v177 = 0LL;
  entity = 0LL;
  v176 = 0LL;
  missionTargetState = 0;
  v82 = sub_B5D694(BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo);
  BoardOptionEventTargetComponent___c__DisplayClass7_0___ctor(
    (BoardOptionEventTargetComponent___c__DisplayClass7_0_o *)v82,
    0LL);
  if ( !v82 )
    goto LABEL_52;
  *(_QWORD *)(v82 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v82 + 16), (System_Int32_array **)this, v85, v86, v87, v88, v89, v90);
  *(_QWORD *)(v82 + 32) = enemies;
  v91 = (__int64 *)(v82 + 32);
  *(_DWORD *)(v82 + 24) = questId;
  sub_B5D560((BattleServantConfConponent_o *)(v82 + 32), (System_Int32_array **)enemies, v92, v93, v94, v95, v96, v97);
  v98 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v98,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.eventTargetItemDrawList = (struct BoardOptionEventTargetListViewItemDraw_array *)v98;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventTargetItemDrawList,
    (System_Int32_array **)v98,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  v172 = this;
  LOBYTE(this->fields.loadedAssets) = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v106 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v173 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v173,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v82 + 40) = 0LL;
  v107 = (unsigned int **)(v82 + 40);
  sub_B5D560((BattleServantConfConponent_o *)(v82 + 40), 0LL, v108, v109, v110, v111, v112, v113);
  v114 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v114 )
    goto LABEL_52;
  UserQuestInfoMaster__TryGetEntity(v114, &entity, UserId, *(_DWORD *)(v82 + 24), 0LL);
  v116 = *(_QWORD *)(v82 + 32);
  if ( v116 )
  {
    v117 = (System_Int32_array **)sub_B5D5DC(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v116 + 24));
    *v107 = (unsigned int *)v117;
    sub_B5D560((BattleServantConfConponent_o *)(v82 + 40), v117, v118, v119, v120, v121, v122, v123);
    v129 = *v91;
    if ( !*v91 )
      goto LABEL_52;
    v130 = 8LL;
    v131 = 8LL;
    while ( 1 )
    {
      v132 = v130 - 8;
      if ( v130 - 8 >= *(int *)(v129 + 24) )
        break;
      v133 = *v107;
      if ( !*v107 )
        goto LABEL_52;
      if ( v132 >= v133[6] )
        goto LABEL_69;
      *(_QWORD *)&v133[v131] = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v133[v131], 0LL, v115, v124, v125, v126, v127, v128);
      v134 = *v91;
      if ( !*v91 )
        goto LABEL_52;
      if ( v132 >= *(unsigned int *)(v134 + 24) )
        goto LABEL_69;
      v124 = (System_String_array **)*(unsigned int *)(v134 + 4 * v130);
      if ( (int)v124 >= 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        UserId = ViewEnemyMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &v176,
                   *(_DWORD *)(v82 + 24),
                   (int32_t)v124,
                   0LL);
        if ( (UserId & 1) != 0 )
        {
          UserId = (__int64)v176;
          if ( !v176 )
            goto LABEL_52;
          ViewEnemyEntity__IsMissionTarget(v176, v176->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_29;
            UserId = (__int64)entity->fields.enemyIds;
            if ( !UserId || !*(_QWORD *)(UserId + 24) )
              goto LABEL_29;
            if ( !v176 )
              goto LABEL_52;
            UserId = System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)UserId,
                       v176->fields.enemyId,
                       (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
            if ( (UserId & 1) == 0 )
            {
LABEL_29:
              v135 = *v91;
              if ( !*v91 )
                goto LABEL_52;
              if ( v132 >= *(unsigned int *)(v135 + 24) )
                goto LABEL_69;
              *(_DWORD *)(v135 + 4 * v130) = 0;
            }
            if ( !v176 || !v106 )
              goto LABEL_52;
            UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       v106,
                       &v177,
                       v176->fields.svtId,
                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (UserId & 1) != 0 )
            {
              UserId = (__int64)v177;
              if ( !v177 )
                goto LABEL_52;
              UserId = ServantEntity__get_IsOrganization((ServantEntity_o *)v177, 0LL);
              if ( (UserId & 1) == 0 )
                goto LABEL_39;
              UserId = (__int64)v176;
              if ( !v176 )
                goto LABEL_52;
              UserId = ViewEnemyEntity__IsIconIdUnique(v176, 0LL);
              if ( (UserId & 1) == 0 )
              {
                if ( !v176 )
                  goto LABEL_52;
                v143 = System_Int32__ToString((int)v176 + 36, 0LL);
                v144 = System_String__Concat_44577788((System_String_o *)StringLiteral_12891/*"Servants/Commands/"*/, v143, 0LL);
                UserId = (__int64)v173;
                if ( !v173 )
                  goto LABEL_52;
                if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        v173,
                        (WarBoardManager_TaskList_o *)v144,
                        (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v173,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v144,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                v145 = v176;
                v142 = (ViewEnemyEntity_o *)sub_B5D694(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_35264848(v142, v145, 0LL);
                v176 = v142;
                if ( !v142 )
                  goto LABEL_52;
                v142->fields.iconId = 0;
              }
              else
              {
LABEL_39:
                v142 = v176;
              }
              v146 = *v107;
              if ( !*v107 )
                goto LABEL_52;
              if ( v142 )
              {
                UserId = sub_B5D684(v142, *(_QWORD *)(*(_QWORD *)v146 + 64LL));
                if ( !UserId )
                {
                  v171 = sub_B5D6BC(0LL);
                  sub_B5D668(v171, 0LL);
                }
              }
              if ( v132 >= v146[6] )
              {
LABEL_69:
                v170 = sub_B5D6C8(UserId);
                sub_B5D668(v170, 0LL);
              }
              *(_QWORD *)&v146[v131] = v142;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v146[v131],
                (System_Int32_array **)v142,
                v136,
                v137,
                v138,
                v139,
                v140,
                v141);
            }
          }
        }
      }
      v129 = *v91;
      ++v130;
      v131 += 2LL;
      if ( !*v91 )
        goto LABEL_52;
    }
  }
  v147 = (System_Collections_Generic_IEnumerable_TSource__o *)*v107;
  if ( *v107 )
  {
    v148 = v172;
    v149 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v149 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    static_fields = v149->static_fields;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v149->vtable._0_Equals.methodPtr) & 4) != 0 && !v149->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v149);
        static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      }
      v152 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_0,
        v152,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_ViewEnemyEntity__bool___ctor__);
      v153 = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      v153->__9__7_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__7_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v153->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
    }
    v160 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
             v147,
             (System_Func_TSource__bool__o *)_9__7_0,
             (const MethodInfo_1CA8A5C *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v148 = v172;
    v160 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(v148, v160, (const MethodInfo *)v115);
  UserId = (__int64)v173;
  if ( !v173 )
LABEL_52:
    sub_B5D69C(UserId, v84);
  v161 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v173,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
  *(_QWORD *)&v148->fields.loading = v161;
  p_loading = &v148->fields.loading;
  sub_B5D560((BattleServantConfConponent_o *)p_loading, v161, v163, v164, v165, v166, v167, v168);
  p_loading[8] = 1;
  v169 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v169,
    (Il2CppObject *)v82,
    Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v169, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_24902996(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v7; // x19
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x25
  int32_t v13; // w22
  ViewEnemyEntity_o *v14; // x24
  QuestInformationListViewItem_o *v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x23
  int32_t v17; // w1
  ViewEnemyEntity_o *v18; // x2
  __int64 v19; // x0

  v7 = this;
  if ( (byte_42E8635 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, questId, (_DWORD)enemies, veEnts);
    this = (BoardOptionEventTargetComponent_o *)sub_B5D5C4(&QuestInformationListViewItem_TypeInfo, v8, v9, v10);
    byte_42E8635 = 1;
  }
  if ( LOBYTE(v7->fields.itemList) )
  {
    LOBYTE(v7->fields.itemList) = 0;
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
          {
LABEL_19:
            v19 = sub_B5D6C8(this);
            sub_B5D668(v19, 0LL);
          }
          if ( enemies->m_Items[v12 + 1] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_20;
          if ( v12 >= veEnts->max_length )
            goto LABEL_19;
          v14 = veEnts->m_Items[v12];
          if ( v14 )
          {
            v15 = (QuestInformationListViewItem_o *)sub_B5D694(QuestInformationListViewItem_TypeInfo);
            v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
            v17 = v13;
            v18 = v14;
LABEL_14:
            QuestInformationListViewItem___ctor_25432488(v15, v17, v18, 0, 0LL);
            this = (BoardOptionEventTargetComponent_o *)v7->fields.eventTargetItemDrawList;
            if ( !this )
LABEL_20:
              sub_B5D69C(this, *(_QWORD *)&questId);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              v16,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v11) = enemies->max_length;
            ++v13;
          }
          if ( (__int64)++v12 >= (int)v11 )
            goto LABEL_17;
        }
        v15 = (QuestInformationListViewItem_o *)sub_B5D694(QuestInformationListViewItem_TypeInfo);
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
        v17 = v13;
        v18 = 0LL;
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
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_loading; // x19
  System_String_array *v6; // x20
  System_String_array *v7; // t1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8637 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8637 = 1;
  }
  if ( LOBYTE(this->fields.itemList) )
  {
    LOBYTE(this->fields.itemList) = 0;
  }
  else
  {
    v7 = *(System_String_array **)&this->fields.loading;
    p_loading = (BattleServantConfConponent_o *)&this->fields.loading;
    v6 = v7;
    if ( v7 )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage_30666128(v6, 0LL);
      p_loading->klass = 0LL;
      sub_B5D560(p_loading, 0LL, v8, v9, v10, v11, v12, v13);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__DispEmptyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t useNum,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v5; // w20
  struct UnityEngine_GameObject_o *missionTargetLabel; // x8
  int klass; // w9
  signed int v8; // w10
  __int64 v9; // x21
  const MethodInfo *v10; // x3
  struct UnityEngine_GameObject_o *v11; // x8
  __int64 v12; // x0

  gameObject = *(UnityEngine_GameObject_o **)&this->fields.nowOffset;
  if ( !gameObject
    || (v5 = useNum,
        UnityEngine_GameObject__SetActive(gameObject, useNum > 0, 0LL),
        (missionTargetLabel = this->fields.missionTargetLabel) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(gameObject, *(_QWORD *)&useNum);
  }
  klass = (int)missionTargetLabel[1].klass;
  if ( klass < v5 )
    v5 = (int32_t)missionTargetLabel[1].klass;
  if ( klass >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)klass )
      {
LABEL_20:
        v12 = sub_B5D6C8(gameObject);
        sub_B5D668(v12, 0LL);
      }
      v9 = v8;
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&missionTargetLabel[1].monitor + v8);
      if ( !gameObject )
        goto LABEL_19;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_19;
      if ( (int)v9 >= v5 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v11 = this->fields.missionTargetLabel;
        if ( !v11 )
          goto LABEL_19;
        if ( (unsigned int)v9 >= LODWORD(v11[1].klass) )
          goto LABEL_20;
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v11[1].monitor + v9);
        if ( !gameObject )
          goto LABEL_19;
        BoardOptionEventTargetListViewItemDraw__SetItem(
          (BoardOptionEventTargetListViewItemDraw_o *)gameObject,
          0LL,
          0,
          v10);
      }
      missionTargetLabel = this->fields.missionTargetLabel;
      if ( !missionTargetLabel )
        goto LABEL_19;
      klass = (int)missionTargetLabel[1].klass;
      v8 = v9 + 1;
    }
    while ( (int)v9 + 1 < klass );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__DispList(
        BoardOptionEventTargetComponent_o *this,
        int32_t offset,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  BoardOptionEventTargetComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v13; // x9
  struct UnityEngine_GameObject_o *missionTargetLabel; // x8
  __int64 v15; // x21
  int32_t v16; // w22
  unsigned int v17; // w20
  UnityEngine_GameObject_c *klass; // x9
  const MethodInfo *v19; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v20; // x24
  int v21; // w25
  Il2CppArrayBounds v22; // x8
  __int64 v23; // x11
  struct UnityEngine_GameObject_o *v24; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v25; // x8
  __int64 v26; // x0

  v4 = offset;
  v5 = this;
  if ( (byte_42E8636 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, offset, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (BoardOptionEventTargetComponent_o *)sub_B5D5C4(&QuestInformationListViewItem_TypeInfo, v9, v10, v11);
    byte_42E8636 = 1;
  }
  eventTargetItemDrawList = v5->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    goto LABEL_29;
  this = *(BoardOptionEventTargetComponent_o **)&v5->fields.nowOffset;
  if ( !this )
    goto LABEL_29;
  if ( (int)eventTargetItemDrawList->max_length <= 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v13 = v5->fields.eventTargetItemDrawList;
  LODWORD(v5->fields.mChocoTex) = v4;
  if ( !v13 )
    goto LABEL_29;
  missionTargetLabel = v5->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    goto LABEL_29;
  v15 = 0LL;
  v16 = v4;
  v17 = (v13->max_length - v4) & ~((signed int)(v13->max_length - v4) >> 31);
  while ( 1 )
  {
    klass = missionTargetLabel[1].klass;
    if ( (int)v15 >= (int)klass )
      break;
    if ( (unsigned int)v15 >= (unsigned int)klass )
      goto LABEL_35;
    this = (BoardOptionEventTargetComponent_o *)*((_QWORD *)&missionTargetLabel[1].monitor + v15);
    if ( !this )
      goto LABEL_29;
    this = (BoardOptionEventTargetComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_29;
    if ( (unsigned int)v15 >= v17 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v20 = v5->fields.eventTargetItemDrawList;
      if ( !v20 )
        goto LABEL_29;
      v21 = v16 + v15;
      if ( v20->max_length <= (unsigned int)(v16 + v15) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v22 = v20->bounds[v21 + 4];
      if ( *(_QWORD *)&v22
        && (v23 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(**(_QWORD **)&v22 + 300LL) >= (unsigned int)v23) )
      {
        *(_QWORD *)&offset = *(QuestInformationListViewItem_c **)(*(_QWORD *)(**(_QWORD **)&v22 + 200LL) + 8 * v23 - 8) == QuestInformationListViewItem_TypeInfo
                           ? *(_QWORD *)&v20->bounds[v21 + 4]
                           : 0LL;
      }
      else
      {
        *(_QWORD *)&offset = 0LL;
      }
      v24 = v5->fields.missionTargetLabel;
      if ( !v24 )
        goto LABEL_29;
      if ( (unsigned int)v15 >= LODWORD(v24[1].klass) )
      {
LABEL_35:
        v26 = sub_B5D6C8(this);
        sub_B5D668(v26, 0LL);
      }
      this = (BoardOptionEventTargetComponent_o *)*((_QWORD *)&v24[1].monitor + v15);
      if ( !this )
        goto LABEL_29;
      BoardOptionEventTargetListViewItemDraw__SetItem(
        (BoardOptionEventTargetListViewItemDraw_o *)this,
        *(QuestInformationListViewItem_o **)&offset,
        2,
        v19);
    }
    missionTargetLabel = v5->fields.missionTargetLabel;
    ++v15;
    if ( !missionTargetLabel )
      goto LABEL_29;
  }
  v25 = v5->fields.eventTargetItemDrawList;
  if ( !v25 )
LABEL_29:
    sub_B5D69C(this, *(_QWORD *)&offset);
  if ( (signed int)v25->max_length <= (int)klass )
    BoardOptionEventTargetComponent__SetAlpha(v5, 1.0, *(const MethodInfo **)&offset);
}


bool __fastcall BoardOptionEventTargetComponent__IsNeedAnim(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BoardOptionEventTargetComponent_o *v4; // x19
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct UnityEngine_GameObject_o *missionTargetLabel; // x9

  v4 = this;
  if ( (byte_42E863A & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  (_DWORD)method,
                                                  v2,
                                                  v3);
    byte_42E863A = 1;
  }
  eventTargetItemDrawList = v4->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    return 0;
  missionTargetLabel = v4->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    sub_B5D69C(this, method);
  return (signed int)eventTargetItemDrawList->max_length > SLODWORD(missionTargetLabel[1].klass);
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
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
  BattleServantConfConponent_o *v20; // x20
  UnityEngine_Object_o *klass; // x21
  BattleServantConfConponent_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *v23; // x21
  struct UnityEngine_Material_o *mChocoMaterialTx; // t1
  System_Int32_array **UIAtlas; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BoardOptionEventTargetComponent_c *v32; // x0
  UnityEngine_Shader_o *v33; // x21
  UnityEngine_Material_o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1

  if ( (byte_42E8639 & 1) == 0 )
  {
    sub_B5D5C4(&BoardOptionEventTargetComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v17, v18, v19);
    byte_42E8639 = 1;
  }
  v20 = (BattleServantConfConponent_o *)&this[1];
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
    v23 = (UnityEngine_Object_o *)mChocoMaterialTx;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v23, 0LL, 0LL) )
    {
      UIAtlas = (System_Int32_array **)UnityEngine_Resources__Load_UIAtlas_(
                                         (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B5D560(p_mChocoMaterialTx, UIAtlas, v26, v27, v28, v29, v30, v31);
    }
    v32 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v32 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v33 = UnityEngine_Shader__Find(v32->static_fields->CHOCO_SHADER_SP, 0LL);
    v34 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v34, v33, 0LL);
    v20->klass = (BattleServantConfConponent_c *)v34;
    sub_B5D560(v20, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    if ( !v20->klass )
      sub_B5D69C(0LL, v41);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)v20->klass,
      (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoMaterialTx->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)v20->klass;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
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
  BattleServantConfConponent_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  BattleServantConfConponent_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *v23; // x21
  struct UnityEngine_Material_o *mChocoMaterialTx; // t1
  System_Int32_array **UIAtlas; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BoardOptionEventTargetComponent_c *v32; // x0
  UnityEngine_Shader_o *v33; // x21
  UnityEngine_Material_o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1

  if ( (byte_42E8638 & 1) == 0 )
  {
    sub_B5D5C4(&BoardOptionEventTargetComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v17, v18, v19);
    byte_42E8638 = 1;
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
    v23 = (UnityEngine_Object_o *)mChocoMaterialTx;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v23, 0LL, 0LL) )
    {
      UIAtlas = (System_Int32_array **)UnityEngine_Resources__Load_UIAtlas_(
                                         (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B5D560(p_mChocoMaterialTx, UIAtlas, v26, v27, v28, v29, v30, v31);
    }
    v32 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v32 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v33 = UnityEngine_Shader__Find(v32->static_fields->CHOCO_SHADER_TX, 0LL);
    v34 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v34, v33, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v34;
    sub_B5D560(p_mChocoMaterialSp, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    if ( !p_mChocoMaterialSp->klass )
      sub_B5D69C(0LL, v41);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/,
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
  struct UnityEngine_GameObject_o *missionTargetLabel; // x8
  BoardOptionEventTargetComponent_o *v4; // x19
  long double v5; // q8
  __int64 v6; // x20
  int klass; // w9
  __int64 v8; // x8
  __int64 v9; // x0

  missionTargetLabel = this->fields.missionTargetLabel;
  if ( !missionTargetLabel )
LABEL_8:
    sub_B5D69C(this, method);
  v4 = this;
  v5 = *(long double *)&alpha;
  v6 = 0LL;
  while ( 1 )
  {
    klass = (int)missionTargetLabel[1].klass;
    if ( (int)v6 >= klass )
      break;
    if ( (unsigned int)v6 >= klass )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
    }
    v8 = *((_QWORD *)&missionTargetLabel[1].monitor + v6);
    if ( v8 )
    {
      this = *(BoardOptionEventTargetComponent_o **)(v8 + 152);
      if ( this )
      {
        this = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(BoardOptionEventTargetComponent_o *, Il2CppClass *, long double))this->klass[1]._1.castClass)(
                                                      this,
                                                      this->klass[1]._1.declaringType,
                                                      v5);
        missionTargetLabel = v4->fields.missionTargetLabel;
        ++v6;
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
  __int64 v3; // x3
  BoardOptionEventTargetComponent_o *v4; // x19
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct UnityEngine_GameObject_o *missionTargetLabel; // x9
  int32_t max_length; // w8
  int32_t klass; // w9
  int32_t v9; // w9
  int32_t v10; // w1

  v4 = this;
  if ( (byte_42E863B & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  (_DWORD)method,
                                                  (_DWORD)v2,
                                                  v3);
    byte_42E863B = 1;
  }
  eventTargetItemDrawList = v4->fields.eventTargetItemDrawList;
  if ( eventTargetItemDrawList )
  {
    missionTargetLabel = v4->fields.missionTargetLabel;
    if ( !missionTargetLabel )
      sub_B5D69C(this, method);
    max_length = eventTargetItemDrawList->max_length;
    klass = (int32_t)missionTargetLabel[1].klass;
    if ( max_length > klass )
    {
      v9 = LODWORD(v4->fields.mChocoTex) + klass;
      if ( v9 <= max_length )
        v10 = v9;
      else
        v10 = 0;
      BoardOptionEventTargetComponent__DispList(v4, v10, v2);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E1F & 1) == 0 )
  {
    sub_B5D5C4(&BoardOptionEventTargetComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5E1F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppClass *klass; // x8
  System_String_array *data; // x19
  System_Action_o *v13; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5E20 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    this = (BoardOptionEventTargetComponent___c__DisplayClass7_0_o *)sub_B5D5C4(
                                                                       &Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__,
                                                                       v8,
                                                                       v9,
                                                                       v10);
    byte_42E5E20 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    sub_B5D69C(this, method);
  data = (System_String_array *)klass->_1.byval_arg.data;
  v13 = (System_Action_o *)v4[3].klass;
  if ( !v13 )
  {
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      v4,
      Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__,
      0LL);
    v4[3].klass = (Il2CppClass *)v13;
    sub_B5D560(&v4[3]);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30664084(data, v13, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass7_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  BoardOptionEventTargetComponent__CreateEnemyList_24902996(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}