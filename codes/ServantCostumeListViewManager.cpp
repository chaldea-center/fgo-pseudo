void __fastcall ServantCostumeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  System_String_o *SORT_SAVE_KEY; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  ListViewSort_o *v17; // x20
  struct ServantCostumeListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FD004 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&ServantCostumeListViewManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_4303/*"CostumeCombineList"*/, v9);
    byte_40FD004 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCostumeListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_4303/*"CostumeCombineList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_4303/*"CostumeCombineList"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v17 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v13, v14, v15, v16);
  ListViewSort___ctor_30208480(v17, SORT_SAVE_KEY, 8, 1, 0LL);
  v18 = ServantCostumeListViewManager_TypeInfo->static_fields;
  v18->servantSortStatus = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v18->servantSortStatus,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall ServantCostumeListViewManager___ctor(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewManager__ChangeIconScale(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleKindSpriteName; // x0
  struct ListViewSort_o *v15; // x8
  ListViewSort_o *v16; // x0

  if ( (byte_40FD003 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD003 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v11 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v11 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v11 = 1;
LABEL_12:
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, ScaleKindSpriteName, 0LL), (v15 = this->fields.sort) == 0LL)
    || (v15->fields.iconScaleKind = this->fields.scaleType, (v16 = this->fields.sort) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__Save(v16, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCostumeListViewManager__CreateList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsActiveBgTxt; // w0
  const MethodInfo *v10; // x2
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ServantCostumeItemInfo_array *ServantCostumeItemInfoList; // x20
  ServantCostumeListViewManager_c *v18; // x8
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x21
  ListViewSort_o *v21; // x0
  int32_t iconScaleKind; // w1
  UISprite_o *scaleChangeTabSprite; // x21
  System_String_o *ScaleKindSpriteName; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x8
  unsigned __int64 v39; // x25
  ServantCostumeItemInfo_o *v40; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  UserServantEntity_o *v42; // x24
  ServantCostumeListViewItem_o *v43; // x22
  const MethodInfo *v44; // x1
  UILabel_o *combineInfoMsgLabel; // x19
  System_String_o *v46; // x0
  UserServantEntity_o *currentBase; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FCFF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&ServantCostumeListViewItem_TypeInfo, v4);
    sub_B16FFC(&ServantCostumeListViewManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3394/*"COSTUME_SERVANT_LIST_MSG"*/, v6);
    byte_40FCFF0 = 1;
  }
  currentBase = 0LL;
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL);
  currentBase = 0LL;
  ServantCostumeItemInfoList = ServantCostumeListViewManager__GetServantCostumeItemInfoList(this, &currentBase, v10);
  v18 = ServantCostumeListViewManager_TypeInfo;
  if ( (BYTE3(ServantCostumeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo);
    v18 = ServantCostumeListViewManager_TypeInfo;
  }
  servantSortStatus = v18->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !this->fields.sort )
    goto LABEL_29;
  ListViewSort__Load(this->fields.sort, 0LL);
  v21 = *p_sort;
  if ( !*p_sort )
    goto LABEL_29;
  iconScaleKind = v21->fields.iconScaleKind;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  this->fields.scaleType = iconScaleKind;
  ScaleKindSpriteName = ListViewSort__GetScaleKindSpriteName(v21, iconScaleKind, 0LL);
  if ( !scaleChangeTabSprite )
    goto LABEL_29;
  UISprite__set_spriteName(scaleChangeTabSprite, ScaleKindSpriteName, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
  }
  else if ( scaleType == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_18;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
LABEL_18:
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !ServantCostumeItemInfoList )
    goto LABEL_29;
  v38 = *(_QWORD *)&ServantCostumeItemInfoList->max_length;
  if ( (int)v38 >= 1 )
  {
    v39 = 0LL;
    while ( 1 )
    {
      if ( v39 >= (unsigned int)v38 )
      {
        sub_B17100(v33, v34, v35);
        sub_B170A0();
      }
      v40 = ServantCostumeItemInfoList->m_Items[v39];
      itemList = this->fields.itemList;
      v42 = currentBase;
      v43 = (ServantCostumeListViewItem_o *)sub_B170CC(ServantCostumeListViewItem_TypeInfo, v34, v35, v36, v37);
      ServantCostumeListViewItem___ctor(v43, v40, v42, 0LL);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v38) = ServantCostumeItemInfoList->max_length;
      if ( (__int64)++v39 >= (int)v38 )
        goto LABEL_24;
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_24:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantCostumeListViewManager__SetFilterButtonImage(this, v44);
  combineInfoMsgLabel = this->fields.combineInfoMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3394/*"COSTUME_SERVANT_LIST_MSG"*/, 0LL);
  if ( !combineInfoMsgLabel )
    goto LABEL_29;
  UILabel__set_text(combineInfoMsgLabel, v46, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeItemInfo_o *__fastcall ServantCostumeListViewManager__CreateServantCostumeItemInfo(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        UserServantMaster_o *userServantMaster,
        ServantCostumeMaster_o *servantCostumeMaster,
        ServantCostumeReleaseMaster_o *servantCostumeReleaseMaster,
        const MethodInfo *method)
{
  __int64 v10; // x1
  ServantCostumeItemInfo_o *v11; // x21
  UserServantEntity_o *v12; // x0
  const MethodInfo *v13; // x3
  ServantCostumeEntity_array *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  int max_length; // w8
  ServantCostumeEntity_array *v19; // x22
  unsigned int v20; // w24
  ServantCostumeEntity_o *v21; // x8
  __int64 v22; // x4
  ServantLeaderInfo_o *v23; // x23

  if ( (byte_40FCFF2 & 1) == 0 )
  {
    sub_B16FFC(&ServantCostumeItemInfo_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&ServantLeaderInfo_TypeInfo, v10);
    byte_40FCFF2 = 1;
  }
  v11 = (ServantCostumeItemInfo_o *)sub_B170CC(
                                      ServantCostumeItemInfo_TypeInfo,
                                      *(_QWORD *)&svtId,
                                      userServantMaster,
                                      servantCostumeMaster,
                                      servantCostumeReleaseMaster);
  ServantCostumeItemInfo___ctor(v11, 0LL);
  if ( !userServantMaster )
    goto LABEL_19;
  v12 = UserServantMaster__CostumeTargetEntity(userServantMaster, svtId, 1, 0LL);
  if ( !v12 )
  {
    if ( servantCostumeMaster )
    {
      v14 = ServantCostumeMaster__releasedCostumeEntityList(servantCostumeMaster, svtId, 0, v13);
      if ( v14 )
      {
        max_length = v14->max_length;
        v19 = v14;
        if ( max_length < 1 )
          return v11;
        v20 = 0;
        while ( 1 )
        {
          if ( v20 >= max_length )
          {
            sub_B17100(v14, v15, v16);
            sub_B170A0();
          }
          v21 = v19->m_Items[v20];
          if ( !v21 || !servantCostumeReleaseMaster )
            break;
          v14 = (ServantCostumeEntity_array *)ServantCostumeReleaseMaster__checkItemHaving(
                                                servantCostumeReleaseMaster,
                                                svtId,
                                                v21->fields.id,
                                                v17);
          if ( ((unsigned __int8)v14 & 1) != 0 )
          {
            v23 = (ServantLeaderInfo_o *)sub_B170CC(ServantLeaderInfo_TypeInfo, v15, v16, v17, v22);
            ServantLeaderInfo___ctor_29610580(v23, svtId, 0, 1, 0LL);
            if ( !v11 )
              break;
            ServantCostumeItemInfo__SetNotHaveSevantData(v11, v23, 0LL);
          }
          max_length = v19->max_length;
          if ( (int)++v20 >= max_length )
            return v11;
        }
      }
    }
LABEL_19:
    sub_B170D4();
  }
  if ( !v11 )
    goto LABEL_19;
  ServantCostumeItemInfo__SetUserSvtData(v11, v12, 0LL);
  return v11;
}


void __fastcall ServantCostumeListViewManager__DestroyList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  ListViewSort__Save(sort, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__EndSelectFilterKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40FCFFD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FCFFD = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantCostumeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__EndSelectSortKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FD000 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FD000 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantCostumeListViewManager__GetAmountSortValue(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  __int64 v13; // x11
  ServantCostumeListViewItem_o *v14; // x0

  if ( (byte_40FCFFB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&ServantCostumeListViewItem_TypeInfo, v6);
    byte_40FCFFB = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (ServantCostumeListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != ServantCostumeListViewItem_TypeInfo )
      {
        break;
      }
      v13 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        if ( (ServantCostumeListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] == ServantCostumeListViewItem_TypeInfo )
          v14 = (ServantCostumeListViewItem_o *)itemList->fields._items->m_Items[v10];
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      ++v10;
      if ( ServantCostumeListViewItem__get_SvtId(v14, 0LL) == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B170D4();
  }
  return 0LL;
}


UserServantEntity_o *__fastcall ServantCostumeListViewManager__GetSelectBaseSvtData(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.baseUserSvtData;
}


UserServantEntity_o *__fastcall ServantCostumeListViewManager__GetSelectUserSvtEntity(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUserSvtEntity;
}


ServantCostumeItemInfo_array *__fastcall ServantCostumeListViewManager__GetServantCostumeItemInfoList(
        ServantCostumeListViewManager_o *this,
        UserServantEntity_o **currentBase,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v23; // x0
  ServantCostumeMaster_o *v24; // x23
  WebViewManager_o *v25; // x0
  ServantCostumeReleaseMaster_o *v26; // x24
  WebViewManager_o *v27; // x0
  WarQuestSelectionMaster_o *v28; // x0
  const MethodInfo *v29; // x1
  UserServantCollectionMaster_o *v30; // x25
  System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  ServantCostumeListViewManager_o *ServantCostumeItemInfo; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  MethodInfo *v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  ServantCostumeListViewManager_o *v41; // x26
  unsigned __int64 v42; // x28
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x27
  int size; // w8
  __int64 v45; // x24
  __int64 v46; // x8
  __int64 v47; // x22
  __int128 v48; // q0
  int64_t v49; // x0
  struct UserServantEntity_o *baseUserSvtData; // x8
  __int128 v51; // q0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  WarBoardManager_TaskList_o *v58; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-70h]

  if ( (byte_40FCFF1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, currentBase);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FCFF1 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo,
                                                                                                  currentBase,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v23 )
    goto LABEL_40;
  v24 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v23,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_40;
  v26 = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v25,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_40;
  v28 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v27,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v24 )
    goto LABEL_40;
  v30 = (UserServantCollectionMaster_o *)v28;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList(v24, v29);
  if ( !CostumeSvtIdList )
    goto LABEL_40;
  ServantCostumeItemInfo = (ServantCostumeListViewManager_o *)System_Collections_Generic_List_int___ToArray(
                                                                CostumeSvtIdList,
                                                                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !ServantCostumeItemInfo )
    goto LABEL_40;
  dropObjectList = ServantCostumeItemInfo->fields.dropObjectList;
  v41 = ServantCostumeItemInfo;
  if ( (int)dropObjectList >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      if ( v42 >= (unsigned int)dropObjectList )
      {
        sub_B17100(ServantCostumeItemInfo, v33, v34);
        sub_B170A0();
      }
      ServantCostumeItemInfo = (ServantCostumeListViewManager_o *)ServantCostumeListViewManager__CreateServantCostumeItemInfo(
                                                                    ServantCostumeItemInfo,
                                                                    *((_DWORD *)&v41->fields.indicator + v42),
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    v24,
                                                                    v26,
                                                                    v37);
      if ( !ServantCostumeItemInfo )
        break;
      v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)ServantCostumeItemInfo;
      if ( *(_QWORD *)&ServantCostumeItemInfo->fields.m_CachedPtr || ServantCostumeItemInfo->fields.dropObjectList )
      {
        ServantCostumeListViewManager__SetServantCostumeItemInfoData(
          ServantCostumeItemInfo,
          (ServantCostumeItemInfo_o *)ServantCostumeItemInfo,
          v24,
          v30,
          v26,
          v37);
        if ( !*((_BYTE *)&v43->fields + 22) )
        {
          if ( !v20 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v20,
            v43,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__);
        }
      }
      LODWORD(dropObjectList) = v41->fields.dropObjectList;
      if ( (__int64)++v42 >= (int)dropObjectList )
        goto LABEL_20;
    }
LABEL_40:
    sub_B170D4();
  }
LABEL_20:
  *currentBase = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)currentBase, 0LL, v34, v35, v36, (System_Int32_array **)v37, v38, v39);
  if ( !this->fields.baseUserSvtData )
  {
    if ( !v20 )
      goto LABEL_40;
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  }
  if ( !v20 )
    goto LABEL_40;
  size = v20->fields._size;
  if ( size < 1 )
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  v45 = 4LL;
  do
  {
    if ( size <= (unsigned int)(v45 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v46 = *((_QWORD *)&v20->fields._items->obj.klass + v45);
    if ( !v46 )
      goto LABEL_40;
    v47 = *(_QWORD *)(v46 + 16);
    if ( v47 )
    {
      v48 = *(_OWORD *)(v47 + 32);
      *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v47 + 16);
      *(_OWORD *)&v63.fields.fakeValue = v48;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v62 = v63;
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
      baseUserSvtData = this->fields.baseUserSvtData;
      if ( !baseUserSvtData )
        goto LABEL_40;
      v51 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v61.fields.fakeValue = v51;
      if ( v49 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v61, 0LL) )
      {
        *currentBase = (UserServantEntity_o *)v47;
        sub_B16F98(
          (BattleServantConfConponent_o *)currentBase,
          (System_Int32_array **)v47,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
        if ( v20->fields._size <= (unsigned int)(v45 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v58 = (WarBoardManager_TaskList_o *)*((_QWORD *)&v20->fields._items->obj.klass + v45);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v20,
          v58,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__);
        System_Collections_Generic_List_XWeaponTrail_Element___Insert(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
          0,
          (XWeaponTrail_Element_o *)v58,
          (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__);
      }
    }
    size = v20->fields._size;
    ++v45;
  }
  while ( (int)v45 - 4 < size );
  return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
}


void __fastcall ServantCostumeListViewManager__ModifyItem(
        ServantCostumeListViewManager_o *this,
        int64_t userSvtId,
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  signed __int64 size; // x22
  unsigned __int64 v18; // x23
  ServantCostumeListViewItem_o *v19; // x20
  __int64 v20; // x10
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v22; // q0
  int64_t v23; // x0
  __int128 v24; // q0
  UnityEngine_Object_o *viewObject; // x21
  struct ListViewObject_o *v26; // x0
  WebViewManager_o *v27; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v28; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v29; // x20
  signed __int64 v30; // x22
  unsigned __int64 v31; // x23
  ServantCostumeListViewItem_o *v32; // x20
  __int64 v33; // x10
  UserServantEntity_o *v34; // x0
  __int128 v35; // q0
  int64_t v36; // x0
  __int128 v37; // q0
  UnityEngine_Object_o *v38; // x21
  struct ListViewObject_o *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+80h] [xbp-70h]
  UserServantEntity_o *entity; // [xsp+A8h] [xbp-48h] BYREF

  if ( (byte_40FCFF4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&ServantCostumeListViewItem_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FCFF4 = 1;
  }
  entity = 0LL;
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( userSvtId >= 1 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_60;
      if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             userSvtId,
             (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_60;
        size = itemList->fields._size;
        if ( (int)size >= 1 )
        {
          v18 = 0LL;
          while ( 1 )
          {
            if ( v18 >= (unsigned int)itemList->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v19 = (ServantCostumeListViewItem_o *)itemList->fields._items->m_Items[v18];
            if ( !v19 )
              goto LABEL_60;
            v20 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
              || (ServantCostumeListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != ServantCostumeListViewItem_TypeInfo )
            {
              goto LABEL_60;
            }
            if ( ServantCostumeListViewItem__get_UserSvtEntity(v19, 0LL) )
            {
              UserSvtEntity = ServantCostumeListViewItem__get_UserSvtEntity(v19, 0LL);
              if ( !UserSvtEntity )
                goto LABEL_60;
              v22 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
              *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v44.fields.fakeValue = v22;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v43 = v44;
              v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v43, 0LL);
              if ( !entity )
                goto LABEL_60;
              v24 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
              *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v42.fields.fakeValue = v24;
              if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v42, 0LL) )
                ServantCostumeListViewItem__ModifyItem(v19, entity, 0LL);
            }
            viewObject = (UnityEngine_Object_o *)v19->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
            {
              v26 = v19->fields.viewObject;
              if ( !v26 )
                goto LABEL_60;
              ((void (__fastcall *)(struct ListViewObject_o *, ServantCostumeListViewItem_o *, Il2CppMethodPointer))v26->klass->vtable._5_SetItem.method)(
                v26,
                v19,
                v26->klass->vtable._6_SetItem.methodPtr);
            }
            if ( (__int64)++v18 >= size )
              return;
            itemList = this->fields.itemList;
            if ( !itemList )
              goto LABEL_60;
          }
        }
      }
      else
      {
        v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v27 )
          goto LABEL_60;
        v28 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)v27,
                                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( !v28 )
          goto LABEL_60;
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               v28,
               &entity,
               userSvtId,
               (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
        {
          v29 = this->fields.itemList;
          if ( !v29 )
            goto LABEL_60;
          v30 = v29->fields._size;
          if ( (int)v30 >= 1 )
          {
            v31 = 0LL;
            do
            {
              if ( v31 >= (unsigned int)v29->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v32 = (ServantCostumeListViewItem_o *)v29->fields._items->m_Items[v31];
              if ( !v32 )
                break;
              v33 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v33
                || (ServantCostumeListViewItem_c *)v32->klass->_2.typeHierarchy[v33 - 1] != ServantCostumeListViewItem_TypeInfo )
              {
                break;
              }
              if ( ServantCostumeListViewItem__get_UserSvtEntity(v32, 0LL) )
              {
                v34 = ServantCostumeListViewItem__get_UserSvtEntity(v32, 0LL);
                if ( !v34 )
                  break;
                v35 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
                *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v44.fields.fakeValue = v35;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v41 = v44;
                v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL);
                if ( !entity )
                  break;
                v37 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
                *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v40.fields.fakeValue = v37;
                if ( v36 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v40, 0LL) )
                  ServantCostumeListViewItem__ModifyItem(v32, entity, 0LL);
              }
              v38 = (UnityEngine_Object_o *)v32->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
              {
                v39 = v32->fields.viewObject;
                if ( !v39 )
                  break;
                ((void (__fastcall *)(struct ListViewObject_o *, ServantCostumeListViewItem_o *, Il2CppMethodPointer))v39->klass->vtable._5_SetItem.method)(
                  v39,
                  v32,
                  v39->klass->vtable._6_SetItem.methodPtr);
              }
              if ( (__int64)++v31 >= v30 )
                return;
              v29 = this->fields.itemList;
            }
            while ( v29 );
LABEL_60:
            sub_B170D4();
          }
        }
      }
    }
  }
}


void __fastcall ServantCostumeListViewManager__OnClickFilterKind(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FCFFC & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantCostumeListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FCFFC = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11,
                                                      v12);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantFilterSelectMenu(v8, 4, sort, v13, -1, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnClickListView(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantCostumeListViewManager__OnClickSelectBase(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x10
  __int64 v8; // x10
  ListViewObject_o *v9; // x0
  ServantCostumeListViewItem_o *Item; // x0
  struct UserServantEntity_o *baseUserSvtData; // x8
  ServantCostumeListViewItem_o *v12; // x21
  struct UserServantEntity_o **p_baseUserSvtData; // x20
  __int128 v14; // q1
  int64_t v15; // x0
  int64_t v16; // x22
  UserServantEntity_o *UserSvtEntity; // x0
  __int128 v18; // q0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UserServantEntity_o **v25; // x0
  System_Int32_array **v26; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  struct CombineRootComponent_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-40h]

  if ( (byte_40FCFF9 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    sub_B16FFC(&ServantCostumeListViewObject_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FCFF9 = 1;
  }
  if ( !obj )
    goto LABEL_32;
  v7 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    goto LABEL_32;
  }
  v8 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v8 )
  {
    if ( (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] == ServantCostumeListViewObject_TypeInfo )
      v9 = obj;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  Item = ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)v9, (const MethodInfo *)obj);
  baseUserSvtData = this->fields.baseUserSvtData;
  v12 = Item;
  p_baseUserSvtData = &this->fields.baseUserSvtData;
  if ( !baseUserSvtData )
    goto LABEL_35;
  v14 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v30 = v31;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v30, 0LL);
  if ( !v12 )
    goto LABEL_32;
  v16 = v15;
  UserSvtEntity = ServantCostumeListViewItem__get_UserSvtEntity(v12, 0LL);
  if ( !UserSvtEntity )
    goto LABEL_32;
  v18 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v18;
  if ( v16 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v29, 0LL) )
  {
LABEL_35:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( v12 )
    {
      v26 = (System_Int32_array **)ServantCostumeListViewItem__get_UserSvtEntity(v12, 0LL);
      *p_baseUserSvtData = (struct UserServantEntity_o *)v26;
      v25 = &this->fields.baseUserSvtData;
      goto LABEL_27;
    }
LABEL_32:
    sub_B170D4();
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  *p_baseUserSvtData = 0LL;
  v25 = &this->fields.baseUserSvtData;
  v26 = 0LL;
LABEL_27:
  sub_B16F98((BattleServantConfConponent_o *)v25, v26, v19, v20, v21, v22, v23, v24);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_32;
  CombineRootComponent__SetBackSelect(combineRootComponent, this->fields.baseUserSvtData != 0LL, 0LL);
  v28 = this->fields.combineRootComponent;
  if ( !v28 )
    goto LABEL_32;
  if ( v28->fields.state == 8 )
    CombineRootComponent__ShowSelectCostumeBaseSvt(v28, 0LL);
}


void __fastcall ServantCostumeListViewManager__OnClickSortAscendingOrder(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FD001 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD001 = 1;
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
      sub_B170D4();
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnClickSortButton(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantSortSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_40FCFFF & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantCostumeListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FCFFF = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v9,
                                                    v10,
                                                    v11,
                                                    v12);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B170D4();
    CommonUI__OpenServantSortSelectMenu(v8, 5, sort, 0, v13, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnLongPushListView(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  __int64 v7; // x10
  ServantCostumeListViewItem_o *Item; // x0
  ServantCostumeListViewItem_o *v9; // x20
  struct UserServantEntity_o *UserSvtEntity; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FCFFA & 1) == 0 )
  {
    sub_B16FFC(&ServantCostumeListViewObject_TypeInfo, obj);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FCFFA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_15;
  v7 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != ServantCostumeListViewObject_TypeInfo
    || (Item = ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)obj, v6), !this->fields.scrollView)
    || (v9 = Item, UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.scrollView, 0, 0LL), !v9)
    || (UserSvtEntity = ServantCostumeListViewItem__get_UserSvtEntity(v9, 0LL),
        this->fields.selectUserSvtEntity = UserSvtEntity,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.selectUserSvtEntity,
          (System_Int32_array **)UserSvtEntity,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 8 )
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
}


void __fastcall ServantCostumeListViewManager__OnMoveEnd(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0
  UIScrollView_o *v8; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FCFF8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCFF8 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7
          || (((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
                v7,
                1LL,
                v7->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B170D4();
        }
        UIScrollView__UpdatePosition(v8, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
        if ( callbackFunc2 )
          System_Action__Invoke(callbackFunc2, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__RequestListObject(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_ServantCostumeListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t size; // w8
  System_Collections_Generic_List_ServantCostumeListViewObject__o *v17; // x21
  int v18; // w24
  __int64 v19; // x25
  unsigned int v20; // w8
  ServantCostumeListViewObject_o *v21; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCFF7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__, v8);
    sub_B16FFC(&Method_ServantCostumeListViewManager_OnMoveEnd__, v9);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v10);
    byte_40FCFF7 = 1;
  }
  ObjectList = ServantCostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v17 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v18 = ObjectList->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      v20 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v20 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v21 = v17->fields._items->m_Items[v19];
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantCostumeListViewManager_OnMoveEnd__, 0LL);
        if ( !v21 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantCostumeListViewObject__Init(v21, mode, v22, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v23);
        if ( (int)v19 + 1 >= v18 )
          return;
        v20 = v17->fields._size;
        ++v19;
      }
LABEL_14:
      sub_B170D4();
    }
  }
}


void __fastcall ServantCostumeListViewManager__ResetListViewInfo(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.baseUserSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseUserSvtData, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantCostumeListViewManager__SetFilterButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FCFFE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927/*"btn_filter_on"*/, method);
    sub_B16FFC(&StringLiteral_16926/*"btn_filter"*/, v3);
    byte_40FCFFE = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926/*"btn_filter"*/;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
}


void __fastcall ServantCostumeListViewManager__SetMode(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        ServantCostumeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_30643408(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__SetMode_30643408(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v6; // x2
  UnityEngine_Behaviour_o *v7; // x0
  UnityEngine_Behaviour_o *v8; // x0
  UIScrollView_o *v9; // x0
  int32_t v10; // w1

  if ( (byte_40FCFF6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    byte_40FCFF6 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      goto LABEL_18;
    if ( UnityEngine_Behaviour__get_enabled(v7, 0LL) )
      goto LABEL_12;
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 || (UnityEngine_Behaviour__set_enabled(v8, 1, 0LL), (v9 = this->fields.scrollView) == 0LL) )
LABEL_18:
      sub_B170D4();
    UIScrollView__UpdatePosition(v9, 0LL);
  }
LABEL_12:
  if ( mode == 1 )
  {
    v10 = 2;
LABEL_16:
    ServantCostumeListViewManager__RequestListObject(this, v10, 0.0, v6);
    return;
  }
  if ( mode == 2 )
  {
    v10 = 3;
    goto LABEL_16;
  }
}


void __fastcall ServantCostumeListViewManager__SetMode_30643688(
        ServantCostumeListViewManager_o *this,
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_30643408(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__SetObjectItem(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FCFF5 & 1) == 0 )
  {
    sub_B16FFC(&ServantCostumeListViewObject_TypeInfo, obj);
    byte_40FCFF5 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  ServantCostumeListViewObject__Init(
    (ServantCostumeListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall ServantCostumeListViewManager__SetSelectBaseSvtData(
        ServantCostumeListViewManager_o *this,
        UserServantEntity_o *baseSvtData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.baseUserSvtData = baseSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUserSvtData,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantCostumeListViewManager__SetServantCostumeItemInfoData(
        ServantCostumeListViewManager_o *this,
        ServantCostumeItemInfo_o *info,
        ServantCostumeMaster_o *servantCostumeMaster,
        UserServantCollectionMaster_o *userServantCollectionMaster,
        ServantCostumeReleaseMaster_o *servantCostumeReleaseMaster,
        const MethodInfo *method)
{
  __int64 v10; // x1
  int32_t SvtId; // w0
  const MethodInfo *v12; // x3
  EventCombineCostumeEntity_o *IsEventCombineCostume; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  EventCombineCostumeEntity_o *v17; // x22
  unsigned int v18; // w28
  int v19; // w27
  int v20; // w26
  int32_t v21; // w25
  int32_t v22; // w24
  int64_t v23; // x0
  const MethodInfo *v24; // x4
  ServantCostumeEntity_o *v25; // x23
  int32_t v26; // w0
  int32_t v27; // w0
  const MethodInfo *v28; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v30; // w24
  int64_t UserSvtId; // x0
  const MethodInfo *v32; // x4
  WebViewManager_o *Instance; // x0
  EventCombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x24
  int32_t v35; // w0

  if ( (byte_40FCFF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, info);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FCFF3 = 1;
  }
  if ( !info )
    goto LABEL_38;
  SvtId = ServantCostumeItemInfo__get_SvtId(info, 0LL);
  if ( !servantCostumeMaster )
    goto LABEL_38;
  IsEventCombineCostume = (EventCombineCostumeEntity_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                                           servantCostumeMaster,
                                                           SvtId,
                                                           0,
                                                           v12);
  if ( !IsEventCombineCostume )
    goto LABEL_38;
  v16 = *(_QWORD *)&IsEventCombineCostume->fields.eventId;
  v17 = IsEventCombineCostume;
  if ( (int)v16 >= 1 )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
      {
        sub_B17100(IsEventCombineCostume, v14, v15);
        sub_B170A0();
      }
      v25 = (ServantCostumeEntity_o *)*((_QWORD *)&v17->fields.itemNums + (int)v18);
      v26 = ServantCostumeItemInfo__get_SvtId(info, 0LL);
      if ( !v25 || !userServantCollectionMaster )
        break;
      IsEventCombineCostume = (EventCombineCostumeEntity_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                               userServantCollectionMaster,
                                                               v26,
                                                               v25->fields.id,
                                                               0LL);
      info->fields.isCostumeGet |= (unsigned __int8)IsEventCombineCostume & 1;
      if ( ((unsigned __int8)IsEventCombineCostume & 1) != 0 )
      {
        ++v21;
      }
      else
      {
        v27 = ServantCostumeItemInfo__get_SvtId(info, 0LL);
        if ( !servantCostumeReleaseMaster )
          break;
        if ( ServantCostumeReleaseMaster__checkItemHaving(servantCostumeReleaseMaster, v27, v25->fields.id, v28) )
        {
          info->fields.isReleaseItemHaving = 1;
          ++v20;
          IsEventCombineCostume = (EventCombineCostumeEntity_o *)ServantCostumeEntity__IsEventCombineCostume(v25, 0LL);
          userServantEntity = info->fields.userServantEntity;
          if ( ((unsigned __int8)IsEventCombineCostume & 1) != 0 )
          {
            if ( userServantEntity )
            {
              if ( !info->fields.isEventItemOpenCond )
              {
                v30 = ServantCostumeItemInfo__get_SvtId(info, 0LL);
                UserSvtId = ServantCostumeItemInfo__get_UserSvtId(info, 0LL);
                IsEventCombineCostume = (EventCombineCostumeEntity_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                                         servantCostumeReleaseMaster,
                                                                         v25,
                                                                         v30,
                                                                         UserSvtId,
                                                                         v32);
                if ( ((unsigned __int8)IsEventCombineCostume & 1) != 0 )
                {
                  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    break;
                  MasterData_WarQuestSelectionMaster = (EventCombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
                  v35 = ServantCostumeItemInfo__get_SvtId(info, 0LL);
                  if ( !MasterData_WarQuestSelectionMaster )
                    break;
                  IsEventCombineCostume = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                            MasterData_WarQuestSelectionMaster,
                                            v35,
                                            v25->fields.id,
                                            0LL);
                  if ( IsEventCombineCostume
                    && (IsEventCombineCostume = (EventCombineCostumeEntity_o *)EventCombineCostumeEntity__IsShortEventItem(
                                                                                 IsEventCombineCostume,
                                                                                 0LL),
                        ((unsigned __int8)IsEventCombineCostume & 1) != 0) )
                  {
                    info->fields.isCanRelease = 1;
                  }
                  else
                  {
                    info->fields.isEventItemOpenCond = 1;
                  }
                }
              }
            }
          }
          else if ( userServantEntity && !info->fields.isCanRelease )
          {
            v22 = ServantCostumeItemInfo__get_SvtId(info, 0LL);
            v23 = ServantCostumeItemInfo__get_UserSvtId(info, 0LL);
            IsEventCombineCostume = (EventCombineCostumeEntity_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                                     servantCostumeReleaseMaster,
                                                                     v25,
                                                                     v22,
                                                                     v23,
                                                                     v24);
            info->fields.isCanRelease = (unsigned __int8)IsEventCombineCostume & 1;
          }
        }
        else
        {
          IsEventCombineCostume = (EventCombineCostumeEntity_o *)ServantCostumeEntity__checkFlag(v25, 64, 0LL);
          v19 += (unsigned __int8)IsEventCombineCostume & 1;
        }
      }
      v16 = *(_QWORD *)&v17->fields.eventId;
      if ( (int)++v18 >= (int)v16 )
        goto LABEL_33;
    }
LABEL_38:
    sub_B170D4();
  }
  v21 = 0;
  v20 = 0;
  v19 = 0;
LABEL_33:
  if ( v21 == (_DWORD)v16 )
    info->fields.isHavingAllReleasedCostume = 1;
  if ( !v20 )
    info->fields.isNotHavingAllCostumeReleaseItem = 1;
  info->fields.allCostumeNum = v16;
  info->fields.releaseCostumeNum = v21;
  info->fields.isHide = v19 == (_DWORD)v16;
  info->fields.notHavingCostumeNum = v16 - v21;
  info->fields.notHavingReleaseItemNum = v16 - (v21 + v20);
}


void __fastcall ServantCostumeListViewManager__SetSortButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8

  if ( (byte_40FD002 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955/*"btn_sort_up"*/, v3);
    sub_B16FFC(&StringLiteral_17038/*"btn_txt_up"*/, v4);
    sub_B16FFC(&StringLiteral_16995/*"btn_txt_new"*/, v5);
    sub_B16FFC(&StringLiteral_16985/*"btn_txt_down"*/, v6);
    sub_B16FFC(&StringLiteral_17002/*"btn_txt_old"*/, v7);
    sub_B16FFC(&StringLiteral_16952/*"btn_sort_down"*/, v8);
    byte_40FD002 = 1;
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
      goto LABEL_36;
    v11 = this->fields.sortKindLabel;
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_36;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sortExplanationSprite = this->fields.sortExplanationSprite;
        if ( sortExplanationSprite )
        {
          v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002/*"btn_txt_old"*/ : &StringLiteral_16995/*"btn_txt_new"*/);
          UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
          v18 = this->fields.sort;
          if ( v18 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v18->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
              v22 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v26 = v21;
              else
                v26 = v22;
              UISprite__set_spriteName(v19, *v26, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        v23 = this->fields.sortExplanationSprite;
        if ( v23 )
        {
          v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038/*"btn_txt_up"*/ : &StringLiteral_16985/*"btn_txt_down"*/);
          UISprite__set_spriteName(v23, *v24, 0LL);
          v25 = this->fields.sort;
          if ( v25 )
          {
            v19 = this->fields.sortOrderSprite;
            if ( v19 )
            {
              isAscendingOrder = v25->fields.isAscendingOrder;
              v21 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
              v22 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B170D4();
  }
}


void __fastcall ServantCostumeListViewManager__add_callbackFunc(
        ServantCostumeListViewManager_o *this,
        ServantCostumeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantCostumeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCostumeListViewManager_o *v10; // x0
  ServantCostumeListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCFEA & 1) == 0 )
  {
    sub_B16FFC(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FCFEA = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v7->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantCostumeListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall ServantCostumeListViewManager__add_callbackFunc2(
        ServantCostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCostumeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCFEC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCFEC = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantCostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ClippingObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int size; // w22
  unsigned int v14; // w23
  UnityEngine_GameObject_o *v15; // x0
  ServantCostumeListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40FCFEF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v10);
    byte_40FCFEF = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    do
    {
      if ( objectList->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v15 = objectList->fields._items->m_Items[v14];
      if ( !v15 )
        break;
      Component_srcLineSprite = (ServantCostumeListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v15,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Item = (ListViewItem_o *)ServantCostumeListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        break;
      if ( !Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
      }
      if ( (int)++v14 >= size )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v11;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v11;
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40FCFEE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FCFEE = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v16,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v12;
}


void __fastcall ServantCostumeListViewManager__remove_callbackFunc(
        ServantCostumeListViewManager_o *this,
        ServantCostumeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantCostumeListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCostumeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCFEB & 1) == 0 )
  {
    sub_B16FFC(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FCFEB = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantCostumeListViewManager_CallbackFunc_c *)v7->klass != ServantCostumeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantCostumeListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall ServantCostumeListViewManager__remove_callbackFunc2(
        ServantCostumeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantCostumeListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FCFED & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCFED = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantCostumeListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager_CallbackFunc___ctor(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCostumeListViewManager_CallbackFunc__BeginInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = kind;
  if ( (byte_40F7621 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&ServantCostumeListViewManager_ResultKind_TypeInfo, v9);
    byte_40F7621 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantCostumeListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall ServantCostumeListViewManager_CallbackFunc__EndInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager_CallbackFunc__Invoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  ServantCostumeListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  ServantCostumeListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  ServantCostumeListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantCostumeListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)index, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)index, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, (unsigned int)index, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)index,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)index,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)index, v22);
    goto LABEL_38;
  }
}