void __fastcall RecommendSupportEquipSelectListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA7C3 & 1) == 0 )
  {
    sub_1B64870(&ListViewSort_TypeInfo, v1);
    sub_1B64870(&RecommendSupportEquipSelectListViewManager_TypeInfo, v2);
    sub_1B64870(&StringLiteral_11152/*"RecommendSupportServantEquip"*/, v3);
    byte_49FA7C3 = 1;
  }
  v4 = (ListViewSort_o *)sub_1B64ABC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40431268(v4, (System_String_o *)StringLiteral_11152/*"RecommendSupportServantEquip"*/, 3, 0, 0LL);
  RecommendSupportEquipSelectListViewManager_TypeInfo->static_fields->sortStatus = v4;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)RecommendSupportEquipSelectListViewManager_TypeInfo->static_fields,
    (int32_t)v4,
    v5,
    v6);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
LABEL_8:
  sort = this->fields.sort;
  if ( !sort )
    sub_1B64ACC(0LL, method);
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  RecommendSupportEquipSelectListViewManager__ModifyList(this, 1, v10);
  RecommendSupportEquipSelectListViewManager__SetMode_32184456(this, 2, v11);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewManager__CreateList(
        RecommendSupportEquipSelectListViewManager_o *this,
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
  int64_t supportSelectConfirmMenu; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  RecommendSupportEquipSelectListViewManager_c *v17; // x0
  struct ListViewSort_o **p_sortStatus; // x8
  struct ListViewSort_o *v19; // x1
  struct ListViewSort_o **p_sort; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct ListViewSort_o *sort; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v33; // x20
  int64_t SelectEquipId; // x21
  SupportServantEquipServantItem_o *v35; // x22
  struct SupportServantEquipServantItem_o **p_servantItemInfo; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  UserServantEntity_array *ServantEquipList; // x21
  __int64 v40; // x8
  unsigned __int64 v41; // x22
  UserServantEntity_o *v42; // x24
  RecommendSupportEquipSelectListViewManager_o *v43; // x19
  int64_t oldEquipTargetId; // x26
  int64_t v45; // x25
  int64_t v46; // x0
  Il2CppObject *v47; // x27
  int64_t v48; // x28
  RecommendSupportEquipSelectListViewItem_o *v49; // x23
  const MethodInfo *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  UILabel_o *emptyMessageLabel; // x20
  System_String_o **v59; // x8
  System_String_o *v60; // x21
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FA7AB & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B64870(&LocalizationManager_TypeInfo, v6);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v7);
    sub_1B64870(&RecommendSupportEquipSelectListViewManager_TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B64870(&SupportServantEquipServantItem_TypeInfo, v11);
    sub_1B64870(&StringLiteral_11523/*"SERVANT_EQUIP_EMPTY"*/, v12);
    sub_1B64870(&StringLiteral_11720/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v13);
    byte_49FA7AB = 1;
  }
  entity = 0LL;
  supportSelectConfirmMenu = (int64_t)this->fields.supportSelectConfirmMenu;
  this->fields.isCanNotLongPush = 0;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)supportSelectConfirmMenu, 0LL);
  v17 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo);
    v17 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  p_sortStatus = &v17->static_fields->sortStatus;
  v19 = *p_sortStatus;
  this->fields.sort = *p_sortStatus;
  p_sort = &this->fields.sort;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v19, v15, v16);
  supportSelectConfirmMenu = (int64_t)this->fields.sort;
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  *(_DWORD *)(supportSelectConfirmMenu + 128) = 1;
  ListViewSort__Load((ListViewSort_o *)supportSelectConfirmMenu, 0LL);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  v23 = *(_QWORD *)(supportSelectConfirmMenu + 104);
  supportSelectConfirmMenu = (int64_t)*p_sort;
  if ( v23 )
  {
    if ( !supportSelectConfirmMenu )
      goto LABEL_54;
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           (ListViewSort_o *)supportSelectConfirmMenu,
                           0LL,
                           *(System_Int32_array **)(v23 + 104),
                           *(System_Int32_array **)(v23 + 64),
                           0LL,
                           0LL,
                           0,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v25,
      v26);
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
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v21, v22);
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
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v28, v29);
  }
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)supportSelectConfirmMenu,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    (const MethodInfo_30D6380 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v33 = entity;
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  SelectEquipId = RecommendSupportSelectControl__get_SelectEquipId(
                    (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
                    method);
  v35 = (SupportServantEquipServantItem_o *)sub_1B64ABC(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v35, (UserServantEntity_o *)v33, SelectEquipId, 0LL);
  p_servantItemInfo = &this->fields.servantItemInfo;
  this->fields.servantItemInfo = v35;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.servantItemInfo, (int32_t)v35, v37, v38);
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
  supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  supportSelectConfirmMenu = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)supportSelectConfirmMenu,
                                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !supportSelectConfirmMenu )
    goto LABEL_54;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)supportSelectConfirmMenu, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !ServantEquipList )
    goto LABEL_54;
  v40 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      if ( v41 >= (unsigned int)v40 )
        sub_1B64AD4(supportSelectConfirmMenu, method);
      supportSelectConfirmMenu = (int64_t)*p_servantItemInfo;
      if ( !*p_servantItemInfo )
        break;
      v42 = ServantEquipList->m_Items[v41];
      supportSelectConfirmMenu = SupportServantEquipServantItem__get_EquipUserSvtId(
                                   (SupportServantEquipServantItem_o *)supportSelectConfirmMenu,
                                   0LL);
      if ( !*p_servantItemInfo )
        break;
      v43 = this;
      oldEquipTargetId = (*p_servantItemInfo)->fields.oldEquipTargetId;
      v45 = supportSelectConfirmMenu;
      supportSelectConfirmMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !supportSelectConfirmMenu )
        break;
      v46 = RecommendSupportSelectControl__get_SelectEquipId(
              (RecommendSupportSelectControl_o *)supportSelectConfirmMenu,
              method);
      v47 = entity;
      v48 = v46;
      v49 = (RecommendSupportEquipSelectListViewItem_o *)sub_1B64ABC(RecommendSupportEquipSelectListViewItem_TypeInfo);
      RecommendSupportEquipSelectListViewItem___ctor(
        v49,
        v41,
        v42,
        v45,
        oldEquipTargetId,
        v48,
        (UserServantEntity_o *)v47,
        v50);
      supportSelectConfirmMenu = (int64_t)v43->fields.itemList;
      if ( !supportSelectConfirmMenu )
        break;
      v53 = *(_QWORD *)(supportSelectConfirmMenu + 16);
      v54 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(supportSelectConfirmMenu + 28);
      if ( !v53 )
        break;
      v55 = *(int *)(supportSelectConfirmMenu + 24);
      this = v43;
      if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
          (Il2CppObject *)v49,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = v53 + 8 * v55;
        *(_DWORD *)(supportSelectConfirmMenu + 24) = v55 + 1;
        *(_QWORD *)(v56 + 32) = v49;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v56 + 32), (int32_t)v49, v51, v52);
      }
      LODWORD(v40) = ServantEquipList->max_length;
      if ( (__int64)++v41 >= (int)v40 )
        goto LABEL_46;
    }
LABEL_54:
    sub_1B64ACC(supportSelectConfirmMenu, method);
  }
LABEL_46:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_54;
  emptyMessageLabel = this->fields.emptyMessageLabel;
  v59 = (System_String_o **)(itemList->fields._size <= 0 ? &StringLiteral_11523/*"SERVANT_EQUIP_EMPTY"*/ : &StringLiteral_11720/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
  v60 = *v59;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportSelectConfirmMenu = (int64_t)LocalizationManager__Get(v60, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_54;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)supportSelectConfirmMenu, 0LL);
  RecommendSupportEquipSelectListViewManager__RefreshListDisp(this, v61);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(this, v62);
}


void __fastcall RecommendSupportEquipSelectListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendSupportEquipSelectListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_49FA7A7 & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportEquipSelectListViewManager_TypeInfo, v1);
    byte_49FA7A7 = 1;
  }
  v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo);
    v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1B64ACC(0LL, v1);
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
    sub_1B64ACC(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager__EndConfirmMenu(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v17; // x0
  __int64 v18; // x1
  Il2CppClass *v19; // x8
  Il2CppType v20; // q0
  SupportServantEquipServantItem_o *servantItemInfo; // x20
  int64_t v22; // x0
  __int64 v23; // x1
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v25; // x1
  RecommendSupportEquipSelectListViewObject_o *saveObj; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+60h] [xbp-60h] BYREF

  if ( (byte_49FA7B5 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, flag);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v9);
    byte_49FA7B5 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    goto LABEL_26;
  SupportSelectConfirmMenu__Close_32962664(supportSelectConfirmMenu, 0LL, 0LL);
  if ( !flag )
    return;
  supportSelectConfirmMenu = (SupportSelectConfirmMenu_o *)this->fields.itemList;
  if ( !supportSelectConfirmMenu )
LABEL_26:
    sub_1B64ACC(supportSelectConfirmMenu, flag);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)supportSelectConfirmMenu,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
  v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = v32.fields._current;
    if ( v32.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v32.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        klass = v32.fields._current[7].klass;
        if ( !klass )
          sub_1B64ACC(v11, v12);
        byval_arg = klass->_1.byval_arg;
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
        *(Il2CppType *)&v31.fields.fakeValue = byval_arg;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v30 = v31;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v30, 0LL);
        if ( v17 == this->fields.saveId )
        {
          v19 = current[7].klass;
          BYTE1(current[9].klass) = 1;
          if ( !v19 )
            sub_1B64ACC(v17, v18);
          v20 = v19->_1.byval_arg;
          servantItemInfo = this->fields.servantItemInfo;
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v19->_1.name;
          *(Il2CppType *)&v31.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v29 = v31;
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v29, 0LL);
          if ( !servantItemInfo )
            sub_1B64ACC(v22, v22);
          SupportServantEquipServantItem__SetEquipTarget(servantItemInfo, v22, 0LL);
          servantItemDraw = this->fields.servantItemDraw;
          if ( !servantItemDraw )
            sub_1B64ACC(0LL, v23);
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, this->fields.servantItemInfo, 0LL);
          saveObj = this->fields.saveObj;
          if ( !saveObj )
            sub_1B64ACC(0LL, v25);
          RecommendSupportEquipSelectListViewObject__SetupDisp(saveObj, v25);
        }
        else
        {
          BYTE1(current[9].klass) = 0;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  RecommendSupportEquipSelectListViewManager__RefreshEquipped(this, v27);
  RecommendSupportEquipSelectListViewManager__RefreshListDisp(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager__EndSelectFilterKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  RecommendSupportEquipSelectListViewManager___c_c *v11; // x8
  CommonUI_o *v12; // x19
  System_Action_o *_9__60_0; // x20
  Il2CppObject *v14; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FA7B8 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager___c__EndSelectFilterKind_b__60_0__, v6);
    sub_1B64870(&RecommendSupportEquipSelectListViewManager___c_TypeInfo, v7);
    byte_49FA7B8 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    RecommendSupportEquipSelectListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v11 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__60_0 = v11->static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__60_0 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__60_0,
      v14,
      Method_RecommendSupportEquipSelectListViewManager___c__EndSelectFilterKind_b__60_0__,
      0LL);
    static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = _9__60_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__60_0, (int32_t)_9__60_0, v16, v17);
  }
  if ( !v12 )
    sub_1B64ACC(Instance, v10);
  CommonUI__CloseServantFilterSelectMenu(v12, _9__60_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager__EndSelectSortKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  RecommendSupportEquipSelectListViewManager___c_c *v10; // x8
  CommonUI_o *v11; // x19
  System_Action_o *_9__64_0; // x20
  Il2CppObject *v13; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FA7BC & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager___c__EndSelectSortKind_b__64_0__, v6);
    sub_1B64870(&RecommendSupportEquipSelectListViewManager___c_TypeInfo, v7);
    byte_49FA7BC = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v10 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__64_0 = v10->static_fields->__9__64_0;
  if ( !_9__64_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__64_0 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__64_0,
      v13,
      Method_RecommendSupportEquipSelectListViewManager___c__EndSelectSortKind_b__64_0__,
      0LL);
    static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__64_0 = _9__64_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__64_0, (int32_t)_9__64_0, v15, v16);
  }
  if ( !v11 )
    sub_1B64ACC(Instance, v9);
  CommonUI__CloseServantSortSelectMenu(v11, _9__64_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall RecommendSupportEquipSelectListViewManager__GetAmountSortValue(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FA7BF & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Cast_RecommendSupportEquipSelectListViewItem___, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Linq_Enumerable_LongCount_RecommendSupportEquipSelectListViewItem___, v5);
    sub_1B64870(&System_Func_RecommendSupportEquipSelectListViewItem__bool__TypeInfo, v6);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0__GetAmountSortValue_b__0__, v7);
    sub_1B64870(&RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_TypeInfo, v8);
    byte_49FA7BF = 1;
  }
  v9 = sub_1B64ABC(RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64ACC(v10, v11);
  *(_DWORD *)(v9 + 16) = svtId;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                               (const MethodInfo_2E4B4AC *)Method_System_Linq_Enumerable_Cast_RecommendSupportEquipSelectListViewItem___);
  v13 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RecommendSupportEquipSelectListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0__GetAmountSortValue_b__0__,
    0LL);
  return System_Linq_Enumerable__LongCount_object_(
           v12,
           (System_Func_TSource__bool__o *)v13,
           (const MethodInfo_2E638C0 *)Method_System_Linq_Enumerable_LongCount_RecommendSupportEquipSelectListViewItem___);
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportEquipSelectListViewItem_o *__fastcall RecommendSupportEquipSelectListViewManager__GetItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  RecommendSupportEquipSelectListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FA7AD & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v5);
    byte_49FA7AD = 1;
  }
  result = (RecommendSupportEquipSelectListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (RecommendSupportEquipSelectListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                            (System_Collections_Generic_List_object__o *)result,
                                                            index,
                                                            (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B64ACC(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


int32_t __fastcall RecommendSupportEquipSelectListViewManager__GetSelect(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 methodPtr_low; // x11
  int32_t klass_high; // w19
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FA7B3 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v6);
    byte_49FA7B3 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64ACC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v11.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v11.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v11.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo
        && BYTE1(v11.fields._current[9].klass) )
      {
        klass_high = HIDWORD(v11.fields._current[1].klass);
        goto LABEL_12;
      }
    }
  }
  klass_high = -1;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return klass_high;
}


RecommendSupportEquipSelectListViewItem_o *__fastcall RecommendSupportEquipSelectListViewManager__GetSelectItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x19
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FA7B4 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v6);
    byte_49FA7B4 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64ACC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v11.fields._current;
    if ( v11.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v11.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v11.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo
        && BYTE1(v11.fields._current[9].klass) )
      {
        goto LABEL_12;
      }
    }
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_49FA7C1 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1B64870(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v14);
    byte_49FA7C1 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low )
        goto LABEL_9;
      if ( *(RecommendSupportEquipSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                         + 8 * methodPtr_low
                                                         - 8) != RecommendSupportEquipSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v24 = *(_QWORD *)(itemList + 112);
      if ( !v24 || !*(_BYTE *)(itemList + 177) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 148) )
      {
        v25 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v48.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v47 = v48;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v47, 0LL);
        if ( !v16 )
          goto LABEL_37;
        items = v16->fields._items;
        v27 = Method_System_Collections_Generic_List_long__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v16->fields._size;
        v17 = itemList;
        if ( (unsigned int)size >= items->max_length )
        {
          v34 = v27[4];
          v35 = v16;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v35,
            v17,
            *(const MethodInfo_3497350 **)(*(_QWORD *)(v34 + 192) + 112LL));
          goto LABEL_9;
        }
        v29 = &items->obj.klass + size;
        v16->fields._size = size + 1;
      }
      else
      {
        v30 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v48.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v46 = v48;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v46, 0LL);
        if ( !v15 )
          goto LABEL_37;
        v31 = v15->fields._items;
        v32 = Method_System_Collections_Generic_List_long__Add__;
        ++v15->fields._version;
        if ( !v31 )
          goto LABEL_37;
        v33 = v15->fields._size;
        v17 = itemList;
        if ( (unsigned int)v33 >= v31->max_length )
        {
          v34 = v32[4];
          v35 = v15;
          goto LABEL_30;
        }
        v29 = &v31->obj.klass + v33;
        v15->fields._size = v33 + 1;
      }
      v29[4] = (Il2CppClass *)v17;
LABEL_9:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1B64ACC(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *choiceList = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)choiceList, 0, v18, v19);
    v44 = unchoiceList;
    v43 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v37;
    sub_1B64814((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unchoiceList = v40;
    v44 = unchoiceList;
  }
  sub_1B64814((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


bool __fastcall RecommendSupportEquipSelectListViewManager__GetSwapLockList(
        RecommendSupportEquipSelectListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_49FA7C0 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1B64870(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v14);
    byte_49FA7C0 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_9;
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low )
        goto LABEL_9;
      if ( *(RecommendSupportEquipSelectListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL)
                                                         + 8 * methodPtr_low
                                                         - 8) != RecommendSupportEquipSelectListViewItem_TypeInfo )
        goto LABEL_9;
      v24 = *(_QWORD *)(itemList + 112);
      if ( !v24 || !*(_BYTE *)(itemList + 176) )
        goto LABEL_9;
      if ( *(_BYTE *)(itemList + 147) )
      {
        v25 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v48.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v47 = v48;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v47, 0LL);
        if ( !v16 )
          goto LABEL_37;
        items = v16->fields._items;
        v27 = Method_System_Collections_Generic_List_long__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v16->fields._size;
        v17 = itemList;
        if ( (unsigned int)size >= items->max_length )
        {
          v34 = v27[4];
          v35 = v16;
LABEL_30:
          System_Collections_Generic_List_long___AddWithResize(
            v35,
            v17,
            *(const MethodInfo_3497350 **)(*(_QWORD *)(v34 + 192) + 112LL));
          goto LABEL_9;
        }
        v29 = &items->obj.klass + size;
        v16->fields._size = size + 1;
      }
      else
      {
        v30 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v48.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v46 = v48;
        itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v46, 0LL);
        if ( !v15 )
          goto LABEL_37;
        v31 = v15->fields._items;
        v32 = Method_System_Collections_Generic_List_long__Add__;
        ++v15->fields._version;
        if ( !v31 )
          goto LABEL_37;
        v33 = v15->fields._size;
        v17 = itemList;
        if ( (unsigned int)v33 >= v31->max_length )
        {
          v34 = v32[4];
          v35 = v15;
          goto LABEL_30;
        }
        v29 = &v31->obj.klass + v33;
        v15->fields._size = v33 + 1;
      }
      v29[4] = (Il2CppClass *)v17;
LABEL_9:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1B64ACC(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *lockList = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)lockList, 0, v18, v19);
    v44 = unlockList;
    v43 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v37;
    sub_1B64814((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unlockList = v40;
    v44 = unlockList;
  }
  sub_1B64814((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


void __fastcall RecommendSupportEquipSelectListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendSupportEquipSelectListViewManager_c *v2; // x0
  ListViewSort_o *sortStatus; // x0

  if ( (byte_49FA7A8 & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportEquipSelectListViewManager_TypeInfo, v1);
    byte_49FA7A8 = 1;
  }
  v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  if ( !RecommendSupportEquipSelectListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager_TypeInfo);
    v2 = RecommendSupportEquipSelectListViewManager_TypeInfo;
  }
  sortStatus = v2->static_fields->sortStatus;
  if ( !sortStatus )
    sub_1B64ACC(0LL, v1);
  ListViewSort__InitLoad(sortStatus, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager__ModifyList(
        RecommendSupportEquipSelectListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  DataManager_o *v13; // x21
  int size; // w29
  unsigned int v15; // w28
  DataManager_c **v16; // x25
  DataManager_c *v17; // x8
  UserServantEntity_o **v18; // x25
  DataManager_c *v19; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v21; // x23
  int32_t v22; // w24
  RecommendSupportEquipSelectListViewItem_o *v23; // x22
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v26; // q0
  UserServantEntity_o *v27; // x23
  int64_t EquipUserSvtId; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  int32_t v31; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v33; // x21
  __int64 v34; // x10
  UnityEngine_Object_o *monitor; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+50h] [xbp-80h]

  if ( (byte_49FA7AC & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FA7AC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_45;
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  v13 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    if ( !(_DWORD)m_CancellationTokenSource )
LABEL_46:
      sub_1B64AD4(Instance, v11);
    size = itemList->fields._size;
    v15 = 0;
    while ( 1 )
    {
      v16 = &v13->klass + (int)v15;
      v19 = v16[4];
      v18 = (UserServantEntity_o **)(v16 + 4);
      v17 = v19;
      if ( !v19 )
        goto LABEL_45;
      byval_arg = v17->_1.byval_arg;
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&v17->_1.name;
      *(Il2CppType *)&v40.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v39 = v40;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v39, 0LL);
      if ( size >= 1 )
      {
        v21 = Instance;
        v22 = 0;
        while ( 1 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_45;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        v22,
                                        (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( Instance )
          {
            v23 = (RecommendSupportEquipSelectListViewItem_o *)Instance;
            methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
              && (RecommendSupportEquipSelectListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
            {
              masterLoadThreads = Instance->fields.masterLoadThreads;
              if ( masterLoadThreads )
              {
                v26 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
                *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
                *(_OWORD *)&v40.fields.fakeValue = v26;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v38 = v40;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(
                                              &v38,
                                              0LL);
                if ( Instance == v21 )
                  break;
              }
            }
          }
          if ( size == ++v22 )
            goto LABEL_24;
        }
        if ( v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
          goto LABEL_46;
        Instance = (DataManager_o *)this->fields.servantItemInfo;
        if ( !Instance )
          goto LABEL_45;
        v27 = *v18;
        EquipUserSvtId = SupportServantEquipServantItem__get_EquipUserSvtId(
                           (SupportServantEquipServantItem_o *)Instance,
                           0LL);
        RecommendSupportEquipSelectListViewItem__ModifyItem(v23, v27, EquipUserSvtId, v29);
        if ( !isIconSizeChange )
        {
          RecommendSupportEquipSelectListViewItem__ModifyLockItem(v23, v11);
          RecommendSupportEquipSelectListViewItem__ModifyChoiceItem(v23, v30);
        }
      }
LABEL_24:
      if ( ++v15 == (_DWORD)m_CancellationTokenSource )
        break;
      if ( v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
        goto LABEL_46;
    }
    if ( (int)m_CancellationTokenSource >= 1 && isIconSizeChange )
    {
      v31 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v31,
                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item )
        {
          v33 = (ListViewItem_o *)Item;
          v34 = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v34
            && (RecommendSupportEquipSelectListViewItem_c *)Item->klass->_2.typeHierarchy[v34 - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
          {
            monitor = (UnityEngine_Object_o *)Item[6].monitor;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
            {
              Instance = (DataManager_o *)v33->fields.viewObject;
              if ( !Instance )
                break;
              ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v33, this->fields.seed, 0LL);
            }
          }
        }
        if ( (_DWORD)m_CancellationTokenSource == ++v31 )
          return;
      }
LABEL_45:
      sub_1B64ACC(Instance, v11);
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

  if ( (byte_49FA7BA & 1) == 0 )
  {
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__, method);
    byte_49FA7BA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_RecommendSupportEquipSelectListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64ACC(0LL, v5);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_49FA7B7 & 1) == 0 )
  {
    sub_1B64870(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager_EndSelectFilterKind__, v3);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FA7B7 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888(Method_RecommendSupportEquipSelectListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64ABC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1B64ACC(v12, v13);
    CommonUI__OpenServantFilterSelectMenu_30353996(v10, 5, sort, (ListViewManager_o *)this, v11, -1, 0LL);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64ACC(v6, v7);
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

  if ( (byte_49FA7BD & 1) == 0 )
  {
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__, method);
    byte_49FA7BD = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_RecommendSupportEquipSelectListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64ACC(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__OnClickSortKind(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_49FA7BB & 1) == 0 )
  {
    sub_1B64870(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager_EndSelectSortKind__, v3);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FA7BB = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888(Method_RecommendSupportEquipSelectListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64ABC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1B64ACC(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 4, sort, 0, v11, 0LL);
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
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v7, v8);
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
    sub_1B64ACC(scrollView, obj);
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

  if ( (byte_49FA7B2 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FA7B2 = 1;
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
          sub_1B64ACC(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x27
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x20
  void *v13; // x8
  __int64 v14; // x11
  UnityEngine_Object_o *v15; // x20
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FA7B6 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v7);
    sub_1B64870(&RecommendSupportEquipSelectListViewObject_TypeInfo, v8);
    byte_49FA7B6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64ACC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v19.fields._current;
    if ( v19.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        monitor = (UnityEngine_Object_o *)v19.fields._current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          v13 = current[6].monitor;
          if ( v13
            && (v14 = LOBYTE(RecommendSupportEquipSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
                *(unsigned __int8 *)(*(_QWORD *)v13 + 304LL) >= (unsigned int)v14) )
          {
            if ( *(RecommendSupportEquipSelectListViewObject_c **)(*(_QWORD *)(*(_QWORD *)v13 + 200LL) + 8 * v14 - 8) == RecommendSupportEquipSelectListViewObject_TypeInfo )
              v15 = (UnityEngine_Object_o *)current[6].monitor;
            else
              v15 = 0LL;
          }
          else
          {
            v15 = 0LL;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v16 = UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
          if ( v16 )
          {
            if ( !v15 )
              sub_1B64ACC(v16, v17);
            if ( (byte_49FA7D0 & 1) == 0 )
            {
              sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v17);
              byte_49FA7D0 = 1;
            }
            RecommendSupportEquipSelectListViewObject__SetupDisp(
              (RecommendSupportEquipSelectListViewObject_o *)v15,
              v17);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall RecommendSupportEquipSelectListViewManager__RefreshListDisp(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FA7AE & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__,
      method);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__,
      v3);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__,
      v4);
    sub_1B64870(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__, v5);
    byte_49FA7AE = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
                                                              this,
                                                              method);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B64ACC(0LL, v8);
    ((void (*)(void))v9.fields._current->klass->vtable[9].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager__RequestListObject(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FA7B0 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__,
      v7);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__,
      v8);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__,
      v9);
    sub_1B64870(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__get_Count__, v11);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__, v12);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v13);
    byte_49FA7B0 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B64ACC(v19, v20);
      RecommendSupportEquipSelectListViewObject__Init(
        (RecommendSupportEquipSelectListViewObject_o *)current,
        mode,
        v18,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportEquipSelectListViewManager__RequestListObject_32184684(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FA7B1 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__,
      v5);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__,
      v6);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__get_Current__,
      v7);
    sub_1B64870(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__get_Count__, v9);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__, v10);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v11);
    byte_49FA7B1 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)RecommendSupportEquipSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListViewManager_OnMoveEnd__,
        0LL);
      if ( !current )
        sub_1B64ACC(v17, v18);
      RecommendSupportEquipSelectListViewObject__Init(
        (RecommendSupportEquipSelectListViewObject_o *)current,
        mode,
        v16,
        v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportEquipSelectListViewObject__Dispose__);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FA7C2 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v5);
    sub_1B64870(&RecommendSupportEquipSelectListViewItem_TypeInfo, v6);
    byte_49FA7C2 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B64ACC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( v9.fields._current )
    {
      methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v9.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (RecommendSupportEquipSelectListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
      {
        BYTE1(v9.fields._current[9].klass) = 0;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_49FA7B9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17443/*"btn_filter_on"*/, method);
    sub_1B64870(&StringLiteral_17442/*"btn_filter"*/, v3);
    byte_49FA7B9 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64ACC(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17442/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17443/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetMode(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportEquipSelectListViewManager__SetMode_32184456(this, mode, v6);
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetMode_32184456(
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
    sub_1B64ACC(servantItemDraw, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)servantItemDraw, 0LL);
LABEL_7:
  if ( (unsigned int)(mode - 1) <= 2 )
    RecommendSupportEquipSelectListViewManager__RequestListObject_32184684(this, mode + 1, v7);
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetMode_32184632(
        RecommendSupportEquipSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportEquipSelectListViewManager__SetMode_32184456(this, mode, v6);
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetObjectItem(
        RecommendSupportEquipSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x19
  __int64 v6; // x1
  __int64 methodPtr_low; // x11
  int32_t initMode; // w20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int32_t v12; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_49FA7AF & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, obj);
    sub_1B64870(&RecommendSupportEquipSelectListViewObject_TypeInfo, v6);
    byte_49FA7AF = 1;
  }
  if ( v4 )
  {
    methodPtr_low = LOBYTE(RecommendSupportEquipSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (RecommendSupportEquipSelectListViewObject_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportEquipSelectListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  initMode = this->fields.initMode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( initMode == 2 )
  {
    if ( v9 )
    {
      if ( v4 )
      {
        v12 = 3;
LABEL_17:
        RecommendSupportEquipSelectListViewObject__Init(
          (RecommendSupportEquipSelectListViewObject_o *)v4,
          v12,
          0LL,
          v11);
        return;
      }
      goto LABEL_19;
    }
  }
  else if ( v9 )
  {
    if ( v4 )
    {
      v12 = 2;
      goto LABEL_17;
    }
LABEL_19:
    sub_1B64ACC(v9, v10);
  }
}


void __fastcall RecommendSupportEquipSelectListViewManager__SetSortButtonImage(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v23; // x20

  if ( (byte_49FA7BE & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&StringLiteral_17473/*"btn_sort_up"*/, v3);
    sub_1B64870(&StringLiteral_17560/*"btn_txt_up"*/, v4);
    sub_1B64870(&StringLiteral_17516/*"btn_txt_new"*/, v5);
    sub_1B64870(&StringLiteral_17506/*"btn_txt_down"*/, v6);
    sub_1B64870(&StringLiteral_17523/*"btn_txt_old"*/, v7);
    sub_1B64870(&StringLiteral_17470/*"btn_sort_down"*/, v8);
    byte_49FA7BE = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_40;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_40;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_40;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17523/*"btn_txt_old"*/ : &StringLiteral_17516/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17470/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17473/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_40;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17560/*"btn_txt_up"*/ : &StringLiteral_17506/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_40;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_40;
      v18 = (System_String_o **)&StringLiteral_17473/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17470/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( sort )
    {
      v23 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v23 )
      {
        UILabel__set_text(v23, (System_String_o *)sort, 0LL);
        return;
      }
    }
LABEL_40:
    sub_1B64ACC(sort, v10);
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

  if ( (byte_49FA7A3 & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FA7A3 = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1B64D8C(v7);
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

  if ( (byte_49FA7A5 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49FA7A5 = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1B64D8C(v7);
  RecommendSupportEquipSelectListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *__fastcall RecommendSupportEquipSelectListViewManager__get_ClippingObjectList(
        RecommendSupportEquipSelectListViewManager_o *this,
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
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FA7AA & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_49FA7AA = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1B64ACC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B64ACC(0LL, v18);
      Item = (ListViewItem_o *)RecommendSupportEquipSelectListViewObject__GetItem(
                                 (RecommendSupportEquipSelectListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B64ACC(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_40394112((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B64ACC(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B64ACC(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B64ACC(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B64ACC(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *)v11;
}


System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *__fastcall RecommendSupportEquipSelectListViewManager__get_ObjectList(
        RecommendSupportEquipSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  RecommendSupportEquipSelectListViewManager___c_c *v10; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Func_object__bool__o *_9__32_0; // x20
  Il2CppObject *v13; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  RecommendSupportEquipSelectListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__object__o *_9__32_1; // x20
  Il2CppObject *v21; // x21
  struct RecommendSupportEquipSelectListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_49FA7A9 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportEquipSelectListViewObject___, method);
    sub_1B64870(&Method_System_Linq_Enumerable_ToList_RecommendSupportEquipSelectListViewObject___, v3);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_GameObject___, v4);
    sub_1B64870(&System_Func_GameObject__bool__TypeInfo, v5);
    sub_1B64870(&System_Func_GameObject__RecommendSupportEquipSelectListViewObject__TypeInfo, v6);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_0__, v7);
    sub_1B64870(&Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_1__, v8);
    sub_1B64870(&RecommendSupportEquipSelectListViewManager___c_TypeInfo, v9);
    byte_49FA7A9 = 1;
  }
  v10 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v10 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__bool__o *)v10->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__32_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__32_0,
      v13,
      Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_0__,
      0LL);
    static_fields = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_GameObject__bool__o *)_9__32_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__32_0,
          (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v18 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  v19 = v17;
  if ( !RecommendSupportEquipSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
    v18 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__object__o *)v18->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = RecommendSupportEquipSelectListViewManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__32_1 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_GameObject__RecommendSupportEquipSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__32_1,
      v21,
      Method_RecommendSupportEquipSelectListViewManager___c__get_ObjectList_b__32_1__,
      0LL);
    v22 = RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields;
    v22->__9__32_1 = (struct System_Func_GameObject__RecommendSupportEquipSelectListViewObject__o *)_9__32_1;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v22->__9__32_1, (int32_t)_9__32_1, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__32_1,
                                                               (const MethodInfo_2E6B688 *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportEquipSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportEquipSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                           v25,
                                                                                           (const MethodInfo_2E772F8 *)Method_System_Linq_Enumerable_ToList_RecommendSupportEquipSelectListViewObject___);
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

  if ( (byte_49FA7A4 & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FA7A4 = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1B64D8C(v7);
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

  if ( (byte_49FA7A6 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49FA7A6 = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportEquipSelectListViewManager_o *)sub_1B64D8C(v7);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7AE4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7A8C;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_49FA7C4 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&RecommendSupportEquipSelectListViewManager_ResultKind_TypeInfo, v9);
    byte_49FA7C4 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             RecommendSupportEquipSelectListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B64824(this, v14, callback, object);
}


void __fastcall RecommendSupportEquipSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportEquipSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FA7C5 & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportEquipSelectListViewManager___c_TypeInfo, v1);
    byte_49FA7C5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(RecommendSupportEquipSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportEquipSelectListViewManager___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)RecommendSupportEquipSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  if ( (byte_49FA7C6 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, go);
    byte_49FA7C6 = 1;
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
  if ( (byte_49FA7C7 & 1) == 0 )
  {
    this = (RecommendSupportEquipSelectListViewManager___c_o *)sub_1B64870(
                                                                 &Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___,
                                                                 go);
    byte_49FA7C7 = 1;
  }
  if ( !go )
    sub_1B64ACC(this, go);
  return (RecommendSupportEquipSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          go,
                                                          (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
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
  if ( (byte_49FA7C8 & 1) == 0 )
  {
    this = (RecommendSupportEquipSelectListViewManager___c__DisplayClass67_0_o *)sub_1B64870(
                                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                                   item);
    byte_49FA7C8 = 1;
  }
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_1B64ACC(this, item);
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v9, 0LL) == v4->fields.svtId;
}