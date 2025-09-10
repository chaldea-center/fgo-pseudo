void BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct BoardOptionEventTargetComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct BoardOptionEventTargetComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct BoardOptionEventTargetComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C23B7A & 1) == 0 )
  {
    sub_1C2D490(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_15130/*"Unlit/Transparent Colored_ColorShadow"*/);
    sub_1C2D490(&StringLiteral_4934/*"Custom/SpriteWithMask_ColorShadow"*/);
    sub_1C2D490(&StringLiteral_15129/*"Unlit/Transparent Colored_Choco"*/);
    sub_1C2D490(&StringLiteral_4933/*"Custom/SpriteWithMask_Choco"*/);
    byte_4C23B7A = 1;
  }
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15129/*"Unlit/Transparent Colored_Choco"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    StringLiteral_15129/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2);
  v3 = StringLiteral_4933/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4933/*"Custom/SpriteWithMask_Choco"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->CHOCO_SHADER_SP, v3, v5, v6);
  v7 = StringLiteral_15130/*"Unlit/Transparent Colored_ColorShadow"*/;
  v8 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v8->ColorShadowShaderTexture = (struct System_String_o *)StringLiteral_15130/*"Unlit/Transparent Colored_ColorShadow"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->ColorShadowShaderTexture, v7, v9, v10);
  v11 = StringLiteral_4934/*"Custom/SpriteWithMask_ColorShadow"*/;
  v12 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v12->ColorShadowShaderSprite = (struct System_String_o *)StringLiteral_4934/*"Custom/SpriteWithMask_ColorShadow"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->ColorShadowShaderSprite, v11, v13, v14);
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
  const MethodInfo *v10; // x3
  __int64 *v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Int32_array *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *Master_object; // x23
  Il2CppObject *v21; // x24
  unsigned int **v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x26
  const MethodInfo *v26; // x2
  __int64 v27; // x8
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  __int64 v32; // x8
  __int64 v33; // x29
  __int64 v34; // x28
  unsigned __int64 v35; // x21
  unsigned int *v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  const MethodInfo *v39; // x3
  ViewEnemyEntity_o *v40; // x26
  System_String_o *v41; // x0
  Il2CppObject *v42; // x26
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  ViewEnemyEntity_o *v49; // x27
  unsigned int *v50; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x22
  BoardOptionEventTargetComponent___c_c *v52; // x0
  System_Func_object__bool__o *_9__8_0; // x23
  Il2CppObject *v54; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  struct System_String_array *v59; // x0
  struct System_String_array **p_loadedAssets; // x19
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Action_o *v63; // x19
  __int64 v64; // x0
  System_Collections_Generic_List_object__o *v66; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v69; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v70; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C23B6F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
    sub_1C2D490(&System_Func_ViewEnemyEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__);
    sub_1C2D490(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__);
    sub_1C2D490(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
    sub_1C2D490(&BoardOptionEventTargetComponent___c_TypeInfo);
    sub_1C2D490(&ViewEnemyEntity___TypeInfo);
    sub_1C2D490(&ViewEnemyEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_12752/*"Servants/Commands/"*/);
    byte_4C23B6F = 1;
  }
  v69 = 0;
  v70 = 0;
  entity = 0;
  missionTargetState = 0;
  v6 = sub_1C2D6DC(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_57;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v6 + 32) = enemies;
  v11 = (__int64 *)(v6 + 32);
  *(_DWORD *)(v6 + 24) = questId;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)enemies, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v14, v15, v16);
  this->fields.dispQuestId = *(_DWORD *)(v6 + 24);
  v17 = *(struct System_Int32_array **)(v6 + 32);
  this->fields.dispEnemies = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dispEnemies, (int32_t)v17, v18, v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v21 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  v66 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v6 + 40) = 0;
  v22 = (unsigned int **)(v6 + 40);
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 40), 0, v23, v24);
  v25 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)NetworkManager_TypeInfo;
  }
  if ( !v25 )
    goto LABEL_57;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v25,
    &entity,
    *((_QWORD *)enemyIds[11].monitor + 8),
    *(_DWORD *)(v6 + 24),
    0);
  v27 = *(_QWORD *)(v6 + 32);
  if ( v27 )
  {
    v28 = sub_1C2D538(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v27 + 24));
    *v22 = (unsigned int *)v28;
    sub_1C2D434((CGThumbnailListItem_o *)(v6 + 40), v28, v29, v30);
    v32 = *v11;
    if ( !*v11 )
      goto LABEL_57;
    v33 = 8;
    v34 = 8;
    while ( 1 )
    {
      v35 = v33 - 8;
      if ( v33 - 8 >= *(int *)(v32 + 24) )
        break;
      v36 = *v22;
      if ( !*v22 )
        goto LABEL_57;
      if ( v35 >= v36[6] )
        goto LABEL_71;
      *(_QWORD *)&v36[v34] = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v36[v34], 0, (int32_t)v26, v31);
      v37 = *v11;
      if ( !*v11 )
        goto LABEL_57;
      if ( v35 >= *(unsigned int *)(v37 + 24) )
        goto LABEL_71;
      v31 = (const MethodInfo *)*(unsigned int *)(v37 + 4 * v33);
      if ( (int)v31 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_57;
        enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyMaster__TryGetEntity(
                                                                          (ViewEnemyMaster_o *)Master_object,
                                                                          &v69,
                                                                          *(_DWORD *)(v6 + 24),
                                                                          (int32_t)v31,
                                                                          0);
        if ( ((unsigned __int8)enemyIds & 1) != 0 )
        {
          enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v69;
          if ( !v69 )
            goto LABEL_57;
          ViewEnemyEntity__IsMissionTarget(v69, v69->fields.questId, &missionTargetState, 0);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_31;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.enemyIds;
            if ( !enemyIds || !enemyIds[1].monitor )
              goto LABEL_31;
            if ( !v69 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Contains_int_(
                                                                              enemyIds,
                                                                              v69->fields.enemyId,
                                                                              (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( ((unsigned __int8)enemyIds & 1) == 0 )
            {
LABEL_31:
              v38 = *v11;
              if ( !*v11 )
                goto LABEL_57;
              if ( v35 >= *(unsigned int *)(v38 + 24) )
                goto LABEL_71;
              *(_DWORD *)(v38 + 4 * v33) = 0;
            }
            if ( !v69 || !v21 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                                                                              &v70,
                                                                              v69->fields.svtId,
                                                                              (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)enemyIds & 1) != 0 )
            {
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v70;
              if ( !v70 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__get_IsOrganization(
                                                                                (ServantEntity_o *)v70,
                                                                                0);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
                goto LABEL_41;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v69;
              if ( !v69 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyEntity__IsIconIdUnique(v69, 0);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
              {
                if ( !v69 )
                  goto LABEL_57;
                v41 = System_Int32__ToString((int)v69 + 36, 0);
                v42 = (Il2CppObject *)System_String__Concat_63457864((System_String_o *)StringLiteral_12752/*"Servants/Commands/"*/, v41, 0);
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
                if ( !v66 )
                  goto LABEL_57;
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___Contains(
                                                                                  v66,
                                                                                  v42,
                                                                                  (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( ((unsigned __int8)enemyIds & 1) == 0 )
                {
                  items = v66->fields._items;
                  v46 = Method_System_Collections_Generic_List_string__Add__;
                  ++v66->fields._version;
                  if ( !items )
                    goto LABEL_57;
                  size = v66->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v66,
                      v42,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v48 = &items->obj.klass + size;
                    v66->fields._size = size + 1;
                    v48[4] = (Il2CppClass *)v42;
                    sub_1C2D434((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
                  }
                }
                v49 = v69;
                v40 = (ViewEnemyEntity_o *)sub_1C2D6DC(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_43022400(v40, v49, 0);
                v69 = v40;
                if ( !v40 )
                  goto LABEL_57;
                v40->fields.iconId = 0;
              }
              else
              {
LABEL_41:
                v40 = v69;
              }
              v50 = *v22;
              if ( !*v22 )
                goto LABEL_57;
              if ( v40 )
              {
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2D5CC(
                                                                                  v40,
                                                                                  *(_QWORD *)(*(_QWORD *)v50 + 64LL));
                if ( !enemyIds )
                {
                  v64 = sub_1C2D710();
                  sub_1C2D5B8(v64, 0);
                }
              }
              if ( v35 >= v50[6] )
LABEL_71:
                sub_1C2D6F4(enemyIds, v8, v26);
              *(_QWORD *)&v50[v34] = v40;
              sub_1C2D434((CGThumbnailListItem_o *)&v50[v34], (int32_t)v40, (int32_t)v26, v39);
            }
          }
        }
      }
      v32 = *v11;
      ++v33;
      v34 += 2;
      if ( !*v11 )
        goto LABEL_57;
    }
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)*v22;
  if ( *v22 )
  {
    v52 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v52 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__bool__o *)v52->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        v52 = BoardOptionEventTargetComponent___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v52->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__8_0,
        v54,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0);
      static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v56, v57);
    }
    v58 = System_Linq_Enumerable__Count_object__51316140(
            v51,
            (System_Func_TSource__bool__o *)_9__8_0,
            (const MethodInfo_30F05AC *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v58 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v58, v26);
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
  if ( !v66 )
LABEL_57:
    sub_1C2D6EC(enemyIds, v8);
  v59 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        v66,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v59;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_1C2D434((CGThumbnailListItem_o *)p_loadedAssets, (int32_t)v59, v61, v62);
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v63 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v6,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v63, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionEventTargetComponent__CreateEnemyList_35728620(
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
  const MethodInfo *v18; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v22; // x8
  const MethodInfo *v23; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  v8 = this;
  if ( (byte_4C23B71 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoardOptionEventTargetComponent_o *)sub_1C2D490(&QuestInformationListViewItem_TypeInfo);
    byte_4C23B71 = 1;
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
            sub_1C2D6F4(this, *(_QWORD *)&questId, enemies);
          if ( enemies->m_Items[v10] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v10 >= LODWORD(veEnts->max_length) )
            goto LABEL_28;
          v12 = veEnts->m_Items[v10];
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_1C2D6DC(QuestInformationListViewItem_TypeInfo);
            v14 = (Il2CppObject *)v13;
            v15 = v11;
            v16 = v12;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v10 >= (int)max_length )
            goto LABEL_22;
        }
        v13 = (QuestInformationListViewItem_o *)sub_1C2D6DC(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v13;
        v15 = v11;
        v16 = 0;
LABEL_15:
        QuestInformationListViewItem___ctor_36333384(v13, v15, v16, 0, 0);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (m_CachedPtr = this->fields.m_CachedPtr,
              v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !m_CachedPtr) )
        {
LABEL_27:
          sub_1C2D6EC(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v14,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v22 + 32) = v14;
          sub_1C2D434((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v14, v17, v18);
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
        BoardOptionEventTargetComponent__CreateEnemyList(v8, dispQuestId, dispEnemies, v23);
    }
  }
}


void BoardOptionEventTargetComponent__DestroyList(BoardOptionEventTargetComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C23B73 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C23B73 = 1;
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
      AssetManager__releaseAssetStorage_40322260(v4, 0);
      p_loadedAssets->klass = 0;
      sub_1C2D434(p_loadedAssets, 0, v6, v7);
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
  __int64 v9; // x2
  struct BoardOptionEventTargetListViewItemDraw_array *v10; // x8
  int32_t max_length; // w9
  unsigned int v12; // w10
  __int64 v13; // x21
  const MethodInfo *v14; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v15; // x8

  if ( (byte_4C23B70 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23B70 = 1;
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
          (v10 = this->fields.eventTargetItemDrawList) == 0) )
    {
LABEL_26:
      sub_1C2D6EC(gameObject, v7);
    }
    max_length = v10->max_length;
    if ( max_length < useNum )
      useNum = v10->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      do
      {
        if ( v12 >= max_length )
LABEL_27:
          sub_1C2D6F4(gameObject, v7, v9);
        v13 = (int)v12;
        gameObject = v10->m_Items[v12];
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0);
        if ( !gameObject )
          goto LABEL_26;
        if ( (int)v13 >= useNum )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v15 = this->fields.eventTargetItemDrawList;
          if ( !v15 )
            goto LABEL_26;
          if ( (unsigned int)v13 >= LODWORD(v15->max_length) )
            goto LABEL_27;
          gameObject = v15->m_Items[v13];
          if ( !gameObject )
            goto LABEL_26;
          BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, 0, 0, v14);
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
  __int64 v10; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x9
  struct BoardOptionEventTargetListViewItemDraw_array *v12; // x8
  int v13; // w21
  unsigned int v14; // w23
  il2cpp_array_size_t max_length; // x9
  const MethodInfo *v16; // x3
  __int64 naturalAligment; // x10
  struct BoardOptionEventTargetListViewItemDraw_array *v18; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v19; // x8

  if ( (byte_4C23B72 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&QuestInformationListViewItem_TypeInfo);
    byte_4C23B72 = 1;
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
    v11 = this->fields.itemList;
    this->fields.nowOffset = offset;
    if ( !v11 )
      goto LABEL_32;
    v12 = this->fields.eventTargetItemDrawList;
    if ( !v12 )
      goto LABEL_32;
    v13 = 0;
    v14 = (v11->fields._size - offset) & ~((v11->fields._size - offset) >> 31);
    while ( 1 )
    {
      max_length = v12->max_length;
      if ( v13 >= (int)max_length )
        break;
      if ( v13 >= (unsigned int)max_length )
        goto LABEL_38;
      gameObject = v12->m_Items[v13];
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)gameObject,
                                                                 0);
      if ( !gameObject )
        goto LABEL_32;
      if ( v13 >= v14 )
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
                                                                   offset + v13,
                                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        v18 = this->fields.eventTargetItemDrawList;
        if ( !v18 )
          goto LABEL_32;
        if ( (unsigned int)v13 >= LODWORD(v18->max_length) )
LABEL_38:
          sub_1C2D6F4(gameObject, v7, v10);
        gameObject = v18->m_Items[v13];
        if ( !gameObject )
          goto LABEL_32;
        BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, v7, 2, v16);
      }
      v12 = this->fields.eventTargetItemDrawList;
      ++v13;
      if ( !v12 )
        goto LABEL_32;
    }
    v19 = this->fields.itemList;
    if ( !v19 )
LABEL_32:
      sub_1C2D6EC(gameObject, v7);
    if ( v19->fields._size <= (int)max_length )
      BoardOptionEventTargetComponent__SetAlpha(this, 1.0, (const MethodInfo *)v7);
  }
}


bool BoardOptionEventTargetComponent__IsNeedAnim(BoardOptionEventTargetComponent_o *this, const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9

  v2 = this;
  if ( (byte_4C23B78 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C23B78 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_1C2D6EC(this, method);
  return itemList->fields._size > SLODWORD(eventTargetItemDrawList->max_length);
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  CGThumbnailListItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BoardOptionEventTargetComponent_c *v11; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1

  if ( (byte_4C23B75 & 1) == 0 )
  {
    sub_1C2D490(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C2D490(&StringLiteral_16150/*"_ChocoTex"*/);
    sub_1C2D490(&StringLiteral_12832/*"Shaders/ChocoMap"*/);
    byte_4C23B75 = 1;
  }
  p_mChocoMaterialSp = (CGThumbnailListItem_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (CGThumbnailListItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12832/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_316AF08 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1C2D434(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v11 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_SP, 0);
    v13 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0);
    p_mChocoMaterialSp->klass = (CGThumbnailListItem_c *)v13;
    sub_1C2D434(p_mChocoMaterialSp, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialSp->klass )
      sub_1C2D6EC(0, v16);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16150/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  CGThumbnailListItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BoardOptionEventTargetComponent_c *v11; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1

  if ( (byte_4C23B74 & 1) == 0 )
  {
    sub_1C2D490(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C2D490(&StringLiteral_16150/*"_ChocoTex"*/);
    sub_1C2D490(&StringLiteral_12832/*"Shaders/ChocoMap"*/);
    byte_4C23B74 = 1;
  }
  p_mChocoMaterialTx = (CGThumbnailListItem_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (CGThumbnailListItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12832/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_316AF08 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1C2D434(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v11 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_TX, 0);
    v13 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0);
    p_mChocoMaterialTx->klass = (CGThumbnailListItem_c *)v13;
    sub_1C2D434(p_mChocoMaterialTx, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialTx->klass )
      sub_1C2D6EC(0, v16);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16150/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewColorShadowMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_colorShadowMaterialSprite; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Material_o *colorShadowMaterialSprite; // t1
  BoardOptionEventTargetComponent_c *v6; // x0
  UnityEngine_Shader_o *v7; // x20
  UnityEngine_Material_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23B77 & 1) == 0 )
  {
    sub_1C2D490(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23B77 = 1;
  }
  colorShadowMaterialSprite = this->fields.colorShadowMaterialSprite;
  p_colorShadowMaterialSprite = (CGThumbnailListItem_o *)&this->fields.colorShadowMaterialSprite;
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
    v8 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0);
    p_colorShadowMaterialSprite->klass = (CGThumbnailListItem_c *)v8;
    sub_1C2D434(p_colorShadowMaterialSprite, (int32_t)v8, v9, v10);
  }
  return (UnityEngine_Material_o *)p_colorShadowMaterialSprite->klass;
}


UnityEngine_Material_o *BoardOptionEventTargetComponent__NewColorShadowMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_colorShadowMaterialTexture; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Material_o *colorShadowMaterialTexture; // t1
  BoardOptionEventTargetComponent_c *v6; // x0
  UnityEngine_Shader_o *v7; // x20
  UnityEngine_Material_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23B76 & 1) == 0 )
  {
    sub_1C2D490(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23B76 = 1;
  }
  colorShadowMaterialTexture = this->fields.colorShadowMaterialTexture;
  p_colorShadowMaterialTexture = (CGThumbnailListItem_o *)&this->fields.colorShadowMaterialTexture;
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
    v8 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0);
    p_colorShadowMaterialTexture->klass = (CGThumbnailListItem_c *)v8;
    sub_1C2D434(p_colorShadowMaterialTexture, (int32_t)v8, v9, v10);
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
    sub_1C2D6EC(this, method);
  v5 = this;
  v6 = *(long double *)&alpha;
  v7 = 0;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C2D6F4(this, method, v3);
    v9 = eventTargetItemDrawList->m_Items[v7];
    if ( v9 )
    {
      this = (BoardOptionEventTargetComponent_o *)v9->fields.iconBaseSprite;
      if ( this )
      {
        this = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(BoardOptionEventTargetComponent_o *, Il2CppClass *, long double))this->klass[1]._1.element_class)(
                                                      this,
                                                      this->klass[1]._1.castClass,
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
  if ( (byte_4C23B79 & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C23B79 = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_1C2D6EC(this, method);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C23B7B & 1) == 0 )
  {
    sub_1C2D490(&BoardOptionEventTargetComponent___c_TypeInfo);
    byte_4C23B7B = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4C23B7C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_1C2D490(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__);
    byte_4C23B7C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40319912(loadedAssets, _9__2, 1, 0);
}


void BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, method);
  BoardOptionEventTargetComponent__CreateEnemyList_35728620(
    this->fields.__4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}