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

  if ( (byte_4C535D0 & 1) == 0 )
  {
    sub_1C3E564(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_15145/*"Unlit/Transparent Colored_ColorShadow"*/);
    sub_1C3E564(&StringLiteral_4942/*"Custom/SpriteWithMask_ColorShadow"*/);
    sub_1C3E564(&StringLiteral_15144/*"Unlit/Transparent Colored_Choco"*/);
    sub_1C3E564(&StringLiteral_4941/*"Custom/SpriteWithMask_Choco"*/);
    byte_4C535D0 = 1;
  }
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15144/*"Unlit/Transparent Colored_Choco"*/;
  sub_1C3E508(
    (CGThumbnailListItem_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    StringLiteral_15144/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2);
  v3 = StringLiteral_4941/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4941/*"Custom/SpriteWithMask_Choco"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->CHOCO_SHADER_SP, v3, v5, v6);
  v7 = StringLiteral_15145/*"Unlit/Transparent Colored_ColorShadow"*/;
  v8 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v8->ColorShadowShaderTexture = (struct System_String_o *)StringLiteral_15145/*"Unlit/Transparent Colored_ColorShadow"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->ColorShadowShaderTexture, v7, v9, v10);
  v11 = StringLiteral_4942/*"Custom/SpriteWithMask_ColorShadow"*/;
  v12 = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  v12->ColorShadowShaderSprite = (struct System_String_o *)StringLiteral_4942/*"Custom/SpriteWithMask_ColorShadow"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->ColorShadowShaderSprite, v11, v13, v14);
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
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  ViewEnemyEntity_o *v41; // x26
  System_String_o *v42; // x0
  Il2CppObject *v43; // x26
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  ViewEnemyEntity_o *v50; // x27
  unsigned int *v51; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x22
  BoardOptionEventTargetComponent___c_c *v53; // x0
  System_Func_object__bool__o *_9__8_0; // x23
  Il2CppObject *v55; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w1
  struct System_String_array *v60; // x0
  struct System_String_array **p_loadedAssets; // x19
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Action_o *v64; // x19
  __int64 v65; // x0
  System_Collections_Generic_List_object__o *v67; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v70; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v71; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C535C5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
    sub_1C3E564(&System_Func_ViewEnemyEntity__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__);
    sub_1C3E564(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__);
    sub_1C3E564(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
    sub_1C3E564(&BoardOptionEventTargetComponent___c_TypeInfo);
    sub_1C3E564(&ViewEnemyEntity___TypeInfo);
    sub_1C3E564(&ViewEnemyEntity_TypeInfo);
    sub_1C3E564(&StringLiteral_12765/*"Servants/Commands/"*/);
    byte_4C535C5 = 1;
  }
  v70 = 0;
  v71 = 0;
  entity = 0;
  missionTargetState = 0;
  v6 = sub_1C3E7B0(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_57;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v6 + 32) = enemies;
  v11 = (__int64 *)(v6 + 32);
  *(_DWORD *)(v6 + 24) = questId;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)enemies, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v14;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v14, v15, v16);
  this->fields.dispQuestId = *(_DWORD *)(v6 + 24);
  v17 = *(struct System_Int32_array **)(v6 + 32);
  this->fields.dispEnemies = v17;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dispEnemies, (int32_t)v17, v18, v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v21 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  v67 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v6 + 40) = 0;
  v22 = (unsigned int **)(v6 + 40);
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), 0, v23, v24);
  v25 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
    v28 = sub_1C3E60C(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v27 + 24));
    *v22 = (unsigned int *)v28;
    sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), v28, v29, v30);
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
      sub_1C3E508((CGThumbnailListItem_o *)&v36[v34], 0, (int32_t)v26, v31);
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
                                                                          &v70,
                                                                          *(_DWORD *)(v6 + 24),
                                                                          (int32_t)v31,
                                                                          0);
        if ( ((unsigned __int8)enemyIds & 1) != 0 )
        {
          enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v70;
          if ( !v70 )
            goto LABEL_57;
          ViewEnemyEntity__IsMissionTarget(v70, v70->fields.questId, &missionTargetState, 0);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_31;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.enemyIds;
            if ( !enemyIds || !enemyIds[1].monitor )
              goto LABEL_31;
            if ( !v70 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Contains_int_(
                                                                              enemyIds,
                                                                              v70->fields.enemyId,
                                                                              (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
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
            if ( !v70 || !v21 )
              goto LABEL_57;
            enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                                                                              &v71,
                                                                              v70->fields.svtId,
                                                                              (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)enemyIds & 1) != 0 )
            {
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v71;
              if ( !v71 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__get_IsOrganization(
                                                                                (ServantEntity_o *)v71,
                                                                                0);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
                goto LABEL_41;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v70;
              if ( !v70 )
                goto LABEL_57;
              enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewEnemyEntity__IsIconIdUnique(v70, 0);
              if ( ((unsigned __int8)enemyIds & 1) == 0 )
              {
                if ( !v70 )
                  goto LABEL_57;
                v42 = System_Int32__ToString((int)v70 + 36, 0);
                v43 = (Il2CppObject *)System_String__Concat_63636468((System_String_o *)StringLiteral_12765/*"Servants/Commands/"*/, v42, 0);
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v67;
                if ( !v67 )
                  goto LABEL_57;
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___Contains(
                                                                                  v67,
                                                                                  v43,
                                                                                  (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( ((unsigned __int8)enemyIds & 1) == 0 )
                {
                  items = v67->fields._items;
                  v47 = Method_System_Collections_Generic_List_string__Add__;
                  ++v67->fields._version;
                  if ( !items )
                    goto LABEL_57;
                  size = v67->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v67,
                      v43,
                      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v49 = &items->obj.klass + size;
                    v67->fields._size = size + 1;
                    v49[4] = (Il2CppClass *)v43;
                    sub_1C3E508((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v43, v44, v45);
                  }
                }
                v50 = v70;
                v41 = (ViewEnemyEntity_o *)sub_1C3E7B0(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_43312472(v41, v50, 0);
                v70 = v41;
                if ( !v41 )
                  goto LABEL_57;
                v41->fields.iconId = 0;
              }
              else
              {
LABEL_41:
                v41 = v70;
              }
              v51 = *v22;
              if ( !*v22 )
                goto LABEL_57;
              if ( v41 )
              {
                enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C3E6A0(
                                                                                  v41,
                                                                                  *(_QWORD *)(*(_QWORD *)v51 + 64LL));
                if ( !enemyIds )
                {
                  v65 = sub_1C3E7E4();
                  sub_1C3E68C(v65, 0);
                }
              }
              if ( v35 >= v51[6] )
LABEL_71:
                sub_1C3E7C8(enemyIds, v8);
              *(_QWORD *)&v51[v34] = v41;
              sub_1C3E508((CGThumbnailListItem_o *)&v51[v34], (int32_t)v41, v39, v40);
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
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)*v22;
  if ( *v22 )
  {
    v53 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v53 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__bool__o *)v53->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = BoardOptionEventTargetComponent___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__8_0,
        v55,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0);
      static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v57, v58);
    }
    v59 = System_Linq_Enumerable__Count_object__51492776(
            v52,
            (System_Func_TSource__bool__o *)_9__8_0,
            (const MethodInfo_311B7A8 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v59 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v59, v26);
  enemyIds = (System_Collections_Generic_IEnumerable_TSource__o *)v67;
  if ( !v67 )
LABEL_57:
    sub_1C3E7C0(enemyIds, v8);
  v60 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        v67,
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v60;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_1C3E508((CGThumbnailListItem_o *)p_loadedAssets, (int32_t)v60, v62, v63);
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v64 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v64,
    (Il2CppObject *)v6,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v64, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionEventTargetComponent__CreateEnemyList_35984088(
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
  if ( (byte_4C535C7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (BoardOptionEventTargetComponent_o *)sub_1C3E564(&QuestInformationListViewItem_TypeInfo);
    byte_4C535C7 = 1;
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
            sub_1C3E7C8(this, *(_QWORD *)&questId);
          if ( enemies->m_Items[v10] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v10 >= LODWORD(veEnts->max_length) )
            goto LABEL_28;
          v12 = veEnts->m_Items[v10];
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_1C3E7B0(QuestInformationListViewItem_TypeInfo);
            v14 = (Il2CppObject *)v13;
            v15 = v11;
            v16 = v12;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v10 >= (int)max_length )
            goto LABEL_22;
        }
        v13 = (QuestInformationListViewItem_o *)sub_1C3E7B0(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v13;
        v15 = v11;
        v16 = 0;
LABEL_15:
        QuestInformationListViewItem___ctor_36592000(v13, v15, v16, 0, 0);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (m_CachedPtr = this->fields.m_CachedPtr,
              v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !m_CachedPtr) )
        {
LABEL_27:
          sub_1C3E7C0(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v14,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v22 + 32) = v14;
          sub_1C3E508((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v14, v17, v18);
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

  if ( (byte_4C535C9 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C535C9 = 1;
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
      AssetManager__releaseAssetStorage_40590132(v4, 0);
      p_loadedAssets->klass = 0;
      sub_1C3E508(p_loadedAssets, 0, v6, v7);
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

  if ( (byte_4C535C6 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C535C6 = 1;
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
      sub_1C3E7C0(gameObject, v7);
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
          sub_1C3E7C8(gameObject, v7);
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

  if ( (byte_4C535C8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&QuestInformationListViewItem_TypeInfo);
    byte_4C535C8 = 1;
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
                                                                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          sub_1C3E7C8(gameObject, v7);
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
      sub_1C3E7C0(gameObject, v7);
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
  if ( (byte_4C535CE & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C535CE = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C535CB & 1) == 0 )
  {
    sub_1C3E564(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C3E564(&StringLiteral_16164/*"_ChocoTex"*/);
    sub_1C3E564(&StringLiteral_12845/*"Shaders/ChocoMap"*/);
    byte_4C535CB = 1;
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
                 (System_String_o *)StringLiteral_12845/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3196164 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1C3E508(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v11 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_SP, 0);
    v13 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0);
    p_mChocoMaterialSp->klass = (CGThumbnailListItem_c *)v13;
    sub_1C3E508(p_mChocoMaterialSp, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialSp->klass )
      sub_1C3E7C0(0, v16);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16164/*"_ChocoTex"*/,
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

  if ( (byte_4C535CA & 1) == 0 )
  {
    sub_1C3E564(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C3E564(&StringLiteral_16164/*"_ChocoTex"*/);
    sub_1C3E564(&StringLiteral_12845/*"Shaders/ChocoMap"*/);
    byte_4C535CA = 1;
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
                 (System_String_o *)StringLiteral_12845/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3196164 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1C3E508(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v11 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_TX, 0);
    v13 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0);
    p_mChocoMaterialTx->klass = (CGThumbnailListItem_c *)v13;
    sub_1C3E508(p_mChocoMaterialTx, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialTx->klass )
      sub_1C3E7C0(0, v16);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16164/*"_ChocoTex"*/,
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

  if ( (byte_4C535CD & 1) == 0 )
  {
    sub_1C3E564(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C535CD = 1;
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
    v8 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0);
    p_colorShadowMaterialSprite->klass = (CGThumbnailListItem_c *)v8;
    sub_1C3E508(p_colorShadowMaterialSprite, (int32_t)v8, v9, v10);
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

  if ( (byte_4C535CC & 1) == 0 )
  {
    sub_1C3E564(&BoardOptionEventTargetComponent_TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C535CC = 1;
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
    v8 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0);
    p_colorShadowMaterialTexture->klass = (CGThumbnailListItem_c *)v8;
    sub_1C3E508(p_colorShadowMaterialTexture, (int32_t)v8, v9, v10);
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
    sub_1C3E7C0(this, method);
  v4 = this;
  v5 = *(long double *)&alpha;
  v6 = 0;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C3E7C8(this, method);
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
  if ( (byte_4C535CF & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C535CF = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_1C3E7C0(this, method);
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

  if ( (byte_4C535D1 & 1) == 0 )
  {
    sub_1C3E564(&BoardOptionEventTargetComponent___c_TypeInfo);
    byte_4C535D1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C535D2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_1C3E564(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__);
    byte_4C535D2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40587784(loadedAssets, _9__2, 1, 0);
}


void BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1C3E7C0(this, method);
  BoardOptionEventTargetComponent__CreateEnemyList_35984088(
    this->fields.__4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}