void __fastcall RecommendSupportEquipSelectListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A573A3 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11203/*"RecommendSupportServantEquip"*/);
    byte_4A573A3 = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_11203/*"RecommendSupportServantEquip"*/, 3, 0, 0LL);
  RecommendSupportEquipSelectListViewManager_TypeInfo->static_fields->sortStatus = v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportEquipSelectListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall RecommendSupportEquipSelectListViewManager___ctor(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewManager__Awake(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportEquipSelectListViewManager__ChangeIconScale(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v7; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  struct ListViewSort_o *sort; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v7 = 2;
  }
  else if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v7 = 3;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_8;
    smallSizeSeed = this->fields.normalSizeSeed;
    v7 = 1;
  }
  this->fields.seed = smallSizeSeed;
  p_seed = &this->fields.seed;
  *((_DWORD *)p_seed + 80) = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  RecommendSupportEquipSelectListViewManager__ModifyList(this, 1, v10);
  RecommendSupportEquipSelectListViewManager__SetMode_32446448(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewManager__CreateList(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t supportSelectConfirmMenu; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  RecommendSupportEquipSelectListViewManager_c *v6; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v8; // x1
  struct ListViewSort_o **p_sort; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct ListViewSort_o *sort; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v22; // x20
  int64_t SelectEquipId; // x21
  SupportServantEquipServantItem_o *v24; // x22
  struct SupportServantEquipServantItem_o **p_servantItemInfo; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  UserServantEntity_array *ServantEquipList; // x21
  __int64 v29; // x8
  unsigned __int64 v30; // x22
  UserServantEntity_o *v31; // x24
  RecommendSupportEquipSelectListViewManager_o *v32; // x19
  int64_t oldEquipTargetId; // x26
  int64_t v34; // x25
  int64_t v35; // x0
  Il2CppObject *v36; // x27
  int64_t v37; // x28
  RecommendSupportEquipSelectListViewItem_o *v38; // x23
  const MethodInfo *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v48; // x8
  System_String_o *v49; // x21
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5738A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SupportServantEquipServantItem_TypeInfo);
    sub_1B885B0(&StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4A5738A = 1;
  }
  entity = 0LL;
  supportSelectConfirmMenu = (int64_t)this->fields.supportSelectConfirmMenu;
  this->fields.isCanNotLongPush = 0;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)supportSelectConfirmMenu, 0LL);
  v6 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo);
    v6 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  p_sortStatus = &v6->static_fields->sortStatus;
  v8 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v8, v4, v5);
  supportSelectConfirmMenu = (int64_t)this->fields.sort;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  *(_DWORD *)(supportSelectConfirmMenu + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)supportSelectConfirmMenu, 0LL);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  v12 = *(_QWORD *)(supportSelectConfirmMenu + 104);
  supportSelectConfirmMenu = (int64_t)*p_sort;
  if ( v12 )
  {
    if ( !supportSelectConfirmMenu )
      goto LABEL_54;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)supportSelectConfirmMenu,
                           0LL,
                           *(System_Int32_array **)(v12 + 104),
                           *(System_Int32_array **)(v12 + 64),
                           0LL,
                           0LL,
                           0,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v14,
      v15);
    sort = this->fields.sort;
    supportSelectConfirmMenu = BasicHelper__IsNullOrEmpty(
                                 (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                                 0LL);
    if ( !sort )
      goto LABEL_54;
    sort->fields.isBonusKind = (supportSelectConfirmMenu & 1) == 0;
  }
  else
  {
    if ( !supportSelectConfirmMenu )
      goto LABEL_54;
    *(_BYTE *)(supportSelectConfirmMenu + 61) = 0;
    this->fields.alignedBonusFilterInfos = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v10, v11);
  }
  supportSelectConfirmMenu = (int64_t)this->fields.bonusFilterKindButton;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  supportSelectConfirmMenu = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)supportSelectConfirmMenu,
                                        0LL);
  if ( !*p_sort )
    goto LABEL_54;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)supportSelectConfirmMenu,
    (*p_sort)->fields.isBonusKind,
    0LL);
  if ( !*p_sort )
    goto LABEL_54;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_24;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_24;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_24:
    this->fields.seed = normalSizeSeed;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v17, v18);
  }
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)supportSelectConfirmMenu,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  supportSelectConfirmMenu = RecommendSupportSelectControl__get_SelectServantId(
                               (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
                               method);
  if ( !MasterData_object )
    goto LABEL_54;
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &entity,
    supportSelectConfirmMenu,
    (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v22 = entity;
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SelectEquipId = RecommendSupportSelectControl__get_SelectEquipId(
                    (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
                    method);
  v24 = (SupportServantEquipServantItem_o *)sub_1B887FC(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v24, (UserServantEntity_o *)v22, SelectEquipId, 0LL);
  p_servantItemInfo = &this->fields.servantItemInfo;
  this->fields.servantItemInfo = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantItemInfo, (int32_t)v24, v26, v27);
  supportSelectConfirmMenu = (int64_t)this->fields.servantItemDraw;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)supportSelectConfirmMenu,
    this->fields.servantItemInfo,
    0LL);
  supportSelectConfirmMenu = (int64_t)this->fields.servantItemDraw;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)supportSelectConfirmMenu, 0, 0LL);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  supportSelectConfirmMenu = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)supportSelectConfirmMenu,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)supportSelectConfirmMenu, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !ServantEquipList )
    goto LABEL_54;
  v29 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v29 )
        sub_1B88814(supportSelectConfirmMenu, method);
      supportSelectConfirmMenu = (int64_t)*p_servantItemInfo;
      if ( !*p_servantItemInfo )
        break;
      v31 = ServantEquipList->m_Items[v30];
      supportSelectConfirmMenu = SupportServantEquipServantItem__get_EquipUserSvtId(
                                   (SupportServantEquipServantItem_o *)supportSelectConfirmMenu,
                                   0LL);
      if ( !*p_servantItemInfo )
        break;
      v32 = this;
      oldEquipTargetId = (*p_servantItemInfo)->fields.oldEquipTargetId;
      v34 = supportSelectConfirmMenu;
      supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !supportSelectConfirmMenu )
        break;
      v35 = RecommendSupportSelectControl__get_SelectEquipId(
              (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
              method);
      v36 = entity;
      v37 = v35;
      v38 = (RecommendSupportEquipSelectListViewItem_o *)sub_1B887FC(RecommendSupportEquipSelectListViewItem_TypeInfo);
      RecommendSupportEquipSelectListViewItem___ctor(
        v38,
        v30,
        v31,
        v34,
        oldEquipTargetId,
        v37,
        (UserServantEntity_o *)v36,
        v39);
      supportSelectConfirmMenu = (int64_t)v32->fields.itemList;
      if ( !supportSelectConfirmMenu )
        break;
      v42 = *(_QWORD *)(supportSelectConfirmMenu + 16);
      v43 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(supportSelectConfirmMenu + 28);
      if ( !v42 )
        break;
      v44 = *(int *)(supportSelectConfirmMenu + 24);
      this = v32;
      if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
          (Il2CppObject *)v38,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = v42 + 8 * v44;
        *(_DWORD *)(supportSelectConfirmMenu + 24) = v44 + 1;
        *(_QWORD *)(v45 + 32) = v38;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 32), (int32_t)v38, v40, v41);
      }
      LODWORD(v29) = ServantEquipList->max_length;
      if ( (__int64)++v30 >= (int)v29 )
        goto LABEL_46;
    }
LABEL_54:
    sub_1B8880C(supportSelectConfirmMenu, method);
  }
LABEL_46:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_54;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v48 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v49 = *v48;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportSelectConfirmMenu = (int64_t)LocalizationManager__Get(v49, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_54;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)supportSelectConfirmMenu, 0LL);
  RecommendSupportEquipSelectListViewManager__RefreshListDisp(this, v50);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(this, v51);
}


void __fastcall RecommendSupportEquipSelectListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendSupportEquipSelectListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4A57386 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    byte_4A57386 = 1;
  }
  v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo);
    v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1B8880C(0LL, v1);
  ListViewSort__DeleteContinueData(sortStatus, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewManager__DestroyList(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager__EndConfirmMenu(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v12; // x0
  __int64 v13; // x1
  Il2CppClass *v14; // x8
  Il2CppType v15; // q0
  SupportServantEquipServantItem_o *servantItemInfo; // x20
  int64_t v17; // x0
  __int64 v18; // x1
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v20; // x1
  RecommendSupportEquipSelectListViewObject_o *saveObj; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_4A57394 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4A57394 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    goto LABEL_26;
  SupportSelectConfirmMenu__Close_33227328(supportSelectConfirmMenu, 0LL, 0LL);
  if ( !flag )
    return;
  supportSelectConfirmMenu = (SupportSelectConfirmMenu_o *)this->fields.itemList;
  if ( !supportSelectConfirmMenu )
LABEL_26:
    sub_1B8880C(supportSelectConfirmMenu, flag);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v27.fields._list = *(_OWORD *)&v26.fields.currentCryptoKey;
  v27.fields._current = (Il2CppObject *)v26.fields.fakeValue;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v27.fields._current;
    if ( v27.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        klass = v27.fields._current[7].klass;
        if ( !klass )
          sub_1B8880C(v6, v7);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v26.fields.fakeValue = byval_arg;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
        if ( v12 == this->fields.saveId )
        {
          v14 = current[7].klass;
          BYTE1(current[9].klass) = 1;
          if ( !v14 )
            sub_1B8880C(v12, v13);
          v15 = v14->_1.byval_arg;
          servantItemInfo = this->fields.servantItemInfo;
          *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v14->_1.name;
          *(Il2CppType *)&v26.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v24 = v26;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL);
          if ( !servantItemInfo )
            sub_1B8880C(v17, v17);
          SupportServantEquipServantItem__SetEquipTarget(servantItemInfo, v17, 0LL);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            sub_1B8880C(0LL, v18);
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, 0LL);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_1B8880C(0LL, v20);
          RecommendSupportEquipSelectListViewObject__SetupDisp(saveObj, v20);
        }
        else
        {
          BYTE1(current[9].klass) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  RecommendSupportEquipSelectListViewManager__RefreshEquipped(this, v22);
  RecommendSupportEquipSelectListViewManager__RefreshListDisp(this, v23);
}


void __fastcall RecommendSupportEquipSelectListViewManager__EndSelectFilterKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  RecommendSupportEquipSelectListViewManager___c_c *v8; // x8
  CommonUI_o *v9; // x19
  System_Action_o *_9__60_0; // x20
  Il2CppObject *v11; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A57397 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager___c__EndSelectFilterKind_b__60_0__);
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_4A57397 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v8 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__60_0 = v8->static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__60_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__60_0,
      v11,
      Method_RecommendSupportEquipSelectListViewManager___c__EndSelectFilterKind_b__60_0__,
      0LL);
    static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = _9__60_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__60_0, (int32_t)_9__60_0, v13, v14);
  }
  if ( !v9 )
    sub_1B8880C(Instance, v7);
  CommonUI__CloseServantFilterSelectMenu(v9, _9__60_0, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewManager__EndSelectSortKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  RecommendSupportEquipSelectListViewManager___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__64_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5739B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager___c__EndSelectSortKind_b__64_0__);
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_4A5739B = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v7 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__64_0 = v7->static_fields->__9__64_0;
  if ( !_9__64_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__64_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__64_0,
      v10,
      Method_RecommendSupportEquipSelectListViewManager___c__EndSelectSortKind_b__64_0__,
      0LL);
    static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__64_0 = _9__64_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__64_0, (int32_t)_9__64_0, v12, v13);
  }
  if ( !v8 )
    sub_1B8880C(Instance, v6);
  CommonUI__CloseServantSortSelectMenu(v8, _9__64_0, 0LL);
}


int64_t __fastcall RecommendSupportEquipSelectListViewManager__GetAmountSortValue(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4A5739E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Cast_RecommendSupportEquipSelectListViewItem___);
    sub_1B885B0(&Method_System_Linq_Enumerable_LongCount_RecommendSupportEquipSelectListViewItem___);
    sub_1B885B0(&System_Func_RecommendSupportEquipSelectListViewItem__bool__TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0__GetAmountSortValue_b__0__);
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_TypeInfo);
    byte_4A5739E = 1;
  }
  v5 = sub_1B887FC(RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                              (const MethodInfo_2E8FA18 *)Method_System_Linq_Enumerable_Cast_RecommendSupportEquipSelectListViewItem___);
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RecommendSupportEquipSelectListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0__GetAmountSortValue_b__0__,
    0LL);
  return System_Linq_Enumerable__LongCount_object_(
           v8,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_2EA8350 *)Method_System_Linq_Enumerable_LongCount_RecommendSupportEquipSelectListViewItem___);
}


bool __fastcall RecommendSupportEquipSelectListViewManager__GetFocusItemIndex(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A573A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (RecommendSupportEquipSelectListViewManager_o *)sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4A573A2 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
      sub_1B8880C(this, index);
    v8 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v8,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        break;
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (RecommendSupportEquipSelectListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportEquipSelectListViewItem_TypeInfo
        || BYTE1(Item[9].klass) )
      {
        break;
      }
      if ( sum == ++v8 )
        return 1;
    }
    *index = v8;
  }
  return 1;
}


RecommendSupportEquipSelectListViewItem_o *__fastcall RecommendSupportEquipSelectListViewManager__GetItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5738C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4A5738C = 1;
  }
  result = (RecommendSupportEquipSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (RecommendSupportEquipSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (RecommendSupportEquipSelectListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportEquipSelectListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_String_o *__fastcall RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall RecommendSupportEquipSelectListViewManager__GetSelect(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 methodPtr_low; // x11
  int32_t klass_high; // w19
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57392 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4A57392 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v7.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v7.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo
        && BYTE1(v7.fields._current[9].klass) )
      {
        klass_high = HIDWORD(v7.fields._current[1].klass);
        goto LABEL_12;
      }
    }
  }
  klass_high = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return klass_high;
}


RecommendSupportEquipSelectListViewItem_o *__fastcall RecommendSupportEquipSelectListViewManager__GetSelectItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x19
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A57393 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4A57393 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v7.fields._current;
    if ( v7.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v7.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo
        && BYTE1(v7.fields._current[9].klass) )
      {
        goto LABEL_12;
      }
    }
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (RecommendSupportEquipSelectListViewItem_o *)current;
}


SupportServantEquipServantItemDraw_o *__fastcall RecommendSupportEquipSelectListViewManager__GetServantItemDraw(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemDraw;
}


SupportServantEquipServantItem_o *__fastcall RecommendSupportEquipSelectListViewManager__GetServantItemInfo(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.servantItemInfo;
}


bool __fastcall RecommendSupportEquipSelectListViewManager__GetSwapChoiceList(
        RecommendSupportEquipSelectListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A573A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4A573A0 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low )
        goto LABEL_9;
      if ( *(RecommendSupportEquipSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                         + 8 * methodPtr_low
                                                         - 8) != RecommendSupportEquipSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v16 = *(_QWORD *)(itemList + 112);
      if ( !v16 || !*(_BYTE *)(itemList + 177) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 148) )
      {
        v17 = *(_OWORD *)(v16 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
        if ( !v8 )
          goto LABEL_37;
        items = v8->fields._items;
        v19 = Method_System_Collections_Generic_List_long__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v8->fields._size;
        v9 = itemList;
        if ( (unsigned int)size >= items->max_length )
        {
          v26 = v19[4];
          v27 = v8;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v27,
            v9,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
          goto LABEL_9;
        }
        v21 = &items->obj.klass + size;
        v8->fields._size = size + 1;
      }
      else
      {
        v22 = *(_OWORD *)(v16 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
        if ( !v7 )
          goto LABEL_37;
        v23 = v7->fields._items;
        v24 = Method_System_Collections_Generic_List_long__Add__;
        ++v7->fields._version;
        if ( !v23 )
          goto LABEL_37;
        v25 = v7->fields._size;
        v9 = itemList;
        if ( (unsigned int)v25 >= v23->max_length )
        {
          v26 = v24[4];
          v27 = v7;
          goto LABEL_30;
        }
        v21 = &v23->obj.klass + v25;
        v7->fields._size = v25 + 1;
      }
      v21[4] = (Il2CppClass *)v9;
LABEL_9:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool __fastcall RecommendSupportEquipSelectListViewManager__GetSwapLockList(
        RecommendSupportEquipSelectListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5739F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4A5739F = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low )
        goto LABEL_9;
      if ( *(RecommendSupportEquipSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                         + 8 * methodPtr_low
                                                         - 8) != RecommendSupportEquipSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v16 = *(_QWORD *)(itemList + 112);
      if ( !v16 || !*(_BYTE *)(itemList + 176) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 147) )
      {
        v17 = *(_OWORD *)(v16 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
        if ( !v8 )
          goto LABEL_37;
        items = v8->fields._items;
        v19 = Method_System_Collections_Generic_List_long__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v8->fields._size;
        v9 = itemList;
        if ( (unsigned int)size >= items->max_length )
        {
          v26 = v19[4];
          v27 = v8;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v27,
            v9,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v26 + 192) + 112LL));
          goto LABEL_9;
        }
        v21 = &items->obj.klass + size;
        v8->fields._size = size + 1;
      }
      else
      {
        v22 = *(_OWORD *)(v16 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v40;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
        if ( !v7 )
          goto LABEL_37;
        v23 = v7->fields._items;
        v24 = Method_System_Collections_Generic_List_long__Add__;
        ++v7->fields._version;
        if ( !v23 )
          goto LABEL_37;
        v25 = v7->fields._size;
        v9 = itemList;
        if ( (unsigned int)v25 >= v23->max_length )
        {
          v26 = v24[4];
          v27 = v7;
          goto LABEL_30;
        }
        v21 = &v23->obj.klass + v25;
        v7->fields._size = v25 + 1;
      }
      v21[4] = (Il2CppClass *)v9;
LABEL_9:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1B8880C(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void __fastcall RecommendSupportEquipSelectListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendSupportEquipSelectListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_4A57387 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_TypeInfo);
    byte_4A57387 = 1;
  }
  v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo);
    v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(sortStatus, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewManager__ModifyList(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  DataManager_o *v7; // x21
  int size; // w29
  unsigned int v9; // w28
  DataManager_c **v10; // x25
  DataManager_c *v11; // x8
  UserServantEntity_o **v12; // x25
  DataManager_c *v13; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v15; // x23
  int32_t v16; // w24
  RecommendSupportEquipSelectListViewItem_o *v17; // x22
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v20; // q0
  UserServantEntity_o *v21; // x23
  int64_t EquipUserSvtId; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  int32_t v25; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v27; // x21
  __int64 v28; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-80h]

  if ( (byte_4A5738B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5738B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_45;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  v7 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    if ( !(_DWORD)m_CancellationTokenSource )
LABEL_46:
      sub_1B88814(Instance, v5);
    size = itemList->fields._size;
    v9 = 0;
    while ( 1 )
    {
      v10 = &v7->klass + (int)v9;
      v13 = v10[4];
      v12 = (UserServantEntity_o **)(v10 + 4);
      v11 = v13;
      if ( !v13 )
        goto LABEL_45;
      byval_arg = v11->_1.byval_arg;
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v11->_1.name;
      *(Il2CppType *)&v34.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v33 = v34;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v33, 0LL);
      if ( size >= 1 )
      {
        v15 = Instance;
        v16 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_45;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v16,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v17 = (RecommendSupportEquipSelectListViewItem_o *)Instance;
            methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
              && (RecommendSupportEquipSelectListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
            {
              masterLoadThreads = Instance->fields.masterLoadThreads;
              if ( masterLoadThreads )
              {
                v20 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
                *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
                *(_OWORD *)&v34.fields.fakeValue = v20;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v32 = v34;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                              &v32,
                                              0LL);
                if ( Instance == v15 )
                  break;
              }
            }
          }
          if ( size == ++v16 )
            goto LABEL_24;
        }
        if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_46;
        Instance = (DataManager_o *)this->fields.servantItemInfo;
        if ( !Instance )
          goto LABEL_45;
        v21 = *v12;
        EquipUserSvtId = SupportServantEquipServantItem__get_EquipUserSvtId(
                           (SupportServantEquipServantItem_o *)Instance,
                           0LL);
        RecommendSupportEquipSelectListViewItem__ModifyItem(v17, v21, EquipUserSvtId, v23);
        if ( !isIconSizeChange )
        {
          RecommendSupportEquipSelectListViewItem__ModifyLockItem(v17, v5);
          RecommendSupportEquipSelectListViewItem__ModifyChoiceItem(v17, v24);
        }
      }
LABEL_24:
      if ( ++v9 == (_DWORD)m_CancellationTokenSource )
        break;
      if ( v9 >= LODWORD(v7->fields.m_CancellationTokenSource) )
        goto LABEL_46;
    }
    if ( (int)m_CancellationTokenSource >= 1 && isIconSizeChange )
    {
      v25 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v25,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v27 = (ListViewItem_o *)Item;
          v28 = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v28
            && (RecommendSupportEquipSelectListViewItem_c *)Item->klass->_2.typeHierarchy[v28 - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
          {
            monitor = (UnityEngine_Object_o *)Item[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
            {
              Instance = (DataManager_o *)v27->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v27, this->fields.seed, 0LL);
            }
          }
        }
        if ( (_DWORD)m_CancellationTokenSource == ++v25 )
          return;
      }
LABEL_45:
      sub_1B8880C(Instance, v5);
    }
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnClickBonusFilterKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4A57399 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__);
    byte_4A57399 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnClickDecide(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v6; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
  {
    Select = RecommendSupportEquipSelectListViewManager__GetSelect(this, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Select,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnClickEquipExplanation(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  const MethodInfo *v6; // x1
  unsigned int Select; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
  {
    Select = RecommendSupportEquipSelectListViewManager__GetSelect(this, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Select,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnClickFilterKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A57396 & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57396 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu_30500992(v7, 5, sort, (ListViewManager_o *)this, v8, -1, 0LL);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnClickListView(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnClickSelectListView(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      3LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnClickSortAscendingOrder(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A5739C & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__);
    byte_4A5739C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnClickSortKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5739A & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5739A = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 4, sort, 0, v8, 0LL);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnLongPushListView(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  unsigned int Index; // w0

  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v7, v8);
      if ( !callbackFunc )
        return;
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          2LL,
          Index,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
    }
    sub_1B8880C(scrollView, obj);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnMoveEnd(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A57391 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57391 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__RefreshEquipped(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x27
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x20
  void *v7; // x8
  __int64 v8; // x11
  UnityEngine_Object_o *v9; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A57395 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewObject_TypeInfo);
    byte_4A57395 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v13.fields._current;
    if ( v13.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)v13.fields._current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          v7 = current[6].monitor;
          if ( v7
            && (v8 = LOBYTE(RecommendSupportEquipSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                *(unsigned __int8 *)(*(_QWORD *)v7 + 304LL) >= (unsigned int)v8) )
          {
            if ( *(RecommendSupportEquipSelectListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v7 + 200LL) + 8 * v8 - 8) == RecommendSupportEquipSelectListViewObject_TypeInfo )
              v9 = (UnityEngine_Object_o *)current[6].monitor;
            else
              v9 = 0LL;
          }
          else
          {
            v9 = 0LL;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
          if ( v10 )
          {
            if ( !v9 )
              sub_1B8880C(v10, v11);
            if ( (byte_4A573B0 & 1) == 0 )
            {
              sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
              byte_4A573B0 = 1;
            }
            RecommendSupportEquipSelectListViewObject__SetupDisp((RecommendSupportEquipSelectListViewObject_o *)v9, v11);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall RecommendSupportEquipSelectListViewManager__RefreshListDisp(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5738D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    byte_4A5738D = 1;
  }
  memset(&v6, 0, sizeof(v6));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    ObjectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1B8880C(0LL, v5);
    ((void (*)(void))v6.fields._current->klass->vtable[9].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager__RequestListObject(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5738F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__get_Count__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5738F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      RecommendSupportEquipSelectListViewObject__Init(
        (RecommendSupportEquipSelectListViewObject_o *)current,
        mode,
        v11,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager__RequestListObject_32446676(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A57390 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__get_Count__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A57390 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      RecommendSupportEquipSelectListViewObject__Init(
        (RecommendSupportEquipSelectListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A573A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4A573A1 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v5.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v5.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v5.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        BYTE1(v5.fields._current[9].klass) = 0;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetCanLongPushFlag(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A57398 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A57398 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetMode(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportEquipSelectListViewManager__SetMode_32446448(this, mode, v6);
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetMode_32446448(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  servantItemDraw = this->fields.servantItemDraw;
  if ( !servantItemDraw )
    goto LABEL_10;
  SupportServantEquipServantItemDraw__SetInput(servantItemDraw, this->fields.isInput, 0LL);
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw )
    goto LABEL_10;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 0LL) )
    goto LABEL_7;
  servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView;
  if ( !servantItemDraw
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantItemDraw, 1, 0LL),
        (servantItemDraw = (SupportServantEquipServantItemDraw_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    RecommendSupportEquipSelectListViewManager__RequestListObject_32446676(this, mode + 1, v7);
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetMode_32446624(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportEquipSelectListViewManager__SetMode_32446448(this, mode, v6);
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetObjectItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x11
  int32_t initMode; // w20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w1

  if ( (byte_4A5738E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewObject_TypeInfo);
    byte_4A5738E = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (RecommendSupportEquipSelectListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportEquipSelectListViewObject_TypeInfo )
        obj = 0LL;
    }
    else
    {
      obj = 0LL;
    }
  }
  initMode = this->fields.initMode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( initMode == 2 )
  {
    if ( v8 )
    {
      if ( obj )
      {
        v11 = 3;
LABEL_17:
        RecommendSupportEquipSelectListViewObject__Init(
          (RecommendSupportEquipSelectListViewObject_o *)obj,
          v11,
          0LL,
          v10);
        return;
      }
      goto LABEL_19;
    }
  }
  else if ( v8 )
  {
    if ( obj )
    {
      v11 = 2;
      goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(v8, v9);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetSortButtonImage(
        RecommendSupportEquipSelectListViewManager_o *this,
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4A5739D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A5739D = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_40;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_40;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1B8880C(sort, v4);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__add_callbackFunc(
        RecommendSupportEquipSelectListViewManager_o *this,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportEquipSelectListViewManager_o *v10; // x0
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A57382 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4A57382 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (RecommendSupportEquipSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1B88ACC(v7);
  RecommendSupportEquipSelectListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall RecommendSupportEquipSelectListViewManager__add_callbackFunc2(
        RecommendSupportEquipSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportEquipSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A57384 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A57384 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1B88ACC(v7);
  RecommendSupportEquipSelectListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *__fastcall RecommendSupportEquipSelectListViewManager__get_ClippingObjectList(
        RecommendSupportEquipSelectListViewManager_o *this,
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
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A57389 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57389 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)RecommendSupportEquipSelectListViewObject__GetItem(
                                 (RecommendSupportEquipSelectListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *)v3;
}


System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *__fastcall RecommendSupportEquipSelectListViewManager__get_ObjectList(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Func_object__bool__o *_9__32_0; // x20
  Il2CppObject *v6; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  RecommendSupportEquipSelectListViewManager___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__object__o *_9__32_1; // x20
  Il2CppObject *v14; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4A57388 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportEquipSelectListViewObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportEquipSelectListViewObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1B885B0(&System_Func_GameObject__bool__TypeInfo);
    sub_1B885B0(&System_Func_GameObject__RecommendSupportEquipSelectListViewObject__TypeInfo);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_0__);
    sub_1B885B0(&Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_1__);
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_4A57388 = 1;
  }
  v3 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v3 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__bool__o *)v3->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__32_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__32_0,
      v6,
      Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_0__,
      0LL);
    static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_GameObject__bool__o *)_9__32_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__32_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GameObject___);
  v11 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v12 = v10;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v11 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__object__o *)v11->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__32_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_GameObject__RecommendSupportEquipSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__32_1,
      v14,
      Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_1__,
      0LL);
    v15 = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    v15->__9__32_1 = (struct System_Func_GameObject__RecommendSupportEquipSelectListViewObject__o *)_9__32_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->__9__32_1, (int32_t)_9__32_1, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__32_1,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportEquipSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                           v18,
                                                                                           (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_RecommendSupportEquipSelectListViewObject___);
}


void __fastcall RecommendSupportEquipSelectListViewManager__remove_callbackFunc(
        RecommendSupportEquipSelectListViewManager_o *this,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct RecommendSupportEquipSelectListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportEquipSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A57383 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4A57383 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (RecommendSupportEquipSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1B88ACC(v7);
  RecommendSupportEquipSelectListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall RecommendSupportEquipSelectListViewManager__remove_callbackFunc2(
        RecommendSupportEquipSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportEquipSelectListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A57385 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A57385 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1B88ACC(v7);
  RecommendSupportEquipSelectListViewManager__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C9B30;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9AD8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecommendSupportEquipSelectListViewManager_CallbackFunc__BeginInvoke(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A573A4 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager_ResultKind_TypeInfo);
    byte_4A573A4 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             RecommendSupportEquipSelectListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall RecommendSupportEquipSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall RecommendSupportEquipSelectListViewManager_CallbackFunc__Invoke(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall RecommendSupportEquipSelectListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A573A5 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    byte_4A573A5 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportEquipSelectListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall RecommendSupportEquipSelectListViewManager___c___ctor(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewManager___c___EndSelectFilterKind_b__60_0(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportEquipSelectListViewManager___c___EndSelectSortKind_b__64_0(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall RecommendSupportEquipSelectListViewManager___c___get_ObjectList_b__32_0(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4A573A6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A573A6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0LL, 0LL);
}


RecommendSupportEquipSelectListViewObject_o *__fastcall RecommendSupportEquipSelectListViewManager___c___get_ObjectList_b__32_1(
        RecommendSupportEquipSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4A573A7 & 1) == 0 )
  {
    this = (RecommendSupportEquipSelectListViewManager___c_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
    byte_4A573A7 = 1;
  }
  if ( !go )
    sub_1B8880C(this, go);
  return (RecommendSupportEquipSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          go,
                                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
}


void __fastcall RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0___ctor(
        RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0___GetAmountSortValue_b__0(
        RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_o *this,
        RecommendSupportEquipSelectListViewItem_o *item,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_o *v4; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4A573A8 & 1) == 0 )
  {
    this = (RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A573A8 = 1;
  }
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_1B8880C(this, item);
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL) == v4->fields.svtId;
}