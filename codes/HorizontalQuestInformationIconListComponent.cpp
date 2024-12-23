void __fastcall HorizontalQuestInformationIconListComponent___cctor(const MethodInfo *method)
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
  struct HorizontalQuestInformationIconListComponent_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B63AA3 & 1) == 0 )
  {
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_15334/*"Unlit/Transparent Colored_Choco"*/, v8);
    sub_1BE4ACC(&StringLiteral_5060/*"Custom/SpriteWithMask_Choco"*/, v9);
    byte_4B63AA3 = 1;
  }
  HorizontalQuestInformationIconListComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15334/*"Unlit/Transparent Colored_Choco"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)HorizontalQuestInformationIconListComponent_TypeInfo->static_fields,
    StringLiteral_15334/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_5060/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = HorizontalQuestInformationIconListComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5060/*"Custom/SpriteWithMask_Choco"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->CHOCO_SHADER_SP, v10, v12, v13, v14, v15, v16, v17);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Action_object__o **v19; // x20
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Action_object__o *v22; // x22
  Il2CppObject *current; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B63A97 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_HorizontalQuestInformationIconDraw__TypeInfo, method);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__,
      v3);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__,
      v4);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___get_Current__,
      v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__, v7);
    sub_1BE4ACC(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
      v8);
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo, v9);
    byte_4B63A97 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v10 = sub_1BE4D18(HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
  HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ctor(
    (HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *)v10,
    0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 24) = this,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v10 + 16) = 0,
        (iconGroupList = (System_Collections_Generic_List_object__o *)this->fields.iconGroupList) == 0LL) )
  {
    sub_1BE4D28(iconGroupList, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    iconGroupList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
  v19 = (System_Action_object__o **)(v10 + 32);
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    if ( !v20 )
      break;
    v22 = *v19;
    current = v30.fields._current;
    if ( !*v19 )
    {
      v22 = (System_Action_object__o *)sub_1BE4D18(System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
      System_Action_object____ctor(
        v22,
        (Il2CppObject *)v10,
        Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
        0LL);
      *v19 = v22;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)v22, v24, v25, v26, v27, v28, v29);
    }
    if ( !current )
      sub_1BE4D28(v20, v21);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)current,
      (System_Action_T__o *)v22,
      (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    ++*(_DWORD *)(v10 + 16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
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
  QuestInformationListViewItem_o *v11; // x23
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
  QuestInformationListViewItem_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x8

  if ( (byte_4B63A9E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, *(_QWORD *)&kind);
    sub_1BE4ACC(&QuestInformationListViewItem_TypeInfo, v9);
    byte_4B63A9E = 1;
  }
  if ( !kind )
  {
    if ( itemCnt >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = (QuestInformationListViewItem_o *)sub_1BE4D18(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v11, v10, 2, 0, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v21 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v11, v13, v14, v15, v16, v17, v18);
        }
        if ( itemCnt == ++v10 )
          goto LABEL_14;
      }
LABEL_22:
      sub_1BE4D28(itemList, v12);
    }
    itemCnt = 0;
LABEL_14:
    if ( svtCnt >= 1 )
    {
      while ( 1 )
      {
        v24 = (QuestInformationListViewItem_o *)sub_1BE4D18(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v24, itemCnt, 1, 0, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        v31 = itemList->fields._items;
        v32 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v31 )
          break;
        v33 = itemList->fields._size;
        if ( (unsigned int)v33 >= v31->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v24,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &v31->obj.klass + v33;
          itemList->fields._size = v33 + 1;
          v34[4] = (Il2CppClass *)v24;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v24, v25, v26, v27, v28, v29, v30);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 *v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Il2CppObject *Master_object; // x22
  Il2CppObject *v47; // x24
  unsigned int **v48; // x25
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  bool HasFlag; // w28
  Il2CppObject *v56; // x27
  __int64 v57; // x8
  int64_t v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x8
  __int64 v71; // x29
  __int64 v72; // x23
  __int64 v73; // x26
  unsigned __int64 v74; // x9
  unsigned __int64 v75; // x19
  int32_t v76; // w3
  __int64 v77; // x8
  ViewEnemyEntity_o *v78; // x27
  unsigned int *v79; // x8
  PartyOrganizationUtility_o *v80; // x0
  System_String_o *v81; // x0
  Il2CppObject *v82; // x27
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x0
  ViewEnemyEntity_o *v93; // x28
  unsigned int *v94; // x28
  System_Object_array *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_Action_o *v102; // x21
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_Action_o *v109; // x21
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  System_Action_o *v116; // x19
  __int64 v117; // x0
  HorizontalQuestInformationIconListComponent_o *v118; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v119; // [xsp+8h] [xbp-88h]
  bool v120; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v122; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v123; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B63A9F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ViewEnemyMaster___, v13);
    sub_1BE4ACC(&DataManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v20);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v22);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__, v23);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__, v24);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__, v25);
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo, v26);
    sub_1BE4ACC(&ViewEnemyEntity___TypeInfo, v27);
    sub_1BE4ACC(&ViewEnemyEntity_TypeInfo, v28);
    sub_1BE4ACC(&StringLiteral_12851/*"Servants/Commands/"*/, v29);
    byte_4B63A9F = 1;
  }
  v122 = 0LL;
  v123 = 0LL;
  entity = 0LL;
  v30 = sub_1BE4D18(HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___ctor(
    (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_67;
  *(_QWORD *)(v30 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 32) = enemies;
  v39 = (__int64 *)(v30 + 32);
  *(_DWORD *)(v30 + 24) = questId;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)enemies, v40, v41, v42, v43, v44, v45);
  if ( kind )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v47 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  v119 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v119,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v30 + 40) = 0LL;
  v48 = (unsigned int **)(v30 + 40);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 40), 0LL, v49, v50, v51, v52, v53, v54);
  QuestEntity = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_67;
  QuestEntity = (QuestMaster_o *)QuestMaster__getQuestEntity(QuestEntity, *(_DWORD *)(v30 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_67;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v56 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v32);
    byte_4B61717 = 1;
  }
  QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  v118 = this;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    QuestEntity = (QuestMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v56 )
    goto LABEL_67;
  UserQuestInfoMaster__TryGetEntity(
    (UserQuestInfoMaster_o *)v56,
    &entity,
    (int64_t)QuestEntity[2].fields._lookup->fields._values,
    *(_DWORD *)(v30 + 24),
    0LL);
  v57 = *(_QWORD *)(v30 + 32);
  if ( v57 )
  {
    v58 = sub_1BE4B74(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v57 + 24));
    *v48 = (unsigned int *)v58;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 40), v58, v59, v60, v61, v62, v63, v64);
    v70 = *v39;
    if ( !*v39 )
      goto LABEL_67;
    v71 = 0LL;
    v72 = 8LL;
    v73 = 8LL;
    v120 = HasFlag;
    while ( 1 )
    {
      v74 = *(unsigned int *)(v70 + 24);
      v75 = v72 - 8;
      if ( v72 - 8 >= (int)v74 )
        break;
      if ( v75 >= v74 )
        goto LABEL_68;
      v76 = *(_DWORD *)(v70 + 4 * v72);
      if ( v76 < 1 )
        goto LABEL_43;
      if ( !Master_object )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)ViewEnemyMaster__TryGetEntity(
                                       (ViewEnemyMaster_o *)Master_object,
                                       &v122,
                                       *(_DWORD *)(v30 + 24),
                                       v76,
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
        if ( !v122 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)System_Linq_Enumerable__Contains_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                                         v122->fields.enemyId,
                                         (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
LABEL_32:
          v77 = *v39;
          if ( !*v39 )
            goto LABEL_67;
          if ( v75 >= *(unsigned int *)(v77 + 24) )
            goto LABEL_68;
          *(_DWORD *)(v77 + 4 * v72) = 0;
        }
      }
      if ( !v122 || !v47 )
        goto LABEL_67;
      QuestEntity = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v47,
                                       &v123,
                                       v122->fields.svtId,
                                       (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestEntity & 1) != 0 )
      {
        QuestEntity = (QuestMaster_o *)v123;
        if ( !v123 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)v123, 0LL);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          goto LABEL_42;
        QuestEntity = (QuestMaster_o *)v122;
        if ( !v122 )
          goto LABEL_67;
        QuestEntity = (QuestMaster_o *)ViewEnemyEntity__IsIconIdUnique(v122, 0LL);
        if ( ((unsigned __int8)QuestEntity & 1) == 0 )
        {
          if ( !v122 )
            goto LABEL_67;
          v81 = System_Int32__ToString((int)v122 + 36, 0LL);
          v82 = (Il2CppObject *)System_String__Concat_62698808((System_String_o *)StringLiteral_12851/*"Servants/Commands/"*/, v81, 0LL);
          QuestEntity = (QuestMaster_o *)v119;
          if ( !v119 )
            goto LABEL_67;
          QuestEntity = (QuestMaster_o *)System_Collections_Generic_List_object___Contains(
                                           v119,
                                           v82,
                                           (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)QuestEntity & 1) == 0 )
          {
            items = v119->fields._items;
            v90 = Method_System_Collections_Generic_List_string__Add__;
            ++v119->fields._version;
            if ( !items )
              goto LABEL_67;
            size = v119->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v119,
                v82,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
            }
            else
            {
              v92 = &items->obj.klass + size;
              v119->fields._size = size + 1;
              v92[4] = (Il2CppClass *)v82;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v92 + 4), (int64_t)v82, v83, v84, v85, v86, v87, v88);
            }
          }
          v93 = v122;
          v78 = (ViewEnemyEntity_o *)sub_1BE4D18(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_41247896(v78, v93, 0LL);
          v122 = v78;
          if ( !v78 )
            goto LABEL_67;
          v78->fields.iconId = 0;
        }
        else
        {
LABEL_42:
          v78 = v122;
        }
        v94 = *v48;
        if ( !*v48 )
          goto LABEL_67;
        if ( v78 )
        {
          QuestEntity = (QuestMaster_o *)sub_1BE4C08(v78, *(_QWORD *)(*(_QWORD *)v94 + 64LL));
          if ( !QuestEntity )
          {
            v117 = sub_1BE4D4C();
            sub_1BE4BF4(v117, 0LL);
          }
        }
        if ( v75 >= v94[6] )
LABEL_68:
          sub_1BE4D30(QuestEntity, v32);
        v80 = (PartyOrganizationUtility_o *)&v94[v73];
        HasFlag = v120;
        v80->klass = (PartyOrganizationUtility_c *)v78;
      }
      else
      {
LABEL_43:
        v79 = *v48;
        if ( !*v48 )
          goto LABEL_67;
        if ( v75 >= v79[6] )
          goto LABEL_68;
        v78 = 0LL;
        v80 = (PartyOrganizationUtility_o *)&v79[2 * v71 + 8];
        *(_QWORD *)&v79[v73] = 0LL;
      }
      sub_1BE4A70(v80, (int64_t)v78, v65, v76, v66, v67, v68, v69);
      v70 = *v39;
      ++v71;
      ++v72;
      v73 += 2LL;
      if ( !*v39 )
        goto LABEL_67;
    }
  }
  QuestEntity = (QuestMaster_o *)v119;
  if ( !v119 )
LABEL_67:
    sub_1BE4D28(QuestEntity, v32);
  v95 = System_Collections_Generic_List_object___ToArray(
          v119,
          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
  v118->fields.loadedAssets = (struct System_String_array *)v95;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v118->fields.loadedAssets, (int64_t)v95, v96, v97, v98, v99, v100, v101);
  v118->fields.loading = 1;
  v102 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v102,
    (Il2CppObject *)v30,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__,
    0LL);
  v118->fields.assetStoragesLoadCallback = v102;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v118->fields.assetStoragesLoadCallback,
    (int64_t)v102,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v109 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v109,
    (Il2CppObject *)v30,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__,
    0LL);
  v118->fields.enemyAtlasLoadCallback = v109;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v118->fields.enemyAtlasLoadCallback,
    (int64_t)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  v116 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v116,
    (Il2CppObject *)v30,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v116, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEnemyList_34811432(
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
  Il2CppObject *v14; // x23
  int32_t v15; // w1
  ViewEnemyEntity_o *v16; // x2
  bool v17; // w3
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8

  v7 = this;
  if ( (byte_4B63AA0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, *(_QWORD *)&questId);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1BE4ACC(&QuestInformationListViewItem_TypeInfo, v8);
    byte_4B63AA0 = 1;
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
            sub_1BE4D30(this, *(_QWORD *)&questId);
          v12 = veEnts->m_Items[v10];
          if ( enemies->m_Items[v10 + 1] <= 0 )
            break;
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_1BE4D18(QuestInformationListViewItem_TypeInfo);
            v14 = (Il2CppObject *)v13;
            v15 = v11;
            v16 = v12;
            v17 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v10 >= (int)v9 )
            return;
        }
        v13 = (QuestInformationListViewItem_o *)sub_1BE4D18(QuestInformationListViewItem_TypeInfo);
        v14 = (Il2CppObject *)v13;
        v17 = 1;
        v15 = v11;
        v16 = v12;
LABEL_14:
        QuestInformationListViewItem___ctor_34821744(v13, v15, v16, v17, 0LL);
        this = (HorizontalQuestInformationIconListComponent_o *)v7->fields.itemList;
        if ( !this
          || (v24 = *(_QWORD *)&this->fields.m_CachedPtr,
              v25 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v24) )
        {
LABEL_22:
          sub_1BE4D28(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v14,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = v24 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v27 + 32) = v14;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v14, v18, v19, v20, v21, v22, v23);
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
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *v36; // x21
  __int64 v37; // x1
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *itemList; // x8
  UILabel_o *infoLabel; // x20
  int32_t iconType; // w19
  System_String_o **v41; // x8
  __int64 gameObject; // x0
  bool v43; // w1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *v50; // x22
  HorizontalQuestInformationIconListComponent___c_c *v51; // x0
  System_Func_T1__T2__TResult__o *_9__19_0; // x23
  Il2CppObject *v53; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x20
  System_Func_object__int__o *v62; // x22
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v63; // x0
  HorizontalQuestInformationIconListComponent___c_c *v64; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x22
  System_Func_object__object__o *_9__19_2; // x23
  Il2CppObject *v67; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x26
  System_Collections_Generic_List_object__o *v76; // x20
  UnityEngine_GameObject_o *iconGrid; // x27
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int v84; // w29
  char v85; // w8
  System_Collections_Generic_List_object__o *iconDrawList; // x25
  UnityEngine_Transform_o *parent; // x20
  __int64 v88; // x1
  System_Collections_IEnumerator_o *Enumerator; // x26
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v91; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v94; // x8
  __int64 v95; // x9
  System_Collections_IEnumerator_c **v96; // x10
  __int64 v97; // x0
  UnityEngine_Component_o *v98; // x0
  __int64 v99; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *v101; // x0
  __int64 v102; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x1
  struct System_Object_array *items; // x8
  _QWORD *v112; // x9
  __int64 size; // x10
  Il2CppClass **v114; // x0
  __int64 v115; // x8
  __int64 v116; // x26
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x0
  System_Collections_Generic_List_object__o *v124; // x19
  System_Collections_Generic_IEnumerable_TSource__c *v125; // x8
  __int64 v126; // x9
  int32_t *v127; // x10
  __int64 v128; // x0
  __int64 v129; // x1
  int32_t v130; // w26
  Il2CppObject *v131; // x23
  HorizontalQuestInformationIconDraw_o *v132; // x25
  __int64 v133; // x8
  __int64 v134; // x9
  int *v135; // x10
  __int64 v136; // x0
  __int64 v137; // x8
  __int64 v138; // x9
  int *v139; // x10
  __int64 v140; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v141; // x0
  System_Collections_Generic_List_TSource__o *v142; // x0
  __int64 v143; // x1
  System_Collections_Generic_List_object__o *v144; // x27
  int32_t v145; // w24
  Il2CppObject *Item; // x0
  __int64 v147; // x1
  int64_t v148; // x2
  int32_t v149; // w3
  MethodInfo *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  System_Collections_Generic_List_object__o *v154; // x26
  int32_t v155; // w28
  Il2CppObject *v156; // x29
  HorizontalQuestInformationIconDraw_o *v157; // x20
  Il2CppObject *v158; // x0
  const MethodInfo *v159; // x4
  Il2CppObject *v160; // x29
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  __int64 v165; // x8
  __int64 v166; // x9
  int *v167; // x10
  __int64 v168; // x20
  __int64 v169; // x0
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  __int64 v176; // x0
  __int64 v177; // x20
  __int64 v178; // x8
  __int64 v179; // x9
  int *v180; // x10
  __int64 v181; // x0
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o **p_iconGroupList; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_object__o *v183; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v184; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_IEnumerable_TSource__o *v185; // [xsp+20h] [xbp-70h]
  __int64 v186; // [xsp+20h] [xbp-70h]
  HorizontalQuestInformationIconListComponent_o *iconListComponent; // [xsp+28h] [xbp-68h]

  if ( (byte_4B63A96 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____, method);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_GroupBy___f__AnonymousType5_QuestInformationListViewItem__int___int___,
      v3);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType5_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____,
      v4);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType5_QuestInformationListViewItem__int____,
      v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___, v6);
    sub_1BE4ACC(&System_Func___f__AnonymousType5_QuestInformationListViewItem__int___int__TypeInfo, v7);
    sub_1BE4ACC(
      &System_Func_IGrouping_int____f__AnonymousType5_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo,
      v8);
    sub_1BE4ACC(
      &System_Func_QuestInformationListViewItem__int____f__AnonymousType5_QuestInformationListViewItem__int___TypeInfo,
      v9);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___, v10);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo, v12);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Count__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__, v22);
    sub_1BE4ACC(&System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo, v23);
    sub_1BE4ACC(&System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo, v24);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v25);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v26);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v27);
    sub_1BE4ACC(&UnityEngine_Transform_TypeInfo, v28);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__, v29);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__, v30);
    sub_1BE4ACC(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
      v31);
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo, v32);
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v33);
    sub_1BE4ACC(&StringLiteral_8798/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/, v34);
    sub_1BE4ACC(&StringLiteral_8799/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/, v35);
    byte_4B63A96 = 1;
  }
  v36 = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_1BE4D18(HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___ctor(v36, 0LL);
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size >= 1 )
  {
    infoLabel = this->fields.infoLabel;
    iconType = this->fields.iconType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = (System_String_o **)&StringLiteral_8799/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/;
    if ( iconType )
      v41 = (System_String_o **)&StringLiteral_8798/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/;
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconGroupList, 0LL, v44, v45, v46, v47, v48, v49);
  if ( !v36 )
    goto LABEL_139;
  p_iconGroupList = &this->fields.iconGroupList;
  v36->fields.chunkSize = this->fields.displayLimitNum;
  v50 = this->fields.itemList;
  v51 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v51 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T1__T2__TResult__o *)v51->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v51->static_fields->__9;
    _9__19_0 = (System_Func_T1__T2__TResult__o *)sub_1BE4D18(System_Func_QuestInformationListViewItem__int____f__AnonymousType5_QuestInformationListViewItem__int___TypeInfo);
    System_Func_object__int__object____ctor(
      _9__19_0,
      v53,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_QuestInformationListViewItem__int____f__AnonymousType5_QuestInformationListViewItem__int___o *)_9__19_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__19_0,
      (int64_t)_9__19_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__49851292(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v50,
                                                               (System_Func_TSource__int__TResult__o *)_9__19_0,
                                                               (const MethodInfo_2F8AB9C *)Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType5_QuestInformationListViewItem__int____);
  v62 = (System_Func_object__int__o *)sub_1BE4D18(System_Func___f__AnonymousType5_QuestInformationListViewItem__int___int__TypeInfo);
  System_Func_object__int____ctor(
    v62,
    (Il2CppObject *)v36,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
    0LL);
  v63 = System_Linq_Enumerable__GroupBy_object__int_(
          v61,
          (System_Func_TSource__TKey__o *)v62,
          (const MethodInfo_2F7D290 *)Method_System_Linq_Enumerable_GroupBy___f__AnonymousType5_QuestInformationListViewItem__int___int___);
  v64 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)v63;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v64 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_2 = (System_Func_object__object__o *)v64->static_fields->__9__19_2;
  if ( !_9__19_2 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v64->static_fields->__9;
    _9__19_2 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_IGrouping_int____f__AnonymousType5_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    System_Func_object__object____ctor(
      _9__19_2,
      v67,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__,
      0LL);
    v68 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v68->__9__19_2 = (struct System_Func_IGrouping_int____f__AnonymousType5_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___o *)_9__19_2;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v68->__9__19_2, (int64_t)_9__19_2, v69, v70, v71, v72, v73, v74);
  }
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v65,
                                                               (System_Func_TSource__TResult__o *)_9__19_2,
                                                               (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType5_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
  v76 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v76,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  iconGrid = this->fields.iconGrid;
  iconListComponent = this;
  if ( !iconGrid )
    goto LABEL_139;
  UnityEngine_GameObject__SetActive(iconGrid, 1, 0LL);
  gameObject = System_Linq_Enumerable__Count_object_(
                 v75,
                 (const MethodInfo_2F74408 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
  v184 = v76;
  if ( (int)gameObject >= 1 )
  {
    v84 = 0;
    v85 = 1;
    v183 = (System_Collections_Generic_List_object__o *)iconGrid;
    v185 = v75;
    do
    {
      if ( (v85 & 1) != 0 )
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)this->fields.iconDrawList;
      }
      else
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          iconDrawList,
          (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
        gameObject = (__int64)UnityEngine_GameObject__get_transform(iconGrid, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (__int64)UnityEngine_Object__Instantiate_object__50195216(
                                (Il2CppObject *)iconGrid,
                                parent,
                                (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
        if ( !gameObject )
          goto LABEL_139;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !Enumerator )
          sub_1BE4D28(0LL, v88);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v91 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v91;
              p_offset += 4;
              if ( !v91 )
                goto LABEL_44;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_44:
            p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v94 = Enumerator->klass;
          v95 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v96 = (System_Collections_IEnumerator_c **)&v94->_1.interfaceOffsets->offset;
            while ( *(v96 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v95;
              v96 += 2;
              if ( !v95 )
                goto LABEL_51;
            }
            v97 = (__int64)&v94->vtable[*(_DWORD *)v96 + 1].method;
          }
          else
          {
LABEL_51:
            v97 = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v98 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v97)(
                                             Enumerator,
                                             *(_QWORD *)(v97 + 8));
          if ( !v98 )
            sub_1BE4D28(0LL, v99);
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v98->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (UnityEngine_Transform_c *)v98->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
          {
            sub_1BE4FE8(v98);
            v176 = sub_1BE4C08(Enumerator, System_IDisposable_TypeInfo);
            v177 = v176;
            if ( v176 )
            {
              v178 = *(_QWORD *)v176;
              v179 = *(unsigned __int16 *)(*(_QWORD *)v176 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v176 + 302LL) )
              {
                v180 = (int *)(*(_QWORD *)(v178 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v180 - 1) != System_IDisposable_TypeInfo )
                {
                  --v179;
                  v180 += 4;
                  if ( !v179 )
                    goto LABEL_150;
                }
                v181 = v178 + 16LL * *v180 + 312;
              }
              else
              {
LABEL_150:
                v181 = sub_1C36AAC(v176, System_IDisposable_TypeInfo, 0LL);
              }
              (*(void (__fastcall **)(__int64, _QWORD))v181)(v177, *(_QWORD *)(v181 + 8));
            }
            sub_1BE4D20(iconGrid);
          }
          v101 = UnityEngine_Component__get_gameObject(v98, 0LL);
          if ( !v101 )
            sub_1BE4D28(0LL, v102);
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         v101,
                                         (const MethodInfo_2FA9A00 *)Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
          v110 = (int64_t)ComponentInChildren_object;
          if ( !iconDrawList )
            sub_1BE4D28(ComponentInChildren_object, ComponentInChildren_object);
          items = iconDrawList->fields._items;
          v112 = Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__;
          ++iconDrawList->fields._version;
          if ( !items )
            sub_1BE4D28(ComponentInChildren_object, ComponentInChildren_object);
          size = iconDrawList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              iconDrawList,
              ComponentInChildren_object,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
          }
          else
          {
            v114 = &items->obj.klass + size;
            iconDrawList->fields._size = size + 1;
            v114[4] = (Il2CppClass *)v110;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v114 + 4), v110, v104, v105, v106, v107, v108, v109);
          }
        }
        gameObject = sub_1BE4C08(Enumerator, System_IDisposable_TypeInfo);
        if ( gameObject )
        {
          v115 = *(_QWORD *)gameObject;
          v116 = gameObject;
          v117 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
          if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
          {
            v118 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v118 - 1) != System_IDisposable_TypeInfo )
            {
              --v117;
              v118 += 4;
              if ( !v117 )
                goto LABEL_67;
            }
            v119 = v115 + 16LL * *v118 + 312;
          }
          else
          {
LABEL_67:
            v119 = sub_1C36AAC(gameObject, System_IDisposable_TypeInfo, 0LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v119)(v116, *(_QWORD *)(v119 + 8));
        }
        v76 = v184;
        v75 = v185;
        iconGrid = (UnityEngine_GameObject_o *)v183;
      }
      if ( !v76 )
        goto LABEL_139;
      v120 = v76->fields._items;
      v121 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
      ++v76->fields._version;
      if ( !v120 )
        goto LABEL_139;
      v122 = v76->fields._size;
      if ( (unsigned int)v122 >= v120->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)iconDrawList,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
      }
      else
      {
        v123 = &v120->obj.klass + v122;
        v76->fields._size = v122 + 1;
        v123[4] = (Il2CppClass *)iconDrawList;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v123 + 4), (int64_t)iconDrawList, v78, v79, v80, v81, v82, v83);
      }
      ++v84;
      gameObject = System_Linq_Enumerable__Count_object_(
                     v75,
                     (const MethodInfo_2F74408 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
      v85 = 0;
    }
    while ( v84 < (int)gameObject );
  }
  v124 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v124,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  if ( !v75 )
LABEL_139:
    sub_1BE4D28(gameObject, v37);
  v125 = v75->klass;
  v126 = *(unsigned __int16 *)(&v75->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v75->klass->_2.bitflags2 + 3) )
  {
    v127 = &v125->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___c **)v127 - 1) != System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo )
    {
      --v126;
      v127 += 4;
      if ( !v126 )
        goto LABEL_89;
    }
    v128 = (__int64)&v125->vtable[*v127].method;
  }
  else
  {
LABEL_89:
    v128 = sub_1C36AAC(
             v75,
             System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo,
             0LL);
  }
  v186 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v128)(
           v75,
           *(_QWORD *)(v128 + 8));
  if ( !v186 )
    sub_1BE4D28(0LL, v129);
  v130 = 0;
  v131 = 0LL;
  v132 = 0LL;
  while ( 1 )
  {
    v133 = *(_QWORD *)v186;
    v134 = *(unsigned __int16 *)(*(_QWORD *)v186 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v186 + 302LL) )
    {
      v135 = (int *)(*(_QWORD *)(v133 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v135 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v134;
        v135 += 4;
        if ( !v134 )
          goto LABEL_97;
      }
      v136 = v133 + 16LL * *v135 + 312;
    }
    else
    {
LABEL_97:
      v136 = sub_1C36AAC(v186, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v136)(v186, *(_QWORD *)(v136 + 8)) & 1) == 0 )
      break;
    v137 = *(_QWORD *)v186;
    v138 = *(unsigned __int16 *)(*(_QWORD *)v186 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v186 + 302LL) )
    {
      v139 = (int *)(*(_QWORD *)(v137 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___c **)v139 - 1) != System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo )
      {
        --v138;
        v139 += 4;
        if ( !v138 )
          goto LABEL_104;
      }
      v140 = v137 + 16LL * *v139 + 312;
    }
    else
    {
LABEL_104:
      v140 = sub_1C36AAC(
               v186,
               System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo,
               0LL);
    }
    v141 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v140)(
                                                                  v186,
                                                                  *(_QWORD *)(v140 + 8));
    v142 = System_Linq_Enumerable__ToList_object_(
             v141,
             (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    if ( !v76 )
      sub_1BE4D28(v142, v143);
    v144 = (System_Collections_Generic_List_object__o *)v142;
    v145 = v130;
    Item = System_Collections_Generic_List_object___get_Item(
             v76,
             v130,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    v154 = (System_Collections_Generic_List_object__o *)Item;
    if ( Item && v36->fields.chunkSize >= 1 )
    {
      if ( !v144 )
        sub_1BE4D28(Item, v147);
      v155 = 0;
      do
      {
        if ( v144->fields._size <= v155 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v154,
                   v155,
                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v160 = Item;
          if ( !Item )
            Item = v131;
          if ( v160 )
          {
            if ( !Item )
              sub_1BE4D28(0LL, v147);
            HorizontalQuestInformationIconDraw__SetItem(
              (HorizontalQuestInformationIconDraw_o *)Item,
              0LL,
              0,
              iconListComponent,
              v150);
            v131 = v160;
          }
        }
        else
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v154,
                   v155,
                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v156 = Item;
          if ( Item )
            v157 = (HorizontalQuestInformationIconDraw_o *)Item;
          else
            v157 = v132;
          if ( Item )
          {
            v158 = System_Collections_Generic_List_object___get_Item(
                     v144,
                     v155,
                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
            if ( !v157 )
              sub_1BE4D28(v158, v158);
            HorizontalQuestInformationIconDraw__SetItem(
              v157,
              (QuestInformationListViewItem_o *)v158,
              2,
              iconListComponent,
              v159);
            v132 = (HorizontalQuestInformationIconDraw_o *)v156;
          }
        }
        ++v155;
      }
      while ( v155 < v36->fields.chunkSize );
    }
    if ( !v124 )
      sub_1BE4D28(Item, v147);
    v161 = v124->fields._items;
    v162 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
    ++v124->fields._version;
    if ( !v161 )
      sub_1BE4D28(Item, v147);
    v163 = v124->fields._size;
    if ( (unsigned int)v163 >= v161->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v124,
        (Il2CppObject *)v154,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
    }
    else
    {
      v164 = &v161->obj.klass + v163;
      v124->fields._size = v163 + 1;
      v164[4] = (Il2CppClass *)v154;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)(v164 + 4),
        (int64_t)v154,
        v148,
        v149,
        (System_String_o *)v150,
        v151,
        v152,
        v153);
    }
    v76 = v184;
    v130 = v145 + 1;
  }
  v165 = *(_QWORD *)v186;
  v166 = *(unsigned __int16 *)(*(_QWORD *)v186 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v186 + 302LL) )
  {
    v167 = (int *)(*(_QWORD *)(v165 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v167 - 1) != System_IDisposable_TypeInfo )
    {
      --v166;
      v167 += 4;
      if ( !v166 )
        goto LABEL_134;
    }
    v168 = v186;
    v169 = v165 + 16LL * *v167 + 312;
  }
  else
  {
LABEL_134:
    v168 = v186;
    v169 = sub_1C36AAC(v186, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v169)(v168, *(_QWORD *)(v169 + 8));
  iconListComponent->fields.iconGroupList = (struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *)v124;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_iconGroupList, (int64_t)v124, v170, v171, v172, v173, v174, v175);
  iconListComponent->fields.isNeedInit = 1;
}


int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardItemList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x25
  int32_t v10; // w23
  QuestInformationListViewItem_o *v11; // x22
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
  if ( (byte_4B63A9C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, items);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1BE4ACC(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4B63A9C = 1;
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
          sub_1BE4D30(this, items);
        v10 = items->m_Items[v9 + 1];
        v11 = (QuestInformationListViewItem_o *)sub_1BE4D18(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v11, sum + v9, 2, v10, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v20 = itemList->fields._items,
              v21 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !v20) )
        {
          sub_1BE4D28(itemList, v12);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v20->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &v20->obj.klass + size;
          itemList->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v11, v13, v14, v15, v16, v17, v18);
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


int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardSvtList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x25
  int32_t v10; // w23
  QuestInformationListViewItem_o *v11; // x22
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
  if ( (byte_4B63A9D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, svts);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1BE4ACC(&QuestInformationListViewItem_TypeInfo, v7);
    byte_4B63A9D = 1;
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
          sub_1BE4D30(this, svts);
        v10 = svts->m_Items[v9 + 1];
        v11 = (QuestInformationListViewItem_o *)sub_1BE4D18(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v11, sum + v9, 1, v10, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v21 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1BE4D28(itemList, v12);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v11;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v11, v13, v14, v15, v16, v17, v18);
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


void __fastcall HorizontalQuestInformationIconListComponent__DeleteCallback(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  this->fields.assetStoragesLoadCallback = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetStoragesLoadCallback, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.enemyAtlasLoadCallback = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.enemyAtlasLoadCallback, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questInfoRoot; // x0

  questInfoRoot = this->fields.questInfoRoot;
  if ( !questInfoRoot )
    sub_1BE4D28(0LL, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x8

  if ( (byte_4B63A98 & 1) == 0 )
  {
    sub_1BE4ACC(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__, v3);
    sub_1BE4ACC(&TitleInfoControl_TypeInfo, v4);
    byte_4B63A98 = 1;
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
  v10 = (AlphaTransitionCalculator_o *)sub_1BE4D18(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v10, v7, v9, 0LL);
  this->fields.questInfoAlphaCalculator = v10;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.questInfoAlphaCalculator,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  questInfoPanel = this->fields.questInfoAlphaCalculator;
  if ( !questInfoPanel )
LABEL_14:
    sub_1BE4D28(questInfoPanel, method);
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
  PartyOrganizationUtility_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  HorizontalQuestInformationIconListComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  UnityEngine_Material_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1

  if ( (byte_4B63AA2 & 1) == 0 )
  {
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Material_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1BE4ACC(&StringLiteral_16367/*"_ChocoTex"*/, v6);
    sub_1BE4ACC(&StringLiteral_12930/*"Shaders/ChocoMap"*/, v7);
    byte_4B63AA2 = 1;
  }
  p_mChocoMaterialSp = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v11 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12930/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FEE238 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BE4A70(p_mChocoTex, (int64_t)object, v14, v15, v16, v17, v18, v19);
    }
    v20 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v20 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_SP, 0LL);
    v22 = (UnityEngine_Material_o *)sub_1BE4D18(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0LL);
    p_mChocoMaterialSp->klass = (PartyOrganizationUtility_c *)v22;
    sub_1BE4A70(p_mChocoMaterialSp, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    if ( !p_mChocoMaterialSp->klass )
      sub_1BE4D28(0LL, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16367/*"_ChocoTex"*/,
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
  PartyOrganizationUtility_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  PartyOrganizationUtility_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  HorizontalQuestInformationIconListComponent_c *v20; // x0
  UnityEngine_Shader_o *v21; // x21
  UnityEngine_Material_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1

  if ( (byte_4B63AA1 & 1) == 0 )
  {
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Material_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1BE4ACC(&StringLiteral_16367/*"_ChocoTex"*/, v6);
    sub_1BE4ACC(&StringLiteral_12930/*"Shaders/ChocoMap"*/, v7);
    byte_4B63AA1 = 1;
  }
  p_mChocoMaterialTx = (PartyOrganizationUtility_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (PartyOrganizationUtility_o *)&this->fields.mChocoTex;
    v11 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12930/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FEE238 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (PartyOrganizationUtility_c *)object;
      sub_1BE4A70(p_mChocoTex, (int64_t)object, v14, v15, v16, v17, v18, v19);
    }
    v20 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v20 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_TX, 0LL);
    v22 = (UnityEngine_Material_o *)sub_1BE4D18(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v22, v21, 0LL);
    p_mChocoMaterialTx->klass = (PartyOrganizationUtility_c *)v22;
    sub_1BE4A70(p_mChocoMaterialTx, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    if ( !p_mChocoMaterialTx->klass )
      sub_1BE4D28(0LL, v29);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16367/*"_ChocoTex"*/,
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  int32_t iconType; // w8
  ViewEnemyMaster_o *Master_object; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x1
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  HorizontalQuestInformationIconListComponent___c_c *v33; // x0
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v35; // x23
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Int32_array *v44; // x0
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x4
  Il2CppObject *v48; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B63A95 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserQuestInfoMaster___, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ViewEnemyMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1BE4ACC(&System_Func_ViewEnemyEntity__int__TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo, v13);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__, v16);
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v17);
    byte_4B63A95 = 1;
  }
  entity = 0LL;
  v48 = 0LL;
  this->fields.isNeedInit = 0;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_QuestInformationListViewItem__o *)v18;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  iconType = this->fields.iconType;
  if ( iconType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ViewEnemyMaster___);
    if ( !Master_object )
      goto LABEL_39;
    EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(Master_object, questId, 0LL);
    if ( EntityListFromQuestId )
    {
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
      if ( *(_QWORD *)&EntityListFromQuestId->max_length )
      {
        v33 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
          v33 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        }
        _9__18_0 = (System_Func_object__int__o *)v33->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            v33 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
          }
          v35 = (Il2CppObject *)v33->static_fields->__9;
          _9__18_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_ViewEnemyEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__18_0,
            v35,
            Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__,
            0LL);
          static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__18_0;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
            (int64_t)_9__18_0,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
        }
        v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v32,
                                                                     (System_Func_TSource__TResult__o *)_9__18_0,
                                                                     (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
        v44 = System_Linq_Enumerable__ToArray_int_(
                v43,
                (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
        HorizontalQuestInformationIconListComponent__CreateEnemyList(this, 0, questId, v44, v45);
        return 1;
      }
    }
  }
  else if ( !iconType )
  {
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v25);
      byte_4B61717 = 1;
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
                                           (int64_t)Master_object[2].fields._lookup->fields._values,
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
          v29);
LABEL_33:
        HorizontalQuestInformationIconListComponent__CreateIconGroupList(this, v30);
        return 1;
      }
      goto LABEL_39;
    }
    Master_object = (ViewEnemyMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !Master_object )
      goto LABEL_39;
    Master_object = (ViewEnemyMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &v48,
                                           questId,
                                           (const MethodInfo_31FD818 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v48 )
      {
        HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
          this,
          0,
          (int32_t)v48[1].monitor,
          HIDWORD(v48[1].klass),
          v46);
        goto LABEL_33;
      }
LABEL_39:
      sub_1BE4D28(Master_object, v25);
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
  const MethodInfo_35CF200 *v34; // x2
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

  if ( (byte_4B63A9B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, itms);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B63A9B = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_1BE4D30(Instance, v16);
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
          v34 = *(const MethodInfo_35CF200 **)(*(_QWORD *)(v38 + 192) + 112LL);
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
      v34 = *(const MethodInfo_35CF200 **)(*(_QWORD *)(v32 + 192) + 112LL);
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
                (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v39,
        sub_1BE4A70((PartyOrganizationUtility_o *)withoutQP, (int64_t)v39, v40, v41, v42, v43, v44, v45),
        !v14) )
  {
LABEL_42:
    sub_1BE4D28(Instance, v16);
  }
  v46 = System_Collections_Generic_List_int___ToArray(
          v14,
          (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v46;
  sub_1BE4A70((PartyOrganizationUtility_o *)qps, (int64_t)v46, v47, v48, v49, v50, v51, v52);
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
  const MethodInfo_35CF200 *v39; // x2
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

  if ( (byte_4B63A9A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, svts);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B63A9A = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1BE4D30(Instance, v17);
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
          v39 = *(const MethodInfo_35CF200 **)(*(_QWORD *)(v37 + 192) + 112LL);
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
                                   (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
          v39 = *(const MethodInfo_35CF200 **)(*(_QWORD *)(v40 + 192) + 112LL);
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
                (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v41,
        sub_1BE4A70((PartyOrganizationUtility_o *)withoutCM, (int64_t)v41, v42, v43, v44, v45, v46, v47),
        !v15) )
  {
LABEL_45:
    sub_1BE4D28(Instance, v17);
  }
  v48 = System_Collections_Generic_List_int___ToArray(
          v15,
          (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v48;
  sub_1BE4A70((PartyOrganizationUtility_o *)combineMaterials, (int64_t)v48, v49, v50, v51, v52, v53, v54);
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

  if ( (byte_4B63A99 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_TransitionCalculator_float__Update__, v5);
    sub_1BE4ACC(&Method_TransitionCalculator_float__get_Current__, v6);
    byte_4B63A99 = 1;
  }
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)iconGroupList,
           (const MethodInfo_2F74408 *)Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____) >= 2 )
    {
      questInfoAlphaCalculator = (TransitionCalculator_float__o *)this->fields.questInfoAlphaCalculator;
      if ( questInfoAlphaCalculator )
      {
        TransitionCalculator_float___Update(
          questInfoAlphaCalculator,
          (const MethodInfo_38AA644 *)Method_TransitionCalculator_float__Update__);
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        sub_1BE4D28(Instance, v10);
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B63AA9 & 1) == 0 )
  {
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v1);
    byte_4B63AA9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(HorizontalQuestInformationIconListComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields->__9 = (struct HorizontalQuestInformationIconListComponent___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall HorizontalQuestInformationIconListComponent___c___ctor(
        HorizontalQuestInformationIconListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


__f__AnonymousType5_QuestInformationListViewItem__int__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        QuestInformationListViewItem_o *v,
        int32_t i,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __f__AnonymousType5__v_j__TPar___i_j__TPar__o *v7; // x21

  if ( (byte_4B63AAA & 1) == 0 )
  {
    sub_1BE4ACC(&Method___f__AnonymousType5_QuestInformationListViewItem__int___ctor__, v);
    sub_1BE4ACC(&_f__AnonymousType5_QuestInformationListViewItem__int__TypeInfo, v6);
    byte_4B63AAA = 1;
  }
  v7 = (__f__AnonymousType5__v_j__TPar___i_j__TPar__o *)sub_1BE4D18(_f__AnonymousType5_QuestInformationListViewItem__int__TypeInfo);
  _f__AnonymousType5_object__int____ctor(
    v7,
    (Il2CppObject *)v,
    i,
    (const MethodInfo_312EDDC *)Method___f__AnonymousType5_QuestInformationListViewItem__int___ctor__);
  return (__f__AnonymousType5_QuestInformationListViewItem__int__o *)v7;
}


System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_2(
        HorizontalQuestInformationIconListComponent___c_o *this,
        System_Linq_IGrouping_int____f__AnonymousType5_QuestInformationListViewItem__int___o *g,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  HorizontalQuestInformationIconListComponent___c_c *v7; // x0
  System_Func_object__object__o *_9__19_3; // x20
  Il2CppObject *v9; // x21
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B63AAB & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType5_QuestInformationListViewItem__int___QuestInformationListViewItem___,
      g);
    sub_1BE4ACC(
      &System_Func___f__AnonymousType5_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo,
      v4);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__, v5);
    sub_1BE4ACC(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v6);
    byte_4B63AAB = 1;
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
    _9__19_3 = (System_Func_object__object__o *)sub_1BE4D18(System_Func___f__AnonymousType5_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__19_3,
      v9,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_3 = (struct System_Func___f__AnonymousType5_QuestInformationListViewItem__int___QuestInformationListViewItem__o *)_9__19_3;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__19_3,
      (int64_t)_9__19_3,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return (System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                                     (System_Func_TSource__TResult__o *)_9__19_3,
                                                                                     (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select___f__AnonymousType5_QuestInformationListViewItem__int___QuestInformationListViewItem___);
}


QuestInformationListViewItem_o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_3(
        HorizontalQuestInformationIconListComponent___c_o *this,
        __f__AnonymousType5_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_4B63AAC & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c_o *)sub_1BE4ACC(
                                                                  &Method___f__AnonymousType5_QuestInformationListViewItem__int__get_v__,
                                                                  x);
    byte_4B63AAC = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
  return x->fields._v_i__Field;
}


int32_t __fastcall HorizontalQuestInformationIconListComponent___c___Setup_b__18_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1BE4D28(this, 0LL);
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
        __f__AnonymousType5_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B63AAD & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_1BE4ACC(
                                                                                    &Method___f__AnonymousType5_QuestInformationListViewItem__int__get_i__,
                                                                                    x);
    byte_4B63AAD = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, x);
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

  v2 = this;
  if ( (byte_4B63AAE & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1BE4ACC(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    method);
    byte_4B63AAE = 1;
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
        HorizontalQuestInformationIconListComponent__CreateEnemyList_34811432(
          (HorizontalQuestInformationIconListComponent_o *)this,
          v2->fields.questId,
          v2->fields.enemies,
          v2->fields.veEnts,
          0LL);
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v2->fields.__4__this;
        if ( this )
        {
          HorizontalQuestInformationIconListComponent__CreateIconGroupList(
            (HorizontalQuestInformationIconListComponent_o *)this,
            0LL);
          return;
        }
      }
LABEL_13:
      sub_1BE4D28(this, method);
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
  if ( (byte_4B63AAF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ActionExtensions_Call__, method);
    sub_1BE4ACC(&System_Action_TypeInfo, v3);
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1BE4ACC(
                                                                                    &AssetManager_TypeInfo,
                                                                                    v4);
    byte_4B63AAF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1BE4D28(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  assetStoragesLoadCallback = (Il2CppObject *)_4__this->fields.assetStoragesLoadCallback;
  v8 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v8, assetStoragesLoadCallback, Method_ActionExtensions_Call__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_38704408(loadedAssets, v8, 1, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__2(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BE4D28(this, method);
  ActionExtensions__Call(_4__this->fields.enemyAtlasLoadCallback, 0LL);
}