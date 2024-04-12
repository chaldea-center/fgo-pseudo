void __fastcall BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct BoardOptionEventTargetComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AFEB7 & 1) == 0 )
  {
    sub_B52984(&BoardOptionEventTargetComponent_TypeInfo);
    sub_B52984(&StringLiteral_15114/*"Unlit/Transparent Colored_Choco"*/);
    sub_B52984(&StringLiteral_4577/*"Custom/SpriteWithMask_Choco"*/);
    byte_42AFEB7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_15114/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15114/*"Unlit/Transparent Colored_Choco"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_4577/*"Custom/SpriteWithMask_Choco"*/;
  v9->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4577/*"Custom/SpriteWithMask_Choco"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->CHOCO_SHADER_SP, v10, v11, v12, v13, v14, v15, v16);
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
  __int64 v7; // x20
  __int64 UserId; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x24
  unsigned int **v32; // x25
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UserQuestInfoMaster_o *v39; // x26
  System_String_array **v40; // x2
  __int64 v41; // x8
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x8
  __int64 v55; // x28
  __int64 v56; // x21
  unsigned __int64 v57; // x19
  unsigned int *v58; // x8
  __int64 v59; // x8
  __int64 v60; // x8
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  ViewEnemyEntity_o *v67; // x26
  System_String_o *v68; // x0
  System_String_o *v69; // x26
  ViewEnemyEntity_o *v70; // x27
  unsigned int *v71; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x22
  BoardOptionEventTargetComponent_o *v73; // x21
  BoardOptionEventTargetComponent___c_c *v74; // x0
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x23
  Il2CppObject *v77; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  int32_t v85; // w1
  System_Int32_array **v86; // x0
  bool *p_loading; // x21
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Action_o *v94; // x19
  __int64 v95; // x0
  __int64 v96; // x0
  BoardOptionEventTargetComponent_o *v97; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v98; // [xsp+8h] [xbp-78h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-6Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  ViewEnemyEntity_o *v101; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *v102; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42AFEAF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
    sub_B52984(&Method_System_Func_ViewEnemyEntity__bool___ctor__);
    sub_B52984(&System_Func_ViewEnemyEntity__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_B52984(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__);
    sub_B52984(&Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__);
    sub_B52984(&BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo);
    sub_B52984(&BoardOptionEventTargetComponent___c_TypeInfo);
    sub_B52984(&ViewEnemyEntity___TypeInfo);
    sub_B52984(&ViewEnemyEntity_TypeInfo);
    sub_B52984(&StringLiteral_12832/*"Servants/Commands/"*/);
    byte_42AFEAF = 1;
  }
  v102 = 0LL;
  entity = 0LL;
  v101 = 0LL;
  missionTargetState = 0;
  v7 = sub_B52A54(BoardOptionEventTargetComponent___c__DisplayClass7_0_TypeInfo);
  BoardOptionEventTargetComponent___c__DisplayClass7_0___ctor(
    (BoardOptionEventTargetComponent___c__DisplayClass7_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_52;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = enemies;
  v16 = (__int64 *)(v7 + 32);
  *(_DWORD *)(v7 + 24) = questId;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)enemies, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.eventTargetItemDrawList = (struct BoardOptionEventTargetListViewItemDraw_array *)v23;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventTargetItemDrawList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v97 = this;
  LOBYTE(this->fields.loadedAssets) = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  v98 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v98,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v7 + 40) = 0LL;
  v32 = (unsigned int **)(v7 + 40);
  sub_B52920((BattleServantConfConponent_o *)(v7 + 40), 0LL, v33, v34, v35, v36, v37, v38);
  v39 = (UserQuestInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v39 )
    goto LABEL_52;
  UserQuestInfoMaster__TryGetEntity(v39, &entity, UserId, *(_DWORD *)(v7 + 24), 0LL);
  v41 = *(_QWORD *)(v7 + 32);
  if ( v41 )
  {
    v42 = (System_Int32_array **)sub_B5299C(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v41 + 24));
    *v32 = (unsigned int *)v42;
    sub_B52920((BattleServantConfConponent_o *)(v7 + 40), v42, v43, v44, v45, v46, v47, v48);
    v54 = *v16;
    if ( !*v16 )
      goto LABEL_52;
    v55 = 8LL;
    v56 = 8LL;
    while ( 1 )
    {
      v57 = v55 - 8;
      if ( v55 - 8 >= *(int *)(v54 + 24) )
        break;
      v58 = *v32;
      if ( !*v32 )
        goto LABEL_52;
      if ( v57 >= v58[6] )
        goto LABEL_69;
      *(_QWORD *)&v58[v56] = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&v58[v56], 0LL, v40, v49, v50, v51, v52, v53);
      v59 = *v16;
      if ( !*v16 )
        goto LABEL_52;
      if ( v57 >= *(unsigned int *)(v59 + 24) )
        goto LABEL_69;
      v49 = (System_String_array **)*(unsigned int *)(v59 + 4 * v55);
      if ( (int)v49 >= 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        UserId = ViewEnemyMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &v101,
                   *(_DWORD *)(v7 + 24),
                   (int32_t)v49,
                   0LL);
        if ( (UserId & 1) != 0 )
        {
          UserId = (__int64)v101;
          if ( !v101 )
            goto LABEL_52;
          ViewEnemyEntity__IsMissionTarget(v101, v101->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_29;
            UserId = (__int64)entity->fields.enemyIds;
            if ( !UserId || !*(_QWORD *)(UserId + 24) )
              goto LABEL_29;
            if ( !v101 )
              goto LABEL_52;
            UserId = System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)UserId,
                       v101->fields.enemyId,
                       (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( (UserId & 1) == 0 )
            {
LABEL_29:
              v60 = *v16;
              if ( !*v16 )
                goto LABEL_52;
              if ( v57 >= *(unsigned int *)(v60 + 24) )
                goto LABEL_69;
              *(_DWORD *)(v60 + 4 * v55) = 0;
            }
            if ( !v101 || !v31 )
              goto LABEL_52;
            UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       v31,
                       &v102,
                       v101->fields.svtId,
                       (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (UserId & 1) != 0 )
            {
              UserId = (__int64)v102;
              if ( !v102 )
                goto LABEL_52;
              UserId = ServantEntity__get_IsOrganization((ServantEntity_o *)v102, 0LL);
              if ( (UserId & 1) == 0 )
                goto LABEL_39;
              UserId = (__int64)v101;
              if ( !v101 )
                goto LABEL_52;
              UserId = ViewEnemyEntity__IsIconIdUnique(v101, 0LL);
              if ( (UserId & 1) == 0 )
              {
                if ( !v101 )
                  goto LABEL_52;
                v68 = System_Int32__ToString((int)v101 + 36, 0LL);
                v69 = System_String__Concat_44568316((System_String_o *)StringLiteral_12832/*"Servants/Commands/"*/, v68, 0LL);
                UserId = (__int64)v98;
                if ( !v98 )
                  goto LABEL_52;
                if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        v98,
                        (WarBoardManager_TaskList_o *)v69,
                        (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_string__Contains__) )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v98,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
                v70 = v101;
                v67 = (ViewEnemyEntity_o *)sub_B52A54(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_35349228(v67, v70, 0LL);
                v101 = v67;
                if ( !v67 )
                  goto LABEL_52;
                v67->fields.iconId = 0;
              }
              else
              {
LABEL_39:
                v67 = v101;
              }
              v71 = *v32;
              if ( !*v32 )
                goto LABEL_52;
              if ( v67 )
              {
                UserId = sub_B52A44(v67, *(_QWORD *)(*(_QWORD *)v71 + 64LL));
                if ( !UserId )
                {
                  v96 = sub_B52A7C(0LL);
                  sub_B52A28(v96, 0LL);
                }
              }
              if ( v57 >= v71[6] )
              {
LABEL_69:
                v95 = sub_B52A88(UserId);
                sub_B52A28(v95, 0LL);
              }
              *(_QWORD *)&v71[v56] = v67;
              sub_B52920(
                (BattleServantConfConponent_o *)&v71[v56],
                (System_Int32_array **)v67,
                v61,
                v62,
                v63,
                v64,
                v65,
                v66);
            }
          }
        }
      }
      v54 = *v16;
      ++v55;
      v56 += 2LL;
      if ( !*v16 )
        goto LABEL_52;
    }
  }
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)*v32;
  if ( *v32 )
  {
    v73 = v97;
    v74 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v74 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    static_fields = v74->static_fields;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v74);
        static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      }
      v77 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_0,
        v77,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__7_0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_ViewEnemyEntity__bool___ctor__);
      v78 = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      v78->__9__7_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__7_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v78->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
    }
    v85 = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
            v72,
            (System_Func_TSource__bool__o *)_9__7_0,
            (const MethodInfo_1B5FB84 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v73 = v97;
    v85 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(v73, v85, (const MethodInfo *)v40);
  UserId = (__int64)v98;
  if ( !v98 )
LABEL_52:
    sub_B52A5C(UserId, v9);
  v86 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v98,
                                 (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
  *(_QWORD *)&v73->fields.loading = v86;
  p_loading = &v73->fields.loading;
  sub_B52920((BattleServantConfConponent_o *)p_loading, v86, v88, v89, v90, v91, v92, v93);
  p_loading[8] = 1;
  v94 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v94,
    (Il2CppObject *)v7,
    Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v94, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_24989856(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v7; // x19
  __int64 v8; // x8
  unsigned __int64 v9; // x25
  int32_t v10; // w22
  ViewEnemyEntity_o *v11; // x24
  QuestInformationListViewItem_o *v12; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x23
  int32_t v14; // w1
  ViewEnemyEntity_o *v15; // x2
  __int64 v16; // x0

  v7 = this;
  if ( (byte_42AFEB0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoardOptionEventTargetComponent_o *)sub_B52984(&QuestInformationListViewItem_TypeInfo);
    byte_42AFEB0 = 1;
  }
  if ( LOBYTE(v7->fields.itemList) )
  {
    LOBYTE(v7->fields.itemList) = 0;
    if ( enemies )
    {
      v8 = *(_QWORD *)&enemies->max_length;
      if ( (int)v8 >= 1 )
      {
        v9 = 0LL;
        v10 = 0;
        while ( 1 )
        {
          if ( v9 >= (unsigned int)v8 )
          {
LABEL_19:
            v16 = sub_B52A88(this);
            sub_B52A28(v16, 0LL);
          }
          if ( enemies->m_Items[v9 + 1] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_20;
          if ( v9 >= veEnts->max_length )
            goto LABEL_19;
          v11 = veEnts->m_Items[v9];
          if ( v11 )
          {
            v12 = (QuestInformationListViewItem_o *)sub_B52A54(QuestInformationListViewItem_TypeInfo);
            v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)v12;
            v14 = v10;
            v15 = v11;
LABEL_14:
            QuestInformationListViewItem___ctor_25318420(v12, v14, v15, 0, 0LL);
            this = (BoardOptionEventTargetComponent_o *)v7->fields.eventTargetItemDrawList;
            if ( !this )
LABEL_20:
              sub_B52A5C(this, *(_QWORD *)&questId);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              v13,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
            LODWORD(v8) = enemies->max_length;
            ++v10;
          }
          if ( (__int64)++v9 >= (int)v8 )
            goto LABEL_17;
        }
        v12 = (QuestInformationListViewItem_o *)sub_B52A54(QuestInformationListViewItem_TypeInfo);
        v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)v12;
        v14 = v10;
        v15 = 0LL;
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

  if ( (byte_42AFEB2 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42AFEB2 = 1;
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
      AssetManager__releaseAssetStorage_30368500(v4, 0LL);
      p_loading->klass = 0LL;
      sub_B52920(p_loading, 0LL, v6, v7, v8, v9, v10, v11);
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
    sub_B52A5C(gameObject, *(_QWORD *)&useNum);
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
        v12 = sub_B52A88(gameObject);
        sub_B52A28(v12, 0LL);
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
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v6; // x9
  struct UnityEngine_GameObject_o *missionTargetLabel; // x8
  __int64 v8; // x21
  int32_t v9; // w22
  unsigned int v10; // w20
  UnityEngine_GameObject_c *klass; // x9
  const MethodInfo *v12; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v13; // x24
  int v14; // w25
  Il2CppArrayBounds v15; // x8
  __int64 v16; // x11
  struct UnityEngine_GameObject_o *v17; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v18; // x8
  __int64 v19; // x0

  v3 = offset;
  v4 = this;
  if ( (byte_42AFEB1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (BoardOptionEventTargetComponent_o *)sub_B52984(&QuestInformationListViewItem_TypeInfo);
    byte_42AFEB1 = 1;
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
  v6 = v4->fields.eventTargetItemDrawList;
  LODWORD(v4->fields.mChocoTex) = v3;
  if ( !v6 )
    goto LABEL_29;
  missionTargetLabel = v4->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    goto LABEL_29;
  v8 = 0LL;
  v9 = v3;
  v10 = (v6->max_length - v3) & ~((signed int)(v6->max_length - v3) >> 31);
  while ( 1 )
  {
    klass = missionTargetLabel[1].klass;
    if ( (int)v8 >= (int)klass )
      break;
    if ( (unsigned int)v8 >= (unsigned int)klass )
      goto LABEL_35;
    this = (BoardOptionEventTargetComponent_o *)*((_QWORD *)&missionTargetLabel[1].monitor + v8);
    if ( !this )
      goto LABEL_29;
    this = (BoardOptionEventTargetComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
    if ( !this )
      goto LABEL_29;
    if ( (unsigned int)v8 >= v10 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v13 = v4->fields.eventTargetItemDrawList;
      if ( !v13 )
        goto LABEL_29;
      v14 = v9 + v8;
      if ( v13->max_length <= (unsigned int)(v9 + v8) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v15 = v13->bounds[v14 + 4];
      if ( *(_QWORD *)&v15
        && (v16 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(**(_QWORD **)&v15 + 300LL) >= (unsigned int)v16) )
      {
        *(_QWORD *)&offset = *(QuestInformationListViewItem_c **)(*(_QWORD *)(**(_QWORD **)&v15 + 200LL) + 8 * v16 - 8) == QuestInformationListViewItem_TypeInfo
                           ? *(_QWORD *)&v13->bounds[v14 + 4]
                           : 0LL;
      }
      else
      {
        *(_QWORD *)&offset = 0LL;
      }
      v17 = v4->fields.missionTargetLabel;
      if ( !v17 )
        goto LABEL_29;
      if ( (unsigned int)v8 >= LODWORD(v17[1].klass) )
      {
LABEL_35:
        v19 = sub_B52A88(this);
        sub_B52A28(v19, 0LL);
      }
      this = (BoardOptionEventTargetComponent_o *)*((_QWORD *)&v17[1].monitor + v8);
      if ( !this )
        goto LABEL_29;
      BoardOptionEventTargetListViewItemDraw__SetItem(
        (BoardOptionEventTargetListViewItemDraw_o *)this,
        *(QuestInformationListViewItem_o **)&offset,
        2,
        v12);
    }
    missionTargetLabel = v4->fields.missionTargetLabel;
    ++v8;
    if ( !missionTargetLabel )
      goto LABEL_29;
  }
  v18 = v4->fields.eventTargetItemDrawList;
  if ( !v18 )
LABEL_29:
    sub_B52A5C(this, *(_QWORD *)&offset);
  if ( (signed int)v18->max_length <= (int)klass )
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
  if ( (byte_42AFEB5 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_42AFEB5 = 1;
  }
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    return 0;
  missionTargetLabel = v2->fields.missionTargetLabel;
  if ( !missionTargetLabel )
    sub_B52A5C(this, method);
  return (signed int)eventTargetItemDrawList->max_length > SLODWORD(missionTargetLabel[1].klass);
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v3; // x20
  UnityEngine_Object_o *klass; // x21
  BattleServantConfConponent_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Material_o *mChocoMaterialTx; // t1
  System_Int32_array **UIAtlas; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BoardOptionEventTargetComponent_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1

  if ( (byte_42AFEB4 & 1) == 0 )
  {
    sub_B52984(&BoardOptionEventTargetComponent_TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B52984(&StringLiteral_16045/*"_ChocoTex"*/);
    sub_B52984(&StringLiteral_12926/*"Shaders/ChocoMap"*/);
    byte_42AFEB4 = 1;
  }
  v3 = (BattleServantConfConponent_o *)&this[1];
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
    v6 = (UnityEngine_Object_o *)mChocoMaterialTx;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
    {
      UIAtlas = (System_Int32_array **)UnityEngine_Resources__Load_UIAtlas_(
                                         (System_String_o *)StringLiteral_12926/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_1F7452C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B52920(p_mChocoMaterialTx, UIAtlas, v9, v10, v11, v12, v13, v14);
    }
    v15 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v15 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_SP, 0LL);
    v17 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v17, v16, 0LL);
    v3->klass = (BattleServantConfConponent_c *)v17;
    sub_B52920(v3, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
    if ( !v3->klass )
      sub_B52A5C(0LL, v24);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)v3->klass,
      (System_String_o *)StringLiteral_16045/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoMaterialTx->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)v3->klass;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  BattleServantConfConponent_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Material_o *mChocoMaterialTx; // t1
  System_Int32_array **UIAtlas; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BoardOptionEventTargetComponent_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1

  if ( (byte_42AFEB3 & 1) == 0 )
  {
    sub_B52984(&BoardOptionEventTargetComponent_TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B52984(&StringLiteral_16045/*"_ChocoTex"*/);
    sub_B52984(&StringLiteral_12926/*"Shaders/ChocoMap"*/);
    byte_42AFEB3 = 1;
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
    v6 = (UnityEngine_Object_o *)mChocoMaterialTx;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
    {
      UIAtlas = (System_Int32_array **)UnityEngine_Resources__Load_UIAtlas_(
                                         (System_String_o *)StringLiteral_12926/*"Shaders/ChocoMap"*/,
                                         (const MethodInfo_1F7452C *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoMaterialTx->klass = (BattleServantConfConponent_c *)UIAtlas;
      sub_B52920(p_mChocoMaterialTx, UIAtlas, v9, v10, v11, v12, v13, v14);
    }
    v15 = BoardOptionEventTargetComponent_TypeInfo;
    if ( (BYTE3(BoardOptionEventTargetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v15 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_TX, 0LL);
    v17 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v17, v16, 0LL);
    p_mChocoMaterialSp->klass = (BattleServantConfConponent_c *)v17;
    sub_B52920(p_mChocoMaterialSp, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
    if ( !p_mChocoMaterialSp->klass )
      sub_B52A5C(0LL, v24);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16045/*"_ChocoTex"*/,
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
    sub_B52A5C(this, method);
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
      v9 = sub_B52A88(this);
      sub_B52A28(v9, 0LL);
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
  if ( (byte_42AFEB6 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_42AFEB6 = 1;
  }
  eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
  if ( eventTargetItemDrawList )
  {
    missionTargetLabel = v3->fields.missionTargetLabel;
    if ( !missionTargetLabel )
      sub_B52A5C(this, method);
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
  Il2CppObject *v1; // x19
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD668 & 1) == 0 )
  {
    sub_B52984(&BoardOptionEventTargetComponent___c_TypeInfo);
    byte_42AD668 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v1;
  sub_B52920(static_fields);
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
  Il2CppClass *klass; // x8
  System_String_array *data; // x19
  System_Action_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_42AD669 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    this = (BoardOptionEventTargetComponent___c__DisplayClass7_0_o *)sub_B52984(&Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__);
    byte_42AD669 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    sub_B52A5C(this, method);
  data = (System_String_array *)klass->_1.byval_arg.data;
  v5 = (System_Action_o *)v2[3].klass;
  if ( !v5 )
  {
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass7_0__CreateEnemyList_b__2__,
      0LL);
    v2[3].klass = (Il2CppClass *)v5;
    sub_B52920(&v2[3]);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30366456(data, v5, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass7_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  BoardOptionEventTargetComponent__CreateEnemyList_24989856(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}