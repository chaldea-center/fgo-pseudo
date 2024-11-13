void __fastcall QuestInformationListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct QuestInformationListViewManager_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1315D & 1) == 0 )
  {
    sub_1BCA7E0(&QuestInformationListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/, v10, v11);
    byte_4B1315D = 1;
  }
  QuestInformationListViewManager_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestInformationListViewManager_TypeInfo->static_fields,
    StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = QuestInformationListViewManager_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->CHOCO_SHADER_SP, v12, v14, v15, v16, v17, v18, v19);
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
  __int64 v12; // x1
  __int64 v13; // x2
  struct ListViewItemSeed_o *rewardSeed; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  int32_t v19; // w22
  int64_t v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  int64_t v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x8
  struct UIScrollView_o *scrollView; // x8

  v8 = svtCnt;
  v9 = itemCnt;
  if ( (byte_4B13156 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind, *(_QWORD *)&itemCnt);
    sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v12, v13);
    byte_4B13156 = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.seed = rewardSeed;
  this->fields.mIsBuildingList = 1;
  sub_1BCA784(
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
      v19 = 0;
      while ( 1 )
      {
        v20 = sub_1BCAA2C(QuestInformationListViewItem_TypeInfo, v16, v17, v18);
        ListViewItem___ctor_41447164((ListViewItem_o *)v20, v19, 0LL);
        *(_DWORD *)(v20 + 124) = 0;
        *(_QWORD *)(v20 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v20,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v20;
          sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), v20, v21, v22, v23, v24, v25, v26);
        }
        if ( v9 == ++v19 )
          goto LABEL_14;
      }
LABEL_23:
      sub_1BCAA3C(itemList, v16);
    }
    v9 = 0;
LABEL_14:
    if ( v8 >= 1 )
    {
      do
      {
        v31 = sub_1BCAA2C(QuestInformationListViewItem_TypeInfo, v16, v17, v18);
        ListViewItem___ctor_41447164((ListViewItem_o *)v31, v9, 0LL);
        *(_DWORD *)(v31 + 124) = 0;
        *(_QWORD *)(v31 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_23;
        v38 = itemList->fields._items;
        v39 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v38 )
          goto LABEL_23;
        v40 = itemList->fields._size;
        if ( (unsigned int)v40 >= v38->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v31,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &v38->obj.klass + v40;
          itemList->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)v31;
          sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), v31, v32, v33, v34, v35, v36, v37);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x20
  __int64 QuestEntity; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 *v56; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct ListViewItemSeed_o *enemySeed; // x1
  __int64 v70; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v72; // x24
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  unsigned int **v76; // x25
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x1
  bool HasFlag; // w28
  __int64 v85; // x1
  Il2CppObject *v86; // x27
  __int64 v87; // x8
  int64_t v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x2
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x8
  __int64 v101; // x29
  __int64 v102; // x23
  __int64 v103; // x26
  unsigned __int64 v104; // x9
  unsigned __int64 v105; // x19
  int32_t v106; // w3
  __int64 v107; // x8
  ViewEnemyEntity_o *v108; // x27
  unsigned int *v109; // x8
  PartyOrganizationUtility_o *v110; // x0
  System_String_o *v111; // x0
  Il2CppObject *v112; // x27
  int64_t v113; // x2
  __int64 v114; // x3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  struct System_Object_array *items; // x8
  _QWORD *v120; // x9
  __int64 size; // x10
  Il2CppClass **v122; // x0
  ViewEnemyEntity_o *v123; // x28
  unsigned int *v124; // x28
  System_Object_array *v125; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  System_Action_o *v135; // x19
  __int64 v136; // x1
  __int64 v137; // x0
  QuestInformationListViewManager_o *v138; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v139; // [xsp+8h] [xbp-88h]
  bool v140; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v142; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v143; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B13157 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&questId);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ViewEnemyMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v33, v34);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__, v37, v38);
    sub_1BCA7E0(&QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo, v39, v40);
    sub_1BCA7E0(&ViewEnemyEntity___TypeInfo, v41, v42);
    sub_1BCA7E0(&ViewEnemyEntity_TypeInfo, v43, v44);
    sub_1BCA7E0(&StringLiteral_12814/*"Servants/Commands/"*/, v45, v46);
    byte_4B13157 = 1;
  }
  v142 = 0LL;
  v143 = 0LL;
  entity = 0LL;
  v47 = sub_1BCAA2C(
          QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&questId,
          enemies);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  if ( !v47 )
    goto LABEL_63;
  *(_QWORD *)(v47 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 16), (int64_t)this, v50, v51, v52, v53, v54, v55);
  *(_QWORD *)(v47 + 32) = enemies;
  v56 = (__int64 *)(v47 + 32);
  *(_DWORD *)(v47 + 24) = questId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 32), (int64_t)enemies, v57, v58, v59, v60, v61, v62);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)enemySeed, v63, v64, v65, v66, v67, v68);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v70);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v72 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v139 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v73,
                                                        v74,
                                                        v75);
  System_Collections_Generic_List_object____ctor(
    v139,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v47 + 40) = 0LL;
  v76 = (unsigned int **)(v47 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 40), 0LL, v77, v78, v79, v80, v81, v82);
  QuestEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_63;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v47 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_63;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v83);
  v138 = this;
  v86 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v85);
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v86 )
    goto LABEL_63;
  UserQuestInfoMaster__TryGetEntity((UserQuestInfoMaster_o *)v86, &entity, QuestEntity, *(_DWORD *)(v47 + 24), 0LL);
  v87 = *(_QWORD *)(v47 + 32);
  if ( v87 )
  {
    v88 = sub_1BCA888(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v87 + 24));
    *v76 = (unsigned int *)v88;
    sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 40), v88, v89, v90, v91, v92, v93, v94);
    v100 = *v56;
    if ( !*v56 )
      goto LABEL_63;
    v101 = 0LL;
    v102 = 8LL;
    v103 = 8LL;
    v140 = HasFlag;
    while ( 1 )
    {
      v104 = *(unsigned int *)(v100 + 24);
      v105 = v102 - 8;
      if ( v102 - 8 >= (int)v104 )
        break;
      if ( v105 >= v104 )
        goto LABEL_64;
      v106 = *(_DWORD *)(v100 + 4 * v102);
      if ( v106 < 1 )
        goto LABEL_39;
      if ( !Master_object )
        goto LABEL_63;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      (ViewEnemyMaster_o *)Master_object,
                      &v142,
                      *(_DWORD *)(v47 + 24),
                      v106,
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
        if ( !v142 )
          goto LABEL_63;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v142->fields.enemyId,
                        (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_28:
          v107 = *v56;
          if ( !*v56 )
            goto LABEL_63;
          if ( v105 >= *(unsigned int *)(v107 + 24) )
            goto LABEL_64;
          *(_DWORD *)(v107 + 4 * v102) = 0;
        }
      }
      if ( !v142 || !v72 )
        goto LABEL_63;
      QuestEntity = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v72,
                      &v143,
                      v142->fields.svtId,
                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v143;
        if ( !v143 )
          goto LABEL_63;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v143, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_38;
        QuestEntity = (__int64)v142;
        if ( !v142 )
          goto LABEL_63;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v142, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v142 )
            goto LABEL_63;
          v111 = System_Int32__ToString((int)v142 + 36, 0LL);
          v112 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_12814/*"Servants/Commands/"*/, v111, 0LL);
          QuestEntity = (__int64)v139;
          if ( !v139 )
            goto LABEL_63;
          QuestEntity = System_Collections_Generic_List_object___Contains(
                          v139,
                          v112,
                          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
          if ( (QuestEntity & 1) == 0 )
          {
            items = v139->fields._items;
            v120 = Method_System_Collections_Generic_List_string__Add__;
            ++v139->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v139->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v139,
                v112,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
            }
            else
            {
              v122 = &items->obj.klass + size;
              v139->fields._size = size + 1;
              v122[4] = (Il2CppClass *)v112;
              sub_1BCA784((PartyOrganizationUtility_o *)(v122 + 4), (int64_t)v112, v113, v114, v115, v116, v117, v118);
            }
          }
          v123 = v142;
          v108 = (ViewEnemyEntity_o *)sub_1BCAA2C(ViewEnemyEntity_TypeInfo, v49, v113, v114);
          ViewEnemyEntity___ctor_41013736(v108, v123, 0LL);
          v142 = v108;
          if ( !v108 )
            goto LABEL_63;
          v108->fields.iconId = 0;
        }
        else
        {
LABEL_38:
          v108 = v142;
        }
        v124 = *v76;
        if ( !*v76 )
          goto LABEL_63;
        if ( v108 )
        {
          QuestEntity = sub_1BCA91C(v108, *(_QWORD *)(*(_QWORD *)v124 + 64LL));
          if ( !QuestEntity )
          {
            v137 = sub_1BCAA60();
            sub_1BCA908(v137, 0LL);
          }
        }
        if ( v105 >= v124[6] )
LABEL_64:
          sub_1BCAA44(QuestEntity, v49);
        v110 = (PartyOrganizationUtility_o *)&v124[v103];
        HasFlag = v140;
        v110->klass = (PartyOrganizationUtility_c *)v108;
      }
      else
      {
LABEL_39:
        v109 = *v76;
        if ( !*v76 )
          goto LABEL_63;
        if ( v105 >= v109[6] )
          goto LABEL_64;
        v108 = 0LL;
        v110 = (PartyOrganizationUtility_o *)&v109[2 * v101 + 8];
        *(_QWORD *)&v109[v103] = 0LL;
      }
      sub_1BCA784(v110, (int64_t)v108, v95, v106, v96, v97, v98, v99);
      v100 = *v56;
      ++v101;
      ++v102;
      v103 += 2LL;
      if ( !*v56 )
        goto LABEL_63;
    }
  }
  QuestEntity = (__int64)v139;
  if ( !v139 )
LABEL_63:
    sub_1BCAA3C(QuestEntity, v49);
  v125 = System_Collections_Generic_List_object___ToArray(
           v139,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v138->fields.loadedAssets = (struct System_String_array *)v125;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v138->fields.loadedAssets,
    (int64_t)v125,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  v138->fields.loading = 1;
  v135 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v132, v133, v134);
  System_Action___ctor(
    v135,
    (Il2CppObject *)v47,
    Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v136);
  AtlasManager__LoadEnemyAtlas(v135, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_34674920(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x25
  int32_t v16; // w22
  ViewEnemyEntity_o *v17; // x24
  QuestInformationListViewItem_o *v18; // x0
  const MethodInfo *v19; // x4
  Il2CppObject *v20; // x23
  int32_t v21; // w1
  ViewEnemyEntity_o *v22; // x2
  bool v23; // w3
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8

  if ( (byte_4B13158 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId, enemies);
    sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v8, v9);
    byte_4B13158 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( enemies )
    {
      v14 = *(_QWORD *)&enemies->max_length;
      if ( (int)v14 >= 1 )
      {
        v15 = 0LL;
        v16 = 0;
        while ( 1 )
        {
          if ( v15 >= (unsigned int)v14 )
            goto LABEL_24;
          if ( !veEnts )
            goto LABEL_23;
          if ( v15 >= veEnts->max_length )
LABEL_24:
            sub_1BCAA44(itemList, v11);
          v17 = veEnts->m_Items[v15];
          if ( enemies->m_Items[v15 + 1] <= 0 )
            break;
          if ( v17 )
          {
            v18 = (QuestInformationListViewItem_o *)sub_1BCAA2C(QuestInformationListViewItem_TypeInfo, v11, v12, v13);
            v20 = (Il2CppObject *)v18;
            v21 = v16;
            v22 = v17;
            v23 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v15 >= (int)v14 )
            goto LABEL_21;
        }
        v18 = (QuestInformationListViewItem_o *)sub_1BCAA2C(QuestInformationListViewItem_TypeInfo, v11, v12, v13);
        v20 = (Il2CppObject *)v18;
        v23 = 1;
        v21 = v16;
        v22 = v17;
LABEL_14:
        QuestInformationListViewItem___ctor_34662932(v18, v21, v22, v23, v19);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v31 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
LABEL_23:
          sub_1BCAA3C(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            v20,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v20;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v20, v24, v25, v26, v27, v28, v29);
        }
        LODWORD(v14) = enemies->max_length;
        ++v16;
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
  __int64 v8; // x2
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  int32_t v11; // w29
  int64_t v12; // x22
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_4B13154 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, items, *(_QWORD *)&sum);
    this = (QuestInformationListViewManager_o *)sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v7, v8);
    byte_4B13154 = 1;
  }
  if ( items )
  {
    v9 = *(_QWORD *)&items->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v9 )
          sub_1BCAA44(this, items);
        v11 = items->m_Items[v10 + 1];
        v12 = sub_1BCAA2C(QuestInformationListViewItem_TypeInfo, items, *(_QWORD *)&sum, method);
        ListViewItem___ctor_41447164((ListViewItem_o *)v12, v4 + v10, 0LL);
        *(_QWORD *)(v12 + 112) = 0x200000000LL;
        *(_DWORD *)(v12 + 124) = v11;
        if ( !v11 )
          *(_DWORD *)(v12 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v21 = itemList->fields._items,
              v22 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !v21) )
        {
          sub_1BCAA3C(itemList, v13);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v21->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v12,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &v21->obj.klass + size;
          itemList->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v12;
          sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 4), v12, v14, v15, v16, v17, v18, v19);
        }
        LODWORD(v9) = items->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)v9 );
      v4 += v10;
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
  sub_1BCA784(
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
  __int64 v8; // x2
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  int32_t v11; // w29
  int64_t v12; // x22
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_4B13155 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, svts, *(_QWORD *)&sum);
    this = (QuestInformationListViewManager_o *)sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v7, v8);
    byte_4B13155 = 1;
  }
  if ( svts )
  {
    v9 = *(_QWORD *)&svts->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v9 )
          sub_1BCAA44(this, svts);
        v11 = svts->m_Items[v10 + 1];
        v12 = sub_1BCAA2C(QuestInformationListViewItem_TypeInfo, svts, *(_QWORD *)&sum, method);
        ListViewItem___ctor_41447164((ListViewItem_o *)v12, v4 + v10, 0LL);
        *(_QWORD *)(v12 + 112) = 0x100000000LL;
        *(_DWORD *)(v12 + 124) = v11;
        if ( !v11 )
          *(_DWORD *)(v12 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v22 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1BCAA3C(itemList, v13);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v12,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v12;
          sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 4), v12, v14, v15, v16, v17, v18, v19);
        }
        LODWORD(v9) = svts->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)v9 );
      v4 += v10;
    }
  }
  return v4;
}


void __fastcall QuestInformationListViewManager__DestroyList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_array *loadedAssets; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13151 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B13151 = 1;
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
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      AssetManager__releaseAssetStorage_38514680(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadedAssets, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  PartyOrganizationUtility_o *p_mChocoMaterialSp; // x19
  __int64 v16; // x1
  UnityEngine_Object_o *mChocoTex; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x20
  __int64 v19; // x1
  Il2CppObject *object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  QuestInformationListViewManager_c *v27; // x0
  UnityEngine_Shader_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  UnityEngine_Material_o *v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1

  if ( (byte_4B1315C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&QuestInformationListViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v8, v9);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v12, v13);
    byte_4B1315C = 1;
  }
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_mChocoMaterialSp = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialSp;
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BCA784(p_mChocoTex, (int64_t)object, v21, v22, v23, v24, v25, v26);
    }
    v27 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo, v19);
      v27 = QuestInformationListViewManager_TypeInfo;
    }
    v28 = UnityEngine_Shader__Find(v27->static_fields->CHOCO_SHADER_SP, 0LL);
    v32 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v29, v30, v31);
    UnityEngine_Material___ctor(v32, v28, 0LL);
    p_mChocoMaterialSp->klass = (PartyOrganizationUtility_c *)v32;
    sub_1BCA784(p_mChocoMaterialSp, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    if ( !p_mChocoMaterialSp->klass )
      sub_1BCAA3C(0LL, v39);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall QuestInformationListViewManager__NewChocoMaterialForTexture(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  PartyOrganizationUtility_o *p_mChocoMaterialTx; // x19
  __int64 v16; // x1
  UnityEngine_Object_o *mChocoTex; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x20
  __int64 v19; // x1
  Il2CppObject *object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  QuestInformationListViewManager_c *v27; // x0
  UnityEngine_Shader_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  UnityEngine_Material_o *v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1

  if ( (byte_4B1315B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&QuestInformationListViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v8, v9);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v12, v13);
    byte_4B1315B = 1;
  }
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_mChocoMaterialTx = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialTx;
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BCA784(p_mChocoTex, (int64_t)object, v21, v22, v23, v24, v25, v26);
    }
    v27 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo, v19);
      v27 = QuestInformationListViewManager_TypeInfo;
    }
    v28 = UnityEngine_Shader__Find(v27->static_fields->CHOCO_SHADER_TX, 0LL);
    v32 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v29, v30, v31);
    UnityEngine_Material___ctor(v32, v28, 0LL);
    p_mChocoMaterialTx->klass = (PartyOrganizationUtility_c *)v32;
    sub_1BCA784(p_mChocoMaterialTx, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    if ( !p_mChocoMaterialTx->klass )
      sub_1BCAA3C(0LL, v39);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct ListViewItem_o *linkItem; // x19
  __int64 methodPtr_low; // x9
  int klass_high; // w8
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  __int64 v38; // x1
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  UserItemData_o *UserItemData; // x19
  __int64 v42; // x2
  __int64 v43; // x3
  CommonUI_o *v44; // x20
  QuestInformationListViewManager___c_c *v45; // x8
  ItemLinkInfoWindowComponent_CallbackFunc_o *_9__28_2; // x21
  Il2CppObject *v47; // x22
  struct QuestInformationListViewManager___c_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  __int64 v57; // x2
  __int64 v58; // x3
  int32_t monitor_high; // w19
  CommonUI_o *v60; // x20
  QuestInformationListViewManager___c_c *v61; // x8
  ServantStatusDialog_EndDelegate_o *_9__28_0; // x21
  Il2CppObject *v63; // x22
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x2
  __int64 v72; // x3
  Il2CppObject *v73; // x19
  CommonUI_o *v74; // x20
  QuestInformationListViewManager___c_c *v75; // x8
  ItemDetailInfoComponent_CallbackFunc_o *_9__28_1; // x21
  Il2CppObject *v77; // x22
  struct QuestInformationListViewManager___c_StaticFields *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  QuestInformationListViewManager_o *v85; // x0
  const MethodInfo *v86; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B1315A & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, obj, method);
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestInformationListViewItem_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_QuestInformationListViewManager_OnClickListView__, v17, v18);
    sub_1BCA7E0(&SceneList_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__, v25, v26);
    sub_1BCA7E0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__, v27, v28);
    sub_1BCA7E0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__, v29, v30);
    this = (QuestInformationListViewManager_o *)sub_1BCA7E0(&QuestInformationListViewManager___c_TypeInfo, v31, v32);
    byte_4B1315A = 1;
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
    sub_1BCACFC(linkItem);
    QuestInformationListViewManager__IsListBuilding(v85, v86);
    return;
  }
  if ( !LODWORD(linkItem[1].klass) )
  {
    klass_high = HIDWORD(linkItem[1].klass);
    if ( klass_high == 1 )
    {
      v55 = Method_QuestInformationListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v55 = (_QWORD *)sub_1BCA7F8(Method_QuestInformationListViewManager_OnClickListView__);
      v56 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v55, v55[4]);
      OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0LL);
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      monitor_high = HIDWORD(linkItem[1].monitor);
      v60 = (CommonUI_o *)this;
      v61 = QuestInformationListViewManager___c_TypeInfo;
      if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo, obj);
        v61 = QuestInformationListViewManager___c_TypeInfo;
      }
      _9__28_0 = v61->static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( !v61->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v61, obj);
          v61 = QuestInformationListViewManager___c_TypeInfo;
        }
        v63 = (Il2CppObject *)v61->static_fields->__9;
        _9__28_0 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                          ServantStatusDialog_EndDelegate_TypeInfo,
                                                          obj,
                                                          v57,
                                                          v58);
        ServantStatusDialog_EndDelegate___ctor(
          _9__28_0,
          v63,
          Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__,
          0LL);
        static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__28_0 = _9__28_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
          (int64_t)_9__28_0,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
      }
      if ( v60 )
      {
        CommonUI__OpenServantStatusDialog_30779656(v60, 0, monitor_high, _9__28_0, 0LL);
        return;
      }
    }
    else
    {
      if ( klass_high != 2 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, QuestInformationListViewItem_TypeInfo);
      this = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( this )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                &entity,
                HIDWORD(linkItem[1].monitor),
                (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          return;
        v36 = Method_QuestInformationListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v36 = (_QWORD *)sub_1BCA7F8(Method_QuestInformationListViewManager_OnClickListView__);
        v37 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v36, v36[4]);
        OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0LL);
        this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0LL) )
            goto LABEL_43;
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !this )
            goto LABEL_51;
          NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)this, 0LL);
          if ( !SceneList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v38);
          SceneName = SceneList__getSceneName(34, 0LL);
          if ( System_String__op_Equality(NowSceneName, SceneName, 0LL) )
          {
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0LL);
              this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v44 = (CommonUI_o *)this;
              v45 = QuestInformationListViewManager___c_TypeInfo;
              if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo, obj);
                v45 = QuestInformationListViewManager___c_TypeInfo;
              }
              _9__28_2 = v45->static_fields->__9__28_2;
              if ( !_9__28_2 )
              {
                if ( !v45->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v45, obj);
                  v45 = QuestInformationListViewManager___c_TypeInfo;
                }
                v47 = (Il2CppObject *)v45->static_fields->__9;
                _9__28_2 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                           ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                                           obj,
                                                                           v42,
                                                                           v43);
                ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                  _9__28_2,
                  v47,
                  (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__,
                  0LL);
                v48 = QuestInformationListViewManager___c_TypeInfo->static_fields;
                v48->__9__28_2 = _9__28_2;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v48->__9__28_2,
                  (int64_t)_9__28_2,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54);
              }
              if ( v44 )
              {
                CommonUI__OpenItemLinkInfoDetailWindow_30869992(v44, UserItemData, _9__28_2, 0LL);
                return;
              }
            }
          }
          else
          {
LABEL_43:
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v73 = entity;
            v74 = (CommonUI_o *)this;
            v75 = QuestInformationListViewManager___c_TypeInfo;
            if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo, obj);
              v75 = QuestInformationListViewManager___c_TypeInfo;
            }
            _9__28_1 = v75->static_fields->__9__28_1;
            if ( !_9__28_1 )
            {
              if ( !v75->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v75, obj);
                v75 = QuestInformationListViewManager___c_TypeInfo;
              }
              v77 = (Il2CppObject *)v75->static_fields->__9;
              _9__28_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                     ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                                     obj,
                                                                     v71,
                                                                     v72);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                _9__28_1,
                v77,
                (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__,
                0LL);
              v78 = QuestInformationListViewManager___c_TypeInfo->static_fields;
              v78->__9__28_1 = _9__28_1;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v78->__9__28_1,
                (int64_t)_9__28_1,
                v79,
                v80,
                v81,
                v82,
                v83,
                v84);
            }
            if ( v74 )
            {
              CommonUI__OpenItemDetailDialog(v74, (ItemEntity_o *)v73, _9__28_1, 50, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_51:
    sub_1BCAA3C(this, obj);
  }
}


void __fastcall QuestInformationListViewManager__SetObjectItem(
        QuestInformationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B13159 & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_1BCA7E0(&QuestInformationListViewObject_TypeInfo, obj, item);
    byte_4B13159 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(QuestInformationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  QuestInformationListViewObject__Init_34675520((QuestInformationListViewObject_o *)obj, 3, (const MethodInfo *)item);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_int__o *v22; // x22
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  ItemMaster_o *v26; // x24
  unsigned __int64 v27; // x25
  int32_t *v28; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  char *v32; // x8
  struct System_Int32_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  char *v39; // x8
  __int64 v40; // x8
  System_Collections_Generic_List_int__o *v41; // x0
  const MethodInfo_3584C38 *v42; // x2
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  System_Int32_array *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Int32_array *v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  if ( (byte_4B13153 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, itms, withoutQP);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B13153 = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    itms,
                                                    withoutQP,
                                                    qps);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v22 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  v25 = *(_QWORD *)&itms->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = (ItemMaster_o *)Instance;
    v27 = 0LL;
    v28 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v25 )
LABEL_43:
        sub_1BCAA44(Instance, v24);
      v24 = (unsigned int)v28[v27];
      if ( !(_DWORD)v24 )
        break;
      if ( (_DWORD)v24 == -1 )
      {
        if ( !v22 )
          goto LABEL_42;
        items = v22->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v40 = v30[4];
          v41 = v22;
          goto LABEL_28;
        }
        v32 = (char *)items + 4 * size;
        v22->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v32 + 8) = 0;
        goto LABEL_38;
      }
      if ( !v26 )
        goto LABEL_42;
      Instance = (Il2CppObject *)ItemMaster__isQP(v26, v24, 0LL);
      if ( v27 >= itms->max_length )
        goto LABEL_43;
      v24 = (unsigned int)v28[v27];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v22 )
          goto LABEL_42;
        v36 = v22->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v22->fields._version;
        if ( !v36 )
          goto LABEL_42;
        v38 = v22->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          v46 = v37[4];
          v41 = v22;
LABEL_36:
          v42 = *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46 + 192) + 112LL);
          goto LABEL_37;
        }
        v39 = (char *)v36 + 4 * v38;
        v22->fields._size = v38 + 1;
      }
      else
      {
        if ( !v18 )
          goto LABEL_42;
        v43 = v18->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !v43 )
          goto LABEL_42;
        v45 = v18->fields._size;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          v46 = v44[4];
          v41 = v18;
          goto LABEL_36;
        }
        v39 = (char *)v43 + 4 * v45;
        v18->fields._size = v45 + 1;
      }
      *((_DWORD *)v39 + 8) = v24;
LABEL_38:
      LODWORD(v25) = itms->max_length;
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_39;
    }
    if ( !v18 )
      goto LABEL_42;
    v33 = v18->fields._items;
    v34 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !v33 )
      goto LABEL_42;
    v35 = v18->fields._size;
    if ( (unsigned int)v35 >= v33->max_length )
    {
      v40 = v34[4];
      v41 = v18;
LABEL_28:
      v42 = *(const MethodInfo_3584C38 **)(*(_QWORD *)(v40 + 192) + 112LL);
      LODWORD(v24) = 0;
LABEL_37:
      System_Collections_Generic_List_int___AddWithResize(v41, v24, v42);
      goto LABEL_38;
    }
    v32 = (char *)v33 + 4 * v35;
    v18->fields._size = v35 + 1;
    goto LABEL_18;
  }
LABEL_39:
  if ( !v18
    || (v47 = System_Collections_Generic_List_int___ToArray(
                v18,
                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v47,
        sub_1BCA784((PartyOrganizationUtility_o *)withoutQP, (int64_t)v47, v48, v49, v50, v51, v52, v53),
        !v22) )
  {
LABEL_42:
    sub_1BCAA3C(Instance, v24);
  }
  v54 = System_Collections_Generic_List_int___ToArray(
          v22,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)qps, (int64_t)v54, v55, v56, v57, v58, v59, v60);
}


void __fastcall QuestInformationListViewManager__SplitSvtsWithCombineMaterial(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_int__o *v24; // x22
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x24
  unsigned __int64 v29; // x25
  int32_t *v30; // x28
  int32_t v31; // w2
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  char *v35; // x8
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  struct System_Int32_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  char *v42; // x8
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  System_Collections_Generic_List_int__o *v47; // x0
  const MethodInfo_3584C38 *v48; // x2
  __int64 v49; // x8
  System_Int32_array *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Int32_array *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B13152 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, svts, withoutCM);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B13152 = 1;
  }
  entity = 0LL;
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    svts,
                                                    withoutCM,
                                                    combineMaterials);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  v27 = *(_QWORD *)&svts->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v29 = 0LL;
    v30 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v29 >= (unsigned int)v27 )
LABEL_46:
        sub_1BCAA44(Instance, v26);
      v31 = v30[v29];
      if ( !v31 )
        break;
      if ( v31 == -1 )
      {
        if ( !v24 )
          goto LABEL_45;
        items = v24->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v24->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v24->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v46 = v33[4];
          v47 = v24;
LABEL_36:
          v48 = *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46 + 192) + 112LL);
          LODWORD(v26) = 0;
          goto LABEL_40;
        }
        v35 = (char *)items + 4 * size;
        v24->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v35 + 8) = 0;
        goto LABEL_41;
      }
      if ( !v28 )
        goto LABEL_45;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v28,
                                   &entity,
                                   v31,
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v29 >= svts->max_length )
          goto LABEL_46;
        if ( !v24 )
          goto LABEL_45;
        v26 = (unsigned int)v30[v29];
        v39 = v24->fields._items;
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++v24->fields._version;
        if ( !v39 )
          goto LABEL_45;
        v41 = v24->fields._size;
        if ( (unsigned int)v41 >= v39->max_length )
        {
          v49 = v40[4];
          v47 = v24;
LABEL_39:
          v48 = *(const MethodInfo_3584C38 **)(*(_QWORD *)(v49 + 192) + 112LL);
LABEL_40:
          System_Collections_Generic_List_int___AddWithResize(v47, v26, v48);
          goto LABEL_41;
        }
        v42 = (char *)v39 + 4 * v41;
        v24->fields._size = v41 + 1;
      }
      else
      {
LABEL_28:
        if ( v29 >= svts->max_length )
          goto LABEL_46;
        if ( !v20 )
          goto LABEL_45;
        v26 = (unsigned int)v30[v29];
        v43 = v20->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++v20->fields._version;
        if ( !v43 )
          goto LABEL_45;
        v45 = v20->fields._size;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          v49 = v44[4];
          v47 = v20;
          goto LABEL_39;
        }
        v42 = (char *)v43 + 4 * v45;
        v20->fields._size = v45 + 1;
      }
      *((_DWORD *)v42 + 8) = v26;
LABEL_41:
      LODWORD(v27) = svts->max_length;
      if ( (__int64)++v29 >= (int)v27 )
        goto LABEL_42;
    }
    if ( !v20 )
      goto LABEL_45;
    v36 = v20->fields._items;
    v37 = Method_System_Collections_Generic_List_int__Add__;
    ++v20->fields._version;
    if ( !v36 )
      goto LABEL_45;
    v38 = v20->fields._size;
    if ( (unsigned int)v38 >= v36->max_length )
    {
      v46 = v37[4];
      v47 = v20;
      goto LABEL_36;
    }
    v35 = (char *)v36 + 4 * v38;
    v20->fields._size = v38 + 1;
    goto LABEL_18;
  }
LABEL_42:
  if ( !v20
    || (v50 = System_Collections_Generic_List_int___ToArray(
                v20,
                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v50,
        sub_1BCA784((PartyOrganizationUtility_o *)withoutCM, (int64_t)v50, v51, v52, v53, v54, v55, v56),
        !v24) )
  {
LABEL_45:
    sub_1BCAA3C(Instance, v26);
  }
  v57 = System_Collections_Generic_List_int___ToArray(
          v24,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v57;
  sub_1BCA784((PartyOrganizationUtility_o *)combineMaterials, (int64_t)v57, v58, v59, v60, v61, v62, v63);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B13150 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B13150 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(
                                 (QuestInformationListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v21;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1314F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1314F = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v21;
}


void __fastcall QuestInformationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1315E & 1) == 0 )
  {
    sub_1BCA7E0(&QuestInformationListViewManager___c_TypeInfo, v1, v2);
    byte_4B1315E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestInformationListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestInformationListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestInformationListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestInformationListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x1

  if ( (byte_4B13161 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B13161 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager___c___OnClickListView_b__28_1(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B13160 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__, v3, v4);
    byte_4B13160 = 1;
  }
  v5 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager___c___OnClickListView_b__28_2(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B1315F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__, v3, v4);
    byte_4B1315F = 1;
  }
  v5 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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
  __int64 v3; // x3
  QuestInformationListViewManager___c__DisplayClass25_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct QuestInformationListViewManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__1; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v4 = this;
  if ( (byte_4B13162 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    this = (QuestInformationListViewManager___c__DisplayClass25_0_o *)sub_1BCA7E0(
                                                                        &Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__,
                                                                        v7,
                                                                        v8);
    byte_4B13162 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v12, v13, v14, v15, v16, v17);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetManager__loadAssetStorage_38512336(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass25_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  QuestInformationListViewManager__CreateEnemyList_34674920(
    this->fields.__4__this,
    (int32_t)method,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}