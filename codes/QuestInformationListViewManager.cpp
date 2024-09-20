void __fastcall QuestInformationListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct QuestInformationListViewManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A581A6 & 1) == 0 )
  {
    sub_1B885B0(&QuestInformationListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/);
    sub_1B885B0(&StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/);
    byte_4A581A6 = 1;
  }
  QuestInformationListViewManager_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestInformationListViewManager_TypeInfo->static_fields,
    StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2);
  v3 = StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = QuestInformationListViewManager_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->CHOCO_SHADER_SP, v3, v5, v6);
}


void __fastcall QuestInformationListViewManager___ctor(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall QuestInformationListViewManager__CreateEmptyRewardList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int v6; // w21
  struct ListViewItemSeed_o *rewardSeed; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v11; // x1
  int32_t v12; // w22
  __int64 v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int64 v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8
  struct UIScrollView_o *scrollView; // x8

  v5 = svtCnt;
  v6 = itemCnt;
  if ( (byte_4A5819F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A5819F = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.seed = rewardSeed;
  this->fields.mIsBuildingList = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)rewardSeed, itemCnt, svtCnt);
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( v6 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_40706472((ListViewItem_o *)v13, v12, 0LL);
        *(_DWORD *)(v13 + 124) = 0;
        *(_QWORD *)(v13 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), v13, v14, v15);
        }
        if ( v6 == ++v12 )
          goto LABEL_14;
      }
LABEL_23:
      sub_1B8880C(itemList, v11);
    }
    v6 = 0;
LABEL_14:
    if ( v5 >= 1 )
    {
      do
      {
        v20 = sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_40706472((ListViewItem_o *)v20, v6, 0LL);
        *(_DWORD *)(v20 + 124) = 0;
        *(_QWORD *)(v20 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_23;
        v23 = itemList->fields._items;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v23 )
          goto LABEL_23;
        v25 = itemList->fields._size;
        if ( (unsigned int)v25 >= v23->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v20,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &v23->obj.klass + v25;
          itemList->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)v20;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), v20, v21, v22);
        }
        --v5;
        ++v6;
      }
      while ( v5 );
    }
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  scrollView->fields.contentPivot = 1;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  this->fields.mIsBuildingList = 0;
}


void __fastcall QuestInformationListViewManager__CreateEnemyList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 QuestEntity; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  struct ListViewItemSeed_o *enemySeed; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v21; // x24
  __int64 *v22; // x25
  int32_t v23; // w2
  int32_t v24; // w3
  bool HasFlag; // w28
  Il2CppObject *v26; // x27
  __int64 v27; // x8
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  __int64 v32; // x8
  __int64 v33; // x29
  __int64 v34; // x23
  __int64 v35; // x26
  unsigned __int64 v36; // x9
  unsigned __int64 v37; // x19
  int32_t v38; // w3
  __int64 v39; // x8
  ViewEnemyEntity_o *v40; // x27
  unsigned int *v41; // x8
  ServantStatusBattleListViewItem_o *v42; // x0
  System_String_o *v43; // x0
  Il2CppObject *v44; // x27
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  ViewEnemyEntity_o *v51; // x28
  unsigned int *v52; // x28
  System_Object_array *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_Action_o *v56; // x19
  __int64 v57; // x0
  QuestInformationListViewManager_o *v58; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v59; // [xsp+8h] [xbp-88h]
  bool v60; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v62; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v63; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A581A0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__);
    sub_1B885B0(&QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo);
    sub_1B885B0(&ViewEnemyEntity___TypeInfo);
    sub_1B885B0(&ViewEnemyEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_12656/*"Servants/Commands/"*/);
    byte_4A581A0 = 1;
  }
  v62 = 0LL;
  v63 = 0LL;
  entity = 0LL;
  v9 = sub_1B887FC(QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_63;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = enemies;
  v14 = (__int64 *)(v9 + 32);
  *(_DWORD *)(v9 + 24) = questId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)enemies, v15, v16);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)enemySeed, v17, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v21 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v59 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 40) = 0LL;
  v22 = (__int64 *)(v9 + 40);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), 0, v23, v24);
  QuestEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_63;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v9 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_63;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v58 = this;
  v26 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v26 )
    goto LABEL_63;
  UserQuestInfoMaster__TryGetEntity((UserQuestInfoMaster_o *)v26, &entity, QuestEntity, *(_DWORD *)(v9 + 24), 0LL);
  v27 = *(_QWORD *)(v9 + 32);
  if ( v27 )
  {
    v28 = sub_1B88658(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v27 + 24));
    *v22 = v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), v28, v29, v30);
    v32 = *v14;
    if ( !*v14 )
      goto LABEL_63;
    v33 = 0LL;
    v34 = 8LL;
    v35 = 8LL;
    v60 = HasFlag;
    while ( 1 )
    {
      v36 = *(unsigned int *)(v32 + 24);
      v37 = v34 - 8;
      if ( v34 - 8 >= (int)v36 )
        break;
      if ( v37 >= v36 )
        goto LABEL_64;
      v38 = *(_DWORD *)(v32 + 4 * v34);
      if ( v38 < 1 )
        goto LABEL_39;
      if ( !Master_object )
        goto LABEL_63;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      (ViewEnemyMaster_o *)Master_object,
                      &v62,
                      *(_DWORD *)(v9 + 24),
                      v38,
                      0LL);
      if ( (QuestEntity & 1) == 0 )
        goto LABEL_39;
      if ( !HasFlag )
      {
        if ( !entity )
          goto LABEL_28;
        QuestEntity = (__int64)entity->fields.enemyIds;
        if ( !QuestEntity || !*(_QWORD *)(QuestEntity + 24) )
          goto LABEL_28;
        if ( !v62 )
          goto LABEL_63;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v62->fields.enemyId,
                        (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_28:
          v39 = *v14;
          if ( !*v14 )
            goto LABEL_63;
          if ( v37 >= *(unsigned int *)(v39 + 24) )
            goto LABEL_64;
          *(_DWORD *)(v39 + 4 * v34) = 0;
        }
      }
      if ( !v62 || !v21 )
        goto LABEL_63;
      QuestEntity = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                      &v63,
                      v62->fields.svtId,
                      (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v63;
        if ( !v63 )
          goto LABEL_63;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v63, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_38;
        QuestEntity = (__int64)v62;
        if ( !v62 )
          goto LABEL_63;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v62, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v62 )
            goto LABEL_63;
          v43 = System_Int32__ToString((int)v62 + 36, 0LL);
          v44 = (Il2CppObject *)System_String__Concat_61707032((System_String_o *)StringLiteral_12656/*"Servants/Commands/"*/, v43, 0LL);
          QuestEntity = (__int64)v59;
          if ( !v59 )
            goto LABEL_63;
          QuestEntity = System_Collections_Generic_List_object___Contains(
                          v59,
                          v44,
                          (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( (QuestEntity & 1) == 0 )
          {
            items = v59->fields._items;
            v48 = Method_System_Collections_Generic_List_string__Add__;
            ++v59->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v59->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v59,
                v44,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v50 = &items->obj.klass + size;
              v59->fields._size = size + 1;
              v50[4] = (Il2CppClass *)v44;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v44, v45, v46);
            }
          }
          v51 = v62;
          v40 = (ViewEnemyEntity_o *)sub_1B887FC(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_40282184(v40, v51, 0LL);
          v62 = v40;
          if ( !v40 )
            goto LABEL_63;
          v40->fields.iconId = 0;
        }
        else
        {
LABEL_38:
          v40 = v62;
        }
        v52 = (unsigned int *)*v22;
        if ( !*v22 )
          goto LABEL_63;
        if ( v40 )
        {
          QuestEntity = sub_1B886EC(v40, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
          if ( !QuestEntity )
          {
            v57 = sub_1B88830();
            sub_1B886D8(v57, 0LL);
          }
        }
        if ( v37 >= v52[6] )
LABEL_64:
          sub_1B88814(QuestEntity, v11);
        v42 = (ServantStatusBattleListViewItem_o *)&v52[v35];
        HasFlag = v60;
        v42->klass = (ServantStatusBattleListViewItem_c *)v40;
      }
      else
      {
LABEL_39:
        v41 = (unsigned int *)*v22;
        if ( !*v22 )
          goto LABEL_63;
        if ( v37 >= v41[6] )
          goto LABEL_64;
        LODWORD(v40) = 0;
        v42 = (ServantStatusBattleListViewItem_o *)&v41[2 * v33 + 8];
        *(_QWORD *)&v41[v35] = 0LL;
      }
      sub_1B88554(v42, (int32_t)v40, v31, v38);
      v32 = *v14;
      ++v33;
      ++v34;
      v35 += 2LL;
      if ( !*v14 )
        goto LABEL_63;
    }
  }
  QuestEntity = (__int64)v59;
  if ( !v59 )
LABEL_63:
    sub_1B8880C(QuestEntity, v11);
  v53 = System_Collections_Generic_List_object___ToArray(
          v59,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
  v58->fields.loadedAssets = (struct System_String_array *)v53;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v58->fields.loadedAssets, (int32_t)v53, v54, v55);
  v58->fields.loading = 1;
  v56 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v9,
    Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v56, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_34063012(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  int32_t v12; // w22
  ViewEnemyEntity_o *v13; // x24
  QuestInformationListViewItem_o *v14; // x0
  const MethodInfo *v15; // x4
  Il2CppObject *v16; // x23
  int32_t v17; // w1
  ViewEnemyEntity_o *v18; // x2
  bool v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4A581A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A581A1 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
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
            goto LABEL_24;
          if ( !veEnts )
            goto LABEL_23;
          if ( v11 >= veEnts->max_length )
LABEL_24:
            sub_1B88814(itemList, v9);
          v13 = veEnts->m_Items[v11];
          if ( enemies->m_Items[v11 + 1] <= 0 )
            break;
          if ( v13 )
          {
            v14 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
            v16 = (Il2CppObject *)v14;
            v17 = v12;
            v18 = v13;
            v19 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v11 >= (int)v10 )
            goto LABEL_21;
        }
        v14 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        v16 = (Il2CppObject *)v14;
        v19 = 1;
        v17 = v12;
        v18 = v13;
LABEL_14:
        QuestInformationListViewItem___ctor_34048556(v14, v17, v18, v19, v15);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v23 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
LABEL_23:
          sub_1B8880C(itemList, v9);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            v16,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v16, v20, v21);
        }
        LODWORD(v10) = enemies->max_length;
        ++v12;
        goto LABEL_20;
      }
    }
LABEL_21:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    this->fields.mIsBuildingList = 0;
  }
  else
  {
    QuestInformationListViewManager__DestroyList(this, *(const MethodInfo **)&questId);
  }
}


int32_t __fastcall QuestInformationListViewManager__CreateRewardItemList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *v6; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x24
  int32_t v9; // w29
  __int64 v10; // x22
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  v6 = this;
  if ( (byte_4A5819D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (QuestInformationListViewManager_o *)sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A5819D = 1;
  }
  if ( items )
  {
    v7 = *(_QWORD *)&items->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      do
      {
        if ( v8 >= (unsigned int)v7 )
          sub_1B88814(this, items);
        v9 = items->m_Items[v8 + 1];
        v10 = sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_40706472((ListViewItem_o *)v10, sum + v8, 0LL);
        *(_QWORD *)(v10 + 112) = 0x200000000LL;
        *(_DWORD *)(v10 + 124) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v15 = itemList->fields._items,
              v16 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !v15) )
        {
          sub_1B8880C(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v15->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &v15->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v10, v12, v13);
        }
        LODWORD(v7) = items->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
      sum += v8;
    }
  }
  return sum;
}


void __fastcall QuestInformationListViewManager__CreateRewardList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        System_Int32_array *items,
        System_Int32_array *svts,
        const MethodInfo *method)
{
  struct ListViewItemSeed_o *rewardSeed; // x1
  struct ListViewItemSeed_o **p_seed; // x0
  QuestInformationListViewManager_o *v11; // x0
  const MethodInfo *v12; // x4
  QuestInformationListViewManager_o *v13; // x0
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x3
  int32_t RewardSvtList; // w0
  const MethodInfo *v17; // x3
  int32_t RewardItemList; // w0
  const MethodInfo *v19; // x3
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  System_Int32_array *qps; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *withoutQP; // [xsp+10h] [xbp-40h] BYREF
  System_Int32_array *combineMaterials; // [xsp+18h] [xbp-38h] BYREF
  System_Int32_array *withoutCM; // [xsp+28h] [xbp-28h] BYREF

  withoutQP = 0LL;
  combineMaterials = 0LL;
  qps = 0LL;
  rewardSeed = this->fields.rewardSeed;
  this->fields.seed = rewardSeed;
  p_seed = &this->fields.seed;
  *((_BYTE *)p_seed + 265) = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)rewardSeed, (int32_t)items, (int32_t)svts);
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    QuestInformationListViewManager__SplitSvtsWithCombineMaterial(v11, svts, &withoutCM, &combineMaterials, v12);
    QuestInformationListViewManager__SplitItemsWithQP(v13, items, &withoutQP, &qps, v14);
    RewardSvtList = QuestInformationListViewManager__CreateRewardSvtList(this, withoutCM, 0, v15);
    RewardItemList = QuestInformationListViewManager__CreateRewardItemList(this, withoutQP, RewardSvtList, v17);
    v20 = QuestInformationListViewManager__CreateRewardSvtList(this, combineMaterials, RewardItemList, v19);
    QuestInformationListViewManager__CreateRewardItemList(this, qps, v20, v21);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  this->fields.mIsBuildingList = 0;
}


int32_t __fastcall QuestInformationListViewManager__CreateRewardSvtList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *v6; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x24
  int32_t v9; // w29
  __int64 v10; // x22
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  v6 = this;
  if ( (byte_4A5819E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (QuestInformationListViewManager_o *)sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A5819E = 1;
  }
  if ( svts )
  {
    v7 = *(_QWORD *)&svts->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      do
      {
        if ( v8 >= (unsigned int)v7 )
          sub_1B88814(this, svts);
        v9 = svts->m_Items[v8 + 1];
        v10 = sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_40706472((ListViewItem_o *)v10, sum + v8, 0LL);
        *(_QWORD *)(v10 + 112) = 0x100000000LL;
        *(_DWORD *)(v10 + 124) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v16 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1B8880C(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v10, v12, v13);
        }
        LODWORD(v7) = svts->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
      sum += v8;
    }
  }
  return sum;
}


void __fastcall QuestInformationListViewManager__DestroyList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array *loadedAssets; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5819A & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5819A = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_37799632(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadedAssets, 0, v4, v5);
    }
    ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
    this->fields.mIsBuildingList = 0;
  }
}


bool __fastcall QuestInformationListViewManager__IsListBuilding(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mIsBuildingList;
}


bool __fastcall QuestInformationListViewManager__IsTouchable(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  return !this->fields.mIsResetReady && !this->fields.mIsBuildingList;
}


UnityEngine_Material_o *__fastcall QuestInformationListViewManager__NewChocoMaterialForSprite(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  ServantStatusBattleListViewItem_o *p_mChocoMaterialSp; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x20
  Il2CppObject *object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  QuestInformationListViewManager_c *v10; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1

  if ( (byte_4A581A5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestInformationListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    byte_4A581A5 = 1;
  }
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mChocoMaterialSp = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoMaterialSp;
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mChocoTex = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoTex;
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B88554(p_mChocoTex, (int32_t)object, v8, v9);
    }
    v10 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v10 = QuestInformationListViewManager_TypeInfo;
    }
    v11 = UnityEngine_Shader__Find(v10->static_fields->CHOCO_SHADER_SP, 0LL);
    v12 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v12, v11, 0LL);
    p_mChocoMaterialSp->klass = (ServantStatusBattleListViewItem_c *)v12;
    sub_1B88554(p_mChocoMaterialSp, (int32_t)v12, v13, v14);
    if ( !p_mChocoMaterialSp->klass )
      sub_1B8880C(0LL, v15);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall QuestInformationListViewManager__NewChocoMaterialForTexture(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  ServantStatusBattleListViewItem_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x20
  Il2CppObject *object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  QuestInformationListViewManager_c *v10; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1

  if ( (byte_4A581A4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestInformationListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    byte_4A581A4 = 1;
  }
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mChocoMaterialTx = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoMaterialTx;
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mChocoTex = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoTex;
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B88554(p_mChocoTex, (int32_t)object, v8, v9);
    }
    v10 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v10 = QuestInformationListViewManager_TypeInfo;
    }
    v11 = UnityEngine_Shader__Find(v10->static_fields->CHOCO_SHADER_TX, 0LL);
    v12 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v12, v11, 0LL);
    p_mChocoMaterialTx->klass = (ServantStatusBattleListViewItem_c *)v12;
    sub_1B88554(p_mChocoMaterialTx, (int32_t)v12, v13, v14);
    if ( !p_mChocoMaterialTx->klass )
      sub_1B8880C(0LL, v15);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


void __fastcall QuestInformationListViewManager__OnClickListView(
        QuestInformationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *v4; // x20
  struct ListViewItem_o *linkItem; // x19
  __int64 methodPtr_low; // x9
  int klass_high; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  UserItemData_o *UserItemData; // x19
  CommonUI_o *v13; // x20
  QuestInformationListViewManager___c_c *v14; // x8
  ItemLinkInfoWindowComponent_CallbackFunc_o *_9__28_2; // x21
  Il2CppObject *v16; // x22
  struct QuestInformationListViewManager___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  int32_t monitor_high; // w19
  CommonUI_o *v23; // x20
  QuestInformationListViewManager___c_c *v24; // x8
  ServantStatusDialog_EndDelegate_o *_9__28_0; // x21
  Il2CppObject *v26; // x22
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x19
  CommonUI_o *v31; // x20
  QuestInformationListViewManager___c_c *v32; // x8
  ItemDetailInfoComponent_CallbackFunc_o *_9__28_1; // x21
  Il2CppObject *v34; // x22
  struct QuestInformationListViewManager___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  QuestInformationListViewManager_o *v38; // x0
  const MethodInfo *v39; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4A581A3 & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    sub_1B885B0(&Method_QuestInformationListViewManager_OnClickListView__);
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__);
    sub_1B885B0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__);
    sub_1B885B0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__);
    this = (QuestInformationListViewManager_o *)sub_1B885B0(&QuestInformationListViewManager___c_TypeInfo);
    byte_4A581A3 = 1;
  }
  entity = 0LL;
  if ( v4->fields.mIsResetReady )
    return;
  if ( !obj )
    goto LABEL_51;
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    goto LABEL_51;
  methodPtr_low = LOBYTE(QuestInformationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewItem_TypeInfo )
  {
    sub_1B88ACC(linkItem);
    QuestInformationListViewManager__IsListBuilding(v38, v39);
    return;
  }
  if ( !LODWORD(linkItem[1].klass) )
  {
    klass_high = HIDWORD(linkItem[1].klass);
    if ( klass_high == 1 )
    {
      v20 = Method_QuestInformationListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1B885C8(Method_QuestInformationListViewManager_OnClickListView__);
      v21 = (System_Reflection_MethodBase_o *)sub_1B88594(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      monitor_high = HIDWORD(linkItem[1].monitor);
      v23 = (CommonUI_o *)this;
      v24 = QuestInformationListViewManager___c_TypeInfo;
      if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
        v24 = QuestInformationListViewManager___c_TypeInfo;
      }
      _9__28_0 = v24->static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = QuestInformationListViewManager___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__28_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__28_0,
          v26,
          Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__,
          0LL);
        static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__28_0 = _9__28_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v28, v29);
      }
      if ( v23 )
      {
        CommonUI__OpenServantStatusDialog_30507356(v23, 0, monitor_high, _9__28_0, 0LL);
        return;
      }
    }
    else
    {
      if ( klass_high != 2 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( this )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                &entity,
                HIDWORD(linkItem[1].monitor),
                (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          return;
        v8 = Method_QuestInformationListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1B885C8(Method_QuestInformationListViewManager_OnClickListView__);
        v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
        this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0LL) )
            goto LABEL_43;
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !this )
            goto LABEL_51;
          NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)this, 0LL);
          if ( !SceneList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
          SceneName = SceneList__getSceneName(34, 0LL);
          if ( System_String__op_Equality(NowSceneName, SceneName, 0LL) )
          {
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0LL);
              this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v13 = (CommonUI_o *)this;
              v14 = QuestInformationListViewManager___c_TypeInfo;
              if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
                v14 = QuestInformationListViewManager___c_TypeInfo;
              }
              _9__28_2 = v14->static_fields->__9__28_2;
              if ( !_9__28_2 )
              {
                if ( !v14->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v14);
                  v14 = QuestInformationListViewManager___c_TypeInfo;
                }
                v16 = (Il2CppObject *)v14->static_fields->__9;
                _9__28_2 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
                ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                  _9__28_2,
                  v16,
                  (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__,
                  0LL);
                v17 = QuestInformationListViewManager___c_TypeInfo->static_fields;
                v17->__9__28_2 = _9__28_2;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->__9__28_2, (int32_t)_9__28_2, v18, v19);
              }
              if ( v13 )
              {
                CommonUI__OpenItemLinkInfoDetailWindow_30585972(v13, UserItemData, _9__28_2, 0LL);
                return;
              }
            }
          }
          else
          {
LABEL_43:
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v30 = entity;
            v31 = (CommonUI_o *)this;
            v32 = QuestInformationListViewManager___c_TypeInfo;
            if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
              v32 = QuestInformationListViewManager___c_TypeInfo;
            }
            _9__28_1 = v32->static_fields->__9__28_1;
            if ( !_9__28_1 )
            {
              if ( !v32->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v32);
                v32 = QuestInformationListViewManager___c_TypeInfo;
              }
              v34 = (Il2CppObject *)v32->static_fields->__9;
              _9__28_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                _9__28_1,
                v34,
                (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__,
                0LL);
              v35 = QuestInformationListViewManager___c_TypeInfo->static_fields;
              v35->__9__28_1 = _9__28_1;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->__9__28_1, (int32_t)_9__28_1, v36, v37);
            }
            if ( v31 )
            {
              CommonUI__OpenItemDetailDialog(v31, (ItemEntity_o *)v30, _9__28_1, 50, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_51:
    sub_1B8880C(this, obj);
  }
}


void __fastcall QuestInformationListViewManager__SetObjectItem(
        QuestInformationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A581A2 & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_1B885B0(&QuestInformationListViewObject_TypeInfo);
    byte_4A581A2 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(QuestInformationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  QuestInformationListViewObject__Init_34063612((QuestInformationListViewObject_o *)obj, 3, (const MethodInfo *)item);
}


void __fastcall QuestInformationListViewManager__SetResetReady(
        QuestInformationListViewManager_o *this,
        bool onOff,
        const MethodInfo *method)
{
  this->fields.mIsResetReady = onOff;
}


void __fastcall QuestInformationListViewManager__SplitItemsWithQP(
        QuestInformationListViewManager_o *this,
        System_Int32_array *itms,
        System_Int32_array **withoutQP,
        System_Int32_array **qps,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  ItemMaster_o *v13; // x24
  unsigned __int64 v14; // x25
  int32_t *v15; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  char *v19; // x8
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  char *v26; // x8
  __int64 v27; // x8
  System_Collections_Generic_List_int__o *v28; // x0
  const MethodInfo_34E0810 *v29; // x2
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  System_Int32_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Int32_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_4A5819C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5819C = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  v12 = *(_QWORD *)&itms->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = (ItemMaster_o *)Instance;
    v14 = 0LL;
    v15 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
LABEL_43:
        sub_1B88814(Instance, v11);
      v11 = (unsigned int)v15[v14];
      if ( !(_DWORD)v11 )
        break;
      if ( (_DWORD)v11 == -1 )
      {
        if ( !v9 )
          goto LABEL_42;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v27 = v17[4];
          v28 = v9;
          goto LABEL_28;
        }
        v19 = (char *)items + 4 * size;
        v9->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v19 + 8) = 0;
        goto LABEL_38;
      }
      if ( !v13 )
        goto LABEL_42;
      Instance = (Il2CppObject *)ItemMaster__isQP(v13, v11, 0LL);
      if ( v14 >= itms->max_length )
        goto LABEL_43;
      v11 = (unsigned int)v15[v14];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_42;
        v23 = v9->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !v23 )
          goto LABEL_42;
        v25 = v9->fields._size;
        if ( (unsigned int)v25 >= v23->max_length )
        {
          v33 = v24[4];
          v28 = v9;
LABEL_36:
          v29 = *(const MethodInfo_34E0810 **)(*(_QWORD *)(v33 + 192) + 112LL);
          goto LABEL_37;
        }
        v26 = (char *)v23 + 4 * v25;
        v9->fields._size = v25 + 1;
      }
      else
      {
        if ( !v8 )
          goto LABEL_42;
        v30 = v8->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v30 )
          goto LABEL_42;
        v32 = v8->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          v33 = v31[4];
          v28 = v8;
          goto LABEL_36;
        }
        v26 = (char *)v30 + 4 * v32;
        v8->fields._size = v32 + 1;
      }
      *((_DWORD *)v26 + 8) = v11;
LABEL_38:
      LODWORD(v12) = itms->max_length;
      if ( (__int64)++v14 >= (int)v12 )
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
    if ( (unsigned int)v22 >= v20->max_length )
    {
      v27 = v21[4];
      v28 = v8;
LABEL_28:
      v29 = *(const MethodInfo_34E0810 **)(*(_QWORD *)(v27 + 192) + 112LL);
      LODWORD(v11) = 0;
LABEL_37:
      System_Collections_Generic_List_int___AddWithResize(v28, v11, v29);
      goto LABEL_38;
    }
    v19 = (char *)v20 + 4 * v22;
    v8->fields._size = v22 + 1;
    goto LABEL_18;
  }
LABEL_39:
  if ( !v8
    || (v34 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v34,
        sub_1B88554((ServantStatusBattleListViewItem_o *)withoutQP, (int32_t)v34, v35, v36),
        !v9) )
  {
LABEL_42:
    sub_1B8880C(Instance, v11);
  }
  v37 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)qps, (int32_t)v37, v38, v39);
}


void __fastcall QuestInformationListViewManager__SplitSvtsWithCombineMaterial(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x24
  unsigned __int64 v14; // x25
  int32_t *v15; // x28
  int32_t v16; // w2
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  char *v20; // x8
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  char *v27; // x8
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_int__o *v32; // x0
  const MethodInfo_34E0810 *v33; // x2
  __int64 v34; // x8
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5819B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5819B = 1;
  }
  entity = 0LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  v12 = *(_QWORD *)&svts->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0LL;
    v15 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
LABEL_46:
        sub_1B88814(Instance, v11);
      v16 = v15[v14];
      if ( !v16 )
        break;
      if ( v16 == -1 )
      {
        if ( !v9 )
          goto LABEL_45;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v31 = v18[4];
          v32 = v9;
LABEL_36:
          v33 = *(const MethodInfo_34E0810 **)(*(_QWORD *)(v31 + 192) + 112LL);
          LODWORD(v11) = 0;
          goto LABEL_40;
        }
        v20 = (char *)items + 4 * size;
        v9->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v20 + 8) = 0;
        goto LABEL_41;
      }
      if ( !v13 )
        goto LABEL_45;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   v16,
                                   (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v14 >= svts->max_length )
          goto LABEL_46;
        if ( !v9 )
          goto LABEL_45;
        v11 = (unsigned int)v15[v14];
        v24 = v9->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !v24 )
          goto LABEL_45;
        v26 = v9->fields._size;
        if ( (unsigned int)v26 >= v24->max_length )
        {
          v34 = v25[4];
          v32 = v9;
LABEL_39:
          v33 = *(const MethodInfo_34E0810 **)(*(_QWORD *)(v34 + 192) + 112LL);
LABEL_40:
          System_Collections_Generic_List_int___AddWithResize(v32, v11, v33);
          goto LABEL_41;
        }
        v27 = (char *)v24 + 4 * v26;
        v9->fields._size = v26 + 1;
      }
      else
      {
LABEL_28:
        if ( v14 >= svts->max_length )
          goto LABEL_46;
        if ( !v8 )
          goto LABEL_45;
        v11 = (unsigned int)v15[v14];
        v28 = v8->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v28 )
          goto LABEL_45;
        v30 = v8->fields._size;
        if ( (unsigned int)v30 >= v28->max_length )
        {
          v34 = v29[4];
          v32 = v8;
          goto LABEL_39;
        }
        v27 = (char *)v28 + 4 * v30;
        v8->fields._size = v30 + 1;
      }
      *((_DWORD *)v27 + 8) = v11;
LABEL_41:
      LODWORD(v12) = svts->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_42;
    }
    if ( !v8 )
      goto LABEL_45;
    v21 = v8->fields._items;
    v22 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !v21 )
      goto LABEL_45;
    v23 = v8->fields._size;
    if ( (unsigned int)v23 >= v21->max_length )
    {
      v31 = v22[4];
      v32 = v8;
      goto LABEL_36;
    }
    v20 = (char *)v21 + 4 * v23;
    v8->fields._size = v23 + 1;
    goto LABEL_18;
  }
LABEL_42:
  if ( !v8
    || (v35 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v35,
        sub_1B88554((ServantStatusBattleListViewItem_o *)withoutCM, (int32_t)v35, v36, v37),
        !v9) )
  {
LABEL_45:
    sub_1B8880C(Instance, v11);
  }
  v38 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)combineMaterials, (int32_t)v38, v39, v40);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A58199 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58199 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(
                                 (QuestInformationListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v3;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A58198 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58198 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v3;
}


void __fastcall QuestInformationListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A581A7 & 1) == 0 )
  {
    sub_1B885B0(&QuestInformationListViewManager___c_TypeInfo);
    byte_4A581A7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestInformationListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestInformationListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestInformationListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestInformationListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall QuestInformationListViewManager___c___ctor(
        QuestInformationListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewManager___c___OnClickListView_b__28_0(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A581AA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A581AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall QuestInformationListViewManager___c___OnClickListView_b__28_1(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A581A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__);
    byte_4A581A9 = 1;
  }
  v3 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall QuestInformationListViewManager___c___OnClickListView_b__28_2(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A581A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__);
    byte_4A581A8 = 1;
  }
  v3 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass25_0___ctor(
        QuestInformationListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass25_0___CreateEnemyList_b__0(
        QuestInformationListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  QuestInformationListViewManager___c__DisplayClass25_0_o *v2; // x19
  struct QuestInformationListViewManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__1; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  v2 = this;
  if ( (byte_4A581AB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    this = (QuestInformationListViewManager___c__DisplayClass25_0_o *)sub_1B885B0(&Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__);
    byte_4A581AB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37797288(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass25_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  QuestInformationListViewManager__CreateEnemyList_34063012(
    this->fields.__4__this,
    (int32_t)method,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}