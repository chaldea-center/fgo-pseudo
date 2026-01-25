void HorizontalQuestInformationIconListComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct HorizontalQuestInformationIconListComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEB2FA & 1) == 0 )
  {
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15192/*"Unlit/Transparent Colored_Choco"*/);
    sub_1C7BAE8(&StringLiteral_4945/*"Custom/SpriteWithMask_Choco"*/);
    byte_4CEB2FA = 1;
  }
  HorizontalQuestInformationIconListComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15192/*"Unlit/Transparent Colored_Choco"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)HorizontalQuestInformationIconListComponent_TypeInfo->static_fields,
    StringLiteral_15192/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_4945/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = HorizontalQuestInformationIconListComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4945/*"Custom/SpriteWithMask_Choco"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->CHOCO_SHADER_SP, v7, v9, v10, v11, v12, v13, v14);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_object__o **v12; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Action_object__o *v15; // x22
  Il2CppObject *current; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEB2EE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
    sub_1C7BAE8(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__);
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
    byte_4CEB2EE = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = sub_1C7BD34(HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3
    || (*(_QWORD *)(v3 + 24) = this,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11),
        *(_DWORD *)(v3 + 16) = 0,
        (iconGroupList = (System_Collections_Generic_List_object__o *)this->fields.iconGroupList) == 0) )
  {
    sub_1C7BD40(iconGroupList, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    iconGroupList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
  v12 = (System_Action_object__o **)(v3 + 32);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    if ( !v13 )
      break;
    v15 = *v12;
    current = v23.fields._current;
    if ( !*v12 )
    {
      v15 = (System_Action_object__o *)sub_1C7BD34(System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
      System_Action_object____ctor(
        v15,
        (Il2CppObject *)v3,
        Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
        0);
      *v12 = v15;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v15, v17, v18, v19, v20, v21, v22);
    }
    if ( !current )
      sub_1C7BD40(v13, v14);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)current,
      (System_Action_T__o *)v15,
      (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    ++*(_DWORD *)(v3 + 16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  __int64 v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x8

  if ( (byte_4CEB2F5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    sub_1C7BAE8(&QuestInformationListViewItem_TypeInfo);
    byte_4CEB2F5 = 1;
  }
  if ( !kind )
  {
    if ( itemCnt >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = sub_1C7BD34(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_44325320((ListViewItem_o *)v10, v9, 0);
        *(_DWORD *)(v10 + 132) = 0;
        *(_QWORD *)(v10 + 120) = 0;
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 4), v10, v12, v13, v14, v15, v16, v17);
        }
        if ( itemCnt == ++v9 )
          goto LABEL_14;
      }
LABEL_22:
      sub_1C7BD40(itemList, v11);
    }
    itemCnt = 0;
LABEL_14:
    if ( svtCnt >= 1 )
    {
      while ( 1 )
      {
        v23 = sub_1C7BD34(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_44325320((ListViewItem_o *)v23, itemCnt, 0);
        *(_DWORD *)(v23 + 132) = 0;
        *(_QWORD *)(v23 + 120) = 0;
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &v30->obj.klass + v32;
          itemList->fields._size = v32 + 1;
          v33[4] = (Il2CppClass *)v23;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 4), v23, v24, v25, v26, v27, v28, v29);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppObject *Master_object; // x22
  Il2CppObject *v26; // x24
  __int64 *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  bool HasFlag; // w28
  Il2CppObject *v35; // x27
  __int64 v36; // x8
  __int64 v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x8
  __int64 v50; // x29
  __int64 v51; // x23
  __int64 v52; // x26
  unsigned __int64 v53; // x9
  unsigned __int64 v54; // x19
  int32_t v55; // w3
  __int64 v56; // x8
  ViewEnemyEntity_o *v57; // x27
  unsigned int *v58; // x8
  GrandQuestFolderBoardItem_o *v59; // x0
  System_String_o *v60; // x0
  Il2CppObject *v61; // x27
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  ViewEnemyEntity_o *v72; // x28
  unsigned int *v73; // x28
  System_Object_array *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  System_Action_o *v81; // x21
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  System_Action_o *v88; // x21
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  System_Action_o *v95; // x19
  __int64 v96; // x0
  HorizontalQuestInformationIconListComponent_o *v97; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v98; // [xsp+8h] [xbp-88h]
  bool v99; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v101; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v102; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CEB2F6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__);
    sub_1C7BAE8(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__);
    sub_1C7BAE8(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__);
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
    sub_1C7BAE8(&ViewEnemyEntity___TypeInfo);
    sub_1C7BAE8(&ViewEnemyEntity_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12814/*"Servants/Commands/"*/);
    byte_4CEB2F6 = 1;
  }
  v101 = 0;
  v102 = 0;
  entity = 0;
  v9 = sub_1C7BD34(HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_67;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = enemies;
  v18 = (__int64 *)(v9 + 32);
  *(_DWORD *)(v9 + 24) = questId;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)enemies, v19, v20, v21, v22, v23, v24);
  if ( kind )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v26 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  v98 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v98,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 40) = 0;
  v27 = (__int64 *)(v9 + 40);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 40), 0, v28, v29, v30, v31, v32, v33);
  QuestEntity = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_67;
  QuestEntity = (QuestMaster_o *)QuestMaster__getQuestEntity(QuestEntity, *(_DWORD *)(v9 + 24), 0);
  if ( !QuestEntity )
    goto LABEL_67;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v35 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  v97 = this;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v35 )
    goto LABEL_67;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v35,
    &entity,
    (int64_t)QuestEntity[2].fields.list[1].monitor,
    *(_DWORD *)(v9 + 24),
    0);
  v36 = *(_QWORD *)(v9 + 32);
  if ( v36 )
  {
    v37 = sub_1C7BB90(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v36 + 24));
    *v27 = v37;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 40), v37, v38, v39, v40, v41, v42, v43);
    v49 = *v18;
    if ( !*v18 )
      goto LABEL_67;
    v50 = 0;
    v51 = 8;
    v52 = 8;
    v99 = HasFlag;
    while ( 1 )
    {
      v53 = *(unsigned int *)(v49 + 24);
      v54 = v51 - 8;
      if ( v51 - 8 >= (int)v53 )
        break;
      if ( v54 >= v53 )
        goto LABEL_68;
      v55 = *(_DWORD *)(v49 + 4 * v51);
      if ( v55 < 1 )
        goto LABEL_43;
      if ( !Master_object )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)ViewEnemyMaster__TryGetEntity(
                                       (ViewEnemyMaster_o *)Master_object,
                                       &v101,
                                       *(_DWORD *)(v9 + 24),
                                       v55,
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
        if ( !v101 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)System_Linq_Enumerable__Contains_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                                         v101->fields.enemyId,
                                         (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
LABEL_32:
          v56 = *v18;
          if ( !*v18 )
            goto LABEL_67;
          if ( v54 >= *(unsigned int *)(v56 + 24) )
            goto LABEL_68;
          *(_DWORD *)(v56 + 4 * v51) = 0;
        }
      }
      if ( !v101 || !v26 )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v26,
                                       &v102,
                                       v101->fields.svtId,
                                       (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestEntity & 1) != 0 )
      {
        QuestEntity = (QuestMaster_o *)v102;
        if ( !v102 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)v102, 0);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          goto LABEL_42;
        QuestEntity = (QuestMaster_o *)v101;
        if ( !v101 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ViewEnemyEntity__IsIconIdUnique(v101, 0);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
          if ( !v101 )
            goto LABEL_67;
          v60 = System_Int32__ToString((int)v101 + 36, 0);
          v61 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_12814/*"Servants/Commands/"*/, v60, 0);
          QuestEntity = (QuestMaster_o *)v98;
          if ( !v98 )
            goto LABEL_67;
          QuestEntity = (QuestMaster_o *)System_Collections_Generic_List_object___Contains(
                                           v98,
                                           v61,
                                           (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          {
            items = v98->fields._items;
            v69 = Method_System_Collections_Generic_List_string__Add__;
            ++v98->fields._version;
            if ( !items )
              goto LABEL_67;
            size = v98->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v98,
                v61,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
            }
            else
            {
              v71 = &items->obj.klass + size;
              v98->fields._size = size + 1;
              v71[4] = (Il2CppClass *)v61;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v71 + 4), (int32_t)v61, v62, v63, v64, v65, v66, v67);
            }
          }
          v72 = v101;
          v57 = (ViewEnemyEntity_o *)sub_1C7BD34(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_43792148(v57, v72, 0);
          v101 = v57;
          if ( !v57 )
            goto LABEL_67;
          v57->fields.iconId = 0;
        }
        else
        {
LABEL_42:
          v57 = v101;
        }
        v73 = (unsigned int *)*v27;
        if ( !*v27 )
          goto LABEL_67;
        if ( v57 )
        {
          QuestEntity = (QuestMaster_o *)sub_1C7BC24(v57, *(_QWORD *)(*(_QWORD *)v73 + 64LL));
          if ( !QuestEntity )
          {
            v96 = sub_1C7BD64();
            sub_1C7BC10(v96, 0);
          }
        }
        if ( v54 >= v73[6] )
LABEL_68:
          sub_1C7BD48(QuestEntity);
        v59 = (GrandQuestFolderBoardItem_o *)&v73[v52];
        HasFlag = v99;
        v59->klass = (GrandQuestFolderBoardItem_c *)v57;
      }
      else
      {
LABEL_43:
        v58 = (unsigned int *)*v27;
        if ( !*v27 )
          goto LABEL_67;
        if ( v54 >= v58[6] )
          goto LABEL_68;
        LODWORD(v57) = 0;
        v59 = (GrandQuestFolderBoardItem_o *)&v58[2 * v50 + 8];
        *(_QWORD *)&v58[v52] = 0;
      }
      sub_1C7BA8C(v59, (int32_t)v57, v44, v55, v45, v46, v47, v48);
      v49 = *v18;
      ++v50;
      ++v51;
      v52 += 2;
      if ( !*v18 )
        goto LABEL_67;
    }
  }
  QuestEntity = (QuestMaster_o *)v98;
  if ( !v98 )
LABEL_67:
    sub_1C7BD40(QuestEntity, v11);
  v74 = System_Collections_Generic_List_object___ToArray(
          v98,
          (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
  v97->fields.loadedAssets = (struct System_String_array *)v74;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v97->fields.loadedAssets, (int32_t)v74, v75, v76, v77, v78, v79, v80);
  v97->fields.loading = 1;
  v81 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v81,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__,
    0);
  v97->fields.assetStoragesLoadCallback = v81;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v97->fields.assetStoragesLoadCallback,
    (int32_t)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v88 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v88,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__,
    0);
  v97->fields.enemyAtlasLoadCallback = v88;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v97->fields.enemyAtlasLoadCallback,
    (int32_t)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  v95 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v95,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v95, 0);
}


// local variable allocation has failed, the output may be wrong!
void HorizontalQuestInformationIconListComponent__CreateEnemyList_36979304(
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v27; // x8

  v7 = this;
  if ( (byte_4CEB2F7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1C7BAE8(&QuestInformationListViewItem_TypeInfo);
    byte_4CEB2F7 = 1;
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
            sub_1C7BD48(this);
          v11 = veEnts->m_Items[v9];
          if ( enemies->m_Items[v9] <= 0 )
            break;
          if ( v11 )
          {
            v12 = (QuestInformationListViewItem_o *)sub_1C7BD34(QuestInformationListViewItem_TypeInfo);
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
        v12 = (QuestInformationListViewItem_o *)sub_1C7BD34(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v12;
        v17 = 1;
        v15 = v10;
        v16 = v11;
LABEL_14:
        QuestInformationListViewItem___ctor_36979704(v12, v15, v16, v17, v13);
        this = (HorizontalQuestInformationIconListComponent_o *)v7->fields.itemList;
        if ( !this
          || (m_CachedPtr = this->fields.m_CachedPtr,
              v25 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !m_CachedPtr) )
        {
LABEL_22:
          sub_1C7BD40(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v14,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v27 + 32) = v14;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 32), (int32_t)v14, v18, v19, v20, v21, v22, v23);
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
  __int64 v4; // x1
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *itemList; // x8
  UILabel_o *infoLabel; // x20
  int32_t iconType; // w19
  System_String_o **v8; // x8
  __int64 gameObject; // x0
  bool v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *v17; // x22
  HorizontalQuestInformationIconListComponent___c_c *v18; // x0
  System_Func_T1__T2__TResult__o *_9__19_0; // x23
  Il2CppObject *v20; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_object__int__o *v29; // x22
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v30; // x0
  HorizontalQuestInformationIconListComponent___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x22
  System_Func_object__object__o *_9__19_2; // x23
  Il2CppObject *v34; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x26
  System_Collections_Generic_List_object__o *v43; // x20
  UnityEngine_GameObject_o *iconGrid; // x27
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int v51; // w29
  char v52; // w8
  System_Collections_Generic_List_object__o *iconDrawList; // x25
  UnityEngine_Transform_o *parent; // x20
  __int64 v55; // x1
  System_Collections_IEnumerator_o *Enumerator; // x26
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v58; // x9
  int32_t *p_offset; // x10
  __int64 v60; // x0
  System_Collections_IEnumerator_c *v61; // x8
  __int64 v62; // x9
  System_Collections_IEnumerator_c **v63; // x10
  __int64 v64; // x0
  UnityEngine_Component_o *v65; // x0
  __int64 v66; // x1
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v68; // x0
  __int64 v69; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  Il2CppObject *v77; // x1
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  __int64 v82; // x8
  __int64 v83; // x26
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  System_Collections_Generic_List_object__o *v91; // x19
  System_Collections_Generic_IEnumerable_TSource__c *v92; // x8
  __int64 v93; // x9
  int32_t *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x1
  int32_t v97; // w26
  Il2CppObject *v98; // x23
  HorizontalQuestInformationIconDraw_o *v99; // x25
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x0
  System_Collections_Generic_List_TSource__o *v109; // x0
  __int64 v110; // x1
  System_Collections_Generic_List_object__o *v111; // x27
  int32_t v112; // w24
  Il2CppObject *Item; // x0
  __int64 v114; // x1
  int32_t v115; // w2
  int32_t v116; // w3
  MethodInfo *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  System_Collections_Generic_List_object__o *v121; // x26
  int32_t v122; // w28
  Il2CppObject *v123; // x29
  HorizontalQuestInformationIconDraw_o *v124; // x20
  Il2CppObject *v125; // x0
  const MethodInfo *v126; // x4
  Il2CppObject *v127; // x29
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  __int64 v132; // x8
  __int64 v133; // x9
  int *v134; // x10
  __int64 v135; // x20
  __int64 v136; // x0
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  __int64 v143; // x0
  __int64 v144; // x20
  __int64 v145; // x8
  __int64 v146; // x9
  int *v147; // x10
  __int64 v148; // x0
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o **p_iconGroupList; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_object__o *v150; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v151; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_IEnumerable_TSource__o *v152; // [xsp+20h] [xbp-70h]
  __int64 v153; // [xsp+20h] [xbp-70h]
  HorizontalQuestInformationIconListComponent_o *iconListComponent; // [xsp+28h] [xbp-68h]

  if ( (byte_4CEB2ED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_GroupBy___f__AnonymousType6_QuestInformationListViewItem__int___int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType6_QuestInformationListViewItem__int____);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    sub_1C7BAE8(&System_Func___f__AnonymousType6_QuestInformationListViewItem__int___int__TypeInfo);
    sub_1C7BAE8(&System_Func_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_1C7BAE8(&System_Func_QuestInformationListViewItem__int____f__AnonymousType6_QuestInformationListViewItem__int___TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Transform_TypeInfo);
    sub_1C7BAE8(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__);
    sub_1C7BAE8(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__);
    sub_1C7BAE8(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__);
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8707/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/);
    sub_1C7BAE8(&StringLiteral_8708/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/);
    byte_4CEB2ED = 1;
  }
  v3 = sub_1C7BD34(HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size >= 1 )
  {
    infoLabel = this->fields.infoLabel;
    iconType = this->fields.iconType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = (System_String_o **)&StringLiteral_8708/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/;
    if ( iconType )
      v8 = (System_String_o **)&StringLiteral_8707/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/;
    gameObject = (__int64)LocalizationManager__Get(*v8, 0);
    if ( !infoLabel )
      goto LABEL_139;
    UILabel__set_text(infoLabel, (System_String_o *)gameObject, 0);
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_139;
    v10 = 1;
  }
  else
  {
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_139;
    v10 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0);
  this->fields.iconGroupList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.iconGroupList, 0, v11, v12, v13, v14, v15, v16);
  if ( !v3 )
    goto LABEL_139;
  p_iconGroupList = &this->fields.iconGroupList;
  *(_DWORD *)(v3 + 16) = this->fields.displayLimitNum;
  v17 = this->fields.itemList;
  v18 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v18 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T1__T2__TResult__o *)v18->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__19_0 = (System_Func_T1__T2__TResult__o *)sub_1C7BD34(System_Func_QuestInformationListViewItem__int____f__AnonymousType6_QuestInformationListViewItem__int___TypeInfo);
    System_Func_object__int__object____ctor(
      _9__19_0,
      v20,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__,
      0);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_QuestInformationListViewItem__int____f__AnonymousType6_QuestInformationListViewItem__int___o *)_9__19_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0,
      (int32_t)_9__19_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__52060724(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                               (System_Func_TSource__int__TResult__o *)_9__19_0,
                                                               (const MethodInfo_31A6234 *)Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType6_QuestInformationListViewItem__int____);
  v29 = (System_Func_object__int__o *)sub_1C7BD34(System_Func___f__AnonymousType6_QuestInformationListViewItem__int___int__TypeInfo);
  System_Func_object__int____ctor(
    v29,
    (Il2CppObject *)v3,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
    0);
  v30 = System_Linq_Enumerable__GroupBy_object__int_(
          v28,
          (System_Func_TSource__TKey__o *)v29,
          (const MethodInfo_31996D4 *)Method_System_Linq_Enumerable_GroupBy___f__AnonymousType6_QuestInformationListViewItem__int___int___);
  v31 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v31 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_2 = (System_Func_object__object__o *)v31->static_fields->__9__19_2;
  if ( !_9__19_2 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__19_2 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    System_Func_object__object____ctor(
      _9__19_2,
      v34,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__,
      0);
    v35 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v35->__9__19_2 = (struct System_Func_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___o *)_9__19_2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v35->__9__19_2, (int32_t)_9__19_2, v36, v37, v38, v39, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v32,
                                                               (System_Func_TSource__TResult__o *)_9__19_2,
                                                               (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
  v43 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  iconGrid = this->fields.iconGrid;
  iconListComponent = this;
  if ( !iconGrid )
    goto LABEL_139;
  UnityEngine_GameObject__SetActive(iconGrid, 1, 0);
  gameObject = System_Linq_Enumerable__Count_object_(
                 v42,
                 (const MethodInfo_318FACC *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
  v151 = v43;
  if ( (int)gameObject >= 1 )
  {
    v51 = 0;
    v52 = 1;
    v150 = (System_Collections_Generic_List_object__o *)iconGrid;
    v152 = v42;
    do
    {
      if ( (v52 & 1) != 0 )
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)this->fields.iconDrawList;
      }
      else
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          iconDrawList,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
        gameObject = (__int64)UnityEngine_GameObject__get_transform(iconGrid, 0);
        if ( !gameObject )
          goto LABEL_139;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (__int64)UnityEngine_Object__Instantiate_object__52412380(
                                (Il2CppObject *)iconGrid,
                                parent,
                                (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
        if ( !gameObject )
          goto LABEL_139;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_139;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)gameObject, 0);
        if ( !Enumerator )
          sub_1C7BD40(0, v55);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v58 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v58;
              p_offset += 4;
              if ( !v58 )
                goto LABEL_44;
            }
            v60 = (__int64)&klass->vtable[*p_offset];
          }
          else
          {
LABEL_44:
            v60 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v60)(
                  Enumerator,
                  *(_QWORD *)(v60 + 8))
              & 1) == 0 )
            break;
          v61 = Enumerator->klass;
          v62 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            v63 = (System_Collections_IEnumerator_c **)&v61->_1.interfaceOffsets->offset;
            while ( *(v63 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v62;
              v63 += 2;
              if ( !v62 )
                goto LABEL_51;
            }
            v64 = (__int64)&v61->vtable[*(_DWORD *)v63 + 1];
          }
          else
          {
LABEL_51:
            v64 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v65 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v64)(
                                             Enumerator,
                                             *(_QWORD *)(v64 + 8));
          if ( !v65 )
            sub_1C7BD40(0, v66);
          naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
          if ( v65->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (UnityEngine_Transform_c *)v65->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
          {
            sub_1C7C0DC(v65);
            v143 = sub_1C7BC24(Enumerator, System_IDisposable_TypeInfo);
            v144 = v143;
            if ( v143 )
            {
              v145 = *(_QWORD *)v143;
              v146 = *(unsigned __int16 *)(*(_QWORD *)v143 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v143 + 302LL) )
              {
                v147 = (int *)(*(_QWORD *)(v145 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v147 - 1) != System_IDisposable_TypeInfo )
                {
                  --v146;
                  v147 += 4;
                  if ( !v146 )
                    goto LABEL_150;
                }
                v148 = v145 + 16LL * *v147 + 312;
              }
              else
              {
LABEL_150:
                v148 = sub_1C51E70(v143, System_IDisposable_TypeInfo, 0);
              }
              (*(void (__fastcall **)(__int64, _QWORD))v148)(v144, *(_QWORD *)(v148 + 8));
            }
            sub_1C7BD38(iconGrid);
          }
          v68 = UnityEngine_Component__get_gameObject(v65, 0);
          if ( !v68 )
            sub_1C7BD40(0, v69);
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         v68,
                                         (const MethodInfo_31C732C *)Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
          v77 = ComponentInChildren_object;
          if ( !iconDrawList )
            sub_1C7BD40(ComponentInChildren_object, ComponentInChildren_object);
          items = iconDrawList->fields._items;
          v79 = Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__;
          ++iconDrawList->fields._version;
          if ( !items )
            sub_1C7BD40(ComponentInChildren_object, ComponentInChildren_object);
          size = iconDrawList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              iconDrawList,
              ComponentInChildren_object,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
          }
          else
          {
            v81 = &items->obj.klass + size;
            iconDrawList->fields._size = size + 1;
            v81[4] = (Il2CppClass *)v77;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v81 + 4), (int32_t)v77, v71, v72, v73, v74, v75, v76);
          }
        }
        gameObject = sub_1C7BC24(Enumerator, System_IDisposable_TypeInfo);
        if ( gameObject )
        {
          v82 = *(_QWORD *)gameObject;
          v83 = gameObject;
          v84 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
          if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
          {
            v85 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
            {
              --v84;
              v85 += 4;
              if ( !v84 )
                goto LABEL_67;
            }
            v86 = v82 + 16LL * *v85 + 312;
          }
          else
          {
LABEL_67:
            v86 = sub_1C51E70(gameObject, System_IDisposable_TypeInfo, 0);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v83, *(_QWORD *)(v86 + 8));
        }
        v43 = v151;
        v42 = v152;
        iconGrid = (UnityEngine_GameObject_o *)v150;
      }
      if ( !v43 )
        goto LABEL_139;
      v87 = v43->fields._items;
      v88 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
      ++v43->fields._version;
      if ( !v87 )
        goto LABEL_139;
      v89 = v43->fields._size;
      if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          (Il2CppObject *)iconDrawList,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = &v87->obj.klass + v89;
        v43->fields._size = v89 + 1;
        v90[4] = (Il2CppClass *)iconDrawList;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v90 + 4), (int32_t)iconDrawList, v45, v46, v47, v48, v49, v50);
      }
      ++v51;
      gameObject = System_Linq_Enumerable__Count_object_(
                     v42,
                     (const MethodInfo_318FACC *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
      v52 = 0;
    }
    while ( v51 < (int)gameObject );
  }
  v91 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  if ( !v42 )
LABEL_139:
    sub_1C7BD40(gameObject, v4);
  v92 = v42->klass;
  v93 = *(unsigned __int16 *)&v42->klass->_2.rank;
  if ( *(_WORD *)&v42->klass->_2.rank )
  {
    v94 = &v92->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___c **)v94 - 1) != System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_89;
    }
    v95 = (__int64)&v92->vtable[*v94];
  }
  else
  {
LABEL_89:
    v95 = sub_1C51E70(
            v42,
            System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo,
            0);
  }
  v153 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v95)(
           v42,
           *(_QWORD *)(v95 + 8));
  if ( !v153 )
    sub_1C7BD40(0, v96);
  v97 = 0;
  v98 = 0;
  v99 = 0;
  while ( 1 )
  {
    v100 = *(_QWORD *)v153;
    v101 = *(unsigned __int16 *)(*(_QWORD *)v153 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v153 + 302LL) )
    {
      v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v102 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_97;
      }
      v103 = v100 + 16LL * *v102 + 312;
    }
    else
    {
LABEL_97:
      v103 = sub_1C51E70(v153, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v153, *(_QWORD *)(v103 + 8)) & 1) == 0 )
      break;
    v104 = *(_QWORD *)v153;
    v105 = *(unsigned __int16 *)(*(_QWORD *)v153 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v153 + 302LL) )
    {
      v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___c **)v106 - 1) != System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo )
      {
        --v105;
        v106 += 4;
        if ( !v105 )
          goto LABEL_104;
      }
      v107 = v104 + 16LL * *v106 + 312;
    }
    else
    {
LABEL_104:
      v107 = sub_1C51E70(
               v153,
               System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo,
               0);
    }
    v108 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v107)(
                                                                  v153,
                                                                  *(_QWORD *)(v107 + 8));
    v109 = System_Linq_Enumerable__ToList_object_(
             v108,
             (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    if ( !v43 )
      sub_1C7BD40(v109, v110);
    v111 = (System_Collections_Generic_List_object__o *)v109;
    v112 = v97;
    Item = System_Collections_Generic_List_object___get_Item(
             v43,
             v97,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    v121 = (System_Collections_Generic_List_object__o *)Item;
    if ( Item && *(int *)(v3 + 16) >= 1 )
    {
      if ( !v111 )
        sub_1C7BD40(Item, v114);
      v122 = 0;
      do
      {
        if ( v111->fields._size <= v122 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v121,
                   v122,
                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v127 = Item;
          if ( !Item )
            Item = v98;
          if ( v127 )
          {
            if ( !Item )
              sub_1C7BD40(0, v114);
            HorizontalQuestInformationIconDraw__SetItem(
              (HorizontalQuestInformationIconDraw_o *)Item,
              0,
              0,
              iconListComponent,
              v117);
            v98 = v127;
          }
        }
        else
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v121,
                   v122,
                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v123 = Item;
          if ( Item )
            v124 = (HorizontalQuestInformationIconDraw_o *)Item;
          else
            v124 = v99;
          if ( Item )
          {
            v125 = System_Collections_Generic_List_object___get_Item(
                     v111,
                     v122,
                     (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
            if ( !v124 )
              sub_1C7BD40(v125, v125);
            HorizontalQuestInformationIconDraw__SetItem(
              v124,
              (QuestInformationListViewItem_o *)v125,
              2,
              iconListComponent,
              v126);
            v99 = (HorizontalQuestInformationIconDraw_o *)v123;
          }
        }
        ++v122;
      }
      while ( v122 < *(_DWORD *)(v3 + 16) );
    }
    if ( !v91 )
      sub_1C7BD40(Item, v114);
    v128 = v91->fields._items;
    v129 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
    ++v91->fields._version;
    if ( !v128 )
      sub_1C7BD40(Item, v114);
    v130 = v91->fields._size;
    if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v91,
        (Il2CppObject *)v121,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
    }
    else
    {
      v131 = &v128->obj.klass + v130;
      v91->fields._size = v130 + 1;
      v131[4] = (Il2CppClass *)v121;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)(v131 + 4),
        (int32_t)v121,
        v115,
        v116,
        (System_String_o *)v117,
        v118,
        v119,
        v120);
    }
    v43 = v151;
    v97 = v112 + 1;
  }
  v132 = *(_QWORD *)v153;
  v133 = *(unsigned __int16 *)(*(_QWORD *)v153 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v153 + 302LL) )
  {
    v134 = (int *)(*(_QWORD *)(v132 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v134 - 1) != System_IDisposable_TypeInfo )
    {
      --v133;
      v134 += 4;
      if ( !v133 )
        goto LABEL_134;
    }
    v135 = v153;
    v136 = v132 + 16LL * *v134 + 312;
  }
  else
  {
LABEL_134:
    v135 = v153;
    v136 = sub_1C51E70(v153, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v136)(v135, *(_QWORD *)(v136 + 8));
  iconListComponent->fields.iconGroupList = (struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *)v91;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_iconGroupList, (int32_t)v91, v137, v138, v139, v140, v141, v142);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  v6 = this;
  if ( (byte_4CEB2F3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1C7BAE8(&QuestInformationListViewItem_TypeInfo);
    byte_4CEB2F3 = 1;
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
          sub_1C7BD48(this);
        v9 = items->m_Items[v8];
        v10 = sub_1C7BD34(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_44325320((ListViewItem_o *)v10, sum + v8, 0);
        *(_QWORD *)(v10 + 120) = 0x200000000LL;
        *(_DWORD *)(v10 + 132) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 124) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v19 = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !v19) )
        {
          sub_1C7BD40(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(v19->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &v19->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 4), v10, v12, v13, v14, v15, v16, v17);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  v6 = this;
  if ( (byte_4CEB2F4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1C7BAE8(&QuestInformationListViewItem_TypeInfo);
    byte_4CEB2F4 = 1;
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
          sub_1C7BD48(this);
        v9 = svts->m_Items[v8];
        v10 = sub_1C7BD34(QuestInformationListViewItem_TypeInfo);
        ListViewItem___ctor_44325320((ListViewItem_o *)v10, sum + v8, 0);
        *(_QWORD *)(v10 + 120) = 0x100000000LL;
        *(_DWORD *)(v10 + 132) = v9;
        if ( !v9 )
          *(_DWORD *)(v10 + 124) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v20 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1C7BD40(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v10;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 4), v10, v12, v13, v14, v15, v16, v17);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields.assetStoragesLoadCallback = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetStoragesLoadCallback, 0, v2, v3, v4, v5, v6, v7);
  this->fields.enemyAtlasLoadCallback = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.enemyAtlasLoadCallback, 0, v9, v10, v11, v12, v13, v14);
}


void HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questInfoRoot; // x0

  questInfoRoot = this->fields.questInfoRoot;
  if ( !questInfoRoot )
    sub_1C7BD40(0, method);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x8

  if ( (byte_4CEB2EF & 1) == 0 )
  {
    sub_1C7BAE8(&AlphaTransitionCalculator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__);
    sub_1C7BAE8(&TitleInfoControl_TypeInfo);
    byte_4CEB2EF = 1;
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
  v8 = (AlphaTransitionCalculator_o *)sub_1C7BD34(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v8, v5, v7, 0);
  this->fields.questInfoAlphaCalculator = v8;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questInfoAlphaCalculator,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  questInfoPanel = this->fields.questInfoAlphaCalculator;
  if ( !questInfoPanel )
LABEL_14:
    sub_1C7BD40(questInfoPanel, method);
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
  GrandQuestFolderBoardItem_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  GrandQuestFolderBoardItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  HorizontalQuestInformationIconListComponent_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x1

  if ( (byte_4CEB2F9 & 1) == 0 )
  {
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Material_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C7BAE8(&StringLiteral_16212/*"_ChocoTex"*/);
    sub_1C7BAE8(&StringLiteral_12894/*"Shaders/ChocoMap"*/);
    byte_4CEB2F9 = 1;
  }
  p_mChocoMaterialSp = (GrandQuestFolderBoardItem_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (GrandQuestFolderBoardItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12894/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_320C160 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (GrandQuestFolderBoardItem_c *)object;
      sub_1C7BA8C(p_mChocoTex, (int32_t)object, v9, v10, v11, v12, v13, v14);
    }
    v15 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v15 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_SP, 0);
    v17 = (UnityEngine_Material_o *)sub_1C7BD34(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v17, v16, 0);
    p_mChocoMaterialSp->klass = (GrandQuestFolderBoardItem_c *)v17;
    sub_1C7BA8C(p_mChocoMaterialSp, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    if ( !p_mChocoMaterialSp->klass )
      sub_1C7BD40(0, v24);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16212/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  GrandQuestFolderBoardItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  HorizontalQuestInformationIconListComponent_c *v15; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x1

  if ( (byte_4CEB2F8 & 1) == 0 )
  {
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Material_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C7BAE8(&StringLiteral_16212/*"_ChocoTex"*/);
    sub_1C7BAE8(&StringLiteral_12894/*"Shaders/ChocoMap"*/);
    byte_4CEB2F8 = 1;
  }
  p_mChocoMaterialTx = (GrandQuestFolderBoardItem_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0, 0) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (GrandQuestFolderBoardItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12894/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_320C160 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (GrandQuestFolderBoardItem_c *)object;
      sub_1C7BA8C(p_mChocoTex, (int32_t)object, v9, v10, v11, v12, v13, v14);
    }
    v15 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v15 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_TX, 0);
    v17 = (UnityEngine_Material_o *)sub_1C7BD34(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v17, v16, 0);
    p_mChocoMaterialTx->klass = (GrandQuestFolderBoardItem_c *)v17;
    sub_1C7BA8C(p_mChocoMaterialTx, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    if ( !p_mChocoMaterialTx->klass )
      sub_1C7BD40(0, v24);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16212/*"_ChocoTex"*/,
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  int32_t iconType; // w8
  ViewEnemyMaster_o *Master_object; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x1
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  HorizontalQuestInformationIconListComponent___c_c *v20; // x0
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v22; // x23
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array *v31; // x0
  const MethodInfo *v32; // x4
  const MethodInfo *v33; // x4
  Il2CppObject *v35; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEB2EC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__);
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_4CEB2EC = 1;
  }
  entity = 0;
  v35 = 0;
  this->fields.isNeedInit = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_QuestInformationListViewItem__o *)v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  iconType = this->fields.iconType;
  if ( iconType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
    if ( !Master_object )
      goto LABEL_39;
    EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(Master_object, questId, 0);
    if ( EntityListFromQuestId )
    {
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
      if ( EntityListFromQuestId->max_length )
      {
        v20 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
          v20 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        }
        _9__18_0 = (System_Func_object__int__o *)v20->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v20->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v20);
            v20 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
          }
          v22 = (Il2CppObject *)v20->static_fields->__9;
          _9__18_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_ViewEnemyEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__18_0,
            v22,
            Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__,
            0);
          static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__18_0;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_0,
            (int32_t)_9__18_0,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
        }
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v19,
                                                                     (System_Func_TSource__TResult__o *)_9__18_0,
                                                                     (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
        v31 = System_Linq_Enumerable__ToArray_int_(
                v30,
                (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
        HorizontalQuestInformationIconListComponent__CreateEnemyList(this, 0, questId, v31, v32);
        return 1;
      }
    }
  }
  else if ( !iconType )
  {
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
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
          v16);
LABEL_33:
        HorizontalQuestInformationIconListComponent__CreateIconGroupList(this, v17);
        return 1;
      }
      goto LABEL_39;
    }
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &v35,
                                           questId,
                                           (const MethodInfo_342E348 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v35 )
      {
        HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
          this,
          0,
          (int32_t)v35[1].monitor,
          HIDWORD(v35[1].klass),
          v33);
        goto LABEL_33;
      }
LABEL_39:
      sub_1C7BD40(Master_object, v12);
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
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  char *v26; // x8
  __int64 v27; // x8
  System_Collections_Generic_List_int__o *v28; // x0
  const MethodInfo_3821DD8 *v29; // x2
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  System_Int32_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Int32_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7

  if ( (byte_4CEB2F2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB2F2 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  max_length = itms->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = (ItemMaster_o *)Instance;
    v14 = 0;
    m_Items = itms->m_Items;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
LABEL_43:
        sub_1C7BD48(Instance);
      v11 = (unsigned int)m_Items[v14];
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
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
      Instance = (Il2CppObject *)ItemMaster__isQP(v13, v11, 0);
      if ( v14 >= LODWORD(itms->max_length) )
        goto LABEL_43;
      v11 = (unsigned int)m_Items[v14];
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
        if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
        {
          v33 = v24[4];
          v28 = v9;
LABEL_36:
          v29 = *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v33 + 192) + 112LL);
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
        if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
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
      LODWORD(max_length) = itms->max_length;
      if ( (__int64)++v14 >= (int)max_length )
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
      v27 = v21[4];
      v28 = v8;
LABEL_28:
      v29 = *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v27 + 192) + 112LL);
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
                (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v34,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)withoutQP, (int32_t)v34, v35, v36, v37, v38, v39, v40),
        !v9) )
  {
LABEL_42:
    sub_1C7BD40(Instance, v11);
  }
  v41 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v41;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)qps, (int32_t)v41, v42, v43, v44, v45, v46, v47);
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
  const MethodInfo_3821DD8 *v33; // x2
  __int64 v34; // x8
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Int32_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEB2F1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB2F1 = 1;
  }
  entity = 0;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1C7BD48(Instance);
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
          v33 = *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v31 + 192) + 112LL);
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
                                   (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        v11 = (unsigned int)m_Items[v14];
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
          v33 = *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v34 + 192) + 112LL);
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
        v11 = (unsigned int)m_Items[v14];
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
                (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v35,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)withoutCM, (int32_t)v35, v36, v37, v38, v39, v40, v41),
        !v9) )
  {
LABEL_45:
    sub_1C7BD40(Instance, v11);
  }
  v42 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v42;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)combineMaterials, (int32_t)v42, v43, v44, v45, v46, v47, v48);
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
  float deltaTime; // s0
  float questInfoChangeInterval; // s1
  float v10; // s0
  int32_t currentInformationIndex; // w20
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *v12; // x8
  struct AlphaTransitionCalculator_o *v13; // x8

  if ( (byte_4CEB2F0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_TransitionCalculator_float__Update__);
    sub_1C7BAE8(&Method_TransitionCalculator_float__get_Current__);
    byte_4CEB2F0 = 1;
  }
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)iconGroupList,
           (const MethodInfo_318FACC *)Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____) >= 2 )
    {
      questInfoAlphaCalculator = (TransitionCalculator_float__o *)this->fields.questInfoAlphaCalculator;
      if ( questInfoAlphaCalculator )
      {
        TransitionCalculator_float___Update(
          questInfoAlphaCalculator,
          (const MethodInfo_3B2E9AC *)Method_TransitionCalculator_float__Update__);
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_20;
        if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) )
        {
          mstQuestInfoIconUpdateTimer = this->fields.mstQuestInfoIconUpdateTimer;
          deltaTime = UnityEngine_Time__get_deltaTime(0);
          questInfoChangeInterval = this->fields.questInfoChangeInterval;
          v10 = mstQuestInfoIconUpdateTimer + deltaTime;
          this->fields.mstQuestInfoIconUpdateTimer = v10;
          if ( v10 >= questInfoChangeInterval )
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
            HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v6);
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
        sub_1C7BD40(Instance, v6);
      }
    }
  }
}


void HorizontalQuestInformationIconListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEB2FB & 1) == 0 )
  {
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_4CEB2FB = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(HorizontalQuestInformationIconListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields->__9 = (struct HorizontalQuestInformationIconListComponent___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields,
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


__f__AnonymousType6_QuestInformationListViewItem__int__o *HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        QuestInformationListViewItem_o *v,
        int32_t i,
        const MethodInfo *method)
{
  __f__AnonymousType6__v_j__TPar___i_j__TPar__o *v6; // x21

  if ( (byte_4CEB2FC & 1) == 0 )
  {
    sub_1C7BAE8(&Method___f__AnonymousType6_QuestInformationListViewItem__int___ctor__);
    sub_1C7BAE8(&_f__AnonymousType6_QuestInformationListViewItem__int__TypeInfo);
    byte_4CEB2FC = 1;
  }
  v6 = (__f__AnonymousType6__v_j__TPar___i_j__TPar__o *)sub_1C7BD34(_f__AnonymousType6_QuestInformationListViewItem__int__TypeInfo);
  _f__AnonymousType6_object__int____ctor(
    v6,
    (Il2CppObject *)v,
    i,
    (const MethodInfo_33510E4 *)Method___f__AnonymousType6_QuestInformationListViewItem__int___ctor__);
  return (__f__AnonymousType6_QuestInformationListViewItem__int__o *)v6;
}


System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_2(
        HorizontalQuestInformationIconListComponent___c_o *this,
        System_Linq_IGrouping_int____f__AnonymousType6_QuestInformationListViewItem__int___o *g,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c_c *v4; // x0
  System_Func_object__object__o *_9__19_3; // x20
  Il2CppObject *v6; // x21
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEB2FD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem___);
    sub_1C7BAE8(&System_Func___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    sub_1C7BAE8(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__);
    sub_1C7BAE8(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_4CEB2FD = 1;
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
    _9__19_3 = (System_Func_object__object__o *)sub_1C7BD34(System_Func___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__19_3,
      v6,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__,
      0);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_3 = (struct System_Func___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem__o *)_9__19_3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__19_3, (int32_t)_9__19_3, v8, v9, v10, v11, v12, v13);
  }
  return (System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                                     (System_Func_TSource__TResult__o *)_9__19_3,
                                                                                     (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select___f__AnonymousType6_QuestInformationListViewItem__int___QuestInformationListViewItem___);
}


QuestInformationListViewItem_o *HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_3(
        HorizontalQuestInformationIconListComponent___c_o *this,
        __f__AnonymousType6_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_4CEB2FE & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c_o *)sub_1C7BAE8(&Method___f__AnonymousType6_QuestInformationListViewItem__int__get_v__);
    byte_4CEB2FE = 1;
  }
  if ( !x )
    sub_1C7BD40(this, x);
  return x->fields._v_i__Field;
}


int32_t HorizontalQuestInformationIconListComponent___c___Setup_b__18_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1C7BD40(this, 0);
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
        __f__AnonymousType6_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *v4; // x20

  v4 = this;
  if ( (byte_4CEB2FF & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_1C7BAE8(&Method___f__AnonymousType6_QuestInformationListViewItem__int__get_i__);
    byte_4CEB2FF = 1;
  }
  if ( !x )
    sub_1C7BD40(this, x);
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
    sub_1C7BD40(this, x);
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
  const MethodInfo *v4; // x4

  v2 = this;
  if ( (byte_4CEB300 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB300 = 1;
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
        HorizontalQuestInformationIconListComponent__CreateEnemyList_36979304(
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
      sub_1C7BD40(this, method);
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
  if ( (byte_4CEB301 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call__);
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CEB301 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  assetStoragesLoadCallback = (Il2CppObject *)_4__this->fields.assetStoragesLoadCallback;
  v6 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v6, assetStoragesLoadCallback, Method_ActionExtensions_Call__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_41103084(loadedAssets, v6, 1, 0);
}


void HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__2(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(this, method);
  ActionExtensions__Call(_4__this->fields.enemyAtlasLoadCallback, 0);
}