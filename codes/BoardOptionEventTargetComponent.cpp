void BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct BoardOptionEventTargetComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct BoardOptionEventTargetComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct BoardOptionEventTargetComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CC3C33 & 1) == 0 )
  {
    sub_1C713B0(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_15138/*"Unlit/Transparent Colored_ColorShadow"*/);
    sub_1C713B0(&StringLiteral_4935/*"Custom/SpriteWithMask_ColorShadow"*/);
    sub_1C713B0(&StringLiteral_15137/*"Unlit/Transparent Colored_Choco"*/);
    sub_1C713B0(&StringLiteral_4934/*"Custom/SpriteWithMask_Choco"*/);
    byte_4CC3C33 = 1;
  }
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15137/*"Unlit/Transparent Colored_Choco"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    StringLiteral_15137/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_4934/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4934/*"Custom/SpriteWithMask_Choco"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->CHOCO_SHADER_SP, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_15138/*"Unlit/Transparent Colored_ColorShadow"*/;
  v16 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v16->ColorShadowShaderTexture = (struct System_String_o *)StringLiteral_15138/*"Unlit/Transparent Colored_ColorShadow"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->ColorShadowShaderTexture, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_4935/*"Custom/SpriteWithMask_ColorShadow"*/;
  v24 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v24->ColorShadowShaderSprite = (struct System_String_o *)StringLiteral_4935/*"Custom/SpriteWithMask_ColorShadow"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v24->ColorShadowShaderSprite, v23, v25, v26, v27, v28, v29, v30);
}


void BoardOptionEventTargetComponent___ctor(BoardOptionEventTargetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoardOptionEventTargetComponent__CreateEnemyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
  __int64 v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *enemyIds; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Int32_array *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject *Master_object; // x23
  Il2CppObject *v37; // x24
  unsigned int **v38; // x25
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  Il2CppObject *v45; // x26
  const MethodInfo *v46; // x2
  __int64 v47; // x8
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  __int64 v60; // x8
  __int64 v61; // x29
  __int64 v62; // x28
  unsigned __int64 v63; // x21
  unsigned int *v64; // x8
  __int64 v65; // x8
  __int64 v66; // x8
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  ViewEnemyEntity_o *v73; // x26
  System_String_o *v74; // x0
  Il2CppObject *v75; // x26
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
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
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  int32_t v99; // w1
  struct System_String_array *v100; // x0
  struct System_String_array **p_loadedAssets; // x19
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  System_Action_o *v108; // x19
  __int64 v109; // x0
  System_Collections_Generic_List_object__o *v111; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v114; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v115; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CC3C28 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
    sub_1C713B0(&System_Func_ViewEnemyEntity__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__);
    sub_1C713B0(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__);
    sub_1C713B0(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
    sub_1C713B0(&BoardOptionEventTargetComponent___c_TypeInfo);
    sub_1C713B0(&ViewEnemyEntity___TypeInfo);
    sub_1C713B0(&ViewEnemyEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_12767/*"Servants/Commands/"*/);
    byte_4CC3C28 = 1;
  }
  v114 = 0;
  v115 = 0;
  entity = 0;
  missionTargetState = 0;
  v6 = sub_1C715FC(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_57;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 32) = enemies;
  v15 = (__int64 *)(v6 + 32);
  *(_DWORD *)(v6 + 24) = questId;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)enemies, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v22;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  this->fields.dispQuestId = *(_DWORD *)(v6 + 24);
  v29 = *(struct System_Int32_array **)(v6 + 32);
  this->fields.dispEnemies = v29;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.dispEnemies, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v37 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  v111 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v111,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v6 + 40) = 0;
  v38 = (unsigned int **)(v6 + 40);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 40), 0, v39, v40, v41, v42, v43, v44);
  v45 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
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
    0);
  v47 = *(_QWORD *)(v6 + 32);
  if ( v47 )
  {
    v48 = sub_1C71458(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v47 + 24));
    *v38 = (unsigned int *)v48;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 40), v48, v49, v50, v51, v52, v53, v54);
    v60 = *v15;
    if ( !*v15 )
      goto LABEL_57;
    v61 = 8;
    v62 = 8;
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
      *(_QWORD *)&v64[v62] = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v64[v62], 0, (int32_t)v46, v55, v56, v57, v58, v59);
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
                                                                          0);
        if ( ((unsigned __int8)enemyIds & 1) != 0 )
        {
          enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v114;
          if ( !v114 )
            goto LABEL_57;
          ViewEnemyEntity__IsMissionTarget(v114, v114->fields.questId, &missionTargetState, 0);
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
                                                                              (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
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
                                                                              (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)enemyIds & 1) != 0 )
            {
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v115;
              if ( !v115 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__get_IsOrganization(
                                                                                (ServantEntity_o *)v115,
                                                                                0);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
                goto LABEL_41;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v114;
              if ( !v114 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyEntity__IsIconIdUnique(v114, 0);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
              {
                if ( !v114 )
                  goto LABEL_57;
                v74 = System_Int32__ToString((int)v114 + 36, 0);
                v75 = (Il2CppObject *)System_String__Concat_64031724((System_String_o *)StringLiteral_12767/*"Servants/Commands/"*/, v74, 0);
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v111;
                if ( !v111 )
                  goto LABEL_57;
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___Contains(
                                                                                  v111,
                                                                                  v75,
                                                                                  (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( ((unsigned __int8)enemyIds & 1) == 0 )
                {
                  items = v111->fields._items;
                  v83 = Method_System_Collections_Generic_List_string__Add__;
                  ++v111->fields._version;
                  if ( !items )
                    goto LABEL_57;
                  size = v111->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v111,
                      v75,
                      *(const MethodInfo_3810718 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v85 = &items->obj.klass + size;
                    v111->fields._size = size + 1;
                    v85[4] = (Il2CppClass *)v75;
                    sub_1C71354((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v75, v76, v77, v78, v79, v80, v81);
                  }
                }
                v86 = v114;
                v73 = (ViewEnemyEntity_o *)sub_1C715FC(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_43548080(v73, v86, 0);
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
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C714EC(
                                                                                  v73,
                                                                                  *(_QWORD *)(*(_QWORD *)v87 + 64LL));
                if ( !enemyIds )
                {
                  v109 = sub_1C7162C();
                  sub_1C714D8(v109, 0);
                }
              }
              if ( v63 >= v87[6] )
LABEL_71:
                sub_1C71610(enemyIds);
              *(_QWORD *)&v87[v62] = v73;
              sub_1C71354((GrandQuestFolderBoardItem_o *)&v87[v62], (int32_t)v73, v67, v68, v69, v70, v71, v72);
            }
          }
        }
      }
      v60 = *v15;
      ++v61;
      v62 += 2;
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
      _9__8_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__8_0,
        v91,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0);
      static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0,
        (int32_t)_9__8_0,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98);
    }
    v99 = System_Linq_Enumerable__Count_object__51826244(
            v88,
            (System_Func_TSource__bool__o *)_9__8_0,
            (const MethodInfo_316CE44 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v99 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v99, v46);
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v111;
  if ( !v111 )
LABEL_57:
    sub_1C71608(enemyIds, v8);
  v100 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v111,
                                         (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v100;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_loadedAssets, (int32_t)v100, v102, v103, v104, v105, v106, v107);
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v108 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v108,
    (Il2CppObject *)v6,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v108, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionEventTargetComponent__CreateEnemyList_36197732(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v8; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w22
  ViewEnemyEntity_o *v12; // x24
  QuestInformationListViewItem_o *v13; // x0
  Il2CppObject *v14; // x23
  int32_t v15; // w1
  ViewEnemyEntity_o *v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  const MethodInfo *v27; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  v8 = this;
  if ( (byte_4CC3C2A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoardOptionEventTargetComponent_o *)sub_1C713B0(&QuestInformationListViewItem_TypeInfo);
    byte_4CC3C2A = 1;
  }
  if ( v8->fields.loading && v8->fields.dispQuestId == questId )
  {
    v8->fields.loading = 0;
    if ( enemies )
    {
      max_length = enemies->max_length;
      if ( (int)max_length >= 1 )
      {
        v10 = 0;
        v11 = 0;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)max_length )
LABEL_28:
            sub_1C71610(this);
          if ( enemies->m_Items[v10] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v10 >= LODWORD(veEnts->max_length) )
            goto LABEL_28;
          v12 = veEnts->m_Items[v10];
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_1C715FC(QuestInformationListViewItem_TypeInfo);
            v14 = (Il2CppObject *)v13;
            v15 = v11;
            v16 = v12;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v10 >= (int)max_length )
            goto LABEL_22;
        }
        v13 = (QuestInformationListViewItem_o *)sub_1C715FC(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v13;
        v15 = v11;
        v16 = 0;
LABEL_15:
        QuestInformationListViewItem___ctor_36807260(v13, v15, v16, 0, 0);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (m_CachedPtr = this->fields.m_CachedPtr,
              v24 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !m_CachedPtr) )
        {
LABEL_27:
          sub_1C71608(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v14,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v26 + 32) = v14;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 32), (int32_t)v14, v17, v18, v19, v20, v21, v22);
        }
        LODWORD(max_length) = enemies->max_length;
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


void BoardOptionEventTargetComponent__DestroyList(BoardOptionEventTargetComponent_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC3C2C & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC3C2C = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (GrandQuestFolderBoardItem_o *)&this->fields.loadedAssets;
    v4 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_40817232(v4, 0);
      p_loadedAssets->klass = 0;
      sub_1C71354(p_loadedAssets, 0, v6, v7, v8, v9, v10, v11);
    }
  }
}


void BoardOptionEventTargetComponent__DispEmptyList(
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
  const MethodInfo *v13; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v14; // x8

  if ( (byte_4CC3C29 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3C29 = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      goto LABEL_26;
    if ( !eventTargetItemDrawList->max_length )
      return;
    gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.missionTargetLabel;
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, useNum > 0, 0),
          (v9 = this->fields.eventTargetItemDrawList) == 0) )
    {
LABEL_26:
      sub_1C71608(gameObject, v7);
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
          sub_1C71610(gameObject);
        v12 = (int)v11;
        gameObject = v9->m_Items[v11];
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
        if ( !gameObject )
          goto LABEL_26;
        if ( (int)v12 >= useNum )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v14 = this->fields.eventTargetItemDrawList;
          if ( !v14 )
            goto LABEL_26;
          if ( (unsigned int)v12 >= LODWORD(v14->max_length) )
            goto LABEL_27;
          gameObject = v14->m_Items[v12];
          if ( !gameObject )
            goto LABEL_26;
          BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, 0, 0, v13);
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


void BoardOptionEventTargetComponent__DispList(
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
  il2cpp_array_size_t max_length; // x9
  const MethodInfo *v15; // x3
  __int64 naturalAligment; // x10
  struct BoardOptionEventTargetListViewItemDraw_array *v17; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x8

  if ( (byte_4CC3C2B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&QuestInformationListViewItem_TypeInfo);
    byte_4CC3C2B = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      goto LABEL_32;
    if ( !eventTargetItemDrawList->max_length )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_32;
    gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.missionTargetLabel;
    if ( !gameObject )
      goto LABEL_32;
    if ( itemList->fields._size <= 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
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
      max_length = v11->max_length;
      if ( v12 >= (int)max_length )
        break;
      if ( v12 >= (unsigned int)max_length )
        goto LABEL_38;
      gameObject = v11->m_Items[v12];
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)gameObject,
                                                                 0);
      if ( !gameObject )
        goto LABEL_32;
      if ( v12 >= v13 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.itemList;
        if ( !gameObject )
          goto LABEL_32;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)gameObject,
                                                                   offset + v12,
                                                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( gameObject
          && (naturalAligment = QuestInformationListViewItem_TypeInfo->_2.naturalAligment,
              gameObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          v7 = (QuestInformationListViewItem_c *)gameObject->klass->_2.typeHierarchy[naturalAligment - 1] == QuestInformationListViewItem_TypeInfo
             ? (QuestInformationListViewItem_o *)gameObject
             : 0LL;
        }
        else
        {
          v7 = 0;
        }
        v17 = this->fields.eventTargetItemDrawList;
        if ( !v17 )
          goto LABEL_32;
        if ( (unsigned int)v12 >= LODWORD(v17->max_length) )
LABEL_38:
          sub_1C71610(gameObject);
        gameObject = v17->m_Items[v12];
        if ( !gameObject )
          goto LABEL_32;
        BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, v7, 2, v15);
      }
      v11 = this->fields.eventTargetItemDrawList;
      ++v12;
      if ( !v11 )
        goto LABEL_32;
    }
    v18 = this->fields.itemList;
    if ( !v18 )
LABEL_32:
      sub_1C71608(gameObject, v7);
    if ( v18->fields._size <= (int)max_length )
      BoardOptionEventTargetComponent__SetAlpha(this, 1.0, (const MethodInfo *)v7);
  }
}


bool BoardOptionEventTargetComponent__IsNeedAnim(BoardOptionEventTargetComponent_o *this, const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9

  v2 = this;
  if ( (byte_4CC3C31 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4CC3C31 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_1C71608(this, method);
  return itemList->fields._size > SLODWORD(eventTargetItemDrawList->max_length);
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  GrandQuestFolderBoardItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  BoardOptionEventTargetComponent_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x1

  if ( (byte_4CC3C2E & 1) == 0 )
  {
    sub_1C713B0(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C713B0(&StringLiteral_16154/*"_ChocoTex"*/);
    sub_1C713B0(&StringLiteral_12847/*"Shaders/ChocoMap"*/);
    byte_4CC3C2E = 1;
  }
  p_mChocoMaterialSp = (GrandQuestFolderBoardItem_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (GrandQuestFolderBoardItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12847/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_31E7F68 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (GrandQuestFolderBoardItem_c *)object;
      sub_1C71354(p_mChocoTex, (int32_t)object, v9, v10, v11, v12, v13, v14);
    }
    v15 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v15 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_SP, 0);
    v17 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v17, v16, 0);
    p_mChocoMaterialSp->klass = (GrandQuestFolderBoardItem_c *)v17;
    sub_1C71354(p_mChocoMaterialSp, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    if ( !p_mChocoMaterialSp->klass )
      sub_1C71608(0, v24);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16154/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  GrandQuestFolderBoardItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  BoardOptionEventTargetComponent_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x1

  if ( (byte_4CC3C2D & 1) == 0 )
  {
    sub_1C713B0(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C713B0(&StringLiteral_16154/*"_ChocoTex"*/);
    sub_1C713B0(&StringLiteral_12847/*"Shaders/ChocoMap"*/);
    byte_4CC3C2D = 1;
  }
  p_mChocoMaterialTx = (GrandQuestFolderBoardItem_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (GrandQuestFolderBoardItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12847/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_31E7F68 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (GrandQuestFolderBoardItem_c *)object;
      sub_1C71354(p_mChocoTex, (int32_t)object, v9, v10, v11, v12, v13, v14);
    }
    v15 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v15 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_TX, 0);
    v17 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v17, v16, 0);
    p_mChocoMaterialTx->klass = (GrandQuestFolderBoardItem_c *)v17;
    sub_1C71354(p_mChocoMaterialTx, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    if ( !p_mChocoMaterialTx->klass )
      sub_1C71608(0, v24);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16154/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewColorShadowMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_colorShadowMaterialSprite; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Material_o *colorShadowMaterialSprite; // t1
  BoardOptionEventTargetComponent_c *v6; // x0
  UnityEngine_Shader_o *v7; // x20
  UnityEngine_Material_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC3C30 & 1) == 0 )
  {
    sub_1C713B0(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3C30 = 1;
  }
  colorShadowMaterialSprite = this->fields.colorShadowMaterialSprite;
  p_colorShadowMaterialSprite = (GrandQuestFolderBoardItem_o *)&this->fields.colorShadowMaterialSprite;
  v4 = (UnityEngine_Object_o *)colorShadowMaterialSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    v6 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v6 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v7 = UnityEngine_Shader__Find(v6->static_fields->ColorShadowShaderSprite, 0);
    v8 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0);
    p_colorShadowMaterialSprite->klass = (GrandQuestFolderBoardItem_c *)v8;
    sub_1C71354(p_colorShadowMaterialSprite, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return (UnityEngine_Material_o *)p_colorShadowMaterialSprite->klass;
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewColorShadowMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_colorShadowMaterialTexture; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Material_o *colorShadowMaterialTexture; // t1
  BoardOptionEventTargetComponent_c *v6; // x0
  UnityEngine_Shader_o *v7; // x20
  UnityEngine_Material_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC3C2F & 1) == 0 )
  {
    sub_1C713B0(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3C2F = 1;
  }
  colorShadowMaterialTexture = this->fields.colorShadowMaterialTexture;
  p_colorShadowMaterialTexture = (GrandQuestFolderBoardItem_o *)&this->fields.colorShadowMaterialTexture;
  v4 = (UnityEngine_Object_o *)colorShadowMaterialTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    v6 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v6 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v7 = UnityEngine_Shader__Find(v6->static_fields->ColorShadowShaderTexture, 0);
    v8 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0);
    p_colorShadowMaterialTexture->klass = (GrandQuestFolderBoardItem_c *)v8;
    sub_1C71354(p_colorShadowMaterialTexture, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return (UnityEngine_Material_o *)p_colorShadowMaterialTexture->klass;
}


void BoardOptionEventTargetComponent__ReCreateEnemyList(
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


// local variable allocation has failed, the output may be wrong!
void BoardOptionEventTargetComponent__SetAlpha(
        BoardOptionEventTargetComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  BoardOptionEventTargetComponent_o *v4; // x19
  long double v5; // q8
  __int64 v6; // x20
  int max_length; // w9
  BoardOptionEventTargetListViewItemDraw_o *v8; // x8

  eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
LABEL_8:
    sub_1C71608(this, method);
  v4 = this;
  v5 = *(long double *)&alpha;
  v6 = 0;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C71610(this);
    v8 = eventTargetItemDrawList->m_Items[v6];
    if ( v8 )
    {
      this = (BoardOptionEventTargetComponent_o *)v8->fields.iconBaseSprite;
      if ( this )
      {
        this = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(BoardOptionEventTargetComponent_o *, Il2CppClass *, long double))this->klass[1]._1.element_class)(
                                                      this,
                                                      this->klass[1]._1.castClass,
                                                      v5);
        eventTargetItemDrawList = v4->fields.eventTargetItemDrawList;
        ++v6;
        if ( eventTargetItemDrawList )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void BoardOptionEventTargetComponent__SetNextTarget(BoardOptionEventTargetComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BoardOptionEventTargetComponent_o *v3; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9
  int32_t size; // w8
  int max_length; // w9
  int32_t v8; // w9
  int32_t v9; // w1

  v3 = this;
  if ( (byte_4CC3C32 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4CC3C32 = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_1C71608(this, method);
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


void BoardOptionEventTargetComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC3C34 & 1) == 0 )
  {
    sub_1C713B0(&BoardOptionEventTargetComponent___c_TypeInfo);
    byte_4CC3C34 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BoardOptionEventTargetComponent___c___ctor(BoardOptionEventTargetComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BoardOptionEventTargetComponent___c___CreateEnemyList_b__8_0(
        BoardOptionEventTargetComponent___c_o *this,
        ViewEnemyEntity_o *n,
        const MethodInfo *method)
{
  return n != 0;
}


void BoardOptionEventTargetComponent___c__DisplayClass8_0___ctor(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__1(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent___c__DisplayClass8_0_o *v2; // x19
  struct BoardOptionEventTargetComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__2; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v2 = this;
  if ( (byte_4CC3C35 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AssetManager_TypeInfo);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_1C713B0(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__);
    byte_4CC3C35 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40814884(loadedAssets, _9__2, 1, 0);
}


void BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1C71608(this, method);
  BoardOptionEventTargetComponent__CreateEnemyList_36197732(
    this->fields.__4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}