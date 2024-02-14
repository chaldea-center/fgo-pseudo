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

  if ( (byte_4214BC0 & 1) == 0 )
  {
    sub_B0D8A4(&BoardOptionEventTargetComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_15061/*"Unlit/Transparent Colored_Choco"*/, v8);
    sub_B0D8A4(&StringLiteral_4553/*"Custom/SpriteWithMask_Choco"*/, v9);
    byte_4214BC0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15061/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15061/*"Unlit/Transparent Colored_Choco"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_4553/*"Custom/SpriteWithMask_Choco"*/;
  v12->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4553/*"Custom/SpriteWithMask_Choco"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->CHOCO_SHADER_SP, v13, v14, v15, v16, v17, v18, v19);
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
  __int64 v32; // x20
  __int64 UserId; // x0
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x24
  __int64 v58; // x1
  __int64 v59; // x2
  unsigned int **v60; // x25
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UserQuestInfoMaster_o *v67; // x26
  __int64 v68; // x1
  System_String_array **v69; // x2
  __int64 v70; // x8
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x8
  __int64 v84; // x28
  __int64 v85; // x21
  unsigned __int64 v86; // x19
  unsigned int *v87; // x8
  __int64 v88; // x8
  __int64 v89; // x8
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  ViewEnemyEntity_o *v96; // x26
  System_String_o *v97; // x0
  System_String_o *v98; // x26
  __int64 v99; // x1
  __int64 v100; // x2
  ViewEnemyEntity_o *v101; // x27
  unsigned int *v102; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x22
  BoardOptionEventTargetComponent_o *v104; // x21
  BoardOptionEventTargetComponent___c_c *v105; // x0
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x23
  Il2CppObject *v108; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  int32_t v116; // w1
  System_Int32_array **v117; // x0
  bool *p_loading; // x21
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  __int64 v125; // x1
  __int64 v126; // x2
  System_Action_o *v127; // x19
  __int64 v128; // x0
  __int64 v129; // x0
  BoardOptionEventTargetComponent_o *v130; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v131; // [xsp+8h] [xbp-78h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-6Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v134; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v135; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4214BB8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B0D8A4(&AtlasManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ViewEnemyMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___, v14);
    sub_B0D8A4(&Method_System_Func_ViewEnemyEntity__bool___ctor__, v15);
    sub_B0D8A4(&System_Func_ViewEnemyEntity__bool__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewItem__TypeInfo, v22);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v23);
    sub_B0D8A4(&NetworkManager_TypeInfo, v24);
    sub_B0D8A4(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__, v25);
    sub_B0D8A4(&Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__, v26);
    sub_B0D8A4(&BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo, v27);
    sub_B0D8A4(&BoardOptionEventTargetComponent___c_TypeInfo, v28);
    sub_B0D8A4(&ViewEnemyEntity___TypeInfo, v29);
    sub_B0D8A4(&ViewEnemyEntity_TypeInfo, v30);
    sub_B0D8A4(&StringLiteral_12779/*"Servants/Commands/"*/, v31);
    byte_4214BB8 = 1;
  }
  v135 = 0LL;
  entity = 0LL;
  v134 = 0LL;
  missionTargetState = 0;
  v32 = sub_B0D974(BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&questId, enemies);
  BoardOptionEventTargetComponent___c__DisplayClass7_0___ctor(
    (BoardOptionEventTargetComponent___c__DisplayClass7_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_52;
  *(_QWORD *)(v32 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v32 + 32) = enemies;
  v40 = (__int64 *)(v32 + 32);
  *(_DWORD *)(v32 + 24) = questId;
  sub_B0D840((BattleServantConfConponent_o *)(v32 + 32), (System_Int32_array **)enemies, v41, v42, v43, v44, v45, v46);
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                                                                  v47,
                                                                                                  v48);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.eventTargetItemDrawList = (struct BoardOptionEventTargetListViewItemDraw_array *)v49;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventTargetItemDrawList,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v130 = this;
  LOBYTE(this->fields.loadedAssets) = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  v131 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_string__TypeInfo,
                                                                          v58,
                                                                          v59);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v131,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v32 + 40) = 0LL;
  v60 = (unsigned int **)(v32 + 40);
  sub_B0D840((BattleServantConfConponent_o *)(v32 + 40), 0LL, v61, v62, v63, v64, v65, v66);
  v67 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v67 )
    goto LABEL_52;
  UserQuestInfoMaster__TryGetEntity(v67, &entity, UserId, *(_DWORD *)(v32 + 24), 0LL);
  v70 = *(_QWORD *)(v32 + 32);
  if ( v70 )
  {
    v71 = (System_Int32_array **)sub_B0D8BC(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v70 + 24));
    *v60 = (unsigned int *)v71;
    sub_B0D840((BattleServantConfConponent_o *)(v32 + 40), v71, v72, v73, v74, v75, v76, v77);
    v83 = *v40;
    if ( !*v40 )
      goto LABEL_52;
    v84 = 8LL;
    v85 = 8LL;
    while ( 1 )
    {
      v86 = v84 - 8;
      if ( v84 - 8 >= *(int *)(v83 + 24) )
        break;
      v87 = *v60;
      if ( !*v60 )
        goto LABEL_52;
      if ( v86 >= v87[6] )
        goto LABEL_69;
      *(_QWORD *)&v87[v85] = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v87[v85], 0LL, v69, v78, v79, v80, v81, v82);
      v88 = *v40;
      if ( !*v40 )
        goto LABEL_52;
      if ( v86 >= *(unsigned int *)(v88 + 24) )
        goto LABEL_69;
      v78 = (System_String_array **)*(unsigned int *)(v88 + 4 * v84);
      if ( (int)v78 >= 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        UserId = ViewEnemyMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &v134,
                   *(_DWORD *)(v32 + 24),
                   (int32_t)v78,
                   0LL);
        if ( (UserId & 1) != 0 )
        {
          UserId = (__int64)v134;
          if ( !v134 )
            goto LABEL_52;
          ViewEnemyEntity__IsMissionTarget(v134, v134->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_29;
            UserId = (__int64)entity->fields.enemyIds;
            if ( !UserId || !*(_QWORD *)(UserId + 24) )
              goto LABEL_29;
            if ( !v134 )
              goto LABEL_52;
            UserId = System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)UserId,
                       v134->fields.enemyId,
                       (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( (UserId & 1) == 0 )
            {
LABEL_29:
              v89 = *v40;
              if ( !*v40 )
                goto LABEL_52;
              if ( v86 >= *(unsigned int *)(v89 + 24) )
                goto LABEL_69;
              *(_DWORD *)(v89 + 4 * v84) = 0;
            }
            if ( !v134 || !v57 )
              goto LABEL_52;
            UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       v57,
                       &v135,
                       v134->fields.svtId,
                       (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (UserId & 1) != 0 )
            {
              UserId = (__int64)v135;
              if ( !v135 )
                goto LABEL_52;
              UserId = ServantEntity__get_IsOrganization((ServantEntity_o *)v135, 0LL);
              if ( (UserId & 1) == 0 )
                goto LABEL_39;
              UserId = (__int64)v134;
              if ( !v134 )
                goto LABEL_52;
              UserId = ViewEnemyEntity__IsIconIdUnique(v134, 0LL);
              if ( (UserId & 1) == 0 )
              {
                if ( !v134 )
                  goto LABEL_52;
                v97 = System_Int32__ToString((int)v134 + 36, 0LL);
                v98 = System_String__Concat_43849904((System_String_o *)StringLiteral_12779/*"Servants/Commands/"*/, v97, 0LL);
                UserId = (__int64)v131;
                if ( !v131 )
                  goto LABEL_52;
                if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        v131,
                        (WarBoardManager_TaskList_o *)v98,
                        (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v131,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v98,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                v101 = v134;
                v96 = (ViewEnemyEntity_o *)sub_B0D974(ViewEnemyEntity_TypeInfo, v99, v100);
                ViewEnemyEntity___ctor_34343148(v96, v101, 0LL);
                v134 = v96;
                if ( !v96 )
                  goto LABEL_52;
                v96->fields.iconId = 0;
              }
              else
              {
LABEL_39:
                v96 = v134;
              }
              v102 = *v60;
              if ( !*v60 )
                goto LABEL_52;
              if ( v96 )
              {
                UserId = sub_B0D964(v96, *(_QWORD *)(*(_QWORD *)v102 + 64LL));
                if ( !UserId )
                {
                  v129 = sub_B0D99C(0LL);
                  sub_B0D948(v129, 0LL);
                }
              }
              if ( v86 >= v102[6] )
              {
LABEL_69:
                v128 = sub_B0D9A8(UserId);
                sub_B0D948(v128, 0LL);
              }
              *(_QWORD *)&v102[v85] = v96;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v102[v85],
                (System_Int32_array **)v96,
                v90,
                v91,
                v92,
                v93,
                v94,
                v95);
            }
          }
        }
      }
      v83 = *v40;
      ++v84;
      v85 += 2LL;
      if ( !*v40 )
        goto LABEL_52;
    }
  }
  v103 = (System_Collections_Generic_IEnumerable_TSource__o *)*v60;
  if ( *v60 )
  {
    v104 = v130;
    v105 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v105 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    static_fields = v105->static_fields;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v105->vtable._0_Equals.methodPtr) & 4) != 0 && !v105->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v105);
        static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      }
      v108 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_ViewEnemyEntity__bool__TypeInfo,
                                                                                     v68,
                                                                                     v69);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_0,
        v108,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_ViewEnemyEntity__bool___ctor__);
      v109 = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      v109->__9__7_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__7_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v109->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
    }
    v116 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
             v103,
             (System_Func_TSource__bool__o *)_9__7_0,
             (const MethodInfo_1B48614 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v104 = v130;
    v116 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(v104, v116, (const MethodInfo *)v69);
  UserId = (__int64)v131;
  if ( !v131 )
LABEL_52:
    sub_B0D97C(UserId);
  v117 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v131,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
  *(_QWORD *)&v104->fields.loading = v117;
  p_loading = &v104->fields.loading;
  sub_B0D840((BattleServantConfConponent_o *)p_loading, v117, v119, v120, v121, v122, v123, v124);
  p_loading[8] = 1;
  v127 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v125, v126);
  System_Action___ctor(
    v127,
    (Il2CppObject *)v32,
    Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v127, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_25077340(
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
  __int64 v17; // x0

  v7 = this;
  if ( (byte_4214BB9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    this = (BoardOptionEventTargetComponent_o *)sub_B0D8A4(&QuestInformationListViewItem_TypeInfo, v8);
    byte_4214BB9 = 1;
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
            v17 = sub_B0D9A8(this);
            sub_B0D948(v17, 0LL);
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
            v13 = (QuestInformationListViewItem_o *)sub_B0D974(
                                                      QuestInformationListViewItem_TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      enemies);
            v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13;
            v15 = v11;
            v16 = v12;
LABEL_14:
            QuestInformationListViewItem___ctor_23267720(v13, v15, v16, 0, 0LL);
            this = (BoardOptionEventTargetComponent_o *)v7->fields.eventTargetItemDrawList;
            if ( !this )
LABEL_20:
              sub_B0D97C(this);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              v14,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v9) = enemies->max_length;
            ++v11;
          }
          if ( (__int64)++v10 >= (int)v9 )
            goto LABEL_17;
        }
        v13 = (QuestInformationListViewItem_o *)sub_B0D974(
                                                  QuestInformationListViewItem_TypeInfo,
                                                  *(_QWORD *)&questId,
                                                  enemies);
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

  if ( (byte_4214BBB & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_4214BBB = 1;
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
      AssetManager__releaseAssetStorage_29524964(v4, 0LL);
      p_loading->klass = 0LL;
      sub_B0D840(p_loading, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
}


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
    sub_B0D97C(gameObject);
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
        v12 = sub_B0D9A8(gameObject);
        sub_B0D948(v12, 0LL);
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
  BoardOptionEventTargetComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  const MethodInfo *v8; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *v9; // x9
  struct UnityEngine_GameObject_o *missionTargetLabel; // x8
  __int64 v11; // x21
  int32_t v12; // w22
  unsigned int v13; // w20
  UnityEngine_GameObject_c *klass; // x9
  const MethodInfo *v15; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v16; // x24
  int v17; // w25
  Il2CppArrayBounds v18; // x8
  __int64 v19; // x11
  QuestInformationListViewItem_o *v20; // x1
  struct UnityEngine_GameObject_o *v21; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v22; // x8
  __int64 v23; // x0

  v4 = this;
  if ( (byte_4214BBA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&offset);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (BoardOptionEventTargetComponent_o *)sub_B0D8A4(&QuestInformationListViewItem_TypeInfo, v6);
    byte_4214BBA = 1;
  }
  eventTargetItemDrawList = v4->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    goto LABEL_29;
  this = *(BoardOptionEventTargetComponent_o **)&v4->fields.nowOffset;
  if ( !this )
    goto LABEL_29;
  if ( (int)eventTargetItemDrawList->max_length <= 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v4->fields.eventTargetItemDrawList;
  LODWORD(v4->fields.mChocoTex) = offset;
  if ( !v9 )
    goto LABEL_29;
  missionTargetLabel = v4->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    goto LABEL_29;
  v11 = 0LL;
  v12 = offset;
  v13 = (v9->max_length - offset) & ~((signed int)(v9->max_length - offset) >> 31);
  while ( 1 )
  {
    klass = missionTargetLabel[1].klass;
    if ( (int)v11 >= (int)klass )
      break;
    if ( (unsigned int)v11 >= (unsigned int)klass )
      goto LABEL_35;
    this = (BoardOptionEventTargetComponent_o *)*((_QWORD *)&missionTargetLabel[1].monitor + v11);
    if ( !this )
      goto LABEL_29;
    this = (BoardOptionEventTargetComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_29;
    if ( (unsigned int)v11 >= v13 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v16 = v4->fields.eventTargetItemDrawList;
      if ( !v16 )
        goto LABEL_29;
      v17 = v12 + v11;
      if ( v16->max_length <= (unsigned int)(v12 + v11) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v18 = v16->bounds[v17 + 4];
      if ( *(_QWORD *)&v18
        && (v19 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(**(_QWORD **)&v18 + 300LL) >= (unsigned int)v19) )
      {
        v20 = *(QuestInformationListViewItem_c **)(*(_QWORD *)(**(_QWORD **)&v18 + 200LL) + 8 * v19 - 8) == QuestInformationListViewItem_TypeInfo
            ? *(QuestInformationListViewItem_o **)&v16->bounds[v17 + 4]
            : 0LL;
      }
      else
      {
        v20 = 0LL;
      }
      v21 = v4->fields.missionTargetLabel;
      if ( !v21 )
        goto LABEL_29;
      if ( (unsigned int)v11 >= LODWORD(v21[1].klass) )
      {
LABEL_35:
        v23 = sub_B0D9A8(this);
        sub_B0D948(v23, 0LL);
      }
      this = (BoardOptionEventTargetComponent_o *)*((_QWORD *)&v21[1].monitor + v11);
      if ( !this )
        goto LABEL_29;
      BoardOptionEventTargetListViewItemDraw__SetItem((BoardOptionEventTargetListViewItemDraw_o *)this, v20, 2, v15);
    }
    missionTargetLabel = v4->fields.missionTargetLabel;
    ++v11;
    if ( !missionTargetLabel )
      goto LABEL_29;
  }
  v22 = v4->fields.eventTargetItemDrawList;
  if ( !v22 )
LABEL_29:
    sub_B0D97C(this);
  if ( (signed int)v22->max_length <= (int)klass )
    BoardOptionEventTargetComponent__SetAlpha(v4, 1.0, v8);
}


bool __fastcall BoardOptionEventTargetComponent__IsNeedAnim(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v2; // x19
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct UnityEngine_GameObject_o *missionTargetLabel; // x9

  v2 = this;
  if ( (byte_4214BBE & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_B0D8A4(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_4214BBE = 1;
  }
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    return 0;
  missionTargetLabel = v2->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    sub_B0D97C(this);
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
  UnityEngine_Material_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4214BBD & 1) == 0 )
  {
    sub_B0D8A4(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B0D8A4(&StringLiteral_15986/*"_ChocoTex"*/, v6);
    sub_B0D8A4(&StringLiteral_12873/*"Shaders/ChocoMap"*/, v7);
    byte_4214BBD = 1;
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
                                         (System_String_o *)StringLiteral_12873/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B0D840(p_mChocoMaterialTx, UIAtlas, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_SP, 0LL);
    v24 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v22, v23);
    UnityEngine_Material___ctor(v24, v21, 0LL);
    v8->klass = (BattleServantConfConponent_c *)v24;
    sub_B0D840(v8, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    if ( !v8->klass )
      sub_B0D97C(0LL);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)v8->klass,
      (System_String_o *)StringLiteral_15986/*"_ChocoTex"*/,
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
  UnityEngine_Material_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4214BBC & 1) == 0 )
  {
    sub_B0D8A4(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B0D8A4(&StringLiteral_15986/*"_ChocoTex"*/, v6);
    sub_B0D8A4(&StringLiteral_12873/*"Shaders/ChocoMap"*/, v7);
    byte_4214BBC = 1;
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
                                         (System_String_o *)StringLiteral_12873/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B0D840(p_mChocoMaterialTx, UIAtlas, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_TX, 0LL);
    v24 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v22, v23);
    UnityEngine_Material___ctor(v24, v21, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v24;
    sub_B0D840(p_mChocoMaterialSp, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    if ( !p_mChocoMaterialSp->klass )
      sub_B0D97C(0LL);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_15986/*"_ChocoTex"*/,
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
    sub_B0D97C(this);
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
      v9 = sub_B0D9A8(this);
      sub_B0D948(v9, 0LL);
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
  BoardOptionEventTargetComponent_o *v3; // x19
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct UnityEngine_GameObject_o *missionTargetLabel; // x9
  int32_t max_length; // w8
  int32_t klass; // w9
  int32_t v8; // w9
  int32_t v9; // w1

  v3 = this;
  if ( (byte_4214BBF & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_B0D8A4(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_4214BBF = 1;
  }
  eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
  if ( eventTargetItemDrawList )
  {
    missionTargetLabel = v3->fields.missionTargetLabel;
    if ( !missionTargetLabel )
      sub_B0D97C(this);
    max_length = eventTargetItemDrawList->max_length;
    klass = (int32_t)missionTargetLabel[1].klass;
    if ( max_length > klass )
    {
      v8 = LODWORD(v3->fields.mChocoTex) + klass;
      if ( v8 <= max_length )
        v9 = v8;
      else
        v9 = 0;
      BoardOptionEventTargetComponent__DispList(v3, v9, v2);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211DC6 & 1) == 0 )
  {
    sub_B0D8A4(&BoardOptionEventTargetComponent___c_TypeInfo, v1);
    byte_4211DC6 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BoardOptionEventTargetComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  System_String_array *data; // x19
  System_Action_o *v8; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4211DC7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v4);
    this = (BoardOptionEventTargetComponent___c__DisplayClass7_0_o *)sub_B0D8A4(
                                                                       &Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__,
                                                                       v5);
    byte_4211DC7 = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    sub_B0D97C(this);
  data = (System_String_array *)klass->_1.byval_arg.data;
  v8 = (System_Action_o *)v3[3].klass;
  if ( !v8 )
  {
    v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v8,
      v3,
      Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__,
      0LL);
    v3[3].klass = (Il2CppClass *)v8;
    sub_B0D840(&v3[3], v8);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29522920(data, v8, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass7_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  BoardOptionEventTargetComponent__CreateEnemyList_25077340(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}