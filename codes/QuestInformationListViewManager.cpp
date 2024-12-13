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
  __int64 v9; // x1
  int64_t v10; // x1
  struct QuestInformationListViewManager_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B340EB & 1) == 0 )
  {
    sub_1BD3458(&QuestInformationListViewManager_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_15315/*"Unlit/Transparent Colored_Choco"*/, v8);
    sub_1BD3458(&StringLiteral_5057/*"Custom/SpriteWithMask_Choco"*/, v9);
    byte_4B340EB = 1;
  }
  QuestInformationListViewManager_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15315/*"Unlit/Transparent Colored_Choco"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)QuestInformationListViewManager_TypeInfo->static_fields,
    StringLiteral_15315/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_5057/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = QuestInformationListViewManager_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5057/*"Custom/SpriteWithMask_Choco"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->CHOCO_SHADER_SP, v10, v12, v13, v14, v15, v16, v17);
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
  struct ListViewItemSeed_o *rewardSeed; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v15; // x1
  int32_t v16; // w22
  int64_t v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  int64_t v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x8
  struct UIScrollView_o *scrollView; // x8

  v8 = svtCnt;
  v9 = itemCnt;
  if ( (byte_4B340E4 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_1BD3458(&QuestInformationListViewItem_TypeInfo, v12);
    byte_4B340E4 = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.seed = rewardSeed;
  this->fields.mIsBuildingList = 1;
  sub_1BD33FC(
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
      v16 = 0;
      while ( 1 )
      {
        v17 = sub_1BD36A4(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_41548032((ListViewItem_o *)v17, v16, 0LL);
        *(_DWORD *)(v17 + 124) = 0;
        *(_QWORD *)(v17 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v17,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v17;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v27 + 4), v17, v18, v19, v20, v21, v22, v23);
        }
        if ( v9 == ++v16 )
          goto LABEL_14;
      }
LABEL_23:
      sub_1BD36B4(itemList, v15);
    }
    v9 = 0;
LABEL_14:
    if ( v8 >= 1 )
    {
      do
      {
        v28 = sub_1BD36A4(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_41548032((ListViewItem_o *)v28, v9, 0LL);
        *(_DWORD *)(v28 + 124) = 0;
        *(_QWORD *)(v28 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_23;
        v35 = itemList->fields._items;
        v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v35 )
          goto LABEL_23;
        v37 = itemList->fields._size;
        if ( (unsigned int)v37 >= v35->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v28,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &v35->obj.klass + v37;
          itemList->fields._size = v37 + 1;
          v38[4] = (Il2CppClass *)v28;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v38 + 4), v28, v29, v30, v31, v32, v33, v34);
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
  QuestMaster_o *QuestEntity; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct ListViewItemSeed_o *enemySeed; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v52; // x24
  unsigned int **v53; // x25
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  bool HasFlag; // w28
  Il2CppObject *v61; // x27
  __int64 v62; // x8
  int64_t v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x8
  __int64 v76; // x29
  __int64 v77; // x23
  __int64 v78; // x26
  unsigned __int64 v79; // x9
  unsigned __int64 v80; // x19
  int32_t v81; // w3
  __int64 v82; // x8
  ViewEnemyEntity_o *v83; // x27
  unsigned int *v84; // x8
  PartyOrganizationUtility_o *v85; // x0
  System_String_o *v86; // x0
  Il2CppObject *v87; // x27
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct System_Object_array *items; // x8
  _QWORD *v95; // x9
  __int64 size; // x10
  Il2CppClass **v97; // x0
  ViewEnemyEntity_o *v98; // x28
  unsigned int *v99; // x28
  System_Object_array *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_Action_o *v107; // x19
  __int64 v108; // x0
  QuestInformationListViewManager_o *v109; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v110; // [xsp+8h] [xbp-88h]
  bool v111; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v113; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v114; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B340E5 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BD3458(&AtlasManager_TypeInfo, v9);
    sub_1BD3458(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1BD3458(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1BD3458(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v12);
    sub_1BD3458(&Method_DataManager_GetMaster_ViewEnemyMaster___, v13);
    sub_1BD3458(&DataManager_TypeInfo, v14);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_string___ctor__, v20);
    sub_1BD3458(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1BD3458(&NetworkManager_TypeInfo, v22);
    sub_1BD3458(&Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__, v23);
    sub_1BD3458(&QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo, v24);
    sub_1BD3458(&ViewEnemyEntity___TypeInfo, v25);
    sub_1BD3458(&ViewEnemyEntity_TypeInfo, v26);
    sub_1BD3458(&StringLiteral_12833/*"Servants/Commands/"*/, v27);
    byte_4B340E5 = 1;
  }
  v113 = 0LL;
  v114 = 0LL;
  entity = 0LL;
  v28 = sub_1BD36A4(QuestInformationListViewManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_67;
  *(_QWORD *)(v28 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)this, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v28 + 32) = enemies;
  v37 = (__int64 *)(v28 + 32);
  *(_DWORD *)(v28 + 24) = questId;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)enemies, v38, v39, v40, v41, v42, v43);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)enemySeed, v44, v45, v46, v47, v48, v49);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v52 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantMaster___);
  v110 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v110,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v28 + 40) = 0LL;
  v53 = (unsigned int **)(v28 + 40);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 40), 0LL, v54, v55, v56, v57, v58, v59);
  QuestEntity = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_67;
  QuestEntity = (QuestMaster_o *)QuestMaster__getQuestEntity(QuestEntity, *(_DWORD *)(v28 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_67;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v30);
    byte_4B31D77 = 1;
  }
  QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  v109 = this;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v61 )
    goto LABEL_67;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v61,
    &entity,
    (int64_t)QuestEntity[2].fields._lookup->fields._values,
    *(_DWORD *)(v28 + 24),
    0LL);
  v62 = *(_QWORD *)(v28 + 32);
  if ( v62 )
  {
    v63 = sub_1BD3500(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v62 + 24));
    *v53 = (unsigned int *)v63;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 40), v63, v64, v65, v66, v67, v68, v69);
    v75 = *v37;
    if ( !*v37 )
      goto LABEL_67;
    v76 = 0LL;
    v77 = 8LL;
    v78 = 8LL;
    v111 = HasFlag;
    while ( 1 )
    {
      v79 = *(unsigned int *)(v75 + 24);
      v80 = v77 - 8;
      if ( v77 - 8 >= (int)v79 )
        break;
      if ( v80 >= v79 )
        goto LABEL_68;
      v81 = *(_DWORD *)(v75 + 4 * v77);
      if ( v81 < 1 )
        goto LABEL_43;
      if ( !Master_object )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)ViewEnemyMaster__TryGetEntity(
                                       (ViewEnemyMaster_o *)Master_object,
                                       &v113,
                                       *(_DWORD *)(v28 + 24),
                                       v81,
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
        if ( !v113 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)System_Linq_Enumerable__Contains_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                                         v113->fields.enemyId,
                                         (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
LABEL_32:
          v82 = *v37;
          if ( !*v37 )
            goto LABEL_67;
          if ( v80 >= *(unsigned int *)(v82 + 24) )
            goto LABEL_68;
          *(_DWORD *)(v82 + 4 * v77) = 0;
        }
      }
      if ( !v113 || !v52 )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v52,
                                       &v114,
                                       v113->fields.svtId,
                                       (const MethodInfo_31D1F44 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestEntity & 1) != 0 )
      {
        QuestEntity = (QuestMaster_o *)v114;
        if ( !v114 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)v114, 0LL);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          goto LABEL_42;
        QuestEntity = (QuestMaster_o *)v113;
        if ( !v113 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ViewEnemyEntity__IsIconIdUnique(v113, 0LL);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
          if ( !v113 )
            goto LABEL_67;
          v86 = System_Int32__ToString((int)v113 + 36, 0LL);
          v87 = (Il2CppObject *)System_String__Concat_62525248((System_String_o *)StringLiteral_12833/*"Servants/Commands/"*/, v86, 0LL);
          QuestEntity = (QuestMaster_o *)v110;
          if ( !v110 )
            goto LABEL_67;
          QuestEntity = (QuestMaster_o *)System_Collections_Generic_List_object___Contains(
                                           v110,
                                           v87,
                                           (const MethodInfo_35C1120 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          {
            items = v110->fields._items;
            v95 = Method_System_Collections_Generic_List_string__Add__;
            ++v110->fields._version;
            if ( !items )
              goto LABEL_67;
            size = v110->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                v87,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
            }
            else
            {
              v97 = &items->obj.klass + size;
              v110->fields._size = size + 1;
              v97[4] = (Il2CppClass *)v87;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v97 + 4), (int64_t)v87, v88, v89, v90, v91, v92, v93);
            }
          }
          v98 = v113;
          v83 = (ViewEnemyEntity_o *)sub_1BD36A4(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_41112180(v83, v98, 0LL);
          v113 = v83;
          if ( !v83 )
            goto LABEL_67;
          v83->fields.iconId = 0;
        }
        else
        {
LABEL_42:
          v83 = v113;
        }
        v99 = *v53;
        if ( !*v53 )
          goto LABEL_67;
        if ( v83 )
        {
          QuestEntity = (QuestMaster_o *)sub_1BD3594(v83, *(_QWORD *)(*(_QWORD *)v99 + 64LL));
          if ( !QuestEntity )
          {
            v108 = sub_1BD36D8();
            sub_1BD3580(v108, 0LL);
          }
        }
        if ( v80 >= v99[6] )
LABEL_68:
          sub_1BD36BC(QuestEntity, v30);
        v85 = (PartyOrganizationUtility_o *)&v99[v78];
        HasFlag = v111;
        v85->klass = (PartyOrganizationUtility_c *)v83;
      }
      else
      {
LABEL_43:
        v84 = *v53;
        if ( !*v53 )
          goto LABEL_67;
        if ( v80 >= v84[6] )
          goto LABEL_68;
        v83 = 0LL;
        v85 = (PartyOrganizationUtility_o *)&v84[2 * v76 + 8];
        *(_QWORD *)&v84[v78] = 0LL;
      }
      sub_1BD33FC(v85, (int64_t)v83, v70, v81, v71, v72, v73, v74);
      v75 = *v37;
      ++v76;
      ++v77;
      v78 += 2LL;
      if ( !*v37 )
        goto LABEL_67;
    }
  }
  QuestEntity = (QuestMaster_o *)v110;
  if ( !v110 )
LABEL_67:
    sub_1BD36B4(QuestEntity, v30);
  v100 = System_Collections_Generic_List_object___ToArray(
           v110,
           (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_string__ToArray__);
  v109->fields.loadedAssets = (struct System_String_array *)v100;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v109->fields.loadedAssets,
    (int64_t)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v109->fields.loading = 1;
  v107 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v107,
    (Il2CppObject *)v28,
    Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v107, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewManager__CreateEnemyList_34727676(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x25
  int32_t v13; // w22
  ViewEnemyEntity_o *v14; // x24
  QuestInformationListViewItem_o *v15; // x0
  const MethodInfo *v16; // x4
  Il2CppObject *v17; // x23
  int32_t v18; // w1
  ViewEnemyEntity_o *v19; // x2
  bool v20; // w3
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

  if ( (byte_4B340E6 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    sub_1BD3458(&QuestInformationListViewItem_TypeInfo, v8);
    byte_4B340E6 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( enemies )
    {
      v11 = *(_QWORD *)&enemies->max_length;
      if ( (int)v11 >= 1 )
      {
        v12 = 0LL;
        v13 = 0;
        while ( 1 )
        {
          if ( v12 >= (unsigned int)v11 )
            goto LABEL_24;
          if ( !veEnts )
            goto LABEL_23;
          if ( v12 >= veEnts->max_length )
LABEL_24:
            sub_1BD36BC(itemList, v10);
          v14 = veEnts->m_Items[v12];
          if ( enemies->m_Items[v12 + 1] <= 0 )
            break;
          if ( v14 )
          {
            v15 = (QuestInformationListViewItem_o *)sub_1BD36A4(QuestInformationListViewItem_TypeInfo);
            v17 = (Il2CppObject *)v15;
            v18 = v13;
            v19 = v14;
            v20 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v12 >= (int)v11 )
            goto LABEL_21;
        }
        v15 = (QuestInformationListViewItem_o *)sub_1BD36A4(QuestInformationListViewItem_TypeInfo);
        v17 = (Il2CppObject *)v15;
        v20 = 1;
        v18 = v13;
        v19 = v14;
LABEL_14:
        QuestInformationListViewItem___ctor_34715640(v15, v18, v19, v20, v16);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v28 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
LABEL_23:
          sub_1BD36B4(itemList, v10);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            v17,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v17;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v17, v21, v22, v23, v24, v25, v26);
        }
        LODWORD(v11) = enemies->max_length;
        ++v13;
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
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w29
  int64_t v11; // x22
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  v6 = this;
  if ( (byte_4B340E2 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__Add__, items);
    this = (QuestInformationListViewManager_o *)sub_1BD3458(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4B340E2 = 1;
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
          sub_1BD36BC(this, items);
        v10 = items->m_Items[v9 + 1];
        v11 = sub_1BD36A4(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_41548032((ListViewItem_o *)v11, sum + v9, 0LL);
        *(_QWORD *)(v11 + 112) = 0x200000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v20 = itemList->fields._items,
              v21 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !v20) )
        {
          sub_1BD36B4(itemList, v12);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v20->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &v20->obj.klass + size;
          itemList->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v23 + 4), v11, v13, v14, v15, v16, v17, v18);
        }
        LODWORD(v8) = items->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      sum += v9;
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
  sub_1BD33FC(
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
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w29
  int64_t v11; // x22
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  v6 = this;
  if ( (byte_4B340E3 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewItem__Add__, svts);
    this = (QuestInformationListViewManager_o *)sub_1BD3458(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4B340E3 = 1;
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
          sub_1BD36BC(this, svts);
        v10 = svts->m_Items[v9 + 1];
        v11 = sub_1BD36A4(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_41548032((ListViewItem_o *)v11, sum + v9, 0LL);
        *(_QWORD *)(v11 + 112) = 0x100000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v21 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1BD36B4(itemList, v12);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v23 + 4), v11, v13, v14, v15, v16, v17, v18);
        }
        LODWORD(v8) = svts->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      sum += v9;
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

  if ( (byte_4B340DF & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    byte_4B340DF = 1;
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
      AssetManager__releaseAssetStorage_38582992(loadedAssets, 0LL);
      this->fields.loadedAssets = 0LL;
      sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.loadedAssets, 0LL, v4, v5, v6, v7, v8, v9);
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
  PartyOrganizationUtility_o *p_mChocoMaterialSp; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x20
  Il2CppObject *object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  QuestInformationListViewManager_c *v19; // x0
  UnityEngine_Shader_o *v20; // x21
  UnityEngine_Material_o *v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1

  if ( (byte_4B340EA & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Material_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    sub_1BD3458(&QuestInformationListViewManager_TypeInfo, v4);
    sub_1BD3458(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1BD3458(&StringLiteral_16346/*"_ChocoTex"*/, v6);
    sub_1BD3458(&StringLiteral_12912/*"Shaders/ChocoMap"*/, v7);
    byte_4B340EA = 1;
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
                 (System_String_o *)StringLiteral_12912/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FC6478 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BD33FC(p_mChocoTex, (int64_t)object, v13, v14, v15, v16, v17, v18);
    }
    v19 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v19 = QuestInformationListViewManager_TypeInfo;
    }
    v20 = UnityEngine_Shader__Find(v19->static_fields->CHOCO_SHADER_SP, 0LL);
    v21 = (UnityEngine_Material_o *)sub_1BD36A4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v21, v20, 0LL);
    p_mChocoMaterialSp->klass = (PartyOrganizationUtility_c *)v21;
    sub_1BD33FC(p_mChocoMaterialSp, (int64_t)v21, v22, v23, v24, v25, v26, v27);
    if ( !p_mChocoMaterialSp->klass )
      sub_1BD36B4(0LL, v28);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16346/*"_ChocoTex"*/,
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
  PartyOrganizationUtility_o *p_mChocoMaterialTx; // x19
  UnityEngine_Object_o *mChocoTex; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x20
  Il2CppObject *object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  QuestInformationListViewManager_c *v19; // x0
  UnityEngine_Shader_o *v20; // x21
  UnityEngine_Material_o *v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1

  if ( (byte_4B340E9 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Material_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    sub_1BD3458(&QuestInformationListViewManager_TypeInfo, v4);
    sub_1BD3458(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1BD3458(&StringLiteral_16346/*"_ChocoTex"*/, v6);
    sub_1BD3458(&StringLiteral_12912/*"Shaders/ChocoMap"*/, v7);
    byte_4B340E9 = 1;
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
                 (System_String_o *)StringLiteral_12912/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FC6478 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BD33FC(p_mChocoTex, (int64_t)object, v13, v14, v15, v16, v17, v18);
    }
    v19 = QuestInformationListViewManager_TypeInfo;
    if ( !QuestInformationListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo);
      v19 = QuestInformationListViewManager_TypeInfo;
    }
    v20 = UnityEngine_Shader__Find(v19->static_fields->CHOCO_SHADER_TX, 0LL);
    v21 = (UnityEngine_Material_o *)sub_1BD36A4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v21, v20, 0LL);
    p_mChocoMaterialTx->klass = (PartyOrganizationUtility_c *)v21;
    sub_1BD33FC(p_mChocoMaterialTx, (int64_t)v21, v22, v23, v24, v25, v26, v27);
    if ( !p_mChocoMaterialTx->klass )
      sub_1BD36B4(0LL, v28);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16346/*"_ChocoTex"*/,
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
  CommonUI_o *v27; // x20
  QuestInformationListViewManager___c_c *v28; // x8
  ItemLinkInfoWindowComponent_CallbackFunc_o *_9__28_2; // x21
  Il2CppObject *v30; // x22
  struct QuestInformationListViewManager___c_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  int32_t monitor_high; // w19
  CommonUI_o *v41; // x20
  QuestInformationListViewManager___c_c *v42; // x8
  ServantStatusDialog_EndDelegate_o *_9__28_0; // x21
  Il2CppObject *v44; // x22
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  Il2CppObject *v52; // x19
  CommonUI_o *v53; // x20
  QuestInformationListViewManager___c_c *v54; // x8
  ItemDetailInfoComponent_CallbackFunc_o *_9__28_1; // x21
  Il2CppObject *v56; // x22
  struct QuestInformationListViewManager___c_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  QuestInformationListViewManager_o *v64; // x0
  const MethodInfo *v65; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B340E8 & 1) == 0 )
  {
    sub_1BD3458(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, obj);
    sub_1BD3458(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v5);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1BD3458(&DataManager_TypeInfo, v7);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1BD3458(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_1BD3458(&QuestInformationListViewItem_TypeInfo, v10);
    sub_1BD3458(&Method_QuestInformationListViewManager_OnClickListView__, v11);
    sub_1BD3458(&SceneList_TypeInfo, v12);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14);
    sub_1BD3458(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__, v15);
    sub_1BD3458(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__, v16);
    sub_1BD3458(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__, v17);
    this = (QuestInformationListViewManager_o *)sub_1BD3458(&QuestInformationListViewManager___c_TypeInfo, v18);
    byte_4B340E8 = 1;
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
    sub_1BD3974(linkItem);
    QuestInformationListViewManager__IsListBuilding(v64, v65);
    return;
  }
  if ( !LODWORD(linkItem[1].klass) )
  {
    klass_high = HIDWORD(linkItem[1].klass);
    if ( klass_high == 1 )
    {
      v38 = Method_QuestInformationListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v38 = (_QWORD *)sub_1BD3470(Method_QuestInformationListViewManager_OnClickListView__);
      v39 = (System_Reflection_MethodBase_o *)sub_1BD343C(v38, v38[4]);
      OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__28_0 = (ServantStatusDialog_EndDelegate_o *)sub_1BD36A4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__28_0,
          v44,
          Method_QuestInformationListViewManager___c__OnClickListView_b__28_0__,
          0LL);
        static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__28_0 = _9__28_0;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
          (int64_t)_9__28_0,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      if ( v41 )
      {
        CommonUI__OpenServantStatusDialog_30815764(v41, 0, monitor_high, _9__28_0, 0LL);
        return;
      }
    }
    else
    {
      if ( klass_high != 2 )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( this )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                &entity,
                HIDWORD(linkItem[1].monitor),
                (const MethodInfo_31D1F44 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          return;
        v22 = Method_QuestInformationListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_1BD3470(Method_QuestInformationListViewManager_OnClickListView__);
        v23 = (System_Reflection_MethodBase_o *)sub_1BD343C(v22, v22[4]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
        this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0LL) )
            goto LABEL_43;
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !this )
            goto LABEL_51;
          NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)this, 0LL);
          if ( !SceneList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
          SceneName = SceneList__getSceneName(34, 0LL);
          if ( System_String__op_Equality(NowSceneName, SceneName, 0LL) )
          {
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0LL);
              this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v27 = (CommonUI_o *)this;
              v28 = QuestInformationListViewManager___c_TypeInfo;
              if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
                v28 = QuestInformationListViewManager___c_TypeInfo;
              }
              _9__28_2 = v28->static_fields->__9__28_2;
              if ( !_9__28_2 )
              {
                if ( !v28->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v28);
                  v28 = QuestInformationListViewManager___c_TypeInfo;
                }
                v30 = (Il2CppObject *)v28->static_fields->__9;
                _9__28_2 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BD36A4(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
                ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                  _9__28_2,
                  v30,
                  (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__,
                  0LL);
                v31 = QuestInformationListViewManager___c_TypeInfo->static_fields;
                v31->__9__28_2 = _9__28_2;
                sub_1BD33FC(
                  (PartyOrganizationUtility_o *)&v31->__9__28_2,
                  (int64_t)_9__28_2,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37);
              }
              if ( v27 )
              {
                CommonUI__OpenItemLinkInfoDetailWindow_30906924(v27, UserItemData, _9__28_2, 0LL);
                return;
              }
            }
          }
          else
          {
LABEL_43:
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v52 = entity;
            v53 = (CommonUI_o *)this;
            v54 = QuestInformationListViewManager___c_TypeInfo;
            if ( !QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo);
              v54 = QuestInformationListViewManager___c_TypeInfo;
            }
            _9__28_1 = v54->static_fields->__9__28_1;
            if ( !_9__28_1 )
            {
              if ( !v54->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v54);
                v54 = QuestInformationListViewManager___c_TypeInfo;
              }
              v56 = (Il2CppObject *)v54->static_fields->__9;
              _9__28_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BD36A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                _9__28_1,
                v56,
                (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__,
                0LL);
              v57 = QuestInformationListViewManager___c_TypeInfo->static_fields;
              v57->__9__28_1 = _9__28_1;
              sub_1BD33FC(
                (PartyOrganizationUtility_o *)&v57->__9__28_1,
                (int64_t)_9__28_1,
                v58,
                v59,
                v60,
                v61,
                v62,
                v63);
            }
            if ( v53 )
            {
              CommonUI__OpenItemDetailDialog(v53, (ItemEntity_o *)v52, _9__28_1, 50, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_51:
    sub_1BD36B4(this, obj);
  }
}


void __fastcall QuestInformationListViewManager__SetObjectItem(
        QuestInformationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B340E7 & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_1BD3458(&QuestInformationListViewObject_TypeInfo, obj);
    byte_4B340E7 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(QuestInformationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_1BD36B4(this, obj);
  }
  QuestInformationListViewObject__Init_34728276((QuestInformationListViewObject_o *)obj, 3, (const MethodInfo *)item);
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
  System_Collections_Generic_List_int__o *v14; // x22
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  ItemMaster_o *v18; // x24
  unsigned __int64 v19; // x25
  int32_t *v20; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  char *v24; // x8
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  char *v31; // x8
  __int64 v32; // x8
  System_Collections_Generic_List_int__o *v33; // x0
  const MethodInfo_35A3D6C *v34; // x2
  struct System_Int32_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Int32_array *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Int32_array *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B340E1 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ItemMaster___, itms);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B340E1 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  v17 = *(_QWORD *)&itms->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = (ItemMaster_o *)Instance;
    v19 = 0LL;
    v20 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
LABEL_43:
        sub_1BD36BC(Instance, v16);
      v16 = (unsigned int)v20[v19];
      if ( !(_DWORD)v16 )
        break;
      if ( (_DWORD)v16 == -1 )
      {
        if ( !v14 )
          goto LABEL_42;
        items = v14->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v32 = v22[4];
          v33 = v14;
          goto LABEL_28;
        }
        v24 = (char *)items + 4 * size;
        v14->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v24 + 8) = 0;
        goto LABEL_38;
      }
      if ( !v18 )
        goto LABEL_42;
      Instance = (Il2CppObject *)ItemMaster__isQP(v18, v16, 0LL);
      if ( v19 >= itms->max_length )
        goto LABEL_43;
      v16 = (unsigned int)v20[v19];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_42;
        v28 = v14->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !v28 )
          goto LABEL_42;
        v30 = v14->fields._size;
        if ( (unsigned int)v30 >= v28->max_length )
        {
          v38 = v29[4];
          v33 = v14;
LABEL_36:
          v34 = *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v38 + 192) + 112LL);
          goto LABEL_37;
        }
        v31 = (char *)v28 + 4 * v30;
        v14->fields._size = v30 + 1;
      }
      else
      {
        if ( !v13 )
          goto LABEL_42;
        v35 = v13->fields._items;
        v36 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !v35 )
          goto LABEL_42;
        v37 = v13->fields._size;
        if ( (unsigned int)v37 >= v35->max_length )
        {
          v38 = v36[4];
          v33 = v13;
          goto LABEL_36;
        }
        v31 = (char *)v35 + 4 * v37;
        v13->fields._size = v37 + 1;
      }
      *((_DWORD *)v31 + 8) = v16;
LABEL_38:
      LODWORD(v17) = itms->max_length;
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_39;
    }
    if ( !v13 )
      goto LABEL_42;
    v25 = v13->fields._items;
    v26 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v25 )
      goto LABEL_42;
    v27 = v13->fields._size;
    if ( (unsigned int)v27 >= v25->max_length )
    {
      v32 = v26[4];
      v33 = v13;
LABEL_28:
      v34 = *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v32 + 192) + 112LL);
      LODWORD(v16) = 0;
LABEL_37:
      System_Collections_Generic_List_int___AddWithResize(v33, v16, v34);
      goto LABEL_38;
    }
    v24 = (char *)v25 + 4 * v27;
    v13->fields._size = v27 + 1;
    goto LABEL_18;
  }
LABEL_39:
  if ( !v13
    || (v39 = System_Collections_Generic_List_int___ToArray(
                v13,
                (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v39,
        sub_1BD33FC((PartyOrganizationUtility_o *)withoutQP, (int64_t)v39, v40, v41, v42, v43, v44, v45),
        !v14) )
  {
LABEL_42:
    sub_1BD36B4(Instance, v16);
  }
  v46 = System_Collections_Generic_List_int___ToArray(
          v14,
          (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v46;
  sub_1BD33FC((PartyOrganizationUtility_o *)qps, (int64_t)v46, v47, v48, v49, v50, v51, v52);
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
  System_Collections_Generic_List_int__o *v15; // x22
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x24
  unsigned __int64 v20; // x25
  int32_t *v21; // x28
  int32_t v22; // w2
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
  const MethodInfo_35A3D6C *v39; // x2
  __int64 v40; // x8
  System_Int32_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Int32_array *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B340E0 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, svts);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B340E0 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  v18 = *(_QWORD *)&svts->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v20 = 0LL;
    v21 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
LABEL_46:
        sub_1BD36BC(Instance, v17);
      v22 = v21[v20];
      if ( !v22 )
        break;
      if ( v22 == -1 )
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
          v39 = *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v37 + 192) + 112LL);
          LODWORD(v17) = 0;
          goto LABEL_40;
        }
        v26 = (char *)items + 4 * size;
        v15->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v26 + 8) = 0;
        goto LABEL_41;
      }
      if ( !v19 )
        goto LABEL_45;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v19,
                                   &entity,
                                   v22,
                                   (const MethodInfo_31D1F44 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v20 >= svts->max_length )
          goto LABEL_46;
        if ( !v15 )
          goto LABEL_45;
        v17 = (unsigned int)v21[v20];
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
          v39 = *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v40 + 192) + 112LL);
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
        if ( v20 >= svts->max_length )
          goto LABEL_46;
        if ( !v14 )
          goto LABEL_45;
        v17 = (unsigned int)v21[v20];
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
      LODWORD(v18) = svts->max_length;
      if ( (__int64)++v20 >= (int)v18 )
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
                (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v41,
        sub_1BD33FC((PartyOrganizationUtility_o *)withoutCM, (int64_t)v41, v42, v43, v44, v45, v46, v47),
        !v15) )
  {
LABEL_45:
    sub_1BD36B4(Instance, v17);
  }
  v48 = System_Collections_Generic_List_int___ToArray(
          v15,
          (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v48;
  sub_1BD33FC((PartyOrganizationUtility_o *)combineMaterials, (int64_t)v48, v49, v50, v51, v52, v53, v54);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B340DE & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v9);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    byte_4B340DE = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BD36B4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BD36B4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BD36B4(0LL, v18);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(
                                 (QuestInformationListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BD36B4(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41563988((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1BD36B4(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BD36B4(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BD36B4(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BD36B4(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v11;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *__fastcall QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B340DD & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo, v9);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    byte_4B340DD = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BD36B4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BD36B4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1BD36B4(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BD36B4(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v11;
}


void __fastcall QuestInformationListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B340EC & 1) == 0 )
  {
    sub_1BD3458(&QuestInformationListViewManager___c_TypeInfo, v1);
    byte_4B340EC = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(QuestInformationListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestInformationListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestInformationListViewManager___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)QuestInformationListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B340EF & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B340EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
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
  __int64 v7; // x1

  if ( (byte_4B340EE & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1BD3458(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__, v3);
    byte_4B340EE = 1;
  }
  v4 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_QuestInformationListViewManager___c__OnClickListView_b__28_1__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v7);
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
  __int64 v7; // x1

  if ( (byte_4B340ED & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1BD3458(&Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__, v3);
    byte_4B340ED = 1;
  }
  v4 = Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_QuestInformationListViewManager___c__OnClickListView_b__28_2__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct QuestInformationListViewManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__1; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v2 = this;
  if ( (byte_4B340F0 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&AssetManager_TypeInfo, v3);
    this = (QuestInformationListViewManager___c__DisplayClass25_0_o *)sub_1BD3458(
                                                                        &Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__,
                                                                        v4);
    byte_4B340F0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1BD36B4(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_QuestInformationListViewManager___c__DisplayClass25_0__CreateEnemyList_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.__9__1, (int64_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_38580648(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall QuestInformationListViewManager___c__DisplayClass25_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1BD36B4(this, method);
  QuestInformationListViewManager__CreateEnemyList_34727676(
    this->fields.__4__this,
    (int32_t)method,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}