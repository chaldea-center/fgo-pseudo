void __fastcall BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct BoardOptionEventTargetComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4AFE92C & 1) == 0 )
  {
    sub_1BC3008(&BoardOptionEventTargetComponent_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_15000/*"Unlit/Transparent Colored_Choco"*/, v4);
    sub_1BC3008(&StringLiteral_4900/*"Custom/SpriteWithMask_Choco"*/, v5);
    byte_4AFE92C = 1;
  }
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15000/*"Unlit/Transparent Colored_Choco"*/;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    StringLiteral_15000/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3);
  v6 = StringLiteral_4900/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4900/*"Custom/SpriteWithMask_Choco"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->CHOCO_SHADER_SP, v6, v8, v9);
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 *v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_List_object__o *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Int32_array *v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *Master_object; // x23
  Il2CppObject *v45; // x24
  unsigned int **v46; // x25
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x26
  const MethodInfo *v50; // x2
  __int64 v51; // x8
  __int64 v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  __int64 v56; // x8
  __int64 v57; // x29
  __int64 v58; // x28
  unsigned __int64 v59; // x21
  unsigned int *v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  const MethodInfo *v63; // x3
  ViewEnemyEntity_o *v64; // x26
  System_String_o *v65; // x0
  Il2CppObject *v66; // x26
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  ViewEnemyEntity_o *v73; // x27
  unsigned int *v74; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x22
  BoardOptionEventTargetComponent___c_c *v76; // x0
  System_Func_object__bool__o *_9__8_0; // x23
  Il2CppObject *v78; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w1
  struct System_String_array *v83; // x0
  struct System_String_array **p_loadedAssets; // x19
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  System_Action_o *v87; // x19
  __int64 v88; // x0
  System_Collections_Generic_List_object__o *v90; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v93; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v94; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4AFE923 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_1BC3008(&AtlasManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_ViewEnemyMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___, v13);
    sub_1BC3008(&System_Func_ViewEnemyEntity__bool__TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Contains__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__ToArray__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_1BC3008(&System_Collections_Generic_List_ListViewItem__TypeInfo, v20);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1BC3008(&NetworkManager_TypeInfo, v22);
    sub_1BC3008(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__, v23);
    sub_1BC3008(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__, v24);
    sub_1BC3008(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo, v25);
    sub_1BC3008(&BoardOptionEventTargetComponent___c_TypeInfo, v26);
    sub_1BC3008(&ViewEnemyEntity___TypeInfo, v27);
    sub_1BC3008(&ViewEnemyEntity_TypeInfo, v28);
    sub_1BC3008(&StringLiteral_12631/*"Servants/Commands/"*/, v29);
    byte_4AFE923 = 1;
  }
  v93 = 0LL;
  v94 = 0LL;
  entity = 0LL;
  missionTargetState = 0;
  v30 = sub_1BC3254(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_57;
  *(_QWORD *)(v30 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 16), (int32_t)this, v33, v34);
  *(_QWORD *)(v30 + 32) = enemies;
  v35 = (__int64 *)(v30 + 32);
  *(_DWORD *)(v30 + 24) = questId;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)enemies, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v38;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v38, v39, v40);
  this->fields.dispQuestId = *(_DWORD *)(v30 + 24);
  v41 = *(struct System_Int32_array **)(v30 + 32);
  this->fields.dispEnemies = v41;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dispEnemies, (int32_t)v41, v42, v43);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v45 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  v90 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v90,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v30 + 40) = 0LL;
  v46 = (unsigned int **)(v30 + 40);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 40), 0, v47, v48);
  v49 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v32);
    byte_4AFC1F1 = 1;
  }
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  }
  if ( !v49 )
    goto LABEL_57;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v49,
    &entity,
    *((_QWORD *)enemyIds[11].monitor + 8),
    *(_DWORD *)(v30 + 24),
    0LL);
  v51 = *(_QWORD *)(v30 + 32);
  if ( v51 )
  {
    v52 = sub_1BC30B0(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v51 + 24));
    *v46 = (unsigned int *)v52;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 40), v52, v53, v54);
    v56 = *v35;
    if ( !*v35 )
      goto LABEL_57;
    v57 = 8LL;
    v58 = 8LL;
    while ( 1 )
    {
      v59 = v57 - 8;
      if ( v57 - 8 >= *(int *)(v56 + 24) )
        break;
      v60 = *v46;
      if ( !*v46 )
        goto LABEL_57;
      if ( v59 >= v60[6] )
        goto LABEL_71;
      *(_QWORD *)&v60[v58] = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v60[v58], 0, (int32_t)v50, v55);
      v61 = *v35;
      if ( !*v35 )
        goto LABEL_57;
      if ( v59 >= *(unsigned int *)(v61 + 24) )
        goto LABEL_71;
      v55 = (const MethodInfo *)*(unsigned int *)(v61 + 4 * v57);
      if ( (int)v55 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_57;
        enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyMaster__TryGetEntity(
                                                                          (ViewEnemyMaster_o *)Master_object,
                                                                          &v93,
                                                                          *(_DWORD *)(v30 + 24),
                                                                          (int32_t)v55,
                                                                          0LL);
        if ( ((unsigned __int8)enemyIds & 1) != 0 )
        {
          enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v93;
          if ( !v93 )
            goto LABEL_57;
          ViewEnemyEntity__IsMissionTarget(v93, v93->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_31;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.enemyIds;
            if ( !enemyIds || !enemyIds[1].monitor )
              goto LABEL_31;
            if ( !v93 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Contains_int_(
                                                                              enemyIds,
                                                                              v93->fields.enemyId,
                                                                              (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
            if ( ((unsigned __int8)enemyIds & 1) == 0 )
            {
LABEL_31:
              v62 = *v35;
              if ( !*v35 )
                goto LABEL_57;
              if ( v59 >= *(unsigned int *)(v62 + 24) )
                goto LABEL_71;
              *(_DWORD *)(v62 + 4 * v57) = 0;
            }
            if ( !v93 || !v45 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v45,
                                                                              &v94,
                                                                              v93->fields.svtId,
                                                                              (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)enemyIds & 1) != 0 )
            {
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v94;
              if ( !v94 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__get_IsOrganization(
                                                                                (ServantEntity_o *)v94,
                                                                                0LL);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
                goto LABEL_41;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v93;
              if ( !v93 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyEntity__IsIconIdUnique(v93, 0LL);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
              {
                if ( !v93 )
                  goto LABEL_57;
                v65 = System_Int32__ToString((int)v93 + 36, 0LL);
                v66 = (Il2CppObject *)System_String__Concat_62348648((System_String_o *)StringLiteral_12631/*"Servants/Commands/"*/, v65, 0LL);
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v90;
                if ( !v90 )
                  goto LABEL_57;
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___Contains(
                                                                                  v90,
                                                                                  v66,
                                                                                  (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( ((unsigned __int8)enemyIds & 1) == 0 )
                {
                  items = v90->fields._items;
                  v70 = Method_System_Collections_Generic_List_string__Add__;
                  ++v90->fields._version;
                  if ( !items )
                    goto LABEL_57;
                  size = v90->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v90,
                      v66,
                      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v72 = &items->obj.klass + size;
                    v90->fields._size = size + 1;
                    v72[4] = (Il2CppClass *)v66;
                    sub_1BC2FAC((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v66, v67, v68);
                  }
                }
                v73 = v93;
                v64 = (ViewEnemyEntity_o *)sub_1BC3254(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_42228888(v64, v73, 0LL);
                v93 = v64;
                if ( !v64 )
                  goto LABEL_57;
                v64->fields.iconId = 0;
              }
              else
              {
LABEL_41:
                v64 = v93;
              }
              v74 = *v46;
              if ( !*v46 )
                goto LABEL_57;
              if ( v64 )
              {
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BC3144(
                                                                                  v64,
                                                                                  *(_QWORD *)(*(_QWORD *)v74 + 64LL));
                if ( !enemyIds )
                {
                  v88 = sub_1BC3288();
                  sub_1BC3130(v88, 0LL);
                }
              }
              if ( v59 >= v74[6] )
LABEL_71:
                sub_1BC326C(enemyIds, v32, v50);
              *(_QWORD *)&v74[v58] = v64;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v74[v58], (int32_t)v64, (int32_t)v50, v63);
            }
          }
        }
      }
      v56 = *v35;
      ++v57;
      v58 += 2LL;
      if ( !*v35 )
        goto LABEL_57;
    }
  }
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)*v46;
  if ( *v46 )
  {
    v76 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v76 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__bool__o *)v76->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v76->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v76);
        v76 = BoardOptionEventTargetComponent___c_TypeInfo;
      }
      v78 = (Il2CppObject *)v76->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__8_0,
        v78,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0LL);
      static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v80, v81);
    }
    v82 = System_Linq_Enumerable__Count_object__50461416(
            v75,
            (System_Func_TSource__bool__o *)_9__8_0,
            (const MethodInfo_301FAE8 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v82 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v82, v50);
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v90;
  if ( !v90 )
LABEL_57:
    sub_1BC3264(enemyIds, v32);
  v83 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        v90,
                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v83;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_loadedAssets, (int32_t)v83, v85, v86);
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v87 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v87,
    (Il2CppObject *)v30,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v87, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_35022228(
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8
  const MethodInfo *v24; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  v8 = this;
  if ( (byte_4AFE925 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    this = (BoardOptionEventTargetComponent_o *)sub_1BC3008(&QuestInformationListViewItem_TypeInfo, v9);
    byte_4AFE925 = 1;
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
            sub_1BC326C(this, *(_QWORD *)&questId, enemies);
          if ( enemies->m_Items[v11 + 1] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v11 >= veEnts->max_length )
            goto LABEL_28;
          v13 = veEnts->m_Items[v11];
          if ( v13 )
          {
            v14 = (QuestInformationListViewItem_o *)sub_1BC3254(QuestInformationListViewItem_TypeInfo);
            v15 = (Il2CppObject *)v14;
            v16 = v12;
            v17 = v13;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v11 >= (int)v10 )
            goto LABEL_22;
        }
        v14 = (QuestInformationListViewItem_o *)sub_1BC3254(QuestInformationListViewItem_TypeInfo);
        v15 = (Il2CppObject *)v14;
        v16 = v12;
        v17 = 0LL;
LABEL_15:
        QuestInformationListViewItem___ctor_35561000(v14, v16, v17, 0, 0LL);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (v20 = *(_QWORD *)&this->fields.m_CachedPtr,
              v21 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v20) )
        {
LABEL_27:
          sub_1BC3264(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v15,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v15;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v15, v18, v19);
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
        BoardOptionEventTargetComponent__CreateEnemyList(v8, dispQuestId, dispEnemies, v24);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent__DestroyList(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4AFE927 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    byte_4AFE927 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (CGThumbnailListItem_o *)&this->fields.loadedAssets;
    v4 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_39580320(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_1BC2FAC(p_loadedAssets, 0, v6, v7);
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
  __int64 v9; // x2
  struct BoardOptionEventTargetListViewItemDraw_array *v10; // x8
  int max_length; // w9
  unsigned int v12; // w10
  __int64 v13; // x21
  const MethodInfo *v14; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v15; // x8

  v3 = useNum;
  if ( (byte_4AFE924 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&useNum);
    byte_4AFE924 = 1;
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
          (v10 = this->fields.eventTargetItemDrawList) == 0LL) )
    {
LABEL_26:
      sub_1BC3264(gameObject, v7);
    }
    max_length = v10->max_length;
    if ( max_length < v3 )
      v3 = v10->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      do
      {
        if ( v12 >= max_length )
LABEL_27:
          sub_1BC326C(gameObject, v7, v9);
        v13 = (int)v12;
        gameObject = v10->m_Items[v12];
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
        if ( !gameObject )
          goto LABEL_26;
        if ( (int)v13 >= v3 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v15 = this->fields.eventTargetItemDrawList;
          if ( !v15 )
            goto LABEL_26;
          if ( (unsigned int)v13 >= v15->max_length )
            goto LABEL_27;
          gameObject = v15->m_Items[v13];
          if ( !gameObject )
            goto LABEL_26;
          BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, 0LL, 0, v14);
        }
        v10 = this->fields.eventTargetItemDrawList;
        if ( !v10 )
          goto LABEL_26;
        max_length = v10->max_length;
        v12 = v13 + 1;
      }
      while ( (int)v13 + 1 < max_length );
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
  __int64 v13; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v14; // x9
  struct BoardOptionEventTargetListViewItemDraw_array *v15; // x8
  int v16; // w21
  unsigned int v17; // w23
  __int64 v18; // x9
  const MethodInfo *v19; // x3
  __int64 methodPtr_low; // x10
  struct BoardOptionEventTargetListViewItemDraw_array *v21; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v22; // x8

  if ( (byte_4AFE926 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&offset);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4AFE926 = 1;
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
    v14 = this->fields.itemList;
    this->fields.nowOffset = offset;
    if ( !v14 )
      goto LABEL_32;
    v15 = this->fields.eventTargetItemDrawList;
    if ( !v15 )
      goto LABEL_32;
    v16 = 0;
    v17 = (v14->fields._size - offset) & ~((v14->fields._size - offset) >> 31);
    while ( 1 )
    {
      v18 = *(_QWORD *)&v15->max_length;
      if ( v16 >= (int)v18 )
        break;
      if ( v16 >= (unsigned int)v18 )
        goto LABEL_38;
      gameObject = v15->m_Items[v16];
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)gameObject,
                                                                 0LL);
      if ( !gameObject )
        goto LABEL_32;
      if ( v16 >= v17 )
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
                                                                   offset + v16,
                                                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        v21 = this->fields.eventTargetItemDrawList;
        if ( !v21 )
          goto LABEL_32;
        if ( v16 >= v21->max_length )
LABEL_38:
          sub_1BC326C(gameObject, v10, v13);
        gameObject = v21->m_Items[v16];
        if ( !gameObject )
          goto LABEL_32;
        BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, v10, 2, v19);
      }
      v15 = this->fields.eventTargetItemDrawList;
      ++v16;
      if ( !v15 )
        goto LABEL_32;
    }
    v22 = this->fields.itemList;
    if ( !v22 )
LABEL_32:
      sub_1BC3264(gameObject, v10);
    if ( v22->fields._size <= (int)v18 )
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
  if ( (byte_4AFE92A & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1BC3008(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_4AFE92A = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_1BC3264(this, method);
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
  CGThumbnailListItem_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  CGThumbnailListItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  BoardOptionEventTargetComponent_c *v16; // x0
  UnityEngine_Shader_o *v17; // x21
  UnityEngine_Material_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1

  if ( (byte_4AFE929 & 1) == 0 )
  {
    sub_1BC3008(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Material_TypeInfo, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1BC3008(&StringLiteral_16006/*"_ChocoTex"*/, v6);
    sub_1BC3008(&StringLiteral_12711/*"Shaders/ChocoMap"*/, v7);
    byte_4AFE929 = 1;
  }
  p_mChocoMaterialSp = (CGThumbnailListItem_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (CGThumbnailListItem_o *)&this->fields.mChocoTex;
    v11 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12711/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_309AA50 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1BC2FAC(p_mChocoTex, (int32_t)object, v14, v15);
    }
    v16 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v16 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v17 = UnityEngine_Shader__Find(v16->static_fields->CHOCO_SHADER_SP, 0LL);
    v18 = (UnityEngine_Material_o *)sub_1BC3254(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v18, v17, 0LL);
    p_mChocoMaterialSp->klass = (CGThumbnailListItem_c *)v18;
    sub_1BC2FAC(p_mChocoMaterialSp, (int32_t)v18, v19, v20);
    if ( !p_mChocoMaterialSp->klass )
      sub_1BC3264(0LL, v21);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16006/*"_ChocoTex"*/,
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
  CGThumbnailListItem_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  CGThumbnailListItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  BoardOptionEventTargetComponent_c *v16; // x0
  UnityEngine_Shader_o *v17; // x21
  UnityEngine_Material_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1

  if ( (byte_4AFE928 & 1) == 0 )
  {
    sub_1BC3008(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Material_TypeInfo, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1BC3008(&StringLiteral_16006/*"_ChocoTex"*/, v6);
    sub_1BC3008(&StringLiteral_12711/*"Shaders/ChocoMap"*/, v7);
    byte_4AFE928 = 1;
  }
  p_mChocoMaterialTx = (CGThumbnailListItem_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (CGThumbnailListItem_o *)&this->fields.mChocoTex;
    v11 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12711/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_309AA50 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1BC2FAC(p_mChocoTex, (int32_t)object, v14, v15);
    }
    v16 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v16 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v17 = UnityEngine_Shader__Find(v16->static_fields->CHOCO_SHADER_TX, 0LL);
    v18 = (UnityEngine_Material_o *)sub_1BC3254(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v18, v17, 0LL);
    p_mChocoMaterialTx->klass = (CGThumbnailListItem_c *)v18;
    sub_1BC2FAC(p_mChocoMaterialTx, (int32_t)v18, v19, v20);
    if ( !p_mChocoMaterialTx->klass )
      sub_1BC3264(0LL, v21);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16006/*"_ChocoTex"*/,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__SetAlpha(
        BoardOptionEventTargetComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  __int64 v3; // x2
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  BoardOptionEventTargetComponent_o *v5; // x19
  long double v6; // q8
  __int64 v7; // x20
  int max_length; // w9
  BoardOptionEventTargetListViewItemDraw_o *v9; // x8

  eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
LABEL_8:
    sub_1BC3264(this, method);
  v5 = this;
  v6 = *(long double *)&alpha;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BC326C(this, method, v3);
    v9 = eventTargetItemDrawList->m_Items[v7];
    if ( v9 )
    {
      this = (BoardOptionEventTargetComponent_o *)v9->fields.iconBaseSprite;
      if ( this )
      {
        this = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(BoardOptionEventTargetComponent_o *, Il2CppClass *, long double))this->klass[1]._1.castClass)(
                                                      this,
                                                      this->klass[1]._1.declaringType,
                                                      v6);
        eventTargetItemDrawList = v5->fields.eventTargetItemDrawList;
        ++v7;
        if ( eventTargetItemDrawList )
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9
  int32_t size; // w8
  signed int max_length; // w9
  int32_t v8; // w9
  int32_t v9; // w1

  v3 = this;
  if ( (byte_4AFE92B & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1BC3008(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_4AFE92B = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_1BC3264(this, method);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFE92D & 1) == 0 )
  {
    sub_1BC3008(&BoardOptionEventTargetComponent___c_TypeInfo, v1);
    byte_4AFE92D = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_4AFE92E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AssetManager_TypeInfo, v3);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_1BC3008(
                                                                       &Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
                                                                       v4);
    byte_4AFE92E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39577976(loadedAssets, _9__2, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1BC3264(this, method);
  BoardOptionEventTargetComponent__CreateEnemyList_35022228(
    this->fields.__4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}