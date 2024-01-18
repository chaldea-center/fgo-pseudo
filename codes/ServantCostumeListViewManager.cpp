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
  ListViewSort_o *v13; // x20
  struct ServantCostumeListViewManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418AAC6 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&ServantCostumeListViewManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_4321/*"CostumeCombineList"*/, v9);
    byte_418AAC6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCostumeListViewManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_4321/*"CostumeCombineList"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_4321/*"CostumeCombineList"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  SORT_SAVE_KEY = ServantCostumeListViewManager_TypeInfo->static_fields->SORT_SAVE_KEY;
  v13 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v13, SORT_SAVE_KEY, 8, 1, 0LL);
  v14 = ServantCostumeListViewManager_TypeInfo->static_fields;
  v14->servantSortStatus = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->servantSortStatus,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall ServantCostumeListViewManager___ctor(ServantCostumeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewManager__ChangeIconScale(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v12; // w8
  ListViewSort_o *sort; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  struct ListViewSort_o *v15; // x8

  if ( (byte_418AAC5 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AAC5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v12 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v12 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v12 = 1;
LABEL_12:
    this->fields.scaleType = v12;
    this->fields.seed = smallSizeSeed;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
  }
  sort = this->fields.sort;
  if ( !sort
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL),
        !scaleChangeTabSprite)
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)sort, 0LL), (v15 = this->fields.sort) == 0LL)
    || (v15->fields.iconScaleKind = this->fields.scaleType, (sort = this->fields.sort) == 0LL) )
  {
    sub_B2C434(sort, v3);
  }
  ListViewSort__Save(sort, 0LL);
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
  const MethodInfo *v9; // x2
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ServantCostumeItemInfo_array *ServantCostumeItemInfoList; // x20
  ServantCostumeListViewManager_c *v17; // x8
  struct ListViewSort_o *servantSortStatus; // x1
  struct ListViewSort_o **p_sort; // x21
  int32_t m_CachedPtr; // w1
  UISprite_o *scaleChangeTabSprite; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  ServantCostumeItemInfo_o *v32; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  UserServantEntity_o *v34; // x24
  ServantCostumeListViewItem_o *v35; // x22
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x1
  UILabel_o *combineInfoMsgLabel; // x19
  __int64 v39; // x0
  UserServantEntity_o *currentBase; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418AAB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&ServantCostumeListViewItem_TypeInfo, v4);
    sub_B2C35C(&ServantCostumeListViewManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3407/*"COSTUME_SERVANT_LIST_MSG"*/, v6);
    byte_418AAB2 = 1;
  }
  currentBase = 0LL;
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  currentBase = 0LL;
  ServantCostumeItemInfoList = ServantCostumeListViewManager__GetServantCostumeItemInfoList(this, &currentBase, v9);
  v17 = ServantCostumeListViewManager_TypeInfo;
  if ( (BYTE3(ServantCostumeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeListViewManager_TypeInfo);
    v17 = ServantCostumeListViewManager_TypeInfo;
  }
  servantSortStatus = v17->static_fields->servantSortStatus;
  this->fields.sort = servantSortStatus;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)servantSortStatus,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_29;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_29;
  m_CachedPtr = bgTxtSprite[5].fields.m_CachedPtr;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  this->fields.scaleType = m_CachedPtr;
  bgTxtSprite = (UnityEngine_Component_o *)ListViewSort__GetScaleKindSpriteName(
                                             (ListViewSort_o *)bgTxtSprite,
                                             m_CachedPtr,
                                             0LL);
  if ( !scaleChangeTabSprite )
    goto LABEL_29;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)bgTxtSprite, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)normalSizeSeed,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
LABEL_18:
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !ServantCostumeItemInfoList )
    goto LABEL_29;
  v30 = *(_QWORD *)&ServantCostumeItemInfoList->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v30 )
      {
        v39 = sub_B2C460(bgTxtSprite);
        sub_B2C400(v39, 0LL);
      }
      v32 = ServantCostumeItemInfoList->m_Items[v31];
      itemList = this->fields.itemList;
      v34 = currentBase;
      v35 = (ServantCostumeListViewItem_o *)sub_B2C42C(ServantCostumeListViewItem_TypeInfo);
      ServantCostumeListViewItem___ctor(v35, v32, v34, v36);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v30) = ServantCostumeItemInfoList->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_24;
    }
LABEL_29:
    sub_B2C434(bgTxtSprite, method);
  }
LABEL_24:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantCostumeListViewManager__SetFilterButtonImage(this, v37);
  combineInfoMsgLabel = this->fields.combineInfoMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  bgTxtSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3407/*"COSTUME_SERVANT_LIST_MSG"*/, 0LL);
  if ( !combineInfoMsgLabel )
    goto LABEL_29;
  UILabel__set_text(combineInfoMsgLabel, (System_String_o *)bgTxtSprite, 0LL);
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
  void *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  int v16; // w8
  void *v17; // x22
  unsigned int v18; // w24
  __int64 v19; // x8
  ServantLeaderInfo_o *v20; // x23
  __int64 v22; // x0

  if ( (byte_418AAB4 & 1) == 0 )
  {
    sub_B2C35C(&ServantCostumeItemInfo_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&ServantLeaderInfo_TypeInfo, v10);
    byte_418AAB4 = 1;
  }
  v11 = (ServantCostumeItemInfo_o *)sub_B2C42C(ServantCostumeItemInfo_TypeInfo);
  ServantCostumeItemInfo___ctor(v11, 0LL);
  if ( !userServantMaster )
    goto LABEL_19;
  v12 = UserServantMaster__CostumeTargetEntity(userServantMaster, svtId, 1, 0LL);
  if ( !v12 )
  {
    if ( servantCostumeMaster )
    {
      v12 = ServantCostumeMaster__releasedCostumeEntityList(servantCostumeMaster, svtId, 0, v14);
      if ( v12 )
      {
        v16 = *((_DWORD *)v12 + 6);
        v17 = v12;
        if ( v16 < 1 )
          return v11;
        v18 = 0;
        while ( 1 )
        {
          if ( v18 >= v16 )
          {
            v22 = sub_B2C460(v12);
            sub_B2C400(v22, 0LL);
          }
          v19 = *((_QWORD *)v17 + (int)v18 + 4);
          if ( !v19 || !servantCostumeReleaseMaster )
            break;
          v12 = (void *)ServantCostumeReleaseMaster__checkItemHaving(
                          servantCostumeReleaseMaster,
                          svtId,
                          *(_DWORD *)(v19 + 20),
                          v15);
          if ( ((unsigned __int8)v12 & 1) != 0 )
          {
            v20 = (ServantLeaderInfo_o *)sub_B2C42C(ServantLeaderInfo_TypeInfo);
            ServantLeaderInfo___ctor_29329736(v20, svtId, 0, 1, 0LL);
            if ( !v11 )
              break;
            ServantCostumeItemInfo__SetNotHaveSevantData(v11, v20, 0LL);
          }
          v16 = *((_DWORD *)v17 + 6);
          if ( (int)++v18 >= v16 )
            return v11;
        }
      }
    }
LABEL_19:
    sub_B2C434(v12, v13);
  }
  if ( !v11 )
    goto LABEL_19;
  ServantCostumeItemInfo__SetUserSvtData(v11, (UserServantEntity_o *)v12, 0LL);
  return v11;
}


void __fastcall ServantCostumeListViewManager__DestroyList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, v3);
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
  __int64 v7; // x1

  if ( (byte_418AABF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418AABF = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantCostumeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  CommonUI__CloseServantFilterSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__EndSelectSortKind(
        ServantCostumeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418AAC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418AAC2 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantCostumeListViewManager__GetAmountSortValue(
        ServantCostumeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantCostumeListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v9; // w23
  int64_t v10; // x21
  ServantCostumeListViewManager_o **v11; // x8
  __int64 v12; // x11

  v4 = this;
  if ( (byte_418AABD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantCostumeListViewManager_o *)sub_B2C35C(&ServantCostumeListViewItem_TypeInfo, v6);
    byte_418AABD = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_18;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      if ( itemList->fields._size <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v11 = (ServantCostumeListViewManager_o **)itemList->fields._items->m_Items[v9];
      if ( !v11 )
        break;
      v12 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v11)->fields.oldScrollPosition.fields.y) < (unsigned int)v12
        || *((ServantCostumeListViewItem_c **)(*v11)->fields.objectList + v12 - 1) != ServantCostumeListViewItem_TypeInfo )
      {
        break;
      }
      if ( *((ServantCostumeListViewItem_c **)(*v11)->fields.objectList
           + *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1)
           - 1) != ServantCostumeListViewItem_TypeInfo )
        v11 = 0LL;
      this = v11[15];
      if ( !this )
        break;
      this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId((ServantCostumeItemInfo_o *)this, 0LL);
      ++v9;
      if ( (_DWORD)this == svtId )
        ++v10;
      if ( v9 >= size )
        return v10;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_18:
    sub_B2C434(this, *(_QWORD *)&svtId);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  int64_t Instance; // x0
  const MethodInfo *v20; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  ServantCostumeMaster_o *v22; // x23
  ServantCostumeReleaseMaster_o *v23; // x24
  UserServantCollectionMaster_o *v24; // x25
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  MethodInfo *v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x8
  int64_t v32; // x26
  unsigned __int64 v33; // x28
  int64_t v34; // x27
  int size; // w8
  __int64 v36; // x24
  __int64 v37; // x8
  __int64 v38; // x22
  __int128 v39; // q0
  struct UserServantEntity_o *baseUserSvtData; // x8
  __int128 v41; // q0
  int64_t v42; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  WarBoardManager_TaskList_o *v49; // x22
  __int64 v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+50h] [xbp-70h]

  if ( (byte_418AAB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, currentBase);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeItemInfo__get_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_418AAB3 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCostumeItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v22 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v23 = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v22 )
    goto LABEL_40;
  v24 = (UserServantCollectionMaster_o *)Instance;
  Instance = (int64_t)ServantCostumeMaster__GetCostumeSvtIdList(v22, v20);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)System_Collections_Generic_List_int___ToArray(
                        (System_Collections_Generic_List_int__o *)Instance,
                        (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !Instance )
    goto LABEL_40;
  v31 = *(_QWORD *)(Instance + 24);
  v32 = Instance;
  if ( (int)v31 >= 1 )
  {
    v33 = 0LL;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v31 )
      {
        v51 = sub_B2C460(Instance);
        sub_B2C400(v51, 0LL);
      }
      Instance = (int64_t)ServantCostumeListViewManager__CreateServantCostumeItemInfo(
                            (ServantCostumeListViewManager_o *)Instance,
                            *(_DWORD *)(v32 + 32 + 4 * v33),
                            MasterData_WarQuestSelectionMaster,
                            v22,
                            v23,
                            v28);
      if ( !Instance )
        break;
      v34 = Instance;
      if ( *(_QWORD *)(Instance + 16) || *(_QWORD *)(Instance + 24) )
      {
        ServantCostumeListViewManager__SetServantCostumeItemInfoData(
          (ServantCostumeListViewManager_o *)Instance,
          (ServantCostumeItemInfo_o *)Instance,
          v22,
          v24,
          v23,
          v28);
        if ( !*(_BYTE *)(v34 + 38) )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Add__);
        }
      }
      LODWORD(v31) = *(_DWORD *)(v32 + 24);
      if ( (__int64)++v33 >= (int)v31 )
        goto LABEL_20;
    }
LABEL_40:
    sub_B2C434(Instance, v20);
  }
LABEL_20:
  *currentBase = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)currentBase, 0LL, v25, v26, v27, (System_Int32_array **)v28, v29, v30);
  if ( !this->fields.baseUserSvtData )
  {
    if ( !v18 )
      goto LABEL_40;
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  }
  if ( !v18 )
    goto LABEL_40;
  size = v18->fields._size;
  if ( size < 1 )
    return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
  v36 = 4LL;
  do
  {
    if ( size <= (unsigned int)(v36 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v37 = *((_QWORD *)&v18->fields._items->obj.klass + v36);
    if ( !v37 )
      goto LABEL_40;
    v38 = *(_QWORD *)(v37 + 16);
    if ( v38 )
    {
      v39 = *(_OWORD *)(v38 + 32);
      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)(v38 + 16);
      *(_OWORD *)&v55.fields.fakeValue = v39;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v54 = v55;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v54, 0LL);
      baseUserSvtData = this->fields.baseUserSvtData;
      if ( !baseUserSvtData )
        goto LABEL_40;
      v41 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
      v42 = Instance;
      *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v53.fields.fakeValue = v41;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v53, 0LL);
      if ( v42 == Instance )
      {
        *currentBase = (UserServantEntity_o *)v38;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)currentBase,
          (System_Int32_array **)v38,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        if ( v18->fields._size <= (unsigned int)(v36 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v49 = (WarBoardManager_TaskList_o *)*((_QWORD *)&v18->fields._items->obj.klass + v36);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v18,
          v49,
          (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Remove__);
        System_Collections_Generic_List_XWeaponTrail_Element___Insert(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v18,
          0,
          (XWeaponTrail_Element_o *)v49,
          (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__Insert__);
      }
    }
    size = v18->fields._size;
    ++v36;
  }
  while ( (int)v36 - 4 < size );
  return (ServantCostumeItemInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCostumeItemInfo__ToArray__);
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
  __int64 Instance; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  signed __int64 size; // x22
  unsigned __int64 v18; // x23
  ServantCostumeListViewItem_o *v19; // x20
  __int64 v20; // x10
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v23; // q0
  __int128 v24; // q0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *viewObject; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v27; // x20
  signed __int64 v28; // x22
  unsigned __int64 v29; // x23
  ServantCostumeListViewItem_o *v30; // x20
  __int64 v31; // x10
  struct ServantCostumeItemInfo_o *v32; // x8
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q0
  __int128 v35; // q0
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *v37; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+80h] [xbp-70h]
  UserServantEntity_o *entity; // [xsp+A8h] [xbp-48h] BYREF

  if ( (byte_418AAB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&ServantCostumeListViewItem_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418AAB6 = 1;
  }
  entity = 0LL;
  if ( this->fields.itemList )
  {
    UserGameMaster__getSelfUserGame(0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( userSvtId >= 1 )
    {
      if ( !Instance )
        goto LABEL_60;
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &entity,
                   userSvtId,
                   (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
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
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v19 = (ServantCostumeListViewItem_o *)itemList->fields._items->m_Items[v18];
            if ( !v19 )
              goto LABEL_60;
            v20 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20 )
              goto LABEL_60;
            if ( (ServantCostumeListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != ServantCostumeListViewItem_TypeInfo )
              goto LABEL_60;
            servantData = v19->fields.servantData;
            if ( !servantData )
              goto LABEL_60;
            userServantEntity = servantData->fields.userServantEntity;
            if ( userServantEntity )
            {
              v23 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v42.fields.fakeValue = v23;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v41 = v42;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v41, 0LL);
              if ( !entity )
                goto LABEL_60;
              v24 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
              *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v40.fields.fakeValue = v24;
              if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v40, 0LL) )
                ServantCostumeListViewItem__ModifyItem(v19, entity, v25);
            }
            viewObject = (UnityEngine_Object_o *)v19->fields.viewObject;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Instance = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v19->fields.viewObject;
              if ( !Instance )
                goto LABEL_60;
              Instance = (*(__int64 (__fastcall **)(__int64, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                           Instance,
                           v19,
                           *(_QWORD *)(*(_QWORD *)Instance + 400LL));
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
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_60;
        Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
        if ( !Instance )
          goto LABEL_60;
        Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                     &entity,
                     userSvtId,
                     (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          v27 = this->fields.itemList;
          if ( !v27 )
            goto LABEL_60;
          v28 = v27->fields._size;
          if ( (int)v28 >= 1 )
          {
            v29 = 0LL;
            do
            {
              if ( v29 >= (unsigned int)v27->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v30 = (ServantCostumeListViewItem_o *)v27->fields._items->m_Items[v29];
              if ( !v30 )
                break;
              v31 = *(&ServantCostumeListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31 )
                break;
              if ( (ServantCostumeListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != ServantCostumeListViewItem_TypeInfo )
                break;
              v32 = v30->fields.servantData;
              if ( !v32 )
                break;
              v33 = v32->fields.userServantEntity;
              if ( v33 )
              {
                v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
                *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v42.fields.fakeValue = v34;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v39 = v42;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v39, 0LL);
                if ( !entity )
                  break;
                v35 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
                *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v38.fields.fakeValue = v35;
                if ( Instance == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v38, 0LL) )
                  ServantCostumeListViewItem__ModifyItem(v30, entity, v36);
              }
              v37 = (UnityEngine_Object_o *)v30->fields.viewObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v30->fields.viewObject;
                if ( !Instance )
                  break;
                Instance = (*(__int64 (__fastcall **)(__int64, ServantCostumeListViewItem_o *, _QWORD))(*(_QWORD *)Instance + 392LL))(
                             Instance,
                             v30,
                             *(_QWORD *)(*(_QWORD *)Instance + 400LL));
              }
              if ( (__int64)++v29 >= v28 )
                return;
              v27 = this->fields.itemList;
            }
            while ( v27 );
LABEL_60:
            sub_B2C434(Instance, v15);
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
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418AABE & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantCostumeListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418AABE = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantFilterSelectMenu(v8, 4, sort, v9, -1, 0LL);
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
  ServantCostumeListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x10
  __int64 v8; // x10
  ListViewObject_o *v9; // x0
  ServantCostumeListViewItem_o *Item; // x0
  struct UserServantEntity_o *baseUserSvtData; // x8
  ServantCostumeListViewItem_o *v12; // x21
  _QWORD *p_baseUserSvtData; // x20
  __int128 v14; // q1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v17; // q0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleServantConfConponent_o *v24; // x0
  System_Int32_array **v25; // x1
  struct ServantCostumeItemInfo_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-40h]

  v4 = this;
  if ( (byte_418AABB & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, obj);
    sub_B2C35C(&ServantCostumeListViewObject_TypeInfo, v5);
    this = (ServantCostumeListViewManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418AABB = 1;
  }
  if ( !obj )
    goto LABEL_34;
  v7 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    goto LABEL_34;
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
  baseUserSvtData = v4->fields.baseUserSvtData;
  v12 = Item;
  p_baseUserSvtData = &v4->fields.baseUserSvtData;
  if ( !baseUserSvtData )
    goto LABEL_37;
  v14 = *(_OWORD *)&baseUserSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&baseUserSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v28 = v29;
  this = (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                              &v28,
                                              0LL);
  if ( !v12 )
    goto LABEL_34;
  servantData = v12->fields.servantData;
  if ( !servantData )
    goto LABEL_34;
  userServantEntity = servantData->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_34;
  v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v17;
  if ( this != (ServantCostumeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                    &v27,
                                                    0LL) )
  {
LABEL_37:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( v12 )
    {
      v26 = v12->fields.servantData;
      if ( v26 )
      {
        v25 = (System_Int32_array **)v26->fields.userServantEntity;
        v24 = (BattleServantConfConponent_o *)&v4->fields.baseUserSvtData;
        *p_baseUserSvtData = v25;
        goto LABEL_29;
      }
    }
LABEL_34:
    sub_B2C434(this, obj);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  *p_baseUserSvtData = 0LL;
  v24 = (BattleServantConfConponent_o *)&v4->fields.baseUserSvtData;
  v25 = 0LL;
LABEL_29:
  sub_B2C2F8(v24, v25, v18, v19, v20, v21, v22, v23);
  this = (ServantCostumeListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_34;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUserSvtData != 0LL, 0LL);
  this = (ServantCostumeListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_34;
  if ( HIDWORD(this->fields.callbackFunc) == 8 )
    CombineRootComponent__ShowSelectCostumeBaseSvt((CombineRootComponent_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewManager__OnClickSortAscendingOrder(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_418AAC3 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AAC3 = 1;
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
      sub_B2C434(v3, v4);
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
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418AAC1 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantCostumeListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418AAC1 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantCostumeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 5, sort, 0, v9, 0LL);
  }
}


void __fastcall ServantCostumeListViewManager__OnLongPushListView(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CombineRootComponent_o *Item; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x10
  CombineRootComponent_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct LimitCntUpControl_o *limitCntCtr; // x8
  struct UserServantEntity_o *v17; // x1

  if ( (byte_418AABC & 1) == 0 )
  {
    sub_B2C35C(&ServantCostumeListViewObject_TypeInfo, obj);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418AABC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_16;
  v8 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    goto LABEL_16;
  if ( (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != ServantCostumeListViewObject_TypeInfo )
    goto LABEL_16;
  Item = (CombineRootComponent_o *)ServantCostumeListViewObject__GetItem((ServantCostumeListViewObject_o *)obj, v7);
  if ( !this->fields.scrollView
    || (v9 = Item, UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.scrollView, 0, 0LL), !v9)
    || (limitCntCtr = v9->fields.limitCntCtr) == 0LL
    || (v17 = *(struct UserServantEntity_o **)&limitCntCtr->fields.m_CachedPtr,
        this->fields.selectUserSvtEntity = v17,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.selectUserSvtEntity,
          (System_Int32_array **)v17,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (Item = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_16:
    sub_B2C434(Item, v7);
  }
  if ( Item->fields.state == 8 )
    CombineRootComponent__SelectShowServant(Item, 0LL);
}


void __fastcall ServantCostumeListViewManager__OnMoveEnd(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_418AABA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AABA = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B2C434(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  int32_t size; // w8
  System_Collections_Generic_List_ServantCostumeListViewObject__o *v14; // x21
  int v15; // w24
  __int64 v16; // x25
  unsigned int v17; // w8
  ServantCostumeListViewObject_o *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418AAB9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__get_Item__, v8);
    sub_B2C35C(&Method_ServantCostumeListViewManager_OnMoveEnd__, v9);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v10);
    byte_418AAB9 = 1;
  }
  ObjectList = ServantCostumeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v14 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v15 = ObjectList->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      v17 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v17 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v18 = v14->fields._items->m_Items[v16];
        v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantCostumeListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantCostumeListViewObject__Init(v18, mode, v19, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v20);
        if ( (int)v16 + 1 >= v15 )
          return;
        v17 = v14->fields._size;
        ++v16;
      }
LABEL_14:
      sub_B2C434(ObjectList, v12);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseUserSvtData, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantCostumeListViewManager__SetFilterButtonImage(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_418AAC0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418AAC0 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_30731136(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__SetMode_30731136(
        ServantCostumeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Behaviour_o *v8; // x0
  int32_t v9; // w1

  if ( (byte_418AAB8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    byte_418AAB8 = 1;
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
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 )
      goto LABEL_18;
    if ( UnityEngine_Behaviour__get_enabled(v8, 0LL) )
      goto LABEL_12;
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8
      || (UnityEngine_Behaviour__set_enabled(v8, 1, 0LL),
          (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
    {
LABEL_18:
      sub_B2C434(v8, v6);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0LL);
  }
LABEL_12:
  if ( mode == 1 )
  {
    v9 = 2;
LABEL_16:
    ServantCostumeListViewManager__RequestListObject(this, v9, 0.0, v7);
    return;
  }
  if ( mode == 2 )
  {
    v9 = 3;
    goto LABEL_16;
  }
}


void __fastcall ServantCostumeListViewManager__SetMode_30731416(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantCostumeListViewManager__SetMode_30731136(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager__SetObjectItem(
        ServantCostumeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCostumeListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_418AAB7 & 1) == 0 )
  {
    this = (ServantCostumeListViewManager_o *)sub_B2C35C(&ServantCostumeListViewObject_TypeInfo, obj);
    byte_418AAB7 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantCostumeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantCostumeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantCostumeListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
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
  sub_B2C2F8(
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
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  ServantCostumeListViewManager_o *v13; // x22
  unsigned int v14; // w28
  int v15; // w27
  int v16; // w26
  int32_t v17; // w25
  int32_t v18; // w24
  int64_t v19; // x0
  const MethodInfo *v20; // x4
  ServantCostumeEntity_o *v21; // x23
  const MethodInfo *v22; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t SvtId; // w24
  int64_t UserSvtId; // x0
  const MethodInfo *v26; // x4
  EventCombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __int64 v28; // x0

  if ( (byte_418AAB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, info);
    this = (ServantCostumeListViewManager_o *)sub_B2C35C(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v10);
    byte_418AAB5 = 1;
  }
  if ( !info )
    goto LABEL_38;
  this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, 0LL);
  if ( !servantCostumeMaster )
    goto LABEL_38;
  this = (ServantCostumeListViewManager_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                              servantCostumeMaster,
                                              (int32_t)this,
                                              0,
                                              v11);
  if ( !this )
    goto LABEL_38;
  dropObjectList = this->fields.dropObjectList;
  v13 = this;
  if ( (int)dropObjectList >= 1 )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)dropObjectList )
      {
        v28 = sub_B2C460(this);
        sub_B2C400(v28, 0LL);
      }
      v21 = (ServantCostumeEntity_o *)*((_QWORD *)&v13->fields.indicator + (int)v14);
      this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, 0LL);
      if ( !v21 || !userServantCollectionMaster )
        break;
      this = (ServantCostumeListViewManager_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                  userServantCollectionMaster,
                                                  (int32_t)this,
                                                  v21->fields.id,
                                                  0LL);
      info->fields.isCostumeGet |= (unsigned __int8)this & 1;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        ++v17;
      }
      else
      {
        this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, 0LL);
        if ( !servantCostumeReleaseMaster )
          break;
        if ( ServantCostumeReleaseMaster__checkItemHaving(
               servantCostumeReleaseMaster,
               (int32_t)this,
               v21->fields.id,
               v22) )
        {
          info->fields.isReleaseItemHaving = 1;
          ++v16;
          this = (ServantCostumeListViewManager_o *)ServantCostumeEntity__IsEventCombineCostume(v21, 0LL);
          userServantEntity = info->fields.userServantEntity;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( userServantEntity )
            {
              if ( !info->fields.isEventItemOpenCond )
              {
                SvtId = ServantCostumeItemInfo__get_SvtId(info, 0LL);
                UserSvtId = ServantCostumeItemInfo__get_UserSvtId(info, 0LL);
                this = (ServantCostumeListViewManager_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                            servantCostumeReleaseMaster,
                                                            v21,
                                                            SvtId,
                                                            UserSvtId,
                                                            v26);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  this = (ServantCostumeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !this )
                    break;
                  MasterData_WarQuestSelectionMaster = (EventCombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
                  this = (ServantCostumeListViewManager_o *)ServantCostumeItemInfo__get_SvtId(info, 0LL);
                  if ( !MasterData_WarQuestSelectionMaster )
                    break;
                  this = (ServantCostumeListViewManager_o *)EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                                              MasterData_WarQuestSelectionMaster,
                                                              (int32_t)this,
                                                              v21->fields.id,
                                                              0LL);
                  if ( this
                    && (this = (ServantCostumeListViewManager_o *)EventCombineCostumeEntity__IsShortEventItem(
                                                                    (EventCombineCostumeEntity_o *)this,
                                                                    0LL),
                        ((unsigned __int8)this & 1) != 0) )
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
            v18 = ServantCostumeItemInfo__get_SvtId(info, 0LL);
            v19 = ServantCostumeItemInfo__get_UserSvtId(info, 0LL);
            this = (ServantCostumeListViewManager_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                        servantCostumeReleaseMaster,
                                                        v21,
                                                        v18,
                                                        v19,
                                                        v20);
            info->fields.isCanRelease = (unsigned __int8)this & 1;
          }
        }
        else
        {
          this = (ServantCostumeListViewManager_o *)ServantCostumeEntity__checkFlag(v21, 64, 0LL);
          v15 += (unsigned __int8)this & 1;
        }
      }
      dropObjectList = v13->fields.dropObjectList;
      if ( (int)++v14 >= (int)dropObjectList )
        goto LABEL_33;
    }
LABEL_38:
    sub_B2C434(this, info);
  }
  v17 = 0;
  v16 = 0;
  v15 = 0;
LABEL_33:
  if ( v17 == (_DWORD)dropObjectList )
    info->fields.isHavingAllReleasedCostume = 1;
  if ( !v16 )
    info->fields.isNotHavingAllCostumeReleaseItem = 1;
  info->fields.allCostumeNum = (int)dropObjectList;
  info->fields.releaseCostumeNum = v17;
  info->fields.isHide = v15 == (_DWORD)dropObjectList;
  info->fields.notHavingCostumeNum = (_DWORD)dropObjectList - v17;
  info->fields.notHavingReleaseItemNum = (_DWORD)dropObjectList - (v17 + v16);
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
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8

  if ( (byte_418AAC4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418AAC4 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_36;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v17->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v23 = v19;
              else
                v23 = v20;
              UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
          v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v22->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
              v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B2C434(sort, v10);
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

  if ( (byte_418AAAC & 1) == 0 )
  {
    sub_B2C35C(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, value);
    byte_418AAAC = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418AAAE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418AAAE = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  ServantCostumeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ClippingObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int size; // w22
  unsigned int v13; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x21

  if ( (byte_418AAB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v7);
    byte_418AAB1 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      if ( objectList->fields._size <= v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Component_srcLineSprite = objectList->fields._items->m_Items[v13];
      if ( !Component_srcLineSprite )
        break;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
      if ( !Component_srcLineSprite )
        break;
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ServantCostumeListViewObject__GetItem(
                                                              (ServantCostumeListViewObject_o *)Component_srcLineSprite,
                                                              v10);
      if ( !Component_srcLineSprite )
        break;
      v10 = (const MethodInfo *)Component_srcLineSprite;
      if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
        || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_24147020(
                                                                    (ListViewManager_o *)this,
                                                                    (ListViewItem_o *)Component_srcLineSprite,
                                                                    0LL),
            ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
      {
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          v14,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
      }
      if ( (int)++v13 >= size )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v8;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v10);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v8;
}


System_Collections_Generic_List_ServantCostumeListViewObject__o *__fastcall ServantCostumeListViewManager__get_ObjectList(
        ServantCostumeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21

  if ( (byte_418AAB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418AAB0 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCostumeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCostumeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v15,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeListViewObject___);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCostumeListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_ServantCostumeListViewObject__o *)v9;
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

  if ( (byte_418AAAD & 1) == 0 )
  {
    sub_B2C35C(&ServantCostumeListViewManager_CallbackFunc_TypeInfo, value);
    byte_418AAAD = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418AAAF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418AAAF = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  ServantCostumeListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewManager_CallbackFunc___ctor(
        ServantCostumeListViewManager_CallbackFunc_o *this,
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41853DD & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ServantCostumeListViewManager_ResultKind_TypeInfo, v9);
    byte_41853DD = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantCostumeListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall ServantCostumeListViewManager_CallbackFunc__EndInvoke(
        ServantCostumeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  ServantCostumeListViewManager_CallbackFunc_o *v21; // x8
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
  ServantCostumeListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (ServantCostumeListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&index, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)index, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)index, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)index, v20);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)index,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)index,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)index, v23);
    goto LABEL_38;
  }
}