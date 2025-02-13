void __fastcall BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct BoardOptionEventTargetComponent_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BD8FAE & 1) == 0 )
  {
    sub_1C21E38(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_15393/*"Unlit/Transparent Colored_Choco"*/);
    sub_1C21E38(&StringLiteral_5082/*"Custom/SpriteWithMask_Choco"*/);
    byte_4BD8FAE = 1;
  }
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15393/*"Unlit/Transparent Colored_Choco"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    StringLiteral_15393/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_5082/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5082/*"Custom/SpriteWithMask_Choco"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->CHOCO_SHADER_SP, v7, v9, v10, v11, v12, v13, v14);
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
  __int64 v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *enemyIds; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 *v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Int32_array *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Master_object; // x23
  Il2CppObject *v37; // x24
  unsigned int **v38; // x25
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *v45; // x26
  const MethodInfo *v46; // x2
  __int64 v47; // x8
  int64_t v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x8
  __int64 v61; // x29
  __int64 v62; // x28
  unsigned __int64 v63; // x21
  unsigned int *v64; // x8
  __int64 v65; // x8
  __int64 v66; // x8
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  ViewEnemyEntity_o *v73; // x26
  System_String_o *v74; // x0
  Il2CppObject *v75; // x26
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  ViewEnemyEntity_o *v86; // x27
  unsigned int *v87; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x22
  BoardOptionEventTargetComponent___c_c *v89; // x0
  System_Func_object__bool__o *_9__8_0; // x23
  Il2CppObject *v91; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int32_t v99; // w1
  struct System_String_array *v100; // x0
  struct System_String_array **p_loadedAssets; // x19
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  System_Action_o *v108; // x19
  __int64 v109; // x0
  System_Collections_Generic_List_object__o *v111; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v114; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v115; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BD8FA5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
    sub_1C21E38(&System_Func_ViewEnemyEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__);
    sub_1C21E38(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__);
    sub_1C21E38(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
    sub_1C21E38(&BoardOptionEventTargetComponent___c_TypeInfo);
    sub_1C21E38(&ViewEnemyEntity___TypeInfo);
    sub_1C21E38(&ViewEnemyEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_12903/*"Servants/Commands/"*/);
    byte_4BD8FA5 = 1;
  }
  v114 = 0LL;
  v115 = 0LL;
  entity = 0LL;
  missionTargetState = 0;
  v6 = sub_1C22084(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
  BoardOptionEventTargetComponent___c__DisplayClass8_0___ctor(
    (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)v6,
    0LL);
  if ( !v6 )
    goto LABEL_57;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 32) = enemies;
  v15 = (__int64 *)(v6 + 32);
  *(_DWORD *)(v6 + 24) = questId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)enemies, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  this->fields.dispQuestId = *(_DWORD *)(v6 + 24);
  v29 = *(struct System_Int32_array **)(v6 + 32);
  this->fields.dispEnemies = v29;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dispEnemies, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v37 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  v111 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v111,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v6 + 40) = 0LL;
  v38 = (unsigned int **)(v6 + 40);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), 0LL, v39, v40, v41, v42, v43, v44);
  v45 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  }
  if ( !v45 )
    goto LABEL_57;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v45,
    &entity,
    *((_QWORD *)enemyIds[11].monitor + 8),
    *(_DWORD *)(v6 + 24),
    0LL);
  v47 = *(_QWORD *)(v6 + 32);
  if ( v47 )
  {
    v48 = sub_1C21EE0(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v47 + 24));
    *v38 = (unsigned int *)v48;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), v48, v49, v50, v51, v52, v53, v54);
    v60 = *v15;
    if ( !*v15 )
      goto LABEL_57;
    v61 = 8LL;
    v62 = 8LL;
    while ( 1 )
    {
      v63 = v61 - 8;
      if ( v61 - 8 >= *(int *)(v60 + 24) )
        break;
      v64 = *v38;
      if ( !*v38 )
        goto LABEL_57;
      if ( v63 >= v64[6] )
        goto LABEL_71;
      *(_QWORD *)&v64[v62] = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v64[v62], 0LL, (int64_t)v46, v55, v56, v57, v58, v59);
      v65 = *v15;
      if ( !*v15 )
        goto LABEL_57;
      if ( v63 >= *(unsigned int *)(v65 + 24) )
        goto LABEL_71;
      v55 = *(_DWORD *)(v65 + 4 * v61);
      if ( v55 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_57;
        enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyMaster__TryGetEntity(
                                                                          (ViewEnemyMaster_o *)Master_object,
                                                                          &v114,
                                                                          *(_DWORD *)(v6 + 24),
                                                                          v55,
                                                                          0LL);
        if ( ((unsigned __int8)enemyIds & 1) != 0 )
        {
          enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v114;
          if ( !v114 )
            goto LABEL_57;
          ViewEnemyEntity__IsMissionTarget(v114, v114->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_31;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.enemyIds;
            if ( !enemyIds || !enemyIds[1].monitor )
              goto LABEL_31;
            if ( !v114 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Contains_int_(
                                                                              enemyIds,
                                                                              v114->fields.enemyId,
                                                                              (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( ((unsigned __int8)enemyIds & 1) == 0 )
            {
LABEL_31:
              v66 = *v15;
              if ( !*v15 )
                goto LABEL_57;
              if ( v63 >= *(unsigned int *)(v66 + 24) )
                goto LABEL_71;
              *(_DWORD *)(v66 + 4 * v61) = 0;
            }
            if ( !v114 || !v37 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v37,
                                                                              &v115,
                                                                              v114->fields.svtId,
                                                                              (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)enemyIds & 1) != 0 )
            {
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v115;
              if ( !v115 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__get_IsOrganization(
                                                                                (ServantEntity_o *)v115,
                                                                                0LL);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
                goto LABEL_41;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v114;
              if ( !v114 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyEntity__IsIconIdUnique(v114, 0LL);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
              {
                if ( !v114 )
                  goto LABEL_57;
                v74 = System_Int32__ToString((int)v114 + 36, 0LL);
                v75 = (Il2CppObject *)System_String__Concat_63115476((System_String_o *)StringLiteral_12903/*"Servants/Commands/"*/, v74, 0LL);
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v111;
                if ( !v111 )
                  goto LABEL_57;
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___Contains(
                                                                                  v111,
                                                                                  v75,
                                                                                  (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( ((unsigned __int8)enemyIds & 1) == 0 )
                {
                  items = v111->fields._items;
                  v83 = Method_System_Collections_Generic_List_string__Add__;
                  ++v111->fields._version;
                  if ( !items )
                    goto LABEL_57;
                  size = v111->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v111,
                      v75,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v85 = &items->obj.klass + size;
                    v111->fields._size = size + 1;
                    v85[4] = (Il2CppClass *)v75;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v85 + 4), (int64_t)v75, v76, v77, v78, v79, v80, v81);
                  }
                }
                v86 = v114;
                v73 = (ViewEnemyEntity_o *)sub_1C22084(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_41556948(v73, v86, 0LL);
                v114 = v73;
                if ( !v73 )
                  goto LABEL_57;
                v73->fields.iconId = 0;
              }
              else
              {
LABEL_41:
                v73 = v114;
              }
              v87 = *v38;
              if ( !*v38 )
                goto LABEL_57;
              if ( v73 )
              {
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C21F74(
                                                                                  v73,
                                                                                  *(_QWORD *)(*(_QWORD *)v87 + 64LL));
                if ( !enemyIds )
                {
                  v109 = sub_1C220B8();
                  sub_1C21F60(v109, 0LL);
                }
              }
              if ( v63 >= v87[6] )
LABEL_71:
                sub_1C2209C(enemyIds, v8);
              *(_QWORD *)&v87[v62] = v73;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v87[v62], (int64_t)v73, v67, v68, v69, v70, v71, v72);
            }
          }
        }
      }
      v60 = *v15;
      ++v61;
      v62 += 2LL;
      if ( !*v15 )
        goto LABEL_57;
    }
  }
  v88 = (System_Collections_Generic_IEnumerable_TSource__o *)*v38;
  if ( *v38 )
  {
    v89 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v89 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__bool__o *)v89->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v89->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v89);
        v89 = BoardOptionEventTargetComponent___c_TypeInfo;
      }
      v91 = (Il2CppObject *)v89->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__8_0,
        v91,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0LL);
      static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98);
    }
    v99 = System_Linq_Enumerable__Count_object__50119556(
            v88,
            (System_Func_TSource__bool__o *)_9__8_0,
            (const MethodInfo_2FCC384 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v99 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v99, v46);
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v111;
  if ( !v111 )
LABEL_57:
    sub_1C22094(enemyIds, v8);
  v100 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v111,
                                         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v100;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_loadedAssets, (int64_t)v100, v102, v103, v104, v105, v106, v107);
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v108 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v108,
    (Il2CppObject *)v6,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v108, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_34607900(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v8; // x19
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w22
  ViewEnemyEntity_o *v12; // x24
  QuestInformationListViewItem_o *v13; // x0
  Il2CppObject *v14; // x23
  int32_t v15; // w1
  ViewEnemyEntity_o *v16; // x2
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  const MethodInfo *v27; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  v8 = this;
  if ( (byte_4BD8FA7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoardOptionEventTargetComponent_o *)sub_1C21E38(&QuestInformationListViewItem_TypeInfo);
    byte_4BD8FA7 = 1;
  }
  if ( v8->fields.loading && v8->fields.dispQuestId == questId )
  {
    v8->fields.loading = 0;
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
LABEL_28:
            sub_1C2209C(this, *(_QWORD *)&questId);
          if ( enemies->m_Items[v10 + 1] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v10 >= veEnts->max_length )
            goto LABEL_28;
          v12 = veEnts->m_Items[v10];
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_1C22084(QuestInformationListViewItem_TypeInfo);
            v14 = (Il2CppObject *)v13;
            v15 = v11;
            v16 = v12;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v10 >= (int)v9 )
            goto LABEL_22;
        }
        v13 = (QuestInformationListViewItem_o *)sub_1C22084(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v13;
        v15 = v11;
        v16 = 0LL;
LABEL_15:
        QuestInformationListViewItem___ctor_35134616(v13, v15, v16, 0, 0LL);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (v23 = *(_QWORD *)&this->fields.m_CachedPtr,
              v24 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v23) )
        {
LABEL_27:
          sub_1C22094(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v14,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = v23 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v26 + 32) = v14;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v14, v17, v18, v19, v20, v21, v22);
        }
        LODWORD(v9) = enemies->max_length;
        ++v11;
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
        BoardOptionEventTargetComponent__CreateEnemyList(v8, dispQuestId, dispEnemies, v27);
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

  if ( (byte_4BD8FA9 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD8FA9 = 1;
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
      AssetManager__releaseAssetStorage_39043848(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_1C21DDC(p_loadedAssets, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent__DispEmptyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t useNum,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionTargetLabel; // x21
  BoardOptionEventTargetListViewItemDraw_o *gameObject; // x0
  __int64 v7; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v9; // x8
  int32_t max_length; // w9
  unsigned int v11; // w10
  __int64 v12; // x21
  struct BoardOptionEventTargetListViewItemDraw_array *v13; // x8

  if ( (byte_4BD8FA6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8FA6 = 1;
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
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, useNum > 0, 0LL),
          (v9 = this->fields.eventTargetItemDrawList) == 0LL) )
    {
LABEL_26:
      sub_1C22094(gameObject, v7);
    }
    max_length = v9->max_length;
    if ( max_length < useNum )
      useNum = v9->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= max_length )
LABEL_27:
          sub_1C2209C(gameObject, v7);
        v12 = (int)v11;
        gameObject = v9->m_Items[v11];
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
        if ( !gameObject )
          goto LABEL_26;
        if ( (int)v12 >= useNum )
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


void __fastcall BoardOptionEventTargetComponent__DispList(
        BoardOptionEventTargetComponent_o *this,
        int32_t offset,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionTargetLabel; // x21
  BoardOptionEventTargetListViewItemDraw_o *gameObject; // x0
  QuestInformationListViewItem_o *v7; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v10; // x9
  struct BoardOptionEventTargetListViewItemDraw_array *v11; // x8
  int v12; // w21
  unsigned int v13; // w23
  __int64 v14; // x9
  __int64 methodPtr_low; // x10
  struct BoardOptionEventTargetListViewItemDraw_array *v16; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x8

  if ( (byte_4BD8FA8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestInformationListViewItem_TypeInfo);
    byte_4BD8FA8 = 1;
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
    v10 = this->fields.itemList;
    this->fields.nowOffset = offset;
    if ( !v10 )
      goto LABEL_32;
    v11 = this->fields.eventTargetItemDrawList;
    if ( !v11 )
      goto LABEL_32;
    v12 = 0;
    v13 = (v10->fields._size - offset) & ~((v10->fields._size - offset) >> 31);
    while ( 1 )
    {
      v14 = *(_QWORD *)&v11->max_length;
      if ( v12 >= (int)v14 )
        break;
      if ( v12 >= (unsigned int)v14 )
        goto LABEL_38;
      gameObject = v11->m_Items[v12];
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)gameObject,
                                                                 0LL);
      if ( !gameObject )
        goto LABEL_32;
      if ( v12 >= v13 )
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
                                                                   offset + v12,
                                                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( gameObject
          && (methodPtr_low = LOBYTE(QuestInformationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(gameObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          v7 = (QuestInformationListViewItem_c *)gameObject->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestInformationListViewItem_TypeInfo
             ? (QuestInformationListViewItem_o *)gameObject
             : 0LL;
        }
        else
        {
          v7 = 0LL;
        }
        v16 = this->fields.eventTargetItemDrawList;
        if ( !v16 )
          goto LABEL_32;
        if ( v12 >= v16->max_length )
LABEL_38:
          sub_1C2209C(gameObject, v7);
        gameObject = v16->m_Items[v12];
        if ( !gameObject )
          goto LABEL_32;
        BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, v7, 2, 0LL);
      }
      v11 = this->fields.eventTargetItemDrawList;
      ++v12;
      if ( !v11 )
        goto LABEL_32;
    }
    v17 = this->fields.itemList;
    if ( !v17 )
LABEL_32:
      sub_1C22094(gameObject, v7);
    if ( v17->fields._size <= (int)v14 )
      BoardOptionEventTargetComponent__SetAlpha(this, 1.0, (const MethodInfo *)v7);
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
  if ( (byte_4BD8FAC & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4BD8FAC = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_1C22094(this, method);
  return itemList->fields._size > (signed int)eventTargetItemDrawList->max_length;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  BoardOptionEventTargetComponent_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1

  if ( (byte_4BD8FAB & 1) == 0 )
  {
    sub_1C21E38(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C21E38(&StringLiteral_16436/*"_ChocoTex"*/);
    sub_1C21E38(&StringLiteral_12985/*"Shaders/ChocoMap"*/);
    byte_4BD8FAB = 1;
  }
  p_mChocoMaterialSp = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1C21DDC(p_mChocoTex, (int64_t)object, v9, v10, v11, v12, v13, v14);
    }
    v15 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v15 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_SP, 0LL);
    v17 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v17, v16, 0LL);
    p_mChocoMaterialSp->klass = (PartyOrganizationUtility_c *)v17;
    sub_1C21DDC(p_mChocoMaterialSp, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    if ( !p_mChocoMaterialSp->klass )
      sub_1C22094(0LL, v24);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16436/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  BoardOptionEventTargetComponent_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1

  if ( (byte_4BD8FAA & 1) == 0 )
  {
    sub_1C21E38(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C21E38(&StringLiteral_16436/*"_ChocoTex"*/);
    sub_1C21E38(&StringLiteral_12985/*"Shaders/ChocoMap"*/);
    byte_4BD8FAA = 1;
  }
  p_mChocoMaterialTx = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1C21DDC(p_mChocoTex, (int64_t)object, v9, v10, v11, v12, v13, v14);
    }
    v15 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v15 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_TX, 0LL);
    v17 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v17, v16, 0LL);
    p_mChocoMaterialTx->klass = (PartyOrganizationUtility_c *)v17;
    sub_1C21DDC(p_mChocoMaterialTx, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    if ( !p_mChocoMaterialTx->klass )
      sub_1C22094(0LL, v24);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16436/*"_ChocoTex"*/,
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
    sub_1C22094(this, method);
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2209C(this, method);
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
  if ( (byte_4BD8FAD & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4BD8FAD = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_1C22094(this, method);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8FBA & 1) == 0 )
  {
    sub_1C21E38(&BoardOptionEventTargetComponent___c_TypeInfo);
    byte_4BD8FBA = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  struct BoardOptionEventTargetComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__2; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v2 = this;
  if ( (byte_4BD8FBB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_1C21E38(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__);
    byte_4BD8FBB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__2, (int64_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39041504(loadedAssets, _9__2, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  BoardOptionEventTargetComponent__CreateEnemyList_34607900(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}