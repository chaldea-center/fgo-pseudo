void __fastcall BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x1
  struct BoardOptionEventTargetComponent_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BFA193 & 1) == 0 )
  {
    sub_1C2E12C(&BoardOptionEventTargetComponent_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_15405/*"Unlit/Transparent Colored_Choco"*/, v8);
    sub_1C2E12C(&StringLiteral_5070/*"Custom/SpriteWithMask_Choco"*/, v9);
    byte_4BFA193 = 1;
  }
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15405/*"Unlit/Transparent Colored_Choco"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    StringLiteral_15405/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_5070/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5070/*"Custom/SpriteWithMask_Choco"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->CHOCO_SHADER_SP, v10, v12, v13, v14, v15, v16, v17);
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
  __int64 v6; // x1
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
  __int64 v30; // x20
  System_Collections_Generic_IEnumerable_TSource__o *enemyIds; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 *v39; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_List_object__o *v46; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Int32_array *v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *Master_object; // x23
  Il2CppObject *v61; // x24
  unsigned int **v62; // x25
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  Il2CppObject *v69; // x26
  const MethodInfo *v70; // x2
  __int64 v71; // x8
  int64_t v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x8
  __int64 v85; // x29
  __int64 v86; // x28
  unsigned __int64 v87; // x21
  unsigned int *v88; // x8
  __int64 v89; // x8
  __int64 v90; // x8
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  ViewEnemyEntity_o *v97; // x26
  System_String_o *v98; // x0
  Il2CppObject *v99; // x26
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct System_Object_array *items; // x8
  _QWORD *v107; // x9
  __int64 size; // x10
  Il2CppClass **v109; // x0
  ViewEnemyEntity_o *v110; // x27
  unsigned int *v111; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x22
  BoardOptionEventTargetComponent___c_c *v113; // x0
  System_Func_object__bool__o *_9__8_0; // x23
  Il2CppObject *v115; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int32_t v123; // w1
  struct System_String_array *v124; // x0
  struct System_String_array **p_loadedAssets; // x19
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  System_Action_o *v132; // x19
  __int64 v133; // x0
  System_Collections_Generic_List_object__o *v135; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v138; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v139; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BFA18A & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_1C2E12C(&AtlasManager_TypeInfo, v6);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v8);
    sub_1C2E12C(&Method_DataManager_GetMaster_ViewEnemyMaster___, v9);
    sub_1C2E12C(&DataManager_TypeInfo, v10);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___, v13);
    sub_1C2E12C(&System_Func_ViewEnemyEntity__bool__TypeInfo, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Contains__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__ToArray__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_1C2E12C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v20);
    sub_1C2E12C(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1C2E12C(&NetworkManager_TypeInfo, v22);
    sub_1C2E12C(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__, v23);
    sub_1C2E12C(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__, v24);
    sub_1C2E12C(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo, v25);
    sub_1C2E12C(&BoardOptionEventTargetComponent___c_TypeInfo, v26);
    sub_1C2E12C(&ViewEnemyEntity___TypeInfo, v27);
    sub_1C2E12C(&ViewEnemyEntity_TypeInfo, v28);
    sub_1C2E12C(&StringLiteral_12912/*"Servants/Commands/"*/, v29);
    byte_4BFA18A = 1;
  }
  v138 = 0LL;
  v139 = 0LL;
  entity = 0LL;
  missionTargetState = 0;
  v30 = sub_1C2E378(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
  BoardOptionEventTargetComponent___c__DisplayClass8_0___ctor(
    (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_57;
  *(_QWORD *)(v30 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 32) = enemies;
  v39 = (__int64 *)(v30 + 32);
  *(_DWORD *)(v30 + 24) = questId;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)enemies, v40, v41, v42, v43, v44, v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v46;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v46, v47, v48, v49, v50, v51, v52);
  this->fields.dispQuestId = *(_DWORD *)(v30 + 24);
  v53 = *(struct System_Int32_array **)(v30 + 32);
  this->fields.dispEnemies = v53;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.dispEnemies, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantMaster___);
  v135 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v135,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v30 + 40) = 0LL;
  v62 = (unsigned int **)(v30 + 40);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 40), 0LL, v63, v64, v65, v66, v67, v68);
  v69 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v32);
    byte_4BF81D5 = 1;
  }
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  }
  if ( !v69 )
    goto LABEL_57;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v69,
    &entity,
    *((_QWORD *)enemyIds[11].monitor + 8),
    *(_DWORD *)(v30 + 24),
    0LL);
  v71 = *(_QWORD *)(v30 + 32);
  if ( v71 )
  {
    v72 = sub_1C2E1D4(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v71 + 24));
    *v62 = (unsigned int *)v72;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 40), v72, v73, v74, v75, v76, v77, v78);
    v84 = *v39;
    if ( !*v39 )
      goto LABEL_57;
    v85 = 8LL;
    v86 = 8LL;
    while ( 1 )
    {
      v87 = v85 - 8;
      if ( v85 - 8 >= *(int *)(v84 + 24) )
        break;
      v88 = *v62;
      if ( !*v62 )
        goto LABEL_57;
      if ( v87 >= v88[6] )
        goto LABEL_71;
      *(_QWORD *)&v88[v86] = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v88[v86], 0LL, (int64_t)v70, v79, v80, v81, v82, v83);
      v89 = *v39;
      if ( !*v39 )
        goto LABEL_57;
      if ( v87 >= *(unsigned int *)(v89 + 24) )
        goto LABEL_71;
      v79 = *(_DWORD *)(v89 + 4 * v85);
      if ( v79 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_57;
        enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyMaster__TryGetEntity(
                                                                          (ViewEnemyMaster_o *)Master_object,
                                                                          &v138,
                                                                          *(_DWORD *)(v30 + 24),
                                                                          v79,
                                                                          0LL);
        if ( ((unsigned __int8)enemyIds & 1) != 0 )
        {
          enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v138;
          if ( !v138 )
            goto LABEL_57;
          ViewEnemyEntity__IsMissionTarget(v138, v138->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_31;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.enemyIds;
            if ( !enemyIds || !enemyIds[1].monitor )
              goto LABEL_31;
            if ( !v138 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Contains_int_(
                                                                              enemyIds,
                                                                              v138->fields.enemyId,
                                                                              (const MethodInfo_2FE9D88 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( ((unsigned __int8)enemyIds & 1) == 0 )
            {
LABEL_31:
              v90 = *v39;
              if ( !*v39 )
                goto LABEL_57;
              if ( v87 >= *(unsigned int *)(v90 + 24) )
                goto LABEL_71;
              *(_DWORD *)(v90 + 4 * v85) = 0;
            }
            if ( !v138 || !v61 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v61,
                                                                              &v139,
                                                                              v138->fields.svtId,
                                                                              (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)enemyIds & 1) != 0 )
            {
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v139;
              if ( !v139 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__get_IsOrganization(
                                                                                (ServantEntity_o *)v139,
                                                                                0LL);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
                goto LABEL_41;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v138;
              if ( !v138 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyEntity__IsIconIdUnique(v138, 0LL);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
              {
                if ( !v138 )
                  goto LABEL_57;
                v98 = System_Int32__ToString((int)v138 + 36, 0LL);
                v99 = (Il2CppObject *)System_String__Concat_63235584((System_String_o *)StringLiteral_12912/*"Servants/Commands/"*/, v98, 0LL);
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v135;
                if ( !v135 )
                  goto LABEL_57;
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___Contains(
                                                                                  v135,
                                                                                  v99,
                                                                                  (const MethodInfo_366BC3C *)Method_System_Collections_Generic_List_string__Contains__);
                if ( ((unsigned __int8)enemyIds & 1) == 0 )
                {
                  items = v135->fields._items;
                  v107 = Method_System_Collections_Generic_List_string__Add__;
                  ++v135->fields._version;
                  if ( !items )
                    goto LABEL_57;
                  size = v135->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v135,
                      v99,
                      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v109 = &items->obj.klass + size;
                    v135->fields._size = size + 1;
                    v109[4] = (Il2CppClass *)v99;
                    sub_1C2E0D0(
                      (PartyOrganizationUtility_o *)(v109 + 4),
                      (int64_t)v99,
                      v100,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105);
                  }
                }
                v110 = v138;
                v97 = (ViewEnemyEntity_o *)sub_1C2E378(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_41640384(v97, v110, 0LL);
                v138 = v97;
                if ( !v97 )
                  goto LABEL_57;
                v97->fields.iconId = 0;
              }
              else
              {
LABEL_41:
                v97 = v138;
              }
              v111 = *v62;
              if ( !*v62 )
                goto LABEL_57;
              if ( v97 )
              {
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2E268(
                                                                                  v97,
                                                                                  *(_QWORD *)(*(_QWORD *)v111 + 64LL));
                if ( !enemyIds )
                {
                  v133 = sub_1C2E3AC();
                  sub_1C2E254(v133, 0LL);
                }
              }
              if ( v87 >= v111[6] )
LABEL_71:
                sub_1C2E390(enemyIds, v32);
              *(_QWORD *)&v111[v86] = v97;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v111[v86], (int64_t)v97, v91, v92, v93, v94, v95, v96);
            }
          }
        }
      }
      v84 = *v39;
      ++v85;
      v86 += 2LL;
      if ( !*v39 )
        goto LABEL_57;
    }
  }
  v112 = (System_Collections_Generic_IEnumerable_TSource__o *)*v62;
  if ( *v62 )
  {
    v113 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v113 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__bool__o *)v113->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v113->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v113);
        v113 = BoardOptionEventTargetComponent___c_TypeInfo;
      }
      v115 = (Il2CppObject *)v113->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__8_0,
        v115,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0LL);
      static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122);
    }
    v123 = System_Linq_Enumerable__Count_object__50258700(
             v112,
             (System_Func_TSource__bool__o *)_9__8_0,
             (const MethodInfo_2FEE30C *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v123 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v123, v70);
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v135;
  if ( !v135 )
LABEL_57:
    sub_1C2E388(enemyIds, v32);
  v124 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v135,
                                         (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v124;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_loadedAssets, (int64_t)v124, v126, v127, v128, v129, v130, v131);
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v132 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v132,
    (Il2CppObject *)v30,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v132, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_34667360(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  int32_t v12; // w22
  ViewEnemyEntity_o *v13; // x24
  QuestInformationListViewItem_o *v14; // x0
  Il2CppObject *v15; // x23
  int32_t v16; // w1
  ViewEnemyEntity_o *v17; // x2
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8
  const MethodInfo *v28; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  v8 = this;
  if ( (byte_4BFA18C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    this = (BoardOptionEventTargetComponent_o *)sub_1C2E12C(&QuestInformationListViewItem_TypeInfo, v9);
    byte_4BFA18C = 1;
  }
  if ( v8->fields.loading && v8->fields.dispQuestId == questId )
  {
    v8->fields.loading = 0;
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
LABEL_28:
            sub_1C2E390(this, *(_QWORD *)&questId);
          if ( enemies->m_Items[v11 + 1] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v11 >= veEnts->max_length )
            goto LABEL_28;
          v13 = veEnts->m_Items[v11];
          if ( v13 )
          {
            v14 = (QuestInformationListViewItem_o *)sub_1C2E378(QuestInformationListViewItem_TypeInfo);
            v15 = (Il2CppObject *)v14;
            v16 = v12;
            v17 = v13;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v11 >= (int)v10 )
            goto LABEL_22;
        }
        v14 = (QuestInformationListViewItem_o *)sub_1C2E378(QuestInformationListViewItem_TypeInfo);
        v15 = (Il2CppObject *)v14;
        v16 = v12;
        v17 = 0LL;
LABEL_15:
        QuestInformationListViewItem___ctor_35195956(v14, v16, v17, 0, 0LL);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (v24 = *(_QWORD *)&this->fields.m_CachedPtr,
              v25 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v24) )
        {
LABEL_27:
          sub_1C2E388(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v15,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = v24 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v27 + 32) = v15;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v15, v18, v19, v20, v21, v22, v23);
        }
        LODWORD(v10) = enemies->max_length;
        ++v12;
        goto LABEL_21;
      }
    }
LABEL_22:
    BoardOptionEventTargetComponent__DispList(v8, 0, (const MethodInfo *)enemies);
  }
  else
  {
    BoardOptionEventTargetComponent__DestroyList(v8, *(const MethodInfo **)&questId);
    dispQuestId = v8->fields.dispQuestId;
    if ( dispQuestId )
    {
      dispEnemies = v8->fields.dispEnemies;
      if ( dispEnemies )
        BoardOptionEventTargetComponent__CreateEnemyList(v8, dispQuestId, dispEnemies, v28);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent__DestroyList(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BFA18E & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, method);
    byte_4BFA18E = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (PartyOrganizationUtility_o *)&this->fields.loadedAssets;
    v4 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_39113092(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_1C2E0D0(p_loadedAssets, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__DispEmptyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t useNum,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Object_o *missionTargetLabel; // x21
  BoardOptionEventTargetListViewItemDraw_o *gameObject; // x0
  __int64 v7; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v9; // x8
  int max_length; // w9
  unsigned int v11; // w10
  __int64 v12; // x21
  struct BoardOptionEventTargetListViewItemDraw_array *v13; // x8

  v3 = useNum;
  if ( (byte_4BFA18B & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&useNum);
    byte_4BFA18B = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      goto LABEL_26;
    if ( !*(_QWORD *)&eventTargetItemDrawList->max_length )
      return;
    gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.missionTargetLabel;
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v3 > 0, 0LL),
          (v9 = this->fields.eventTargetItemDrawList) == 0LL) )
    {
LABEL_26:
      sub_1C2E388(gameObject, v7);
    }
    max_length = v9->max_length;
    if ( max_length < v3 )
      v3 = v9->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= max_length )
LABEL_27:
          sub_1C2E390(gameObject, v7);
        v12 = (int)v11;
        gameObject = v9->m_Items[v11];
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
        if ( !gameObject )
          goto LABEL_26;
        if ( (int)v12 >= v3 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v13 = this->fields.eventTargetItemDrawList;
          if ( !v13 )
            goto LABEL_26;
          if ( (unsigned int)v12 >= v13->max_length )
            goto LABEL_27;
          gameObject = v13->m_Items[v12];
          if ( !gameObject )
            goto LABEL_26;
          BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, 0LL, 0, 0LL);
        }
        v9 = this->fields.eventTargetItemDrawList;
        if ( !v9 )
          goto LABEL_26;
        max_length = v9->max_length;
        v11 = v12 + 1;
      }
      while ( (int)v12 + 1 < max_length );
    }
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
  __int64 v7; // x1
  UnityEngine_Object_o *missionTargetLabel; // x21
  BoardOptionEventTargetListViewItemDraw_o *gameObject; // x0
  QuestInformationListViewItem_o *v10; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v13; // x9
  struct BoardOptionEventTargetListViewItemDraw_array *v14; // x8
  int v15; // w21
  unsigned int v16; // w23
  __int64 v17; // x9
  __int64 methodPtr_low; // x10
  struct BoardOptionEventTargetListViewItemDraw_array *v19; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v20; // x8

  if ( (byte_4BFA18D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&offset);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4BFA18D = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      goto LABEL_32;
    if ( !*(_QWORD *)&eventTargetItemDrawList->max_length )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_32;
    gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.missionTargetLabel;
    if ( !gameObject )
      goto LABEL_32;
    if ( itemList->fields._size <= 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v13 = this->fields.itemList;
    this->fields.nowOffset = offset;
    if ( !v13 )
      goto LABEL_32;
    v14 = this->fields.eventTargetItemDrawList;
    if ( !v14 )
      goto LABEL_32;
    v15 = 0;
    v16 = (v13->fields._size - offset) & ~((v13->fields._size - offset) >> 31);
    while ( 1 )
    {
      v17 = *(_QWORD *)&v14->max_length;
      if ( v15 >= (int)v17 )
        break;
      if ( v15 >= (unsigned int)v17 )
        goto LABEL_38;
      gameObject = v14->m_Items[v15];
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)gameObject,
                                                                 0LL);
      if ( !gameObject )
        goto LABEL_32;
      if ( v15 >= v16 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.itemList;
        if ( !gameObject )
          goto LABEL_32;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)gameObject,
                                                                   offset + v15,
                                                                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( gameObject
          && (methodPtr_low = LOBYTE(QuestInformationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(gameObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          v10 = (QuestInformationListViewItem_c *)gameObject->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestInformationListViewItem_TypeInfo
              ? (QuestInformationListViewItem_o *)gameObject
              : 0LL;
        }
        else
        {
          v10 = 0LL;
        }
        v19 = this->fields.eventTargetItemDrawList;
        if ( !v19 )
          goto LABEL_32;
        if ( v15 >= v19->max_length )
LABEL_38:
          sub_1C2E390(gameObject, v10);
        gameObject = v19->m_Items[v15];
        if ( !gameObject )
          goto LABEL_32;
        BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, v10, 2, 0LL);
      }
      v14 = this->fields.eventTargetItemDrawList;
      ++v15;
      if ( !v14 )
        goto LABEL_32;
    }
    v20 = this->fields.itemList;
    if ( !v20 )
LABEL_32:
      sub_1C2E388(gameObject, v10);
    if ( v20->fields._size <= (int)v17 )
      BoardOptionEventTargetComponent__SetAlpha(this, 1.0, (const MethodInfo *)v10);
  }
}


bool __fastcall BoardOptionEventTargetComponent__IsNeedAnim(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9

  v2 = this;
  if ( (byte_4BFA191 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C2E12C(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_4BFA191 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_1C2E388(this, method);
  return itemList->fields._size > (signed int)eventTargetItemDrawList->max_length;
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
  PartyOrganizationUtility_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  BoardOptionEventTargetComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  UnityEngine_Material_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1

  if ( (byte_4BFA190 & 1) == 0 )
  {
    sub_1C2E12C(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Material_TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1C2E12C(&StringLiteral_16447/*"_ChocoTex"*/, v6);
    sub_1C2E12C(&StringLiteral_12994/*"Shaders/ChocoMap"*/, v7);
    byte_4BFA190 = 1;
  }
  p_mChocoMaterialSp = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v11 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12994/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1C2E0D0(p_mChocoTex, (int64_t)object, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_SP, 0LL);
    v22 = (UnityEngine_Material_o *)sub_1C2E378(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0LL);
    p_mChocoMaterialSp->klass = (PartyOrganizationUtility_c *)v22;
    sub_1C2E0D0(p_mChocoMaterialSp, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    if ( !p_mChocoMaterialSp->klass )
      sub_1C2E388(0LL, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16447/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
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
  PartyOrganizationUtility_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  BoardOptionEventTargetComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  UnityEngine_Material_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1

  if ( (byte_4BFA18F & 1) == 0 )
  {
    sub_1C2E12C(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Material_TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1C2E12C(&StringLiteral_16447/*"_ChocoTex"*/, v6);
    sub_1C2E12C(&StringLiteral_12994/*"Shaders/ChocoMap"*/, v7);
    byte_4BFA18F = 1;
  }
  p_mChocoMaterialTx = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v11 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12994/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1C2E0D0(p_mChocoTex, (int64_t)object, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_TX, 0LL);
    v22 = (UnityEngine_Material_o *)sub_1C2E378(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0LL);
    p_mChocoMaterialTx->klass = (PartyOrganizationUtility_c *)v22;
    sub_1C2E0D0(p_mChocoMaterialTx, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    if ( !p_mChocoMaterialTx->klass )
      sub_1C2E388(0LL, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16447/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


void __fastcall BoardOptionEventTargetComponent__ReCreateEnemyList(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  dispQuestId = this->fields.dispQuestId;
  if ( dispQuestId )
  {
    dispEnemies = this->fields.dispEnemies;
    if ( dispEnemies )
      BoardOptionEventTargetComponent__CreateEnemyList(this, dispQuestId, dispEnemies, v2);
  }
}


void __fastcall BoardOptionEventTargetComponent__SetAlpha(
        BoardOptionEventTargetComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  BoardOptionEventTargetComponent_o *v4; // x19
  __int64 v6; // x20
  int max_length; // w9

  eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
LABEL_7:
    sub_1C2E388(this, method);
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2E390(this, method);
    this = (BoardOptionEventTargetComponent_o *)eventTargetItemDrawList->m_Items[v6];
    if ( this )
    {
      BoardOptionEventTargetListViewItemDraw__SetAlpha((BoardOptionEventTargetListViewItemDraw_o *)this, alpha, 0LL);
      eventTargetItemDrawList = v4->fields.eventTargetItemDrawList;
      ++v6;
      if ( eventTargetItemDrawList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BoardOptionEventTargetComponent__SetNextTarget(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BoardOptionEventTargetComponent_o *v3; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9
  int32_t size; // w8
  signed int max_length; // w9
  int32_t v8; // w9
  int32_t v9; // w1

  v3 = this;
  if ( (byte_4BFA192 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C2E12C(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_4BFA192 = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_1C2E388(this, method);
    size = itemList->fields._size;
    max_length = eventTargetItemDrawList->max_length;
    if ( size > max_length )
    {
      v8 = v3->fields.nowOffset + max_length;
      if ( v8 <= size )
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFA19F & 1) == 0 )
  {
    sub_1C2E12C(&BoardOptionEventTargetComponent___c_TypeInfo, v1);
    byte_4BFA19F = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BoardOptionEventTargetComponent___c___ctor(
        BoardOptionEventTargetComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BoardOptionEventTargetComponent___c___CreateEnemyList_b__8_0(
        BoardOptionEventTargetComponent___c_o *this,
        ViewEnemyEntity_o *n,
        const MethodInfo *method)
{
  return n != 0LL;
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___ctor(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__1(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent___c__DisplayClass8_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BoardOptionEventTargetComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__2; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v2 = this;
  if ( (byte_4BFA1A0 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&AssetManager_TypeInfo, v3);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_1C2E12C(
                                                                       &Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
                                                                       v4);
    byte_4BFA1A0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C2E388(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__9__2, (int64_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39110748(loadedAssets, _9__2, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2E388(0LL, method);
  BoardOptionEventTargetComponent__CreateEnemyList_34667360(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}