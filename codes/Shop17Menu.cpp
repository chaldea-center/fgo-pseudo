void __fastcall Shop17Menu___ctor(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11C6F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B11C6F = 1;
  }
  this->fields.buyCount = 1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall Shop17Menu__Awake(Shop17Menu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall Shop17Menu__CloseFolder(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *filterButton; // x0
  const MethodInfo *v7; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21

  if ( (byte_4B11C5F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_Shop17Menu__CloseFolder_b__33_0__, v4, v5);
    byte_4B11C5F = 1;
  }
  filterButton = this->fields.filterButton;
  if ( !filterButton
    || (UnityEngine_GameObject__SetActive(filterButton, 0, 0LL),
        Shop17Menu__CreateFolderList(this, v7),
        buyItemListViewManager = this->fields.buyItemListViewManager,
        v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_Shop17Menu__CloseFolder_b__33_0__, 0LL),
        !buyItemListViewManager) )
  {
    sub_1BCAA3C(filterButton, method);
  }
  ShopBuyItemListViewManager__SetMode_33470956(buyItemListViewManager, 4, v12, 0.1, 0LL);
}


void __fastcall Shop17Menu__CloseSelectMenu(Shop17Menu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *selectMenu; // x0

  selectMenu = this->fields.selectMenu;
  if ( !selectMenu )
    goto LABEL_10;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)selectMenu, 0LL) )
  {
    selectMenu = this->fields.selectMenu;
    if ( !selectMenu )
      goto LABEL_10;
    ShopBuyItemConfirmMenu__Close_33432592(selectMenu, callback, 0LL);
  }
  selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
  if ( !selectMenu )
LABEL_10:
    sub_1BCAA3C(selectMenu, callback);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)selectMenu, 0LL) )
  {
    selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
    if ( selectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Close_42911136((ShopBuyBulkItemConfirmMenu_o *)selectMenu, callback, 0LL);
      goto LABEL_9;
    }
    goto LABEL_10;
  }
LABEL_9:
  this->fields.isBulkSelect = 0;
}


void __fastcall Shop17Menu__CreateFolderList(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  Il2CppObject *Master_object; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  int64_t UserId; // x0
  __int64 v20; // x24
  __int64 v21; // x8
  int v22; // w23
  unsigned __int64 v23; // x25
  struct Shop17FolderControl_array *svtCoinFolderList; // x8
  int max_length; // w9
  int32_t v26; // w21
  UnityEngine_Object_o *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  struct Shop17FolderControl_array *v30; // x8
  Shop17FolderControl_o *v31; // x21
  System_Action_int__o *v32; // x22
  const MethodInfo *v33; // x3
  struct Shop17FolderControl_array *v34; // x21
  __int64 v35; // x8
  unsigned __int64 v36; // x22
  UnityEngine_Object_o *v37; // x20

  if ( (byte_4B11C6E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_Shop17Menu_OnClickFolder__, v14, v15);
    byte_4B11C6E = 1;
  }
  if ( this->fields.svtCoinFolderList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
    Shop17Menu__InitFolderList(this, v17);
    UserId = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    v20 = *(_QWORD *)(*(_QWORD *)(UserId + 184) + 456LL);
    if ( !v20 )
      goto LABEL_44;
    v21 = *(_QWORD *)(v20 + 24);
    if ( (int)v21 >= 1 )
    {
      v22 = 0;
      v23 = 0LL;
      while ( v23 < (unsigned int)v21 )
      {
        svtCoinFolderList = this->fields.svtCoinFolderList;
        if ( !svtCoinFolderList )
          goto LABEL_44;
        max_length = svtCoinFolderList->max_length;
        if ( v22 < max_length )
        {
          if ( v22 >= (unsigned int)max_length )
            break;
          v26 = *(_DWORD *)(v20 + 32 + 4 * v23);
          v27 = (UnityEngine_Object_o *)svtCoinFolderList->m_Items[v22];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
          UserId = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
          if ( (UserId & 1) != 0 )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
            UserId = NetworkManager__get_UserId(0LL);
            if ( !Master_object )
              goto LABEL_44;
            UserId = (int64_t)UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)Master_object, UserId, v26, 0LL);
            if ( !UserId )
              goto LABEL_44;
            if ( *(int *)(UserId + 28) >= 1 )
            {
              v30 = this->fields.svtCoinFolderList;
              if ( !v30 )
                goto LABEL_44;
              if ( v22 >= v30->max_length )
                break;
              v31 = v30->m_Items[v22];
              v32 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v18, v28, v29);
              System_Action_int____ctor(v32, (Il2CppObject *)this, (intptr_t)Method_Shop17Menu_OnClickFolder__, 0LL);
              if ( !v31 )
                goto LABEL_44;
              Shop17FolderControl__SetFolder(v31, v23 + 1, v32, v33);
              ++v22;
            }
          }
        }
        LODWORD(v21) = *(_DWORD *)(v20 + 24);
        if ( (__int64)++v23 >= (int)v21 )
          goto LABEL_31;
      }
LABEL_43:
      sub_1BCAA44(UserId, v18);
    }
    v22 = 0;
LABEL_31:
    v34 = this->fields.svtCoinFolderList;
    if ( !v34 )
      goto LABEL_44;
    v35 = *(_QWORD *)&v34->max_length;
    if ( (int)v35 >= 1 )
    {
      v36 = 0LL;
      while ( v36 < (unsigned int)v35 )
      {
        v37 = (UnityEngine_Object_o *)v34->m_Items[v36];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        UserId = UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
        if ( (UserId & 1) != 0 )
        {
          if ( !v37 )
            goto LABEL_44;
          Shop17FolderControl__SetActive((Shop17FolderControl_o *)v37, v18);
        }
        LODWORD(v35) = v34->max_length;
        if ( (__int64)++v36 >= (int)v35 )
          goto LABEL_41;
      }
      goto LABEL_43;
    }
LABEL_41:
    GameObjectExtensions__SetLocalPositionY(this->fields.dummyFolderObject, (float)v22 * -120.0, 0LL);
    UserId = (int64_t)this->fields.svtCoinFolderListScrollBar;
    if ( !UserId )
LABEL_44:
      sub_1BCAA3C(UserId, v18);
    UIProgressBar__set_value((UIProgressBar_o *)UserId, 0.0, 0LL);
  }
}


void __fastcall Shop17Menu__EndRequestShop(Shop17Menu_o *this, System_String_o *result, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4B11C6C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, result, method);
    byte_4B11C6C = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    Shop17Menu__RefreshInfo(this, v5);
  else
    Shop17Menu__OpenRequestResultDialog(this, v5);
}


bool __fastcall Shop17Menu__GetIsBulk(Shop17Menu_o *this, ShopBuyItemListViewItem_o *item, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x19
  __int64 v9; // x1
  int32_t limitNum; // w8
  bool v11; // w22
  __int64 v13; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x21
  int m_CancellationTokenSource_high; // w20

  if ( (byte_4B11C68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, item, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    this = (Shop17Menu_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B11C68 = 1;
  }
  if ( !item )
    goto LABEL_18;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_18;
  if ( ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0LL)
    || !ShopEntity__IsEnable(Shop_k__BackingField, 0LL, 0LL) )
  {
    return 0;
  }
  limitNum = Shop_k__BackingField->fields.limitNum;
  if ( limitNum )
    v11 = limitNum - item->fields._TotalNum_k__BackingField > 1;
  else
    v11 = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  UserId = NetworkManager__get_UserId(0LL);
  this = (Shop17Menu_o *)ShopEntity__GetItemID(Shop_k__BackingField, 0LL);
  if ( !Master_object
    || (this = (Shop17Menu_o *)UserItemMaster__GetEntityDefinitely(
                                 (UserItemMaster_o *)Master_object,
                                 UserId,
                                 (int32_t)this,
                                 0LL)) == 0LL )
  {
LABEL_18:
    sub_1BCAA3C(this, item);
  }
  m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
  return (v11 & (m_CancellationTokenSource_high >= 2 * ShopEntity__GetPrice(Shop_k__BackingField, 0LL))) != 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall Shop17Menu__GetNeedCount(Shop17Menu_o *this, int32_t itemId, const MethodInfo *method)
{
  return Shop17NeedCountCalculator__Calculate(itemId, *(const MethodInfo **)&itemId);
}


void __fastcall Shop17Menu__Init(Shop17Menu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UIProgressBar_o *svtCoinFolderListScrollBar; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *svtCoinFolderContainer; // x20
  const MethodInfo *v9; // x1

  Shop17Menu__SetDispCurrencyInfo(this, 0, v2);
  svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.svtCoinFolderListScrollBar;
  if ( !svtCoinFolderListScrollBar )
    goto LABEL_9;
  UIProgressBar__set_value(svtCoinFolderListScrollBar, 0.0, 0LL);
  svtCoinFolderContainer = this->fields.svtCoinFolderContainer;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
    byte_4B109C1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(
    svtCoinFolderContainer,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.buyItemListViewManager;
  if ( !svtCoinFolderListScrollBar
    || (ListViewManager__DestroyList((ListViewManager_o *)svtCoinFolderListScrollBar, 0LL),
        (svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.buyItemListViewManager) == 0LL)
    || (svtCoinFolderListScrollBar = (UIProgressBar_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)svtCoinFolderListScrollBar,
                                                          0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtCoinFolderListScrollBar, 0, 0LL),
        (svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.filterButton) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(svtCoinFolderListScrollBar, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtCoinFolderListScrollBar, 0, 0LL);
  Shop17Menu__InitFolderList(this, v9);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall Shop17Menu__InitFolderList(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Shop17Menu_o *v3; // x19
  struct Shop17FolderControl_array *svtCoinFolderList; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19

  v3 = this;
  if ( (byte_4B11C6D & 1) == 0 )
  {
    this = (Shop17Menu_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11C6D = 1;
  }
  svtCoinFolderList = v3->fields.svtCoinFolderList;
  if ( svtCoinFolderList )
  {
    v5 = *(_QWORD *)&svtCoinFolderList->max_length;
    if ( (int)v5 >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)v5 )
          sub_1BCAA44(this, method);
        v7 = (UnityEngine_Object_o *)svtCoinFolderList->m_Items[v6];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (Shop17Menu_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v7 )
            sub_1BCAA3C(this, method);
          Shop17FolderControl__InitFolder((Shop17FolderControl_o *)v7, method);
        }
        LODWORD(v5) = svtCoinFolderList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v5 );
    }
  }
}


System_String_o *__fastcall Shop17Menu__MakeResultDialogMessage(
        Shop17Menu_o *this,
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  System_String_o *BulkNameText; // x21
  Il2CppObject *v12; // x21
  Il2CppObject *NumberFormat; // x19
  System_String_o *v14; // x0

  if ( (byte_4B11C69 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, entity);
    this = (Shop17Menu_o *)sub_1BCA7E0(&StringLiteral_5853/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/, v8, v9);
    byte_4B11C69 = 1;
  }
  if ( !item )
    goto LABEL_8;
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(item, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  this = (Shop17Menu_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0LL);
  if ( !entity )
LABEL_8:
    sub_1BCAA3C(this, item);
  v12 = (Il2CppObject *)this;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * num, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5853/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/, 0LL);
  return System_String__Format_62415592(v14, v12, NumberFormat, 0LL);
}


void __fastcall Shop17Menu__OnAlertDecide(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *buyItemListViewManager; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  ShopEntity_o *v11; // x22
  Shop17ConfirmDialog_o *confirmDialog; // x20
  int32_t buyCount; // w21
  System_Action_o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x24
  const MethodInfo *v19; // x5

  if ( (byte_4B11C64 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_Shop17Menu_OnConfirmCancel__, v4, v5);
    sub_1BCA7E0(&Method_Shop17Menu_OnConfirmDecide__, v6, v7);
    byte_4B11C64 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_7;
  buyItemListViewManager = ShopBuyItemListViewManager__GetItem(
                             (ShopBuyItemListViewManager_o *)buyItemListViewManager,
                             this->fields.selectedItemIndex,
                             0LL);
  if ( !buyItemListViewManager
    || (v11 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14),
        confirmDialog = this->fields.confirmDialog,
        buyCount = this->fields.buyCount,
        v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v9, v10),
        System_Action___ctor(v14, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmDecide__, 0LL),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(v18, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmCancel__, 0LL),
        !confirmDialog) )
  {
LABEL_7:
    sub_1BCAA3C(buyItemListViewManager, method);
  }
  Shop17ConfirmDialog__Open(confirmDialog, buyCount, v11, v14, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17Menu__OnClickFolder(Shop17Menu_o *this, int32_t svtCoinType, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11C5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Shop17Menu_OnClickFolder__, *(_QWORD *)&svtCoinType, method);
    sub_1BCA7E0(&StringLiteral_13256/*"SvtCoinType"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_3593/*"CLICK_SHOP17_LIST"*/, v7, v8);
    byte_4B11C5D = 1;
  }
  v9 = Method_Shop17Menu_OnClickFolder__;
  if ( (*((_BYTE *)Method_Shop17Menu_OnClickFolder__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BCA7F8(Method_Shop17Menu_OnClickFolder__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (myRoomFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(myRoomFsm, 0LL)) == 0LL
    || (myRoomFsm = (PlayMakerFSM_o *)myRoomFsm[1].fields.m_CancellationTokenSource) == 0LL
    || (myRoomFsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)myRoomFsm,
                                        (System_String_o *)StringLiteral_13256/*"SvtCoinType"*/,
                                        0LL)) == 0LL
    || (LODWORD(myRoomFsm->fields.addEventHandlers) = svtCoinType, (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCAA3C(myRoomFsm, v11);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3593/*"CLICK_SHOP17_LIST"*/, 0LL);
}


void __fastcall Shop17Menu__OnConfirmCancel(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x20
  System_Action_int__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  ShopBuyItemConfirmMenu_o *selectMenu; // x20
  System_Action_int__o *v12; // x21

  if ( (byte_4B11C65 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_Shop17Menu_OnPreConfirm__, v5, v6);
    byte_4B11C65 = 1;
  }
  if ( this->fields.isBulkSelect )
  {
    bulkSelectMenu = this->fields.bulkSelectMenu;
    v8 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, method, v2, v3);
    System_Action_int____ctor(v8, (Il2CppObject *)this, Method_Shop17Menu_OnPreConfirm__, 0LL);
    if ( bulkSelectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Modify(bulkSelectMenu, v8, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(v9, v10);
  }
  selectMenu = this->fields.selectMenu;
  v12 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, method, v2, v3);
  System_Action_int____ctor(v12, (Il2CppObject *)this, Method_Shop17Menu_OnPreConfirm__, 0LL);
  if ( !selectMenu )
    goto LABEL_8;
  ShopBuyItemConfirmMenu__SetInput(selectMenu, v12, 0LL);
}


void __fastcall Shop17Menu__OnConfirmDecide(Shop17Menu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  Shop17Menu__CloseSelectMenu(this, 0LL, v2);
  Shop17Menu__RequestShop(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17Menu__OnPreConfirm(Shop17Menu_o *this, int32_t cnt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *buyItemListViewManager; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  int32_t buyCount; // w20
  int32_t needCount; // w21
  Shop17SliderAlertDialog_o *sliderAlertDialog; // x23
  ShopEntity_o *v17; // x22
  System_Action_o *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x25
  const MethodInfo *v23; // x6
  const MethodInfo *v24; // x1
  Shop17ConfirmDialog_o *confirmDialog; // x22
  ShopEntity_o *v26; // x21
  System_Action_o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x24
  const MethodInfo *v32; // x5

  if ( (byte_4B11C63 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&cnt, method);
    sub_1BCA7E0(&Method_Shop17Menu_OnAlertDecide__, v5, v6);
    sub_1BCA7E0(&Method_Shop17Menu_OnConfirmCancel__, v7, v8);
    sub_1BCA7E0(&Method_Shop17Menu_OnConfirmDecide__, v9, v10);
    byte_4B11C63 = 1;
  }
  this->fields.buyCount = cnt;
  if ( cnt )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_13;
    buyItemListViewManager = ShopBuyItemListViewManager__GetItem(
                               (ShopBuyItemListViewManager_o *)buyItemListViewManager,
                               this->fields.selectedItemIndex,
                               0LL);
    buyCount = this->fields.buyCount;
    needCount = this->fields.needCount;
    if ( buyCount > needCount )
    {
      if ( buyItemListViewManager )
      {
        sliderAlertDialog = this->fields.sliderAlertDialog;
        v17 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14);
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&cnt, v12, v13);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_Shop17Menu_OnAlertDecide__, 0LL);
        v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmCancel__, 0LL);
        if ( sliderAlertDialog )
        {
          Shop17SliderAlertDialog__Open(sliderAlertDialog, buyCount, needCount, v17, v18, v22, v23);
          return;
        }
      }
LABEL_13:
      sub_1BCAA3C(buyItemListViewManager, *(_QWORD *)&cnt);
    }
    if ( !buyItemListViewManager )
      goto LABEL_13;
    confirmDialog = this->fields.confirmDialog;
    v26 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14);
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&cnt, v12, v13);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmDecide__, 0LL);
    v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmCancel__, 0LL);
    if ( !confirmDialog )
      goto LABEL_13;
    Shop17ConfirmDialog__Open(confirmDialog, buyCount, v26, v27, v31, v32);
  }
  else
  {
    Shop17Menu__CloseSelectMenu(this, 0LL, method);
    Shop17Menu__RefreshInfo(this, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17Menu__OnResultDecide(Shop17Menu_o *this, bool isOk, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
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
  int64_t requestResultDialog; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  Il2CppObject *Master_object; // x20
  unsigned __int64 i; // x23
  __int64 v27; // x8
  BalanceConfig_c *v28; // x8
  int64_t v29; // x21
  struct System_Int32_array *Shop17ConsumeItemIds; // x8
  System_String_o *v31; // x20
  Il2CppObject *Instance; // x0
  System_String_o *Empty; // x21
  CommonUI_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x23

  if ( (byte_4B11C66 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isOk, method);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_Shop17Menu__OnResultDecide_b__41_0__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&string_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_5834/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/, v20, v21);
    byte_4B11C66 = 1;
  }
  requestResultDialog = (int64_t)this->fields.requestResultDialog;
  if ( !requestResultDialog )
    goto LABEL_25;
  RequestResultDialog__Close((RequestResultDialog_o *)requestResultDialog, 0LL);
  Shop17Menu__RefreshInfo(this, v23);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0LL; ; ++i )
  {
    requestResultDialog = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isOk);
      requestResultDialog = (int64_t)BalanceConfig_TypeInfo;
    }
    v27 = *(_QWORD *)(*(_QWORD *)(requestResultDialog + 184) + 456LL);
    if ( !v27 )
      goto LABEL_25;
    if ( (__int64)i >= *(int *)(v27 + 24) )
      break;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isOk);
    requestResultDialog = NetworkManager__get_UserId(0LL);
    v28 = BalanceConfig_TypeInfo;
    v29 = requestResultDialog;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isOk);
      v28 = BalanceConfig_TypeInfo;
    }
    Shop17ConsumeItemIds = v28->static_fields->Shop17ConsumeItemIds;
    if ( !Shop17ConsumeItemIds )
      goto LABEL_25;
    if ( i >= Shop17ConsumeItemIds->max_length )
      sub_1BCAA44(requestResultDialog, isOk);
    if ( !Master_object )
      goto LABEL_25;
    requestResultDialog = (int64_t)UserItemMaster__GetEntityDefinitely(
                                     (UserItemMaster_o *)Master_object,
                                     v29,
                                     Shop17ConsumeItemIds->m_Items[i + 1],
                                     0LL);
    if ( !requestResultDialog )
      goto LABEL_25;
    if ( *(int *)(requestResultDialog + 28) > 0 )
      return;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isOk);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5834/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  Empty = string_TypeInfo->static_fields->Empty;
  v34 = (CommonUI_o *)Instance;
  v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_Shop17Menu__OnResultDecide_b__41_0__, 0LL);
  if ( !v34 )
LABEL_25:
    sub_1BCAA3C(requestResultDialog, isOk);
  CommonUI__OpenNotificationDialog(v34, Empty, v31, v38, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, -2.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17Menu__OnSelectBuyItem(Shop17Menu_o *this, int32_t selectItemNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  __int64 v21; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *v23; // x20
  int32_t TargetId; // w0
  const MethodInfo *v25; // x1
  int v26; // w0
  Il2CppObject *v27; // x0
  System_String_o *v28; // x8
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  System_String_o *v31; // x0
  Shop17Menu_o *v32; // x21
  const MethodInfo *v33; // x2
  bool IsBulk; // w0
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x21
  ShopEntity_o *Shop_k__BackingField; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_int__o *v40; // x23
  ShopBuyItemConfirmMenu_o *selectMenu; // x21
  ShopEntity_o *v42; // x22
  int32_t ShopKind_k__BackingField; // w20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_int__o *v47; // x23
  int v48; // [xsp+8h] [xbp-38h] BYREF
  int v49; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B11C62 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, *(_QWORD *)&selectItemNum, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_Shop17Menu_OnPreConfirm__, v9, v10);
    sub_1BCA7E0(&Method_Shop17Menu_OnSelectBuyItem__, v11, v12);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_16103/*"[FFFF00]{0}"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_5852/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/, v17, v18);
    byte_4B11C62 = 1;
  }
  v19 = Method_Shop17Menu_OnSelectBuyItem__;
  if ( (*((_BYTE *)Method_Shop17Menu_OnSelectBuyItem__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCA7F8(Method_Shop17Menu_OnSelectBuyItem__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_21;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetItem(
                                                             buyItemListViewManager,
                                                             selectItemNum,
                                                             0LL);
  this->fields.selectedItemIndex = selectItemNum;
  if ( !buyItemListViewManager )
    goto LABEL_21;
  v23 = (ShopBuyItemListViewItem_o *)buyItemListViewManager;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)buyItemListViewManager->fields.clipRange;
  if ( !buyItemListViewManager )
    goto LABEL_21;
  TargetId = ShopEntity__get_TargetId((ShopEntity_o *)buyItemListViewManager, 0LL);
  v26 = Shop17NeedCountCalculator__Calculate(TargetId, v25);
  this->fields.needCount = v26;
  if ( v26 <= 0 )
  {
    v49 = v26;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
    v28 = (System_String_o *)StringLiteral_16103/*"[FFFF00]{0}"*/;
  }
  else
  {
    v48 = v26;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v28 = (System_String_o *)StringLiteral_25238/*"{0}"*/;
  }
  v30 = (Il2CppObject *)System_String__Format(v28, v27, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5852/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/, 0LL);
  v32 = (Shop17Menu_o *)System_String__Format(v31, v30, 0LL);
  IsBulk = Shop17Menu__GetIsBulk(v32, v23, v33);
  this->fields.isBulkSelect = IsBulk;
  if ( IsBulk )
  {
    buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.bulkSelectMenuNoticeLabel;
    if ( buyItemListViewManager )
    {
      UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v32, 0LL);
      bulkSelectMenu = this->fields.bulkSelectMenu;
      Shop_k__BackingField = v23->fields._Shop_k__BackingField;
      v40 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v37, v38, v39);
      System_Action_int____ctor(v40, (Il2CppObject *)this, Method_Shop17Menu_OnPreConfirm__, 0LL);
      if ( bulkSelectMenu )
      {
        ShopBuyBulkItemConfirmMenu__Open(bulkSelectMenu, Shop_k__BackingField, v23, v40, 8, 0LL);
        return;
      }
    }
LABEL_21:
    sub_1BCAA3C(buyItemListViewManager, v21);
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.selectMenuNoticeLabel;
  if ( !buyItemListViewManager )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v32, 0LL);
  selectMenu = this->fields.selectMenu;
  v42 = v23->fields._Shop_k__BackingField;
  ShopKind_k__BackingField = v23->fields._ShopKind_k__BackingField;
  v47 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v44, v45, v46);
  System_Action_int____ctor(v47, (Il2CppObject *)this, Method_Shop17Menu_OnPreConfirm__, 0LL);
  if ( !selectMenu )
    goto LABEL_21;
  ShopBuyItemConfirmMenu__Open(selectMenu, v42, ShopKind_k__BackingField, v47, 0, 0, 0LL, 0LL);
}


void __fastcall Shop17Menu__Open(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  UnityEngine_GameObject_o *filterButton; // x0
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *currencyTitleLabel; // x20
  const MethodInfo *v20; // x1
  UnityEngine_Object_o *currencyTitleLabel2; // x20
  UILabel_o *v22; // x20
  UILabel_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x20
  __int64 v28; // x1
  UnityEngine_Object_o *baseWindow; // x20
  __int64 v30; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B11C5C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_Shop17Menu__Open_b__30_0__, v10, v11);
    sub_1BCA7E0(&StringLiteral_5838/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_5839/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/, v14, v15);
    byte_4B11C5C = 1;
  }
  filterButton = this->fields.filterButton;
  if ( !filterButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(filterButton, 0, 0LL);
  filterButton = (UnityEngine_GameObject_o *)this->fields.buyItemListViewManager;
  if ( !filterButton )
    goto LABEL_27;
  filterButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterButton, 0LL);
  if ( !filterButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(filterButton, 0, 0LL);
  Shop17Menu__CreateFolderList(this, v17);
  currencyTitleLabel = (UnityEngine_Object_o *)this->fields.currencyTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(currencyTitleLabel, 0LL, 0LL) )
  {
    currencyTitleLabel2 = (UnityEngine_Object_o *)this->fields.currencyTitleLabel2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Inequality(currencyTitleLabel2, 0LL, 0LL) )
    {
      v22 = this->fields.currencyTitleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5839/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/, 0LL);
      if ( !v22 )
        goto LABEL_27;
      UILabel__set_text(v22, (System_String_o *)filterButton, 0LL);
      v23 = this->fields.currencyTitleLabel2;
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5838/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/, 0LL);
      if ( !v23 )
        goto LABEL_27;
      UILabel__set_text(v23, (System_String_o *)filterButton, 0LL);
    }
  }
  Shop17Menu__SetCurrencyInfo(this, v20);
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_Shop17Menu__Open_b__30_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v27, 0LL);
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) )
  {
    filterButton = this->fields.baseWindow;
    if ( !filterButton )
      goto LABEL_27;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         filterButton,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    filterButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)filterButton & 1) != 0 )
    {
      if ( Component_object )
      {
        LODWORD(Component_object[3].monitor) = 1045220557;
        LODWORD(Component_object[2].klass) = 2;
        return;
      }
LABEL_27:
      sub_1BCAA3C(filterButton, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17Menu__OpenFolder(Shop17Menu_o *this, int32_t svtCoinType, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21

  if ( (byte_4B11C5E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&svtCoinType, method);
    sub_1BCA7E0(&Method_Shop17Menu__OpenFolder_b__32_0__, v5, v6);
    byte_4B11C5E = 1;
  }
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_9;
  buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buyItemListViewManager, 0LL);
  if ( !buyItemListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 1, 0LL);
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (ShopBuyItemListViewManager__CreateExchangeSvtCoinList(
          (ShopBuyItemListViewManager_o *)buyItemListViewManager,
          svtCoinType,
          0LL),
        (buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager) == 0LL)
    || (ShopBuyItemListViewManager__FocusTopItem((ShopBuyItemListViewManager_o *)buyItemListViewManager, 0LL),
        v8 = this->fields.buyItemListViewManager,
        v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_Shop17Menu__OpenFolder_b__32_0__, 0LL),
        !v8) )
  {
LABEL_9:
    sub_1BCAA3C(buyItemListViewManager, *(_QWORD *)&svtCoinType);
  }
  ShopBuyItemListViewManager__SetMode_33470956(v8, 1, v12, 0.1, 0LL);
}


void __fastcall Shop17Menu__OpenRequestResultDialog(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  void *buyItemListViewManager; // x0
  const MethodInfo *v13; // x4
  ShopEntity_o *v14; // x21
  __int64 v15; // x1
  System_String_o *ResultDialogMessage; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  Il2CppObject *Entity; // x23
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  System_String_o *v20; // x21
  RequestResultDialog_o *requestResultDialog; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_bool__o *v25; // x24

  if ( (byte_4B11C6A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_Shop17Menu_OnResultDecide__, v10, v11);
    byte_4B11C6A = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_13;
  buyItemListViewManager = ShopBuyItemListViewManager__GetItem(
                             (ShopBuyItemListViewManager_o *)buyItemListViewManager,
                             this->fields.selectedItemIndex,
                             0LL);
  if ( !buyItemListViewManager )
    goto LABEL_13;
  v14 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14);
  ResultDialogMessage = Shop17Menu__MakeResultDialogMessage(
                          (Shop17Menu_o *)buyItemListViewManager,
                          (ShopBuyItemListViewItem_o *)buyItemListViewManager,
                          v14,
                          this->fields.buyCount,
                          v13);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  buyItemListViewManager = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v14 )
    goto LABEL_13;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)buyItemListViewManager;
  buyItemListViewManager = (void *)ShopEntity__get_TargetId(v14, 0LL);
  if ( !v17 )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)buyItemListViewManager,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v14,
                                           (ItemEntity_o *)Entity,
                                           this->fields.buyCount,
                                           0LL);
  buyItemListViewManager = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                             v14,
                             (ItemEntity_o *)Entity,
                             0LL);
  if ( !this->fields.requestResultDialog
    || (v20 = (System_String_o *)buyItemListViewManager,
        (buyItemListViewManager = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.requestResultDialog,
                                    0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 1, 0LL),
        requestResultDialog = this->fields.requestResultDialog,
        v25 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v22, v23, v24),
        System_Action_bool____ctor(v25, (Il2CppObject *)this, Method_Shop17Menu_OnResultDecide__, 0LL),
        !requestResultDialog) )
  {
LABEL_13:
    sub_1BCAA3C(buyItemListViewManager, method);
  }
  RequestResultDialog__Open(
    requestResultDialog,
    ResultDialogMessage,
    v20,
    RequestResultDialogItemMessageNormal,
    v25,
    0LL);
}


void __fastcall Shop17Menu__RefreshInfo(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_int__o *v11; // x21
  const MethodInfo *v12; // x1

  if ( (byte_4B11C61 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_Shop17Menu_OnSelectBuyItem__, v4, v5);
    byte_4B11C61 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (buyItemListViewManager = ShopBuyItemListViewManager__GetItem(
                                   (ShopBuyItemListViewManager_o *)buyItemListViewManager,
                                   this->fields.selectedItemIndex,
                                   0LL)) == 0LL
    || (ShopBuyItemListViewItem__Modify(
          (ShopBuyItemListViewItem_o *)buyItemListViewManager,
          *((ShopEntity_o **)buyItemListViewManager + 14),
          0LL),
        (buyItemListViewManager = this->fields.buyItemListViewManager) == 0LL)
    || (ShopBuyItemListViewManager__SetMode_33469684((ShopBuyItemListViewManager_o *)buyItemListViewManager, 5, 0LL),
        v7 = this->fields.buyItemListViewManager,
        v11 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v8, v9, v10),
        System_Action_int____ctor(v11, (Il2CppObject *)this, (intptr_t)Method_Shop17Menu_OnSelectBuyItem__, 0LL),
        !v7) )
  {
    sub_1BCAA3C(buyItemListViewManager, method);
  }
  ShopBuyItemListViewManager__SetMode(v7, 2, v11, 0LL);
  Shop17Menu__SetCurrencyInfo(this, v12);
}


void __fastcall Shop17Menu__RequestShop(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ShopBuyItemListViewItem_o *v15; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  __int64 v17; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_4B11C6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PurchaseRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_Shop17Menu_EndRequestShop__, v8, v9);
    byte_4B11C6B = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_12;
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
  if ( Item )
  {
    v15 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v12,
                                                     v13,
                                                     v14);
      NetworkManager_ResultCallbackFunc___ctor(v16, (Il2CppObject *)this, Method_Shop17Menu_EndRequestShop__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
      buyItemListViewManager = (ShopBuyItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v16,
                                                                 (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v15->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField && buyItemListViewManager )
      {
        PurchaseRequest__beginRequest(
          (PurchaseRequest_o *)buyItemListViewManager,
          Shop_k__BackingField->fields.id,
          this->fields.buyCount,
          0,
          0LL);
        return;
      }
LABEL_12:
      sub_1BCAA3C(buyItemListViewManager, method);
    }
  }
  Shop17Menu__RefreshInfo(this, v12);
}


void __fastcall Shop17Menu__SetCurrencyInfo(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  Il2CppObject *Master_object; // x20
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  il2cpp_array_size_t i; // w27
  int64_t UserId; // x0
  struct System_Int32_array *Shop17ConsumeItemIds; // x8
  struct Shop17Menu_CurrencyInfo_array *currencyInfoList; // x9
  il2cpp_array_size_t max_length; // w10
  struct Shop17Menu_CurrencyInfo_array *v26; // x9
  int32_t v27; // w22
  Shop17Menu_CurrencyInfo_o *v28; // x28
  UISprite_o *currencySprite; // x23
  int32_t monitor; // w24
  __int64 v31; // x1
  UILabel_o *currencyLabel; // x22
  int32_t v33; // w23
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11C67 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    byte_4B11C67 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  v20 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0; ; ++i )
  {
    UserId = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
      UserId = (int64_t)BalanceConfig_TypeInfo;
    }
    Shop17ConsumeItemIds = *(struct System_Int32_array **)(*(_QWORD *)(UserId + 184) + 456LL);
    if ( !Shop17ConsumeItemIds )
LABEL_35:
      sub_1BCAA3C(UserId, v19);
    if ( (signed int)i >= (signed int)Shop17ConsumeItemIds->max_length )
      break;
    currencyInfoList = this->fields.currencyInfoList;
    if ( !currencyInfoList )
      break;
    max_length = currencyInfoList->max_length;
    if ( (int)i >= (int)max_length )
      break;
    if ( i >= max_length )
      goto LABEL_36;
    if ( !currencyInfoList->m_Items[i] )
      break;
    if ( !*(_DWORD *)(UserId + 224) )
    {
      j_il2cpp_runtime_class_init_0(UserId, v19);
      Shop17ConsumeItemIds = BalanceConfig_TypeInfo->static_fields->Shop17ConsumeItemIds;
      if ( !Shop17ConsumeItemIds )
        goto LABEL_35;
    }
    if ( i >= Shop17ConsumeItemIds->max_length )
      goto LABEL_36;
    v26 = this->fields.currencyInfoList;
    if ( !v26 )
      goto LABEL_35;
    if ( i >= v26->max_length )
LABEL_36:
      sub_1BCAA44(UserId, v19);
    if ( !Master_object )
      goto LABEL_35;
    v27 = Shop17ConsumeItemIds->m_Items[i + 1];
    v28 = v26->m_Items[i];
    UserId = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               &entity,
               v27,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( (UserId & 1) != 0 )
    {
      if ( !v28 || !entity )
        goto LABEL_35;
      currencySprite = v28->fields.currencySprite;
      monitor = (int32_t)entity[2].monitor;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
      AtlasManager__SetItem(currencySprite, monitor, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v20 )
        goto LABEL_35;
      UserId = (int64_t)UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v20, UserId, v27, 0LL);
      if ( !UserId )
        goto LABEL_35;
      currencyLabel = v28->fields.currencyLabel;
      v33 = *(_DWORD *)(UserId + 28);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      UserId = (int64_t)LocalizationManager__GetNumberFormat(v33, 0LL);
      if ( !currencyLabel )
        goto LABEL_35;
      UILabel__set_text(currencyLabel, (System_String_o *)UserId, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17Menu__SetDispCurrencyInfo(Shop17Menu_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *currencyInfoPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B11C60 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, method);
    byte_4B11C60 = 1;
  }
  currencyInfoPanel = (UnityEngine_Object_o *)this->fields.currencyInfoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  if ( UnityEngine_Object__op_Inequality(currencyInfoPanel, 0LL, 0LL) )
  {
    v7 = this->fields.currencyInfoPanel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


void __fastcall Shop17Menu___CloseFolder_b__33_0(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *buyItemListViewManager; // x0

  if ( (byte_4B11C71 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, method, v2);
    byte_4B11C71 = 1;
  }
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              buyItemListViewManager,
                                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 0, 0LL),
        (buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager) == 0LL)
    || (ListViewManager__DestroyList((ListViewManager_o *)buyItemListViewManager, 0LL),
        (buyItemListViewManager = (UnityEngine_Component_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCAA3C(buyItemListViewManager, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)buyItemListViewManager, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
}


void __fastcall Shop17Menu___OnResultDecide_b__41_0(Shop17Menu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11C72 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5091/*"DESTROY_SHOP17"*/, method, v2);
    byte_4B11C72 = 1;
  }
  Shop17Menu__SetDispCurrencyInfo(this, 0, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_5091/*"DESTROY_SHOP17"*/, 0LL);
}


void __fastcall Shop17Menu___OpenFolder_b__32_0(Shop17Menu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MyRoomControl_o *myRoomCtrl; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_int__o *v13; // x21

  if ( (byte_4B11C70 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_Shop17Menu_OnSelectBuyItem__, v4, v5);
    sub_1BCA7E0(&StringLiteral_13256/*"SvtCoinType"*/, v6, v7);
    byte_4B11C70 = 1;
  }
  myRoomCtrl = this->fields.myRoomCtrl;
  if ( !myRoomCtrl )
    goto LABEL_11;
  MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
  myRoomCtrl = (MyRoomControl_o *)this->fields.filterButton;
  if ( !myRoomCtrl )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomCtrl, 1, 0LL);
  buyItemListViewManager = this->fields.buyItemListViewManager;
  v13 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v10, v11, v12);
  System_Action_int____ctor(v13, (Il2CppObject *)this, (intptr_t)Method_Shop17Menu_OnSelectBuyItem__, 0LL);
  if ( !buyItemListViewManager
    || (ShopBuyItemListViewManager__SetMode(buyItemListViewManager, 2, v13, 0LL),
        (myRoomCtrl = (MyRoomControl_o *)this->fields.myRoomFsm) == 0LL)
    || (myRoomCtrl = (MyRoomControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)myRoomCtrl, 0LL)) == 0LL
    || (myRoomCtrl = (MyRoomControl_o *)myRoomCtrl->fields.optionComp) == 0LL
    || (myRoomCtrl = (MyRoomControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                          (HutongGames_PlayMaker_FsmVariables_o *)myRoomCtrl,
                                          (System_String_o *)StringLiteral_13256/*"SvtCoinType"*/,
                                          0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(myRoomCtrl, method);
  }
  LODWORD(myRoomCtrl->fields.myRoomListCtr) = 0;
}


void __fastcall Shop17Menu___Open_b__30_0(Shop17Menu_o *this, const MethodInfo *method)
{
  MyRoomControl_o *myRoomCtrl; // x0

  myRoomCtrl = this->fields.myRoomCtrl;
  if ( !myRoomCtrl )
    sub_1BCAA3C(0LL, method);
  MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
}


bool __fastcall Shop17Menu__get_IsActiveSvtCoinList(Shop17Menu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0

  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              buyItemListViewManager,
                                                              0LL)) == 0LL )
  {
    sub_1BCAA3C(buyItemListViewManager, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)buyItemListViewManager, 0LL);
}


void __fastcall Shop17Menu_CurrencyInfo___ctor(Shop17Menu_CurrencyInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}