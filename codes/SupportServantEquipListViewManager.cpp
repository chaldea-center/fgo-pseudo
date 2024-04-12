void __fastcall SupportServantEquipListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42B38E1 & 1) == 0 )
  {
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&SupportServantEquipListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_13267/*"SupportServantEquip"*/);
    byte_42B38E1 = 1;
  }
  v1 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v1, (System_String_o *)StringLiteral_13267/*"SupportServantEquip"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)SupportServantEquipListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52920(
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
    sub_B52A5C(this, method);
  }
  ListViewSort__Save((ListViewSort_o *)this, 0LL);
  SupportServantEquipListViewManager__ModifyList(v9, 1, v13);
  SupportServantEquipListViewManager__SetMode_31802700(v9, 2, v14);
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
  System_Int32_array **v17; // x1
  SupportServantData_o **p_supportServantData; // x25
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  SupportServantEquipListViewManager_c *v25; // x0
  System_Int32_array ***static_fields; // x8
  System_Int32_array **v27; // x1
  SupportServantEquipListViewManager_o **p_sort; // x26
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  SupportServantEquipListViewManager_o *v35; // x8
  struct System_Int32_array *supportEquipFilterEventIdList; // x9
  BattleServantConfConponent_o *p_bonusEventIdList; // x0
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  unsigned int sortOrderButton; // w8
  System_Int32_array **normalSizeSeed; // x1
  const MethodInfo *v47; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v48; // x26
  const MethodInfo *v49; // x2
  UserServantEntity_o *v50; // x26
  int64_t Equip; // x24
  SupportServantEquipServantItem_o *v52; // x27
  const MethodInfo *v53; // x3
  System_Int32_array **v54; // x1
  SupportServantEquipListViewManager_o **p_servantItemInfo; // x24
  SupportServantEquipListViewManager_o *v56; // x27
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x2
  System_Int64_array *equipIdList; // x25
  UserServantEntity_array *ServantEquipList; // x26
  __int64 v67; // x8
  unsigned __int64 v68; // x21
  UserServantEntity_o *v69; // x22
  int64_t emptyMessageBase; // x28
  UserServantEntity_o *v71; // x20
  SupportServantEquipListViewManager_o *v72; // x27
  SupportServantEquipListViewItem_o *v73; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v76; // x8
  System_String_o *v77; // x21
  const MethodInfo *v78; // x1
  const MethodInfo *v79; // x1
  __int64 v80; // x0
  SupportServantData_array *v81; // [xsp+0h] [xbp-A0h]
  int32_t v82; // [xsp+8h] [xbp-98h]
  System_Int32_array *v83; // [xsp+10h] [xbp-90h]
  System_Int32_array *v84; // [xsp+18h] [xbp-88h]
  const MethodInfo *v85; // [xsp+30h] [xbp-70h]
  EventUpValSetupInfo_o *eventSetupInfoa; // [xsp+38h] [xbp-68h]
  SupportServantEquipListViewManager_o *v87; // [xsp+40h] [xbp-60h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  v16 = this;
  if ( (byte_42B38C8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    sub_B52984(&SupportServantEquipListViewManager_TypeInfo);
    sub_B52984(&SupportServantEquipServantItem_TypeInfo);
    sub_B52984(&StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/);
    this = (SupportServantEquipListViewManager_o *)sub_B52984(&StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_42B38C8 = 1;
  }
  entity = 0LL;
  if ( !supportServantData )
    goto LABEL_57;
  if ( supportServantData->max_length <= nowDeckNum )
    goto LABEL_58;
  v17 = (System_Int32_array **)supportServantData->m_Items[nowDeckNum];
  p_supportServantData = &v16->fields.supportServantData;
  v16->fields.supportServantData = (struct SupportServantData_o *)v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&v16->fields.supportServantData,
    v17,
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
  v25 = SupportServantEquipListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v25 = SupportServantEquipListViewManager_TypeInfo;
  }
  static_fields = (System_Int32_array ***)v25->static_fields;
  v27 = *static_fields;
  v16->fields.sort = (struct ListViewSort_o *)*static_fields;
  p_sort = (SupportServantEquipListViewManager_o **)&v16->fields.sort;
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.sort, v27, v19, v20, v21, v22, v23, v24);
  if ( !v16->fields.sort )
    goto LABEL_57;
  v16->fields.sort->fields.listViewKind = 1;
  this = *p_sort;
  if ( !*p_sort )
    goto LABEL_57;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  v35 = *p_sort;
  if ( eventSetupInfo )
  {
    supportEquipFilterEventIdList = eventSetupInfo->fields.supportEquipFilterEventIdList;
    if ( !supportEquipFilterEventIdList || !v35 )
      goto LABEL_57;
    p_bonusEventIdList = (BattleServantConfConponent_o *)&v16->fields.bonusEventIdList;
    BYTE5(v35->fields.sortKindLabel) = supportEquipFilterEventIdList->max_length != 0;
    v38 = (System_Int32_array **)eventSetupInfo->fields.supportEquipFilterEventIdList;
    v16->fields.bonusEventIdList = (struct System_Int32_array *)v38;
  }
  else
  {
    if ( !v35 )
      goto LABEL_57;
    p_bonusEventIdList = (BattleServantConfConponent_o *)&v16->fields.bonusEventIdList;
    v38 = 0LL;
    BYTE5(v35->fields.sortKindLabel) = 0;
    v16->fields.bonusEventIdList = 0LL;
  }
  sub_B52920(p_bonusEventIdList, v38, v29, v30, v31, v32, v33, v34);
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
    sub_B52A5C(this, supportServantData);
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
  sub_B52920((BattleServantConfConponent_o *)&v16->fields.seed, normalSizeSeed, v39, v40, v41, v42, v43, v44);
LABEL_31:
  eventSetupInfoa = eventSetupInfo;
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_57;
  v48 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getServant(*p_supportServantData, classPos, v47);
  if ( !v48 )
    goto LABEL_57;
  v87 = v16;
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    v48,
    &entity,
    (int64_t)this,
    (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  this = (SupportServantEquipListViewManager_o *)*p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_57;
  v50 = entity;
  Equip = SupportServantData__getEquip((SupportServantData_o *)this, classPos, v49);
  v52 = (SupportServantEquipServantItem_o *)sub_B52A54(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v52, v50, Equip, v53);
  v54 = (System_Int32_array **)v52;
  p_servantItemInfo = (SupportServantEquipListViewManager_o **)&v87->fields.servantItemInfo;
  v87->fields.servantItemInfo = v52;
  v56 = v87;
  sub_B52920((BattleServantConfConponent_o *)&v87->fields.servantItemInfo, v54, v57, v58, v59, v60, v61, v62);
  this = (SupportServantEquipListViewManager_o *)v87->fields.servantItemDraw;
  if ( !this )
    goto LABEL_57;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)this,
    v87->fields.servantItemInfo,
    v63);
  this = (SupportServantEquipListViewManager_o *)v87->fields.servantItemDraw;
  if ( !this )
    goto LABEL_57;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 0, v64);
  UserGameMaster__getSelfUserGame(0LL);
  this = (SupportServantEquipListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportServantEquipListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !*p_supportServantData )
    goto LABEL_57;
  if ( !this )
    goto LABEL_57;
  equipIdList = (*p_supportServantData)->fields.equipIdList;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)v87, 0, 0LL);
  System_Array__IndexOf_int_(fixMainDeckIds, nowDeckId, (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
  this = (SupportServantEquipListViewManager_o *)System_Array__IndexOf_int_(
                                                   fixEventDeckIds,
                                                   nowDeckId,
                                                   (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___);
  if ( !ServantEquipList )
    goto LABEL_57;
  v67 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v67 >= 1 )
  {
    v68 = 0LL;
    while ( v68 < (unsigned int)v67 )
    {
      this = *p_servantItemInfo;
      if ( !*p_servantItemInfo )
        goto LABEL_57;
      v69 = ServantEquipList->m_Items[v68];
      this = (SupportServantEquipListViewManager_o *)SupportServantEquipServantItem__get_EquipUserSvtId(
                                                       (SupportServantEquipServantItem_o *)this,
                                                       (const MethodInfo *)supportServantData);
      if ( !*p_servantItemInfo )
        goto LABEL_57;
      emptyMessageBase = (int64_t)(*p_servantItemInfo)->fields.emptyMessageBase;
      v71 = entity;
      v72 = this;
      v73 = (SupportServantEquipListViewItem_o *)sub_B52A54(SupportServantEquipListViewItem_TypeInfo);
      SupportServantEquipListViewItem___ctor(
        v73,
        v68,
        v69,
        (int64_t)v72,
        emptyMessageBase,
        equipIdList,
        v71,
        eventSetupInfoa,
        v81,
        v82,
        v83,
        v84,
        0,
        0,
        v85);
      v56 = v87;
      this = (SupportServantEquipListViewManager_o *)v87->fields.itemList;
      if ( !this )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v67) = ServantEquipList->max_length;
      if ( (__int64)++v68 >= (int)v67 )
        goto LABEL_48;
    }
LABEL_58:
    v80 = sub_B52A88(this);
    sub_B52A28(v80, 0LL);
  }
LABEL_48:
  itemList = v56->fields.itemList;
  if ( !itemList )
    goto LABEL_57;
  emptyMessageLabel = v56->fields.emptyMessageLabel;
  v76 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v77 = *v76;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(v77, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_57;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)this, 0LL);
  SupportServantEquipListViewManager__RefreshListDisp(v56, v78);
  ListViewManager__SortItem((ListViewManager_o *)v56, -1, 0, -1, 0LL);
  SupportServantEquipListViewManager__SetFilterButtonImage(v56, v79);
}


void __fastcall SupportServantEquipListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_42B38C4 & 1) == 0 )
  {
    sub_B52984(&SupportServantEquipListViewManager_TypeInfo);
    byte_42B38C4 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_B52A5C(0LL, v1);
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
    sub_B52A5C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
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
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0
  Il2CppObject *current; // x20
  __int64 v7; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v10; // x0
  __int64 v11; // x1
  Il2CppClass *v12; // x8
  Il2CppType v13; // q0
  SupportServantEquipServantItem_o *servantItemInfo; // x20
  int64_t v15; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v20; // x1
  SupportServantEquipListViewObject_o *saveObj; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_42B38D3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    byte_42B38D3 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    goto LABEL_28;
  SupportSelectConfirmMenu__Close_29810664(supportSelectConfirmMenu, 0LL, 0LL);
  if ( !flag )
    return;
  supportSelectConfirmMenu = (SupportSelectConfirmMenu_o *)this->fields.itemList;
  if ( !supportSelectConfirmMenu )
LABEL_28:
    sub_B52A5C(supportSelectConfirmMenu, flag);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)supportSelectConfirmMenu,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v29.fields.current = (Il2CppObject *)v28.fields.fakeValue;
  *(_OWORD *)&v29.fields.list = *(_OWORD *)&v28.fields.currentCryptoKey;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v22 )
      break;
    current = v29.fields.current;
    if ( v29.fields.current )
    {
      v7 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v29.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v7
        && (SupportServantEquipListViewItem_c *)v29.fields.current->klass->_2.typeHierarchy[v7 - 1] == SupportServantEquipListViewItem_TypeInfo )
      {
        klass = v29.fields.current[7].klass;
        if ( !klass )
          sub_B52A5C(v22, v23);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v28.fields.fakeValue = byval_arg;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v27 = v28;
        v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v27, 0LL);
        if ( v10 == this->fields.saveId )
        {
          v12 = current[7].klass;
          BYTE1(current[9].monitor) = 1;
          if ( !v12 )
            sub_B52A5C(v10, v11);
          v13 = v12->_1.byval_arg;
          servantItemInfo = this->fields.servantItemInfo;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v12->_1.name;
          *(Il2CppType *)&v28.fields.fakeValue = v13;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v26 = v28;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v26, 0LL);
          if ( !servantItemInfo )
            sub_B52A5C(v15, v15);
          SupportServantEquipServantItem__SetEquipTarget(servantItemInfo, v15, v16);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            sub_B52A5C(0LL, v17);
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, v18);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_B52A5C(0LL, v20);
          SupportServantEquipListViewObject__SetupDisp(saveObj, v20);
        }
        else
        {
          BYTE1(current[9].monitor) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  SupportServantEquipListViewManager__RefreshEquipped(this, v24);
  SupportServantEquipListViewManager__RefreshListDisp(this, v25);
}


void __fastcall SupportServantEquipListViewManager__EndSelectFilterKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42B38D6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__);
    byte_42B38D6 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    SupportServantEquipListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_B52A5C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu(Instance, v7, 0LL);
}


void __fastcall SupportServantEquipListViewManager__EndSelectSortKind(
        SupportServantEquipListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B38DA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__);
    byte_42B38DA = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_SupportServantEquipListViewManager_EndCloseSelectSortKind__,
    0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
  CommonUI__CloseServantSortSelectMenu(Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall SupportServantEquipListViewManager__GetAmountSortValue(
        SupportServantEquipListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t v6; // x19
  Il2CppObject *current; // x0
  __int64 v8; // x9
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42B38DD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    byte_42B38DD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v15 = v14;
  v6 = 0LL;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v15.fields.current;
    if ( !v15.fields.current )
      goto LABEL_17;
    v8 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (SupportServantEquipListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v8 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B52D50(v15.fields.current);
LABEL_17:
      sub_B52A5C(current, v12);
    }
    klass = v15.fields.current[7].klass;
    if ( !klass )
      sub_B52A5C(v15.fields.current, SupportServantEquipListViewItem_TypeInfo);
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v16.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL) == svtId )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v6;
}


SupportServantEquipListViewItem_o *__fastcall SupportServantEquipListViewManager__GetItem(
        SupportServantEquipListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B38CA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    byte_42B38CA = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (SupportServantEquipListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == SupportServantEquipListViewItem_TypeInfo )
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
    sub_B52A5C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall SupportServantEquipListViewManager__GetSelect(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x11
  int32_t klass_high; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B38D0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    byte_42B38D0 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v10.fields.current
      || (v6 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v10.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v6)
      || (SupportServantEquipListViewItem_c *)v10.fields.current->klass->_2.typeHierarchy[v6 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B52A5C(v4, v5);
    }
    if ( BYTE1(v10.fields.current[9].monitor) )
    {
      klass_high = HIDWORD(v10.fields.current[1].klass);
      v8 = 3;
      goto LABEL_12;
    }
  }
  klass_high = 0;
  v8 = 1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( (unsigned int)(v8 + 1) >> 2 )
    return klass_high;
  else
    return -1;
}


SupportServantEquipListViewItem_o *__fastcall SupportServantEquipListViewManager__GetSelectItem(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  __int64 v7; // x10
  char v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B38D1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    byte_42B38D1 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    current = v10.fields.current;
    if ( !v10.fields.current
      || (v7 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v10.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v7)
      || (SupportServantEquipListViewItem_c *)v10.fields.current->klass->_2.typeHierarchy[v7 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B52A5C(v4, v5);
    }
    if ( BYTE1(v10.fields.current[9].monitor) )
    {
      v8 = 2;
      goto LABEL_12;
    }
  }
  v8 = 0;
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( ((v8 + 2) & 3) != 0 )
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
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FE1DCC *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_42B38DF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    byte_42B38DF = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (SupportServantEquipListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != SupportServantEquipListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && BYTE1(v19[1].fields.sortValue2) )
      {
        if ( BYTE4(v19[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B52920((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall SupportServantEquipListViewManager__GetSwapLockList(
        SupportServantEquipListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  ListViewItem_c *klass; // x9
  Il2CppType byval_arg; // q0
  const MethodInfo_2FE1DCC *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  Il2CppType v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_42B38DE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    byte_42B38DE = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (SupportServantEquipListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != SupportServantEquipListViewItem_TypeInfo )
      {
        break;
      }
      klass = v19[1].klass;
      if ( klass && LOBYTE(v19[1].fields.sortValue2) )
      {
        if ( BYTE3(v19[1].fields.sortValue0B) )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = klass->_1.byval_arg;
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B52920((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B52920((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


void __fastcall SupportServantEquipListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  SupportServantEquipListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_42B38C5 & 1) == 0 )
  {
    sub_B52984(&SupportServantEquipListViewManager_TypeInfo);
    byte_42B38C5 = 1;
  }
  v2 = SupportServantEquipListViewManager_TypeInfo;
  if ( (BYTE3(SupportServantEquipListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantEquipListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantEquipListViewManager_TypeInfo);
    v2 = SupportServantEquipListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_B52A5C(0LL, v1);
  ListViewSort__InitLoad(sortStatus, 0LL);
}


void __fastcall SupportServantEquipListViewManager__ModifyList(
        SupportServantEquipListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v7; // x21
  signed __int64 size; // x27
  unsigned int v9; // w26
  int64_t v10; // x20
  __int64 v11; // x8
  UserServantEntity_o **v12; // x20
  __int64 v13; // t1
  __int128 v14; // q0
  int64_t v15; // x22
  unsigned __int64 v16; // x25
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x23
  SupportServantEquipListViewItem_o *v18; // x23
  __int64 v19; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v21; // q0
  UserServantEntity_o *v22; // x22
  int64_t EquipUserSvtId; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  __int64 v26; // x0
  unsigned __int64 v27; // x22
  signed __int64 v28; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v29; // x20
  ListViewItem_o *v30; // x20
  __int64 v31; // x10
  UnityEngine_Object_o *viewObject; // x21
  int64_t v34; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+50h] [xbp-70h]

  if ( (byte_42B38C9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    byte_42B38C9 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_51;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_51;
  v7 = *(_QWORD *)(Instance + 24);
  if ( (int)v7 >= 1 )
  {
    size = itemList->fields._size;
    v9 = 0;
    v34 = Instance;
    while ( 1 )
    {
      v10 = Instance + 8LL * (int)v9;
      v13 = *(_QWORD *)(v10 + 32);
      v12 = (UserServantEntity_o **)(v10 + 32);
      v11 = v13;
      if ( !v13 )
        goto LABEL_51;
      v14 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v37.fields.fakeValue = v14;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v36 = v37;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v36, 0LL);
      if ( (int)size >= 1 )
      {
        v15 = Instance;
        v16 = 0LL;
        while ( 1 )
        {
          v17 = this->fields.itemList;
          if ( !v17 )
            goto LABEL_51;
          if ( v16 >= (unsigned int)v17->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v18 = (SupportServantEquipListViewItem_o *)v17->fields._items->m_Items[v16];
          if ( !v18 )
            goto LABEL_51;
          v19 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
            || (SupportServantEquipListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != SupportServantEquipListViewItem_TypeInfo )
          {
            goto LABEL_51;
          }
          userSvtEntity = v18->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v37.fields.fakeValue = v21;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v35 = v37;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v35, 0LL);
            if ( Instance == v15 )
              break;
          }
          if ( (__int64)++v16 >= size )
            goto LABEL_32;
        }
        if ( v9 >= *(_DWORD *)(v34 + 24) )
        {
LABEL_34:
          v26 = sub_B52A88(Instance);
          sub_B52A28(v26, 0LL);
        }
        Instance = (int64_t)this->fields.servantItemInfo;
        if ( !Instance )
          goto LABEL_51;
        v22 = *v12;
        EquipUserSvtId = SupportServantEquipServantItem__get_EquipUserSvtId(
                           (SupportServantEquipServantItem_o *)Instance,
                           v5);
        SupportServantEquipListViewItem__ModifyItem(v18, v22, EquipUserSvtId, v24);
        if ( !isIconSizeChange )
        {
          SupportServantEquipListViewItem__ModifyLockItem(v18, v5);
          SupportServantEquipListViewItem__ModifyChoiceItem(v18, v25);
        }
      }
LABEL_32:
      if ( (int)++v9 >= (int)v7 )
        break;
      Instance = v34;
      if ( v9 >= *(_DWORD *)(v34 + 24) )
        goto LABEL_34;
    }
    if ( isIconSizeChange )
    {
      v27 = 0LL;
      v28 = (int)v7;
      while ( 1 )
      {
        v29 = this->fields.itemList;
        if ( !v29 )
          break;
        if ( v27 >= (unsigned int)v29->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v30 = v29->fields._items->m_Items[v27];
        if ( v30 )
        {
          v31 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v30->klass->_2.bitflags2 + 1) >= (unsigned int)v31
            && (SupportServantEquipListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] == SupportServantEquipListViewItem_TypeInfo )
          {
            viewObject = (UnityEngine_Object_o *)v30->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = (int64_t)v30->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v30, this->fields.seed, 0LL);
            }
          }
        }
        if ( (__int64)++v27 >= v28 )
          return;
      }
LABEL_51:
      sub_B52A5C(Instance, v5);
    }
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickBonusFilterKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42B38D8 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B38D8 = 1;
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
      sub_B52A5C(0LL, v3);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B38D5 & 1) == 0 )
  {
    sub_B52984(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantEquipListViewManager_EndSelectFilterKind__);
    byte_42B38D5 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B52A54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v5 )
      sub_B52A5C(v7, v8);
    CommonUI__OpenServantFilterSelectMenu_18165180(v5, 5, sort, (ListViewManager_o *)this, v6, -1, 0LL);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B52920(
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
      sub_B52A5C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 3, Index, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSortAscendingOrder(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42B38DB & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B38DB = 1;
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
      sub_B52A5C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__OnClickSortKind(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B38D9 & 1) == 0 )
  {
    sub_B52984(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_SupportServantEquipListViewManager_EndSelectSortKind__);
    byte_42B38D9 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B52A54(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_SupportServantEquipListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v5 )
      sub_B52A5C(v7, v8);
    CommonUI__OpenServantSortSelectMenu(v5, 4, sort, 0, v6, 0LL);
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
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
        return;
      }
    }
    sub_B52A5C(scrollView, obj);
  }
}


void __fastcall SupportServantEquipListViewManager__OnMoveEnd(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42B38CF & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B38CF = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall SupportServantEquipListViewManager__RefreshEquipped(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x26
  __int64 v5; // x10
  UnityEngine_Object_o *monitor; // x20
  void *v7; // x8
  __int64 v8; // x11
  UnityEngine_Object_o *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B38D4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    sub_B52984(&SupportServantEquipListViewObject_TypeInfo);
    byte_42B38D4 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v14.fields.current;
    if ( v14.fields.current )
    {
      v5 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v5
        && (SupportServantEquipListViewItem_c *)v14.fields.current->klass->_2.typeHierarchy[v5 - 1] == SupportServantEquipListViewItem_TypeInfo
        && BYTE2(v14.fields.current[9].monitor) )
      {
        monitor = (UnityEngine_Object_o *)v14.fields.current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          v7 = current[6].monitor;
          if ( v7
            && (v8 = *(&SupportServantEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
                *(unsigned __int8 *)(*(_QWORD *)v7 + 300LL) >= (unsigned int)v8) )
          {
            if ( *(SupportServantEquipListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v7 + 200LL) + 8 * v8 - 8) == SupportServantEquipListViewObject_TypeInfo )
              v9 = (UnityEngine_Object_o *)current[6].monitor;
            else
              v9 = 0LL;
          }
          else
          {
            v9 = 0LL;
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
          if ( v10 )
          {
            if ( !v9 )
              sub_B52A5C(v10, v11);
            UnityEngine_Vector3__get_zero(0LL);
            if ( (byte_42B38E9 & 1) == 0 )
            {
              sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
              byte_42B38E9 = 1;
            }
            SupportServantEquipListViewObject__SetupDisp((SupportServantEquipListViewObject_o *)v9, v12);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall SupportServantEquipListViewManager__RefreshListDisp(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_SupportServantEquipListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B38CB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    byte_42B38CB = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = SupportServantEquipListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B52A5C(0LL, v5);
    ((void (*)(void))v6.fields.current->klass->vtable[9].method)();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__RequestListObject(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B38CD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__);
    sub_B52984(&Method_SupportServantEquipListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B38CD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantEquipListViewObject__Init(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewManager__RequestListObject_31825020(
        SupportServantEquipListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B38CE & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__get_Count__);
    sub_B52984(&Method_SupportServantEquipListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B38CE = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SupportServantEquipListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportServantEquipListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SupportServantEquipListViewObject__Init(
        (SupportServantEquipListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SupportServantEquipListViewObject__Dispose__);
  }
}


void __fastcall SupportServantEquipListViewManager__SetFilterButtonImage(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_42B38D7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17111/*"btn_filter_on"*/);
    sub_B52984(&StringLiteral_17110/*"btn_filter"*/);
    byte_42B38D7 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B52A5C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17110/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17111/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_31802700(this, mode, v10);
}


void __fastcall SupportServantEquipListViewManager__SetMode_31802700(
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
    sub_B52A5C(servantItemDraw, v5);
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
      SupportServantEquipListViewManager__RequestListObject_31825020(this, v9, v8);
      break;
  }
}


void __fastcall SupportServantEquipListViewManager__SetMode_31824964(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SupportServantEquipListViewManager__SetMode_31802700(this, mode, v10);
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
  if ( (byte_42B38CC & 1) == 0 )
  {
    this = (SupportServantEquipListViewManager_o *)sub_B52984(&SupportServantEquipListViewObject_TypeInfo);
    byte_42B38CC = 1;
  }
  if ( !obj
    || (v6 = *(&SupportServantEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (SupportServantEquipListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SupportServantEquipListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
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
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v19; // x20

  if ( (byte_42B38DC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17139/*"btn_sort_up"*/);
    sub_B52984(&StringLiteral_17223/*"btn_txt_up"*/);
    sub_B52984(&StringLiteral_17179/*"btn_txt_new"*/);
    sub_B52984(&StringLiteral_17169/*"btn_txt_down"*/);
    sub_B52984(&StringLiteral_17186/*"btn_txt_old"*/);
    sub_B52984(&StringLiteral_17136/*"btn_sort_down"*/);
    byte_42B38DC = 1;
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
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_43;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
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
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_43;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17186/*"btn_txt_old"*/ : &StringLiteral_17179/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_43;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17223/*"btn_txt_up"*/ : &StringLiteral_17169/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_43;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_43;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v17 = v13;
    else
      v17 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
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
      v19 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34037412(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v19 )
      {
        UILabel__set_text(v19, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B52A5C(sort, v4);
  }
}


void __fastcall SupportServantEquipListViewManager__add_callbackFunc(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SupportServantEquipListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportServantEquipListViewManager_o *v10; // x0
  SupportServantEquipListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42B38C0 & 1) == 0 )
  {
    sub_B52984(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    byte_42B38C0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v7->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  SupportServantEquipListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SupportServantEquipListViewManager__add_callbackFunc2(
        SupportServantEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportServantEquipListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42B38C2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B38C2 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  SupportServantEquipListViewManager__remove_callbackFunc2(v10, v11, v12);
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
  struct ListViewObject_o *viewObject; // x8
  __int64 v11; // x11
  System_Int32_array **v12; // x1
  struct SupportServantData_o *supportServantData; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v15; // q1
  struct System_Int64_array *equipIdList; // x21
  const MethodInfo *v17; // x2
  int max_length; // w8
  SupportServantEquipListViewManager_o *v19; // x20
  int32_t v20; // w22
  const MethodInfo *v21; // x2
  System_String_o *v22; // x21
  System_String_o *ClassName; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x22
  System_String_o *v25; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v26; // x23
  __int64 v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-50h]

  v9 = this;
  if ( (byte_42B38D2 & 1) == 0 )
  {
    sub_B52984(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SupportServantEquipListViewManager_EndConfirmMenu__);
    sub_B52984(&SupportServantEquipListViewObject_TypeInfo);
    this = (SupportServantEquipListViewManager_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B38D2 = 1;
  }
  if ( !selectItem )
    goto LABEL_28;
  viewObject = selectItem->fields.viewObject;
  if ( viewObject
    && (v11 = *(&SupportServantEquipListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
  {
    v12 = (SupportServantEquipListViewObject_c *)viewObject->klass->_2.typeHierarchy[v11 - 1] == SupportServantEquipListViewObject_TypeInfo
        ? (System_Int32_array **)selectItem->fields.viewObject
        : 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v9->fields.saveObj = (struct SupportServantEquipListViewObject_o *)v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->fields.saveObj,
    v12,
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
  v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  equipIdList = supportServantData->fields.equipIdList;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v28 = v29;
  this = (SupportServantEquipListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                   &v28,
                                                   0LL);
  if ( !equipIdList )
    goto LABEL_28;
  max_length = equipIdList->max_length;
  if ( max_length < 1 )
    return;
  v19 = this;
  v20 = 0;
  while ( 1 )
  {
    if ( v20 >= (unsigned int)max_length )
    {
      v27 = sub_B52A88(this);
      sub_B52A28(v27, 0LL);
    }
    if ( (SupportServantEquipListViewManager_o *)equipIdList->m_Items[v20] == this )
      break;
    if ( ++v20 >= max_length )
      return;
  }
  this = (SupportServantEquipListViewManager_o *)v9->fields.supportServantData;
  if ( !this )
    goto LABEL_28;
  this = (SupportServantEquipListViewManager_o *)SupportServantData__getClassName(
                                                   (SupportServantData_o *)this,
                                                   v20,
                                                   v17);
  if ( !v9->fields.supportServantData )
    goto LABEL_28;
  v22 = (System_String_o *)this;
  ClassName = SupportServantData__getClassName(v9->fields.supportServantData, v9->fields.classPos, v21);
  v9->fields.saveId = (int64_t)v19;
  v9->fields.savePos = v20;
  supportSelectConfirmMenu = v9->fields.supportSelectConfirmMenu;
  v25 = ClassName;
  v26 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_B52A54(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
  SupportSelectConfirmMenu_CallbackFunc___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_SupportServantEquipListViewManager_EndConfirmMenu__,
    0LL);
  if ( !supportSelectConfirmMenu )
LABEL_28:
    sub_B52A5C(this, selectItem);
  SupportSelectConfirmMenu__Open_29809068(supportSelectConfirmMenu, 5, v26, v22, v25, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  SupportServantEquipListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B38C7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B38C7 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (SupportServantEquipListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)current,
                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)SupportServantEquipListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v3;
}


System_Collections_Generic_List_SupportServantEquipListViewObject__o *__fastcall SupportServantEquipListViewManager__get_ObjectList(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B38C6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B38C6 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SupportServantEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SupportServantEquipListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SupportServantEquipListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SupportServantEquipListViewObject__o *)v3;
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
  sub_B52920(
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
      sub_B52A5C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SupportServantEquipListViewManager_CallbackFunc__Invoke(callbackFunc, 4, Index, 0LL);
  }
}


void __fastcall SupportServantEquipListViewManager__remove_callbackFunc(
        SupportServantEquipListViewManager_o *this,
        SupportServantEquipListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SupportServantEquipListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportServantEquipListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42B38C1 & 1) == 0 )
  {
    sub_B52984(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    byte_42B38C1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportServantEquipListViewManager_CallbackFunc_c *)v7->klass != SupportServantEquipListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  SupportServantEquipListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall SupportServantEquipListViewManager__remove_callbackFunc2(
        SupportServantEquipListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_42B38C3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B38C3 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  SupportServantEquipListViewManager__DeleteContinueData(v10);
}


void __fastcall SupportServantEquipListViewManager__resetEquipItemBaseFlag(
        SupportServantEquipListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x8
  __int64 v5; // x11
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B38E0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&SupportServantEquipListViewItem_TypeInfo);
    byte_42B38E0 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v8,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v8.fields.current;
    if ( !v8.fields.current
      || (v5 = *(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v8.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v5)
      || (SupportServantEquipListViewItem_c *)v8.fields.current->klass->_2.typeHierarchy[v5 - 1] != SupportServantEquipListViewItem_TypeInfo )
    {
      sub_B52A5C(v6, v7);
    }
    if ( (SupportServantEquipListViewItem_c *)v8.fields.current->klass->_2.typeHierarchy[*(&SupportServantEquipListViewItem_TypeInfo->_2.bitflags2
                                                                                         + 1)
                                                                                       - 1] != SupportServantEquipListViewItem_TypeInfo )
      current = 0LL;
    BYTE1(current[9].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall SupportServantEquipListViewManager_CallbackFunc__BeginInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_42ADDB6 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&SupportServantEquipListViewManager_ResultKind_TypeInfo);
    byte_42ADDB6 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(SupportServantEquipListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall SupportServantEquipListViewManager_CallbackFunc__EndInvoke(
        SupportServantEquipListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
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
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
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
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
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
            v17 = sub_AEB880(v22, class_0, v10, v12);
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