void HorizontalQuestInformationIconListComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct HorizontalQuestInformationIconListComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3FCF4 & 1) == 0 )
  {
    sub_1C37058(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_1C37058(&StringLiteral_15134/*"Unlit/Transparent Colored_Choco"*/);
    sub_1C37058(&StringLiteral_4941/*"Custom/SpriteWithMask_Choco"*/);
    byte_4C3FCF4 = 1;
  }
  HorizontalQuestInformationIconListComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15134/*"Unlit/Transparent Colored_Choco"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)HorizontalQuestInformationIconListComponent_TypeInfo->static_fields,
    StringLiteral_15134/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2);
  v3 = StringLiteral_4941/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = HorizontalQuestInformationIconListComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4941/*"Custom/SpriteWithMask_Choco"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->CHOCO_SHADER_SP, v3, v5, v6);
}


void HorizontalQuestInformationIconListComponent___ctor(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  this->fields.displayLimitNum = 6;
  *(_QWORD *)&this->fields.questInfoFadeFrameNum = 0x4040000000000007LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Generic_List_object__o *iconGroupList; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Action_object__o **v7; // x20
  _BOOL8 v8; // x0
  System_Action_object__o *v9; // x22
  Il2CppObject *current; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3FCE8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
    sub_1C37058(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__);
    sub_1C37058(&HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
    byte_4C3FCE8 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v3 = sub_1C372A4(HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3
    || (*(_QWORD *)(v3 + 24) = this,
        sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6),
        *(_DWORD *)(v3 + 16) = 0,
        (iconGroupList = (System_Collections_Generic_List_object__o *)this->fields.iconGroupList) == 0) )
  {
    sub_1C372B4(iconGroupList);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    iconGroupList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
  v7 = (System_Action_object__o **)(v3 + 32);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    if ( !v8 )
      break;
    v9 = *v7;
    current = v13.fields._current;
    if ( !*v7 )
    {
      v9 = (System_Action_object__o *)sub_1C372A4(System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
      System_Action_object____ctor(
        v9,
        (Il2CppObject *)v3,
        Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
        0);
      *v7 = v9;
      sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v9, v11, v12);
    }
    if ( !current )
      sub_1C372B4(v8);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)current,
      (System_Action_T__o *)v9,
      (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    ++*(_DWORD *)(v3 + 16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
}


void HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  int32_t v9; // w22
  __int64 v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  __int64 v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4C3FCEF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    sub_1C37058(&QuestInformationListViewItem_TypeInfo);
    byte_4C3FCEF = 1;
  }
  if ( !kind )
  {
    if ( itemCnt >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = sub_1C372A4(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_43804668((ListViewItem_o *)v10, v9, 0);
        *(_DWORD *)(v10 + 132) = 0;
        *(_QWORD *)(v10 + 120) = 0;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v15 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v10;
          sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), v10, v11, v12);
        }
        if ( itemCnt == ++v9 )
          goto LABEL_14;
      }
LABEL_22:
      sub_1C372B4(itemList);
    }
    itemCnt = 0;
LABEL_14:
    if ( svtCnt >= 1 )
    {
      while ( 1 )
      {
        v18 = sub_1C372A4(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_43804668((ListViewItem_o *)v18, itemCnt, 0);
        *(_DWORD *)(v18 + 132) = 0;
        *(_QWORD *)(v18 + 120) = 0;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        v21 = itemList->fields._items;
        v22 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v21 )
          break;
        v23 = itemList->fields._size;
        if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v18,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &v21->obj.klass + v23;
          itemList->fields._size = v23 + 1;
          v24[4] = (Il2CppClass *)v18;
          sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), v18, v19, v20);
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


void HorizontalQuestInformationIconListComponent__CreateEnemyList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
  __int64 v9; // x20
  QuestMaster_o *QuestEntity; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Master_object; // x22
  Il2CppObject *v17; // x24
  __int64 *v18; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool HasFlag; // w28
  Il2CppObject *v22; // x27
  __int64 v23; // x8
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  __int64 v28; // x8
  __int64 v29; // x29
  __int64 v30; // x23
  __int64 v31; // x26
  unsigned __int64 v32; // x9
  unsigned __int64 v33; // x19
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  ViewEnemyEntity_o *v36; // x27
  unsigned int *v37; // x8
  CGThumbnailListItem_o *v38; // x0
  System_String_o *v39; // x0
  Il2CppObject *v40; // x27
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  ViewEnemyEntity_o *v47; // x28
  unsigned int *v48; // x28
  System_Object_array *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Action_o *v52; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Action_o *v55; // x21
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Action_o *v58; // x19
  __int64 v59; // x0
  HorizontalQuestInformationIconListComponent_o *v60; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v61; // [xsp+8h] [xbp-88h]
  bool v62; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v64; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v65; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C3FCF0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__);
    sub_1C37058(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__);
    sub_1C37058(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__);
    sub_1C37058(&HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
    sub_1C37058(&ViewEnemyEntity___TypeInfo);
    sub_1C37058(&ViewEnemyEntity_TypeInfo);
    sub_1C37058(&StringLiteral_12757/*"Servants/Commands/"*/);
    byte_4C3FCF0 = 1;
  }
  v64 = 0;
  v65 = 0;
  entity = 0;
  v9 = sub_1C372A4(HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_67;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 32) = enemies;
  v13 = (__int64 *)(v9 + 32);
  *(_DWORD *)(v9 + 24) = questId;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)enemies, v14, v15);
  if ( kind )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  v61 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 40) = 0;
  v18 = (__int64 *)(v9 + 40);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), 0, v19, v20);
  QuestEntity = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_67;
  QuestEntity = (QuestMaster_o *)QuestMaster__getQuestEntity(QuestEntity, *(_DWORD *)(v9 + 24), 0);
  if ( !QuestEntity )
    goto LABEL_67;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v22 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  v60 = this;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_67;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v22,
    &entity,
    (int64_t)QuestEntity[2].fields.list[1].monitor,
    *(_DWORD *)(v9 + 24),
    0);
  v23 = *(_QWORD *)(v9 + 32);
  if ( v23 )
  {
    v24 = sub_1C37100(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v23 + 24));
    *v18 = v24;
    sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), v24, v25, v26);
    v28 = *v13;
    if ( !*v13 )
      goto LABEL_67;
    v29 = 0;
    v30 = 8;
    v31 = 8;
    v62 = HasFlag;
    while ( 1 )
    {
      v32 = *(unsigned int *)(v28 + 24);
      v33 = v30 - 8;
      if ( v30 - 8 >= (int)v32 )
        break;
      if ( v33 >= v32 )
        goto LABEL_68;
      v34 = (const MethodInfo *)*(unsigned int *)(v28 + 4 * v30);
      if ( (int)v34 < 1 )
        goto LABEL_43;
      if ( !Master_object )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)ViewEnemyMaster__TryGetEntity(
                                       (ViewEnemyMaster_o *)Master_object,
                                       &v64,
                                       *(_DWORD *)(v9 + 24),
                                       (int32_t)v34,
                                       0);
      if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        goto LABEL_43;
      if ( !HasFlag )
      {
        if ( !entity )
          goto LABEL_32;
        QuestEntity = (QuestMaster_o *)entity->fields.enemyIds;
        if ( !QuestEntity || !QuestEntity->fields._MasterName_k__BackingField )
          goto LABEL_32;
        if ( !v64 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)System_Linq_Enumerable__Contains_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                                         v64->fields.enemyId,
                                         (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
LABEL_32:
          v35 = *v13;
          if ( !*v13 )
            goto LABEL_67;
          if ( v33 >= *(unsigned int *)(v35 + 24) )
            goto LABEL_68;
          *(_DWORD *)(v35 + 4 * v30) = 0;
        }
      }
      if ( !v64 || !v17 )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                       &v65,
                                       v64->fields.svtId,
                                       (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestEntity & 1) != 0 )
      {
        QuestEntity = (QuestMaster_o *)v65;
        if ( !v65 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)v65, 0);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          goto LABEL_42;
        QuestEntity = (QuestMaster_o *)v64;
        if ( !v64 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ViewEnemyEntity__IsIconIdUnique(v64, 0);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
          if ( !v64 )
            goto LABEL_67;
          v39 = System_Int32__ToString((int)v64 + 36, 0);
          v40 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_12757/*"Servants/Commands/"*/, v39, 0);
          QuestEntity = (QuestMaster_o *)v61;
          if ( !v61 )
            goto LABEL_67;
          QuestEntity = (QuestMaster_o *)System_Collections_Generic_List_object___Contains(
                                           v61,
                                           v40,
                                           (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          {
            items = v61->fields._items;
            v44 = Method_System_Collections_Generic_List_string__Add__;
            ++v61->fields._version;
            if ( !items )
              goto LABEL_67;
            size = v61->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v61,
                v40,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &items->obj.klass + size;
              v61->fields._size = size + 1;
              v46[4] = (Il2CppClass *)v40;
              sub_1C36FFC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
            }
          }
          v47 = v64;
          v36 = (ViewEnemyEntity_o *)sub_1C372A4(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_43257464(v36, v47, 0);
          v64 = v36;
          if ( !v36 )
            goto LABEL_67;
          v36->fields.iconId = 0;
        }
        else
        {
LABEL_42:
          v36 = v64;
        }
        v48 = (unsigned int *)*v18;
        if ( !*v18 )
          goto LABEL_67;
        if ( v36 )
        {
          QuestEntity = (QuestMaster_o *)sub_1C37194(v36, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
          if ( !QuestEntity )
          {
            v59 = sub_1C372D8();
            sub_1C37180(v59, 0);
          }
        }
        if ( v33 >= v48[6] )
LABEL_68:
          sub_1C372BC(QuestEntity);
        v38 = (CGThumbnailListItem_o *)&v48[v31];
        HasFlag = v62;
        v38->klass = (CGThumbnailListItem_c *)v36;
      }
      else
      {
LABEL_43:
        v37 = (unsigned int *)*v18;
        if ( !*v18 )
          goto LABEL_67;
        if ( v33 >= v37[6] )
          goto LABEL_68;
        LODWORD(v36) = 0;
        v38 = (CGThumbnailListItem_o *)&v37[2 * v29 + 8];
        *(_QWORD *)&v37[v31] = 0;
      }
      sub_1C36FFC(v38, (int32_t)v36, v27, v34);
      v28 = *v13;
      ++v29;
      ++v30;
      v31 += 2;
      if ( !*v13 )
        goto LABEL_67;
    }
  }
  QuestEntity = (QuestMaster_o *)v61;
  if ( !v61 )
LABEL_67:
    sub_1C372B4(QuestEntity);
  v49 = System_Collections_Generic_List_object___ToArray(
          v61,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
  v60->fields.loadedAssets = (struct System_String_array *)v49;
  sub_1C36FFC((CGThumbnailListItem_o *)&v60->fields.loadedAssets, (int32_t)v49, v50, v51);
  v60->fields.loading = 1;
  v52 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__,
    0);
  v60->fields.assetStoragesLoadCallback = v52;
  sub_1C36FFC((CGThumbnailListItem_o *)&v60->fields.assetStoragesLoadCallback, (int32_t)v52, v53, v54);
  v55 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__,
    0);
  v60->fields.enemyAtlasLoadCallback = v55;
  sub_1C36FFC((CGThumbnailListItem_o *)&v60->fields.enemyAtlasLoadCallback, (int32_t)v55, v56, v57);
  v58 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v58, 0);
}


void HorizontalQuestInformationIconListComponent__CreateEnemyList_36546888(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v7; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x25
  int32_t v10; // w22
  ViewEnemyEntity_o *v11; // x24
  QuestInformationListViewItem_o *v12; // x0
  const MethodInfo *v13; // x4
  Il2CppObject *v14; // x23
  int32_t v15; // w1
  ViewEnemyEntity_o *v16; // x2
  bool v17; // w3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v23; // x8

  v7 = this;
  if ( (byte_4C3FCF1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1C37058(&QuestInformationListViewItem_TypeInfo);
    byte_4C3FCF1 = 1;
  }
  if ( v7->fields.loading )
  {
    v7->fields.loading = 0;
    if ( enemies )
    {
      max_length = enemies->max_length;
      if ( (int)max_length >= 1 )
      {
        v9 = 0;
        v10 = 0;
        while ( 1 )
        {
          if ( v9 >= (unsigned int)max_length )
            goto LABEL_23;
          if ( !veEnts )
            goto LABEL_22;
          if ( v9 >= LODWORD(veEnts->max_length) )
LABEL_23:
            sub_1C372BC(this);
          v11 = veEnts->m_Items[v9];
          if ( enemies->m_Items[v9] <= 0 )
            break;
          if ( v11 )
          {
            v12 = (QuestInformationListViewItem_o *)sub_1C372A4(QuestInformationListViewItem_TypeInfo);
            v14 = (Il2CppObject *)v12;
            v15 = v10;
            v16 = v11;
            v17 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v9 >= (int)max_length )
            return;
        }
        v12 = (QuestInformationListViewItem_o *)sub_1C372A4(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v12;
        v17 = 1;
        v15 = v10;
        v16 = v11;
LABEL_14:
        QuestInformationListViewItem___ctor_36547288(v12, v15, v16, v17, v13);
        this = (HorizontalQuestInformationIconListComponent_o *)v7->fields.itemList;
        if ( !this
          || (m_CachedPtr = this->fields.m_CachedPtr,
              v21 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !m_CachedPtr) )
        {
LABEL_22:
          sub_1C372B4(this);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v14,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v14;
          sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v14, v18, v19);
        }
        LODWORD(max_length) = enemies->max_length;
        ++v10;
        goto LABEL_20;
      }
    }
  }
}


void HorizontalQuestInformationIconListComponent__CreateIconGroupList(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *itemList; // x8
  UILabel_o *infoLabel; // x20
  int32_t iconType; // w19
  System_String_o **v7; // x8
  __int64 gameObject; // x0
  bool v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *v12; // x22
  HorizontalQuestInformationIconListComponent___c_c *v13; // x0
  System_Func_T1__T2__TResult__o *_9__19_0; // x23
  Il2CppObject *v15; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_object__int__o *v20; // x22
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v21; // x0
  HorizontalQuestInformationIconListComponent___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x22
  System_Func_object__object__o *_9__19_2; // x23
  Il2CppObject *v25; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x26
  System_Collections_Generic_List_object__o *v30; // x20
  UnityEngine_GameObject_o *iconGrid; // x27
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int v34; // w29
  char v35; // w8
  System_Collections_Generic_List_object__o *iconDrawList; // x25
  UnityEngine_Transform_o *parent; // x20
  System_Collections_IEnumerator_o *Enumerator; // x26
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  System_Collections_IEnumerator_c *v43; // x8
  __int64 v44; // x9
  System_Collections_IEnumerator_c **v45; // x10
  __int64 v46; // x0
  UnityEngine_Component_o *v47; // x0
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v49; // x0
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x1
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  __int64 v58; // x8
  __int64 v59; // x26
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  System_Collections_Generic_List_object__o *v67; // x19
  System_Collections_Generic_IEnumerable_TSource__c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  int32_t v72; // w26
  Il2CppObject *v73; // x23
  HorizontalQuestInformationIconDraw_o *v74; // x25
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_List_TSource__o *v84; // x0
  System_Collections_Generic_List_object__o *v85; // x27
  int32_t v86; // w24
  Il2CppObject *Item; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  System_Collections_Generic_List_object__o *v90; // x26
  int32_t v91; // w28
  Il2CppObject *v92; // x29
  HorizontalQuestInformationIconDraw_o *v93; // x20
  Il2CppObject *v94; // x0
  const MethodInfo *v95; // x4
  const MethodInfo *v96; // x4
  Il2CppObject *v97; // x29
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  __int64 v102; // x8
  __int64 v103; // x9
  int *v104; // x10
  __int64 v105; // x20
  __int64 v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  __int64 v109; // x0
  __int64 v110; // x20
  __int64 v111; // x8
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o **p_iconGroupList; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_object__o *v116; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v117; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_IEnumerable_TSource__o *v118; // [xsp+20h] [xbp-70h]
  __int64 v119; // [xsp+20h] [xbp-70h]
  HorizontalQuestInformationIconListComponent_o *iconListComponent; // [xsp+28h] [xbp-68h]

  if ( (byte_4C3FCE7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
    sub_1C37058(&Method_System_Linq_Enumerable_GroupBy___f__AnonymousType7_QuestInformationListViewItem__int___int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType7_QuestInformationListViewItem__int____);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    sub_1C37058(&System_Func_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_1C37058(&System_Func___f__AnonymousType7_QuestInformationListViewItem__int___int__TypeInfo);
    sub_1C37058(&System_Func_QuestInformationListViewItem__int____f__AnonymousType7_QuestInformationListViewItem__int___TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    sub_1C37058(&System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Transform_TypeInfo);
    sub_1C37058(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__);
    sub_1C37058(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__);
    sub_1C37058(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__);
    sub_1C37058(&HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
    sub_1C37058(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_8683/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/);
    sub_1C37058(&StringLiteral_8684/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/);
    byte_4C3FCE7 = 1;
  }
  v3 = sub_1C372A4(HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size >= 1 )
  {
    infoLabel = this->fields.infoLabel;
    iconType = this->fields.iconType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = (System_String_o **)&StringLiteral_8684/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/;
    if ( iconType )
      v7 = (System_String_o **)&StringLiteral_8683/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/;
    gameObject = (__int64)LocalizationManager__Get(*v7, 0);
    if ( !infoLabel )
      goto LABEL_139;
    UILabel__set_text(infoLabel, (System_String_o *)gameObject, 0);
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_139;
    v9 = 1;
  }
  else
  {
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_139;
    v9 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9, 0);
  this->fields.iconGroupList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.iconGroupList, 0, v10, v11);
  if ( !v3 )
    goto LABEL_139;
  p_iconGroupList = &this->fields.iconGroupList;
  *(_DWORD *)(v3 + 16) = this->fields.displayLimitNum;
  v12 = this->fields.itemList;
  v13 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v13 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T1__T2__TResult__o *)v13->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__19_0 = (System_Func_T1__T2__TResult__o *)sub_1C372A4(System_Func_QuestInformationListViewItem__int____f__AnonymousType7_QuestInformationListViewItem__int___TypeInfo);
    System_Func_object__int__object____ctor(
      _9__19_0,
      v15,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__,
      0);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_QuestInformationListViewItem__int____f__AnonymousType7_QuestInformationListViewItem__int___o *)_9__19_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__51504664(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                               (System_Func_TSource__int__TResult__o *)_9__19_0,
                                                               (const MethodInfo_311E618 *)Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType7_QuestInformationListViewItem__int____);
  v20 = (System_Func_object__int__o *)sub_1C372A4(System_Func___f__AnonymousType7_QuestInformationListViewItem__int___int__TypeInfo);
  System_Func_object__int____ctor(
    v20,
    (Il2CppObject *)v3,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
    0);
  v21 = System_Linq_Enumerable__GroupBy_object__int_(
          v19,
          (System_Func_TSource__TKey__o *)v20,
          (const MethodInfo_3112030 *)Method_System_Linq_Enumerable_GroupBy___f__AnonymousType7_QuestInformationListViewItem__int___int___);
  v22 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v22 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_2 = (System_Func_object__object__o *)v22->static_fields->__9__19_2;
  if ( !_9__19_2 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__19_2 = (System_Func_object__object__o *)sub_1C372A4(System_Func_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    System_Func_object__object____ctor(
      _9__19_2,
      v25,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__,
      0);
    v26 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v26->__9__19_2 = (struct System_Func_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___o *)_9__19_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v26->__9__19_2, (int32_t)_9__19_2, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v23,
                                                               (System_Func_TSource__TResult__o *)_9__19_2,
                                                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  iconGrid = this->fields.iconGrid;
  iconListComponent = this;
  if ( !iconGrid )
    goto LABEL_139;
  UnityEngine_GameObject__SetActive(iconGrid, 1, 0);
  gameObject = System_Linq_Enumerable__Count_object_(
                 v29,
                 (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
  v117 = v30;
  if ( (int)gameObject >= 1 )
  {
    v34 = 0;
    v35 = 1;
    v116 = (System_Collections_Generic_List_object__o *)iconGrid;
    v118 = v29;
    do
    {
      if ( (v35 & 1) != 0 )
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)this->fields.iconDrawList;
      }
      else
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          iconDrawList,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
        gameObject = (__int64)UnityEngine_GameObject__get_transform(iconGrid, 0);
        if ( !gameObject )
          goto LABEL_139;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (__int64)UnityEngine_Object__Instantiate_object__51855596(
                                (Il2CppObject *)iconGrid,
                                parent,
                                (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
        if ( !gameObject )
          goto LABEL_139;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_139;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)gameObject, 0);
        if ( !Enumerator )
          sub_1C372B4(0);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v40 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v40;
              p_offset += 4;
              if ( !v40 )
                goto LABEL_44;
            }
            v42 = (__int64)&klass->vtable[*p_offset];
          }
          else
          {
LABEL_44:
            v42 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v42)(
                  Enumerator,
                  *(_QWORD *)(v42 + 8))
              & 1) == 0 )
            break;
          v43 = Enumerator->klass;
          v44 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            v45 = (System_Collections_IEnumerator_c **)&v43->_1.interfaceOffsets->offset;
            while ( *(v45 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v44;
              v45 += 2;
              if ( !v44 )
                goto LABEL_51;
            }
            v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 1];
          }
          else
          {
LABEL_51:
            v46 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v47 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v46)(
                                             Enumerator,
                                             *(_QWORD *)(v46 + 8));
          if ( !v47 )
            sub_1C372B4(0);
          naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
          if ( v47->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (UnityEngine_Transform_c *)v47->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
          {
            sub_1C37574(v47);
            v109 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
            v110 = v109;
            if ( v109 )
            {
              v111 = *(_QWORD *)v109;
              v112 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
              {
                v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
                {
                  --v112;
                  v113 += 4;
                  if ( !v112 )
                    goto LABEL_150;
                }
                v114 = v111 + 16LL * *v113 + 312;
              }
              else
              {
LABEL_150:
                v114 = sub_1C87870(v109, System_IDisposable_TypeInfo, 0);
              }
              (*(void (__fastcall **)(__int64, _QWORD))v114)(v110, *(_QWORD *)(v114 + 8));
            }
            sub_1C372AC(iconGrid);
          }
          v49 = UnityEngine_Component__get_gameObject(v47, 0);
          if ( !v49 )
            sub_1C372B4(0);
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         v49,
                                         (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
          v53 = ComponentInChildren_object;
          if ( !iconDrawList )
            sub_1C372B4(ComponentInChildren_object);
          items = iconDrawList->fields._items;
          v55 = Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__;
          ++iconDrawList->fields._version;
          if ( !items )
            sub_1C372B4(ComponentInChildren_object);
          size = iconDrawList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              iconDrawList,
              ComponentInChildren_object,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &items->obj.klass + size;
            iconDrawList->fields._size = size + 1;
            v57[4] = (Il2CppClass *)v53;
            sub_1C36FFC((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v53, v51, v52);
          }
        }
        gameObject = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
        if ( gameObject )
        {
          v58 = *(_QWORD *)gameObject;
          v59 = gameObject;
          v60 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
          if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
          {
            v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
            {
              --v60;
              v61 += 4;
              if ( !v60 )
                goto LABEL_67;
            }
            v62 = v58 + 16LL * *v61 + 312;
          }
          else
          {
LABEL_67:
            v62 = sub_1C87870(gameObject, System_IDisposable_TypeInfo, 0);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
        }
        v30 = v117;
        v29 = v118;
        iconGrid = (UnityEngine_GameObject_o *)v116;
      }
      if ( !v30 )
        goto LABEL_139;
      v63 = v30->fields._items;
      v64 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
      ++v30->fields._version;
      if ( !v63 )
        goto LABEL_139;
      v65 = v30->fields._size;
      if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)iconDrawList,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = &v63->obj.klass + v65;
        v30->fields._size = v65 + 1;
        v66[4] = (Il2CppClass *)iconDrawList;
        sub_1C36FFC((CGThumbnailListItem_o *)(v66 + 4), (int32_t)iconDrawList, v32, v33);
      }
      ++v34;
      gameObject = System_Linq_Enumerable__Count_object_(
                     v29,
                     (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
      v35 = 0;
    }
    while ( v34 < (int)gameObject );
  }
  v67 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  if ( !v29 )
LABEL_139:
    sub_1C372B4(gameObject);
  v68 = v29->klass;
  v69 = *(unsigned __int16 *)&v29->klass->_2.rank;
  if ( *(_WORD *)&v29->klass->_2.rank )
  {
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___c **)v70 - 1) != System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_89;
    }
    v71 = (__int64)&v68->vtable[*v70];
  }
  else
  {
LABEL_89:
    v71 = sub_1C87870(
            v29,
            System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo,
            0);
  }
  v119 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v71)(
           v29,
           *(_QWORD *)(v71 + 8));
  if ( !v119 )
    sub_1C372B4(0);
  v72 = 0;
  v73 = 0;
  v74 = 0;
  while ( 1 )
  {
    v75 = *(_QWORD *)v119;
    v76 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
    {
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_97;
      }
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_97:
      v78 = sub_1C87870(v119, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v119, *(_QWORD *)(v78 + 8)) & 1) == 0 )
      break;
    v79 = *(_QWORD *)v119;
    v80 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
    {
      v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___c **)v81 - 1) != System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo )
      {
        --v80;
        v81 += 4;
        if ( !v80 )
          goto LABEL_104;
      }
      v82 = v79 + 16LL * *v81 + 312;
    }
    else
    {
LABEL_104:
      v82 = sub_1C87870(
              v119,
              System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo,
              0);
    }
    v83 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v82)(
                                                                 v119,
                                                                 *(_QWORD *)(v82 + 8));
    v84 = System_Linq_Enumerable__ToList_object_(
            v83,
            (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    if ( !v30 )
      sub_1C372B4(v84);
    v85 = (System_Collections_Generic_List_object__o *)v84;
    v86 = v72;
    Item = System_Collections_Generic_List_object___get_Item(
             v30,
             v72,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    v90 = (System_Collections_Generic_List_object__o *)Item;
    if ( Item && *(int *)(v3 + 16) >= 1 )
    {
      if ( !v85 )
        sub_1C372B4(Item);
      v91 = 0;
      do
      {
        if ( v85->fields._size <= v91 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v90,
                   v91,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v97 = Item;
          if ( !Item )
            Item = v73;
          if ( v97 )
          {
            if ( !Item )
              sub_1C372B4(0);
            HorizontalQuestInformationIconDraw__SetItem(
              (HorizontalQuestInformationIconDraw_o *)Item,
              0,
              0,
              iconListComponent,
              v96);
            v73 = v97;
          }
        }
        else
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v90,
                   v91,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v92 = Item;
          if ( Item )
            v93 = (HorizontalQuestInformationIconDraw_o *)Item;
          else
            v93 = v74;
          if ( Item )
          {
            v94 = System_Collections_Generic_List_object___get_Item(
                    v85,
                    v91,
                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
            if ( !v93 )
              sub_1C372B4(v94);
            HorizontalQuestInformationIconDraw__SetItem(
              v93,
              (QuestInformationListViewItem_o *)v94,
              2,
              iconListComponent,
              v95);
            v74 = (HorizontalQuestInformationIconDraw_o *)v92;
          }
        }
        ++v91;
      }
      while ( v91 < *(_DWORD *)(v3 + 16) );
    }
    if ( !v67 )
      sub_1C372B4(Item);
    v98 = v67->fields._items;
    v99 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
    ++v67->fields._version;
    if ( !v98 )
      sub_1C372B4(Item);
    v100 = v67->fields._size;
    if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v67,
        (Il2CppObject *)v90,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    }
    else
    {
      v101 = &v98->obj.klass + v100;
      v67->fields._size = v100 + 1;
      v101[4] = (Il2CppClass *)v90;
      sub_1C36FFC((CGThumbnailListItem_o *)(v101 + 4), (int32_t)v90, v88, v89);
    }
    v30 = v117;
    v72 = v86 + 1;
  }
  v102 = *(_QWORD *)v119;
  v103 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
  {
    v104 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
    {
      --v103;
      v104 += 4;
      if ( !v103 )
        goto LABEL_134;
    }
    v105 = v119;
    v106 = v102 + 16LL * *v104 + 312;
  }
  else
  {
LABEL_134:
    v105 = v119;
    v106 = sub_1C87870(v119, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v106)(v105, *(_QWORD *)(v106 + 8));
  iconListComponent->fields.iconGroupList = (struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *)v67;
  sub_1C36FFC((CGThumbnailListItem_o *)p_iconGroupList, (int32_t)v67, v107, v108);
  iconListComponent->fields.isNeedInit = 1;
}


int32_t HorizontalQuestInformationIconListComponent__CreateRewardItemList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x24
  int32_t v9; // w29
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  v6 = this;
  if ( (byte_4C3FCED & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1C37058(&QuestInformationListViewItem_TypeInfo);
    byte_4C3FCED = 1;
  }
  if ( items )
  {
    max_length = items->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C372BC(this);
        v9 = items->m_Items[v8];
        v10 = sub_1C372A4(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_43804668((ListViewItem_o *)v10, sum + v8, 0);
        *(_QWORD *)(v10 + 120) = 0x200000000LL;
        *(_DWORD *)(v10 + 132) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 124) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v14 = itemList->fields._items,
              v15 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !v14) )
        {
          sub_1C372B4(itemList);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(v14->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &v14->obj.klass + size;
          itemList->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v10;
          sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), v10, v11, v12);
        }
        LODWORD(max_length) = items->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)max_length );
      sum += v8;
    }
  }
  return sum;
}


void HorizontalQuestInformationIconListComponent__CreateRewardList(
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

  withoutQP = 0;
  combineMaterials = 0;
  qps = 0;
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


int32_t HorizontalQuestInformationIconListComponent__CreateRewardSvtList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x24
  int32_t v9; // w29
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  v6 = this;
  if ( (byte_4C3FCEE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1C37058(&QuestInformationListViewItem_TypeInfo);
    byte_4C3FCEE = 1;
  }
  if ( svts )
  {
    max_length = svts->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C372BC(this);
        v9 = svts->m_Items[v8];
        v10 = sub_1C372A4(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_43804668((ListViewItem_o *)v10, sum + v8, 0);
        *(_QWORD *)(v10 + 120) = 0x100000000LL;
        *(_DWORD *)(v10 + 132) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 124) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v15 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C372B4(itemList);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v10;
          sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), v10, v11, v12);
        }
        LODWORD(max_length) = svts->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)max_length );
      sum += v8;
    }
  }
  return sum;
}


void HorizontalQuestInformationIconListComponent__DeleteCallback(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.assetStoragesLoadCallback = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetStoragesLoadCallback, 0, v2, v3);
  this->fields.enemyAtlasLoadCallback = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.enemyAtlasLoadCallback, 0, v5, v6);
}


void HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questInfoRoot; // x0

  questInfoRoot = this->fields.questInfoRoot;
  if ( !questInfoRoot )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(questInfoRoot, 0, 0);
}


void HorizontalQuestInformationIconListComponent__InitQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *questInfoPanel; // x0
  const MethodInfo *v4; // x1
  float v5; // s8
  TitleInfoControl_c *v6; // x0
  System_Func_float__float__float__float__o *v7; // x21
  AlphaTransitionCalculator_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x8

  if ( (byte_4C3FCE9 & 1) == 0 )
  {
    sub_1C37058(&AlphaTransitionCalculator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__);
    sub_1C37058(&TitleInfoControl_TypeInfo);
    byte_4C3FCE9 = 1;
  }
  questInfoPanel = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
  this->fields.mstQuestInfoIconUpdateTimer = 0.0;
  if ( !questInfoPanel )
    goto LABEL_14;
  ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))questInfoPanel->klass[1]._1.element_class)(
    questInfoPanel,
    questInfoPanel->klass[1]._1.castClass,
    1.0);
  if ( this->fields.questInfoAlphaCalculator )
    goto LABEL_9;
  v5 = ChangedFPSUtil__CovertFrameNumToSecond(this->fields.questInfoFadeFrameNum, 0);
  v6 = TitleInfoControl_TypeInfo;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v6 = TitleInfoControl_TypeInfo;
  }
  v7 = ExtraEasing__AsymptoticSeriesFloat(
         v6->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
         (float)this->fields.questInfoFadeFrameNum,
         0);
  v8 = (AlphaTransitionCalculator_o *)sub_1C372A4(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v8, v5, v7, 0);
  this->fields.questInfoAlphaCalculator = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.questInfoAlphaCalculator, (int32_t)v8, v9, v10);
  questInfoPanel = this->fields.questInfoAlphaCalculator;
  if ( !questInfoPanel )
LABEL_14:
    sub_1C372B4(questInfoPanel);
  AlphaTransitionCalculator__MakeFadeInFinished(questInfoPanel, 0);
LABEL_9:
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( iconGroupList->fields._size < 1 )
    {
      HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(this, v4);
    }
    else
    {
      this->fields.currentInformationIndex = 0;
      HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v4);
    }
  }
}


UnityEngine_Material_o *HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
        HorizontalQuestInformationIconListComponent_o *this,
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
  HorizontalQuestInformationIconListComponent_c *v11; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C3FCF3 & 1) == 0 )
  {
    sub_1C37058(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C37058(&StringLiteral_16154/*"_ChocoTex"*/);
    sub_1C37058(&StringLiteral_12837/*"Shaders/ChocoMap"*/);
    byte_4C3FCF3 = 1;
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
                 (System_String_o *)StringLiteral_12837/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1C36FFC(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v11 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_SP, 0);
    v13 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0);
    p_mChocoMaterialSp->klass = (CGThumbnailListItem_c *)v13;
    sub_1C36FFC(p_mChocoMaterialSp, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialSp->klass )
      sub_1C372B4(0);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16154/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
        HorizontalQuestInformationIconListComponent_o *this,
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
  HorizontalQuestInformationIconListComponent_c *v11; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C3FCF2 & 1) == 0 )
  {
    sub_1C37058(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C37058(&StringLiteral_16154/*"_ChocoTex"*/);
    sub_1C37058(&StringLiteral_12837/*"Shaders/ChocoMap"*/);
    byte_4C3FCF2 = 1;
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
                 (System_String_o *)StringLiteral_12837/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (CGThumbnailListItem_c *)object;
      sub_1C36FFC(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v11 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_TX, 0);
    v13 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0);
    p_mChocoMaterialTx->klass = (CGThumbnailListItem_c *)v13;
    sub_1C36FFC(p_mChocoMaterialTx, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialTx->klass )
      sub_1C372B4(0);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16154/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


bool HorizontalQuestInformationIconListComponent__Setup(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t iconType; // w8
  ViewEnemyMaster_o *Master_object; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x1
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  HorizontalQuestInformationIconListComponent___c_c *v15; // x0
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v17; // x23
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Int32_array *v22; // x0
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x4
  Il2CppObject *v26; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3FCE6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__);
    sub_1C37058(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_4C3FCE6 = 1;
  }
  entity = 0;
  v26 = 0;
  this->fields.isNeedInit = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_QuestInformationListViewItem__o *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7);
  iconType = this->fields.iconType;
  if ( iconType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
    if ( !Master_object )
      goto LABEL_39;
    EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(Master_object, questId, 0);
    if ( EntityListFromQuestId )
    {
      v14 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
      if ( EntityListFromQuestId->max_length )
      {
        v15 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
          v15 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        }
        _9__18_0 = (System_Func_object__int__o *)v15->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            v15 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
          }
          v17 = (Il2CppObject *)v15->static_fields->__9;
          _9__18_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ViewEnemyEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__18_0,
            v17,
            Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__,
            0);
          static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__18_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v19, v20);
        }
        v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v14,
                                                                     (System_Func_TSource__TResult__o *)_9__18_0,
                                                                     (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
        v22 = System_Linq_Enumerable__ToArray_int_(
                v21,
                (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
        HorizontalQuestInformationIconListComponent__CreateEnemyList(this, 0, questId, v22, v23);
        return 1;
      }
    }
  }
  else if ( !iconType )
  {
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
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
                                           0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        HorizontalQuestInformationIconListComponent__CreateRewardList(
          this,
          0,
          entity->fields.dropItemIds,
          entity->fields.dropSvtIds,
          v11);
LABEL_33:
        HorizontalQuestInformationIconListComponent__CreateIconGroupList(this, v12);
        return 1;
      }
      goto LABEL_39;
    }
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &v26,
                                           questId,
                                           (const MethodInfo_33A10EC *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v26 )
      {
        HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
          this,
          0,
          (int32_t)v26[1].monitor,
          HIDWORD(v26[1].klass),
          v24);
        goto LABEL_33;
      }
LABEL_39:
      sub_1C372B4(Master_object);
    }
  }
  Master_object = (ViewEnemyMaster_o *)this->fields.infoLabel;
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (ViewEnemyMaster_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  return 0;
}


void HorizontalQuestInformationIconListComponent__SplitItemsWithQP(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *itms,
        System_Int32_array **withoutQP,
        System_Int32_array **qps,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  Il2CppObject *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  ItemMaster_o *v12; // x24
  unsigned __int64 v13; // x25
  int32_t *m_Items; // x27
  int32_t v15; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  char *v19; // x8
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  int32_t v23; // w1
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  char *v27; // x8
  __int64 v28; // x8
  System_Collections_Generic_List_int__o *v29; // x0
  const MethodInfo_3786000 *v30; // x2
  struct System_Int32_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4C3FCEC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3FCEC = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  max_length = itms->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = (ItemMaster_o *)Instance;
    v13 = 0;
    m_Items = itms->m_Items;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
LABEL_43:
        sub_1C372BC(Instance);
      v15 = m_Items[v13];
      if ( !v15 )
        break;
      if ( v15 == -1 )
      {
        if ( !v9 )
          goto LABEL_42;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v28 = v17[4];
          v29 = v9;
          goto LABEL_28;
        }
        v19 = (char *)items + 4 * size;
        v9->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v19 + 8) = 0;
        goto LABEL_38;
      }
      if ( !v12 )
        goto LABEL_42;
      Instance = (Il2CppObject *)ItemMaster__isQP(v12, v15, 0);
      if ( v13 >= LODWORD(itms->max_length) )
        goto LABEL_43;
      v23 = m_Items[v13];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_42;
        v24 = v9->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !v24 )
          goto LABEL_42;
        v26 = v9->fields._size;
        if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
        {
          v34 = v25[4];
          v29 = v9;
LABEL_36:
          v30 = *(const MethodInfo_3786000 **)(*(_QWORD *)(v34 + 192) + 112LL);
          goto LABEL_37;
        }
        v27 = (char *)v24 + 4 * v26;
        v9->fields._size = v26 + 1;
      }
      else
      {
        if ( !v8 )
          goto LABEL_42;
        v31 = v8->fields._items;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v31 )
          goto LABEL_42;
        v33 = v8->fields._size;
        if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
        {
          v34 = v32[4];
          v29 = v8;
          goto LABEL_36;
        }
        v27 = (char *)v31 + 4 * v33;
        v8->fields._size = v33 + 1;
      }
      *((_DWORD *)v27 + 8) = v23;
LABEL_38:
      LODWORD(max_length) = itms->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_39;
    }
    if ( !v8 )
      goto LABEL_42;
    v20 = v8->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !v20 )
      goto LABEL_42;
    v22 = v8->fields._size;
    if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
    {
      v28 = v21[4];
      v29 = v8;
LABEL_28:
      v30 = *(const MethodInfo_3786000 **)(*(_QWORD *)(v28 + 192) + 112LL);
      v23 = 0;
LABEL_37:
      System_Collections_Generic_List_int___AddWithResize(v29, v23, v30);
      goto LABEL_38;
    }
    v19 = (char *)v20 + 4 * v22;
    v8->fields._size = v22 + 1;
    goto LABEL_18;
  }
LABEL_39:
  if ( !v8
    || (v35 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v35,
        sub_1C36FFC((CGThumbnailListItem_o *)withoutQP, (int32_t)v35, v36, v37),
        !v9) )
  {
LABEL_42:
    sub_1C372B4(Instance);
  }
  v38 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v38;
  sub_1C36FFC((CGThumbnailListItem_o *)qps, (int32_t)v38, v39, v40);
}


void HorizontalQuestInformationIconListComponent__SplitSvtsWithCombineMaterial(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  Il2CppObject *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x24
  unsigned __int64 v13; // x25
  int32_t *m_Items; // x28
  int32_t v15; // w2
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  char *v19; // x8
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  int32_t v23; // w1
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  char *v27; // x8
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_int__o *v32; // x0
  const MethodInfo_3786000 *v33; // x2
  __int64 v34; // x8
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3FCEB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3FCEB = 1;
  }
  entity = 0;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  max_length = svts->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v13 = 0;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
LABEL_46:
        sub_1C372BC(Instance);
      v15 = m_Items[v13];
      if ( !v15 )
        break;
      if ( v15 == -1 )
      {
        if ( !v9 )
          goto LABEL_45;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v31 = v17[4];
          v32 = v9;
LABEL_36:
          v33 = *(const MethodInfo_3786000 **)(*(_QWORD *)(v31 + 192) + 112LL);
          v23 = 0;
          goto LABEL_40;
        }
        v19 = (char *)items + 4 * size;
        v9->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v19 + 8) = 0;
        goto LABEL_41;
      }
      if ( !v12 )
        goto LABEL_45;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v12,
                                   &entity,
                                   v15,
                                   (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v13 >= LODWORD(svts->max_length) )
          goto LABEL_46;
        if ( !v9 )
          goto LABEL_45;
        v23 = m_Items[v13];
        v24 = v9->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !v24 )
          goto LABEL_45;
        v26 = v9->fields._size;
        if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
        {
          v34 = v25[4];
          v32 = v9;
LABEL_39:
          v33 = *(const MethodInfo_3786000 **)(*(_QWORD *)(v34 + 192) + 112LL);
LABEL_40:
          System_Collections_Generic_List_int___AddWithResize(v32, v23, v33);
          goto LABEL_41;
        }
        v27 = (char *)v24 + 4 * v26;
        v9->fields._size = v26 + 1;
      }
      else
      {
LABEL_28:
        if ( v13 >= LODWORD(svts->max_length) )
          goto LABEL_46;
        if ( !v8 )
          goto LABEL_45;
        v23 = m_Items[v13];
        v28 = v8->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v28 )
          goto LABEL_45;
        v30 = v8->fields._size;
        if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
        {
          v34 = v29[4];
          v32 = v8;
          goto LABEL_39;
        }
        v27 = (char *)v28 + 4 * v30;
        v8->fields._size = v30 + 1;
      }
      *((_DWORD *)v27 + 8) = v23;
LABEL_41:
      LODWORD(max_length) = svts->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_42;
    }
    if ( !v8 )
      goto LABEL_45;
    v20 = v8->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !v20 )
      goto LABEL_45;
    v22 = v8->fields._size;
    if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
    {
      v31 = v21[4];
      v32 = v8;
      goto LABEL_36;
    }
    v19 = (char *)v20 + 4 * v22;
    v8->fields._size = v22 + 1;
    goto LABEL_18;
  }
LABEL_42:
  if ( !v8
    || (v35 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v35,
        sub_1C36FFC((CGThumbnailListItem_o *)withoutCM, (int32_t)v35, v36, v37),
        !v9) )
  {
LABEL_45:
    sub_1C372B4(Instance);
  }
  v38 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v38;
  sub_1C36FFC((CGThumbnailListItem_o *)combineMaterials, (int32_t)v38, v39, v40);
}


void HorizontalQuestInformationIconListComponent__Update(
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


void HorizontalQuestInformationIconListComponent__UpdateQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x0
  TransitionCalculator_float__o *questInfoAlphaCalculator; // x0
  AlphaTransitionCalculator_o *Instance; // x0
  float mstQuestInfoIconUpdateTimer; // s8
  float deltaTime; // s0
  float questInfoChangeInterval; // s1
  float v9; // s0
  int32_t currentInformationIndex; // w20
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *v12; // x8
  struct AlphaTransitionCalculator_o *v13; // x8

  if ( (byte_4C3FCEA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____);
    sub_1C37058(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TransitionCalculator_float__Update__);
    sub_1C37058(&Method_TransitionCalculator_float__get_Current__);
    byte_4C3FCEA = 1;
  }
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)iconGroupList,
           (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____) >= 2 )
    {
      questInfoAlphaCalculator = (TransitionCalculator_float__o *)this->fields.questInfoAlphaCalculator;
      if ( questInfoAlphaCalculator )
      {
        TransitionCalculator_float___Update(
          questInfoAlphaCalculator,
          (const MethodInfo_3A66194 *)Method_TransitionCalculator_float__Update__);
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_20;
        if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) )
        {
          mstQuestInfoIconUpdateTimer = this->fields.mstQuestInfoIconUpdateTimer;
          deltaTime = UnityEngine_Time__get_deltaTime(0);
          questInfoChangeInterval = this->fields.questInfoChangeInterval;
          v9 = mstQuestInfoIconUpdateTimer + deltaTime;
          this->fields.mstQuestInfoIconUpdateTimer = v9;
          if ( v9 >= questInfoChangeInterval )
          {
            Instance = this->fields.questInfoAlphaCalculator;
            this->fields.mstQuestInfoIconUpdateTimer = 0.0;
            if ( !Instance )
              goto LABEL_20;
            AlphaTransitionCalculator__StartFadeOut(Instance, 0);
          }
        }
        Instance = this->fields.questInfoAlphaCalculator;
        if ( Instance )
        {
          Instance = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(Instance, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = this->fields.questInfoAlphaCalculator;
            if ( !Instance )
              goto LABEL_20;
            currentInformationIndex = this->fields.currentInformationIndex;
            AlphaTransitionCalculator__StartFadeIn(Instance, 0);
            v12 = this->fields.iconGroupList;
            if ( !v12 )
              goto LABEL_20;
            this->fields.currentInformationIndex = (currentInformationIndex + 1) % v12->fields._size;
            HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v11);
          }
          v13 = this->fields.questInfoAlphaCalculator;
          if ( v13 )
          {
            Instance = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
            if ( Instance )
            {
              ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.element_class)(
                Instance,
                Instance->klass[1]._1.castClass,
                v13->fields._Current_k__BackingField);
              return;
            }
          }
        }
LABEL_20:
        sub_1C372B4(Instance);
      }
    }
  }
}


void HorizontalQuestInformationIconListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3FCF5 & 1) == 0 )
  {
    sub_1C37058(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_4C3FCF5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(HorizontalQuestInformationIconListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields->__9 = (struct HorizontalQuestInformationIconListComponent___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void HorizontalQuestInformationIconListComponent___c___ctor(
        HorizontalQuestInformationIconListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


__f__AnonymousType7_QuestInformationListViewItem__int__o *HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        QuestInformationListViewItem_o *v,
        int32_t i,
        const MethodInfo *method)
{
  __f__AnonymousType7__v_j__TPar___i_j__TPar__o *v6; // x21

  if ( (byte_4C3FCF6 & 1) == 0 )
  {
    sub_1C37058(&Method___f__AnonymousType7_QuestInformationListViewItem__int___ctor__);
    sub_1C37058(&_f__AnonymousType7_QuestInformationListViewItem__int__TypeInfo);
    byte_4C3FCF6 = 1;
  }
  v6 = (__f__AnonymousType7__v_j__TPar___i_j__TPar__o *)sub_1C372A4(_f__AnonymousType7_QuestInformationListViewItem__int__TypeInfo);
  _f__AnonymousType7_object__int____ctor(
    v6,
    (Il2CppObject *)v,
    i,
    (const MethodInfo_32C9FCC *)Method___f__AnonymousType7_QuestInformationListViewItem__int___ctor__);
  return (__f__AnonymousType7_QuestInformationListViewItem__int__o *)v6;
}


System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_2(
        HorizontalQuestInformationIconListComponent___c_o *this,
        System_Linq_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int___o *g,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c_c *v4; // x0
  System_Func_object__object__o *_9__19_3; // x20
  Il2CppObject *v6; // x21
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3FCF7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem___);
    sub_1C37058(&System_Func___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    sub_1C37058(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__);
    sub_1C37058(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_4C3FCF7 = 1;
  }
  v4 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v4 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_3 = (System_Func_object__object__o *)v4->static_fields->__9__19_3;
  if ( !_9__19_3 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__19_3 = (System_Func_object__object__o *)sub_1C372A4(System_Func___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__19_3,
      v6,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__,
      0);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_3 = (struct System_Func___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem__o *)_9__19_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__19_3, (int32_t)_9__19_3, v8, v9);
  }
  return (System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                                     (System_Func_TSource__TResult__o *)_9__19_3,
                                                                                     (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem___);
}


QuestInformationListViewItem_o *HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_3(
        HorizontalQuestInformationIconListComponent___c_o *this,
        __f__AnonymousType7_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_4C3FCF8 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c_o *)sub_1C37058(&Method___f__AnonymousType7_QuestInformationListViewItem__int__get_v__);
    byte_4C3FCF8 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  return x->fields._v_i__Field;
}


int32_t HorizontalQuestInformationIconListComponent___c___Setup_b__18_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1C372B4(this);
  return value->fields.enemyId;
}


void HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___CreateIconGroupList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *this,
        __f__AnonymousType7_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C3FCF9 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_1C37058(&Method___f__AnonymousType7_QuestInformationListViewItem__int__get_i__);
    byte_4C3FCF9 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  return x->fields._i_i__Field / v4->fields.chunkSize;
}


void HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ChangeViewQuestInfoLb_b__0(
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
                                                                                        0),
        (_4__this = v3->fields.__4__this) == 0)
    || !this )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    v3->fields.index == _4__this->fields.currentInformationIndex,
    0);
}


void HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__0(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *v2; // x19
  UnityEngine_Object_o *_4__this; // x20
  int32_t v4; // w1
  const MethodInfo *v5; // x4
  const MethodInfo *v6; // x1

  v2 = this;
  if ( (byte_4C3FCFA & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FCFA = 1;
  }
  _4__this = (UnityEngine_Object_o *)v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  if ( _4__this[5].monitor && _4__this[5].fields.m_CachedPtr )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(_4__this, 0, 0) )
    {
      this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v2->fields.__4__this;
      if ( this )
      {
        HorizontalQuestInformationIconListComponent__CreateEnemyList_36546888(
          (HorizontalQuestInformationIconListComponent_o *)this,
          v4,
          v2->fields.enemies,
          v2->fields.veEnts,
          v5);
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v2->fields.__4__this;
        if ( this )
        {
          HorizontalQuestInformationIconListComponent__CreateIconGroupList(
            (HorizontalQuestInformationIconListComponent_o *)this,
            v6);
          return;
        }
      }
LABEL_13:
      sub_1C372B4(this);
    }
  }
}


void HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *v2; // x19
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x19
  Il2CppObject *assetStoragesLoadCallback; // x21
  System_Action_o *v6; // x20

  v2 = this;
  if ( (byte_4C3FCFB & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call__);
    sub_1C37058(&System_Action_TypeInfo);
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1C37058(&AssetManager_TypeInfo);
    byte_4C3FCFB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  loadedAssets = _4__this->fields.loadedAssets;
  assetStoragesLoadCallback = (Il2CppObject *)_4__this->fields.assetStoragesLoadCallback;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, assetStoragesLoadCallback, Method_ActionExtensions_Call__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40541524(loadedAssets, v6, 1, 0);
}


void HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__2(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  ActionExtensions__Call(_4__this->fields.enemyAtlasLoadCallback, 0);
}