void __fastcall QuestInformationListViewManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct QuestInformationListViewManager_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BD9434 & 1) == 0 )
  {
    sub_1C21E38(&QuestInformationListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_15393/*"Unlit/Transparent Colored_Choco"*/);
    sub_1C21E38(&StringLiteral_5082/*"Custom/SpriteWithMask_Choco"*/);
    byte_4BD9434 = 1;
  }
  QuestInformationListViewManager_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15393/*"Unlit/Transparent Colored_Choco"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestInformationListViewManager_TypeInfo->static_fields,
    StringLiteral_15393/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_5082/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = QuestInformationListViewManager_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5082/*"Custom/SpriteWithMask_Choco"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->CHOCO_SHADER_SP, v7, v9, v10, v11, v12, v13, v14);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t v8; // w20
  int v9; // w21
  struct ListViewItemSeed_o *rewardSeed; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v14; // x1
  int32_t v15; // w22
  int64_t v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  int64_t v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x8
  struct UIScrollView_o *scrollView; // x8

  v8 = svtCnt;
  v9 = itemCnt;
  if ( (byte_4BD942D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&QuestInformationListViewItem_TypeInfo);
    byte_4BD942D = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.seed = rewardSeed;
  this->fields.mIsBuildingList = 1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.seed,
    (int64_t)rewardSeed,
    *(int64_t *)&itemCnt,
    svtCnt,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( v9 >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = sub_1C22084(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_41996612((ListViewItem_o *)v16, v15, 0LL);
        *(_DWORD *)(v16 + 124) = 0;
        *(_QWORD *)(v16 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v16,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v16;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), v16, v17, v18, v19, v20, v21, v22);
        }
        if ( v9 == ++v15 )
          goto LABEL_14;
      }
LABEL_23:
      sub_1C22094(itemList, v14);
    }
    v9 = 0;
LABEL_14:
    if ( v8 >= 1 )
    {
      do
      {
        v27 = sub_1C22084(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_41996612((ListViewItem_o *)v27, v9, 0LL);
        *(_DWORD *)(v27 + 124) = 0;
        *(_QWORD *)(v27 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_23;
        v34 = itemList->fields._items;
        v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v34 )
          goto LABEL_23;
        v36 = itemList->fields._size;
        if ( (unsigned int)v36 >= v34->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v27,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &v34->obj.klass + v36;
          itemList->fields._size = v36 + 1;
          v37[4] = (Il2CppClass *)v27;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 4), v27, v28, v29, v30, v31, v32, v33);
        }
        --v8;
        ++v9;
      }
      while ( v8 );
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
  QuestMaster_o *QuestEntity; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct ListViewItemSeed_o *enemySeed; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v33; // x24
  unsigned int **v34; // x25
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  bool HasFlag; // w28
  Il2CppObject *v42; // x27
  __int64 v43; // x8
  int64_t v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x8
  __int64 v57; // x29
  __int64 v58; // x23
  __int64 v59; // x26
  unsigned __int64 v60; // x9
  unsigned __int64 v61; // x19
  int32_t v62; // w3
  __int64 v63; // x8
  ViewEnemyEntity_o *v64; // x27
  unsigned int *v65; // x8
  PartyOrganizationUtility_o *v66; // x0
  System_String_o *v67; // x0
  Il2CppObject *v68; // x27
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  ViewEnemyEntity_o *v79; // x28
  unsigned int *v80; // x28
  System_Object_array *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Action_o *v88; // x19
  __int64 v89; // x0
  QuestInformationListViewManager_o *v90; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v91; // [xsp+8h] [xbp-88h]
  bool v92; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v94; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v95; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BD942E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__);
    sub_1C21E38(&QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo);
    sub_1C21E38(&ViewEnemyEntity___TypeInfo);
    sub_1C21E38(&ViewEnemyEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_12903/*"Servants/Commands/"*/);
    byte_4BD942E = 1;
  }
  v94 = 0LL;
  v95 = 0LL;
  entity = 0LL;
  v9 = sub_1C22084(QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_67;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = enemies;
  v18 = (__int64 *)(v9 + 32);
  *(_DWORD *)(v9 + 24) = questId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)enemies, v19, v20, v21, v22, v23, v24);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)enemySeed, v25, v26, v27, v28, v29, v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  v91 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 40) = 0LL;
  v34 = (unsigned int **)(v9 + 40);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), 0LL, v35, v36, v37, v38, v39, v40);
  QuestEntity = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_67;
  QuestEntity = (QuestMaster_o *)QuestMaster__getQuestEntity(QuestEntity, *(_DWORD *)(v9 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_67;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v42 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  v90 = this;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v42 )
    goto LABEL_67;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v42,
    &entity,
    (int64_t)QuestEntity[2].fields.list[1].monitor,
    *(_DWORD *)(v9 + 24),
    0LL);
  v43 = *(_QWORD *)(v9 + 32);
  if ( v43 )
  {
    v44 = sub_1C21EE0(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v43 + 24));
    *v34 = (unsigned int *)v44;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), v44, v45, v46, v47, v48, v49, v50);
    v56 = *v18;
    if ( !*v18 )
      goto LABEL_67;
    v57 = 0LL;
    v58 = 8LL;
    v59 = 8LL;
    v92 = HasFlag;
    while ( 1 )
    {
      v60 = *(unsigned int *)(v56 + 24);
      v61 = v58 - 8;
      if ( v58 - 8 >= (int)v60 )
        break;
      if ( v61 >= v60 )
        goto LABEL_68;
      v62 = *(_DWORD *)(v56 + 4 * v58);
      if ( v62 < 1 )
        goto LABEL_43;
      if ( !Master_object )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)ViewEnemyMaster__TryGetEntity(
                                       (ViewEnemyMaster_o *)Master_object,
                                       &v94,
                                       *(_DWORD *)(v9 + 24),
                                       v62,
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
        if ( !v94 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)System_Linq_Enumerable__Contains_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                                         v94->fields.enemyId,
                                         (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
LABEL_32:
          v63 = *v18;
          if ( !*v18 )
            goto LABEL_67;
          if ( v61 >= *(unsigned int *)(v63 + 24) )
            goto LABEL_68;
          *(_DWORD *)(v63 + 4 * v58) = 0;
        }
      }
      if ( !v94 || !v33 )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                       &v95,
                                       v94->fields.svtId,
                                       (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestEntity & 1) != 0 )
      {
        QuestEntity = (QuestMaster_o *)v95;
        if ( !v95 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)v95, 0LL);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          goto LABEL_42;
        QuestEntity = (QuestMaster_o *)v94;
        if ( !v94 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ViewEnemyEntity__IsIconIdUnique(v94, 0LL);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
          if ( !v94 )
            goto LABEL_67;
          v67 = System_Int32__ToString((int)v94 + 36, 0LL);
          v68 = (Il2CppObject *)System_String__Concat_63115476((System_String_o *)StringLiteral_12903/*"Servants/Commands/"*/, v67, 0LL);
          QuestEntity = (QuestMaster_o *)v91;
          if ( !v91 )
            goto LABEL_67;
          QuestEntity = (QuestMaster_o *)System_Collections_Generic_List_object___Contains(
                                           v91,
                                           v68,
                                           (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          {
            items = v91->fields._items;
            v76 = Method_System_Collections_Generic_List_string__Add__;
            ++v91->fields._version;
            if ( !items )
              goto LABEL_67;
            size = v91->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v91,
                v68,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
            }
            else
            {
              v78 = &items->obj.klass + size;
              v91->fields._size = size + 1;
              v78[4] = (Il2CppClass *)v68;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v78 + 4), (int64_t)v68, v69, v70, v71, v72, v73, v74);
            }
          }
          v79 = v94;
          v64 = (ViewEnemyEntity_o *)sub_1C22084(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_41556948(v64, v79, 0LL);
          v94 = v64;
          if ( !v64 )
            goto LABEL_67;
          v64->fields.iconId = 0;
        }
        else
        {
LABEL_42:
          v64 = v94;
        }
        v80 = *v34;
        if ( !*v34 )
          goto LABEL_67;
        if ( v64 )
        {
          QuestEntity = (QuestMaster_o *)sub_1C21F74(v64, *(_QWORD *)(*(_QWORD *)v80 + 64LL));
          if ( !QuestEntity )
          {
            v89 = sub_1C220B8();
            sub_1C21F60(v89, 0LL);
          }
        }
        if ( v61 >= v80[6] )
LABEL_68:
          sub_1C2209C(QuestEntity, v11);
        v66 = (PartyOrganizationUtility_o *)&v80[v59];
        HasFlag = v92;
        v66->klass = (PartyOrganizationUtility_c *)v64;
      }
      else
      {
LABEL_43:
        v65 = *v34;
        if ( !*v34 )
          goto LABEL_67;
        if ( v61 >= v65[6] )
          goto LABEL_68;
        v64 = 0LL;
        v66 = (PartyOrganizationUtility_o *)&v65[2 * v57 + 8];
        *(_QWORD *)&v65[v59] = 0LL;
      }
      sub_1C21DDC(v66, (int64_t)v64, v51, v62, v52, v53, v54, v55);
      v56 = *v18;
      ++v57;
      ++v58;
      v59 += 2LL;
      if ( !*v18 )
        goto LABEL_67;
    }
  }
  QuestEntity = (QuestMaster_o *)v91;
  if ( !v91 )
LABEL_67:
    sub_1C22094(QuestEntity, v11);
  v81 = System_Collections_Generic_List_object___ToArray(
          v91,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
  v90->fields.loadedAssets = (struct System_String_array *)v81;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v90->fields.loadedAssets, (int64_t)v81, v82, v83, v84, v85, v86, v87);
  v90->fields.loading = 1;
  v88 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v88,
    (Il2CppObject *)v9,
    Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v88, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_35146652(
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8

  if ( (byte_4BD942F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&QuestInformationListViewItem_TypeInfo);
    byte_4BD942F = 1;
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
            sub_1C2209C(itemList, v9);
          v13 = veEnts->m_Items[v11];
          if ( enemies->m_Items[v11 + 1] <= 0 )
            break;
          if ( v13 )
          {
            v14 = (QuestInformationListViewItem_o *)sub_1C22084(QuestInformationListViewItem_TypeInfo);
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
        v14 = (QuestInformationListViewItem_o *)sub_1C22084(QuestInformationListViewItem_TypeInfo);
        v16 = (Il2CppObject *)v14;
        v19 = 1;
        v17 = v12;
        v18 = v13;
LABEL_14:
        QuestInformationListViewItem___ctor_35134616(v14, v17, v18, v19, v15);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v27 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
LABEL_23:
          sub_1C22094(itemList, v9);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            v16,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v16;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v16, v20, v21, v22, v23, v24, v25);
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
  int64_t v10; // x22
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  v6 = this;
  if ( (byte_4BD942B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (QuestInformationListViewManager_o *)sub_1C21E38(&QuestInformationListViewItem_TypeInfo);
    byte_4BD942B = 1;
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
          sub_1C2209C(this, items);
        v9 = items->m_Items[v8 + 1];
        v10 = sub_1C22084(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_41996612((ListViewItem_o *)v10, sum + v8, 0LL);
        *(_QWORD *)(v10 + 112) = 0x200000000LL;
        *(_DWORD *)(v10 + 124) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v19 = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !v19) )
        {
          sub_1C22094(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v19->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &v19->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), v10, v12, v13, v14, v15, v16, v17);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ListViewItemSeed_o *rewardSeed; // x1
  struct ListViewItemSeed_o **p_seed; // x0
  QuestInformationListViewManager_o *v14; // x0
  const MethodInfo *v15; // x4
  QuestInformationListViewManager_o *v16; // x0
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x3
  int32_t RewardSvtList; // w0
  const MethodInfo *v20; // x3
  int32_t RewardItemList; // w0
  const MethodInfo *v22; // x3
  int32_t v23; // w0
  const MethodInfo *v24; // x3
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)p_seed,
    (int64_t)rewardSeed,
    (int64_t)items,
    (int32_t)svts,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    QuestInformationListViewManager__SplitSvtsWithCombineMaterial(v14, svts, &withoutCM, &combineMaterials, v15);
    QuestInformationListViewManager__SplitItemsWithQP(v16, items, &withoutQP, &qps, v17);
    RewardSvtList = QuestInformationListViewManager__CreateRewardSvtList(this, withoutCM, 0, v18);
    RewardItemList = QuestInformationListViewManager__CreateRewardItemList(this, withoutQP, RewardSvtList, v20);
    v23 = QuestInformationListViewManager__CreateRewardSvtList(this, combineMaterials, RewardItemList, v22);
    QuestInformationListViewManager__CreateRewardItemList(this, qps, v23, v24);
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
  int64_t v10; // x22
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  v6 = this;
  if ( (byte_4BD942C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (QuestInformationListViewManager_o *)sub_1C21E38(&QuestInformationListViewItem_TypeInfo);
    byte_4BD942C = 1;
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
          sub_1C2209C(this, svts);
        v9 = svts->m_Items[v8 + 1];
        v10 = sub_1C22084(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_41996612((ListViewItem_o *)v10, sum + v8, 0LL);
        *(_QWORD *)(v10 + 112) = 0x100000000LL;
        *(_DWORD *)(v10 + 124) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C22094(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), v10, v12, v13, v14, v15, v16, v17);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD9428 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD9428 = 1;
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
      AssetManager__releaseAssetStorage_39043848(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.loadedAssets, 0LL, v4, v5, v6, v7, v8, v9);
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
  PartyOrganizationUtility_o *p_mChocoMaterialSp; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x20
  Il2CppObject *object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  QuestInformationListViewManager_c *v14; // x0
  UnityEngine_Shader_o *v15; // x21
  UnityEngine_Material_o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1

  if ( (byte_4BD9433 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestInformationListViewManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C21E38(&StringLiteral_16436/*"_ChocoTex"*/);
    sub_1C21E38(&StringLiteral_12985/*"Shaders/ChocoMap"*/);
    byte_4BD9433 = 1;
  }
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mChocoMaterialSp = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialSp;
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1C21DDC(p_mChocoTex, (int64_t)object, v8, v9, v10, v11, v12, v13);
    }
    v14 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v14 = QuestInformationListViewManager_TypeInfo;
    }
    v15 = UnityEngine_Shader__Find(v14->static_fields->CHOCO_SHADER_SP, 0LL);
    v16 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v16, v15, 0LL);
    p_mChocoMaterialSp->klass = (PartyOrganizationUtility_c *)v16;
    sub_1C21DDC(p_mChocoMaterialSp, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    if ( !p_mChocoMaterialSp->klass )
      sub_1C22094(0LL, v23);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16436/*"_ChocoTex"*/,
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
  PartyOrganizationUtility_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x20
  Il2CppObject *object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  QuestInformationListViewManager_c *v14; // x0
  UnityEngine_Shader_o *v15; // x21
  UnityEngine_Material_o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1

  if ( (byte_4BD9432 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestInformationListViewManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C21E38(&StringLiteral_16436/*"_ChocoTex"*/);
    sub_1C21E38(&StringLiteral_12985/*"Shaders/ChocoMap"*/);
    byte_4BD9432 = 1;
  }
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mChocoMaterialTx = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialTx;
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1C21DDC(p_mChocoTex, (int64_t)object, v8, v9, v10, v11, v12, v13);
    }
    v14 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v14 = QuestInformationListViewManager_TypeInfo;
    }
    v15 = UnityEngine_Shader__Find(v14->static_fields->CHOCO_SHADER_TX, 0LL);
    v16 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v16, v15, 0LL);
    p_mChocoMaterialTx->klass = (PartyOrganizationUtility_c *)v16;
    sub_1C21DDC(p_mChocoMaterialTx, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    if ( !p_mChocoMaterialTx->klass )
      sub_1C22094(0LL, v23);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16436/*"_ChocoTex"*/,
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  int32_t monitor_high; // w19
  CommonUI_o *v27; // x20
  QuestInformationListViewManager___c_c *v28; // x8
  ServantStatusDialog_EndDelegate_o *_9__28_0; // x21
  Il2CppObject *v30; // x22
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x19
  CommonUI_o *v39; // x20
  QuestInformationListViewManager___c_c *v40; // x8
  ItemDetailInfoComponent_CallbackFunc_o *_9__28_1; // x21
  Il2CppObject *v42; // x22
  struct QuestInformationListViewManager___c_StaticFields *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  QuestInformationListViewManager_o *v50; // x0
  const MethodInfo *v51; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4BD9431 & 1) == 0 )
  {
    sub_1C21E38(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&QuestInformationListViewItem_TypeInfo);
    sub_1C21E38(&Method_QuestInformationListViewManager_OnClickListView__);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__);
    sub_1C21E38(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__);
    sub_1C21E38(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__);
    this = (QuestInformationListViewManager_o *)sub_1C21E38(&QuestInformationListViewManager___c_TypeInfo);
    byte_4BD9431 = 1;
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
    sub_1C22354(linkItem);
    QuestInformationListViewManager__IsListBuilding(v50, v51);
    return;
  }
  if ( !LODWORD(linkItem[1].klass) )
  {
    klass_high = HIDWORD(linkItem[1].klass);
    if ( klass_high == 1 )
    {
      v24 = Method_QuestInformationListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_1C21E50(Method_QuestInformationListViewManager_OnClickListView__);
      v25 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0LL);
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      monitor_high = HIDWORD(linkItem[1].monitor);
      v27 = (CommonUI_o *)this;
      v28 = QuestInformationListViewManager___c_TypeInfo;
      if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
        v28 = QuestInformationListViewManager___c_TypeInfo;
      }
      _9__28_0 = v28->static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = QuestInformationListViewManager___c_TypeInfo;
        }
        v30 = (Il2CppObject *)v28->static_fields->__9;
        _9__28_0 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__28_0,
          v30,
          Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__,
          0LL);
        static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__28_0 = _9__28_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
          (int64_t)_9__28_0,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      if ( v27 )
      {
        CommonUI__OpenServantStatusDialog_31141516(v27, 0, monitor_high, _9__28_0, 0LL);
        return;
      }
    }
    else
    {
      if ( klass_high != 2 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( this )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                &entity,
                HIDWORD(linkItem[1].monitor),
                (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          return;
        v8 = Method_QuestInformationListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C21E50(Method_QuestInformationListViewManager_OnClickListView__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
        this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0LL) )
            goto LABEL_43;
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !this )
            goto LABEL_51;
          NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)this, 0LL);
          if ( !SceneList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
          SceneName = SceneList__getSceneName(34, 0LL);
          if ( System_String__op_Equality(NowSceneName, SceneName, 0LL) )
          {
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0LL);
              this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                _9__28_2 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C22084(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
                ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                  _9__28_2,
                  v16,
                  (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__,
                  0LL);
                v17 = QuestInformationListViewManager___c_TypeInfo->static_fields;
                v17->__9__28_2 = _9__28_2;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&v17->__9__28_2,
                  (int64_t)_9__28_2,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23);
              }
              if ( v13 )
              {
                CommonUI__OpenItemLinkInfoDetailWindow_31232736(v13, UserItemData, _9__28_2, 0LL);
                return;
              }
            }
          }
          else
          {
LABEL_43:
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v38 = entity;
            v39 = (CommonUI_o *)this;
            v40 = QuestInformationListViewManager___c_TypeInfo;
            if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
              v40 = QuestInformationListViewManager___c_TypeInfo;
            }
            _9__28_1 = v40->static_fields->__9__28_1;
            if ( !_9__28_1 )
            {
              if ( !v40->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v40);
                v40 = QuestInformationListViewManager___c_TypeInfo;
              }
              v42 = (Il2CppObject *)v40->static_fields->__9;
              _9__28_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C22084(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                _9__28_1,
                v42,
                (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__,
                0LL);
              v43 = QuestInformationListViewManager___c_TypeInfo->static_fields;
              v43->__9__28_1 = _9__28_1;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v43->__9__28_1,
                (int64_t)_9__28_1,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49);
            }
            if ( v39 )
            {
              CommonUI__OpenItemDetailDialog(v39, (ItemEntity_o *)v38, _9__28_1, 50, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_51:
    sub_1C22094(this, obj);
  }
}


void __fastcall QuestInformationListViewManager__SetObjectItem(
        QuestInformationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4BD9430 & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_1C21E38(&QuestInformationListViewObject_TypeInfo);
    byte_4BD9430 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(QuestInformationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_1C22094(this, obj);
  }
  QuestInformationListViewObject__Init_35147252((QuestInformationListViewObject_o *)obj, 3, (const MethodInfo *)item);
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
  const MethodInfo_3632090 *v29; // x2
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  System_Int32_array *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Int32_array *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4BD942A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD942A = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_1C2209C(Instance, v11);
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
          v29 = *(const MethodInfo_3632090 **)(*(_QWORD *)(v33 + 192) + 112LL);
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
      v29 = *(const MethodInfo_3632090 **)(*(_QWORD *)(v27 + 192) + 112LL);
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
                (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v34,
        sub_1C21DDC((PartyOrganizationUtility_o *)withoutQP, (int64_t)v34, v35, v36, v37, v38, v39, v40),
        !v9) )
  {
LABEL_42:
    sub_1C22094(Instance, v11);
  }
  v41 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v41;
  sub_1C21DDC((PartyOrganizationUtility_o *)qps, (int64_t)v41, v42, v43, v44, v45, v46, v47);
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
  const MethodInfo_3632090 *v33; // x2
  __int64 v34; // x8
  System_Int32_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Int32_array *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BD9429 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9429 = 1;
  }
  entity = 0LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1C2209C(Instance, v11);
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
          v33 = *(const MethodInfo_3632090 **)(*(_QWORD *)(v31 + 192) + 112LL);
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
                                   (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
          v33 = *(const MethodInfo_3632090 **)(*(_QWORD *)(v34 + 192) + 112LL);
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
                (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v35,
        sub_1C21DDC((PartyOrganizationUtility_o *)withoutCM, (int64_t)v35, v36, v37, v38, v39, v40, v41),
        !v9) )
  {
LABEL_45:
    sub_1C22094(Instance, v11);
  }
  v42 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v42;
  sub_1C21DDC((PartyOrganizationUtility_o *)combineMaterials, (int64_t)v42, v43, v44, v45, v46, v47, v48);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BD9427 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9427 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C22094(0LL, v10);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(
                                 (QuestInformationListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C22094(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_42012552((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C22094(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C22094(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C22094(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C22094(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD9426 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9426 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v16 = (int64_t)Component_object;
      if ( !v3 )
        sub_1C22094(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v3;
}


void __fastcall QuestInformationListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD9435 & 1) == 0 )
  {
    sub_1C21E38(&QuestInformationListViewManager___c_TypeInfo);
    byte_4BD9435 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestInformationListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestInformationListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestInformationListViewManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestInformationListViewManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BD9438 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD9438 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BD9437 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__);
    byte_4BD9437 = 1;
  }
  v3 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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

  if ( (byte_4BD9436 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__);
    byte_4BD9436 = 1;
  }
  v3 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v2 = this;
  if ( (byte_4BD9439 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    this = (QuestInformationListViewManager___c__DisplayClass25_0_o *)sub_1C21E38(&Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__);
    byte_4BD9439 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__1, (int64_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39041504(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass25_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  QuestInformationListViewManager__CreateEnemyList_35146652(
    this->fields.__4__this,
    (int32_t)method,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}