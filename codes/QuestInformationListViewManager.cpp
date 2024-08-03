void __fastcall QuestInformationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct QuestInformationListViewManager_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F94A9 & 1) == 0 )
  {
    sub_1B640C8(&QuestInformationListViewManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_15059/*"Unlit/Transparent Colored_Choco"*/, v4);
    sub_1B640C8(&StringLiteral_4953/*"Custom/SpriteWithMask_Choco"*/, v5);
    byte_49F94A9 = 1;
  }
  QuestInformationListViewManager_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15059/*"Unlit/Transparent Colored_Choco"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestInformationListViewManager_TypeInfo->static_fields,
    StringLiteral_15059/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3);
  v6 = StringLiteral_4953/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = QuestInformationListViewManager_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4953/*"Custom/SpriteWithMask_Choco"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->CHOCO_SHADER_SP, v6, v8, v9);
}


void __fastcall QuestInformationListViewManager___ctor(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEmptyRewardList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int v6; // w21
  __int64 v9; // x1
  struct ListViewItemSeed_o *rewardSeed; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w22
  __int64 v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int64 v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  struct UIScrollView_o *scrollView; // x8

  v5 = svtCnt;
  v6 = itemCnt;
  if ( (byte_49F94A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_1B640C8(&QuestInformationListViewItem_TypeInfo, v9);
    byte_49F94A2 = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.seed = rewardSeed;
  this->fields.mIsBuildingList = 1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)rewardSeed, itemCnt, svtCnt);
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( v6 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = sub_1B64314(QuestInformationListViewItem_TypeInfo, v12, v13);
        ListViewItem___ctor_40370988((ListViewItem_o *)v15, v14, 0LL);
        *(_DWORD *)(v15 + 124) = 0;
        *(_QWORD *)(v15 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v15,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v15;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), v15, v16, v17);
        }
        if ( v6 == ++v14 )
          goto LABEL_14;
      }
LABEL_23:
      sub_1B64324(itemList);
    }
    v6 = 0;
LABEL_14:
    if ( v5 >= 1 )
    {
      do
      {
        v22 = sub_1B64314(QuestInformationListViewItem_TypeInfo, v12, v13);
        ListViewItem___ctor_40370988((ListViewItem_o *)v22, v6, 0LL);
        *(_DWORD *)(v22 + 124) = 0;
        *(_QWORD *)(v22 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_23;
        v25 = itemList->fields._items;
        v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v25 )
          goto LABEL_23;
        v27 = itemList->fields._size;
        if ( (unsigned int)v27 >= v25->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v22,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &v25->obj.klass + v27;
          itemList->fields._size = v27 + 1;
          v28[4] = (Il2CppClass *)v22;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v23, v24);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList(
        QuestInformationListViewManager_o *this,
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
  __int64 v28; // x20
  __int64 QuestEntity; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  struct ListViewItemSeed_o *enemySeed; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v39; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 *v42; // x25
  int32_t v43; // w2
  int32_t v44; // w3
  bool HasFlag; // w28
  Il2CppObject *v46; // x27
  __int64 v47; // x8
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x1
  int32_t v52; // w2
  __int64 v53; // x8
  __int64 v54; // x29
  __int64 v55; // x23
  __int64 v56; // x26
  unsigned __int64 v57; // x9
  unsigned __int64 v58; // x19
  int32_t v59; // w3
  __int64 v60; // x8
  ViewEnemyEntity_o *v61; // x27
  unsigned int *v62; // x8
  ServantStatusBattleListViewItem_o *v63; // x0
  System_String_o *v64; // x0
  Il2CppObject *v65; // x27
  __int64 v66; // x1
  __int64 v67; // x2
  int32_t v68; // w3
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  ViewEnemyEntity_o *v73; // x28
  unsigned int *v74; // x28
  System_Object_array *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  __int64 v78; // x1
  __int64 v79; // x2
  System_Action_o *v80; // x19
  __int64 v81; // x0
  QuestInformationListViewManager_o *v82; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v83; // [xsp+8h] [xbp-88h]
  bool v84; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v86; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v87; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_49F94A3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&AtlasManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_ViewEnemyMaster___, v13);
    sub_1B640C8(&DataManager_TypeInfo, v14);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v20);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1B640C8(&NetworkManager_TypeInfo, v22);
    sub_1B640C8(&Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__, v23);
    sub_1B640C8(&QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo, v24);
    sub_1B640C8(&ViewEnemyEntity___TypeInfo, v25);
    sub_1B640C8(&ViewEnemyEntity_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_12595/*"Servants/Commands/"*/, v27);
    byte_49F94A3 = 1;
  }
  v86 = 0LL;
  v87 = 0LL;
  entity = 0LL;
  v28 = sub_1B64314(
          QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&questId);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_63;
  *(_QWORD *)(v28 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)this, v30, v31);
  *(_QWORD *)(v28 + 32) = enemies;
  v32 = (__int64 *)(v28 + 32);
  *(_DWORD *)(v28 + 24) = questId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)enemies, v33, v34);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)enemySeed, v35, v36);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v39 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v83 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v40,
                                                       v41);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v28 + 40) = 0LL;
  v42 = (__int64 *)(v28 + 40);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 40), 0, v43, v44);
  QuestEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_63;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v28 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_63;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v82 = this;
  v46 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v46 )
    goto LABEL_63;
  UserQuestInfoMaster__TryGetEntity((UserQuestInfoMaster_o *)v46, &entity, QuestEntity, *(_DWORD *)(v28 + 24), 0LL);
  v47 = *(_QWORD *)(v28 + 32);
  if ( v47 )
  {
    v48 = sub_1B64170(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v47 + 24));
    *v42 = v48;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 40), v48, v49, v50);
    v53 = *v32;
    if ( !*v32 )
      goto LABEL_63;
    v54 = 0LL;
    v55 = 8LL;
    v56 = 8LL;
    v84 = HasFlag;
    while ( 1 )
    {
      v57 = *(unsigned int *)(v53 + 24);
      v58 = v55 - 8;
      if ( v55 - 8 >= (int)v57 )
        break;
      if ( v58 >= v57 )
        goto LABEL_64;
      v59 = *(_DWORD *)(v53 + 4 * v55);
      if ( v59 < 1 )
        goto LABEL_39;
      if ( !Master_object )
        goto LABEL_63;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      (ViewEnemyMaster_o *)Master_object,
                      &v86,
                      *(_DWORD *)(v28 + 24),
                      v59,
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
        if ( !v86 )
          goto LABEL_63;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v86->fields.enemyId,
                        (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_28:
          v60 = *v32;
          if ( !*v32 )
            goto LABEL_63;
          if ( v58 >= *(unsigned int *)(v60 + 24) )
            goto LABEL_64;
          *(_DWORD *)(v60 + 4 * v55) = 0;
        }
      }
      if ( !v86 || !v39 )
        goto LABEL_63;
      QuestEntity = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v39,
                      &v87,
                      v86->fields.svtId,
                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v87;
        if ( !v87 )
          goto LABEL_63;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v87, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_38;
        QuestEntity = (__int64)v86;
        if ( !v86 )
          goto LABEL_63;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v86, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v86 )
            goto LABEL_63;
          v64 = System_Int32__ToString((int)v86 + 36, 0LL);
          v65 = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_12595/*"Servants/Commands/"*/, v64, 0LL);
          QuestEntity = (__int64)v83;
          if ( !v83 )
            goto LABEL_63;
          QuestEntity = System_Collections_Generic_List_object___Contains(
                          v83,
                          v65,
                          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( (QuestEntity & 1) == 0 )
          {
            items = v83->fields._items;
            v70 = Method_System_Collections_Generic_List_string__Add__;
            ++v83->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v83->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v83,
                v65,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            }
            else
            {
              v72 = &items->obj.klass + size;
              v83->fields._size = size + 1;
              v72[4] = (Il2CppClass *)v65;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)v65, v67, v68);
            }
          }
          v73 = v86;
          v61 = (ViewEnemyEntity_o *)sub_1B64314(ViewEnemyEntity_TypeInfo, v66, v67);
          ViewEnemyEntity___ctor_39950016(v61, v73, 0LL);
          v86 = v61;
          if ( !v61 )
            goto LABEL_63;
          v61->fields.iconId = 0;
        }
        else
        {
LABEL_38:
          v61 = v86;
        }
        v74 = (unsigned int *)*v42;
        if ( !*v42 )
          goto LABEL_63;
        if ( v61 )
        {
          QuestEntity = sub_1B64204(v61, *(_QWORD *)(*(_QWORD *)v74 + 64LL));
          if ( !QuestEntity )
          {
            v81 = sub_1B64348();
            sub_1B641F0(v81, 0LL);
          }
        }
        if ( v58 >= v74[6] )
LABEL_64:
          sub_1B6432C(QuestEntity, v51);
        v63 = (ServantStatusBattleListViewItem_o *)&v74[v56];
        HasFlag = v84;
        v63->klass = (ServantStatusBattleListViewItem_c *)v61;
      }
      else
      {
LABEL_39:
        v62 = (unsigned int *)*v42;
        if ( !*v42 )
          goto LABEL_63;
        if ( v58 >= v62[6] )
          goto LABEL_64;
        LODWORD(v61) = 0;
        v63 = (ServantStatusBattleListViewItem_o *)&v62[2 * v54 + 8];
        *(_QWORD *)&v62[v56] = 0LL;
      }
      sub_1B6406C(v63, (int32_t)v61, v52, v59);
      v53 = *v32;
      ++v54;
      ++v55;
      v56 += 2LL;
      if ( !*v32 )
        goto LABEL_63;
    }
  }
  QuestEntity = (__int64)v83;
  if ( !v83 )
LABEL_63:
    sub_1B64324(QuestEntity);
  v75 = System_Collections_Generic_List_object___ToArray(
          v83,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
  v82->fields.loadedAssets = (struct System_String_array *)v75;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v82->fields.loadedAssets, (int32_t)v75, v76, v77);
  v82->fields.loading = 1;
  v80 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v78, v79);
  System_Action___ctor(
    v80,
    (Il2CppObject *)v28,
    Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v80, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_33773272(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x25
  int32_t v14; // w22
  ViewEnemyEntity_o *v15; // x24
  QuestInformationListViewItem_o *v16; // x0
  const MethodInfo *v17; // x4
  Il2CppObject *v18; // x23
  int32_t v19; // w1
  ViewEnemyEntity_o *v20; // x2
  bool v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8

  if ( (byte_49F94A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    sub_1B640C8(&QuestInformationListViewItem_TypeInfo, v8);
    byte_49F94A4 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( enemies )
    {
      v12 = *(_QWORD *)&enemies->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = 0LL;
        v14 = 0;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)v12 )
            goto LABEL_24;
          if ( !veEnts )
            goto LABEL_23;
          if ( v13 >= veEnts->max_length )
LABEL_24:
            sub_1B6432C(itemList, v10);
          v15 = veEnts->m_Items[v13];
          if ( enemies->m_Items[v13 + 1] <= 0 )
            break;
          if ( v15 )
          {
            v16 = (QuestInformationListViewItem_o *)sub_1B64314(QuestInformationListViewItem_TypeInfo, v10, v11);
            v18 = (Il2CppObject *)v16;
            v19 = v14;
            v20 = v15;
            v21 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v13 >= (int)v12 )
            goto LABEL_21;
        }
        v16 = (QuestInformationListViewItem_o *)sub_1B64314(QuestInformationListViewItem_TypeInfo, v10, v11);
        v18 = (Il2CppObject *)v16;
        v21 = 1;
        v19 = v14;
        v20 = v15;
LABEL_14:
        QuestInformationListViewItem___ctor_33750932(v16, v19, v20, v21, v17);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v25 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
LABEL_23:
          sub_1B64324(itemList);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v18;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v18, v22, v23);
        }
        LODWORD(v12) = enemies->max_length;
        ++v14;
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestInformationListViewManager__CreateRewardItemList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  QuestInformationListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w29
  __int64 v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_49F94A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, items);
    this = (QuestInformationListViewManager_o *)sub_1B640C8(&QuestInformationListViewItem_TypeInfo, v7);
    byte_49F94A0 = 1;
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
          sub_1B6432C(this, items);
        v10 = items->m_Items[v9 + 1];
        v11 = sub_1B64314(QuestInformationListViewItem_TypeInfo, items, *(_QWORD *)&sum);
        ListViewItem___ctor_40370988((ListViewItem_o *)v11, v4 + v9, 0LL);
        *(_QWORD *)(v11 + 112) = 0x200000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v15 = itemList->fields._items,
              v16 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !v15) )
        {
          sub_1B64324(itemList);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v15->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &v15->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v11;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), v11, v12, v13);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)rewardSeed, (int32_t)items, (int32_t)svts);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestInformationListViewManager__CreateRewardSvtList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  QuestInformationListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w29
  __int64 v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_49F94A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, svts);
    this = (QuestInformationListViewManager_o *)sub_1B640C8(&QuestInformationListViewItem_TypeInfo, v7);
    byte_49F94A1 = 1;
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
          sub_1B6432C(this, svts);
        v10 = svts->m_Items[v9 + 1];
        v11 = sub_1B64314(QuestInformationListViewItem_TypeInfo, svts, *(_QWORD *)&sum);
        ListViewItem___ctor_40370988((ListViewItem_o *)v11, v4 + v9, 0LL);
        *(_QWORD *)(v11 + 112) = 0x100000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v16 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1B64324(itemList);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v11;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), v11, v12, v13);
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


void __fastcall QuestInformationListViewManager__DestroyList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array *loadedAssets; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F949D & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49F949D = 1;
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
      AssetManager__releaseAssetStorage_37486440(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadedAssets, 0, v4, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  ServantStatusBattleListViewItem_o *p_mChocoMaterialSp; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x20
  Il2CppObject *object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  QuestInformationListViewManager_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Material_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49F94A8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Material_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&QuestInformationListViewManager_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1B640C8(&StringLiteral_16091/*"_ChocoTex"*/, v6);
    sub_1B640C8(&StringLiteral_12673/*"Shaders/ChocoMap"*/, v7);
    byte_49F94A8 = 1;
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
                 (System_String_o *)StringLiteral_12673/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B6406C(p_mChocoTex, (int32_t)object, v13, v14);
    }
    v15 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v15 = QuestInformationListViewManager_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_SP, 0LL);
    v19 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v17, v18);
    UnityEngine_Material___ctor(v19, v16, 0LL);
    p_mChocoMaterialSp->klass = (ServantStatusBattleListViewItem_c *)v19;
    sub_1B6406C(p_mChocoMaterialSp, (int32_t)v19, v20, v21);
    if ( !p_mChocoMaterialSp->klass )
      sub_1B64324(0LL);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16091/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall QuestInformationListViewManager__NewChocoMaterialForTexture(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  ServantStatusBattleListViewItem_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x20
  Il2CppObject *object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  QuestInformationListViewManager_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Material_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49F94A7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Material_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&QuestInformationListViewManager_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1B640C8(&StringLiteral_16091/*"_ChocoTex"*/, v6);
    sub_1B640C8(&StringLiteral_12673/*"Shaders/ChocoMap"*/, v7);
    byte_49F94A7 = 1;
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
                 (System_String_o *)StringLiteral_12673/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B6406C(p_mChocoTex, (int32_t)object, v13, v14);
    }
    v15 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v15 = QuestInformationListViewManager_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_TX, 0LL);
    v19 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v17, v18);
    UnityEngine_Material___ctor(v19, v16, 0LL);
    p_mChocoMaterialTx->klass = (ServantStatusBattleListViewItem_c *)v19;
    sub_1B6406C(p_mChocoMaterialTx, (int32_t)v19, v20, v21);
    if ( !p_mChocoMaterialTx->klass )
      sub_1B64324(0LL);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16091/*"_ChocoTex"*/,
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
  struct ListViewItem_o *linkItem; // x19
  __int64 methodPtr_low; // x9
  int klass_high; // w8
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  UserItemData_o *UserItemData; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  CommonUI_o *v29; // x20
  QuestInformationListViewManager___c_c *v30; // x8
  ItemLinkInfoWindowComponent_CallbackFunc_o *_9__28_2; // x21
  Il2CppObject *v32; // x22
  struct QuestInformationListViewManager___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  int32_t monitor_high; // w19
  CommonUI_o *v41; // x20
  QuestInformationListViewManager___c_c *v42; // x8
  ServantStatusDialog_EndDelegate_o *_9__28_0; // x21
  Il2CppObject *v44; // x22
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
  __int64 v49; // x2
  Il2CppObject *v50; // x19
  CommonUI_o *v51; // x20
  QuestInformationListViewManager___c_c *v52; // x8
  ItemDetailInfoComponent_CallbackFunc_o *_9__28_1; // x21
  Il2CppObject *v54; // x22
  struct QuestInformationListViewManager___c_StaticFields *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  QuestInformationListViewManager_o *v58; // x0
  const MethodInfo *v59; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_49F94A6 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, obj);
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_1B640C8(&QuestInformationListViewItem_TypeInfo, v10);
    sub_1B640C8(&Method_QuestInformationListViewManager_OnClickListView__, v11);
    sub_1B640C8(&SceneList_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14);
    sub_1B640C8(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__, v15);
    sub_1B640C8(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__, v16);
    sub_1B640C8(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__, v17);
    this = (QuestInformationListViewManager_o *)sub_1B640C8(&QuestInformationListViewManager___c_TypeInfo, v18);
    byte_49F94A6 = 1;
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
    sub_1B645E4(linkItem);
    QuestInformationListViewManager__IsListBuilding(v58, v59);
    return;
  }
  if ( !LODWORD(linkItem[1].klass) )
  {
    klass_high = HIDWORD(linkItem[1].klass);
    if ( klass_high == 1 )
    {
      v36 = Method_QuestInformationListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v36 = (_QWORD *)sub_1B640E0(Method_QuestInformationListViewManager_OnClickListView__);
      v37 = (System_Reflection_MethodBase_o *)sub_1B640AC(v36, v36[4]);
      OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0LL);
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      monitor_high = HIDWORD(linkItem[1].monitor);
      v41 = (CommonUI_o *)this;
      v42 = QuestInformationListViewManager___c_TypeInfo;
      if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
        v42 = QuestInformationListViewManager___c_TypeInfo;
      }
      _9__28_0 = v42->static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = QuestInformationListViewManager___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v42->static_fields->__9;
        _9__28_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v38, v39);
        ServantStatusDialog_EndDelegate___ctor(
          _9__28_0,
          v44,
          Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__,
          0LL);
        static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__28_0 = _9__28_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v46, v47);
      }
      if ( v41 )
      {
        CommonUI__OpenServantStatusDialog_30358392(v41, 0, monitor_high, _9__28_0, 0LL);
        return;
      }
    }
    else
    {
      if ( klass_high != 2 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( this )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                &entity,
                HIDWORD(linkItem[1].monitor),
                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          return;
        v22 = Method_QuestInformationListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_1B640E0(Method_QuestInformationListViewManager_OnClickListView__);
        v23 = (System_Reflection_MethodBase_o *)sub_1B640AC(v22, v22[4]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
        this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0LL) )
            goto LABEL_43;
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !this )
            goto LABEL_51;
          NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)this, 0LL);
          if ( !SceneList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
          SceneName = SceneList__getSceneName(34, 0LL);
          if ( System_String__op_Equality(NowSceneName, SceneName, 0LL) )
          {
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0LL);
              this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v29 = (CommonUI_o *)this;
              v30 = QuestInformationListViewManager___c_TypeInfo;
              if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
                v30 = QuestInformationListViewManager___c_TypeInfo;
              }
              _9__28_2 = v30->static_fields->__9__28_2;
              if ( !_9__28_2 )
              {
                if ( !v30->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v30);
                  v30 = QuestInformationListViewManager___c_TypeInfo;
                }
                v32 = (Il2CppObject *)v30->static_fields->__9;
                _9__28_2 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B64314(
                                                                           ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                                           v27,
                                                                           v28);
                ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                  _9__28_2,
                  v32,
                  (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__,
                  0LL);
                v33 = QuestInformationListViewManager___c_TypeInfo->static_fields;
                v33->__9__28_2 = _9__28_2;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->__9__28_2, (int32_t)_9__28_2, v34, v35);
              }
              if ( v29 )
              {
                CommonUI__OpenItemLinkInfoDetailWindow_30436844(v29, UserItemData, _9__28_2, 0LL);
                return;
              }
            }
          }
          else
          {
LABEL_43:
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v50 = entity;
            v51 = (CommonUI_o *)this;
            v52 = QuestInformationListViewManager___c_TypeInfo;
            if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
              v52 = QuestInformationListViewManager___c_TypeInfo;
            }
            _9__28_1 = v52->static_fields->__9__28_1;
            if ( !_9__28_1 )
            {
              if ( !v52->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v52);
                v52 = QuestInformationListViewManager___c_TypeInfo;
              }
              v54 = (Il2CppObject *)v52->static_fields->__9;
              _9__28_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(
                                                                     ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                                     v48,
                                                                     v49);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                _9__28_1,
                v54,
                (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__,
                0LL);
              v55 = QuestInformationListViewManager___c_TypeInfo->static_fields;
              v55->__9__28_1 = _9__28_1;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->__9__28_1, (int32_t)_9__28_1, v56, v57);
            }
            if ( v51 )
            {
              CommonUI__OpenItemDetailDialog(v51, (ItemEntity_o *)v50, _9__28_1, 50, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_51:
    sub_1B64324(this);
  }
}


void __fastcall QuestInformationListViewManager__SetObjectItem(
        QuestInformationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49F94A5 & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_1B640C8(&QuestInformationListViewObject_TypeInfo, obj);
    byte_49F94A5 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(QuestInformationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  QuestInformationListViewObject__Init_33773872((QuestInformationListViewObject_o *)obj, 3, (const MethodInfo *)item);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x22
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  ItemMaster_o *v20; // x24
  unsigned __int64 v21; // x25
  int32_t *v22; // x27
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
  __int64 v34; // x8
  System_Collections_Generic_List_int__o *v35; // x0
  const MethodInfo_348FEDC *v36; // x2
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  System_Int32_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3

  if ( (byte_49F949F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, itms);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F949F = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    itms,
                                                    withoutQP);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  v19 = *(_QWORD *)&itms->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = (ItemMaster_o *)Instance;
    v21 = 0LL;
    v22 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
LABEL_43:
        sub_1B6432C(Instance, v18);
      v18 = (unsigned int)v22[v21];
      if ( !(_DWORD)v18 )
        break;
      if ( (_DWORD)v18 == -1 )
      {
        if ( !v16 )
          goto LABEL_42;
        items = v16->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v34 = v24[4];
          v35 = v16;
          goto LABEL_28;
        }
        v26 = (char *)items + 4 * size;
        v16->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v26 + 8) = 0;
        goto LABEL_38;
      }
      if ( !v20 )
        goto LABEL_42;
      Instance = (Il2CppObject *)ItemMaster__isQP(v20, v18, 0LL);
      if ( v21 >= itms->max_length )
        goto LABEL_43;
      v18 = (unsigned int)v22[v21];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_42;
        v30 = v16->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !v30 )
          goto LABEL_42;
        v32 = v16->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          v40 = v31[4];
          v35 = v16;
LABEL_36:
          v36 = *(const MethodInfo_348FEDC **)(*(_QWORD *)(v40 + 192) + 112LL);
          goto LABEL_37;
        }
        v33 = (char *)v30 + 4 * v32;
        v16->fields._size = v32 + 1;
      }
      else
      {
        if ( !v13 )
          goto LABEL_42;
        v37 = v13->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !v37 )
          goto LABEL_42;
        v39 = v13->fields._size;
        if ( (unsigned int)v39 >= v37->max_length )
        {
          v40 = v38[4];
          v35 = v13;
          goto LABEL_36;
        }
        v33 = (char *)v37 + 4 * v39;
        v13->fields._size = v39 + 1;
      }
      *((_DWORD *)v33 + 8) = v18;
LABEL_38:
      LODWORD(v19) = itms->max_length;
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_39;
    }
    if ( !v13 )
      goto LABEL_42;
    v27 = v13->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v27 )
      goto LABEL_42;
    v29 = v13->fields._size;
    if ( (unsigned int)v29 >= v27->max_length )
    {
      v34 = v28[4];
      v35 = v13;
LABEL_28:
      v36 = *(const MethodInfo_348FEDC **)(*(_QWORD *)(v34 + 192) + 112LL);
      LODWORD(v18) = 0;
LABEL_37:
      System_Collections_Generic_List_int___AddWithResize(v35, v18, v36);
      goto LABEL_38;
    }
    v26 = (char *)v27 + 4 * v29;
    v13->fields._size = v29 + 1;
    goto LABEL_18;
  }
LABEL_39:
  if ( !v13
    || (v41 = System_Collections_Generic_List_int___ToArray(
                v13,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v41,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)withoutQP, (int32_t)v41, v42, v43),
        !v16) )
  {
LABEL_42:
    sub_1B64324(Instance);
  }
  v44 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)qps, (int32_t)v44, v45, v46);
}


void __fastcall QuestInformationListViewManager__SplitSvtsWithCombineMaterial(
        QuestInformationListViewManager_o *this,
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_int__o *v17; // x22
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x24
  unsigned __int64 v22; // x25
  int32_t *v23; // x28
  int32_t v24; // w2
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  char *v28; // x8
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  char *v35; // x8
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  System_Collections_Generic_List_int__o *v40; // x0
  const MethodInfo_348FEDC *v41; // x2
  __int64 v42; // x8
  System_Int32_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Int32_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F949E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, svts);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49F949E = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    svts,
                                                    withoutCM);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v15, v16);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  v20 = *(_QWORD *)&svts->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v22 = 0LL;
    v23 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
LABEL_46:
        sub_1B6432C(Instance, v19);
      v24 = v23[v22];
      if ( !v24 )
        break;
      if ( v24 == -1 )
      {
        if ( !v17 )
          goto LABEL_45;
        items = v17->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v39 = v26[4];
          v40 = v17;
LABEL_36:
          v41 = *(const MethodInfo_348FEDC **)(*(_QWORD *)(v39 + 192) + 112LL);
          LODWORD(v19) = 0;
          goto LABEL_40;
        }
        v28 = (char *)items + 4 * size;
        v17->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v28 + 8) = 0;
        goto LABEL_41;
      }
      if ( !v21 )
        goto LABEL_45;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v21,
                                   &entity,
                                   v24,
                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v22 >= svts->max_length )
          goto LABEL_46;
        if ( !v17 )
          goto LABEL_45;
        v19 = (unsigned int)v23[v22];
        v32 = v17->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !v32 )
          goto LABEL_45;
        v34 = v17->fields._size;
        if ( (unsigned int)v34 >= v32->max_length )
        {
          v42 = v33[4];
          v40 = v17;
LABEL_39:
          v41 = *(const MethodInfo_348FEDC **)(*(_QWORD *)(v42 + 192) + 112LL);
LABEL_40:
          System_Collections_Generic_List_int___AddWithResize(v40, v19, v41);
          goto LABEL_41;
        }
        v35 = (char *)v32 + 4 * v34;
        v17->fields._size = v34 + 1;
      }
      else
      {
LABEL_28:
        if ( v22 >= svts->max_length )
          goto LABEL_46;
        if ( !v14 )
          goto LABEL_45;
        v19 = (unsigned int)v23[v22];
        v36 = v14->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !v36 )
          goto LABEL_45;
        v38 = v14->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          v42 = v37[4];
          v40 = v14;
          goto LABEL_39;
        }
        v35 = (char *)v36 + 4 * v38;
        v14->fields._size = v38 + 1;
      }
      *((_DWORD *)v35 + 8) = v19;
LABEL_41:
      LODWORD(v20) = svts->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_42;
    }
    if ( !v14 )
      goto LABEL_45;
    v29 = v14->fields._items;
    v30 = Method_System_Collections_Generic_List_int__Add__;
    ++v14->fields._version;
    if ( !v29 )
      goto LABEL_45;
    v31 = v14->fields._size;
    if ( (unsigned int)v31 >= v29->max_length )
    {
      v39 = v30[4];
      v40 = v14;
      goto LABEL_36;
    }
    v28 = (char *)v29 + 4 * v31;
    v14->fields._size = v31 + 1;
    goto LABEL_18;
  }
LABEL_42:
  if ( !v14
    || (v43 = System_Collections_Generic_List_int___ToArray(
                v14,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v43,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)withoutCM, (int32_t)v43, v44, v45),
        !v17) )
  {
LABEL_45:
    sub_1B64324(Instance);
  }
  v46 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)combineMaterials, (int32_t)v46, v47, v48);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F949C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F949C = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(
                                 (QuestInformationListViewObject_o *)Component_object,
                                 v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v12;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F949B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F949B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v12;
}


void __fastcall QuestInformationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F94AA & 1) == 0 )
  {
    sub_1B640C8(&QuestInformationListViewManager___c_TypeInfo, v1);
    byte_49F94AA = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestInformationListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestInformationListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestInformationListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestInformationListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall QuestInformationListViewManager___c___ctor(
        QuestInformationListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager___c___OnClickListView_b__28_0(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F94AD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49F94AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager___c___OnClickListView_b__28_1(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_49F94AC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B640C8(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__, v3);
    byte_49F94AC = 1;
  }
  v4 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager___c___OnClickListView_b__28_2(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_49F94AB & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B640C8(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__, v3);
    byte_49F94AB = 1;
  }
  v4 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v2; // x2
  QuestInformationListViewManager___c__DisplayClass25_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestInformationListViewManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__1; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  v3 = this;
  if ( (byte_49F94AE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v4);
    this = (QuestInformationListViewManager___c__DisplayClass25_0_o *)sub_1B640C8(
                                                                        &Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__,
                                                                        v5);
    byte_49F94AE = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37484096(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass25_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  QuestInformationListViewManager__CreateEnemyList_33773272(
    this->fields.__4__this,
    (int32_t)method,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}