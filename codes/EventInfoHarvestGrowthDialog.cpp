void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1777C & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1777C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UILabel_o *titleLabel; // x0
  __int64 v10; // x1
  UILabel_o *closeLabel; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v20; // w21

  if ( (byte_4B17779 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17779 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1BCAA44(titleLabel, v8);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v20];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1BCAA3C(titleLabel, v8);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v12, v13, v14, v15, v16, v17);
}


void __fastcall EventInfoHarvestGrowthDialog__OnClickCloseButton(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B1777B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__, v6, v7);
    byte_4B1777B = 1;
  }
  if ( !this->fields.isClose )
  {
    v8 = Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoHarvestGrowthDialog__Open(
        EventInfoHarvestGrowthDialog_o *this,
        EventHarvestGrowthInfo_o *harvestGrowthInfo,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  void *Instance; // x0
  const MethodInfo *v69; // x1
  DataManager_o *v70; // x23
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v72; // x25
  System_String_o *v73; // x19
  _DWORD *v74; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v76; // x25
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Collections_Generic_List_object__o *v80; // x23
  int64_t v81; // x29
  int64_t v82; // x19
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x27
  __int64 v87; // x0
  __int64 v88; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  Il2CppObject *current; // x1
  __int64 v96; // x26
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  int64_t v100; // x25
  __int64 v101; // x1
  __int64 v102; // x0
  __int64 IconImageId; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  System_Predicate_object__o *v107; // x21
  __int64 v108; // x0
  __int64 v109; // x1
  Il2CppObject *v110; // x0
  __int64 v111; // x1
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct System_Object_array *items; // x8
  _QWORD *v119; // x9
  __int64 size; // x10
  Il2CppClass **v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int v128; // w19
  unsigned int v129; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v134; // x25
  int64_t v135; // x1
  UnityEngine_GameObject_o *v136; // x8
  struct UILabel_array *v137; // x20
  int32_t v138; // w8
  UILabel_o *v139; // x24
  __int64 v140; // x26
  ItemIconComponent_o *v141; // x28
  _DWORD *v142; // x29
  UILabel_o *v143; // x27
  int32_t v144; // w3
  System_String_o **v145; // x8
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  System_Text_StringBuilder_o *v149; // x28
  __int64 v150; // x1
  System_String_o *v151; // x21
  __int64 v152; // x1
  __int64 *v153; // x8
  __int64 v154; // x1
  System_String_o *v155; // x29
  long double inited; // q0
  _QWORD *v157; // x21
  __int64 v158; // x8
  __int64 v159; // x0
  __int64 v160; // x0
  System_String_o *v161; // x21
  Il2CppObject *v162; // x0
  __int64 v163; // x1
  UILabel_o *messageLabel; // x21
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  UnityEngine_GameObject_o *v171; // [xsp+10h] [xbp-C0h]
  Il2CppObject *Entity; // [xsp+18h] [xbp-B8h]
  System_String_o *value; // [xsp+20h] [xbp-B0h]
  EventInfoHarvestGrowthDialog_o *v175; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v176; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v177; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B1777A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_object___, harvestGrowthInfo, closeAction);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v20, v21);
    sub_1BCA7E0(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v22, v23);
    sub_1BCA7E0(&int_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Find__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo, v38, v39);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Predicate_GiftEntity__TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v46, v47);
    sub_1BCA7E0(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__, v48, v49);
    sub_1BCA7E0(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v50, v51);
    sub_1BCA7E0(&StringLiteral_5709/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_20507/*"img_common_frame01"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_20090/*"harvestGrowthTitle"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_5708/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_5706/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_5710/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_5707/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, v66, v67);
    byte_4B1777A = 1;
  }
  memset(&v177, 0, sizeof(v177));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v70 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  v72 = DataManager__GetMasterData_object_(
          v70,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_object_(
               v70,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !harvestGrowthInfo )
    goto LABEL_97;
  if ( !Instance )
    goto LABEL_97;
  Instance = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)Instance,
               harvestGrowthInfo->fields.questId,
               harvestGrowthInfo->fields.phase,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  Instance = QuestPhaseEntity__getScriptStr(
               (QuestPhaseEntity_o *)Instance,
               (System_String_o *)StringLiteral_20090/*"harvestGrowthTitle"*/,
               0LL,
               0LL);
  if ( !MasterData_object )
    goto LABEL_97;
  v73 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity(
               (QuestMaster_o *)MasterData_object,
               harvestGrowthInfo->fields.beforeQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  v175 = this;
  if ( !v72 )
    goto LABEL_97;
  v74 = Instance;
  ListById = GiftMaster__GetListById((GiftMaster_o *)v72, *((_DWORD *)Instance + 13), 0LL);
  Instance = QuestMaster__getQuestEntity(
               (QuestMaster_o *)MasterData_object,
               harvestGrowthInfo->fields.afterQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  value = v73;
  v76 = GiftMaster__GetListById((GiftMaster_o *)v72, *((_DWORD *)Instance + 13), 0LL);
  Instance = DataManager__GetMasterData_object_(
               v70,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v74[12],
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v80 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo,
                                                       v77,
                                                       v78,
                                                       v79);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v76 )
    goto LABEL_97;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v176,
    (System_Collections_Generic_List_object__o *)v76,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v81 = 0LL;
  v82 = 0LL;
  v177 = v176;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v177,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v86 = sub_1BCAA2C(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v83, v84, v85);
    System_Object___ctor((Il2CppObject *)v86, 0LL);
    if ( !v86 )
      sub_1BCAA3C(v87, v88);
    current = v177.fields._current;
    *(_QWORD *)(v86 + 16) = v177.fields._current;
    v96 = v86 + 16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 16), (int64_t)current, v89, v90, v91, v92, v93, v94);
    v100 = sub_1BCAA2C(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v97, v98, v99);
    System_Object___ctor((Il2CppObject *)v100, 0LL);
    v102 = *(_QWORD *)(v86 + 16);
    if ( !v102 )
      sub_1BCAA3C(0LL, v101);
    if ( !v100 )
      sub_1BCAA3C(v102, v101);
    *(_QWORD *)(v100 + 16) = *(_QWORD *)(v102 + 20);
    IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)v102, 0LL);
    *(_DWORD *)(v100 + 24) = IconImageId;
    if ( !*(_QWORD *)v96 )
      sub_1BCAA3C(IconImageId, v104);
    *(_DWORD *)(v100 + 28) = *(_DWORD *)(*(_QWORD *)v96 + 28LL);
    v107 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_GiftEntity__TypeInfo, v104, v105, v106);
    System_Predicate_object____ctor(
      v107,
      (Il2CppObject *)v86,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      0LL);
    if ( !ListById )
      sub_1BCAA3C(v108, v109);
    v110 = System_Collections_Generic_List_object___Find(
             (System_Collections_Generic_List_object__o *)ListById,
             (System_Predicate_T__o *)v107,
             (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( !v110 )
      v81 = v100;
    if ( v110 )
      v82 = v100;
    if ( v110 )
    {
      if ( !*(_QWORD *)v96 )
        sub_1BCAA3C(v110, v111);
      if ( !v82 )
LABEL_104:
        sub_1BCAA3C(v110, v111);
      *(_DWORD *)(v82 + 32) = *(_DWORD *)(*(_QWORD *)v96 + 28LL) - HIDWORD(v110[1].monitor);
    }
    else
    {
      if ( !v81 )
        goto LABEL_104;
      *(_DWORD *)(v81 + 32) = 0;
      if ( *(_DWORD *)(v100 + 16) == 1 )
        *(_BYTE *)(v100 + 36) = 1;
      else
        *(_BYTE *)(v100 + 37) = 1;
    }
    if ( !v80 )
      sub_1BCAA3C(v110, v111);
    items = v80->fields._items;
    v119 = Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__;
    ++v80->fields._version;
    if ( !items )
      sub_1BCAA3C(v110, v111);
    size = v80->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v80,
        (Il2CppObject *)v100,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v121 = &items->obj.klass + size;
      v80->fields._size = size + 1;
      v121[4] = (Il2CppClass *)v100;
      sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 4), v100, v112, v113, v114, v115, v116, v117);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v177,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v80 )
LABEL_97:
    sub_1BCAA3C(Instance, v69);
  v128 = v80->fields._size;
  if ( v128 <= 0 )
  {
LABEL_41:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v129 = v128 - 1;
  switch ( v128 )
  {
    case 1:
      p_countIconList01 = &v175->fields.countIconList01;
      p_countLabelList01 = &v175->fields.countLabelList01;
      goto LABEL_45;
    case 2:
      p_countIconList01 = &v175->fields.countIconList02;
      p_countLabelList01 = &v175->fields.countLabelList02;
      goto LABEL_45;
    case 3:
      p_countIconList01 = &v175->fields.countIconList03;
      p_countLabelList01 = &v175->fields.countLabelList03;
      goto LABEL_45;
    case 4:
      p_countIconList01 = &v175->fields.countIconList04;
      p_countLabelList01 = &v175->fields.countLabelList04;
LABEL_45:
      dispObjList = v175->fields.dispObjList;
      if ( !dispObjList )
        goto LABEL_97;
      if ( v129 >= dispObjList->max_length )
        goto LABEL_98;
      messageList = v175->fields.messageList;
      if ( !messageList )
        goto LABEL_97;
      if ( v129 >= messageList->max_length )
        goto LABEL_98;
      v134 = *p_countIconList01;
      v135 = (int64_t)messageList->m_Items[v129];
      v136 = dispObjList->m_Items[v129];
      v137 = *p_countLabelList01;
      v175->fields.messageLabel = (struct UILabel_o *)v135;
      v171 = v136;
      sub_1BCA784((PartyOrganizationUtility_o *)&v175->fields.messageLabel, v135, v122, v123, v124, v125, v126, v127);
      if ( !v134 )
        goto LABEL_97;
      v138 = 0;
      v139 = 0LL;
      break;
    default:
      goto LABEL_41;
  }
  do
  {
    if ( v138 >= v134->max_length )
      goto LABEL_98;
    v140 = v138;
    v141 = v134->m_Items[v138];
    Instance = System_Collections_Generic_List_object___get_Item(
                 v80,
                 v138,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    if ( !v137 )
      goto LABEL_97;
    if ( (unsigned int)v140 >= v137->max_length )
LABEL_98:
      sub_1BCAA44(Instance, v69);
    v142 = Instance;
    if ( !Instance || !v141 )
      goto LABEL_97;
    v143 = v137->m_Items[v140];
    if ( *((int *)Instance + 7) <= 1 )
      v144 = -1;
    else
      v144 = *((_DWORD *)Instance + 7);
    ItemIconComponent__SetGift_38855180(v141, *((_DWORD *)Instance + 4), *((_DWORD *)Instance + 5), v144, 0, 0LL);
    v145 = (System_String_o **)&StringLiteral_20507/*"img_common_frame01"*/;
    if ( v142[4] != 1 )
      v145 = (System_String_o **)&StringLiteral_1/*""*/;
    ItemIconComponent__setFrameSprite(v141, v142[4] == 1, *v145, 0LL);
    v149 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v146, v147, v148);
    System_Text_StringBuilder___ctor(v149, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v150);
    v151 = LocalizationManager__Get((System_String_o *)StringLiteral_5707/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0LL);
    LODWORD(v176.fields._list) = v142[7];
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
    if ( !v149 )
      goto LABEL_97;
    System_Text_StringBuilder__AppendFormat(v149, v151, (Il2CppObject *)Instance, 0LL);
    if ( !*((_BYTE *)v142 + 36) )
      v139 = v143;
    if ( *((_BYTE *)v142 + 36) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v152);
      v153 = &StringLiteral_5708/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_74:
      v155 = LocalizationManager__Get((System_String_o *)*v153, 0LL);
      v157 = Method_System_Array_Empty_object___;
      v158 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v158 )
      {
        sub_1C1C718(Method_System_Array_Empty_object___, v154);
        v158 = v157[7];
      }
      v159 = *(_QWORD *)(v158 + 16);
      if ( (*(_BYTE *)(v159 + 309) & 1) == 0 )
        v159 = sub_1C1C6BC(inited);
      if ( !*(_DWORD *)(v159 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v159, v154);
      v160 = *(_QWORD *)(v157[7] + 16LL);
      if ( (*(_BYTE *)(v160 + 309) & 1) == 0 )
        v160 = sub_1C1C6BC(inited);
      System_Text_StringBuilder__AppendFormat_61569656(v149, v155, **(System_Object_array ***)(v160 + 184), 0LL);
      goto LABEL_83;
    }
    if ( *((_BYTE *)v142 + 37) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v152);
      v153 = &StringLiteral_5709/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_74;
    }
    v143 = v139;
    if ( (int)v142[8] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v152);
      v161 = LocalizationManager__Get((System_String_o *)StringLiteral_5706/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
      LODWORD(v176.fields._list) = v142[8];
      v162 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
      System_Text_StringBuilder__AppendFormat(v149, v161, v162, 0LL);
      v143 = v139;
    }
LABEL_83:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v149->klass->vtable._3_ToString.method)(
                         v149,
                         v149->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v143 )
      goto LABEL_97;
    UILabel__set_text(v143, (System_String_o *)Instance, 0LL);
    v138 = v140 + 1;
  }
  while ( v128 != (_DWORD)v140 + 1 );
  EventInfoHarvestGrowthDialog__Init(v175, v69);
  Instance = v171;
  if ( !v171 )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(v171, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v175, 0LL, 0, 0LL);
  Instance = v175->fields.titleLabel;
  v69 = (const MethodInfo *)value;
  if ( !Instance )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)Instance, value, 0LL);
  messageLabel = v175->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v163);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5710/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0LL);
  if ( !Entity )
    goto LABEL_97;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[2].klass, 0LL);
  if ( !messageLabel )
    goto LABEL_97;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  v175->fields.closeAction = closeAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v175->fields.closeAction,
    (int64_t)closeAction,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
}


void __fastcall EventInfoHarvestGrowthDialog___OnClickCloseButton_b__22_0(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  EventInfoHarvestGrowthDialog__Init(this, v3);
}


void __fastcall EventInfoHarvestGrowthDialog_GiftInfo___ctor(
        EventInfoHarvestGrowthDialog_GiftInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog___c__DisplayClass21_0___ctor(
        EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoHarvestGrowthDialog___c__DisplayClass21_0___Open_b__0(
        EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  struct GiftEntity_o *giftEntity; // x8

  if ( !entity || (giftEntity = this->fields.giftEntity) == 0LL )
    sub_1BCAA3C(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}