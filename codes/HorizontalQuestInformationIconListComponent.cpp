void HorizontalQuestInformationIconListComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct HorizontalQuestInformationIconListComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596D31A & 1) == 0 )
  {
    sub_2213A60(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_2213A60(&StringLiteral_15735/*"Unlit/Transparent Colored_Choco"*/);
    sub_2213A60(&StringLiteral_5129/*"Custom/SpriteWithMask_Choco"*/);
    byte_596D31A = 1;
  }
  v7 = StringLiteral_15735/*"Unlit/Transparent Colored_Choco"*/;
  HorizontalQuestInformationIconListComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15735/*"Unlit/Transparent Colored_Choco"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)HorizontalQuestInformationIconListComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5129/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = HorizontalQuestInformationIconListComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5129/*"Custom/SpriteWithMask_Choco"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->CHOCO_SHADER_SP, v8, v10, v11, v12, v13, v14, v15);
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
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Action_object__o *v14; // x21
  Il2CppObject *current; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v23; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596D30E & 1) == 0 )
  {
    sub_2213A60(&System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
    sub_2213A60(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__);
    sub_2213A60(&HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
    byte_596D30E = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = sub_2213CCC(HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
  HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ctor(
    (HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *)v3,
    0);
  if ( !v3
    || (*(_QWORD *)(v3 + 24) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11),
        iconGroupList = (System_Collections_Generic_List_object__o *)this->fields.iconGroupList,
        *(_DWORD *)(v3 + 16) = 0,
        !iconGroupList) )
  {
    sub_2213CDC(iconGroupList, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    iconGroupList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
  v22 = 0;
  v23 = &v24;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    if ( !v12 )
      break;
    v14 = *(System_Action_object__o **)(v3 + 32);
    current = v24.fields._current;
    if ( !v14 )
    {
      v14 = (System_Action_object__o *)sub_2213CCC(System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
      System_Action_object____ctor(
        v14,
        (Il2CppObject *)v3,
        Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
        0);
      *(_QWORD *)(v3 + 32) = v14;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v14, v16, v17, v18, v19, v20, v21);
    }
    if ( !current )
      sub_2213CDC(v12, v13);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)current,
      (System_Action_T__o *)v14,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    ++*(_DWORD *)(v3 + 16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
}


void HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  int32_t v9; // w22
  QuestInformationListViewItem_o *v10; // x23
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
  QuestInformationListViewItem_o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x8

  if ( (byte_596D315 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    sub_2213A60(&QuestInformationListViewItem_TypeInfo);
    byte_596D315 = 1;
  }
  if ( !kind )
  {
    if ( itemCnt >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = (QuestInformationListViewItem_o *)sub_2213CCC(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v10, v9, 2, 0, 0);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v20 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
        }
        if ( itemCnt == ++v9 )
          goto LABEL_14;
      }
LABEL_22:
      sub_2213CDC(itemList, v11);
    }
    itemCnt = 0;
LABEL_14:
    if ( svtCnt >= 1 )
    {
      while ( 1 )
      {
        v23 = (QuestInformationListViewItem_o *)sub_2213CCC(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v23, itemCnt, 1, 0, 0);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        v30 = itemList->fields._items;
        v31 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v30 )
          break;
        v32 = itemList->fields._size;
        if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &v30->obj.klass + v32;
          itemList->fields._size = v32 + 1;
          v33[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
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
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Master_object; // x22
  Il2CppObject *v28; // x23
  __int64 *v29; // x25
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x2
  Il2CppObject *v39; // x27
  __int64 v40; // x8
  __int64 v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x8
  __int64 v54; // x29
  __int64 v55; // x24
  unsigned __int64 v56; // x9
  unsigned __int64 v57; // x26
  System_String_o *v58; // x3
  __int64 v59; // x8
  ViewEnemyEntity_o *v60; // x27
  unsigned int *v61; // x28
  System_String_o *v62; // x0
  Il2CppObject *v63; // x27
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  ViewEnemyEntity_o *v74; // x28
  __int64 v75; // x1
  struct System_String_array *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_Action_o *v83; // x21
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  System_Action_o *v90; // x21
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Action_o *v97; // x19
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x0
  System_Collections_Generic_List_object__o *v101; // [xsp+8h] [xbp-88h]
  bool HasFlag; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v104; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v105; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_596D316 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__);
    sub_2213A60(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__);
    sub_2213A60(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__);
    sub_2213A60(&HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
    sub_2213A60(&ViewEnemyEntity___TypeInfo);
    sub_2213A60(&ViewEnemyEntity_TypeInfo);
    sub_2213A60(&StringLiteral_13297/*"Servants/Commands/"*/);
    byte_596D316 = 1;
  }
  v104 = 0;
  v105 = 0;
  entity = 0;
  v9 = sub_2213CCC(HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___ctor(
    (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v9,
    0);
  if ( !v9 )
    goto LABEL_67;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = enemies;
  v18 = (__int64 *)(v9 + 32);
  *(_DWORD *)(v9 + 24) = questId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)enemies, v19, v20, v21, v22, v23, v24);
  if ( kind )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25, v26);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v28 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v101 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 40) = 0;
  v29 = (__int64 *)(v9 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), 0, v30, v31, v32, v33, v34, v35);
  QuestEntity = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_67;
  QuestEntity = (QuestMaster_o *)QuestMaster__getQuestEntity(QuestEntity, *(_DWORD *)(v9 + 24), 0);
  if ( !QuestEntity )
    goto LABEL_67;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36, v37);
  v39 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v38);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v38);
    QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v39 )
    goto LABEL_67;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v39,
    &entity,
    (int64_t)QuestEntity[2].fields.list[1].monitor,
    *(_DWORD *)(v9 + 24),
    0);
  v40 = *(_QWORD *)(v9 + 32);
  if ( v40 )
  {
    v41 = sub_2213B20(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v40 + 24));
    *v29 = v41;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), v41, v42, v43, v44, v45, v46, v47);
    v53 = *v18;
    if ( !*v18 )
      goto LABEL_67;
    v54 = 8;
    v55 = 8;
    while ( 1 )
    {
      v56 = *(unsigned int *)(v53 + 24);
      v57 = v55 - 8;
      if ( v55 - 8 >= (int)v56 )
        break;
      if ( v57 >= v56 )
        goto LABEL_61;
      v58 = (System_String_o *)*(unsigned int *)(v53 + 4 * v55);
      if ( (int)v58 < 1 )
        goto LABEL_43;
      if ( !Master_object )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)ViewEnemyMaster__TryGetEntity(
                                       (ViewEnemyMaster_o *)Master_object,
                                       &v104,
                                       *(_DWORD *)(v9 + 24),
                                       (int32_t)v58,
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
        if ( !v104 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)System_Linq_Enumerable__Contains_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                                         v104->fields.enemyId,
                                         (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
LABEL_32:
          v59 = *v18;
          if ( !*v18 )
            goto LABEL_67;
          if ( v57 >= *(unsigned int *)(v59 + 24) )
            goto LABEL_61;
          *(_DWORD *)(v59 + 4 * v55) = 0;
        }
      }
      if ( !v104 || !v28 )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v28,
                                       &v105,
                                       v104->fields.svtId,
                                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestEntity & 1) != 0 )
      {
        QuestEntity = (QuestMaster_o *)v105;
        if ( !v105 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)v105, 0);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          goto LABEL_42;
        QuestEntity = (QuestMaster_o *)v104;
        if ( !v104 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ViewEnemyEntity__IsIconIdUnique(v104, 0);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
          if ( !v104 )
            goto LABEL_67;
          v62 = System_Int32__ToString((int)v104 + 36, 0);
          v63 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_13297/*"Servants/Commands/"*/, v62, 0);
          QuestEntity = (QuestMaster_o *)v101;
          if ( !v101 )
            goto LABEL_67;
          QuestEntity = (QuestMaster_o *)System_Collections_Generic_List_object___Contains(
                                           v101,
                                           v63,
                                           (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          {
            items = v101->fields._items;
            v71 = Method_System_Collections_Generic_List_string__Add__;
            ++v101->fields._version;
            if ( !items )
              goto LABEL_67;
            size = v101->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v101,
                v63,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            }
            else
            {
              v73 = &items->obj.klass + size;
              v101->fields._size = size + 1;
              v73[4] = (Il2CppClass *)v63;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 4), (int32_t)v63, v64, v65, v66, v67, v68, v69);
            }
          }
          v74 = v104;
          v60 = (ViewEnemyEntity_o *)sub_2213CCC(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_50272536(v60, v74, 0);
          v104 = v60;
          if ( !v60 )
            goto LABEL_67;
          v60->fields.iconId = 0;
        }
        else
        {
LABEL_42:
          v60 = v104;
        }
        v61 = (unsigned int *)*v29;
        if ( !*v29 )
          goto LABEL_67;
        if ( v60 )
        {
          QuestEntity = (QuestMaster_o *)sub_2213BB4(v60, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
          if ( !QuestEntity )
          {
            v100 = sub_2213D00(0, v75);
            sub_2213BA0(v100, 0);
          }
        }
        if ( v57 >= v61[6] )
LABEL_61:
          sub_2213CE4(QuestEntity);
      }
      else
      {
LABEL_43:
        v61 = (unsigned int *)*v29;
        if ( !*v29 )
          goto LABEL_67;
        if ( v57 >= v61[6] )
          goto LABEL_61;
        v60 = 0;
      }
      *(_QWORD *)&v61[v54] = v60;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v61[v54], (int32_t)v60, v48, v58, v49, v50, v51, v52);
      v53 = *v18;
      v54 += 2;
      ++v55;
      if ( !*v18 )
        goto LABEL_67;
    }
  }
  QuestEntity = (QuestMaster_o *)v101;
  if ( !v101 )
LABEL_67:
    sub_2213CDC(QuestEntity, v11);
  v76 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        v101,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v76;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssets,
    (int32_t)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields.loading = 1;
  v83 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v83,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__,
    0);
  this->fields.assetStoragesLoadCallback = v83;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetStoragesLoadCallback,
    (int32_t)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v90 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v90,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__,
    0);
  this->fields.enemyAtlasLoadCallback = v90;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enemyAtlasLoadCallback,
    (int32_t)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v97 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v97,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v98, v99);
  AtlasManager__LoadEnemyAtlas(v97, 0);
}


// local variable allocation has failed, the output may be wrong!
void HorizontalQuestInformationIconListComponent__CreateEnemyList_43285188(
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
  ViewEnemyEntity_o **m_Items; // x29
  ViewEnemyEntity_o *v12; // x24
  QuestInformationListViewItem_o *v13; // x0
  Il2CppObject *v14; // x23
  int32_t v15; // w1
  ViewEnemyEntity_o *v16; // x2
  bool v17; // w3
  ViewEnemyEntity_o *v18; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v28; // x8

  v7 = this;
  if ( (byte_596D317 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_2213A60(&QuestInformationListViewItem_TypeInfo);
    byte_596D317 = 1;
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
        m_Items = veEnts->m_Items;
        while ( 1 )
        {
          if ( v9 >= (unsigned int)max_length )
LABEL_25:
            sub_2213CE4(this);
          if ( enemies->m_Items[v9] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_24;
          if ( v9 >= LODWORD(veEnts->max_length) )
            goto LABEL_25;
          v12 = m_Items[v9];
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_2213CCC(QuestInformationListViewItem_TypeInfo);
            v14 = (Il2CppObject *)v13;
            v15 = v10;
            v16 = v12;
            v17 = 0;
LABEL_16:
            QuestInformationListViewItem___ctor_43363196(v13, v15, v16, v17, 0);
            this = (HorizontalQuestInformationIconListComponent_o *)v7->fields.itemList;
            if ( !this
              || (m_CachedPtr = this->fields.m_CachedPtr,
                  v26 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
                  ++HIDWORD(this->fields.m_CancellationTokenSource),
                  !m_CachedPtr) )
            {
LABEL_24:
              sub_2213CDC(this, *(_QWORD *)&questId);
            }
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                v14,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v28 + 32) = v14;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v14, v19, v20, v21, v22, v23, v24);
            }
            LODWORD(max_length) = enemies->max_length;
            ++v10;
          }
          if ( (__int64)++v9 >= (int)max_length )
            return;
        }
        if ( !veEnts )
          goto LABEL_24;
        if ( v9 >= LODWORD(veEnts->max_length) )
          goto LABEL_25;
        v18 = m_Items[v9];
        v13 = (QuestInformationListViewItem_o *)sub_2213CCC(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v13;
        v15 = v10;
        v16 = v18;
        v17 = 1;
        goto LABEL_16;
      }
    }
  }
}


void HorizontalQuestInformationIconListComponent__CreateIconGroupList(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *v3; // x21
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *itemList; // x8
  UILabel_o *infoLabel; // x20
  int32_t iconType; // w22
  System_String_o **v9; // x8
  System_String_o *gameObject; // x0
  bool v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x2
  HorizontalQuestInformationIconListComponent___c_c *v19; // x0
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *v20; // x22
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x8
  System_Func_T1__T2__TResult__o *_9__19_0; // x23
  Il2CppObject *v23; // x24
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x22
  System_Func_object__int__o *v32; // x23
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  HorizontalQuestInformationIconListComponent___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x22
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v38; // x9
  System_Func_object__object__o *_9__19_2; // x23
  Il2CppObject *v40; // x24
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x26
  System_Collections_Generic_List_object__o *v49; // x27
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int v56; // w28
  char v57; // w8
  System_Collections_Generic_List_object__o *iconDrawList; // x25
  __int64 v59; // x1
  __int64 v60; // x2
  UnityEngine_Transform_o *parent; // x26
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v63; // x1
  System_Collections_IEnumerator_o *v64; // x26
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v66; // x9
  int *p_offset; // x10
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x1
  System_Collections_IEnumerator_o *v71; // x26
  System_Collections_IEnumerator_c *v72; // x8
  __int64 v73; // x9
  System_Collections_IEnumerator_c **v74; // x10
  __int64 v75; // x0
  UnityEngine_Component_o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v81; // x0
  __int64 v82; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  Il2CppObject *v90; // x1
  struct System_Object_array *items; // x8
  _QWORD *v92; // x9
  __int64 size; // x10
  Il2CppClass **v94; // x0
  __int64 v95; // x0
  __int64 v96; // x8
  __int64 v97; // x27
  __int64 v98; // x9
  int *v99; // x10
  __int64 v100; // x0
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  System_Collections_Generic_List_object__o *v105; // x24
  System_Collections_Generic_IEnumerable_TSource__c *v106; // x8
  __int64 v107; // x9
  int32_t *v108; // x10
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x25
  int32_t v113; // w23
  __int64 v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  __int64 v126; // x25
  __int64 v127; // x8
  __int64 v128; // x9
  int *v129; // x10
  __int64 v130; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x0
  System_Collections_Generic_List_TSource__o *v132; // x0
  __int64 v133; // x1
  System_Collections_Generic_List_object__o *v134; // x26
  Il2CppObject *Item; // x0
  __int64 v136; // x1
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  const MethodInfo *v139; // x4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  System_Collections_Generic_List_object__o *v143; // x25
  int32_t v144; // w27
  HorizontalQuestInformationIconDraw_o *v145; // x28
  Il2CppObject *v146; // x0
  const MethodInfo *v147; // x4
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  __int64 v152; // x22
  __int64 v153; // x8
  __int64 v154; // x9
  int *v155; // x10
  __int64 v156; // x0
  __int64 v157; // x0
  __int64 v158; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v159; // [xsp+10h] [xbp-B0h]
  UnityEngine_GameObject_o *iconGrid; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v161; // [xsp+28h] [xbp-98h]
  __int64 v162; // [xsp+30h] [xbp-90h] BYREF
  _QWORD *v163; // [xsp+38h] [xbp-88h]
  __int64 *v164; // [xsp+40h] [xbp-80h]
  __int64 v165; // [xsp+48h] [xbp-78h] BYREF
  __int64 v166; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_IEnumerator_o *v167; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_596D30D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy___f__AnonymousType7_QuestInformationListViewItem__int___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType7_QuestInformationListViewItem__int____);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    sub_2213A60(&System_Func_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_2213A60(&System_Func___f__AnonymousType7_QuestInformationListViewItem__int___int__TypeInfo);
    sub_2213A60(&System_Func_QuestInformationListViewItem__int____f__AnonymousType7_QuestInformationListViewItem__int___TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    sub_2213A60(&System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    sub_2213A60(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__);
    sub_2213A60(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__);
    sub_2213A60(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__);
    sub_2213A60(&HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
    sub_2213A60(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_9046/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/);
    sub_2213A60(&StringLiteral_9047/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/);
    byte_596D30D = 1;
  }
  v166 = 0;
  v167 = 0;
  v165 = 0;
  v3 = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_2213CCC(HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___ctor(v3, 0);
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size >= 1 )
  {
    infoLabel = this->fields.infoLabel;
    iconType = this->fields.iconType;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
    v9 = (System_String_o **)&StringLiteral_9047/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/;
    if ( iconType )
      v9 = (System_String_o **)&StringLiteral_9046/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/;
    gameObject = LocalizationManager__Get(*v9, 0);
    if ( !infoLabel )
      goto LABEL_136;
    UILabel__set_text(infoLabel, gameObject, 0);
    gameObject = (System_String_o *)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_136;
    gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_136;
    v11 = 1;
  }
  else
  {
    gameObject = (System_String_o *)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_136;
    gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_136;
    v11 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0);
  this->fields.iconGroupList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.iconGroupList, 0, v12, v13, v14, v15, v16, v17);
  if ( !v3 )
    goto LABEL_136;
  v19 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  v3->fields.chunkSize = this->fields.displayLimitNum;
  v20 = this->fields.itemList;
  if ( !*(&v19->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v19, v4, v18);
    v19 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__19_0 = (System_Func_T1__T2__TResult__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v4, v18);
      static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_QuestInformationListViewItem__int____f__AnonymousType7_QuestInformationListViewItem__int___TypeInfo);
    System_Func_object__int__object____ctor(
      _9__19_0,
      v23,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__,
      0);
    v24 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v24->__9__19_0 = (struct System_Func_QuestInformationListViewItem__int____f__AnonymousType7_QuestInformationListViewItem__int___o *)_9__19_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__19_0, (int32_t)_9__19_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__59315436(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                               (System_Func_TSource__int__TResult__o *)_9__19_0,
                                                               (const MethodInfo_38914EC *)Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType7_QuestInformationListViewItem__int____);
  v32 = (System_Func_object__int__o *)sub_2213CCC(System_Func___f__AnonymousType7_QuestInformationListViewItem__int___int__TypeInfo);
  System_Func_object__int____ctor(
    v32,
    (Il2CppObject *)v3,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
    0);
  v33 = System_Linq_Enumerable__GroupBy_object__int_(
          v31,
          (System_Func_TSource__TKey__o *)v32,
          (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy___f__AnonymousType7_QuestInformationListViewItem__int___int___);
  v36 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
  if ( !*(&HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo, v34, v35);
    v36 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  v38 = v36->static_fields;
  _9__19_2 = (System_Func_object__object__o *)v38->__9__19_2;
  if ( !_9__19_2 )
  {
    if ( !*(&v36->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v36, v34, v35);
      v38 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__19_2 = (System_Func_object__object__o *)sub_2213CCC(System_Func_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    System_Func_object__object____ctor(
      _9__19_2,
      v40,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__,
      0);
    v41 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v41->__9__19_2 = (struct System_Func_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___o *)_9__19_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->__9__19_2, (int32_t)_9__19_2, v42, v43, v44, v45, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v37,
                                                               (System_Func_TSource__TResult__o *)_9__19_2,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
  v49 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  gameObject = (System_String_o *)this->fields.iconGrid;
  if ( !gameObject )
    goto LABEL_136;
  iconGrid = this->fields.iconGrid;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (System_String_o *)System_Linq_Enumerable__Count_object_(
                                    v48,
                                    (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
  v161 = v49;
  if ( (int)gameObject >= 1 )
  {
    v56 = 0;
    v57 = 1;
    v159 = v48;
    do
    {
      if ( (v57 & 1) != 0 )
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)this->fields.iconDrawList;
      }
      else
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          iconDrawList,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
        gameObject = (System_String_o *)UnityEngine_GameObject__get_transform(iconGrid, 0);
        if ( !gameObject )
          goto LABEL_136;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59, v60);
        gameObject = (System_String_o *)UnityEngine_Object__Instantiate_object__59717116(
                                          (Il2CppObject *)iconGrid,
                                          parent,
                                          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_136;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)gameObject, 0);
        v64 = Enumerator;
        v167 = Enumerator;
        v162 = 0;
        v163 = &v167;
        v164 = &v166;
        if ( !Enumerator )
LABEL_64:
          sub_2213CDC(Enumerator, v63);
        while ( 1 )
        {
          klass = v64->klass;
          v66 = *(unsigned __int16 *)&v64->klass->_2.rank;
          if ( *(_WORD *)&v64->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v66;
              p_offset += 4;
              if ( !v66 )
                goto LABEL_44;
            }
            v68 = (__int64)&klass->vtable[*p_offset];
          }
          else
          {
LABEL_44:
            v68 = sub_224BC3C(v64, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v69 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v68)(v64, *(_QWORD *)(v68 + 8));
          if ( (v69 & 1) == 0 )
            break;
          v71 = v167;
          if ( !v167 )
            sub_2213CDC(v69, v70);
          v72 = v167->klass;
          v73 = *(unsigned __int16 *)&v167->klass->_2.rank;
          if ( *(_WORD *)&v167->klass->_2.rank )
          {
            v74 = (System_Collections_IEnumerator_c **)&v72->_1.interfaceOffsets->offset;
            while ( *(v74 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v73;
              v74 += 2;
              if ( !v73 )
                goto LABEL_52;
            }
            v75 = (__int64)&v72->vtable[*(_DWORD *)v74 + 1];
          }
          else
          {
LABEL_52:
            v75 = sub_224BC3C(v167, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v76 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v75)(
                                             v71,
                                             *(_QWORD *)(v75 + 8));
          if ( !v76 )
            sub_2213CDC(0, v77);
          naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
          if ( v76->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (UnityEngine_Transform_c *)v76->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
          {
            sub_221405C(v76, UnityEngine_Transform_TypeInfo, v78, v79);
            v158 = v157;
            sub_1FF99DC(&v162);
            sub_230112C(v158);
          }
          v81 = UnityEngine_Component__get_gameObject(v76, 0);
          if ( !v81 )
            sub_2213CDC(0, v82);
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         v81,
                                         (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
          v90 = ComponentInChildren_object;
          if ( !iconDrawList
            || (items = iconDrawList->fields._items,
                v92 = Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__,
                ++iconDrawList->fields._version,
                !items) )
          {
            sub_2213CDC(ComponentInChildren_object, ComponentInChildren_object);
          }
          size = iconDrawList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              iconDrawList,
              ComponentInChildren_object,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v94 = &items->obj.klass + size;
            iconDrawList->fields._size = size + 1;
            v94[4] = (Il2CppClass *)v90;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v94 + 4), (int32_t)v90, v84, v85, v86, v87, v88, v89);
          }
          v64 = v167;
          if ( !v167 )
            goto LABEL_64;
        }
        v95 = sub_2213BB4(v167, System_IDisposable_TypeInfo);
        v166 = v95;
        v48 = v159;
        if ( v95 )
        {
          v96 = *(_QWORD *)v95;
          v97 = v95;
          v98 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
          {
            v99 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v99 - 1) != System_IDisposable_TypeInfo )
            {
              --v98;
              v99 += 4;
              if ( !v98 )
                goto LABEL_70;
            }
            v100 = v96 + 16LL * *v99 + 312;
          }
          else
          {
LABEL_70:
            v100 = sub_224BC3C(v95, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v100)(v97, *(_QWORD *)(v100 + 8));
        }
        gameObject = 0;
        v49 = v161;
      }
      if ( !v49 )
        goto LABEL_136;
      v101 = v49->fields._items;
      v102 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
      ++v49->fields._version;
      if ( !v101 )
        goto LABEL_136;
      v103 = v49->fields._size;
      if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          (Il2CppObject *)iconDrawList,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
      }
      else
      {
        v104 = &v101->obj.klass + v103;
        v49->fields._size = v103 + 1;
        v104[4] = (Il2CppClass *)iconDrawList;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v104 + 4), (int32_t)iconDrawList, v50, v51, v52, v53, v54, v55);
      }
      ++v56;
      gameObject = (System_String_o *)System_Linq_Enumerable__Count_object_(
                                        v48,
                                        (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
      v57 = 0;
    }
    while ( v56 < (int)gameObject );
  }
  v105 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  if ( !v48 )
LABEL_136:
    sub_2213CDC(gameObject, v4);
  v106 = v48->klass;
  v107 = *(unsigned __int16 *)&v48->klass->_2.rank;
  if ( *(_WORD *)&v48->klass->_2.rank )
  {
    v108 = &v106->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___c **)v108 - 1) != System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo )
    {
      --v107;
      v108 += 4;
      if ( !v107 )
        goto LABEL_91;
    }
    v109 = (__int64)&v106->vtable[*v108];
  }
  else
  {
LABEL_91:
    v109 = sub_224BC3C(
             v48,
             System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo,
             0);
  }
  v110 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v109)(
           v48,
           *(_QWORD *)(v109 + 8));
  v165 = v110;
  v162 = 0;
  v163 = &v165;
  if ( !v110 )
LABEL_126:
    sub_2213CDC(v110, v111);
  v112 = v110;
  v113 = 0;
  while ( 1 )
  {
    v114 = *(_QWORD *)v112;
    v115 = *(unsigned __int16 *)(*(_QWORD *)v112 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v112 + 302LL) )
    {
      v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v116 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v115;
        v116 += 4;
        if ( !v115 )
          goto LABEL_99;
      }
      v117 = v114 + 16LL * *v116 + 312;
    }
    else
    {
LABEL_99:
      v117 = sub_224BC3C(v112, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v118 = (*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v112, *(_QWORD *)(v117 + 8));
    if ( (v118 & 1) == 0 )
      break;
    v126 = v165;
    if ( !v165 )
      sub_2213CDC(v118, v119);
    v127 = *(_QWORD *)v165;
    v128 = *(unsigned __int16 *)(*(_QWORD *)v165 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v165 + 302LL) )
    {
      v129 = (int *)(*(_QWORD *)(v127 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___c **)v129 - 1) != System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo )
      {
        --v128;
        v129 += 4;
        if ( !v128 )
          goto LABEL_107;
      }
      v130 = v127 + 16LL * *v129 + 312;
    }
    else
    {
LABEL_107:
      v130 = sub_224BC3C(
               v165,
               System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo,
               0);
    }
    v131 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v130)(
                                                                  v126,
                                                                  *(_QWORD *)(v130 + 8));
    v132 = System_Linq_Enumerable__ToList_object_(
             v131,
             (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    if ( !v49 )
      sub_2213CDC(v132, v133);
    v134 = (System_Collections_Generic_List_object__o *)v132;
    Item = System_Collections_Generic_List_object___get_Item(
             v49,
             v113,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    v143 = (System_Collections_Generic_List_object__o *)Item;
    if ( Item && v3->fields.chunkSize >= 1 )
    {
      if ( !v134 )
        sub_2213CDC(Item, v136);
      v144 = 0;
      do
      {
        if ( v134->fields._size <= v144 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v143,
                   v144,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          if ( Item )
            HorizontalQuestInformationIconDraw__SetItem((HorizontalQuestInformationIconDraw_o *)Item, 0, 0, this, v139);
        }
        else
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v143,
                   v144,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v145 = (HorizontalQuestInformationIconDraw_o *)Item;
          if ( Item )
          {
            v146 = System_Collections_Generic_List_object___get_Item(
                     v134,
                     v144,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
            HorizontalQuestInformationIconDraw__SetItem(v145, (QuestInformationListViewItem_o *)v146, 2, this, v147);
          }
        }
        ++v144;
      }
      while ( v144 < v3->fields.chunkSize );
    }
    if ( !v105
      || (v148 = v105->fields._items,
          v149 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__,
          ++v105->fields._version,
          !v148) )
    {
      sub_2213CDC(Item, v136);
    }
    v150 = v105->fields._size;
    if ( (unsigned int)v150 >= LODWORD(v148->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v105,
        (Il2CppObject *)v143,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
    }
    else
    {
      v151 = &v148->obj.klass + v150;
      v105->fields._size = v150 + 1;
      v151[4] = (Il2CppClass *)v143;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v151 + 4),
        (int32_t)v143,
        v137,
        v138,
        (int32_t)v139,
        v140,
        v141,
        v142);
    }
    v112 = v165;
    v49 = v161;
    ++v113;
    if ( !v165 )
      goto LABEL_126;
  }
  v152 = v165;
  if ( v165 )
  {
    v153 = *(_QWORD *)v165;
    v154 = *(unsigned __int16 *)(*(_QWORD *)v165 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v165 + 302LL) )
    {
      v155 = (int *)(*(_QWORD *)(v153 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v155 - 1) != System_IDisposable_TypeInfo )
      {
        --v154;
        v155 += 4;
        if ( !v154 )
          goto LABEL_132;
      }
      v156 = v153 + 16LL * *v155 + 312;
    }
    else
    {
LABEL_132:
      v156 = sub_224BC3C(v165, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v156)(v152, *(_QWORD *)(v156 + 8));
  }
  this->fields.iconGroupList = (struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *)v105;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconGroupList,
    (int32_t)v105,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  this->fields.isNeedInit = 1;
}


int32_t HorizontalQuestInformationIconListComponent__CreateRewardItemList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x25
  int32_t v9; // w23
  QuestInformationListViewItem_o *v10; // x22
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
  if ( (byte_596D313 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_2213A60(&QuestInformationListViewItem_TypeInfo);
    byte_596D313 = 1;
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
          sub_2213CE4(this);
        v9 = items->m_Items[v8];
        v10 = (QuestInformationListViewItem_o *)sub_2213CCC(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v10, sum + v8, 2, v9, 0);
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v19 = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !v19) )
        {
          sub_2213CDC(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(v19->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &v19->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
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
  unsigned __int64 v8; // x25
  int32_t v9; // w23
  QuestInformationListViewItem_o *v10; // x22
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
  if ( (byte_596D314 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_2213A60(&QuestInformationListViewItem_TypeInfo);
    byte_596D314 = 1;
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
          sub_2213CE4(this);
        v9 = svts->m_Items[v8];
        v10 = (QuestInformationListViewItem_o *)sub_2213CCC(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v10, sum + v8, 1, v9, 0);
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_2213CDC(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.assetStoragesLoadCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetStoragesLoadCallback, 0, v2, v3, v4, v5, v6, v7);
  this->fields.enemyAtlasLoadCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.enemyAtlasLoadCallback, 0, v9, v10, v11, v12, v13, v14);
}


void HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questInfoRoot; // x0

  questInfoRoot = this->fields.questInfoRoot;
  if ( !questInfoRoot )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(questInfoRoot, 0, 0);
}


void HorizontalQuestInformationIconListComponent__InitQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *questInfoPanel; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  float v7; // s8
  TitleInfoControl_c *v8; // x0
  System_Func_float__float__float__float__o *v9; // x21
  AlphaTransitionCalculator_o *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x8

  if ( (byte_596D30F & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__);
    sub_2213A60(&TitleInfoControl_TypeInfo);
    byte_596D30F = 1;
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
  v7 = ChangedFPSUtil__CovertFrameNumToSecond(this->fields.questInfoFadeFrameNum, 0);
  v8 = TitleInfoControl_TypeInfo;
  if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v5, v6);
    v8 = TitleInfoControl_TypeInfo;
  }
  v9 = ExtraEasing__AsymptoticSeriesFloat(
         v8->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
         (float)this->fields.questInfoFadeFrameNum,
         0);
  v10 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v10, v7, v9, 0);
  this->fields.questInfoAlphaCalculator = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questInfoAlphaCalculator,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  questInfoPanel = this->fields.questInfoAlphaCalculator;
  if ( !questInfoPanel )
LABEL_14:
    sub_2213CDC(questInfoPanel, method);
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
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  MissionNaviTransitionBoardItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v9; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *object; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  HorizontalQuestInformationIconListComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  UnityEngine_Material_o *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1

  if ( (byte_596D319 & 1) == 0 )
  {
    sub_2213A60(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_2213A60(&StringLiteral_16795/*"_ChocoTex"*/);
    sub_2213A60(&StringLiteral_13377/*"Shaders/ChocoMap"*/);
    byte_596D319 = 1;
  }
  p_mChocoMaterialSp = (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoTex;
    v9 = (UnityEngine_Object_o *)mChocoTex;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_13377/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (MissionNaviTransitionBoardItem_c *)object;
      sub_2213A04(p_mChocoTex, (int32_t)object, v14, v15, v16, v17, v18, v19);
    }
    v20 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !*(&HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo, v11, v12);
      v20 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_SP, 0);
    v22 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0);
    p_mChocoMaterialSp->klass = (MissionNaviTransitionBoardItem_c *)v22;
    sub_2213A04(p_mChocoMaterialSp, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    if ( !p_mChocoMaterialSp->klass )
      sub_2213CDC(0, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16795/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  MissionNaviTransitionBoardItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v9; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *object; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  HorizontalQuestInformationIconListComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  UnityEngine_Material_o *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1

  if ( (byte_596D318 & 1) == 0 )
  {
    sub_2213A60(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_2213A60(&StringLiteral_16795/*"_ChocoTex"*/);
    sub_2213A60(&StringLiteral_13377/*"Shaders/ChocoMap"*/);
    byte_596D318 = 1;
  }
  p_mChocoMaterialTx = (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (MissionNaviTransitionBoardItem_o *)&this->fields.mChocoTex;
    v9 = (UnityEngine_Object_o *)mChocoTex;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_13377/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (MissionNaviTransitionBoardItem_c *)object;
      sub_2213A04(p_mChocoTex, (int32_t)object, v14, v15, v16, v17, v18, v19);
    }
    v20 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !*(&HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo, v11, v12);
      v20 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_TX, 0);
    v22 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0);
    p_mChocoMaterialTx->klass = (MissionNaviTransitionBoardItem_c *)v22;
    sub_2213A04(p_mChocoMaterialTx, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    if ( !p_mChocoMaterialTx->klass )
      sub_2213CDC(0, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16795/*"_ChocoTex"*/,
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
  System_Collections_Generic_List_QuestInformationListViewItem__c *v5; // x0
  System_Collections_Generic_List_object__o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t iconType; // w8
  ViewEnemyMaster_o *Master_object; // x0
  __int64 v17; // x2
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x1
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  __int64 v22; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  HorizontalQuestInformationIconListComponent___c_c *v24; // x0
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v27; // x23
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Int32_array *v36; // x0
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x4
  Il2CppObject *v40; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596D30C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__);
    sub_2213A60(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_596D30C = 1;
  }
  v5 = System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo;
  entity = 0;
  v40 = 0;
  this->fields.isNeedInit = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v5);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_QuestInformationListViewItem__o *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  iconType = this->fields.iconType;
  if ( iconType == 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
    if ( !Master_object )
      goto LABEL_39;
    EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(Master_object, questId, 0);
    if ( EntityListFromQuestId )
    {
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
      if ( EntityListFromQuestId->max_length )
      {
        v24 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        if ( !*(&HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo, v13, v22);
          v24 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        }
        static_fields = v24->static_fields;
        _9__18_0 = (System_Func_object__int__o *)static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !*(&v24->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v24, v13, v22);
            static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
          }
          v27 = (Il2CppObject *)static_fields->__9;
          _9__18_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ViewEnemyEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__18_0,
            v27,
            Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__,
            0);
          v28 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
          v28->__9__18_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__18_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v28->__9__18_0,
            (int32_t)_9__18_0,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
        }
        v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v23,
                                                                     (System_Func_TSource__TResult__o *)_9__18_0,
                                                                     (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
        v36 = System_Linq_Enumerable__ToArray_int_(
                v35,
                (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
        HorizontalQuestInformationIconListComponent__CreateEnemyList(this, 0, questId, v36, v37);
        return 1;
      }
    }
  }
  else if ( !iconType )
  {
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13, v17);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Master_object = (ViewEnemyMaster_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13, v17);
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
          v19);
LABEL_33:
        HorizontalQuestInformationIconListComponent__CreateIconGroupList(this, v20);
        return 1;
      }
      goto LABEL_39;
    }
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &v40,
                                           questId,
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
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
      sub_2213CDC(Master_object, v13);
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
  const MethodInfo_4467270 *v33; // x2
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

  if ( (byte_596D312 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D312 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_2213CE4(Instance);
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
          v33 = *(const MethodInfo_4467270 **)(*(_QWORD *)(v31 + 192) + 112LL);
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
          v33 = *(const MethodInfo_4467270 **)(*(_QWORD *)(v34 + 192) + 112LL);
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
                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v35,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)withoutQP, (int32_t)v35, v36, v37, v38, v39, v40, v41),
        !v9) )
  {
LABEL_43:
    sub_2213CDC(Instance, v11);
  }
  v42 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v42;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)qps, (int32_t)v42, v43, v44, v45, v46, v47, v48);
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
  const MethodInfo_4467270 *v33; // x2
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

  if ( (byte_596D311 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D311 = 1;
  }
  entity = 0;
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_2213CE4(Instance);
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
          v33 = *(const MethodInfo_4467270 **)(*(_QWORD *)(v31 + 192) + 112LL);
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
                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
          v33 = *(const MethodInfo_4467270 **)(*(_QWORD *)(v34 + 192) + 112LL);
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
                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v35,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)withoutCM, (int32_t)v35, v36, v37, v38, v39, v40, v41),
        !v9) )
  {
LABEL_45:
    sub_2213CDC(Instance, v11);
  }
  v42 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v42;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)combineMaterials, (int32_t)v42, v43, v44, v45, v46, v47, v48);
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
  const MethodInfo *v6; // x1
  float mstQuestInfoIconUpdateTimer; // s8
  float v8; // s0
  float questInfoChangeInterval; // s1
  int32_t currentInformationIndex; // w20
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *v11; // x8
  struct AlphaTransitionCalculator_o *v12; // x8

  if ( (byte_596D310 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____);
    sub_2213A60(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    sub_2213A60(&Method_TransitionCalculator_float__get_Current__);
    byte_596D310 = 1;
  }
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)iconGroupList,
           (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____) >= 2 )
    {
      questInfoAlphaCalculator = (TransitionCalculator_float__o *)this->fields.questInfoAlphaCalculator;
      if ( questInfoAlphaCalculator )
      {
        TransitionCalculator_float___Update(
          questInfoAlphaCalculator,
          (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_20;
        if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) )
        {
          mstQuestInfoIconUpdateTimer = this->fields.mstQuestInfoIconUpdateTimer;
          v8 = mstQuestInfoIconUpdateTimer + UnityEngine_Time__get_deltaTime(0);
          questInfoChangeInterval = this->fields.questInfoChangeInterval;
          this->fields.mstQuestInfoIconUpdateTimer = v8;
          if ( v8 >= questInfoChangeInterval )
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
            v11 = this->fields.iconGroupList;
            if ( !v11 )
              goto LABEL_20;
            this->fields.currentInformationIndex = (currentInformationIndex + 1) % v11->fields._size;
            HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v6);
          }
          v12 = this->fields.questInfoAlphaCalculator;
          if ( v12 )
          {
            Instance = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
            if ( Instance )
            {
              ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.element_class)(
                Instance,
                Instance->klass[1]._1.castClass,
                v12->fields._Current_k__BackingField);
              return;
            }
          }
        }
LABEL_20:
        sub_2213CDC(Instance, v6);
      }
    }
  }
}


void HorizontalQuestInformationIconListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D373 & 1) == 0 )
  {
    sub_2213A60(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_596D373 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(HorizontalQuestInformationIconListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields->__9 = (struct HorizontalQuestInformationIconListComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_596D374 & 1) == 0 )
  {
    sub_2213A60(&Method___f__AnonymousType7_QuestInformationListViewItem__int___ctor__);
    sub_2213A60(&_f__AnonymousType7_QuestInformationListViewItem__int__TypeInfo);
    byte_596D374 = 1;
  }
  v6 = (__f__AnonymousType7__v_j__TPar___i_j__TPar__o *)sub_2213CCC(_f__AnonymousType7_QuestInformationListViewItem__int__TypeInfo);
  _f__AnonymousType7_object__int____ctor(
    v6,
    (Il2CppObject *)v,
    i,
    (const MethodInfo_3B14368 *)Method___f__AnonymousType7_QuestInformationListViewItem__int___ctor__);
  return (__f__AnonymousType7_QuestInformationListViewItem__int__o *)v6;
}


System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_2(
        HorizontalQuestInformationIconListComponent___c_o *this,
        System_Linq_IGrouping_int____f__AnonymousType7_QuestInformationListViewItem__int___o *g,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c_c *v4; // x0
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__19_3; // x20
  Il2CppObject *v7; // x21
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596D375 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem___);
    sub_2213A60(&System_Func___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    sub_2213A60(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__);
    sub_2213A60(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_596D375 = 1;
  }
  v4 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !*(&HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo, g, method);
    v4 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__19_3 = (System_Func_object__object__o *)static_fields->__9__19_3;
  if ( !_9__19_3 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, g, method);
      static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__19_3 = (System_Func_object__object__o *)sub_2213CCC(System_Func___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__19_3,
      v7,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__,
      0);
    v8 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v8->__9__19_3 = (struct System_Func___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem__o *)_9__19_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__19_3, (int32_t)_9__19_3, v9, v10, v11, v12, v13, v14);
  }
  return (System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                                     (System_Func_TSource__TResult__o *)_9__19_3,
                                                                                     (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select___f__AnonymousType7_QuestInformationListViewItem__int___QuestInformationListViewItem___);
}


QuestInformationListViewItem_o *HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_3(
        HorizontalQuestInformationIconListComponent___c_o *this,
        __f__AnonymousType7_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_596D376 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c_o *)sub_2213A60(&Method___f__AnonymousType7_QuestInformationListViewItem__int__get_v__);
    byte_596D376 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  return x->fields._v_i__Field;
}


int32_t HorizontalQuestInformationIconListComponent___c___Setup_b__18_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_2213CDC(this, 0);
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
  if ( (byte_596D377 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_2213A60(&Method___f__AnonymousType7_QuestInformationListViewItem__int__get_i__);
    byte_596D377 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, x);
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
  __int64 v2; // x2
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *v3; // x19
  UnityEngine_Object_o *_4__this; // x20

  v3 = this;
  if ( (byte_596D378 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D378 = 1;
  }
  _4__this = (UnityEngine_Object_o *)v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  if ( _4__this[5].monitor && _4__this[5].fields.m_CachedPtr )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( !UnityEngine_Object__op_Equality(_4__this, 0, 0) )
    {
      this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v3->fields.__4__this;
      if ( this )
      {
        HorizontalQuestInformationIconListComponent__CreateEnemyList_43285188(
          (HorizontalQuestInformationIconListComponent_o *)this,
          v3->fields.questId,
          v3->fields.enemies,
          v3->fields.veEnts,
          0);
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v3->fields.__4__this;
        if ( this )
        {
          HorizontalQuestInformationIconListComponent__CreateIconGroupList(
            (HorizontalQuestInformationIconListComponent_o *)this,
            0);
          return;
        }
      }
LABEL_13:
      sub_2213CDC(this, method);
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
  __int64 v7; // x1
  __int64 v8; // x2

  v2 = this;
  if ( (byte_596D379 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call__);
    sub_2213A60(&System_Action_TypeInfo);
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_2213A60(&AssetManager_TypeInfo);
    byte_596D379 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  assetStoragesLoadCallback = (Il2CppObject *)_4__this->fields.assetStoragesLoadCallback;
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, assetStoragesLoadCallback, Method_ActionExtensions_Call__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__loadAssetStorage_47503780(loadedAssets, v6, 1, 0);
}


void HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__2(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  ActionExtensions__Call(_4__this->fields.enemyAtlasLoadCallback, 0);
}