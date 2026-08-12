void BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct BoardOptionEventTargetComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct BoardOptionEventTargetComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct BoardOptionEventTargetComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596CE4B & 1) == 0 )
  {
    sub_2213A60(&BoardOptionEventTargetComponent_TypeInfo);
    sub_2213A60(&StringLiteral_15736/*"Unlit/Transparent Colored_ColorShadow"*/);
    sub_2213A60(&StringLiteral_5130/*"Custom/SpriteWithMask_ColorShadow"*/);
    sub_2213A60(&StringLiteral_15735/*"Unlit/Transparent Colored_Choco"*/);
    sub_2213A60(&StringLiteral_5129/*"Custom/SpriteWithMask_Choco"*/);
    byte_596CE4B = 1;
  }
  v7 = StringLiteral_15735/*"Unlit/Transparent Colored_Choco"*/;
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15735/*"Unlit/Transparent Colored_Choco"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5129/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5129/*"Custom/SpriteWithMask_Choco"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->CHOCO_SHADER_SP, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_15736/*"Unlit/Transparent Colored_ColorShadow"*/;
  v17 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v17->ColorShadowShaderTexture = (struct System_String_o *)StringLiteral_15736/*"Unlit/Transparent Colored_ColorShadow"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->ColorShadowShaderTexture, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_5130/*"Custom/SpriteWithMask_ColorShadow"*/;
  v25 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v25->ColorShadowShaderSprite = (struct System_String_o *)StringLiteral_5130/*"Custom/SpriteWithMask_ColorShadow"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->ColorShadowShaderSprite, v24, v26, v27, v28, v29, v30, v31);
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
  __int64 v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *enemyIds; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Int32_array *v30; // x1
  int32_t v31; // w8
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  __int64 v39; // x2
  Il2CppObject *Master_object; // x23
  Il2CppObject *v41; // x24
  unsigned int **v42; // x25
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x2
  Il2CppObject *v50; // x26
  System_String_o *v51; // x2
  __int64 v52; // x8
  __int64 v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  __int64 v65; // x8
  __int64 v66; // x29
  __int64 v67; // x28
  unsigned __int64 v68; // x21
  unsigned int *v69; // x8
  __int64 v70; // x8
  __int64 v71; // x8
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  ViewEnemyEntity_o *v78; // x26
  System_String_o *v79; // x0
  Il2CppObject *v80; // x26
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  Il2CppClass **v90; // x0
  ViewEnemyEntity_o *v91; // x27
  unsigned int *v92; // x27
  __int64 v93; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x22
  BoardOptionEventTargetComponent___c_c *v95; // x0
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__8_0; // x23
  Il2CppObject *v98; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *v99; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  int32_t v106; // w1
  struct System_String_array *v107; // x0
  struct System_String_array **p_loadedAssets; // x19
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  System_Action_c *v115; // x0
  System_Action_o *v116; // x19
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x0
  System_Collections_Generic_List_object__o *v120; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v123; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v124; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_596CE40 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
    sub_2213A60(&System_Func_ViewEnemyEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__);
    sub_2213A60(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__);
    sub_2213A60(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
    sub_2213A60(&BoardOptionEventTargetComponent___c_TypeInfo);
    sub_2213A60(&ViewEnemyEntity___TypeInfo);
    sub_2213A60(&ViewEnemyEntity_TypeInfo);
    sub_2213A60(&StringLiteral_13297/*"Servants/Commands/"*/);
    byte_596CE40 = 1;
  }
  v123 = 0;
  v124 = 0;
  entity = 0;
  missionTargetState = 0;
  v7 = sub_2213CCC(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_57;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = enemies;
  v16 = (__int64 *)(v7 + 32);
  *(_DWORD *)(v7 + 24) = questId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)enemies, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemList, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = *(struct System_Int32_array **)(v7 + 32);
  v31 = *(_DWORD *)(v7 + 24);
  this->fields.dispEnemies = v30;
  this->fields.dispQuestId = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dispEnemies, (int32_t)v30, v32, v33, v34, v35, v36, v37);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38, v39);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v41 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v120 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v120,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v7 + 40) = 0;
  v42 = (unsigned int **)(v7 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), 0, v43, v44, v45, v46, v47, v48);
  v50 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v49);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v49);
    enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  }
  if ( !v50 )
    goto LABEL_57;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v50,
    &entity,
    *((_QWORD *)enemyIds[11].monitor + 8),
    *(_DWORD *)(v7 + 24),
    0);
  v52 = *(_QWORD *)(v7 + 32);
  if ( v52 )
  {
    v53 = sub_2213B20(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v52 + 24));
    *v42 = (unsigned int *)v53;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), v53, v54, v55, v56, v57, v58, v59);
    v65 = *v16;
    if ( !*v16 )
      goto LABEL_57;
    v66 = 8;
    v67 = 8;
    while ( 1 )
    {
      v68 = v66 - 8;
      if ( v66 - 8 >= *(int *)(v65 + 24) )
        break;
      v69 = *v42;
      if ( !*v42 )
        goto LABEL_57;
      if ( v68 >= v69[6] )
        goto LABEL_71;
      *(_QWORD *)&v69[v67] = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v69[v67], 0, v51, v60, v61, v62, v63, v64);
      v70 = *v16;
      if ( !*v16 )
        goto LABEL_57;
      if ( v68 >= *(unsigned int *)(v70 + 24) )
        goto LABEL_71;
      v60 = (System_String_o *)*(unsigned int *)(v70 + 4 * v66);
      if ( (int)v60 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_57;
        enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyMaster__TryGetEntity(
                                                                          (ViewEnemyMaster_o *)Master_object,
                                                                          &v123,
                                                                          *(_DWORD *)(v7 + 24),
                                                                          (int32_t)v60,
                                                                          0);
        if ( ((unsigned __int8)enemyIds & 1) != 0 )
        {
          enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v123;
          if ( !v123 )
            goto LABEL_57;
          ViewEnemyEntity__IsMissionTarget(v123, v123->fields.questId, &missionTargetState, 0);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_31;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.enemyIds;
            if ( !enemyIds || !enemyIds[1].monitor )
              goto LABEL_31;
            if ( !v123 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Contains_int_(
                                                                              enemyIds,
                                                                              v123->fields.enemyId,
                                                                              (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( ((unsigned __int8)enemyIds & 1) == 0 )
            {
LABEL_31:
              v71 = *v16;
              if ( !*v16 )
                goto LABEL_57;
              if ( v68 >= *(unsigned int *)(v71 + 24) )
                goto LABEL_71;
              *(_DWORD *)(v71 + 4 * v66) = 0;
            }
            if ( !v123 || !v41 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
                                                                              &v124,
                                                                              v123->fields.svtId,
                                                                              (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)enemyIds & 1) != 0 )
            {
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v124;
              if ( !v124 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__get_IsOrganization(
                                                                                (ServantEntity_o *)v124,
                                                                                0);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
                goto LABEL_41;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v123;
              if ( !v123 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyEntity__IsIconIdUnique(v123, 0);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
              {
                if ( !v123 )
                  goto LABEL_57;
                v79 = System_Int32__ToString((int)v123 + 36, 0);
                v80 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_13297/*"Servants/Commands/"*/, v79, 0);
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v120;
                if ( !v120 )
                  goto LABEL_57;
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___Contains(
                                                                                  v120,
                                                                                  v80,
                                                                                  (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( ((unsigned __int8)enemyIds & 1) == 0 )
                {
                  items = v120->fields._items;
                  v88 = Method_System_Collections_Generic_List_string__Add__;
                  ++v120->fields._version;
                  if ( !items )
                    goto LABEL_57;
                  size = v120->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v120,
                      v80,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v90 = &items->obj.klass + size;
                    v120->fields._size = size + 1;
                    v90[4] = (Il2CppClass *)v80;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v90 + 4),
                      (int32_t)v80,
                      v81,
                      v82,
                      v83,
                      v84,
                      v85,
                      v86);
                  }
                }
                v91 = v123;
                v78 = (ViewEnemyEntity_o *)sub_2213CCC(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_50272536(v78, v91, 0);
                v123 = v78;
                if ( !v78 )
                  goto LABEL_57;
                v78->fields.iconId = 0;
              }
              else
              {
LABEL_41:
                v78 = v123;
              }
              v92 = *v42;
              if ( !*v42 )
                goto LABEL_57;
              if ( v78 )
              {
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213BB4(
                                                                                  v78,
                                                                                  *(_QWORD *)(*(_QWORD *)v92 + 64LL));
                if ( !enemyIds )
                {
                  v119 = sub_2213D00(0, v93);
                  sub_2213BA0(v119, 0);
                }
              }
              if ( v68 >= v92[6] )
LABEL_71:
                sub_2213CE4(enemyIds);
              *(_QWORD *)&v92[v67] = v78;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v92[v67], (int32_t)v78, v72, v73, v74, v75, v76, v77);
            }
          }
        }
      }
      v65 = *v16;
      ++v66;
      v67 += 2;
      if ( !*v16 )
        goto LABEL_57;
    }
  }
  v94 = (System_Collections_Generic_IEnumerable_TSource__o *)*v42;
  if ( *v42 )
  {
    v95 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( !*(&BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo, v9, v51);
      v95 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    static_fields = v95->static_fields;
    _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !*(&v95->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v95, v9, v51);
        static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      }
      v98 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__8_0,
        v98,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0);
      v99 = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      v99->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v99->__9__8_0,
        (int32_t)_9__8_0,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
    }
    v106 = System_Linq_Enumerable__Count_object__59223900(
             v94,
             (System_Func_TSource__bool__o *)_9__8_0,
             (const MethodInfo_387AF5C *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v106 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v106, (const MethodInfo *)v51);
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v120;
  if ( !v120 )
LABEL_57:
    sub_2213CDC(enemyIds, v9);
  v107 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v120,
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v107;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_loadedAssets, (int32_t)v107, v109, v110, v111, v112, v113, v114);
  v115 = System_Action_TypeInfo;
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v116 = (System_Action_o *)sub_2213CCC(v115);
  System_Action___ctor(
    v116,
    (Il2CppObject *)v7,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v117, v118);
  AtlasManager__LoadEnemyAtlas(v116, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionEventTargetComponent__CreateEnemyList_42696484(
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  const MethodInfo *v27; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  v8 = this;
  if ( (byte_596CE42 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoardOptionEventTargetComponent_o *)sub_2213A60(&QuestInformationListViewItem_TypeInfo);
    byte_596CE42 = 1;
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
            sub_2213CE4(this);
          if ( enemies->m_Items[v10] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v10 >= LODWORD(veEnts->max_length) )
            goto LABEL_28;
          v12 = veEnts->m_Items[v10];
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_2213CCC(QuestInformationListViewItem_TypeInfo);
            v14 = (Il2CppObject *)v13;
            v15 = v11;
            v16 = v12;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v10 >= (int)max_length )
            goto LABEL_22;
        }
        v13 = (QuestInformationListViewItem_o *)sub_2213CCC(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v13;
        v15 = v11;
        v16 = 0;
LABEL_15:
        QuestInformationListViewItem___ctor_43363196(v13, v15, v16, 0, 0);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (m_CachedPtr = this->fields.m_CachedPtr,
              v24 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !m_CachedPtr) )
        {
LABEL_27:
          sub_2213CDC(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v14,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v26 + 32) = v14;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)v14, v17, v18, v19, v20, v21, v22);
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
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_loadedAssets; // x19
  System_String_array *v5; // x20
  struct System_String_array *loadedAssets; // t1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596CE44 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596CE44 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssets;
    v5 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
      AssetManager__releaseAssetStorage_47506132(v5, 0);
      p_loadedAssets->klass = 0;
      sub_2213A04(p_loadedAssets, 0, v7, v8, v9, v10, v11, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionEventTargetComponent__DispEmptyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t useNum,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionTargetLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v9; // x8
  int32_t max_length; // w9
  __int64 v11; // x21
  signed __int64 v12; // x20
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v14; // x22
  const MethodInfo *v15; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v16; // x8

  if ( (byte_596CE41 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE41 = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&useNum, method);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      goto LABEL_27;
    if ( !eventTargetItemDrawList->max_length )
      return;
    gameObject = this->fields.missionTargetLabel;
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, useNum > 0, 0), (v9 = this->fields.eventTargetItemDrawList) == 0) )
    {
LABEL_27:
      sub_2213CDC(gameObject, v7);
    }
    max_length = v9->max_length;
    v11 = 4;
    if ( max_length >= useNum )
      max_length = useNum;
    v12 = max_length;
    while ( 1 )
    {
      max_length_low = LODWORD(v9->max_length);
      v14 = v11 - 4;
      if ( v11 - 4 >= (int)max_length_low )
        break;
      if ( (__int64)v14 >= v12 )
      {
        if ( v14 >= max_length_low )
LABEL_29:
          sub_2213CE4(gameObject);
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v9->obj.klass + v11);
        if ( !gameObject )
          goto LABEL_27;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      }
      else
      {
        if ( v14 >= max_length_low )
          goto LABEL_29;
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v9->obj.klass + v11);
        if ( !gameObject )
          goto LABEL_27;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_27;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        v16 = this->fields.eventTargetItemDrawList;
        if ( !v16 )
          goto LABEL_27;
        if ( v14 >= LODWORD(v16->max_length) )
          goto LABEL_29;
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->obj.klass + v11);
        if ( !gameObject )
          goto LABEL_27;
        BoardOptionEventTargetListViewItemDraw__SetItem(
          (BoardOptionEventTargetListViewItemDraw_o *)gameObject,
          0,
          0,
          v15);
      }
      v9 = this->fields.eventTargetItemDrawList;
      ++v11;
      if ( !v9 )
        goto LABEL_27;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  unsigned __int64 v12; // x21
  unsigned __int64 v13; // x23
  unsigned __int64 max_length_low; // x9
  const MethodInfo *v15; // x3
  __int64 naturalAligment; // x10
  struct BoardOptionEventTargetListViewItemDraw_array *v17; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x8

  if ( (byte_596CE43 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestInformationListViewItem_TypeInfo);
    byte_596CE43 = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&offset, method);
  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( eventTargetItemDrawList )
    {
      if ( !eventTargetItemDrawList->max_length )
        return;
      itemList = this->fields.itemList;
      if ( itemList )
      {
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.missionTargetLabel;
        if ( itemList->fields._size <= 0 )
        {
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
            return;
          }
        }
        else if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v10 = this->fields.itemList;
          this->fields.nowOffset = offset;
          if ( v10 )
          {
            v11 = this->fields.eventTargetItemDrawList;
            if ( v11 )
            {
              v12 = 0;
              v13 = (v10->fields._size - offset) & (unsigned int)~((v10->fields._size - offset) >> 31);
              while ( 1 )
              {
                max_length_low = LODWORD(v11->max_length);
                if ( (__int64)v12 >= (int)max_length_low )
                  break;
                if ( v12 >= v13 )
                {
                  if ( v12 >= max_length_low )
                    goto LABEL_42;
                  gameObject = v11->m_Items[v12];
                  if ( !gameObject )
                    goto LABEL_35;
                  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)gameObject,
                                                                             0);
                  if ( !gameObject )
                    goto LABEL_35;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                }
                else
                {
                  if ( v12 >= max_length_low )
                    goto LABEL_42;
                  gameObject = v11->m_Items[v12];
                  if ( !gameObject )
                    goto LABEL_35;
                  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)gameObject,
                                                                             0);
                  if ( !gameObject )
                    goto LABEL_35;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.itemList;
                  if ( !gameObject )
                    goto LABEL_35;
                  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                                             (System_Collections_Generic_List_object__o *)gameObject,
                                                                             offset + (int)v12,
                                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                    goto LABEL_35;
                  if ( v12 >= LODWORD(v17->max_length) )
LABEL_42:
                    sub_2213CE4(gameObject);
                  gameObject = v17->m_Items[v12];
                  if ( !gameObject )
                    goto LABEL_35;
                  BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, v7, 2, v15);
                }
                v11 = this->fields.eventTargetItemDrawList;
                ++v12;
                if ( !v11 )
                  goto LABEL_35;
              }
              v18 = this->fields.itemList;
              if ( v18 )
              {
                if ( v18->fields._size <= (int)max_length_low )
                  BoardOptionEventTargetComponent__SetAlpha(this, 1.0, (const MethodInfo *)v7);
                return;
              }
            }
          }
        }
      }
    }
LABEL_35:
    sub_2213CDC(gameObject, v7);
  }
}


bool BoardOptionEventTargetComponent__IsNeedAnim(BoardOptionEventTargetComponent_o *this, const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9

  v2 = this;
  if ( (byte_596CE49 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_596CE49 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_2213CDC(this, method);
  return itemList->fields._size > SLODWORD(eventTargetItemDrawList->max_length);
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  MissionNaviTransitionBoardItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v9; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *object; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  BoardOptionEventTargetComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  UnityEngine_Material_o *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1

  if ( (byte_596CE46 & 1) == 0 )
  {
    sub_2213A60(&BoardOptionEventTargetComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_2213A60(&StringLiteral_16795/*"_ChocoTex"*/);
    sub_2213A60(&StringLiteral_13377/*"Shaders/ChocoMap"*/);
    byte_596CE46 = 1;
  }
  p_mChocoMaterialSp = (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoTex;
    v9 = (UnityEngine_Object_o *)mChocoTex;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_13377/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (MissionNaviTransitionBoardItem_c *)object;
      sub_2213A04(p_mChocoTex, (int32_t)object, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !*(&BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo, v11, v12);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_SP, 0);
    v22 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0);
    p_mChocoMaterialSp->klass = (MissionNaviTransitionBoardItem_c *)v22;
    sub_2213A04(p_mChocoMaterialSp, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    if ( !p_mChocoMaterialSp->klass )
      sub_2213CDC(0, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16795/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  MissionNaviTransitionBoardItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v9; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *object; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  BoardOptionEventTargetComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  UnityEngine_Material_o *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1

  if ( (byte_596CE45 & 1) == 0 )
  {
    sub_2213A60(&BoardOptionEventTargetComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_2213A60(&StringLiteral_16795/*"_ChocoTex"*/);
    sub_2213A60(&StringLiteral_13377/*"Shaders/ChocoMap"*/);
    byte_596CE45 = 1;
  }
  p_mChocoMaterialTx = (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoTex;
    v9 = (UnityEngine_Object_o *)mChocoTex;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_13377/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (MissionNaviTransitionBoardItem_c *)object;
      sub_2213A04(p_mChocoTex, (int32_t)object, v14, v15, v16, v17, v18, v19);
    }
    v20 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !*(&BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo, v11, v12);
      v20 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_TX, 0);
    v22 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0);
    p_mChocoMaterialTx->klass = (MissionNaviTransitionBoardItem_c *)v22;
    sub_2213A04(p_mChocoMaterialTx, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    if ( !p_mChocoMaterialTx->klass )
      sub_2213CDC(0, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16795/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewColorShadowMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_colorShadowMaterialSprite; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_Material_o *colorShadowMaterialSprite; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  BoardOptionEventTargetComponent_c *v9; // x0
  UnityEngine_Shader_o *v10; // x20
  UnityEngine_Material_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596CE48 & 1) == 0 )
  {
    sub_2213A60(&BoardOptionEventTargetComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE48 = 1;
  }
  colorShadowMaterialSprite = this->fields.colorShadowMaterialSprite;
  p_colorShadowMaterialSprite = (MissionNaviTransitionBoardItem_o *)&this->fields.colorShadowMaterialSprite;
  v5 = (UnityEngine_Object_o *)colorShadowMaterialSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    v9 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !*(&BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo, v7, v8);
      v9 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v10 = UnityEngine_Shader__Find(v9->static_fields->ColorShadowShaderSprite, 0);
    v11 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v11, v10, 0);
    p_colorShadowMaterialSprite->klass = (MissionNaviTransitionBoardItem_c *)v11;
    sub_2213A04(p_colorShadowMaterialSprite, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  return (UnityEngine_Material_o *)p_colorShadowMaterialSprite->klass;
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewColorShadowMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_colorShadowMaterialTexture; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_Material_o *colorShadowMaterialTexture; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  BoardOptionEventTargetComponent_c *v9; // x0
  UnityEngine_Shader_o *v10; // x20
  UnityEngine_Material_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596CE47 & 1) == 0 )
  {
    sub_2213A60(&BoardOptionEventTargetComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE47 = 1;
  }
  colorShadowMaterialTexture = this->fields.colorShadowMaterialTexture;
  p_colorShadowMaterialTexture = (MissionNaviTransitionBoardItem_o *)&this->fields.colorShadowMaterialTexture;
  v5 = (UnityEngine_Object_o *)colorShadowMaterialTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    v9 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !*(&BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo, v7, v8);
      v9 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v10 = UnityEngine_Shader__Find(v9->static_fields->ColorShadowShaderTexture, 0);
    v11 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v11, v10, 0);
    p_colorShadowMaterialTexture->klass = (MissionNaviTransitionBoardItem_c *)v11;
    sub_2213A04(p_colorShadowMaterialTexture, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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


void BoardOptionEventTargetComponent__SetAlpha(
        BoardOptionEventTargetComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  BoardOptionEventTargetComponent_o *v4; // x19
  __int64 v6; // x20
  int max_length; // w9
  BoardOptionEventTargetListViewItemDraw_o *v8; // x8

  eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
LABEL_8:
    sub_2213CDC(this, method);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    v8 = eventTargetItemDrawList->m_Items[v6];
    if ( v8 )
    {
      this = (BoardOptionEventTargetComponent_o *)v8->fields.iconBaseSprite;
      if ( this )
      {
        this = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(BoardOptionEventTargetComponent_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                                      this,
                                                      this->klass[1]._1.castClass,
                                                      alpha);
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
  if ( (byte_596CE4A & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_596CE4A = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_2213CDC(this, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CE4C & 1) == 0 )
  {
    sub_2213A60(&BoardOptionEventTargetComponent___c_TypeInfo);
    byte_596CE4C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields,
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
  __int64 v2; // x2
  BoardOptionEventTargetComponent___c__DisplayClass8_0_o *v3; // x19
  struct BoardOptionEventTargetComponent_o *_4__this; // x8
  System_Action_o *_9__2; // x21
  System_String_array *loadedAssets; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_596CE4D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_2213A60(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__);
    byte_596CE4D = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  _9__2 = v3->fields.__9__2;
  loadedAssets = _4__this->fields.loadedAssets;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetManager__loadAssetStorage_47503780(loadedAssets, _9__2, 1, 0);
}


void BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  BoardOptionEventTargetComponent__CreateEnemyList_42696484(
    this->fields.__4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}