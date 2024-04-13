void __fastcall SupportServantEquipListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ListViewSort_o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EC45B & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&SupportServantEquipListViewManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13326/*"SupportServantEquip"*/, v7, v8, v9);
    byte_42EC45B = 1;
  }
  v10 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v10, (System_String_o *)StringLiteral_13326/*"SupportServantEquip"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)SupportServantEquipListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall SupportServantEquipListViewManager___ctor(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SupportServantEquipListViewManager__ChangeIconScale(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  unsigned int scaleType; // w8
  SupportServantEquipListViewManager_o *v9; // x19
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  scaleType = this->fields.scaleType;
  v9 = this;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_7;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_7;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_7:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = v9->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = v9->fields.scaleType,
        (this = (SupportServantEquipListViewManager_o *)v9->fields.sort) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  SupportServantEquipListViewManager__ModifyList(v9, 1, v13);
  SupportServantEquipListViewManager__SetMode_32130752(v9, 2, v14);
  ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__CreateList(
        SupportServantEquipListViewManager_o *this,
        SupportServantData_array *supportServantData,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *v16; // x27
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Int32_array **v50; // x1
  SupportServantData_o **p_supportServantData; // x25
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  SupportServantEquipListViewManager_c *v58; // x0
  System_Int32_array ***static_fields; // x8
  System_Int32_array **v60; // x1
  SupportServantEquipListViewManager_o **p_sort; // x26
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  SupportServantEquipListViewManager_o *v68; // x8
  struct System_Int32_array *supportEquipFilterEventIdList; // x9
  BattleServantConfConponent_o *p_bonusEventIdList; // x0
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  unsigned int sortOrderButton; // w8
  System_Int32_array **normalSizeSeed; // x1
  const MethodInfo *v80; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v81; // x26
  const MethodInfo *v82; // x2
  UserServantEntity_o *v83; // x26
  int64_t Equip; // x24
  SupportServantEquipServantItem_o *v85; // x27
  const MethodInfo *v86; // x3
  System_Int32_array **v87; // x1
  SupportServantEquipListViewManager_o **p_servantItemInfo; // x24
  SupportServantEquipListViewManager_o *v89; // x27
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x2
  System_Int64_array *equipIdList; // x25
  UserServantEntity_array *ServantEquipList; // x26
  __int64 v100; // x8
  unsigned __int64 v101; // x21
  UserServantEntity_o *v102; // x22
  int64_t emptyMessageBase; // x28
  UserServantEntity_o *v104; // x20
  SupportServantEquipListViewManager_o *v105; // x27
  SupportServantEquipListViewItem_o *v106; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v109; // x8
  System_String_o *v110; // x21
  const MethodInfo *v111; // x1
  const MethodInfo *v112; // x1
  __int64 v113; // x0
  SupportServantData_array *v114; // [xsp+0h] [xbp-A0h]
  int32_t v115; // [xsp+8h] [xbp-98h]
  System_Int32_array *v116; // [xsp+10h] [xbp-90h]
  System_Int32_array *v117; // [xsp+18h] [xbp-88h]
  const MethodInfo *v118; // [xsp+30h] [xbp-70h]
  EventUpValSetupInfo_o *eventSetupInfoa; // [xsp+38h] [xbp-68h]
  SupportServantEquipListViewManager_o *v120; // [xsp+40h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  v16 = this;
  if ( (byte_42EC442 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)supportServantData, nowDeckNum, *(_QWORD *)&classPos);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v26, v27, v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&SupportServantEquipListViewManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&SupportServantEquipServantItem_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/, v44, v45, v46);
    this = (SupportServantEquipListViewManager_o *)sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v47, v48, v49);
    byte_42EC442 = 1;
  }
  entity = 0LL;
  if ( !supportServantData )
    goto LABEL_57;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_58;
  v50 = (System_Int32_array **)supportServantData->m_Items[nowDeckNum];
  p_supportServantData = &v16->fields.supportServantData;
  v16->fields.supportServantData = (struct SupportServantData_o *)v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v16->fields.supportServantData,
    v50,
    *(System_String_array ***)&nowDeckNum,
    *(System_String_array ***)&classPos,
    (System_Boolean_array **)eventSetupInfo,
    *(System_Int32_array ***)&nowDeckId,
    fixMainDeckIds,
    fixEventDeckIds);
  this = (SupportServantEquipListViewManager_o *)v16->fields.supportSelectConfirmMenu;
  v16->fields.classPos = classPos;
  v16->fields.isCanNotLongPush = 0;
  if ( !this )
    goto LABEL_57;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, 0LL);
  v58 = SupportServantEquipListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v58 = SupportServantEquipListViewManager_TypeInfo;
  }
  static_fields = (System_Int32_array ***)v58->static_fields;
  v60 = *static_fields;
  v16->fields.sort = (struct ListViewSort_o *)*static_fields;
  p_sort = (SupportServantEquipListViewManager_o **)&v16->fields.sort;
  sub_B5D560((BattleServantConfConponent_o *)&v16->fields.sort, v60, v52, v53, v54, v55, v56, v57);
  if ( !v16->fields.sort )
    goto LABEL_57;
  v16->fields.sort->fields.listViewKind = 1;
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_57;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  v68 = *p_sort;
  if ( eventSetupInfo )
  {
    supportEquipFilterEventIdList = eventSetupInfo->fields.supportEquipFilterEventIdList;
    if ( !supportEquipFilterEventIdList || !v68 )
      goto LABEL_57;
    p_bonusEventIdList = (BattleServantConfConponent_o *)&v16->fields.bonusEventIdList;
    BYTE5(v68->fields.sortKindLabel) = supportEquipFilterEventIdList->max_length != 0;
    v71 = (System_Int32_array **)eventSetupInfo->fields.supportEquipFilterEventIdList;
    v16->fields.bonusEventIdList = (struct System_Int32_array *)v71;
  }
  else
  {
    if ( !v68 )
      goto LABEL_57;
    p_bonusEventIdList = (BattleServantConfConponent_o *)&v16->fields.bonusEventIdList;
    v71 = 0LL;
    BYTE5(v68->fields.sortKindLabel) = 0;
    v16->fields.bonusEventIdList = 0LL;
  }
  sub_B5D560(p_bonusEventIdList, v71, v62, v63, v64, v65, v66, v67);
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_57;
  if ( BYTE5(this->fields.sortKindLabel) )
    ListViewSort__AlignBonusKind2((ListViewSort_o *)this, v16->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
  this = (SupportServantEquipListViewManager_o *)v16->fields.bonusFilterKindButton;
  if ( !this
    || (this = (SupportServantEquipListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL),
        !*p_sort)
    || !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, BYTE5((*p_sort)->fields.sortKindLabel), 0LL),
        !*p_sort) )
  {
LABEL_57:
    sub_B5D69C(this, supportServantData);
  }
  sortOrderButton = (unsigned int)(*p_sort)->fields.sortOrderButton;
  v16->fields.scaleType = sortOrderButton;
  if ( sortOrderButton < 2 )
  {
    normalSizeSeed = (System_Int32_array **)v16->fields.normalSizeSeed;
  }
  else if ( sortOrderButton == 2 )
  {
    normalSizeSeed = (System_Int32_array **)v16->fields.smallSizeSeed;
  }
  else
  {
    if ( sortOrderButton != 3 )
      goto LABEL_31;
    normalSizeSeed = (System_Int32_array **)v16->fields.extremelySmallSizeSeed;
  }
  v16->fields.seed = (struct ListViewItemSeed_o *)normalSizeSeed;
  sub_B5D560((BattleServantConfConponent_o *)&v16->fields.seed, normalSizeSeed, v72, v73, v74, v75, v76, v77);
LABEL_31:
  eventSetupInfoa = eventSetupInfo;
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_57;
  v81 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getServant(*p_supportServantData, classPos, v80);
  if ( !v81 )
    goto LABEL_57;
  v120 = v16;
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    v81,
    &entity,
    (int64_t)this,
    (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  this = (SupportServantEquipListViewManager_o *)*p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_57;
  v83 = entity;
  Equip = SupportServantData__getEquip((SupportServantData_o *)this, classPos, v82);
  v85 = (SupportServantEquipServantItem_o *)sub_B5D694(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v85, v83, Equip, v86);
  v87 = (System_Int32_array **)v85;
  p_servantItemInfo = (SupportServantEquipListViewManager_o **)&v120->fields.servantItemInfo;
  v120->fields.servantItemInfo = v85;
  v89 = v120;
  sub_B5D560((BattleServantConfConponent_o *)&v120->fields.servantItemInfo, v87, v90, v91, v92, v93, v94, v95);
  this = (SupportServantEquipListViewManager_o *)v120->fields.servantItemDraw;
  if ( !this )
    goto LABEL_57;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)this,
    v120->fields.servantItemInfo,
    v96);
  this = (SupportServantEquipListViewManager_o *)v120->fields.servantItemDraw;
  if ( !this )
    goto LABEL_57;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 0, v97);
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_57;
  if ( !this )
    goto LABEL_57;
  equipIdList = (*p_supportServantData)->fields.equipIdList;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v120, 0, 0LL);
  System_Array__IndexOf_int_(fixMainDeckIds, nowDeckId, (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  this = (SupportServantEquipListViewManager_o *)System_Array__IndexOf_int_(
                                                   fixEventDeckIds,
                                                   nowDeckId,
                                                   (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  if ( !ServantEquipList )
    goto LABEL_57;
  v100 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v100 >= 1 )
  {
    v101 = 0LL;
    while ( v101 < (unsigned int)v100 )
    {
      this = *p_servantItemInfo;
      if ( !*p_servantItemInfo )
        goto LABEL_57;
      v102 = ServantEquipList->m_Items[v101];
      this = (SupportServantEquipListViewManager_o *)SupportServantEquipServantItem__get_EquipUserSvtId(
                                                       (SupportServantEquipServantItem_o *)this,
                                                       (const MethodInfo *)supportServantData);
      if ( !*p_servantItemInfo )
        goto LABEL_57;
      emptyMessageBase = (int64_t)(*p_servantItemInfo)->fields.emptyMessageBase;
      v104 = entity;
      v105 = this;
      v106 = (SupportServantEquipListViewItem_o *)sub_B5D694(SupportServantEquipListViewItem_TypeInfo);
      SupportServantEquipListViewItem___ctor(
        v106,
        v101,
        v102,
        (int64_t)v105,
        emptyMessageBase,
        equipIdList,
        v104,
        eventSetupInfoa,
        v114,
        v115,
        v116,
        v117,
        0,
        0,
        v118);
      v89 = v120;
      this = (SupportServantEquipListViewManager_o *)v120->fields.itemList;
      if ( !this )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v106,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v100) = ServantEquipList->max_length;
      if ( (__int64)++v101 >= (int)v100 )
        goto LABEL_48;
    }
LABEL_58:
    v113 = sub_B5D6C8(this);
    sub_B5D668(v113, 0LL);
  }
LABEL_48:
  itemList = v89->fields.itemList;
  if ( !itemList )
    goto LABEL_57;
  emptyMessageLabel = v89->fields.emptyMessageLabel;
  v109 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v110 = *v109;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(v110, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_57;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  SupportServantEquipListViewManager__RefreshListDisp(v89, v111);
  ListViewManager__SortItem((ListViewManager_o *)v89, -1, 0, -1, 0LL);
  SupportServantEquipListViewManager__SetFilterButtonImage(v89, v112);
}


void __fastcall SupportServantEquipListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  SupportServantEquipListViewManager_c *v4; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_42EC43E & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC43E = 1;
  }
  v4 = SupportServantEquipListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v4 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v4->static_fields->sortStatus;
  if ( !sortStatus )
    sub_B5D69C(0LL, v1);
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall SupportServantEquipListViewManager__DestroyList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
}


void __fastcall SupportServantEquipListViewManager__EndCloseSelectFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantEquipListViewManager__EndCloseSelectSortKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__EndConfirmMenu(
        SupportServantEquipListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0
  Il2CppObject *current; // x20
  __int64 v23; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v26; // x0
  __int64 v27; // x1
  Il2CppClass *v28; // x8
  Il2CppType v29; // q0
  SupportServantEquipServantItem_o *servantItemInfo; // x20
  int64_t v31; // x0
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v36; // x1
  SupportServantEquipListViewObject_o *saveObj; // x0
  _BOOL8 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_42EC44D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, flag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v18, v19, v20);
    byte_42EC44D = 1;
  }
  memset(&v45, 0, sizeof(v45));
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    goto LABEL_28;
  SupportSelectConfirmMenu__Close_30177088(supportSelectConfirmMenu, 0LL, 0LL);
  if ( !flag )
    return;
  supportSelectConfirmMenu = (SupportSelectConfirmMenu_o *)this->fields.itemList;
  if ( !supportSelectConfirmMenu )
LABEL_28:
    sub_B5D69C(supportSelectConfirmMenu, flag);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)supportSelectConfirmMenu,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v45.fields.current = (Il2CppObject *)v44.fields.fakeValue;
  *(_OWORD *)&v45.fields.list = *(_OWORD *)&v44.fields.currentCryptoKey;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v38 )
      break;
    current = v45.fields.current;
    if ( v45.fields.current )
    {
      v23 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v45.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (SupportServantEquipListViewItem_c *)v45.fields.current->klass->_2.typeHierarchy[v23 - 1] == SupportServantEquipListViewItem_TypeInfo )
      {
        klass = v45.fields.current[7].klass;
        if ( !klass )
          sub_B5D69C(v38, v39);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v44.fields.fakeValue = byval_arg;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v43 = v44;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v43, 0LL);
        if ( v26 == this->fields.saveId )
        {
          v28 = current[7].klass;
          BYTE1(current[9].monitor) = 1;
          if ( !v28 )
            sub_B5D69C(v26, v27);
          v29 = v28->_1.byval_arg;
          servantItemInfo = this->fields.servantItemInfo;
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v28->_1.name;
          *(Il2CppType *)&v44.fields.fakeValue = v29;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v42 = v44;
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v42, 0LL);
          if ( !servantItemInfo )
            sub_B5D69C(v31, v31);
          SupportServantEquipServantItem__SetEquipTarget(servantItemInfo, v31, v32);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            sub_B5D69C(0LL, v33);
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, v34);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_B5D69C(0LL, v36);
          SupportServantEquipListViewObject__SetupDisp(saveObj, v36);
        }
        else
        {
          BYTE1(current[9].monitor) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  SupportServantEquipListViewManager__RefreshEquipped(this, v40);
  SupportServantEquipListViewManager__RefreshListDisp(this, v41);
}


void __fastcall SupportServantEquipListViewManager__EndSelectFilterKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EC450 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__, v9, v10, v11);
    byte_42EC450 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantEquipListViewManager__SetFilterButtonImage(this, v12);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
}


void __fastcall SupportServantEquipListViewManager__EndSelectSortKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42EC454 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__, v9, v10, v11);
    byte_42EC454 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__CloseServantSortSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantEquipListViewManager__GetAmountSortValue(
        SupportServantEquipListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v22; // x19
  Il2CppObject *current; // x0
  __int64 v24; // x9
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_42EC457 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v18, v19, v20);
    byte_42EC457 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v31 = v30;
  v22 = 0LL;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v31.fields.current;
    if ( !v31.fields.current )
      goto LABEL_17;
    v24 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v31.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (SupportServantEquipListViewItem_c *)v31.fields.current->klass->_2.typeHierarchy[v24 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B5D990(v31.fields.current);
LABEL_17:
      sub_B5D69C(current, v28);
    }
    klass = v31.fields.current[7].klass;
    if ( !klass )
      sub_B5D69C(v31.fields.current, SupportServantEquipListViewItem_TypeInfo);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v32.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v32, 0LL) == svtId )
      ++v22;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v22;
}


SupportServantEquipListViewItem_o *__fastcall SupportServantEquipListViewManager__GetItem(
        SupportServantEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EC444 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v6, v7, v8);
    byte_42EC444 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (SupportServantEquipListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == SupportServantEquipListViewItem_TypeInfo )
    return (SupportServantEquipListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall SupportServantEquipListViewManager__GetScaleButtonSpriteName(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall SupportServantEquipListViewManager__GetSelect(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x11
  int32_t klass_high; // w19
  int v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC44A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v14, v15, v16);
    byte_42EC44A = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    if ( !v24.fields.current
      || (v20 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v20)
      || (SupportServantEquipListViewItem_c *)v24.fields.current->klass->_2.typeHierarchy[v20 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B5D69C(v18, v19);
    }
    if ( BYTE1(v24.fields.current[9].monitor) )
    {
      klass_high = HIDWORD(v24.fields.current[1].klass);
      v22 = 3;
      goto LABEL_12;
    }
  }
  klass_high = 0;
  v22 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v22 + 1) >> 2 )
    return klass_high;
  else
    return -1;
}


SupportServantEquipListViewItem_o *__fastcall SupportServantEquipListViewManager__GetSelectItem(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x19
  __int64 v21; // x10
  char v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC44B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v14, v15, v16);
    byte_42EC44B = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current
      || (v21 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21)
      || (SupportServantEquipListViewItem_c *)v24.fields.current->klass->_2.typeHierarchy[v21 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B5D69C(v18, v19);
    }
    if ( BYTE1(v24.fields.current[9].monitor) )
    {
      v22 = 2;
      goto LABEL_12;
    }
  }
  v22 = 0;
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( ((v22 + 2) & 3) != 0 )
    return 0LL;
  else
    return (SupportServantEquipListViewItem_o *)current;
}


bool __fastcall SupportServantEquipListViewManager__GetSwapChoiceList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC459 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v27, v28, v29);
    byte_42EC459 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (SupportServantEquipListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != SupportServantEquipListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && BYTE1(v43[1].fields.sortValue2) )
      {
        if ( BYTE4(v43[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
    *unchoiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v51;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


bool __fastcall SupportServantEquipListViewManager__GetSwapLockList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  Il2CppType v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC458 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v27, v28, v29);
    byte_42EC458 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (SupportServantEquipListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != SupportServantEquipListViewItem_TypeInfo )
      {
        break;
      }
      klass = v43[1].klass;
      if ( klass && LOBYTE(v43[1].fields.sortValue2) )
      {
        if ( BYTE3(v43[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = klass->_1.byval_arg;
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
    *unlockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v51;
    sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


void __fastcall SupportServantEquipListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  SupportServantEquipListViewManager_c *v4; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_42EC43F & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC43F = 1;
  }
  v4 = SupportServantEquipListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v4 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v4->static_fields->sortStatus;
  if ( !sortStatus )
    sub_B5D69C(0LL, v1);
  ListViewSort__InitLoad(sortStatus, 0LL);
}


void __fastcall SupportServantEquipListViewManager__ModifyList(
        SupportServantEquipListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v26; // x21
  signed __int64 size; // x27
  unsigned int v28; // w26
  int64_t v29; // x20
  __int64 v30; // x8
  UserServantEntity_o **v31; // x20
  __int64 v32; // t1
  __int128 v33; // q0
  int64_t v34; // x22
  unsigned __int64 v35; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x23
  SupportServantEquipListViewItem_o *v37; // x23
  __int64 v38; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v40; // q0
  UserServantEntity_o *v41; // x22
  int64_t EquipUserSvtId; // x0
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x1
  __int64 v45; // x0
  unsigned __int64 v46; // x22
  signed __int64 v47; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v48; // x20
  ListViewItem_o *v49; // x20
  __int64 v50; // x10
  UnityEngine_Object_o *viewObject; // x21
  int64_t v53; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+50h] [xbp-70h]

  if ( (byte_42EC443 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v20, v21, v22);
    byte_42EC443 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_51;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_51;
  v26 = *(_QWORD *)(Instance + 24);
  if ( (int)v26 >= 1 )
  {
    size = itemList->fields._size;
    v28 = 0;
    v53 = Instance;
    while ( 1 )
    {
      v29 = Instance + 8LL * (int)v28;
      v32 = *(_QWORD *)(v29 + 32);
      v31 = (UserServantEntity_o **)(v29 + 32);
      v30 = v32;
      if ( !v32 )
        goto LABEL_51;
      v33 = *(_OWORD *)(v30 + 32);
      *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
      *(_OWORD *)&v56.fields.fakeValue = v33;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v55 = v56;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v55, 0LL);
      if ( (int)size >= 1 )
      {
        v34 = Instance;
        v35 = 0LL;
        while ( 1 )
        {
          v36 = this->fields.itemList;
          if ( !v36 )
            goto LABEL_51;
          if ( v35 >= (unsigned int)v36->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v37 = (SupportServantEquipListViewItem_o *)v36->fields._items->m_Items[v35];
          if ( !v37 )
            goto LABEL_51;
          v38 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v38
            || (SupportServantEquipListViewItem_c *)v37->klass->_2.typeHierarchy[v38 - 1] != SupportServantEquipListViewItem_TypeInfo )
          {
            goto LABEL_51;
          }
          userSvtEntity = v37->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v40 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v56.fields.fakeValue = v40;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v54 = v56;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v54, 0LL);
            if ( Instance == v34 )
              break;
          }
          if ( (__int64)++v35 >= size )
            goto LABEL_32;
        }
        if ( v28 >= *(_DWORD *)(v53 + 24) )
        {
LABEL_34:
          v45 = sub_B5D6C8(Instance);
          sub_B5D668(v45, 0LL);
        }
        Instance = (int64_t)this->fields.servantItemInfo;
        if ( !Instance )
          goto LABEL_51;
        v41 = *v31;
        EquipUserSvtId = SupportServantEquipServantItem__get_EquipUserSvtId(
                           (SupportServantEquipServantItem_o *)Instance,
                           v24);
        SupportServantEquipListViewItem__ModifyItem(v37, v41, EquipUserSvtId, v43);
        if ( !isIconSizeChange )
        {
          SupportServantEquipListViewItem__ModifyLockItem(v37, v24);
          SupportServantEquipListViewItem__ModifyChoiceItem(v37, v44);
        }
      }
LABEL_32:
      if ( (int)++v28 >= (int)v26 )
        break;
      Instance = v53;
      if ( v28 >= *(_DWORD *)(v53 + 24) )
        goto LABEL_34;
    }
    if ( isIconSizeChange )
    {
      v46 = 0LL;
      v47 = (int)v26;
      while ( 1 )
      {
        v48 = this->fields.itemList;
        if ( !v48 )
          break;
        if ( v46 >= (unsigned int)v48->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v49 = v48->fields._items->m_Items[v46];
        if ( v49 )
        {
          v50 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v49->klass->_2.bitflags2 + 1) >= (unsigned int)v50
            && (SupportServantEquipListViewItem_c *)v49->klass->_2.typeHierarchy[v50 - 1] == SupportServantEquipListViewItem_TypeInfo )
          {
            viewObject = (UnityEngine_Object_o *)v49->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = (int64_t)v49->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v49, this->fields.seed, 0LL);
            }
          }
        }
        if ( (__int64)++v46 >= v47 )
          return;
      }
LABEL_51:
      sub_B5D69C(Instance, v24);
    }
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickBonusFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42EC452 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC452 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B5D69C(0LL, v5);
    ListViewSort__IncBonusKind2(sort, this->fields.bonusEventIdList, 0LL, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickDecide(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  const MethodInfo *v10; // x1
  int32_t Select; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v10);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Select, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickEquipExplanation(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  const MethodInfo *v10; // x1
  int32_t Select; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v10);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Select, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EC44F & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SupportServantEquipListViewManager_EndSelectFilterKind__, v11, v12, v13);
    byte_42EC44F = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantFilterSelectMenu_18209116(v16, 5, sort, (ListViewManager_o *)this, v17, -1, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantEquipListViewManager__OnClickSelectDetail(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  const MethodInfo *v10; // x1
  int32_t Select; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    Select = SupportServantEquipListViewManager__GetSelect(this, v10);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Select, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSelectListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 3, Index, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSortAscendingOrder(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EC455 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC455 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSortKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantSortSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EC453 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SupportServantEquipListViewManager_EndSelectSortKind__, v11, v12, v13);
    byte_42EC453 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantSortSelectMenu(v16, 4, sort, 0, v17, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnLongPushListView(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t Index; // w2

  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
        return;
      }
    }
    sub_B5D69C(scrollView, obj);
  }
}


void __fastcall SupportServantEquipListViewManager__OnMoveEnd(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EC449 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC449 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall SupportServantEquipListViewManager__RefreshEquipped(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x26
  __int64 v25; // x10
  UnityEngine_Object_o *monitor; // x20
  void *v27; // x8
  __int64 v28; // x11
  UnityEngine_Object_o *v29; // x20
  _BOOL8 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EC44E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&SupportServantEquipListViewObject_TypeInfo, v20, v21, v22);
    byte_42EC44E = 1;
  }
  memset(&v36, 0, sizeof(v36));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v36.fields.current;
    if ( v36.fields.current )
    {
      v25 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v36.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v25
        && (SupportServantEquipListViewItem_c *)v36.fields.current->klass->_2.typeHierarchy[v25 - 1] == SupportServantEquipListViewItem_TypeInfo
        && BYTE2(v36.fields.current[9].monitor) )
      {
        monitor = (UnityEngine_Object_o *)v36.fields.current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          v27 = current[6].monitor;
          if ( v27
            && (v28 = *(&SupportServantEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) >= (unsigned int)v28) )
          {
            if ( *(SupportServantEquipListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v28 - 8) == SupportServantEquipListViewObject_TypeInfo )
              v29 = (UnityEngine_Object_o *)current[6].monitor;
            else
              v29 = 0LL;
          }
          else
          {
            v29 = 0LL;
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v30 = UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
          if ( v30 )
          {
            if ( !v29 )
              sub_B5D69C(v30, v31);
            UnityEngine_Vector3__get_zero(0LL);
            if ( (byte_42EC463 & 1) == 0 )
            {
              sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, (_DWORD)v32, v33, v34);
              byte_42EC463 = 1;
            }
            SupportServantEquipListViewObject__SetupDisp((SupportServantEquipListViewObject_o *)v29, v32);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SupportServantEquipListViewManager__RefreshListDisp(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_SupportServantEquipListViewObject__o *ObjectList; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC445 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42EC445 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ObjectList = SupportServantEquipListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B5D69C(0LL, v15);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B5D69C(0LL, v16);
    ((void (*)(void))v17.fields.current->klass->vtable[9].method)();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__RequestListObject(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC447 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_SupportServantEquipListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EC447 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantEquipListViewObject__Init(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__RequestListObject_32153072(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC448 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_SupportServantEquipListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EC448 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantEquipListViewObject__Init(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


void __fastcall SupportServantEquipListViewManager__SetFilterButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EC451 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EC451 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
}


void __fastcall SupportServantEquipListViewManager__SetMode(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        SupportServantEquipListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_32130752(this, mode, v10);
}


void __fastcall SupportServantEquipListViewManager__SetMode_32130752(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v8; // x2
  int32_t v9; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_15;
  SupportServantEquipServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, v6);
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw )
    goto LABEL_15;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 0LL) )
    goto LABEL_7;
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 1, 0LL),
        (servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  switch ( mode )
  {
    case 3:
      v9 = 4;
      goto LABEL_13;
    case 2:
      v9 = 3;
      goto LABEL_13;
    case 1:
      v9 = 2;
LABEL_13:
      SupportServantEquipListViewManager__RequestListObject_32153072(this, v9, v8);
      break;
  }
}


void __fastcall SupportServantEquipListViewManager__SetMode_32153016(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_32130752(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__SetObjectItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_42EC446 & 1) == 0 )
  {
    this = (SupportServantEquipListViewManager_o *)sub_B5D5C4(
                                                     &SupportServantEquipListViewObject_TypeInfo,
                                                     (_DWORD)obj,
                                                     (_DWORD)item,
                                                     method);
    byte_42EC446 = 1;
  }
  if ( !obj
    || (v6 = *(&SupportServantEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (SupportServantEquipListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportServantEquipListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  SupportServantEquipListViewObject__Init(
    (SupportServantEquipListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall SupportServantEquipListViewManager__SetSortButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v39; // x20

  if ( (byte_42EC456 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EC456 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_43;
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_43;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_43;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
      v31 = this->fields.sort;
      if ( !v31 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v31->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
      v36 = this->fields.sort;
      if ( !v36 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v36->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v37 = v33;
    else
      v37 = v34;
    UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v39 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34067136(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v39 )
      {
        UILabel__set_text(v39, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B5D69C(sort, v24);
  }
}


void __fastcall SupportServantEquipListViewManager__add_callbackFunc(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SupportServantEquipListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListViewManager_o *v11; // x0
  SupportServantEquipListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC43A & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC43A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v8->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportServantEquipListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportServantEquipListViewManager__add_callbackFunc2(
        SupportServantEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC43C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC43C = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportServantEquipListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void __fastcall SupportServantEquipListViewManager__checkEquipChange(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewItem_o *selectItem,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_o *v9; // x19
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  struct ListViewObject_o *viewObject; // x8
  __int64 v23; // x11
  System_Int32_array **v24; // x1
  struct SupportServantData_o *supportServantData; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v27; // q1
  struct System_Int64_array *equipIdList; // x21
  const MethodInfo *v29; // x2
  int max_length; // w8
  SupportServantEquipListViewManager_o *v31; // x20
  int32_t v32; // w22
  const MethodInfo *v33; // x2
  System_String_o *v34; // x21
  System_String_o *ClassName; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x22
  System_String_o *v37; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v38; // x23
  __int64 v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-50h]

  v9 = this;
  if ( (byte_42EC44C & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SupportServantEquipListViewManager_EndConfirmMenu__, v13, v14, v15);
    sub_B5D5C4(&SupportServantEquipListViewObject_TypeInfo, v16, v17, v18);
    this = (SupportServantEquipListViewManager_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42EC44C = 1;
  }
  if ( !selectItem )
    goto LABEL_28;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (v23 = *(&SupportServantEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
  {
    v24 = (SupportServantEquipListViewObject_c *)viewObject->klass->_2.typeHierarchy[v23 - 1] == SupportServantEquipListViewObject_TypeInfo
        ? (System_Int32_array **)selectItem->fields.viewObject
        : 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  v9->fields.saveObj = (struct SupportServantEquipListViewObject_o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.saveObj,
    v24,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  supportServantData = v9->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_28;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_28;
  v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  equipIdList = supportServantData->fields.equipIdList;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v27;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v40 = v41;
  this = (SupportServantEquipListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                   &v40,
                                                   0LL);
  if ( !equipIdList )
    goto LABEL_28;
  max_length = equipIdList->max_length;
  if ( max_length < 1 )
    return;
  v31 = this;
  v32 = 0;
  while ( 1 )
  {
    if ( v32 >= (unsigned int)max_length )
    {
      v39 = sub_B5D6C8(this);
      sub_B5D668(v39, 0LL);
    }
    if ( (SupportServantEquipListViewManager_o *)equipIdList->m_Items[v32] == this )
      break;
    if ( ++v32 >= max_length )
      return;
  }
  this = (SupportServantEquipListViewManager_o *)v9->fields.supportServantData;
  if ( !this )
    goto LABEL_28;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getClassName(
                                                   (SupportServantData_o *)this,
                                                   v32,
                                                   v29);
  if ( !v9->fields.supportServantData )
    goto LABEL_28;
  v34 = (System_String_o *)this;
  ClassName = SupportServantData__getClassName(v9->fields.supportServantData, v9->fields.classPos, v33);
  v9->fields.saveId = (int64_t)v31;
  v9->fields.savePos = v32;
  supportSelectConfirmMenu = v9->fields.supportSelectConfirmMenu;
  v37 = ClassName;
  v38 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B5D694(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
  SupportSelectConfirmMenu_CallbackFunc___ctor(
    v38,
    (Il2CppObject *)v9,
    Method_SupportServantEquipListViewManager_EndConfirmMenu__,
    0LL);
  if ( !supportSelectConfirmMenu )
LABEL_28:
    sub_B5D69C(this, selectItem);
  SupportSelectConfirmMenu__Open_30175492(supportSelectConfirmMenu, 5, v38, v34, v37, 0LL);
}


SupportServantEquipServantItemDraw_o *__fastcall SupportServantEquipListViewManager__getServantItemDraw(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemDraw;
}


SupportServantEquipServantItem_o *__fastcall SupportServantEquipListViewManager__getServantItemInfo(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemInfo;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *__fastcall SupportServantEquipListViewManager__get_ClippingObjectList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  SupportServantEquipListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EC441 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC441 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (SupportServantEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)current,
                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)SupportServantEquipListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v29;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *__fastcall SupportServantEquipListViewManager__get_ObjectList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EC440 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC440 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v29;
}


void __fastcall SupportServantEquipListViewManager__onClickSelectedItem(
        SupportServantEquipListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportServantEquipListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 4, Index, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__remove_callbackFunc(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct SupportServantEquipListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC43B & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC43B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v8->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportServantEquipListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall SupportServantEquipListViewManager__remove_callbackFunc2(
        SupportServantEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42EC43D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC43D = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  SupportServantEquipListViewManager__DeleteContinueData(v11);
}


void __fastcall SupportServantEquipListViewManager__resetEquipItemBaseFlag(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x8
  __int64 v19; // x11
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC45A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&SupportServantEquipListViewItem_TypeInfo, v14, v15, v16);
    byte_42EC45A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v20 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current
      || (v19 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v22.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v19)
      || (SupportServantEquipListViewItem_c *)v22.fields.current->klass->_2.typeHierarchy[v19 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B5D69C(v20, v21);
    }
    if ( (SupportServantEquipListViewItem_c *)v22.fields.current->klass->_2.typeHierarchy[*(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2
                                                                                          + 1)
                                                                                        - 1] != SupportServantEquipListViewItem_TypeInfo )
      current = 0LL;
    BYTE1(current[9].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SupportServantEquipListViewManager__setCanLongPushFlag(
        SupportServantEquipListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager_CallbackFunc___ctor(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall SupportServantEquipListViewManager_CallbackFunc__BeginInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E6490 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&SupportServantEquipListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E6490 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(SupportServantEquipListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall SupportServantEquipListViewManager_CallbackFunc__EndInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager_CallbackFunc__Invoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  SupportServantEquipListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  SupportServantEquipListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  SupportServantEquipListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SupportServantEquipListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}