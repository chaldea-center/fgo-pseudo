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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct BoardOptionEventTargetComponent_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B12CDA & 1) == 0 )
  {
    sub_1BCA7E0(&BoardOptionEventTargetComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/, v10, v11);
    byte_4B12CDA = 1;
  }
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->CHOCO_SHADER_SP, v12, v14, v15, v16, v17, v18, v19);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x20
  __int64 UserId; // x0
  __int64 v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 *v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x21
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Int32_array *v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x1
  Il2CppObject *Master_object; // x23
  Il2CppObject *v90; // x24
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Collections_Generic_List_object__o *v94; // x27
  unsigned int **v95; // x25
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x1
  Il2CppObject *v103; // x26
  const MethodInfo *v104; // x2
  __int64 v105; // x3
  __int64 v106; // x8
  int64_t v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  __int64 v118; // x8
  __int64 v119; // x29
  __int64 v120; // x28
  unsigned __int64 v121; // x21
  unsigned int *v122; // x8
  __int64 v123; // x8
  __int64 v124; // x8
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  ViewEnemyEntity_o *v131; // x26
  System_String_o *v132; // x0
  Il2CppObject *v133; // x26
  int64_t v134; // x2
  __int64 v135; // x3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  struct System_Object_array *items; // x8
  _QWORD *v141; // x9
  __int64 size; // x10
  Il2CppClass **v143; // x0
  ViewEnemyEntity_o *v144; // x27
  unsigned int *v145; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x22
  BoardOptionEventTargetComponent___c_c *v147; // x0
  System_Func_object__bool__o *_9__8_0; // x23
  Il2CppObject *v149; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int32_t v157; // w1
  struct System_String_array *v158; // x0
  struct System_String_array **p_loadedAssets; // x19
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x3
  System_Action_o *v169; // x19
  __int64 v170; // x1
  __int64 v171; // x0
  System_Collections_Generic_List_object__o *v172; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v175; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v176; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B12CD1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&questId, enemies);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ViewEnemyMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___, v21, v22);
    sub_1BCA7E0(&System_Func_ViewEnemyEntity__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewItem__TypeInfo, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v37, v38);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__, v41, v42);
    sub_1BCA7E0(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__, v43, v44);
    sub_1BCA7E0(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo, v45, v46);
    sub_1BCA7E0(&BoardOptionEventTargetComponent___c_TypeInfo, v47, v48);
    sub_1BCA7E0(&ViewEnemyEntity___TypeInfo, v49, v50);
    sub_1BCA7E0(&ViewEnemyEntity_TypeInfo, v51, v52);
    sub_1BCA7E0(&StringLiteral_12814/*"Servants/Commands/"*/, v53, v54);
    byte_4B12CD1 = 1;
  }
  v175 = 0LL;
  v176 = 0LL;
  entity = 0LL;
  missionTargetState = 0;
  v55 = sub_1BCAA2C(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo, *(_QWORD *)&questId, enemies, method);
  BoardOptionEventTargetComponent___c__DisplayClass8_0___ctor(
    (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)v55,
    0LL);
  if ( !v55 )
    goto LABEL_53;
  *(_QWORD *)(v55 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 16), (int64_t)this, v58, v59, v60, v61, v62, v63);
  *(_QWORD *)(v55 + 32) = enemies;
  v64 = (__int64 *)(v55 + 32);
  *(_DWORD *)(v55 + 24) = questId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)enemies, v65, v66, v67, v68, v69, v70);
  v74 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v71,
                                                       v72,
                                                       v73);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v74;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v74, v75, v76, v77, v78, v79, v80);
  this->fields.dispQuestId = *(_DWORD *)(v55 + 24);
  v81 = *(struct System_Int32_array **)(v55 + 32);
  this->fields.dispEnemies = v81;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispEnemies, (int64_t)v81, v82, v83, v84, v85, v86, v87);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v88);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v90 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v94 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v91,
                                                       v92,
                                                       v93);
  System_Collections_Generic_List_object____ctor(
    v94,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v55 + 40) = 0LL;
  v95 = (unsigned int **)(v55 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 40), 0LL, v96, v97, v98, v99, v100, v101);
  v103 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v102);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v103 )
    goto LABEL_53;
  UserQuestInfoMaster__TryGetEntity((UserQuestInfoMaster_o *)v103, &entity, UserId, *(_DWORD *)(v55 + 24), 0LL);
  v106 = *(_QWORD *)(v55 + 32);
  if ( v106 )
  {
    v107 = sub_1BCA888(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v106 + 24));
    *v95 = (unsigned int *)v107;
    sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 40), v107, v108, v109, v110, v111, v112, v113);
    v118 = *v64;
    if ( !*v64 )
      goto LABEL_53;
    v119 = 8LL;
    v120 = 8LL;
    v172 = v94;
    while ( 1 )
    {
      v121 = v119 - 8;
      if ( v119 - 8 >= *(int *)(v118 + 24) )
        break;
      v122 = *v95;
      if ( !*v95 )
        goto LABEL_53;
      if ( v121 >= v122[6] )
        goto LABEL_67;
      *(_QWORD *)&v122[v120] = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v122[v120], 0LL, (int64_t)v104, v105, v114, v115, v116, v117);
      v123 = *v64;
      if ( !*v64 )
        goto LABEL_53;
      if ( v121 >= *(unsigned int *)(v123 + 24) )
        goto LABEL_67;
      v105 = *(unsigned int *)(v123 + 4 * v119);
      if ( (int)v105 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_53;
        UserId = ViewEnemyMaster__TryGetEntity(
                   (ViewEnemyMaster_o *)Master_object,
                   &v175,
                   *(_DWORD *)(v55 + 24),
                   v105,
                   0LL);
        if ( (UserId & 1) != 0 )
        {
          UserId = (__int64)v175;
          if ( !v175 )
            goto LABEL_53;
          ViewEnemyEntity__IsMissionTarget(v175, v175->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_27;
            UserId = (__int64)entity->fields.enemyIds;
            if ( !UserId || !*(_QWORD *)(UserId + 24) )
              goto LABEL_27;
            if ( !v175 )
              goto LABEL_53;
            UserId = System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)UserId,
                       v175->fields.enemyId,
                       (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
            if ( (UserId & 1) == 0 )
            {
LABEL_27:
              v124 = *v64;
              if ( !*v64 )
                goto LABEL_53;
              if ( v121 >= *(unsigned int *)(v124 + 24) )
                goto LABEL_67;
              *(_DWORD *)(v124 + 4 * v119) = 0;
            }
            if ( !v175 || !v90 )
              goto LABEL_53;
            UserId = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v90,
                       &v176,
                       v175->fields.svtId,
                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (UserId & 1) != 0 )
            {
              UserId = (__int64)v176;
              if ( !v176 )
                goto LABEL_53;
              UserId = ServantEntity__get_IsOrganization((ServantEntity_o *)v176, 0LL);
              if ( (UserId & 1) == 0 )
                goto LABEL_37;
              UserId = (__int64)v175;
              if ( !v175 )
                goto LABEL_53;
              UserId = ViewEnemyEntity__IsIconIdUnique(v175, 0LL);
              if ( (UserId & 1) == 0 )
              {
                if ( !v175 )
                  goto LABEL_53;
                v132 = System_Int32__ToString((int)v175 + 36, 0LL);
                UserId = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_12814/*"Servants/Commands/"*/, v132, 0LL);
                if ( !v94 )
                  goto LABEL_53;
                v133 = (Il2CppObject *)UserId;
                UserId = System_Collections_Generic_List_object___Contains(
                           v94,
                           (Il2CppObject *)UserId,
                           (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
                if ( (UserId & 1) == 0 )
                {
                  items = v94->fields._items;
                  v141 = Method_System_Collections_Generic_List_string__Add__;
                  ++v94->fields._version;
                  if ( !items )
                    goto LABEL_53;
                  size = v94->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v94,
                      v133,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v143 = &items->obj.klass + size;
                    v94->fields._size = size + 1;
                    v143[4] = (Il2CppClass *)v133;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v143 + 4),
                      (int64_t)v133,
                      v134,
                      v135,
                      v136,
                      v137,
                      v138,
                      v139);
                  }
                }
                v144 = v175;
                v131 = (ViewEnemyEntity_o *)sub_1BCAA2C(ViewEnemyEntity_TypeInfo, v57, v134, v135);
                ViewEnemyEntity___ctor_41013736(v131, v144, 0LL);
                v175 = v131;
                if ( !v131 )
                  goto LABEL_53;
                v131->fields.iconId = 0;
              }
              else
              {
LABEL_37:
                v131 = v175;
              }
              v145 = *v95;
              if ( !*v95 )
                goto LABEL_53;
              if ( v131 )
              {
                UserId = sub_1BCA91C(v131, *(_QWORD *)(*(_QWORD *)v145 + 64LL));
                if ( !UserId )
                {
                  v171 = sub_1BCAA60();
                  sub_1BCA908(v171, 0LL);
                }
              }
              if ( v121 >= v145[6] )
LABEL_67:
                sub_1BCAA44(UserId, v57);
              *(_QWORD *)&v145[v120] = v131;
              sub_1BCA784((PartyOrganizationUtility_o *)&v145[v120], (int64_t)v131, v125, v126, v127, v128, v129, v130);
              v94 = v172;
            }
          }
        }
      }
      v118 = *v64;
      ++v119;
      v120 += 2LL;
      if ( !*v64 )
        goto LABEL_53;
    }
  }
  v146 = (System_Collections_Generic_IEnumerable_TSource__o *)*v95;
  if ( *v95 )
  {
    v147 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo, v57);
      v147 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__bool__o *)v147->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v147->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v147, v57);
        v147 = BoardOptionEventTargetComponent___c_TypeInfo;
      }
      v149 = (Il2CppObject *)v147->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ViewEnemyEntity__bool__TypeInfo, v57, v104, v105);
      System_Func_object__bool____ctor(
        _9__8_0,
        v149,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0LL);
      static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v151,
        v152,
        v153,
        v154,
        v155,
        v156);
    }
    v157 = System_Linq_Enumerable__Count_object__49476864(
             v146,
             (System_Func_TSource__bool__o *)_9__8_0,
             (const MethodInfo_2F2F500 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v157 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v157, v104);
  if ( !v94 )
LABEL_53:
    sub_1BCAA3C(UserId, v57);
  v158 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v94,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v158;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_1BCA784((PartyOrganizationUtility_o *)p_loadedAssets, (int64_t)v158, v160, v161, v162, v163, v164, v165);
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v169 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v166, v167, v168);
  System_Action___ctor(
    v169,
    (Il2CppObject *)v55,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v170);
  AtlasManager__LoadEnemyAtlas(v169, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_34141980(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  unsigned __int64 v12; // x25
  int32_t v13; // w22
  ViewEnemyEntity_o *v14; // x24
  QuestInformationListViewItem_o *v15; // x0
  Il2CppObject *v16; // x23
  int32_t v17; // w1
  ViewEnemyEntity_o *v18; // x2
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v28; // x8
  const MethodInfo *v29; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  v8 = this;
  if ( (byte_4B12CD3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId, enemies);
    this = (BoardOptionEventTargetComponent_o *)sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v9, v10);
    byte_4B12CD3 = 1;
  }
  if ( v8->fields.loading && v8->fields.dispQuestId == questId )
  {
    v8->fields.loading = 0;
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
LABEL_28:
            sub_1BCAA44(this, *(_QWORD *)&questId);
          if ( enemies->m_Items[v12 + 1] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v12 >= veEnts->max_length )
            goto LABEL_28;
          v14 = veEnts->m_Items[v12];
          if ( v14 )
          {
            v15 = (QuestInformationListViewItem_o *)sub_1BCAA2C(
                                                      QuestInformationListViewItem_TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      enemies,
                                                      veEnts);
            v16 = (Il2CppObject *)v15;
            v17 = v13;
            v18 = v14;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v12 >= (int)v11 )
            goto LABEL_22;
        }
        v15 = (QuestInformationListViewItem_o *)sub_1BCAA2C(
                                                  QuestInformationListViewItem_TypeInfo,
                                                  *(_QWORD *)&questId,
                                                  enemies,
                                                  veEnts);
        v16 = (Il2CppObject *)v15;
        v17 = v13;
        v18 = 0LL;
LABEL_15:
        QuestInformationListViewItem___ctor_34662932(v15, v17, v18, 0, 0LL);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (v25 = *(_QWORD *)&this->fields.m_CachedPtr,
              v26 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v25) )
        {
LABEL_27:
          sub_1BCAA3C(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v16,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = v25 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v28 + 32) = v16;
          sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)v16, v19, v20, v21, v22, v23, v24);
        }
        LODWORD(v11) = enemies->max_length;
        ++v13;
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
        BoardOptionEventTargetComponent__CreateEnemyList(v8, dispQuestId, dispEnemies, v29);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent__DestroyList(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_loadedAssets; // x19
  System_String_array *v5; // x20
  struct System_String_array *loadedAssets; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B12CD5 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B12CD5 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (PartyOrganizationUtility_o *)&this->fields.loadedAssets;
    v5 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      AssetManager__releaseAssetStorage_38514680(v5, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_1BCA784(p_loadedAssets, 0LL, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4B12CD2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&useNum, method);
    byte_4B12CD2 = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&useNum);
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
      sub_1BCAA3C(gameObject, v7);
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
          sub_1BCAA44(gameObject, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *missionTargetLabel; // x21
  BoardOptionEventTargetListViewItemDraw_o *gameObject; // x0
  QuestInformationListViewItem_o *v13; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v16; // x9
  struct BoardOptionEventTargetListViewItemDraw_array *v17; // x8
  int v18; // w21
  unsigned int v19; // w23
  __int64 v20; // x9
  __int64 methodPtr_low; // x10
  struct BoardOptionEventTargetListViewItemDraw_array *v22; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x8

  if ( (byte_4B12CD4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&offset, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v9, v10);
    byte_4B12CD4 = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&offset);
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
    v16 = this->fields.itemList;
    this->fields.nowOffset = offset;
    if ( !v16 )
      goto LABEL_32;
    v17 = this->fields.eventTargetItemDrawList;
    if ( !v17 )
      goto LABEL_32;
    v18 = 0;
    v19 = (v16->fields._size - offset) & ~((v16->fields._size - offset) >> 31);
    while ( 1 )
    {
      v20 = *(_QWORD *)&v17->max_length;
      if ( v18 >= (int)v20 )
        break;
      if ( v18 >= (unsigned int)v20 )
        goto LABEL_38;
      gameObject = v17->m_Items[v18];
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)gameObject,
                                                                 0LL);
      if ( !gameObject )
        goto LABEL_32;
      if ( v18 >= v19 )
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
                                                                   offset + v18,
                                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( gameObject
          && (methodPtr_low = LOBYTE(QuestInformationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(gameObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          v13 = (QuestInformationListViewItem_c *)gameObject->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestInformationListViewItem_TypeInfo
              ? (QuestInformationListViewItem_o *)gameObject
              : 0LL;
        }
        else
        {
          v13 = 0LL;
        }
        v22 = this->fields.eventTargetItemDrawList;
        if ( !v22 )
          goto LABEL_32;
        if ( v18 >= v22->max_length )
LABEL_38:
          sub_1BCAA44(gameObject, v13);
        gameObject = v22->m_Items[v18];
        if ( !gameObject )
          goto LABEL_32;
        BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, v13, 2, 0LL);
      }
      v17 = this->fields.eventTargetItemDrawList;
      ++v18;
      if ( !v17 )
        goto LABEL_32;
    }
    v23 = this->fields.itemList;
    if ( !v23 )
LABEL_32:
      sub_1BCAA3C(gameObject, v13);
    if ( v23->fields._size <= (int)v20 )
      BoardOptionEventTargetComponent__SetAlpha(this, 1.0, (const MethodInfo *)v13);
  }
}


bool __fastcall BoardOptionEventTargetComponent__IsNeedAnim(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BoardOptionEventTargetComponent_o *v3; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9

  v3 = this;
  if ( (byte_4B12CD8 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method,
                                                  v2);
    byte_4B12CD8 = 1;
  }
  itemList = v3->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_1BCAA3C(this, method);
  return itemList->fields._size > (signed int)eventTargetItemDrawList->max_length;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  PartyOrganizationUtility_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  __int64 v16; // x1
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v18; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  __int64 v20; // x1
  Il2CppObject *object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BoardOptionEventTargetComponent_c *v28; // x0
  UnityEngine_Shader_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  UnityEngine_Material_o *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1

  if ( (byte_4B12CD7 & 1) == 0 )
  {
    sub_1BCA7E0(&BoardOptionEventTargetComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v8, v9);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v12, v13);
    byte_4B12CD7 = 1;
  }
  p_mChocoMaterialSp = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v18 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BCA784(p_mChocoTex, (int64_t)object, v22, v23, v24, v25, v26, v27);
    }
    v28 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo, v20);
      v28 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v29 = UnityEngine_Shader__Find(v28->static_fields->CHOCO_SHADER_SP, 0LL);
    v33 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v30, v31, v32);
    UnityEngine_Material___ctor(v33, v29, 0LL);
    p_mChocoMaterialSp->klass = (PartyOrganizationUtility_c *)v33;
    sub_1BCA784(p_mChocoMaterialSp, (int64_t)v33, v34, v35, v36, v37, v38, v39);
    if ( !p_mChocoMaterialSp->klass )
      sub_1BCAA3C(0LL, v40);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  PartyOrganizationUtility_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  __int64 v16; // x1
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v18; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  __int64 v20; // x1
  Il2CppObject *object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BoardOptionEventTargetComponent_c *v28; // x0
  UnityEngine_Shader_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  UnityEngine_Material_o *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1

  if ( (byte_4B12CD6 & 1) == 0 )
  {
    sub_1BCA7E0(&BoardOptionEventTargetComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v8, v9);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v12, v13);
    byte_4B12CD6 = 1;
  }
  p_mChocoMaterialTx = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v18 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BCA784(p_mChocoTex, (int64_t)object, v22, v23, v24, v25, v26, v27);
    }
    v28 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo, v20);
      v28 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v29 = UnityEngine_Shader__Find(v28->static_fields->CHOCO_SHADER_TX, 0LL);
    v33 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v30, v31, v32);
    UnityEngine_Material___ctor(v33, v29, 0LL);
    p_mChocoMaterialTx->klass = (PartyOrganizationUtility_c *)v33;
    sub_1BCA784(p_mChocoMaterialTx, (int64_t)v33, v34, v35, v36, v37, v38, v39);
    if ( !p_mChocoMaterialTx->klass )
      sub_1BCAA3C(0LL, v40);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
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
    sub_1BCAA3C(this, method);
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCAA44(this, method);
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
  if ( (byte_4B12CD9 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method,
                                                  v2);
    byte_4B12CD9 = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12CE6 & 1) == 0 )
  {
    sub_1BCA7E0(&BoardOptionEventTargetComponent___c_TypeInfo, v1, v2);
    byte_4B12CE6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BoardOptionEventTargetComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  __int64 v3; // x3
  BoardOptionEventTargetComponent___c__DisplayClass8_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct BoardOptionEventTargetComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__2; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v4 = this;
  if ( (byte_4B12CE7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_1BCA7E0(
                                                                       &Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
                                                                       v7,
                                                                       v8);
    byte_4B12CE7 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__2, (int64_t)_9__2, v12, v13, v14, v15, v16, v17);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetManager__loadAssetStorage_38512336(loadedAssets, _9__2, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  BoardOptionEventTargetComponent__CreateEnemyList_34141980(
    _4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    0LL);
}