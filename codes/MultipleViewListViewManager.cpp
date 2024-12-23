void __fastcall MultipleViewListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19

  if ( (byte_4B621DC & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewSort_TypeInfo, v1);
    sub_1BE4ACC(&MultipleViewListViewManager_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_9323/*"MultipleView1"*/, v3);
    byte_4B621DC = 1;
  }
  v4 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v4, (System_String_o *)StringLiteral_9323/*"MultipleView1"*/, 3, 0, 0LL);
  MultipleViewListViewManager_TypeInfo->static_fields->servantSortInfo = v4;
  sub_1BE4A70(MultipleViewListViewManager_TypeInfo->static_fields);
}


void __fastcall MultipleViewListViewManager___ctor(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MultipleViewListViewManager__ChangeIconScale(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v5; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v5 = 2;
    goto LABEL_7;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v5 = 3;
    goto LABEL_7;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v5 = 1;
LABEL_7:
    this->fields.seed = smallSizeSeed;
    p_seed = &this->fields.seed;
    *((_DWORD *)p_seed + 77) = v5;
    sub_1BE4A70(p_seed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        MultipleViewListViewManager__ModifyList(this, 1, v8),
        MultipleViewListViewManager__SetMode_31954944(this, 2, v9),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1BE4D28(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall MultipleViewListViewManager__CreateList(
        MultipleViewListViewManager_o *this,
        int64_t latestSelectedUsrSvtId,
        System_Int64_array *selectedUserSvtIds,
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
  Il2CppObject *v27; // x19
  __int64 Instance; // x0
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x0
  UserServantMaster_o *v31; // x23
  Il2CppObject *v32; // x24
  __int64 v33; // x24
  int v34; // w20
  MultipleViewListViewManager_c *v35; // x0
  __int64 v36; // x22
  struct ListViewSort_o **p_sort; // x21
  UnityEngine_Object_o *infoDataLabel; // x25
  const MethodInfo *v39; // x2
  UILabel_o *v40; // x25
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_String_o *v44; // x26
  Il2CppObject *v45; // x27
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  int v50; // w8
  unsigned int v51; // w25
  __int64 v52; // x26
  __int64 v53; // x8
  UserServantEntity_o **v54; // x26
  __int64 v55; // t1
  __int128 v56; // q0
  __int64 v57; // x27
  System_Int64_array *v58; // x22
  UserServantEntity_o *v59; // x29
  __int64 v60; // x19
  MultipleViewListViewItem_o *v61; // x26
  const MethodInfo *v62; // x5
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v68; // x21
  UILabel_o *v69; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v72; // x1
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v74; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Predicate_object__o *v76; // x22
  Il2CppObject *v77; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v78; // x21
  System_Predicate_object__o *v79; // x22
  Il2CppObject *object; // [xsp+8h] [xbp-E8h]
  System_String_o *v81; // [xsp+10h] [xbp-E0h]
  struct ListViewSort_o **v82; // [xsp+18h] [xbp-D8h]
  System_Int64_array *usrSvtIds; // [xsp+20h] [xbp-D0h]
  void **p_monitor; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+50h] [xbp-A0h] BYREF
  int v87; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B621C6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserDeckMaster___, latestSelectedUsrSvtId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BE4ACC(&int_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Find__, v10);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v11);
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, v12);
    sub_1BE4ACC(&MultipleViewListViewManager_TypeInfo, v13);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v15);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BE4ACC(&System_Predicate_ListViewItem__TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__, v19);
    sub_1BE4ACC(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__, v20);
    sub_1BE4ACC(&MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo, v21);
    sub_1BE4ACC(&StringLiteral_11745/*"SERVANT_EQUIP_EMPTY"*/, v22);
    sub_1BE4ACC(&StringLiteral_11705/*"SERVANT_ALL_EMPTY"*/, v23);
    sub_1BE4ACC(&StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v24);
    sub_1BE4ACC(&StringLiteral_12119/*"SERVANT_TAKE"*/, v25);
    sub_1BE4ACC(&StringLiteral_12568/*"SUM_INFO"*/, v26);
    byte_4B621C6 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  v27 = (Il2CppObject *)sub_1BE4D18(MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_76;
  v27[1].klass = (Il2CppClass *)latestSelectedUsrSvtId;
  v27[1].monitor = UserGameMaster__getSelfUserGame(0LL);
  p_monitor = &v27[1].monitor;
  sub_1BE4A70(&v27[1].monitor);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v31 = (UserServantMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  object = v27;
  v32 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v29);
    byte_4B61717 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v32 )
    goto LABEL_76;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v32,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v31 )
    goto LABEL_76;
  usrSvtIds = selectedUserSvtIds;
  Instance = (__int64)UserServantMaster__getOrganizationList(v31, 0LL);
  if ( !*p_monitor )
    goto LABEL_76;
  v33 = Instance;
  v34 = *((_DWORD *)*p_monitor + 38);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SERVANT_TAKE"*/, 0LL);
  v35 = MultipleViewListViewManager_TypeInfo;
  v36 = StringLiteral_11745/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v35 = MultipleViewListViewManager_TypeInfo;
  }
  this->fields.sort = v35->static_fields->servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1BE4A70(&this->fields.sort);
  Instance = (__int64)this->fields.sort;
  if ( !Instance )
    goto LABEL_76;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  if ( !*p_sort )
    goto LABEL_76;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL);
  v82 = &this->fields.sort;
  if ( (Instance & 1) != 0 )
  {
    v40 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SUM_INFO"*/, 0LL);
    if ( !v33 )
      goto LABEL_76;
    v44 = (System_String_o *)Instance;
    LODWORD(v86.fields.currentCryptoKey) = *(_QWORD *)(v33 + 24);
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v41, v42, v43);
    v87 = v34;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v46, v47, v48);
    Instance = (__int64)System_String__Format_62713180(v44, v45, v49, 0LL);
    if ( !v40 )
      goto LABEL_76;
    UILabel__set_text(v40, (System_String_o *)Instance, 0LL);
  }
  else if ( !v33 )
  {
    goto LABEL_76;
  }
  v50 = *(_DWORD *)(v33 + 24);
  v81 = (System_String_o *)v36;
  if ( v50 >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      if ( v51 >= v50 )
        goto LABEL_77;
      v52 = v33 + 8LL * (int)v51;
      v55 = *(_QWORD *)(v52 + 32);
      v54 = (UserServantEntity_o **)(v52 + 32);
      v53 = v55;
      if ( !v55 )
        break;
      v56 = *(_OWORD *)(v53 + 32);
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)(v53 + 16);
      *(_OWORD *)&v86.fields.fakeValue = v56;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v85 = v86;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v85, 0LL);
      if ( v51 >= *(_DWORD *)(v33 + 24) )
LABEL_77:
        sub_1BE4D30(Instance, v29);
      if ( !*p_monitor )
        break;
      v57 = Instance;
      v58 = svtIdList;
      v59 = *v54;
      v60 = *((_QWORD *)*p_monitor + 14);
      v61 = (MultipleViewListViewItem_o *)sub_1BE4D18(MultipleViewListViewItem_TypeInfo);
      MultipleViewListViewItem___ctor(v61, v51, v59, v58, v57 == v60, v62);
      Instance = (__int64)this->fields.itemList;
      if ( !Instance )
        break;
      v63 = *(_QWORD *)(Instance + 16);
      v64 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v63 )
        break;
      v65 = *(int *)(Instance + 24);
      if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v61,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = v63 + 8 * v65;
        *(_DWORD *)(Instance + 24) = v65 + 1;
        *(_QWORD *)(v66 + 32) = v61;
        Instance = sub_1BE4A70(v66 + 32);
      }
      v50 = *(_DWORD *)(v33 + 24);
      if ( (int)++v51 >= v50 )
        goto LABEL_44;
    }
LABEL_76:
    sub_1BE4D28(Instance, v29);
  }
LABEL_44:
  MultipleViewListViewManager__ModifyItem_31951024(this, usrSvtIds, v39);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( *(_QWORD *)(v33 + 24) )
    v68 = (System_String_o *)StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v68 = v81;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v69 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get(v68, 0LL);
    if ( !v69 )
      goto LABEL_76;
    UILabel__set_text(v69, (System_String_o *)Instance, 0LL);
  }
  if ( !*v82 )
    goto LABEL_76;
  iconScaleKind = (*v82)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_62;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1BE4A70(&this->fields.seed);
LABEL_62:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MultipleViewListViewManager__SetFilterButtonImage(this, v72);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Instance = (__int64)this->fields.scrollBar;
    if ( !Instance )
      goto LABEL_76;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_76;
    Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v74 = this->fields.scrollBar;
      if ( !v74 )
        goto LABEL_76;
      if ( v74->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v76 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v76,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__,
          0LL);
        if ( !itemList )
          goto LABEL_76;
        v77 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)itemList,
                (System_Predicate_T__o *)v76,
                (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v77 )
          goto LABEL_74;
        v78 = this->fields.itemList;
        v79 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v79,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__,
          0LL);
        if ( !v78 )
          goto LABEL_76;
        v77 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v78,
                (System_Predicate_T__o *)v79,
                (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v77 )
LABEL_74:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v77[1].klass), 0LL);
      }
    }
  }
}


void __fastcall MultipleViewListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MultipleViewListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B621C2 & 1) == 0 )
  {
    sub_1BE4ACC(&MultipleViewListViewManager_TypeInfo, v1);
    byte_4B621C2 = 1;
  }
  v2 = MultipleViewListViewManager_TypeInfo;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v2 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BE4D28(0LL, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall MultipleViewListViewManager__DestroyList(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BE4D28(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall MultipleViewListViewManager__EndCloseSelectFilterKind(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__EndSelectFilterKind(
        MultipleViewListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B621D0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_MultipleViewListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B621D0 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    MultipleViewListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MultipleViewListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v10, v11);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__EndSelectSortKind(
        MultipleViewListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B621D3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B621D3 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall MultipleViewListViewManager__GetAmountSortValue(
        MultipleViewListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v13; // x8

  if ( (byte_4B621D6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, v6);
    byte_4B621D6 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      klass = itemList->klass;
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MultipleViewListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( (MultipleViewListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == MultipleViewListViewItem_TypeInfo )
        v13 = itemList;
      else
        v13 = 0LL;
      if ( LODWORD(v13[3].monitor) == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1BE4D28(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
MultipleViewListViewItem_o *__fastcall MultipleViewListViewManager__GetItem(
        MultipleViewListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MultipleViewListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B621C7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, v5);
    byte_4B621C7 = 1;
  }
  result = (MultipleViewListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MultipleViewListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MultipleViewListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewItem_TypeInfo )
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


System_String_o *__fastcall MultipleViewListViewManager__GetScaleButtonSpriteName(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BE4D28(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall MultipleViewListViewManager__GetSwapChoiceList(
        MultipleViewListViewManager_o *this,
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
  int64_t itemList; // x0
  int v19; // w25
  int32_t v20; // w24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  int v34; // w21
  System_Int64_array **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]

  if ( (byte_4B621D8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4B621D8 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != MultipleViewListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v22 = *(_QWORD *)(itemList + 112);
      if ( v22 && *(_BYTE *)(itemList + 162) )
      {
        if ( *(_BYTE *)(itemList + 158) )
        {
          v23 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v38, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v32 = v25[4];
            v33 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v33,
              v17,
              *(const MethodInfo_35D4258 **)(*(_QWORD *)(v32 + 192) + 112LL));
            goto LABEL_28;
          }
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v28 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v37, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v29 = v15->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v29 )
            goto LABEL_37;
          v31 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            v32 = v30[4];
            v33 = v15;
            goto LABEL_27;
          }
          v27 = &v29->obj.klass + v31;
          v15->fields._size = v31 + 1;
        }
        v27[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BE4D28(itemList, v17);
  v34 = v16->fields._size + v15->fields._size;
  if ( v34 < 1 )
  {
    *choiceList = 0LL;
    sub_1BE4A70(choiceList);
    v35 = unchoiceList;
    *unchoiceList = 0LL;
  }
  else
  {
    *choiceList = System_Collections_Generic_List_long___ToArray(
                    v15,
                    (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1BE4A70(choiceList);
    *unchoiceList = System_Collections_Generic_List_long___ToArray(
                      v16,
                      (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = unchoiceList;
  }
  sub_1BE4A70(v35);
  return v34 > 0;
}


bool __fastcall MultipleViewListViewManager__GetSwapLockList(
        MultipleViewListViewManager_o *this,
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
  int64_t itemList; // x0
  int v19; // w25
  int32_t v20; // w24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  int v34; // w21
  System_Int64_array **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]

  if ( (byte_4B621D7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4B621D7 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != MultipleViewListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v22 = *(_QWORD *)(itemList + 112);
      if ( v22 && *(_BYTE *)(itemList + 161) )
      {
        if ( *(_BYTE *)(itemList + 157) )
        {
          v23 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v38, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v32 = v25[4];
            v33 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v33,
              v17,
              *(const MethodInfo_35D4258 **)(*(_QWORD *)(v32 + 192) + 112LL));
            goto LABEL_28;
          }
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v28 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v37, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v29 = v15->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v29 )
            goto LABEL_37;
          v31 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            v32 = v30[4];
            v33 = v15;
            goto LABEL_27;
          }
          v27 = &v29->obj.klass + v31;
          v15->fields._size = v31 + 1;
        }
        v27[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BE4D28(itemList, v17);
  v34 = v16->fields._size + v15->fields._size;
  if ( v34 < 1 )
  {
    *lockList = 0LL;
    sub_1BE4A70(lockList);
    v35 = unlockList;
    *unlockList = 0LL;
  }
  else
  {
    *lockList = System_Collections_Generic_List_long___ToArray(
                  v15,
                  (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1BE4A70(lockList);
    *unlockList = System_Collections_Generic_List_long___ToArray(
                    v16,
                    (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = unlockList;
  }
  sub_1BE4A70(v35);
  return v34 > 0;
}


void __fastcall MultipleViewListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MultipleViewListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B621C3 & 1) == 0 )
  {
    sub_1BE4ACC(&MultipleViewListViewManager_TypeInfo, v1);
    byte_4B621C3 = 1;
  }
  v2 = MultipleViewListViewManager_TypeInfo;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v2 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BE4D28(0LL, v1);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MultipleViewListViewManager__ModifyItem(
        MultipleViewListViewManager_o *this,
        int64_t usrSvtId,
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
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x11
  MultipleViewListViewItem_o *current; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v23; // q0
  int64_t v24; // x0
  Il2CppObject v25; // q0
  int64_t v26; // x23
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q0
  int64_t v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v33; // x1
  struct ListViewObject_o *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4B621C8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, usrSvtId);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4B621C8 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( this->fields.itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v38,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v39.fields._list = *(_OWORD *)&v38.fields.currentCryptoKey;
      v39.fields._current = (Il2CppObject *)v38.fields.fakeValue;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v39,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v18 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v39,
            (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v39.fields._current
          && (methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v39.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (MultipleViewListViewItem_c *)v39.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MultipleViewListViewItem_TypeInfo )
            current = (MultipleViewListViewItem_o *)v39.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_16:
            if ( !current )
              sub_1BE4D28(v18, v19);
            userSvtEntity = current->fields.userSvtEntity;
            if ( !userSvtEntity )
              sub_1BE4D28(v18, v19);
            v23 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v38.fields.fakeValue = v23;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v37 = v38;
            v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v37, 0LL);
            v25 = Entity[2];
            v26 = v24;
            *(Il2CppObject *)&v36.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v36.fields.fakeValue = v25;
            v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v36, 0LL);
            if ( v26 == v18 )
            {
              current->fields.userSvtEntity = (struct UserServantEntity_o *)Entity;
              v18 = sub_1BE4A70(&current->fields.userSvtEntity);
            }
            goto LABEL_27;
          }
        }
        else
        {
          current = 0LL;
          if ( Entity )
            goto LABEL_16;
        }
        if ( !current )
          sub_1BE4D28(v18, v19);
LABEL_27:
        v27 = current->fields.userSvtEntity;
        if ( !v27 )
          sub_1BE4D28(v18, v19);
        v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v35 = v38;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v35, 0LL);
        if ( !SelfUserGame )
          sub_1BE4D28(v29, v30);
        MultipleViewListViewItem__ModifyItem(current, v29 == SelfUserGame->fields.favoriteUserSvtId, v31);
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v34 = current->fields.viewObject;
          if ( !v34 )
            sub_1BE4D28(0LL, v33);
          ((void (__fastcall *)(struct ListViewObject_o *, MultipleViewListViewItem_o *, Il2CppMethodPointer))v34->klass->vtable._5_SetItem.method)(
            v34,
            current,
            v34->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_44:
    sub_1BE4D28(Master_object, v14);
  }
}


void __fastcall MultipleViewListViewManager__ModifyItem_31951024(
        MultipleViewListViewManager_o *this,
        System_Int64_array *usrSvtIds,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  MultipleViewListViewManager___c_c *v23; // x0
  System_Predicate_long__o *_9__31_0; // x20
  Il2CppObject *v25; // x22
  struct MultipleViewListViewManager___c_StaticFields *static_fields; // x0
  unsigned int Index_long; // w22
  System_Collections_Generic_List_int__o *v28; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  int64_t v30; // x1
  __int64 v31; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x23
  unsigned __int64 v33; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  _BOOL4 v37; // w21
  Il2CppObject *current; // x24
  Il2CppObject *v39; // x23
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 methodPtr_low; // x9
  Il2CppClass *v43; // x10
  MultipleViewListViewItem_o **v44; // x22
  System_Predicate_long__o *v45; // x24
  __int64 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w23
  UserServantEntity_o *userSvtEntity; // x0
  __int64 SvtId; // x0
  _BOOL8 v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x4
  __int64 v54; // x0
  __int64 v55; // x1
  UnityEngine_Object_o *viewObject; // x23
  _BOOL8 v57; // x0
  MultipleViewListViewItem_o *v58; // x1
  struct ListViewObject_o *v59; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B621C9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_FindIndex_long___, usrSvtIds);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, v16);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v17);
    sub_1BE4ACC(&System_Predicate_long__TypeInfo, v18);
    sub_1BE4ACC(&Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__, v19);
    sub_1BE4ACC(&Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__, v20);
    sub_1BE4ACC(&MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo, v21);
    sub_1BE4ACC(&MultipleViewListViewManager___c_TypeInfo, v22);
    byte_4B621C9 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  if ( this->fields.itemList )
  {
    v23 = MultipleViewListViewManager___c_TypeInfo;
    if ( !MultipleViewListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MultipleViewListViewManager___c_TypeInfo);
      v23 = MultipleViewListViewManager___c_TypeInfo;
    }
    _9__31_0 = v23->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = MultipleViewListViewManager___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__31_0 = (System_Predicate_long__o *)sub_1BE4D18(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(_9__31_0, v25, Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__, 0LL);
      static_fields = MultipleViewListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = _9__31_0;
      sub_1BE4A70(&static_fields->__9__31_0);
    }
    Index_long = System_Array__FindIndex_long_(
                   usrSvtIds,
                   (System_Predicate_T__o *)_9__31_0,
                   (const MethodInfo_30549E4 *)Method_System_Array_FindIndex_long___);
    v28 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !usrSvtIds )
      goto LABEL_50;
    v31 = *(_QWORD *)&usrSvtIds->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = Master_object;
      v33 = 0LL;
      do
      {
        if ( v33 >= (unsigned int)v31 )
          sub_1BE4D30(Master_object, v30);
        v30 = usrSvtIds->m_Items[v33];
        if ( v30 >= 1 )
        {
          if ( !v32 )
            goto LABEL_50;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                          v32,
                                                                          v30,
                                                                          (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Master_object )
            goto LABEL_50;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(
                                                                          (UserServantEntity_o *)Master_object,
                                                                          0LL);
          if ( !v28 )
            goto LABEL_50;
          items = v28->fields._items;
          v35 = Method_System_Collections_Generic_List_int__Add__;
          ++v28->fields._version;
          if ( !items )
            goto LABEL_50;
          size = v28->fields._size;
          v30 = (unsigned int)Master_object;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v28,
              (int32_t)Master_object,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v28->fields._size = size + 1;
            items->m_Items[size + 1] = (int)Master_object;
          }
        }
        LODWORD(v31) = usrSvtIds->max_length;
      }
      while ( (__int64)++v33 < (int)v31 );
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( !Master_object )
LABEL_50:
      sub_1BE4D28(Master_object, v30);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v37 = Index_long >> 31;
    v61 = v60;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v61,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v61.fields._current;
      v39 = (Il2CppObject *)sub_1BE4D18(MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo);
      System_Object___ctor(v39, 0LL);
      if ( !v39 )
        sub_1BE4D28(v40, v41);
      if ( current )
      {
        methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (MultipleViewListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] == MultipleViewListViewItem_TypeInfo )
            v43 = (Il2CppClass *)current;
          else
            v43 = 0LL;
        }
        else
        {
          v43 = 0LL;
        }
        v39[1].klass = v43;
        v44 = (MultipleViewListViewItem_o **)&v39[1];
      }
      else
      {
        v39[1].klass = 0LL;
        v44 = (MultipleViewListViewItem_o **)&v39[1];
      }
      sub_1BE4A70(v44);
      v45 = (System_Predicate_long__o *)sub_1BE4D18(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v45,
        v39,
        Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__,
        0LL);
      v46 = System_Array__FindIndex_long_(
              usrSvtIds,
              (System_Predicate_T__o *)v45,
              (const MethodInfo_30549E4 *)Method_System_Array_FindIndex_long___);
      if ( !*v44 )
        sub_1BE4D28(v46, v47);
      v48 = v46;
      userSvtEntity = (*v44)->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1BE4D28(0LL, v47);
      SvtId = UserServantEntity__getSvtId(userSvtEntity, 0LL);
      if ( !v28 )
        sub_1BE4D28(SvtId, (unsigned int)SvtId);
      v51 = System_Collections_Generic_List_int___Contains(
              v28,
              SvtId,
              (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !*v44 )
        sub_1BE4D28(v51, v52);
      MultipleViewListViewItem__ModifyItem_31962048(*v44, v48, v51, v37, v53);
      if ( !*v44 )
        sub_1BE4D28(v54, v55);
      viewObject = (UnityEngine_Object_o *)(*v44)->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v57 = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
      if ( v57 )
      {
        v58 = *v44;
        if ( !*v44 )
          sub_1BE4D28(v57, 0LL);
        v59 = v58->fields.viewObject;
        if ( !v59 )
          sub_1BE4D28(0LL, v58);
        ((void (__fastcall *)(struct ListViewObject_o *))v59->klass->vtable._5_SetItem.method)(v59);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v61,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__ModifyList(
        MultipleViewListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Master_object; // x0
  __int64 v11; // x1
  int v12; // w8
  int64_t v13; // x20
  unsigned int v14; // w25
  bool v15; // w21
  __int64 v16; // x8
  __int128 v17; // q0
  System_Collections_Generic_List_object__o *itemList; // x8
  int64_t v19; // x23
  int32_t v20; // w24
  MultipleViewListViewItem_o *v21; // x22
  __int64 methodPtr_low; // x10
  __int64 v23; // x8
  __int128 v24; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  const MethodInfo *v28; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-80h]

  if ( (byte_4B621D9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, isIconSizeChange);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4B621D9 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_31;
  v12 = *(_DWORD *)(Master_object + 24);
  v13 = Master_object;
  if ( v12 >= 1 )
  {
    v14 = 0;
    v15 = isIconSizeChange;
    while ( 1 )
    {
      if ( v14 >= v12 )
        sub_1BE4D30(Master_object, v11);
      v16 = *(_QWORD *)(v13 + 8LL * (int)v14 + 32);
      if ( !v16 )
        break;
      v17 = *(_OWORD *)(v16 + 32);
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v31, 0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v19 = Master_object;
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= itemList->fields._size )
          goto LABEL_29;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   itemList,
                                   v20,
                                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Master_object )
          goto LABEL_31;
        v21 = (MultipleViewListViewItem_o *)Master_object;
        methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) < (unsigned int)methodPtr_low
          || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) != MultipleViewListViewItem_TypeInfo )
        {
          goto LABEL_31;
        }
        v23 = *(_QWORD *)(Master_object + 112);
        if ( v23 )
        {
          v24 = *(_OWORD *)(v23 + 32);
          *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
          *(_OWORD *)&v32.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v32;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v30, 0LL);
          if ( Master_object == v19 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v20;
        if ( !itemList )
          goto LABEL_31;
      }
      userSvtEntity = v21->fields.userSvtEntity;
      if ( !userSvtEntity )
        break;
      v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v32.fields.fakeValue = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v29 = v32;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v29, 0LL);
      MultipleViewListViewManager__ModifyLockItem(this, v21, v27, 1, v15, v28);
LABEL_29:
      v12 = *(_DWORD *)(v13 + 24);
      if ( (int)++v14 >= v12 )
        return;
    }
LABEL_31:
    sub_1BE4D28(Master_object, v11);
  }
}


void __fastcall MultipleViewListViewManager__ModifyLockItem(
        MultipleViewListViewManager_o *this,
        MultipleViewListViewItem_o *multipleViewItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v16; // q1
  MultipleViewListViewManager_o *v17; // x23
  int64_t v18; // x0
  __int128 v19; // q1
  MultipleViewListViewManager_o *v20; // x25
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4B621DB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, multipleViewItem);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (MultipleViewListViewManager_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B621DB = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (MultipleViewListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (MultipleViewListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (MultipleViewListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !multipleViewItem )
        goto LABEL_26;
      userSvtEntity = multipleViewItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v17 = this;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v25.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v25;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v24, 0LL);
      v19 = *(_OWORD *)&v17->fields.dropObjectList;
      v20 = (MultipleViewListViewManager_o *)v18;
      *(UnityEngine_MonoBehaviour_Fields *)&v23.fields.currentCryptoKey = v17->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v23.fields.fakeValue = v19;
      this = (MultipleViewListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                                &v23,
                                                0LL);
      if ( v20 == this )
      {
        multipleViewItem->fields.userSvtEntity = (struct UserServantEntity_o *)v17;
        this = (MultipleViewListViewManager_o *)sub_1BE4A70(&multipleViewItem->fields.userSvtEntity);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !multipleViewItem )
      goto LABEL_26;
  }
  else
  {
    if ( !multipleViewItem )
      goto LABEL_26;
    MultipleViewListViewItem__ModifyLockItem(multipleViewItem, (const MethodInfo *)multipleViewItem);
    MultipleViewListViewItem__ModifyChoiceItem(multipleViewItem, v21);
  }
  viewObject = (UnityEngine_Object_o *)multipleViewItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (MultipleViewListViewManager_o *)multipleViewItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(MultipleViewListViewManager_o *, MultipleViewListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        multipleViewItem,
        this->klass->vtable._6_GetFocusItemIndex.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (MultipleViewListViewManager_o *)multipleViewItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)multipleViewItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1BE4D28(this, multipleViewItem);
  }
}


void __fastcall MultipleViewListViewManager__OnClickFilterKind(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B621CF & 1) == 0 )
  {
    sub_1BE4ACC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_MultipleViewListViewManager_EndSelectFilterKind__, v3);
    sub_1BE4ACC(&Method_MultipleViewListViewManager_OnClickFilterKind__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B621CF = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_MultipleViewListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_MultipleViewListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_MultipleViewListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1BE4D28(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, 9, sort, v11, -1, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnClickListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall MultipleViewListViewManager__OnClickSelectListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct MultipleViewListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1BE4A70(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BE4D28(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall MultipleViewListViewManager__OnClickSortAscendingOrder(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B621D4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_MultipleViewListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B621D4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MultipleViewListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_MultipleViewListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BE4D28(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnClickSortKind(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B621D2 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_MultipleViewListViewManager_EndSelectSortKind__, v3);
    sub_1BE4ACC(&Method_MultipleViewListViewManager_OnClickSortKind__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B621D2 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_MultipleViewListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_MultipleViewListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_MultipleViewListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1BE4D28(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 3, sort, 0, v11, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnLongPushListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct MultipleViewListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  unsigned int Index; // w0

  if ( (byte_4B621CE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_MultipleViewListViewManager_OnLongPushListView__, obj);
    byte_4B621CE = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_1BE4A70(&this->fields.callbackFunc);
      if ( !callbackFunc )
        return;
      v7 = Method_MultipleViewListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1BE4AE4(Method_MultipleViewListViewManager_OnLongPushListView__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          1LL,
          Index,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
    }
    sub_1BE4D28(scrollView, obj);
  }
}


void __fastcall MultipleViewListViewManager__OnMoveEnd(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B621CD & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B621CD = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1BE4D28(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BE4A70(&this->fields.callbackFunc2);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__RequestListObject(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B621CB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__, v11);
    sub_1BE4ACC(&Method_MultipleViewListViewManager_OnMoveEnd__, v12);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v13);
    byte_4B621CB = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)MultipleViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v19, v20);
      MultipleViewListViewObject__Init_31971264((MultipleViewListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__RequestListObject_31970236(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B621CC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__, v9);
    sub_1BE4ACC(&Method_MultipleViewListViewManager_OnMoveEnd__, v10);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v11);
    byte_4B621CC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)MultipleViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v17, v18);
      MultipleViewListViewObject__Init_31971348((MultipleViewListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
  }
}


void __fastcall MultipleViewListViewManager__SetCanLongPushFlag(
        MultipleViewListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void __fastcall MultipleViewListViewManager__SetFilterButtonImage(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4B621D1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17735/*"btn_filter_on"*/, method);
    sub_1BE4ACC(&StringLiteral_17734/*"btn_filter"*/, v3);
    byte_4B621D1 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BE4D28(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17734/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17735/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall MultipleViewListViewManager__SetMode(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        MultipleViewListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BE4A70(&this->fields.callbackFunc);
  MultipleViewListViewManager__SetMode_31954944(this, mode, v6);
}


void __fastcall MultipleViewListViewManager__SetMode_31954944(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_9:
    sub_1BE4D28(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    MultipleViewListViewManager__RequestListObject_31970236(this, mode + 1, v7);
}


void __fastcall MultipleViewListViewManager__SetMode_31970184(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BE4A70(&this->fields.callbackFunc2);
  MultipleViewListViewManager__SetMode_31954944(this, mode, v6);
}


void __fastcall MultipleViewListViewManager__SetObjectItem(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B621CA & 1) == 0 )
  {
    this = (MultipleViewListViewManager_o *)sub_1BE4ACC(&MultipleViewListViewObject_TypeInfo, obj);
    byte_4B621CA = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MultipleViewListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MultipleViewListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MultipleViewListViewObject__Init_31970112((MultipleViewListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall MultipleViewListViewManager__SetSortButtonImage(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B621D5 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17765/*"btn_sort_up"*/, v3);
    sub_1BE4ACC(&StringLiteral_17856/*"btn_txt_up"*/, v4);
    sub_1BE4ACC(&StringLiteral_17809/*"btn_txt_new"*/, v5);
    sub_1BE4ACC(&StringLiteral_17799/*"btn_txt_down"*/, v6);
    sub_1BE4ACC(&StringLiteral_17816/*"btn_txt_old"*/, v7);
    sub_1BE4ACC(&StringLiteral_17762/*"btn_sort_down"*/, v8);
    byte_4B621D5 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17816/*"btn_txt_old"*/ : &StringLiteral_17809/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17856/*"btn_txt_up"*/ : &StringLiteral_17799/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BE4D28(sort, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__UpdateDisplayState(
        MultipleViewListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v10; // w19
  __int64 v11; // x1
  Il2CppObject *current; // x0
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B621DA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, v8);
    byte_4B621DA = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v14.fields._current;
      if ( !v14.fields._current )
        goto LABEL_13;
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v14.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (MultipleViewListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1BE4FE8(v14.fields._current);
LABEL_13:
        sub_1BE4D28(current, v11);
      }
      BYTE4(v14.fields._current[10].klass) = v10;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall MultipleViewListViewManager__add_callbackFunc(
        MultipleViewListViewManager_o *this,
        MultipleViewListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MultipleViewListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MultipleViewListViewManager_o *v10; // x0
  MultipleViewListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B621BE & 1) == 0 )
  {
    sub_1BE4ACC(&MultipleViewListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B621BE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MultipleViewListViewManager_CallbackFunc_c *)v7->klass != MultipleViewListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1BE4FE8(v7);
  MultipleViewListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall MultipleViewListViewManager__add_callbackFunc2(
        MultipleViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MultipleViewListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B621C0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B621C0 = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1BE4FE8(v7);
  MultipleViewListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MultipleViewListViewObject__o *__fastcall MultipleViewListViewManager__get_ClippingObjectList(
        MultipleViewListViewManager_o *this,
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
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B621C5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B621C5 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BE4D28(0LL, v18);
      Item = (ListViewItem_o *)MultipleViewListViewObject__GetItem(
                                 (MultipleViewListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BE4D28(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_41702652((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1BE4D28(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BE4D28(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BE4D28(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BE4D28(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1BE4A70(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MultipleViewListViewObject__o *)v11;
}


System_Collections_Generic_List_MultipleViewListViewObject__o *__fastcall MultipleViewListViewManager__get_ObjectList(
        MultipleViewListViewManager_o *this,
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
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B621C4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B621C4 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1BE4D28(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BE4D28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1BE4A70(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MultipleViewListViewObject__o *)v11;
}


void __fastcall MultipleViewListViewManager__remove_callbackFunc(
        MultipleViewListViewManager_o *this,
        MultipleViewListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MultipleViewListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MultipleViewListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B621BF & 1) == 0 )
  {
    sub_1BE4ACC(&MultipleViewListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B621BF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MultipleViewListViewManager_CallbackFunc_c *)v7->klass != MultipleViewListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1BE4FE8(v7);
  MultipleViewListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall MultipleViewListViewManager__remove_callbackFunc2(
        MultipleViewListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4B621C1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B621C1 = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BE4FE8(v7);
  MultipleViewListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager_CallbackFunc___ctor(
        MultipleViewListViewManager_CallbackFunc_o *this,
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
  sub_1BE4A70(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A200B0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A20058;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MultipleViewListViewManager_CallbackFunc__BeginInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4B621DD & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&MultipleViewListViewManager_ResultKind_TypeInfo, v9);
    byte_4B621DD = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             MultipleViewListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall MultipleViewListViewManager_CallbackFunc__EndInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall MultipleViewListViewManager_CallbackFunc__Invoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
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


void __fastcall MultipleViewListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B621DE & 1) == 0 )
  {
    sub_1BE4ACC(&MultipleViewListViewManager___c_TypeInfo, v1);
    byte_4B621DE = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(MultipleViewListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MultipleViewListViewManager___c_TypeInfo->static_fields->__9 = (struct MultipleViewListViewManager___c_o *)v2;
  sub_1BE4A70(MultipleViewListViewManager___c_TypeInfo->static_fields);
}


void __fastcall MultipleViewListViewManager___c___ctor(
        MultipleViewListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MultipleViewListViewManager___c___ModifyItem_b__31_0(
        MultipleViewListViewManager___c_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return id < 1;
}


void __fastcall MultipleViewListViewManager___c__DisplayClass27_0___ctor(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__0(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  MultipleViewListViewManager___c__DisplayClass27_0_o *v4; // x19
  __int64 v5; // x1
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  MultipleViewListViewManager___c__DisplayClass27_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4B621DF & 1) == 0 )
  {
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, item);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1BE4ACC(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    v5);
    byte_4B621DF = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  item = (ListViewItem_o *)MultipleViewListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MultipleViewListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewItem_TypeInfo )
  {
    v10 = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1BE4FE8(v3);
    return MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__1(v10, v11, v12);
  }
  klass = v3[1].klass;
  if ( !klass )
LABEL_10:
    sub_1BE4D28(this, item);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v14.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v13, 0LL) == v4->fields.latestSelectedUsrSvtId;
}


bool __fastcall MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__1(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  MultipleViewListViewManager___c__DisplayClass27_0_o *v4; // x19
  __int64 v5; // x1
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  MultipleViewListViewManager___c__DisplayClass31_0_o *v11; // x0
  int64_t v12; // x1
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4B621E0 & 1) == 0 )
  {
    sub_1BE4ACC(&MultipleViewListViewItem_TypeInfo, item);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1BE4ACC(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    v5);
    byte_4B621E0 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  item = (ListViewItem_o *)MultipleViewListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (MultipleViewListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] == MultipleViewListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
    {
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v15.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v14 = v15;
      this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                                                      &v14,
                                                                      0LL);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (MultipleViewListViewManager___c__DisplayClass27_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1BE4D28(this, item);
  }
  v11 = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_1BE4FE8(v3);
  return MultipleViewListViewManager___c__DisplayClass31_0___ModifyItem_b__1(v11, v12, v13);
}


void __fastcall MultipleViewListViewManager___c__DisplayClass31_0___ctor(
        MultipleViewListViewManager___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MultipleViewListViewManager___c__DisplayClass31_0___ModifyItem_b__1(
        MultipleViewListViewManager___c__DisplayClass31_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  MultipleViewListViewManager___c__DisplayClass31_0_o *v4; // x20
  struct MultipleViewListViewItem_o *servantItem; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B621E1 & 1) == 0 )
  {
    this = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_1BE4ACC(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    id);
    byte_4B621E1 = 1;
  }
  servantItem = v4->fields.servantItem;
  if ( !servantItem || (userSvtEntity = servantItem->fields.userSvtEntity) == 0LL )
    sub_1BE4D28(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v9, 0LL) == id;
}