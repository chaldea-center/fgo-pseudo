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

  if ( (byte_4187DA2 & 1) == 0 )
  {
    sub_B2C35C(&BoardOptionEventTargetComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_15015/*"Unlit/Transparent Colored_Choco"*/, v8);
    sub_B2C35C(&StringLiteral_4538/*"Custom/SpriteWithMask_Choco"*/, v9);
    byte_4187DA2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15015/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15015/*"Unlit/Transparent Colored_Choco"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_4538/*"Custom/SpriteWithMask_Choco"*/;
  v12->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4538/*"Custom/SpriteWithMask_Choco"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->CHOCO_SHADER_SP, v13, v14, v15, v16, v17, v18, v19);
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
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 *v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x24
  unsigned int **v57; // x25
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UserQuestInfoMaster_o *v64; // x26
  System_String_array **v65; // x2
  __int64 v66; // x8
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x8
  __int64 v80; // x28
  __int64 v81; // x21
  unsigned __int64 v82; // x19
  unsigned int *v83; // x8
  __int64 v84; // x8
  __int64 v85; // x8
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  ViewEnemyEntity_o *v92; // x26
  System_String_o *v93; // x0
  System_String_o *v94; // x26
  ViewEnemyEntity_o *v95; // x27
  unsigned int *v96; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x22
  BoardOptionEventTargetComponent_o *v98; // x21
  BoardOptionEventTargetComponent___c_c *v99; // x0
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x23
  Il2CppObject *v102; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  int32_t v110; // w1
  System_Int32_array **v111; // x0
  bool *p_loading; // x21
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Action_o *v119; // x19
  __int64 v120; // x0
  __int64 v121; // x0
  BoardOptionEventTargetComponent_o *v122; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v123; // [xsp+8h] [xbp-78h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-6Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v126; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v127; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4187D9A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&AtlasManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ViewEnemyMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___, v14);
    sub_B2C35C(&Method_System_Func_ViewEnemyEntity__bool___ctor__, v15);
    sub_B2C35C(&System_Func_ViewEnemyEntity__bool__TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v21);
    sub_B2C35C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v22);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v23);
    sub_B2C35C(&NetworkManager_TypeInfo, v24);
    sub_B2C35C(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__, v25);
    sub_B2C35C(&Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__, v26);
    sub_B2C35C(&BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo, v27);
    sub_B2C35C(&BoardOptionEventTargetComponent___c_TypeInfo, v28);
    sub_B2C35C(&ViewEnemyEntity___TypeInfo, v29);
    sub_B2C35C(&ViewEnemyEntity_TypeInfo, v30);
    sub_B2C35C(&StringLiteral_12735/*"Servants/Commands/"*/, v31);
    byte_4187D9A = 1;
  }
  v127 = 0LL;
  entity = 0LL;
  v126 = 0LL;
  missionTargetState = 0;
  v32 = sub_B2C42C(BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo);
  BoardOptionEventTargetComponent___c__DisplayClass7_0___ctor(
    (BoardOptionEventTargetComponent___c__DisplayClass7_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_52;
  *(_QWORD *)(v32 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  *(_QWORD *)(v32 + 32) = enemies;
  v41 = (__int64 *)(v32 + 32);
  *(_DWORD *)(v32 + 24) = questId;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 32), (System_Int32_array **)enemies, v42, v43, v44, v45, v46, v47);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.eventTargetItemDrawList = (struct BoardOptionEventTargetListViewItemDraw_array *)v48;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventTargetItemDrawList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v122 = this;
  LOBYTE(this->fields.loadedAssets) = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v123 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v123,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  *(_QWORD *)(v32 + 40) = 0LL;
  v57 = (unsigned int **)(v32 + 40);
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 40), 0LL, v58, v59, v60, v61, v62, v63);
  v64 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v64 )
    goto LABEL_52;
  UserQuestInfoMaster__TryGetEntity(v64, &entity, UserId, *(_DWORD *)(v32 + 24), 0LL);
  v66 = *(_QWORD *)(v32 + 32);
  if ( v66 )
  {
    v67 = (System_Int32_array **)sub_B2C374(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v66 + 24));
    *v57 = (unsigned int *)v67;
    sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 40), v67, v68, v69, v70, v71, v72, v73);
    v79 = *v41;
    if ( !*v41 )
      goto LABEL_52;
    v80 = 8LL;
    v81 = 8LL;
    while ( 1 )
    {
      v82 = v80 - 8;
      if ( v80 - 8 >= *(int *)(v79 + 24) )
        break;
      v83 = *v57;
      if ( !*v57 )
        goto LABEL_52;
      if ( v82 >= v83[6] )
        goto LABEL_69;
      *(_QWORD *)&v83[v81] = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v83[v81], 0LL, v65, v74, v75, v76, v77, v78);
      v84 = *v41;
      if ( !*v41 )
        goto LABEL_52;
      if ( v82 >= *(unsigned int *)(v84 + 24) )
        goto LABEL_69;
      v74 = (System_String_array **)*(unsigned int *)(v84 + 4 * v80);
      if ( (int)v74 >= 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        UserId = ViewEnemyMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &v126,
                   *(_DWORD *)(v32 + 24),
                   (int32_t)v74,
                   0LL);
        if ( (UserId & 1) != 0 )
        {
          UserId = (__int64)v126;
          if ( !v126 )
            goto LABEL_52;
          ViewEnemyEntity__IsMissionTarget(v126, v126->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_29;
            UserId = (__int64)entity->fields.enemyIds;
            if ( !UserId || !*(_QWORD *)(UserId + 24) )
              goto LABEL_29;
            if ( !v126 )
              goto LABEL_52;
            UserId = System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)UserId,
                       v126->fields.enemyId,
                       (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( (UserId & 1) == 0 )
            {
LABEL_29:
              v85 = *v41;
              if ( !*v41 )
                goto LABEL_52;
              if ( v82 >= *(unsigned int *)(v85 + 24) )
                goto LABEL_69;
              *(_DWORD *)(v85 + 4 * v80) = 0;
            }
            if ( !v126 || !v56 )
              goto LABEL_52;
            UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       v56,
                       &v127,
                       v126->fields.svtId,
                       (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (UserId & 1) != 0 )
            {
              UserId = (__int64)v127;
              if ( !v127 )
                goto LABEL_52;
              UserId = ServantEntity__get_IsOrganization((ServantEntity_o *)v127, 0LL);
              if ( (UserId & 1) == 0 )
                goto LABEL_39;
              UserId = (__int64)v126;
              if ( !v126 )
                goto LABEL_52;
              UserId = ViewEnemyEntity__IsIconIdUnique(v126, 0LL);
              if ( (UserId & 1) == 0 )
              {
                if ( !v126 )
                  goto LABEL_52;
                v93 = System_Int32__ToString((int)v126 + 36, 0LL);
                v94 = System_String__Concat_44305532((System_String_o *)StringLiteral_12735/*"Servants/Commands/"*/, v93, 0LL);
                UserId = (__int64)v123;
                if ( !v123 )
                  goto LABEL_52;
                if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        v123,
                        (WarBoardManager_TaskList_o *)v94,
                        (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v123,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v94,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                v95 = v126;
                v92 = (ViewEnemyEntity_o *)sub_B2C42C(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_34363392(v92, v95, 0LL);
                v126 = v92;
                if ( !v92 )
                  goto LABEL_52;
                v92->fields.iconId = 0;
              }
              else
              {
LABEL_39:
                v92 = v126;
              }
              v96 = *v57;
              if ( !*v57 )
                goto LABEL_52;
              if ( v92 )
              {
                UserId = sub_B2C41C(v92, *(_QWORD *)(*(_QWORD *)v96 + 64LL));
                if ( !UserId )
                {
                  v121 = sub_B2C454(0LL);
                  sub_B2C400(v121, 0LL);
                }
              }
              if ( v82 >= v96[6] )
              {
LABEL_69:
                v120 = sub_B2C460(UserId);
                sub_B2C400(v120, 0LL);
              }
              *(_QWORD *)&v96[v81] = v92;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v96[v81],
                (System_Int32_array **)v92,
                v86,
                v87,
                v88,
                v89,
                v90,
                v91);
            }
          }
        }
      }
      v79 = *v41;
      ++v80;
      v81 += 2LL;
      if ( !*v41 )
        goto LABEL_52;
    }
  }
  v97 = (System_Collections_Generic_IEnumerable_TSource__o *)*v57;
  if ( *v57 )
  {
    v98 = v122;
    v99 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v99 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    static_fields = v99->static_fields;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      }
      v102 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_0,
        v102,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_ViewEnemyEntity__bool___ctor__);
      v103 = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      v103->__9__7_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__7_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v103->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
    }
    v110 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
             v97,
             (System_Func_TSource__bool__o *)_9__7_0,
             (const MethodInfo_1A8D348 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v98 = v122;
    v110 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(v98, v110, (const MethodInfo *)v65);
  UserId = (__int64)v123;
  if ( !v123 )
LABEL_52:
    sub_B2C434(UserId, v34);
  v111 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v123,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
  *(_QWORD *)&v98->fields.loading = v111;
  p_loading = &v98->fields.loading;
  sub_B2C2F8((BattleServantConfConponent_o *)p_loading, v111, v113, v114, v115, v116, v117, v118);
  p_loading[8] = 1;
  v119 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v119,
    (Il2CppObject *)v32,
    Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v119, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_25534044(
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
  if ( (byte_4187D9B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    this = (BoardOptionEventTargetComponent_o *)sub_B2C35C(&QuestInformationListViewItem_TypeInfo, v8);
    byte_4187D9B = 1;
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
            v17 = sub_B2C460(this);
            sub_B2C400(v17, 0LL);
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
            v13 = (QuestInformationListViewItem_o *)sub_B2C42C(QuestInformationListViewItem_TypeInfo);
            v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13;
            v15 = v11;
            v16 = v12;
LABEL_14:
            QuestInformationListViewItem___ctor_23902828(v13, v15, v16, 0, 0LL);
            this = (BoardOptionEventTargetComponent_o *)v7->fields.eventTargetItemDrawList;
            if ( !this )
LABEL_20:
              sub_B2C434(this, *(_QWORD *)&questId);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              v14,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v9) = enemies->max_length;
            ++v11;
          }
          if ( (__int64)++v10 >= (int)v9 )
            goto LABEL_17;
        }
        v13 = (QuestInformationListViewItem_o *)sub_B2C42C(QuestInformationListViewItem_TypeInfo);
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

  if ( (byte_4187D9D & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_4187D9D = 1;
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
      AssetManager__releaseAssetStorage_30161248(v4, 0LL);
      p_loading->klass = 0LL;
      sub_B2C2F8(p_loading, 0LL, v6, v7, v8, v9, v10, v11);
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
    sub_B2C434(gameObject, *(_QWORD *)&useNum);
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
        v12 = sub_B2C460(gameObject);
        sub_B2C400(v12, 0LL);
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
  int32_t v3; // w20
  BoardOptionEventTargetComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v8; // x9
  struct UnityEngine_GameObject_o *missionTargetLabel; // x8
  __int64 v10; // x21
  int32_t v11; // w22
  unsigned int v12; // w20
  UnityEngine_GameObject_c *klass; // x9
  const MethodInfo *v14; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v15; // x24
  int v16; // w25
  Il2CppArrayBounds v17; // x8
  __int64 v18; // x11
  struct UnityEngine_GameObject_o *v19; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v20; // x8
  __int64 v21; // x0

  v3 = offset;
  v4 = this;
  if ( (byte_4187D9C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&offset);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (BoardOptionEventTargetComponent_o *)sub_B2C35C(&QuestInformationListViewItem_TypeInfo, v6);
    byte_4187D9C = 1;
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
  v8 = v4->fields.eventTargetItemDrawList;
  LODWORD(v4->fields.mChocoTex) = v3;
  if ( !v8 )
    goto LABEL_29;
  missionTargetLabel = v4->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    goto LABEL_29;
  v10 = 0LL;
  v11 = v3;
  v12 = (v8->max_length - v3) & ~((signed int)(v8->max_length - v3) >> 31);
  while ( 1 )
  {
    klass = missionTargetLabel[1].klass;
    if ( (int)v10 >= (int)klass )
      break;
    if ( (unsigned int)v10 >= (unsigned int)klass )
      goto LABEL_35;
    this = (BoardOptionEventTargetComponent_o *)*((_QWORD *)&missionTargetLabel[1].monitor + v10);
    if ( !this )
      goto LABEL_29;
    this = (BoardOptionEventTargetComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_29;
    if ( (unsigned int)v10 >= v12 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v15 = v4->fields.eventTargetItemDrawList;
      if ( !v15 )
        goto LABEL_29;
      v16 = v11 + v10;
      if ( v15->max_length <= (unsigned int)(v11 + v10) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v17 = v15->bounds[v16 + 4];
      if ( *(_QWORD *)&v17
        && (v18 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(**(_QWORD **)&v17 + 300LL) >= (unsigned int)v18) )
      {
        *(_QWORD *)&offset = *(QuestInformationListViewItem_c **)(*(_QWORD *)(**(_QWORD **)&v17 + 200LL) + 8 * v18 - 8) == QuestInformationListViewItem_TypeInfo
                           ? *(_QWORD *)&v15->bounds[v16 + 4]
                           : 0LL;
      }
      else
      {
        *(_QWORD *)&offset = 0LL;
      }
      v19 = v4->fields.missionTargetLabel;
      if ( !v19 )
        goto LABEL_29;
      if ( (unsigned int)v10 >= LODWORD(v19[1].klass) )
      {
LABEL_35:
        v21 = sub_B2C460(this);
        sub_B2C400(v21, 0LL);
      }
      this = (BoardOptionEventTargetComponent_o *)*((_QWORD *)&v19[1].monitor + v10);
      if ( !this )
        goto LABEL_29;
      BoardOptionEventTargetListViewItemDraw__SetItem(
        (BoardOptionEventTargetListViewItemDraw_o *)this,
        *(QuestInformationListViewItem_o **)&offset,
        2,
        v14);
    }
    missionTargetLabel = v4->fields.missionTargetLabel;
    ++v10;
    if ( !missionTargetLabel )
      goto LABEL_29;
  }
  v20 = v4->fields.eventTargetItemDrawList;
  if ( !v20 )
LABEL_29:
    sub_B2C434(this, *(_QWORD *)&offset);
  if ( (signed int)v20->max_length <= (int)klass )
    BoardOptionEventTargetComponent__SetAlpha(v4, 1.0, *(const MethodInfo **)&offset);
}


bool __fastcall BoardOptionEventTargetComponent__IsNeedAnim(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v2; // x19
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct UnityEngine_GameObject_o *missionTargetLabel; // x9

  v2 = this;
  if ( (byte_4187DA0 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_4187DA0 = 1;
  }
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    return 0;
  missionTargetLabel = v2->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    sub_B2C434(this, method);
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
  UnityEngine_Material_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1

  if ( (byte_4187D9F & 1) == 0 )
  {
    sub_B2C35C(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v6);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v7);
    byte_4187D9F = 1;
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
                                         (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B2C2F8(p_mChocoMaterialTx, UIAtlas, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_SP, 0LL);
    v22 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0LL);
    v8->klass = (BattleServantConfConponent_c *)v22;
    sub_B2C2F8(v8, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    if ( !v8->klass )
      sub_B2C434(0LL, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)v8->klass,
      (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/,
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
  UnityEngine_Material_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1

  if ( (byte_4187D9E & 1) == 0 )
  {
    sub_B2C35C(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v6);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v7);
    byte_4187D9E = 1;
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
                                         (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B2C2F8(p_mChocoMaterialTx, UIAtlas, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_TX, 0LL);
    v22 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v22;
    sub_B2C2F8(p_mChocoMaterialSp, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    if ( !p_mChocoMaterialSp->klass )
      sub_B2C434(0LL, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/,
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
    sub_B2C434(this, method);
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
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
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
  if ( (byte_4187DA1 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_B2C35C(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_4187DA1 = 1;
  }
  eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
  if ( eventTargetItemDrawList )
  {
    missionTargetLabel = v3->fields.missionTargetLabel;
    if ( !missionTargetLabel )
      sub_B2C434(this, method);
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
  Il2CppObject *v2; // x19
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184E97 & 1) == 0 )
  {
    sub_B2C35C(&BoardOptionEventTargetComponent___c_TypeInfo, v1);
    byte_4184E97 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  Il2CppObject *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  System_String_array *data; // x19
  System_Action_o *v7; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4184E98 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    this = (BoardOptionEventTargetComponent___c__DisplayClass7_0_o *)sub_B2C35C(
                                                                       &Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__,
                                                                       v4);
    byte_4184E98 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    sub_B2C434(this, method);
  data = (System_String_array *)klass->_1.byval_arg.data;
  v7 = (System_Action_o *)v2[3].klass;
  if ( !v7 )
  {
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__,
      0LL);
    v2[3].klass = (Il2CppClass *)v7;
    sub_B2C2F8(&v2[3], v7);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30159204(data, v7, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass7_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  BoardOptionEventTargetComponent__CreateEnemyList_25534044(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}