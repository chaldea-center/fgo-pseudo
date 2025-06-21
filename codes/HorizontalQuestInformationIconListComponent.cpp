void __fastcall HorizontalQuestInformationIconListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct HorizontalQuestInformationIconListComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1928B & 1) == 0 )
  {
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_15012/*"Unlit/Transparent Colored_Choco"*/, v4);
    sub_1BCAFF8(&StringLiteral_4902/*"Custom/SpriteWithMask_Choco"*/, v5);
    byte_4B1928B = 1;
  }
  HorizontalQuestInformationIconListComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15012/*"Unlit/Transparent Colored_Choco"*/;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)HorizontalQuestInformationIconListComponent_TypeInfo->static_fields,
    StringLiteral_15012/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3);
  v6 = StringLiteral_4902/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = HorizontalQuestInformationIconListComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4902/*"Custom/SpriteWithMask_Choco"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->CHOCO_SHADER_SP, v6, v8, v9);
}


void __fastcall HorizontalQuestInformationIconListComponent___ctor(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  this->fields.displayLimitNum = 6;
  *(_QWORD *)&this->fields.questInfoFadeFrameNum = 0x4040000000000007LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  System_Collections_Generic_List_object__o *iconGroupList; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_object__o **v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Action_object__o *v18; // x22
  Il2CppObject *current; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1927F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_HorizontalQuestInformationIconDraw__TypeInfo, method);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__,
      v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__,
      v4);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___get_Current__,
      v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__, v7);
    sub_1BCAFF8(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
      v8);
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo, v9);
    byte_4B1927F = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v10 = sub_1BCB244(HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 24) = this,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)this, v13, v14),
        *(_DWORD *)(v10 + 16) = 0,
        (iconGroupList = (System_Collections_Generic_List_object__o *)this->fields.iconGroupList) == 0LL) )
  {
    sub_1BCB254(iconGroupList, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    iconGroupList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
  v15 = (System_Action_object__o **)(v10 + 32);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    if ( !v16 )
      break;
    v18 = *v15;
    current = v22.fields._current;
    if ( !*v15 )
    {
      v18 = (System_Action_object__o *)sub_1BCB244(System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
      System_Action_object____ctor(
        v18,
        (Il2CppObject *)v10,
        Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
        0LL);
      *v15 = v18;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v18, v20, v21);
    }
    if ( !current )
      sub_1BCB254(v16, v17);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)current,
      (System_Action_T__o *)v18,
      (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    ++*(_DWORD *)(v10 + 16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w22
  __int64 v11; // x23
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int64 v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4B19286 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, *(_QWORD *)&kind);
    sub_1BCAFF8(&QuestInformationListViewItem_TypeInfo, v9);
    byte_4B19286 = 1;
  }
  if ( !kind )
  {
    if ( itemCnt >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = sub_1BCB244(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_42932312((ListViewItem_o *)v11, v10, 0LL);
        *(_DWORD *)(v11 + 124) = 0;
        *(_QWORD *)(v11 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v17 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), v11, v13, v14);
        }
        if ( itemCnt == ++v10 )
          goto LABEL_14;
      }
LABEL_22:
      sub_1BCB254(itemList, v12);
    }
    itemCnt = 0;
LABEL_14:
    if ( svtCnt >= 1 )
    {
      while ( 1 )
      {
        v20 = sub_1BCB244(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_42932312((ListViewItem_o *)v20, itemCnt, 0LL);
        *(_DWORD *)(v20 + 124) = 0;
        *(_QWORD *)(v20 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        v23 = itemList->fields._items;
        v24 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v23 )
          break;
        v25 = itemList->fields._size;
        if ( (unsigned int)v25 >= v23->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v20,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &v23->obj.klass + v25;
          itemList->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)v20;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v26 + 4), v20, v21, v22);
        }
        --svtCnt;
        ++itemCnt;
        if ( !svtCnt )
          return;
      }
      goto LABEL_22;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEnemyList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
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
  QuestMaster_o *QuestEntity; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *Master_object; // x22
  Il2CppObject *v39; // x24
  __int64 *v40; // x25
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  bool HasFlag; // w28
  Il2CppObject *v44; // x27
  __int64 v45; // x8
  __int64 v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x2
  __int64 v50; // x8
  __int64 v51; // x29
  __int64 v52; // x23
  __int64 v53; // x26
  unsigned __int64 v54; // x9
  unsigned __int64 v55; // x19
  const MethodInfo *v56; // x3
  __int64 v57; // x8
  ViewEnemyEntity_o *v58; // x27
  unsigned int *v59; // x8
  CGThumbnailListItem_o *v60; // x0
  System_String_o *v61; // x0
  Il2CppObject *v62; // x27
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  ViewEnemyEntity_o *v69; // x28
  unsigned int *v70; // x28
  System_Object_array *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  System_Action_o *v74; // x21
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  System_Action_o *v77; // x21
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Action_o *v80; // x19
  __int64 v81; // x0
  HorizontalQuestInformationIconListComponent_o *v82; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v83; // [xsp+8h] [xbp-88h]
  bool v84; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v86; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v87; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B19287 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ViewEnemyMaster___, v13);
    sub_1BCAFF8(&DataManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v22);
    sub_1BCAFF8(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__, v23);
    sub_1BCAFF8(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__, v24);
    sub_1BCAFF8(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__, v25);
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo, v26);
    sub_1BCAFF8(&ViewEnemyEntity___TypeInfo, v27);
    sub_1BCAFF8(&ViewEnemyEntity_TypeInfo, v28);
    sub_1BCAFF8(&StringLiteral_12643/*"Servants/Commands/"*/, v29);
    byte_4B19287 = 1;
  }
  v86 = 0LL;
  v87 = 0LL;
  entity = 0LL;
  v30 = sub_1BCB244(HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_67;
  *(_QWORD *)(v30 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 16), (int32_t)this, v33, v34);
  *(_QWORD *)(v30 + 32) = enemies;
  v35 = (__int64 *)(v30 + 32);
  *(_DWORD *)(v30 + 24) = questId;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 32), (int32_t)enemies, v36, v37);
  if ( kind )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v39 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  v83 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v30 + 40) = 0LL;
  v40 = (__int64 *)(v30 + 40);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 40), 0, v41, v42);
  QuestEntity = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_67;
  QuestEntity = (QuestMaster_o *)QuestMaster__getQuestEntity(QuestEntity, *(_DWORD *)(v30 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_67;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v44 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v32);
    byte_4B165D1 = 1;
  }
  QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  v82 = this;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v44 )
    goto LABEL_67;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v44,
    &entity,
    (int64_t)QuestEntity[2].fields.list[1].monitor,
    *(_DWORD *)(v30 + 24),
    0LL);
  v45 = *(_QWORD *)(v30 + 32);
  if ( v45 )
  {
    v46 = sub_1BCB0A0(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v45 + 24));
    *v40 = v46;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 40), v46, v47, v48);
    v50 = *v35;
    if ( !*v35 )
      goto LABEL_67;
    v51 = 0LL;
    v52 = 8LL;
    v53 = 8LL;
    v84 = HasFlag;
    while ( 1 )
    {
      v54 = *(unsigned int *)(v50 + 24);
      v55 = v52 - 8;
      if ( v52 - 8 >= (int)v54 )
        break;
      if ( v55 >= v54 )
        goto LABEL_68;
      v56 = (const MethodInfo *)*(unsigned int *)(v50 + 4 * v52);
      if ( (int)v56 < 1 )
        goto LABEL_43;
      if ( !Master_object )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)ViewEnemyMaster__TryGetEntity(
                                       (ViewEnemyMaster_o *)Master_object,
                                       &v86,
                                       *(_DWORD *)(v30 + 24),
                                       (int32_t)v56,
                                       0LL);
      if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        goto LABEL_43;
      if ( !HasFlag )
      {
        if ( !entity )
          goto LABEL_32;
        QuestEntity = (QuestMaster_o *)entity->fields.enemyIds;
        if ( !QuestEntity || !QuestEntity->fields._MasterName_k__BackingField )
          goto LABEL_32;
        if ( !v86 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)System_Linq_Enumerable__Contains_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                                         v86->fields.enemyId,
                                         (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
LABEL_32:
          v57 = *v35;
          if ( !*v35 )
            goto LABEL_67;
          if ( v55 >= *(unsigned int *)(v57 + 24) )
            goto LABEL_68;
          *(_DWORD *)(v57 + 4 * v52) = 0;
        }
      }
      if ( !v86 || !v39 )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v39,
                                       &v87,
                                       v86->fields.svtId,
                                       (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestEntity & 1) != 0 )
      {
        QuestEntity = (QuestMaster_o *)v87;
        if ( !v87 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)v87, 0LL);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          goto LABEL_42;
        QuestEntity = (QuestMaster_o *)v86;
        if ( !v86 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ViewEnemyEntity__IsIconIdUnique(v86, 0LL);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
          if ( !v86 )
            goto LABEL_67;
          v61 = System_Int32__ToString((int)v86 + 36, 0LL);
          v62 = (Il2CppObject *)System_String__Concat_62450424((System_String_o *)StringLiteral_12643/*"Servants/Commands/"*/, v61, 0LL);
          QuestEntity = (QuestMaster_o *)v83;
          if ( !v83 )
            goto LABEL_67;
          QuestEntity = (QuestMaster_o *)System_Collections_Generic_List_object___Contains(
                                           v83,
                                           v62,
                                           (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          {
            items = v83->fields._items;
            v66 = Method_System_Collections_Generic_List_string__Add__;
            ++v83->fields._version;
            if ( !items )
              goto LABEL_67;
            size = v83->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v83,
                v62,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
            }
            else
            {
              v68 = &items->obj.klass + size;
              v83->fields._size = size + 1;
              v68[4] = (Il2CppClass *)v62;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v62, v63, v64);
            }
          }
          v69 = v86;
          v58 = (ViewEnemyEntity_o *)sub_1BCB244(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_42391340(v58, v69, 0LL);
          v86 = v58;
          if ( !v58 )
            goto LABEL_67;
          v58->fields.iconId = 0;
        }
        else
        {
LABEL_42:
          v58 = v86;
        }
        v70 = (unsigned int *)*v40;
        if ( !*v40 )
          goto LABEL_67;
        if ( v58 )
        {
          QuestEntity = (QuestMaster_o *)sub_1BCB134(v58, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
          if ( !QuestEntity )
          {
            v81 = sub_1BCB278();
            sub_1BCB120(v81, 0LL);
          }
        }
        if ( v55 >= v70[6] )
LABEL_68:
          sub_1BCB25C(QuestEntity, v32, v49);
        v60 = (CGThumbnailListItem_o *)&v70[v53];
        HasFlag = v84;
        v60->klass = (CGThumbnailListItem_c *)v58;
      }
      else
      {
LABEL_43:
        v59 = (unsigned int *)*v40;
        if ( !*v40 )
          goto LABEL_67;
        if ( v55 >= v59[6] )
          goto LABEL_68;
        LODWORD(v58) = 0;
        v60 = (CGThumbnailListItem_o *)&v59[2 * v51 + 8];
        *(_QWORD *)&v59[v53] = 0LL;
      }
      sub_1BCAF9C(v60, (int32_t)v58, v49, v56);
      v50 = *v35;
      ++v51;
      ++v52;
      v53 += 2LL;
      if ( !*v35 )
        goto LABEL_67;
    }
  }
  QuestEntity = (QuestMaster_o *)v83;
  if ( !v83 )
LABEL_67:
    sub_1BCB254(QuestEntity, v32);
  v71 = System_Collections_Generic_List_object___ToArray(
          v83,
          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_string__ToArray__);
  v82->fields.loadedAssets = (struct System_String_array *)v71;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v82->fields.loadedAssets, (int32_t)v71, v72, v73);
  v82->fields.loading = 1;
  v74 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v74,
    (Il2CppObject *)v30,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__,
    0LL);
  v82->fields.assetStoragesLoadCallback = v74;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v82->fields.assetStoragesLoadCallback, (int32_t)v74, v75, v76);
  v77 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v77,
    (Il2CppObject *)v30,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__,
    0LL);
  v82->fields.enemyAtlasLoadCallback = v77;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v82->fields.enemyAtlasLoadCallback, (int32_t)v77, v78, v79);
  v80 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v80,
    (Il2CppObject *)v30,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v80, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEnemyList_35706116(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w22
  ViewEnemyEntity_o *v12; // x24
  QuestInformationListViewItem_o *v13; // x0
  const MethodInfo *v14; // x4
  Il2CppObject *v15; // x23
  int32_t v16; // w1
  ViewEnemyEntity_o *v17; // x2
  bool v18; // w3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v24; // x8

  v7 = this;
  if ( (byte_4B19288 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, *(_QWORD *)&questId);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1BCAFF8(&QuestInformationListViewItem_TypeInfo, v8);
    byte_4B19288 = 1;
  }
  if ( v7->fields.loading )
  {
    v7->fields.loading = 0;
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
            goto LABEL_23;
          if ( !veEnts )
            goto LABEL_22;
          if ( v10 >= veEnts->max_length )
LABEL_23:
            sub_1BCB25C(this, *(_QWORD *)&questId, enemies);
          v12 = veEnts->m_Items[v10];
          if ( enemies->m_Items[v10 + 1] <= 0 )
            break;
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_1BCB244(QuestInformationListViewItem_TypeInfo);
            v15 = (Il2CppObject *)v13;
            v16 = v11;
            v17 = v12;
            v18 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v10 >= (int)v9 )
            return;
        }
        v13 = (QuestInformationListViewItem_o *)sub_1BCB244(QuestInformationListViewItem_TypeInfo);
        v15 = (Il2CppObject *)v13;
        v18 = 1;
        v16 = v11;
        v17 = v12;
LABEL_14:
        QuestInformationListViewItem___ctor_35706516(v13, v16, v17, v18, v14);
        this = (HorizontalQuestInformationIconListComponent_o *)v7->fields.itemList;
        if ( !this
          || (v21 = *(_QWORD *)&this->fields.m_CachedPtr,
              v22 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v21) )
        {
LABEL_22:
          sub_1BCB254(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v15,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v24 + 32) = v15;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v15, v19, v20);
        }
        LODWORD(v9) = enemies->max_length;
        ++v11;
        goto LABEL_20;
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent__CreateIconGroupList(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x21
  __int64 v37; // x1
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *itemList; // x8
  UILabel_o *infoLabel; // x20
  int32_t iconType; // w19
  System_String_o **v41; // x8
  __int64 gameObject; // x0
  bool v43; // w1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *v46; // x22
  HorizontalQuestInformationIconListComponent___c_c *v47; // x0
  System_Func_T1__T2__TResult__o *_9__19_0; // x23
  Il2CppObject *v49; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x20
  System_Func_object__int__o *v54; // x22
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v55; // x0
  HorizontalQuestInformationIconListComponent___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x22
  System_Func_object__object__o *_9__19_2; // x23
  Il2CppObject *v59; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x26
  System_Collections_Generic_List_object__o *v64; // x20
  UnityEngine_GameObject_o *iconGrid; // x27
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int v68; // w29
  char v69; // w8
  System_Collections_Generic_List_object__o *iconDrawList; // x25
  UnityEngine_Transform_o *parent; // x20
  __int64 v72; // x1
  System_Collections_IEnumerator_o *Enumerator; // x26
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v75; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v78; // x8
  __int64 v79; // x9
  System_Collections_IEnumerator_c **v80; // x10
  __int64 v81; // x0
  UnityEngine_Component_o *v82; // x0
  __int64 v83; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *v85; // x0
  __int64 v86; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  Il2CppObject *v90; // x1
  struct System_Object_array *items; // x8
  _QWORD *v92; // x9
  __int64 size; // x10
  Il2CppClass **v94; // x0
  __int64 v95; // x8
  __int64 v96; // x26
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  System_Collections_Generic_List_object__o *v104; // x19
  System_Collections_Generic_IEnumerable_TSource__c *v105; // x8
  __int64 v106; // x9
  int32_t *v107; // x10
  __int64 v108; // x0
  __int64 v109; // x1
  int32_t v110; // w26
  Il2CppObject *v111; // x23
  HorizontalQuestInformationIconDraw_o *v112; // x25
  __int64 v113; // x8
  __int64 v114; // x9
  int *v115; // x10
  __int64 v116; // x0
  __int64 v117; // x8
  __int64 v118; // x9
  int *v119; // x10
  __int64 v120; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x0
  System_Collections_Generic_List_TSource__o *v122; // x0
  __int64 v123; // x1
  System_Collections_Generic_List_object__o *v124; // x27
  int32_t v125; // w24
  Il2CppObject *Item; // x0
  __int64 v127; // x1
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  System_Collections_Generic_List_object__o *v130; // x26
  int32_t v131; // w28
  Il2CppObject *v132; // x29
  HorizontalQuestInformationIconDraw_o *v133; // x20
  Il2CppObject *v134; // x0
  const MethodInfo *v135; // x4
  const MethodInfo *v136; // x4
  Il2CppObject *v137; // x29
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  Il2CppClass **v141; // x0
  __int64 v142; // x8
  __int64 v143; // x9
  int *v144; // x10
  __int64 v145; // x20
  __int64 v146; // x0
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  __int64 v149; // x0
  __int64 v150; // x20
  __int64 v151; // x8
  __int64 v152; // x9
  int *v153; // x10
  __int64 v154; // x0
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o **p_iconGroupList; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_object__o *v156; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v157; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_IEnumerable_TSource__o *v158; // [xsp+20h] [xbp-70h]
  __int64 v159; // [xsp+20h] [xbp-70h]
  HorizontalQuestInformationIconListComponent_o *iconListComponent; // [xsp+28h] [xbp-68h]

  if ( (byte_4B1927E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____, method);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_GroupBy___f__AnonymousType6_QuestInformationListViewItem__int___int___,
      v3);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____,
      v4);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType6_QuestInformationListViewItem__int____,
      v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___, v6);
    sub_1BCAFF8(&System_Func___f__AnonymousType6_QuestInformationListViewItem__int___int__TypeInfo, v7);
    sub_1BCAFF8(
      &System_Func_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo,
      v8);
    sub_1BCAFF8(
      &System_Func_QuestInformationListViewItem__int____f__AnonymousType6_QuestInformationListViewItem__int___TypeInfo,
      v9);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___, v10);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Count__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo, v23);
    sub_1BCAFF8(&System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo, v24);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v25);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v26);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v27);
    sub_1BCAFF8(&UnityEngine_Transform_TypeInfo, v28);
    sub_1BCAFF8(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__, v29);
    sub_1BCAFF8(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__, v30);
    sub_1BCAFF8(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
      v31);
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo, v32);
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v33);
    sub_1BCAFF8(&StringLiteral_8612/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/, v34);
    sub_1BCAFF8(&StringLiteral_8613/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/, v35);
    byte_4B1927E = 1;
  }
  v36 = sub_1BCB244(HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size >= 1 )
  {
    infoLabel = this->fields.infoLabel;
    iconType = this->fields.iconType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = (System_String_o **)&StringLiteral_8613/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/;
    if ( iconType )
      v41 = (System_String_o **)&StringLiteral_8612/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/;
    gameObject = (__int64)LocalizationManager__Get(*v41, 0LL);
    if ( !infoLabel )
      goto LABEL_139;
    UILabel__set_text(infoLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_139;
    v43 = 1;
  }
  else
  {
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_139;
    v43 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v43, 0LL);
  this->fields.iconGroupList = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.iconGroupList, 0, v44, v45);
  if ( !v36 )
    goto LABEL_139;
  p_iconGroupList = &this->fields.iconGroupList;
  *(_DWORD *)(v36 + 16) = this->fields.displayLimitNum;
  v46 = this->fields.itemList;
  v47 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v47 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T1__T2__TResult__o *)v47->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v47->static_fields->__9;
    _9__19_0 = (System_Func_T1__T2__TResult__o *)sub_1BCB244(System_Func_QuestInformationListViewItem__int____f__AnonymousType6_QuestInformationListViewItem__int___TypeInfo);
    System_Func_object__int__object____ctor(
      _9__19_0,
      v49,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_QuestInformationListViewItem__int____f__AnonymousType6_QuestInformationListViewItem__int___o *)_9__19_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__50655936(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                               (System_Func_TSource__int__TResult__o *)_9__19_0,
                                                               (const MethodInfo_304F2C0 *)Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType6_QuestInformationListViewItem__int____);
  v54 = (System_Func_object__int__o *)sub_1BCB244(System_Func___f__AnonymousType6_QuestInformationListViewItem__int___int__TypeInfo);
  System_Func_object__int____ctor(
    v54,
    (Il2CppObject *)v36,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
    0LL);
  v55 = System_Linq_Enumerable__GroupBy_object__int_(
          v53,
          (System_Func_TSource__TKey__o *)v54,
          (const MethodInfo_3040EA4 *)Method_System_Linq_Enumerable_GroupBy___f__AnonymousType6_QuestInformationListViewItem__int___int___);
  v56 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v56 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_2 = (System_Func_object__object__o *)v56->static_fields->__9__19_2;
  if ( !_9__19_2 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v59 = (Il2CppObject *)v56->static_fields->__9;
    _9__19_2 = (System_Func_object__object__o *)sub_1BCB244(System_Func_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    System_Func_object__object____ctor(
      _9__19_2,
      v59,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__,
      0LL);
    v60 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v60->__9__19_2 = (struct System_Func_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___o *)_9__19_2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v60->__9__19_2, (int32_t)_9__19_2, v61, v62);
  }
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v57,
                                                               (System_Func_TSource__TResult__o *)_9__19_2,
                                                               (const MethodInfo_304EFCC *)Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
  v64 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  iconGrid = this->fields.iconGrid;
  iconListComponent = this;
  if ( !iconGrid )
    goto LABEL_139;
  UnityEngine_GameObject__SetActive(iconGrid, 1, 0LL);
  gameObject = System_Linq_Enumerable__Count_object_(
                 v63,
                 (const MethodInfo_3036E54 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
  v157 = v64;
  if ( (int)gameObject >= 1 )
  {
    v68 = 0;
    v69 = 1;
    v156 = (System_Collections_Generic_List_object__o *)iconGrid;
    v158 = v63;
    do
    {
      if ( (v69 & 1) != 0 )
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)this->fields.iconDrawList;
      }
      else
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          iconDrawList,
          (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
        gameObject = (__int64)UnityEngine_GameObject__get_transform(iconGrid, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (__int64)UnityEngine_Object__Instantiate_object__51002592(
                                (Il2CppObject *)iconGrid,
                                parent,
                                (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
        if ( !gameObject )
          goto LABEL_139;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !Enumerator )
          sub_1BCB254(0LL, v72);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v75 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v75;
              p_offset += 4;
              if ( !v75 )
                goto LABEL_44;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_44:
            p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v78 = Enumerator->klass;
          v79 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v80 = (System_Collections_IEnumerator_c **)&v78->_1.interfaceOffsets->offset;
            while ( *(v80 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v79;
              v80 += 2;
              if ( !v79 )
                goto LABEL_51;
            }
            v81 = (__int64)&v78->vtable[*(_DWORD *)v80 + 1].method;
          }
          else
          {
LABEL_51:
            v81 = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v82 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v81)(
                                             Enumerator,
                                             *(_QWORD *)(v81 + 8));
          if ( !v82 )
            sub_1BCB254(0LL, v83);
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v82->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (UnityEngine_Transform_c *)v82->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
          {
            sub_1BCB514(v82);
            v149 = sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
            v150 = v149;
            if ( v149 )
            {
              v151 = *(_QWORD *)v149;
              v152 = *(unsigned __int16 *)(*(_QWORD *)v149 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v149 + 302LL) )
              {
                v153 = (int *)(*(_QWORD *)(v151 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v153 - 1) != System_IDisposable_TypeInfo )
                {
                  --v152;
                  v153 += 4;
                  if ( !v152 )
                    goto LABEL_150;
                }
                v154 = v151 + 16LL * *v153 + 312;
              }
              else
              {
LABEL_150:
                v154 = sub_1C1B560(v149, System_IDisposable_TypeInfo, 0LL);
              }
              (*(void (__fastcall **)(__int64, _QWORD))v154)(v150, *(_QWORD *)(v154 + 8));
            }
            sub_1BCB24C(iconGrid);
          }
          v85 = UnityEngine_Component__get_gameObject(v82, 0LL);
          if ( !v85 )
            sub_1BCB254(0LL, v86);
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         v85,
                                         (const MethodInfo_306E974 *)Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
          v90 = ComponentInChildren_object;
          if ( !iconDrawList )
            sub_1BCB254(ComponentInChildren_object, ComponentInChildren_object);
          items = iconDrawList->fields._items;
          v92 = Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__;
          ++iconDrawList->fields._version;
          if ( !items )
            sub_1BCB254(ComponentInChildren_object, ComponentInChildren_object);
          size = iconDrawList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              iconDrawList,
              ComponentInChildren_object,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v94 = &items->obj.klass + size;
            iconDrawList->fields._size = size + 1;
            v94[4] = (Il2CppClass *)v90;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v94 + 4), (int32_t)v90, v88, v89);
          }
        }
        gameObject = sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
        if ( gameObject )
        {
          v95 = *(_QWORD *)gameObject;
          v96 = gameObject;
          v97 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
          if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
          {
            v98 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
            {
              --v97;
              v98 += 4;
              if ( !v97 )
                goto LABEL_67;
            }
            v99 = v95 + 16LL * *v98 + 312;
          }
          else
          {
LABEL_67:
            v99 = sub_1C1B560(gameObject, System_IDisposable_TypeInfo, 0LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v96, *(_QWORD *)(v99 + 8));
        }
        v64 = v157;
        v63 = v158;
        iconGrid = (UnityEngine_GameObject_o *)v156;
      }
      if ( !v64 )
        goto LABEL_139;
      v100 = v64->fields._items;
      v101 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
      ++v64->fields._version;
      if ( !v100 )
        goto LABEL_139;
      v102 = v64->fields._size;
      if ( (unsigned int)v102 >= v100->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v64,
          (Il2CppObject *)iconDrawList,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
      }
      else
      {
        v103 = &v100->obj.klass + v102;
        v64->fields._size = v102 + 1;
        v103[4] = (Il2CppClass *)iconDrawList;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v103 + 4), (int32_t)iconDrawList, v66, v67);
      }
      ++v68;
      gameObject = System_Linq_Enumerable__Count_object_(
                     v63,
                     (const MethodInfo_3036E54 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
      v69 = 0;
    }
    while ( v68 < (int)gameObject );
  }
  v104 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v104,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  if ( !v63 )
LABEL_139:
    sub_1BCB254(gameObject, v37);
  v105 = v63->klass;
  v106 = *(unsigned __int16 *)(&v63->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v63->klass->_2.bitflags2 + 3) )
  {
    v107 = &v105->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___c **)v107 - 1) != System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo )
    {
      --v106;
      v107 += 4;
      if ( !v106 )
        goto LABEL_89;
    }
    v108 = (__int64)&v105->vtable[*v107].method;
  }
  else
  {
LABEL_89:
    v108 = sub_1C1B560(
             v63,
             System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo,
             0LL);
  }
  v159 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v108)(
           v63,
           *(_QWORD *)(v108 + 8));
  if ( !v159 )
    sub_1BCB254(0LL, v109);
  v110 = 0;
  v111 = 0LL;
  v112 = 0LL;
  while ( 1 )
  {
    v113 = *(_QWORD *)v159;
    v114 = *(unsigned __int16 *)(*(_QWORD *)v159 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v159 + 302LL) )
    {
      v115 = (int *)(*(_QWORD *)(v113 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v115 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v114;
        v115 += 4;
        if ( !v114 )
          goto LABEL_97;
      }
      v116 = v113 + 16LL * *v115 + 312;
    }
    else
    {
LABEL_97:
      v116 = sub_1C1B560(v159, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v116)(v159, *(_QWORD *)(v116 + 8)) & 1) == 0 )
      break;
    v117 = *(_QWORD *)v159;
    v118 = *(unsigned __int16 *)(*(_QWORD *)v159 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v159 + 302LL) )
    {
      v119 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___c **)v119 - 1) != System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo )
      {
        --v118;
        v119 += 4;
        if ( !v118 )
          goto LABEL_104;
      }
      v120 = v117 + 16LL * *v119 + 312;
    }
    else
    {
LABEL_104:
      v120 = sub_1C1B560(
               v159,
               System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo,
               0LL);
    }
    v121 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v120)(
                                                                  v159,
                                                                  *(_QWORD *)(v120 + 8));
    v122 = System_Linq_Enumerable__ToList_object_(
             v121,
             (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    if ( !v64 )
      sub_1BCB254(v122, v123);
    v124 = (System_Collections_Generic_List_object__o *)v122;
    v125 = v110;
    Item = System_Collections_Generic_List_object___get_Item(
             v64,
             v110,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    v130 = (System_Collections_Generic_List_object__o *)Item;
    if ( Item && *(int *)(v36 + 16) >= 1 )
    {
      if ( !v124 )
        sub_1BCB254(Item, v127);
      v131 = 0;
      do
      {
        if ( v124->fields._size <= v131 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v130,
                   v131,
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v137 = Item;
          if ( !Item )
            Item = v111;
          if ( v137 )
          {
            if ( !Item )
              sub_1BCB254(0LL, v127);
            HorizontalQuestInformationIconDraw__SetItem(
              (HorizontalQuestInformationIconDraw_o *)Item,
              0LL,
              0,
              iconListComponent,
              v136);
            v111 = v137;
          }
        }
        else
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v130,
                   v131,
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v132 = Item;
          if ( Item )
            v133 = (HorizontalQuestInformationIconDraw_o *)Item;
          else
            v133 = v112;
          if ( Item )
          {
            v134 = System_Collections_Generic_List_object___get_Item(
                     v124,
                     v131,
                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
            if ( !v133 )
              sub_1BCB254(v134, v134);
            HorizontalQuestInformationIconDraw__SetItem(
              v133,
              (QuestInformationListViewItem_o *)v134,
              2,
              iconListComponent,
              v135);
            v112 = (HorizontalQuestInformationIconDraw_o *)v132;
          }
        }
        ++v131;
      }
      while ( v131 < *(_DWORD *)(v36 + 16) );
    }
    if ( !v104 )
      sub_1BCB254(Item, v127);
    v138 = v104->fields._items;
    v139 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
    ++v104->fields._version;
    if ( !v138 )
      sub_1BCB254(Item, v127);
    v140 = v104->fields._size;
    if ( (unsigned int)v140 >= v138->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v104,
        (Il2CppObject *)v130,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
    }
    else
    {
      v141 = &v138->obj.klass + v140;
      v104->fields._size = v140 + 1;
      v141[4] = (Il2CppClass *)v130;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v141 + 4), (int32_t)v130, v128, v129);
    }
    v64 = v157;
    v110 = v125 + 1;
  }
  v142 = *(_QWORD *)v159;
  v143 = *(unsigned __int16 *)(*(_QWORD *)v159 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v159 + 302LL) )
  {
    v144 = (int *)(*(_QWORD *)(v142 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v144 - 1) != System_IDisposable_TypeInfo )
    {
      --v143;
      v144 += 4;
      if ( !v143 )
        goto LABEL_134;
    }
    v145 = v159;
    v146 = v142 + 16LL * *v144 + 312;
  }
  else
  {
LABEL_134:
    v145 = v159;
    v146 = sub_1C1B560(v159, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v146)(v145, *(_QWORD *)(v146 + 8));
  iconListComponent->fields.iconGroupList = (struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *)v104;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_iconGroupList, (int32_t)v104, v147, v148);
  iconListComponent->fields.isNeedInit = 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardItemList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w29
  __int64 v11; // x22
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_4B19284 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, items);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1BCAFF8(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4B19284 = 1;
  }
  if ( items )
  {
    v8 = *(_QWORD *)&items->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      do
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1BCB25C(this, items, *(_QWORD *)&sum);
        v10 = items->m_Items[v9 + 1];
        v11 = sub_1BCB244(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_42932312((ListViewItem_o *)v11, v4 + v9, 0LL);
        *(_QWORD *)(v11 + 112) = 0x200000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v16 = itemList->fields._items,
              v17 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !v16) )
        {
          sub_1BCB254(itemList, v12);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v16->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &v16->obj.klass + size;
          itemList->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), v11, v13, v14);
        }
        LODWORD(v8) = items->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      v4 += v9;
    }
  }
  return v4;
}


void __fastcall HorizontalQuestInformationIconListComponent__CreateRewardList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        System_Int32_array *items,
        System_Int32_array *svts,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v7; // x0
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x3
  int32_t RewardSvtList; // w0
  const MethodInfo *v11; // x3
  int32_t RewardItemList; // w0
  const MethodInfo *v13; // x3
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  System_Int32_array *qps; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *withoutQP; // [xsp+10h] [xbp-30h] BYREF
  System_Int32_array *combineMaterials; // [xsp+18h] [xbp-28h] BYREF
  System_Int32_array *withoutCM; // [xsp+28h] [xbp-18h] BYREF

  withoutQP = 0LL;
  combineMaterials = 0LL;
  qps = 0LL;
  if ( !kind )
  {
    HorizontalQuestInformationIconListComponent__SplitSvtsWithCombineMaterial(
      this,
      svts,
      &withoutCM,
      &combineMaterials,
      method);
    HorizontalQuestInformationIconListComponent__SplitItemsWithQP(v7, items, &withoutQP, &qps, v8);
    RewardSvtList = HorizontalQuestInformationIconListComponent__CreateRewardSvtList(this, withoutCM, 0, v9);
    RewardItemList = HorizontalQuestInformationIconListComponent__CreateRewardItemList(
                       this,
                       withoutQP,
                       RewardSvtList,
                       v11);
    v14 = HorizontalQuestInformationIconListComponent__CreateRewardSvtList(this, combineMaterials, RewardItemList, v13);
    HorizontalQuestInformationIconListComponent__CreateRewardItemList(this, qps, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardSvtList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w29
  __int64 v11; // x22
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_4B19285 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, svts);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1BCAFF8(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4B19285 = 1;
  }
  if ( svts )
  {
    v8 = *(_QWORD *)&svts->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      do
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1BCB25C(this, svts, *(_QWORD *)&sum);
        v10 = svts->m_Items[v9 + 1];
        v11 = sub_1BCB244(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_42932312((ListViewItem_o *)v11, v4 + v9, 0LL);
        *(_QWORD *)(v11 + 112) = 0x100000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v17 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1BCB254(itemList, v12);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), v11, v13, v14);
        }
        LODWORD(v8) = svts->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      v4 += v9;
    }
  }
  return v4;
}


void __fastcall HorizontalQuestInformationIconListComponent__DeleteCallback(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.assetStoragesLoadCallback = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetStoragesLoadCallback, 0, v2, v3);
  this->fields.enemyAtlasLoadCallback = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.enemyAtlasLoadCallback, 0, v5, v6);
}


void __fastcall HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questInfoRoot; // x0

  questInfoRoot = this->fields.questInfoRoot;
  if ( !questInfoRoot )
    sub_1BCB254(0LL, method);
  UnityEngine_GameObject__SetActive(questInfoRoot, 0, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent__InitQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AlphaTransitionCalculator_o *questInfoPanel; // x0
  const MethodInfo *v6; // x1
  float v7; // s8
  TitleInfoControl_c *v8; // x0
  System_Func_float__float__float__float__o *v9; // x21
  AlphaTransitionCalculator_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x8

  if ( (byte_4B19280 & 1) == 0 )
  {
    sub_1BCAFF8(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__, v3);
    sub_1BCAFF8(&TitleInfoControl_TypeInfo, v4);
    byte_4B19280 = 1;
  }
  questInfoPanel = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
  this->fields.mstQuestInfoIconUpdateTimer = 0.0;
  if ( !questInfoPanel )
    goto LABEL_14;
  ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))questInfoPanel->klass[1]._1.castClass)(
    questInfoPanel,
    questInfoPanel->klass[1]._1.declaringType,
    1.0);
  if ( this->fields.questInfoAlphaCalculator )
    goto LABEL_9;
  v7 = ChangedFPSUtil__CovertFrameNumToSecond(this->fields.questInfoFadeFrameNum, 0LL);
  v8 = TitleInfoControl_TypeInfo;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v8 = TitleInfoControl_TypeInfo;
  }
  v9 = ExtraEasing__AsymptoticSeriesFloat(
         v8->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
         (float)this->fields.questInfoFadeFrameNum,
         0LL);
  v10 = (AlphaTransitionCalculator_o *)sub_1BCB244(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v10, v7, v9, 0LL);
  this->fields.questInfoAlphaCalculator = v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.questInfoAlphaCalculator, (int32_t)v10, v11, v12);
  questInfoPanel = this->fields.questInfoAlphaCalculator;
  if ( !questInfoPanel )
LABEL_14:
    sub_1BCB254(questInfoPanel, method);
  AlphaTransitionCalculator__MakeFadeInFinished(questInfoPanel, 0LL);
LABEL_9:
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( iconGroupList->fields._size < 1 )
    {
      HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(this, v6);
    }
    else
    {
      this->fields.currentInformationIndex = 0;
      HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v6);
    }
  }
}


UnityEngine_Material_o *__fastcall HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
        HorizontalQuestInformationIconListComponent_o *this,
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
  HorizontalQuestInformationIconListComponent_c *v16; // x0
  UnityEngine_Shader_o *v17; // x21
  UnityEngine_Material_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1

  if ( (byte_4B1928A & 1) == 0 )
  {
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Material_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1BCAFF8(&StringLiteral_16018/*"_ChocoTex"*/, v6);
    sub_1BCAFF8(&StringLiteral_12723/*"Shaders/ChocoMap"*/, v7);
    byte_4B1928A = 1;
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
                 (System_String_o *)StringLiteral_12723/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_30B37E0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1BCAF9C(p_mChocoTex, (int32_t)object, v14, v15);
    }
    v16 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v16 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v17 = UnityEngine_Shader__Find(v16->static_fields->CHOCO_SHADER_SP, 0LL);
    v18 = (UnityEngine_Material_o *)sub_1BCB244(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v18, v17, 0LL);
    p_mChocoMaterialSp->klass = (CGThumbnailListItem_c *)v18;
    sub_1BCAF9C(p_mChocoMaterialSp, (int32_t)v18, v19, v20);
    if ( !p_mChocoMaterialSp->klass )
      sub_1BCB254(0LL, v21);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16018/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
        HorizontalQuestInformationIconListComponent_o *this,
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
  HorizontalQuestInformationIconListComponent_c *v16; // x0
  UnityEngine_Shader_o *v17; // x21
  UnityEngine_Material_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1

  if ( (byte_4B19289 & 1) == 0 )
  {
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Material_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1BCAFF8(&StringLiteral_16018/*"_ChocoTex"*/, v6);
    sub_1BCAFF8(&StringLiteral_12723/*"Shaders/ChocoMap"*/, v7);
    byte_4B19289 = 1;
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
                 (System_String_o *)StringLiteral_12723/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_30B37E0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1BCAF9C(p_mChocoTex, (int32_t)object, v14, v15);
    }
    v16 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v16 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v17 = UnityEngine_Shader__Find(v16->static_fields->CHOCO_SHADER_TX, 0LL);
    v18 = (UnityEngine_Material_o *)sub_1BCB244(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v18, v17, 0LL);
    p_mChocoMaterialTx->klass = (CGThumbnailListItem_c *)v18;
    sub_1BCAF9C(p_mChocoMaterialTx, (int32_t)v18, v19, v20);
    if ( !p_mChocoMaterialTx->klass )
      sub_1BCB254(0LL, v21);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16018/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall HorizontalQuestInformationIconListComponent__Setup(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  int32_t iconType; // w8
  ViewEnemyMaster_o *Master_object; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v25; // x4
  const MethodInfo *v26; // x1
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  HorizontalQuestInformationIconListComponent___c_c *v29; // x0
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v31; // x23
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Int32_array *v36; // x0
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x4
  Il2CppObject *v40; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1927D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestInfoMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ViewEnemyMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1BCAFF8(&System_Func_ViewEnemyEntity__int__TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BCAFF8(&Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__, v16);
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v17);
    byte_4B1927D = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  this->fields.isNeedInit = 0;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_QuestInformationListViewItem__o *)v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v18, v19, v20);
  iconType = this->fields.iconType;
  if ( iconType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
    if ( !Master_object )
      goto LABEL_39;
    EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(Master_object, questId, 0LL);
    if ( EntityListFromQuestId )
    {
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
      if ( *(_QWORD *)&EntityListFromQuestId->max_length )
      {
        v29 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
          v29 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        }
        _9__18_0 = (System_Func_object__int__o *)v29->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v29->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v29);
            v29 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
          }
          v31 = (Il2CppObject *)v29->static_fields->__9;
          _9__18_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_ViewEnemyEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__18_0,
            v31,
            Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__,
            0LL);
          static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__18_0;
          sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v33, v34);
        }
        v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v28,
                                                                     (System_Func_TSource__TResult__o *)_9__18_0,
                                                                     (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
        v36 = System_Linq_Enumerable__ToArray_int_(
                v35,
                (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
        HorizontalQuestInformationIconListComponent__CreateEnemyList(this, 0, questId, v36, v37);
        return 1;
      }
    }
  }
  else if ( !iconType )
  {
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v21);
      byte_4B165D1 = 1;
    }
    Master_object = (ViewEnemyMaster_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (ViewEnemyMaster_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)UserQuestInfoMaster__TryGetEntity(
                                           (UserQuestInfoMaster_o *)MasterData_object,
                                           &entity,
                                           (int64_t)Master_object[2].fields.list[1].monitor,
                                           questId,
                                           0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        HorizontalQuestInformationIconListComponent__CreateRewardList(
          this,
          0,
          entity->fields.dropItemIds,
          entity->fields.dropSvtIds,
          v25);
LABEL_33:
        HorizontalQuestInformationIconListComponent__CreateIconGroupList(this, v26);
        return 1;
      }
      goto LABEL_39;
    }
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &v40,
                                           questId,
                                           (const MethodInfo_32C7E4C *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v40 )
      {
        HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
          this,
          0,
          (int32_t)v40[1].monitor,
          HIDWORD(v40[1].klass),
          v38);
        goto LABEL_33;
      }
LABEL_39:
      sub_1BCB254(Master_object, v21);
    }
  }
  Master_object = (ViewEnemyMaster_o *)this->fields.infoLabel;
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (ViewEnemyMaster_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0LL);
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  return 0;
}


void __fastcall HorizontalQuestInformationIconListComponent__SplitItemsWithQP(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *itms,
        System_Int32_array **withoutQP,
        System_Int32_array **qps,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x23
  System_Collections_Generic_List_int__o *v14; // x22
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x8
  ItemMaster_o *v19; // x24
  unsigned __int64 v20; // x25
  int32_t *v21; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  char *v25; // x8
  struct System_Int32_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  char *v32; // x8
  __int64 v33; // x8
  System_Collections_Generic_List_int__o *v34; // x0
  const MethodInfo_369CBAC *v35; // x2
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  System_Int32_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Int32_array *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3

  if ( (byte_4B19283 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, itms);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B19283 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  v18 = *(_QWORD *)&itms->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (ItemMaster_o *)Instance;
    v20 = 0LL;
    v21 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
LABEL_43:
        sub_1BCB25C(Instance, v16, v17);
      v16 = (unsigned int)v21[v20];
      if ( !(_DWORD)v16 )
        break;
      if ( (_DWORD)v16 == -1 )
      {
        if ( !v14 )
          goto LABEL_42;
        items = v14->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v33 = v23[4];
          v34 = v14;
          goto LABEL_28;
        }
        v25 = (char *)items + 4 * size;
        v14->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v25 + 8) = 0;
        goto LABEL_38;
      }
      if ( !v19 )
        goto LABEL_42;
      Instance = (Il2CppObject *)ItemMaster__isQP(v19, v16, 0LL);
      if ( v20 >= itms->max_length )
        goto LABEL_43;
      v16 = (unsigned int)v21[v20];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_42;
        v29 = v14->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !v29 )
          goto LABEL_42;
        v31 = v14->fields._size;
        if ( (unsigned int)v31 >= v29->max_length )
        {
          v39 = v30[4];
          v34 = v14;
LABEL_36:
          v35 = *(const MethodInfo_369CBAC **)(*(_QWORD *)(v39 + 192) + 112LL);
          goto LABEL_37;
        }
        v32 = (char *)v29 + 4 * v31;
        v14->fields._size = v31 + 1;
      }
      else
      {
        if ( !v13 )
          goto LABEL_42;
        v36 = v13->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !v36 )
          goto LABEL_42;
        v38 = v13->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          v39 = v37[4];
          v34 = v13;
          goto LABEL_36;
        }
        v32 = (char *)v36 + 4 * v38;
        v13->fields._size = v38 + 1;
      }
      *((_DWORD *)v32 + 8) = v16;
LABEL_38:
      LODWORD(v18) = itms->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_39;
    }
    if ( !v13 )
      goto LABEL_42;
    v26 = v13->fields._items;
    v27 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v26 )
      goto LABEL_42;
    v28 = v13->fields._size;
    if ( (unsigned int)v28 >= v26->max_length )
    {
      v33 = v27[4];
      v34 = v13;
LABEL_28:
      v35 = *(const MethodInfo_369CBAC **)(*(_QWORD *)(v33 + 192) + 112LL);
      LODWORD(v16) = 0;
LABEL_37:
      System_Collections_Generic_List_int___AddWithResize(v34, v16, v35);
      goto LABEL_38;
    }
    v25 = (char *)v26 + 4 * v28;
    v13->fields._size = v28 + 1;
    goto LABEL_18;
  }
LABEL_39:
  if ( !v13
    || (v40 = System_Collections_Generic_List_int___ToArray(
                v13,
                (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v40,
        sub_1BCAF9C((CGThumbnailListItem_o *)withoutQP, (int32_t)v40, v41, v42),
        !v14) )
  {
LABEL_42:
    sub_1BCB254(Instance, v16);
  }
  v43 = System_Collections_Generic_List_int___ToArray(
          v14,
          (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v43;
  sub_1BCAF9C((CGThumbnailListItem_o *)qps, (int32_t)v43, v44, v45);
}


void __fastcall HorizontalQuestInformationIconListComponent__SplitSvtsWithCombineMaterial(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x23
  System_Collections_Generic_List_int__o *v15; // x22
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x24
  unsigned __int64 v21; // x25
  int32_t *v22; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  char *v26; // x8
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  char *v33; // x8
  struct System_Int32_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  System_Collections_Generic_List_int__o *v38; // x0
  const MethodInfo_369CBAC *v39; // x2
  __int64 v40; // x8
  System_Int32_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B19282 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, svts);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B19282 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  v19 = *(_QWORD *)&svts->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v21 = 0LL;
    v22 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
LABEL_46:
        sub_1BCB25C(Instance, v17, v18);
      v18 = (unsigned int)v22[v21];
      if ( !(_DWORD)v18 )
        break;
      if ( (_DWORD)v18 == -1 )
      {
        if ( !v15 )
          goto LABEL_45;
        items = v15->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v37 = v24[4];
          v38 = v15;
LABEL_36:
          v39 = *(const MethodInfo_369CBAC **)(*(_QWORD *)(v37 + 192) + 112LL);
          LODWORD(v17) = 0;
          goto LABEL_40;
        }
        v26 = (char *)items + 4 * size;
        v15->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v26 + 8) = 0;
        goto LABEL_41;
      }
      if ( !v20 )
        goto LABEL_45;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v20,
                                   &entity,
                                   v18,
                                   (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v21 >= svts->max_length )
          goto LABEL_46;
        if ( !v15 )
          goto LABEL_45;
        v17 = (unsigned int)v22[v21];
        v30 = v15->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !v30 )
          goto LABEL_45;
        v32 = v15->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          v40 = v31[4];
          v38 = v15;
LABEL_39:
          v39 = *(const MethodInfo_369CBAC **)(*(_QWORD *)(v40 + 192) + 112LL);
LABEL_40:
          System_Collections_Generic_List_int___AddWithResize(v38, v17, v39);
          goto LABEL_41;
        }
        v33 = (char *)v30 + 4 * v32;
        v15->fields._size = v32 + 1;
      }
      else
      {
LABEL_28:
        if ( v21 >= svts->max_length )
          goto LABEL_46;
        if ( !v14 )
          goto LABEL_45;
        v17 = (unsigned int)v22[v21];
        v34 = v14->fields._items;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !v34 )
          goto LABEL_45;
        v36 = v14->fields._size;
        if ( (unsigned int)v36 >= v34->max_length )
        {
          v40 = v35[4];
          v38 = v14;
          goto LABEL_39;
        }
        v33 = (char *)v34 + 4 * v36;
        v14->fields._size = v36 + 1;
      }
      *((_DWORD *)v33 + 8) = v17;
LABEL_41:
      LODWORD(v19) = svts->max_length;
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_42;
    }
    if ( !v14 )
      goto LABEL_45;
    v27 = v14->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v14->fields._version;
    if ( !v27 )
      goto LABEL_45;
    v29 = v14->fields._size;
    if ( (unsigned int)v29 >= v27->max_length )
    {
      v37 = v28[4];
      v38 = v14;
      goto LABEL_36;
    }
    v26 = (char *)v27 + 4 * v29;
    v14->fields._size = v29 + 1;
    goto LABEL_18;
  }
LABEL_42:
  if ( !v14
    || (v41 = System_Collections_Generic_List_int___ToArray(
                v14,
                (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v41,
        sub_1BCAF9C((CGThumbnailListItem_o *)withoutCM, (int32_t)v41, v42, v43),
        !v15) )
  {
LABEL_45:
    sub_1BCB254(Instance, v17);
  }
  v44 = System_Collections_Generic_List_int___ToArray(
          v15,
          (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v44;
  sub_1BCAF9C((CGThumbnailListItem_o *)combineMaterials, (int32_t)v44, v45, v46);
}


void __fastcall HorizontalQuestInformationIconListComponent__Update(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isNeedInit )
  {
    HorizontalQuestInformationIconListComponent__InitQuestInfoLb(this, method);
    this->fields.isNeedInit = 0;
  }
  if ( this->fields.iconGroupList )
    HorizontalQuestInformationIconListComponent__UpdateQuestInfoLb(this, method);
}


void __fastcall HorizontalQuestInformationIconListComponent__UpdateQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x0
  TransitionCalculator_float__o *questInfoAlphaCalculator; // x0
  AlphaTransitionCalculator_o *Instance; // x0
  const MethodInfo *v10; // x1
  float mstQuestInfoIconUpdateTimer; // s8
  float deltaTime; // s0
  float questInfoChangeInterval; // s1
  float v14; // s0
  int32_t currentInformationIndex; // w20
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *v16; // x8
  struct AlphaTransitionCalculator_o *v17; // x8

  if ( (byte_4B19281 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_TransitionCalculator_float__Update__, v5);
    sub_1BCAFF8(&Method_TransitionCalculator_float__get_Current__, v6);
    byte_4B19281 = 1;
  }
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)iconGroupList,
           (const MethodInfo_3036E54 *)Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____) >= 2 )
    {
      questInfoAlphaCalculator = (TransitionCalculator_float__o *)this->fields.questInfoAlphaCalculator;
      if ( questInfoAlphaCalculator )
      {
        TransitionCalculator_float___Update(
          questInfoAlphaCalculator,
          (const MethodInfo_39719C4 *)Method_TransitionCalculator_float__Update__);
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_20;
        if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0LL) )
        {
          mstQuestInfoIconUpdateTimer = this->fields.mstQuestInfoIconUpdateTimer;
          deltaTime = UnityEngine_Time__get_deltaTime(0LL);
          questInfoChangeInterval = this->fields.questInfoChangeInterval;
          v14 = mstQuestInfoIconUpdateTimer + deltaTime;
          this->fields.mstQuestInfoIconUpdateTimer = v14;
          if ( v14 >= questInfoChangeInterval )
          {
            Instance = this->fields.questInfoAlphaCalculator;
            this->fields.mstQuestInfoIconUpdateTimer = 0.0;
            if ( !Instance )
              goto LABEL_20;
            AlphaTransitionCalculator__StartFadeOut(Instance, 0LL);
          }
        }
        Instance = this->fields.questInfoAlphaCalculator;
        if ( Instance )
        {
          Instance = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(Instance, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = this->fields.questInfoAlphaCalculator;
            if ( !Instance )
              goto LABEL_20;
            currentInformationIndex = this->fields.currentInformationIndex;
            AlphaTransitionCalculator__StartFadeIn(Instance, 0LL);
            v16 = this->fields.iconGroupList;
            if ( !v16 )
              goto LABEL_20;
            this->fields.currentInformationIndex = (currentInformationIndex + 1) % v16->fields._size;
            HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v10);
          }
          v17 = this->fields.questInfoAlphaCalculator;
          if ( v17 )
          {
            Instance = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
            if ( Instance )
            {
              ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.castClass)(
                Instance,
                Instance->klass[1]._1.declaringType,
                v17->fields._Current_k__BackingField);
              return;
            }
          }
        }
LABEL_20:
        sub_1BCB254(Instance, v10);
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1928C & 1) == 0 )
  {
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v1);
    byte_4B1928C = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(HorizontalQuestInformationIconListComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields->__9 = (struct HorizontalQuestInformationIconListComponent___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall HorizontalQuestInformationIconListComponent___c___ctor(
        HorizontalQuestInformationIconListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


__f__AnonymousType6_QuestInformationListViewItem__int__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        QuestInformationListViewItem_o *v,
        int32_t i,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __f__AnonymousType6__v_j__TPar___i_j__TPar__o *v7; // x21

  if ( (byte_4B1928D & 1) == 0 )
  {
    sub_1BCAFF8(&Method___f__AnonymousType6_QuestInformationListViewItem__int___ctor__, v);
    sub_1BCAFF8(&_f__AnonymousType6_QuestInformationListViewItem__int__TypeInfo, v6);
    byte_4B1928D = 1;
  }
  v7 = (__f__AnonymousType6__v_j__TPar___i_j__TPar__o *)sub_1BCB244(_f__AnonymousType6_QuestInformationListViewItem__int__TypeInfo);
  _f__AnonymousType6_object__int____ctor(
    v7,
    (Il2CppObject *)v,
    i,
    (const MethodInfo_31F5B3C *)Method___f__AnonymousType6_QuestInformationListViewItem__int___ctor__);
  return (__f__AnonymousType6_QuestInformationListViewItem__int__o *)v7;
}


System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_2(
        HorizontalQuestInformationIconListComponent___c_o *this,
        System_Linq_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int___o *g,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  HorizontalQuestInformationIconListComponent___c_c *v7; // x0
  System_Func_object__object__o *_9__19_3; // x20
  Il2CppObject *v9; // x21
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B1928E & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem___,
      g);
    sub_1BCAFF8(
      &System_Func___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo,
      v4);
    sub_1BCAFF8(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__, v5);
    sub_1BCAFF8(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v6);
    byte_4B1928E = 1;
  }
  v7 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v7 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_3 = (System_Func_object__object__o *)v7->static_fields->__9__19_3;
  if ( !_9__19_3 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__19_3 = (System_Func_object__object__o *)sub_1BCB244(System_Func___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__19_3,
      v9,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_3 = (struct System_Func___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem__o *)_9__19_3;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__19_3, (int32_t)_9__19_3, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                                     (System_Func_TSource__TResult__o *)_9__19_3,
                                                                                     (const MethodInfo_304EFCC *)Method_System_Linq_Enumerable_Select___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem___);
}


QuestInformationListViewItem_o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_3(
        HorizontalQuestInformationIconListComponent___c_o *this,
        __f__AnonymousType6_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_4B1928F & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c_o *)sub_1BCAFF8(
                                                                  &Method___f__AnonymousType6_QuestInformationListViewItem__int__get_v__,
                                                                  x);
    byte_4B1928F = 1;
  }
  if ( !x )
    sub_1BCB254(this, x);
  return x->fields._v_i__Field;
}


int32_t __fastcall HorizontalQuestInformationIconListComponent___c___Setup_b__18_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1BCB254(this, 0LL);
  return value->fields.enemyId;
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___CreateIconGroupList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *this,
        __f__AnonymousType6_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B19290 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_1BCAFF8(
                                                                                    &Method___f__AnonymousType6_QuestInformationListViewItem__int__get_i__,
                                                                                    x);
    byte_4B19290 = 1;
  }
  if ( !x )
    sub_1BCB254(this, x);
  return x->fields._i_i__Field / v4->fields.chunkSize;
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ChangeViewQuestInfoLb_b__0(
        HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *this,
        HorizontalQuestInformationIconDraw_o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *v3; // x19
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)x,
                                                                                        0LL),
        (_4__this = v3->fields.__4__this) == 0LL)
    || !this )
  {
    sub_1BCB254(this, x);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    v3->fields.index == _4__this->fields.currentInformationIndex,
    0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__0(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *v2; // x19
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x20
  const MethodInfo *v4; // x4

  v2 = this;
  if ( (byte_4B19291 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1BCAFF8(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    method);
    byte_4B19291 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  if ( _4__this->fields.enemyAtlasLoadCallback && _4__this->fields.assetStoragesLoadCallback )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)_4__this, 0LL, 0LL) )
    {
      this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v2->fields.__4__this;
      if ( this )
      {
        HorizontalQuestInformationIconListComponent__CreateEnemyList_35706116(
          (HorizontalQuestInformationIconListComponent_o *)this,
          (int32_t)method,
          v2->fields.enemies,
          v2->fields.veEnts,
          v4);
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v2->fields.__4__this;
        if ( this )
        {
          HorizontalQuestInformationIconListComponent__CreateIconGroupList(
            (HorizontalQuestInformationIconListComponent_o *)this,
            method);
          return;
        }
      }
LABEL_13:
      sub_1BCB254(this, method);
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x19
  Il2CppObject *assetStoragesLoadCallback; // x21
  System_Action_o *v8; // x20

  v2 = this;
  if ( (byte_4B19292 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call__, method);
    sub_1BCAFF8(&System_Action_TypeInfo, v3);
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1BCAFF8(
                                                                                    &AssetManager_TypeInfo,
                                                                                    v4);
    byte_4B19292 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  assetStoragesLoadCallback = (Il2CppObject *)_4__this->fields.assetStoragesLoadCallback;
  v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v8, assetStoragesLoadCallback, Method_ActionExtensions_Call__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39729272(loadedAssets, v8, 1, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__2(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(this, method);
  ActionExtensions__Call(_4__this->fields.enemyAtlasLoadCallback, 0LL);
}