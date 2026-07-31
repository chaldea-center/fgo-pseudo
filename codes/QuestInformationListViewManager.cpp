void QuestInformationListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct QuestInformationListViewManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct QuestInformationListViewManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct QuestInformationListViewManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5935261 & 1) == 0 )
  {
    sub_21FFC50(&QuestInformationListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_15706/*"Unlit/Transparent Colored_ColorShadow"*/);
    sub_21FFC50(&StringLiteral_5118/*"Custom/SpriteWithMask_ColorShadow"*/);
    sub_21FFC50(&StringLiteral_15705/*"Unlit/Transparent Colored_Choco"*/);
    sub_21FFC50(&StringLiteral_5117/*"Custom/SpriteWithMask_Choco"*/);
    byte_5935261 = 1;
  }
  v7 = StringLiteral_15705/*"Unlit/Transparent Colored_Choco"*/;
  QuestInformationListViewManager_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15705/*"Unlit/Transparent Colored_Choco"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestInformationListViewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5117/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = QuestInformationListViewManager_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5117/*"Custom/SpriteWithMask_Choco"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->CHOCO_SHADER_SP, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_15706/*"Unlit/Transparent Colored_ColorShadow"*/;
  v17 = QuestInformationListViewManager_TypeInfo->static_fields;
  v17->ColorShadowShaderTexture = (struct System_String_o *)StringLiteral_15706/*"Unlit/Transparent Colored_ColorShadow"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->ColorShadowShaderTexture, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_5118/*"Custom/SpriteWithMask_ColorShadow"*/;
  v25 = QuestInformationListViewManager_TypeInfo->static_fields;
  v25->ColorShadowShaderSprite = (struct System_String_o *)StringLiteral_5118/*"Custom/SpriteWithMask_ColorShadow"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->ColorShadowShaderSprite, v24, v26, v27, v28, v29, v30, v31);
}


void QuestInformationListViewManager___ctor(QuestInformationListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestInformationListViewManager__CreateEmptyRewardList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v8; // w20
  int v9; // w21
  struct ListViewItemSeed_o *rewardSeed; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v14; // x1
  int32_t v15; // w22
  __int64 v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  __int64 v27; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x8
  struct UIScrollView_o *scrollView; // x8

  v8 = svtCnt;
  v9 = itemCnt;
  if ( (byte_5935258 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&QuestInformationListViewItem_TypeInfo);
    byte_5935258 = 1;
  }
  rewardSeed = this->fields.rewardSeed;
  this->fields.seed = rewardSeed;
  this->fields.mIsBuildingList = 1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)rewardSeed,
    *(System_String_o **)&itemCnt,
    *(System_String_o **)&svtCnt,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( v9 >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = sub_21FFEBC(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_50749276((ListViewItem_o *)v16, v15, 0);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        *(_QWORD *)(v16 + 120) = 0x200000000LL;
        *(_DWORD *)(v16 + 132) = 0;
        *(_DWORD *)(v16 + 124) = 0;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v16,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v16;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), v16, v17, v18, v19, v20, v21, v22);
        }
        if ( v9 == ++v15 )
          goto LABEL_14;
      }
LABEL_23:
      sub_21FFECC(itemList, v14);
    }
    v9 = 0;
LABEL_14:
    if ( v8 >= 1 )
    {
      do
      {
        v27 = sub_21FFEBC(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_50749276((ListViewItem_o *)v27, v9, 0);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        *(_QWORD *)(v27 + 120) = 0x100000000LL;
        *(_DWORD *)(v27 + 132) = 0;
        *(_DWORD *)(v27 + 124) = 0;
        if ( !itemList )
          goto LABEL_23;
        v34 = itemList->fields._items;
        v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v34 )
          goto LABEL_23;
        v36 = itemList->fields._size;
        if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v27,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &v34->obj.klass + v36;
          itemList->fields._size = v36 + 1;
          v37[4] = (Il2CppClass *)v27;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), v27, v28, v29, v30, v31, v32, v33);
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
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  this->fields.mIsBuildingList = 0;
}


void QuestInformationListViewManager__CreateEnemyList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
  __int64 v9; // x20
  QuestMaster_o *QuestEntity; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct ListViewItemSeed_o *enemySeed; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *Master_object; // x22
  Il2CppObject *v35; // x23
  __int64 *v36; // x25
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x2
  Il2CppObject *v46; // x27
  __int64 v47; // x8
  __int64 v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x8
  __int64 v61; // x29
  __int64 v62; // x24
  unsigned __int64 v63; // x9
  unsigned __int64 v64; // x26
  System_String_o *v65; // x3
  __int64 v66; // x8
  ViewEnemyEntity_o *v67; // x27
  unsigned int *v68; // x28
  System_String_o *v69; // x0
  Il2CppObject *v70; // x27
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  ViewEnemyEntity_o *v81; // x28
  __int64 v82; // x1
  struct System_String_array *v83; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  System_Action_o *v90; // x19
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x0
  System_Collections_Generic_List_object__o *v94; // [xsp+8h] [xbp-88h]
  bool HasFlag; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v97; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v98; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_5935259 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_QuestInformationListViewManager___c__DisplayClass29_0__CreateEnemyList_b__0__);
    sub_21FFC50(&QuestInformationListViewManager___c__DisplayClass29_0_TypeInfo);
    sub_21FFC50(&ViewEnemyEntity___TypeInfo);
    sub_21FFC50(&ViewEnemyEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_13270/*"Servants/Commands/"*/);
    byte_5935259 = 1;
  }
  v97 = 0;
  v98 = 0;
  entity = 0;
  v9 = sub_21FFEBC(QuestInformationListViewManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_67;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = enemies;
  v18 = (__int64 *)(v9 + 32);
  *(_DWORD *)(v9 + 24) = questId;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)enemies, v19, v20, v21, v22, v23, v24);
  this->fields.mIsBuildingList = 1;
  if ( kind )
    return;
  enemySeed = this->fields.enemySeed;
  this->fields.seed = enemySeed;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seed, (int32_t)enemySeed, v25, v26, v27, v28, v29, v30);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32, v33);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v35 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  v94 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v94,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 40) = 0;
  v36 = (__int64 *)(v9 + 40);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), 0, v37, v38, v39, v40, v41, v42);
  QuestEntity = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_67;
  QuestEntity = (QuestMaster_o *)QuestMaster__getQuestEntity(QuestEntity, *(_DWORD *)(v9 + 24), 0);
  if ( !QuestEntity )
    goto LABEL_67;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43, v44);
  v46 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v45);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v45);
    QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v46 )
    goto LABEL_67;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v46,
    &entity,
    (int64_t)QuestEntity[2].fields.list[1].monitor,
    *(_DWORD *)(v9 + 24),
    0);
  v47 = *(_QWORD *)(v9 + 32);
  if ( v47 )
  {
    v48 = sub_21FFD10(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v47 + 24));
    *v36 = v48;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), v48, v49, v50, v51, v52, v53, v54);
    v60 = *v18;
    if ( !*v18 )
      goto LABEL_67;
    v61 = 8;
    v62 = 8;
    while ( 1 )
    {
      v63 = *(unsigned int *)(v60 + 24);
      v64 = v62 - 8;
      if ( v62 - 8 >= (int)v63 )
        break;
      if ( v64 >= v63 )
        goto LABEL_61;
      v65 = (System_String_o *)*(unsigned int *)(v60 + 4 * v62);
      if ( (int)v65 < 1 )
        goto LABEL_43;
      if ( !Master_object )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)ViewEnemyMaster__TryGetEntity(
                                       (ViewEnemyMaster_o *)Master_object,
                                       &v97,
                                       *(_DWORD *)(v9 + 24),
                                       (int32_t)v65,
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
        if ( !v97 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)System_Linq_Enumerable__Contains_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                                         v97->fields.enemyId,
                                         (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
LABEL_32:
          v66 = *v18;
          if ( !*v18 )
            goto LABEL_67;
          if ( v64 >= *(unsigned int *)(v66 + 24) )
            goto LABEL_61;
          *(_DWORD *)(v66 + 4 * v62) = 0;
        }
      }
      if ( !v97 || !v35 )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v35,
                                       &v98,
                                       v97->fields.svtId,
                                       (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestEntity & 1) != 0 )
      {
        QuestEntity = (QuestMaster_o *)v98;
        if ( !v98 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)v98, 0);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          goto LABEL_42;
        QuestEntity = (QuestMaster_o *)v97;
        if ( !v97 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ViewEnemyEntity__IsIconIdUnique(v97, 0);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
          if ( !v97 )
            goto LABEL_67;
          v69 = System_Int32__ToString((int)v97 + 36, 0);
          v70 = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)StringLiteral_13270/*"Servants/Commands/"*/, v69, 0);
          QuestEntity = (QuestMaster_o *)v94;
          if ( !v94 )
            goto LABEL_67;
          QuestEntity = (QuestMaster_o *)System_Collections_Generic_List_object___Contains(
                                           v94,
                                           v70,
                                           (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          {
            items = v94->fields._items;
            v78 = Method_System_Collections_Generic_List_string__Add__;
            ++v94->fields._version;
            if ( !items )
              goto LABEL_67;
            size = v94->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v94,
                v70,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
            }
            else
            {
              v80 = &items->obj.klass + size;
              v94->fields._size = size + 1;
              v80[4] = (Il2CppClass *)v70;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v80 + 4), (int32_t)v70, v71, v72, v73, v74, v75, v76);
            }
          }
          v81 = v97;
          v67 = (ViewEnemyEntity_o *)sub_21FFEBC(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_50208952(v67, v81, 0);
          v97 = v67;
          if ( !v67 )
            goto LABEL_67;
          v67->fields.iconId = 0;
        }
        else
        {
LABEL_42:
          v67 = v97;
        }
        v68 = (unsigned int *)*v36;
        if ( !*v36 )
          goto LABEL_67;
        if ( v67 )
        {
          QuestEntity = (QuestMaster_o *)sub_21FFDA4(v67, *(_QWORD *)(*(_QWORD *)v68 + 64LL));
          if ( !QuestEntity )
          {
            v93 = sub_21FFEF0(0, v82);
            sub_21FFD90(v93, 0);
          }
        }
        if ( v64 >= v68[6] )
LABEL_61:
          sub_21FFED4(QuestEntity);
      }
      else
      {
LABEL_43:
        v68 = (unsigned int *)*v36;
        if ( !*v36 )
          goto LABEL_67;
        if ( v64 >= v68[6] )
          goto LABEL_61;
        v67 = 0;
      }
      *(_QWORD *)&v68[v61] = v67;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v68[v61], (int32_t)v67, v55, v65, v56, v57, v58, v59);
      v60 = *v18;
      v61 += 2;
      ++v62;
      if ( !*v18 )
        goto LABEL_67;
    }
  }
  QuestEntity = (QuestMaster_o *)v94;
  if ( !v94 )
LABEL_67:
    sub_21FFECC(QuestEntity, v11);
  v83 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        v94,
                                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v83;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssets,
    (int32_t)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  this->fields.loading = 1;
  v90 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v90,
    (Il2CppObject *)v9,
    Method_QuestInformationListViewManager___c__DisplayClass29_0__CreateEnemyList_b__0__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v91, v92);
  AtlasManager__LoadEnemyAtlas(v90, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestInformationListViewManager__CreateEnemyList_43356884(
        QuestInformationListViewManager_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x25
  int32_t v12; // w22
  ViewEnemyEntity_o **m_Items; // x29
  ViewEnemyEntity_o *v14; // x24
  QuestInformationListViewItem_o *v15; // x0
  const MethodInfo *v16; // x4
  Il2CppObject *v17; // x23
  int32_t v18; // w1
  ViewEnemyEntity_o *v19; // x2
  bool v20; // w3
  ViewEnemyEntity_o *v21; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8

  if ( (byte_593525A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&QuestInformationListViewItem_TypeInfo);
    byte_593525A = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( enemies )
    {
      max_length = enemies->max_length;
      if ( (int)max_length >= 1 )
      {
        v11 = 0;
        v12 = 0;
        m_Items = veEnts->m_Items;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)max_length )
LABEL_26:
            sub_21FFED4(itemList);
          if ( enemies->m_Items[v11] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_25;
          if ( v11 >= LODWORD(veEnts->max_length) )
            goto LABEL_26;
          v14 = m_Items[v11];
          if ( v14 )
          {
            v15 = (QuestInformationListViewItem_o *)sub_21FFEBC(QuestInformationListViewItem_TypeInfo);
            v17 = (Il2CppObject *)v15;
            v18 = v12;
            v19 = v14;
            v20 = 0;
LABEL_16:
            QuestInformationListViewItem___ctor_43342600(v15, v18, v19, v20, v16);
            itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
            if ( !itemList
              || (items = itemList->fields._items,
                  v29 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                  ++itemList->fields._version,
                  !items) )
            {
LABEL_25:
              sub_21FFECC(itemList, v9);
            }
            size = itemList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                itemList,
                v17,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              itemList->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v17;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v17, v22, v23, v24, v25, v26, v27);
            }
            LODWORD(max_length) = enemies->max_length;
            ++v12;
          }
          if ( (__int64)++v11 >= (int)max_length )
            goto LABEL_23;
        }
        if ( !veEnts )
          goto LABEL_25;
        if ( v11 >= LODWORD(veEnts->max_length) )
          goto LABEL_26;
        v21 = m_Items[v11];
        v15 = (QuestInformationListViewItem_o *)sub_21FFEBC(QuestInformationListViewItem_TypeInfo);
        v17 = (Il2CppObject *)v15;
        v18 = v12;
        v19 = v21;
        v20 = 1;
        goto LABEL_16;
      }
    }
LABEL_23:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    this->fields.mIsBuildingList = 0;
  }
  else
  {
    QuestInformationListViewManager__DestroyList(this, *(const MethodInfo **)&questId);
  }
}


int32_t QuestInformationListViewManager__CreateRewardItemList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x24
  int32_t v9; // w29
  __int64 v10; // x22
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  v6 = this;
  if ( (byte_5935256 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (QuestInformationListViewManager_o *)sub_21FFC50(&QuestInformationListViewItem_TypeInfo);
    byte_5935256 = 1;
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
          sub_21FFED4(this);
        v9 = items->m_Items[v8];
        v10 = sub_21FFEBC(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_50749276((ListViewItem_o *)v10, sum + v8, 0);
        *(_QWORD *)(v10 + 120) = 0x200000000LL;
        *(_DWORD *)(v10 + 132) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 124) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v19 = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !v19) )
        {
          sub_21FFECC(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(v19->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &v19->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), v10, v12, v13, v14, v15, v16, v17);
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


void QuestInformationListViewManager__CreateRewardList(
        QuestInformationListViewManager_o *this,
        int32_t kind,
        System_Int32_array *items,
        System_Int32_array *svts,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ListViewItemSeed_o *rewardSeed; // x1
  MissionNaviTransitionBoardItem_o *p_seed; // x0
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

  rewardSeed = this->fields.rewardSeed;
  withoutQP = 0;
  combineMaterials = 0;
  qps = 0;
  this->fields.seed = rewardSeed;
  p_seed = (MissionNaviTransitionBoardItem_o *)&this->fields.seed;
  p_seed[1].fields.isTerminationSpace = 1;
  sub_21FFBF4(
    p_seed,
    (int32_t)rewardSeed,
    (System_String_o *)items,
    (System_String_o *)svts,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !kind )
  {
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    QuestInformationListViewManager__SplitSvtsWithCombineMaterial(v14, svts, &withoutCM, &combineMaterials, v15);
    QuestInformationListViewManager__SplitItemsWithQP(v16, items, &withoutQP, &qps, v17);
    RewardSvtList = QuestInformationListViewManager__CreateRewardSvtList(this, withoutCM, 0, v18);
    RewardItemList = QuestInformationListViewManager__CreateRewardItemList(this, withoutQP, RewardSvtList, v20);
    v23 = QuestInformationListViewManager__CreateRewardSvtList(this, combineMaterials, RewardItemList, v22);
    QuestInformationListViewManager__CreateRewardItemList(this, qps, v23, v24);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  this->fields.mIsBuildingList = 0;
}


int32_t QuestInformationListViewManager__CreateRewardSvtList(
        QuestInformationListViewManager_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x24
  int32_t v9; // w29
  __int64 v10; // x22
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  v6 = this;
  if ( (byte_5935257 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    this = (QuestInformationListViewManager_o *)sub_21FFC50(&QuestInformationListViewItem_TypeInfo);
    byte_5935257 = 1;
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
          sub_21FFED4(this);
        v9 = svts->m_Items[v8];
        v10 = sub_21FFEBC(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_50749276((ListViewItem_o *)v10, sum + v8, 0);
        *(_QWORD *)(v10 + 120) = 0x100000000LL;
        *(_DWORD *)(v10 + 132) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 124) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_21FFECC(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), v10, v12, v13, v14, v15, v16, v17);
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


void QuestInformationListViewManager__DestroyList(QuestInformationListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_array *loadedAssets; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5935253 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5935253 = 1;
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
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
      AssetManager__releaseAssetStorage_47474708(loadedAssets, 0);
      this->fields.loadedAssets = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssets, 0, v5, v6, v7, v8, v9, v10);
    }
    ListViewManager__DestroyList((ListViewManager_o *)this, 0);
    this->fields.mIsBuildingList = 0;
  }
}


bool QuestInformationListViewManager__IsListBuilding(QuestInformationListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.mIsBuildingList;
}


bool QuestInformationListViewManager__IsTouchable(QuestInformationListViewManager_o *this, const MethodInfo *method)
{
  return !this->fields.mIsResetReady && !this->fields.mIsBuildingList;
}


UnityEngine_Material_o *QuestInformationListViewManager__NewChocoMaterialForSprite(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mChocoMaterialSp; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *mChocoTex; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  QuestInformationListViewManager_c *v17; // x0
  UnityEngine_Shader_o *v18; // x20
  UnityEngine_Material_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  UnityEngine_Material_o *v27; // x0

  if ( (byte_593525E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestInformationListViewManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_21FFC50(&StringLiteral_16763/*"_ChocoTex"*/);
    sub_21FFC50(&StringLiteral_13350/*"Shaders/ChocoMap"*/);
    byte_593525E = 1;
  }
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0, 0) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_13350/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_Texture2D___);
      this->fields.mChocoTex = (struct UnityEngine_Texture2D_o *)object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoTex,
        (int32_t)object,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = QuestInformationListViewManager_TypeInfo;
    if ( !*(&QuestInformationListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo, v8, v9);
      v17 = QuestInformationListViewManager_TypeInfo;
    }
    v18 = UnityEngine_Shader__Find(v17->static_fields->CHOCO_SHADER_SP, 0);
    v19 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v19, v18, 0);
    this->fields.mChocoMaterialSp = v19;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoMaterialSp,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v27 = this->fields.mChocoMaterialSp;
    if ( !v27 )
      sub_21FFECC(0, v26);
    UnityEngine_Material__SetTexture(
      v27,
      (System_String_o *)StringLiteral_16763/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)this->fields.mChocoTex,
      0);
  }
  return this->fields.mChocoMaterialSp;
}


UnityEngine_Material_o *QuestInformationListViewManager__NewChocoMaterialForTexture(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mChocoMaterialTx; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *mChocoTex; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  QuestInformationListViewManager_c *v17; // x0
  UnityEngine_Shader_o *v18; // x20
  UnityEngine_Material_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  UnityEngine_Material_o *v27; // x0

  if ( (byte_593525D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestInformationListViewManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_21FFC50(&StringLiteral_16763/*"_ChocoTex"*/);
    sub_21FFC50(&StringLiteral_13350/*"Shaders/ChocoMap"*/);
    byte_593525D = 1;
  }
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0, 0) )
  {
    mChocoTex = (UnityEngine_Object_o *)this->fields.mChocoTex;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Equality(mChocoTex, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_13350/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_Texture2D___);
      this->fields.mChocoTex = (struct UnityEngine_Texture2D_o *)object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoTex,
        (int32_t)object,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = QuestInformationListViewManager_TypeInfo;
    if ( !*(&QuestInformationListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo, v8, v9);
      v17 = QuestInformationListViewManager_TypeInfo;
    }
    v18 = UnityEngine_Shader__Find(v17->static_fields->CHOCO_SHADER_TX, 0);
    v19 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v19, v18, 0);
    this->fields.mChocoMaterialTx = v19;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoMaterialTx,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v27 = this->fields.mChocoMaterialTx;
    if ( !v27 )
      sub_21FFECC(0, v26);
    UnityEngine_Material__SetTexture(
      v27,
      (System_String_o *)StringLiteral_16763/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)this->fields.mChocoTex,
      0);
  }
  return this->fields.mChocoMaterialTx;
}


UnityEngine_Material_o *QuestInformationListViewManager__NewColorShadowMaterialForSprite(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *colorShadowMaterialSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  QuestInformationListViewManager_c *v7; // x0
  UnityEngine_Shader_o *v8; // x20
  UnityEngine_Material_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5935260 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestInformationListViewManager_TypeInfo);
    byte_5935260 = 1;
  }
  colorShadowMaterialSprite = (UnityEngine_Object_o *)this->fields.colorShadowMaterialSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(colorShadowMaterialSprite, 0, 0) )
  {
    v7 = QuestInformationListViewManager_TypeInfo;
    if ( !*(&QuestInformationListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo, v5, v6);
      v7 = QuestInformationListViewManager_TypeInfo;
    }
    v8 = UnityEngine_Shader__Find(v7->static_fields->ColorShadowShaderSprite, 0);
    v9 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v9, v8, 0);
    this->fields.colorShadowMaterialSprite = v9;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.colorShadowMaterialSprite,
      (int32_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return this->fields.colorShadowMaterialSprite;
}


UnityEngine_Material_o *QuestInformationListViewManager__NewColorShadowMaterialForTexture(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *colorShadowMaterialTexture; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  QuestInformationListViewManager_c *v7; // x0
  UnityEngine_Shader_o *v8; // x20
  UnityEngine_Material_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593525F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestInformationListViewManager_TypeInfo);
    byte_593525F = 1;
  }
  colorShadowMaterialTexture = (UnityEngine_Object_o *)this->fields.colorShadowMaterialTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(colorShadowMaterialTexture, 0, 0) )
  {
    v7 = QuestInformationListViewManager_TypeInfo;
    if ( !*(&QuestInformationListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewManager_TypeInfo, v5, v6);
      v7 = QuestInformationListViewManager_TypeInfo;
    }
    v8 = UnityEngine_Shader__Find(v7->static_fields->ColorShadowShaderTexture, 0);
    v9 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v9, v8, 0);
    this->fields.colorShadowMaterialTexture = v9;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.colorShadowMaterialTexture,
      (int32_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return this->fields.colorShadowMaterialTexture;
}


void QuestInformationListViewManager__OnClickListView(
        QuestInformationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestInformationListViewManager_o *v5; // x20
  _BOOL4 mIsResetReady; // w8
  struct ListViewItem_o *linkItem; // x19
  __int64 naturalAligment; // x9
  int klass_high; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  UserItemData_o *UserItemData; // x19
  __int64 v17; // x2
  CommonUI_o *v18; // x20
  QuestInformationListViewManager___c_c *v19; // x8
  struct QuestInformationListViewManager___c_StaticFields *v20; // x9
  ItemLinkInfoWindowComponent_CallbackFunc_o *_9__32_2; // x21
  Il2CppObject *v22; // x22
  struct QuestInformationListViewManager___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  __int64 v32; // x2
  CommonUI_o *v33; // x20
  int32_t monitor_high; // w19
  QuestInformationListViewManager___c_c *v35; // x8
  struct QuestInformationListViewManager___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__32_0; // x21
  Il2CppObject *v38; // x22
  struct QuestInformationListViewManager___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x2
  CommonUI_o *v47; // x20
  Il2CppObject *v48; // x19
  QuestInformationListViewManager___c_c *v49; // x8
  struct QuestInformationListViewManager___c_StaticFields *v50; // x9
  ItemDetailInfoComponent_CallbackFunc_o *_9__32_1; // x21
  Il2CppObject *v52; // x22
  struct QuestInformationListViewManager___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  QuestInformationListViewManager_o *v60; // x0
  const MethodInfo *v61; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_593525C & 1) == 0 )
  {
    sub_21FFC50(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&QuestInformationListViewItem_TypeInfo);
    sub_21FFC50(&Method_QuestInformationListViewManager_OnClickListView__);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_QuestInformationListViewManager___c__OnClickListView_b__32_0__);
    sub_21FFC50(&Method_QuestInformationListViewManager___c__OnClickListView_b__32_1__);
    sub_21FFC50(&Method_QuestInformationListViewManager___c__OnClickListView_b__32_2__);
    this = (QuestInformationListViewManager_o *)sub_21FFC50(&QuestInformationListViewManager___c_TypeInfo);
    byte_593525C = 1;
  }
  mIsResetReady = v5->fields.mIsResetReady;
  entity = 0;
  if ( mIsResetReady )
    return;
  if ( !obj )
    goto LABEL_51;
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    goto LABEL_51;
  naturalAligment = QuestInformationListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != QuestInformationListViewItem_TypeInfo )
  {
    sub_220024C(linkItem, QuestInformationListViewItem_TypeInfo, method, v3);
    QuestInformationListViewManager__IsListBuilding(v60, v61);
    return;
  }
  if ( !LODWORD(linkItem[1].klass) )
  {
    klass_high = HIDWORD(linkItem[1].klass);
    if ( klass_high == 1 )
    {
      v30 = Method_QuestInformationListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_21FFC68(Method_QuestInformationListViewManager_OnClickListView__);
      v31 = (System_Reflection_MethodBase_o *)sub_21FFC34(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
      this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v33 = (CommonUI_o *)this;
      monitor_high = HIDWORD(linkItem[1].monitor);
      v35 = QuestInformationListViewManager___c_TypeInfo;
      if ( !*(&QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo, obj, v32);
        v35 = QuestInformationListViewManager___c_TypeInfo;
      }
      static_fields = v35->static_fields;
      _9__32_0 = static_fields->__9__32_0;
      if ( !_9__32_0 )
      {
        if ( !*(&v35->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v35, obj, v32);
          static_fields = QuestInformationListViewManager___c_TypeInfo->static_fields;
        }
        v38 = (Il2CppObject *)static_fields->__9;
        _9__32_0 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          _9__32_0,
          v38,
          Method_QuestInformationListViewManager___c__OnClickListView_b__32_0__,
          0);
        v39 = QuestInformationListViewManager___c_TypeInfo->static_fields;
        v39->__9__32_0 = _9__32_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v39->__9__32_0,
          (int32_t)_9__32_0,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      if ( v33 )
      {
        CommonUI__OpenServantStatusDialog_37305112(v33, 0, monitor_high, _9__32_0, 0);
        return;
      }
    }
    else
    {
      if ( klass_high != 2 )
        return;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, QuestInformationListViewItem_TypeInfo, method);
      this = (QuestInformationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( this )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                &entity,
                HIDWORD(linkItem[1].monitor),
                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
          return;
        v10 = Method_QuestInformationListViewManager_OnClickListView__;
        if ( (*((_BYTE *)Method_QuestInformationListViewManager_OnClickListView__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_21FFC68(Method_QuestInformationListViewManager_OnClickListView__);
        v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
        this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          if ( !CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)this, 0) )
            goto LABEL_43;
          this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !this )
            goto LABEL_51;
          NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)this, 0);
          if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v12, v13);
          SceneName = SceneList__getSceneName(34, 0);
          if ( System_String__op_Equality(NowSceneName, SceneName, 0) )
          {
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)this, (ItemEntity_o *)entity, 0);
              this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v18 = (CommonUI_o *)this;
              v19 = QuestInformationListViewManager___c_TypeInfo;
              if ( !*(&QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo, obj, v17);
                v19 = QuestInformationListViewManager___c_TypeInfo;
              }
              v20 = v19->static_fields;
              _9__32_2 = v20->__9__32_2;
              if ( !_9__32_2 )
              {
                if ( !*(&v19->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v19, obj, v17);
                  v20 = QuestInformationListViewManager___c_TypeInfo->static_fields;
                }
                v22 = (Il2CppObject *)v20->__9;
                _9__32_2 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_21FFEBC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
                ItemLinkInfoWindowComponent_CallbackFunc___ctor(
                  _9__32_2,
                  v22,
                  (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__32_2__,
                  0);
                v23 = QuestInformationListViewManager___c_TypeInfo->static_fields;
                v23->__9__32_2 = _9__32_2;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v23->__9__32_2,
                  (int32_t)_9__32_2,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28,
                  v29);
              }
              if ( v18 )
              {
                CommonUI__OpenItemLinkInfoDetailWindow_37398352(v18, UserItemData, _9__32_2, 0);
                return;
              }
            }
          }
          else
          {
LABEL_43:
            this = (QuestInformationListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v47 = (CommonUI_o *)this;
            v48 = entity;
            v49 = QuestInformationListViewManager___c_TypeInfo;
            if ( !*(&QuestInformationListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(QuestInformationListViewManager___c_TypeInfo, obj, v46);
              v49 = QuestInformationListViewManager___c_TypeInfo;
            }
            v50 = v49->static_fields;
            _9__32_1 = v50->__9__32_1;
            if ( !_9__32_1 )
            {
              if ( !*(&v49->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v49, obj, v46);
                v50 = QuestInformationListViewManager___c_TypeInfo->static_fields;
              }
              v52 = (Il2CppObject *)v50->__9;
              _9__32_1 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_21FFEBC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
              ItemDetailInfoComponent_CallbackFunc___ctor(
                _9__32_1,
                v52,
                (intptr_t)Method_QuestInformationListViewManager___c__OnClickListView_b__32_1__,
                0);
              v53 = QuestInformationListViewManager___c_TypeInfo->static_fields;
              v53->__9__32_1 = _9__32_1;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v53->__9__32_1,
                (int32_t)_9__32_1,
                v54,
                v55,
                v56,
                v57,
                v58,
                v59);
            }
            if ( v47 )
            {
              CommonUI__OpenItemDetailDialog(v47, (ItemEntity_o *)v48, _9__32_1, 50, 0);
              return;
            }
          }
        }
      }
    }
LABEL_51:
    sub_21FFECC(this, obj);
  }
}


void QuestInformationListViewManager__SetObjectItem(
        QuestInformationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_593525B & 1) == 0 )
  {
    this = (QuestInformationListViewManager_o *)sub_21FFC50(&QuestInformationListViewObject_TypeInfo);
    byte_593525B = 1;
  }
  if ( !obj
    || (naturalAligment = QuestInformationListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (QuestInformationListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != QuestInformationListViewObject_TypeInfo )
  {
    sub_21FFECC(this, obj);
  }
  QuestInformationListViewObject__Init_43357504((QuestInformationListViewObject_o *)obj, 3, (const MethodInfo *)item);
}


void QuestInformationListViewManager__SetResetReady(
        QuestInformationListViewManager_o *this,
        bool onOff,
        const MethodInfo *method)
{
  this->fields.mIsResetReady = onOff;
}


void QuestInformationListViewManager__SplitItemsWithQP(
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
  il2cpp_array_size_t max_length; // x8
  ItemMaster_o *v13; // x24
  unsigned __int64 v14; // x25
  int32_t *m_Items; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  char *v19; // x8
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  unsigned __int64 max_length_low; // x8
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  char *v27; // x8
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_int__o *v32; // x0
  const MethodInfo_4433138 *v33; // x2
  __int64 v34; // x8
  System_Int32_array *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Int32_array *v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7

  if ( (byte_5935255 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5935255 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_43;
  max_length = itms->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = (ItemMaster_o *)Instance;
    v14 = 0;
    m_Items = itms->m_Items;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
LABEL_44:
        sub_21FFED4(Instance);
      v11 = (unsigned int)m_Items[v14];
      if ( !(_DWORD)v11 )
        break;
      if ( (_DWORD)v11 == -1 )
      {
        if ( !v9 )
          goto LABEL_43;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_43;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v31 = v17[4];
          v32 = v9;
LABEL_34:
          v33 = *(const MethodInfo_4433138 **)(*(_QWORD *)(v31 + 192) + 112LL);
          LODWORD(v11) = 0;
          goto LABEL_38;
        }
        v19 = (char *)items + 4 * size;
        v9->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v19 + 8) = 0;
        goto LABEL_39;
      }
      if ( !v13 )
        goto LABEL_43;
      Instance = (Il2CppObject *)ItemMaster__isQP(v13, v11, 0);
      max_length_low = LODWORD(itms->max_length);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v14 >= max_length_low )
          goto LABEL_44;
        if ( !v9 )
          goto LABEL_43;
        v24 = v9->fields._items;
        v11 = (unsigned int)m_Items[v14];
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !v24 )
          goto LABEL_43;
        v26 = v9->fields._size;
        if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
        {
          v34 = v25[4];
          v32 = v9;
          goto LABEL_37;
        }
        v27 = (char *)v24 + 4 * v26;
        v9->fields._size = v26 + 1;
      }
      else
      {
        if ( v14 >= max_length_low )
          goto LABEL_44;
        if ( !v8 )
          goto LABEL_43;
        v28 = v8->fields._items;
        v11 = (unsigned int)m_Items[v14];
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v28 )
          goto LABEL_43;
        v30 = v8->fields._size;
        if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
        {
          v34 = v29[4];
          v32 = v8;
LABEL_37:
          v33 = *(const MethodInfo_4433138 **)(*(_QWORD *)(v34 + 192) + 112LL);
LABEL_38:
          System_Collections_Generic_List_int___AddWithResize(v32, v11, v33);
          goto LABEL_39;
        }
        v27 = (char *)v28 + 4 * v30;
        v8->fields._size = v30 + 1;
      }
      *((_DWORD *)v27 + 8) = v11;
LABEL_39:
      LODWORD(max_length) = itms->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        goto LABEL_40;
    }
    if ( !v8 )
      goto LABEL_43;
    v20 = v8->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !v20 )
      goto LABEL_43;
    v22 = v8->fields._size;
    if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
    {
      v31 = v21[4];
      v32 = v8;
      goto LABEL_34;
    }
    v19 = (char *)v20 + 4 * v22;
    v8->fields._size = v22 + 1;
    goto LABEL_18;
  }
LABEL_40:
  if ( !v8
    || (v35 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v35,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)withoutQP, (int32_t)v35, v36, v37, v38, v39, v40, v41),
        !v9) )
  {
LABEL_43:
    sub_21FFECC(Instance, v11);
  }
  v42 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v42;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)qps, (int32_t)v42, v43, v44, v45, v46, v47, v48);
}


void QuestInformationListViewManager__SplitSvtsWithCombineMaterial(
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
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x24
  unsigned __int64 v14; // x25
  int32_t *m_Items; // x28
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
  const MethodInfo_4433138 *v33; // x2
  __int64 v34; // x8
  System_Int32_array *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Int32_array *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5935254 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5935254 = 1;
  }
  entity = 0;
  v8 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  max_length = svts->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
LABEL_46:
        sub_21FFED4(Instance);
      v16 = m_Items[v14];
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v31 = v18[4];
          v32 = v9;
LABEL_36:
          v33 = *(const MethodInfo_4433138 **)(*(_QWORD *)(v31 + 192) + 112LL);
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
                                   (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v14 >= LODWORD(svts->max_length) )
          goto LABEL_46;
        if ( !v9 )
          goto LABEL_45;
        v24 = v9->fields._items;
        v11 = (unsigned int)m_Items[v14];
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
          v33 = *(const MethodInfo_4433138 **)(*(_QWORD *)(v34 + 192) + 112LL);
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
        if ( v14 >= LODWORD(svts->max_length) )
          goto LABEL_46;
        if ( !v8 )
          goto LABEL_45;
        v28 = v8->fields._items;
        v11 = (unsigned int)m_Items[v14];
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
      *((_DWORD *)v27 + 8) = v11;
LABEL_41:
      LODWORD(max_length) = svts->max_length;
      if ( (__int64)++v14 >= (int)max_length )
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
    if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
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
                (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v35,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)withoutCM, (int32_t)v35, v36, v37, v38, v39, v40, v41),
        !v9) )
  {
LABEL_45:
    sub_21FFECC(Instance, v11);
  }
  v42 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v42;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)combineMaterials, (int32_t)v42, v43, v44, v45, v46, v47, v48);
}


System_Collections_Generic_List_QuestInformationListViewObject__o *QuestInformationListViewManager__get_ClippingObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5935252 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935252 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)QuestInformationListViewObject__GetItem(
                                 (QuestInformationListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v3;
}


System_Collections_Generic_List_QuestInformationListViewObject__o *QuestInformationListViewManager__get_ObjectList(
        QuestInformationListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5935251 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935251 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestInformationListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestInformationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_QuestInformationListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_QuestInformationListViewObject__o *)v3;
}


void QuestInformationListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935262 & 1) == 0 )
  {
    sub_21FFC50(&QuestInformationListViewManager___c_TypeInfo);
    byte_5935262 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestInformationListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestInformationListViewManager___c_TypeInfo->static_fields->__9 = (struct QuestInformationListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestInformationListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestInformationListViewManager___c___ctor(QuestInformationListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestInformationListViewManager___c___OnClickListView_b__32_0(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5935265 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5935265 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void QuestInformationListViewManager___c___OnClickListView_b__32_1(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5935264 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_QuestInformationListViewManager___c__OnClickListView_b__32_1__);
    byte_5935264 = 1;
  }
  v3 = Method_QuestInformationListViewManager___c__OnClickListView_b__32_1__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__32_1__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_QuestInformationListViewManager___c__OnClickListView_b__32_1__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void QuestInformationListViewManager___c___OnClickListView_b__32_2(
        QuestInformationListViewManager___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5935263 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_QuestInformationListViewManager___c__OnClickListView_b__32_2__);
    byte_5935263 = 1;
  }
  v3 = Method_QuestInformationListViewManager___c__OnClickListView_b__32_2__;
  if ( (*((_BYTE *)Method_QuestInformationListViewManager___c__OnClickListView_b__32_2__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_QuestInformationListViewManager___c__OnClickListView_b__32_2__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0, 0);
}


void QuestInformationListViewManager___c__DisplayClass29_0___ctor(
        QuestInformationListViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestInformationListViewManager___c__DisplayClass29_0___CreateEnemyList_b__0(
        QuestInformationListViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestInformationListViewManager___c__DisplayClass29_0_o *v3; // x19
  struct QuestInformationListViewManager_o *_4__this; // x8
  System_Action_o *_9__1; // x21
  System_String_array *loadedAssets; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_5935266 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    this = (QuestInformationListViewManager___c__DisplayClass29_0_o *)sub_21FFC50(&Method_QuestInformationListViewManager___c__DisplayClass29_0__CreateEnemyList_b__1__);
    byte_5935266 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  _9__1 = v3->fields.__9__1;
  loadedAssets = _4__this->fields.loadedAssets;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_QuestInformationListViewManager___c__DisplayClass29_0__CreateEnemyList_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetManager__loadAssetStorage_47472372(loadedAssets, _9__1, 1, 0);
}


void QuestInformationListViewManager___c__DisplayClass29_0___CreateEnemyList_b__1(
        QuestInformationListViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  QuestInformationListViewManager__CreateEnemyList_43356884(
    this->fields.__4__this,
    (int32_t)method,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}