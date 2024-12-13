void __fastcall Shop17Menu___ctor(Shop17Menu_o *this, const MethodInfo *method)
{
  if ( (byte_4B277B4 & 1) == 0 )
  {
    sub_1BCE82C(&BaseMenu_TypeInfo);
    byte_4B277B4 = 1;
  }
  this->fields.buyCount = 1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall Shop17Menu__Awake(Shop17Menu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall Shop17Menu__CloseFolder(Shop17Menu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *filterButton; // x0
  const MethodInfo *v4; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x20
  System_Action_o *v6; // x21

  if ( (byte_4B277A3 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu__CloseFolder_b__33_0__);
    byte_4B277A3 = 1;
  }
  filterButton = this->fields.filterButton;
  if ( !filterButton
    || (UnityEngine_GameObject__SetActive(filterButton, 0, 0LL),
        Shop17Menu__CreateFolderList(this, v4),
        buyItemListViewManager = this->fields.buyItemListViewManager,
        v6 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_Shop17Menu__CloseFolder_b__33_0__, 0LL),
        !buyItemListViewManager) )
  {
    sub_1BCEA88(filterButton, method);
  }
  ShopBuyItemListViewManager__SetMode_33497124(buyItemListViewManager, 4, v6, 0.1, 0LL);
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
    ShopBuyItemConfirmMenu__Close_33458280(selectMenu, callback, 0LL);
  }
  selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
  if ( !selectMenu )
LABEL_10:
    sub_1BCEA88(selectMenu, callback);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)selectMenu, 0LL) )
  {
    selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
    if ( selectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Close_42980284((ShopBuyBulkItemConfirmMenu_o *)selectMenu, callback, 0LL);
      goto LABEL_9;
    }
    goto LABEL_10;
  }
LABEL_9:
  this->fields.isBulkSelect = 0;
}


void __fastcall Shop17Menu__CreateFolderList(Shop17Menu_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UIProgressBar_o *EntityDefinitely; // x0
  UnityEngine_Transform_c *klass; // x25
  const char *namespaze; // x8
  int v9; // w24
  unsigned __int64 v10; // x26
  struct Shop17FolderControl_array *svtCoinFolderList; // x8
  int max_length; // w9
  int32_t v13; // w22
  UnityEngine_Object_o *v14; // x23
  struct Shop17FolderControl_array *v15; // x8
  Shop17FolderControl_o *v16; // x22
  System_Action_int__o *v17; // x23
  const MethodInfo *v18; // x3
  struct Shop17FolderControl_array *v19; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x22
  UnityEngine_Object_o *v22; // x20

  if ( (byte_4B277B3 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_int__TypeInfo);
    sub_1BCE82C(&BalanceConfig_TypeInfo);
    sub_1BCE82C(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&NetworkManager_TypeInfo);
    sub_1BCE82C(&UnityEngine_Object_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu_OnClickFolder__);
    byte_4B277B3 = 1;
  }
  if ( this->fields.svtCoinFolderList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserItemMaster___);
    Shop17Menu__InitFolderList(this, v4);
    EntityDefinitely = (UIProgressBar_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = (UIProgressBar_o *)BalanceConfig_TypeInfo;
    }
    klass = EntityDefinitely[1].fields.mTrans[19].klass;
    if ( !klass )
      goto LABEL_48;
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v9 = 0;
      v10 = 0LL;
      while ( v10 < (unsigned int)namespaze )
      {
        svtCoinFolderList = this->fields.svtCoinFolderList;
        if ( !svtCoinFolderList )
          goto LABEL_48;
        max_length = svtCoinFolderList->max_length;
        if ( v9 < max_length )
        {
          if ( v9 >= (unsigned int)max_length )
            break;
          v13 = *((_DWORD *)&klass->_1.byval_arg.data + v10);
          v14 = (UnityEngine_Object_o *)svtCoinFolderList->m_Items[v9];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          EntityDefinitely = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
          if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B26937 )
            {
              sub_1BCE82C(&NetworkManager_TypeInfo);
              byte_4B26937 = 1;
            }
            EntityDefinitely = (UIProgressBar_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              EntityDefinitely = (UIProgressBar_o *)NetworkManager_TypeInfo;
            }
            if ( !Master_object )
              goto LABEL_48;
            EntityDefinitely = (UIProgressBar_o *)UserItemMaster__GetEntityDefinitely(
                                                    (UserItemMaster_o *)Master_object,
                                                    *(_QWORD *)&EntityDefinitely[1].fields.mTrans[2].fields.m_CachedPtr,
                                                    v13,
                                                    0LL);
            if ( !EntityDefinitely )
              goto LABEL_48;
            if ( SHIDWORD(EntityDefinitely->fields.m_CancellationTokenSource) >= 1 )
            {
              v15 = this->fields.svtCoinFolderList;
              if ( !v15 )
                goto LABEL_48;
              if ( v9 >= v15->max_length )
                break;
              v16 = v15->m_Items[v9];
              v17 = (System_Action_int__o *)sub_1BCEA78(System_Action_int__TypeInfo);
              System_Action_int____ctor(v17, (Il2CppObject *)this, (intptr_t)Method_Shop17Menu_OnClickFolder__, 0LL);
              if ( !v16 )
                goto LABEL_48;
              Shop17FolderControl__SetFolder(v16, v10 + 1, v17, v18);
              ++v9;
            }
          }
        }
        LODWORD(namespaze) = klass->_1.namespaze;
        if ( (__int64)++v10 >= (int)namespaze )
          goto LABEL_35;
      }
LABEL_47:
      sub_1BCEA90(EntityDefinitely, v5);
    }
    v9 = 0;
LABEL_35:
    v19 = this->fields.svtCoinFolderList;
    if ( !v19 )
      goto LABEL_48;
    v20 = *(_QWORD *)&v19->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = 0LL;
      while ( v21 < (unsigned int)v20 )
      {
        v22 = (UnityEngine_Object_o *)v19->m_Items[v21];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        EntityDefinitely = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_48;
          Shop17FolderControl__SetActive((Shop17FolderControl_o *)v22, v5);
        }
        LODWORD(v20) = v19->max_length;
        if ( (__int64)++v21 >= (int)v20 )
          goto LABEL_45;
      }
      goto LABEL_47;
    }
LABEL_45:
    GameObjectExtensions__SetLocalPositionY(this->fields.dummyFolderObject, (float)v9 * -120.0, 0LL);
    EntityDefinitely = (UIProgressBar_o *)this->fields.svtCoinFolderListScrollBar;
    if ( !EntityDefinitely )
LABEL_48:
      sub_1BCEA88(EntityDefinitely, v5);
    UIProgressBar__set_value(EntityDefinitely, 0.0, 0LL);
  }
}


void __fastcall Shop17Menu__EndRequestShop(Shop17Menu_o *this, System_String_o *result, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4B277B1 & 1) == 0 )
  {
    sub_1BCE82C(&StringLiteral_22306/*"ng"*/);
    byte_4B277B1 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22306/*"ng"*/, 0LL) )
    Shop17Menu__RefreshInfo(this, v5);
  else
    Shop17Menu__OpenRequestResultDialog(this, v5);
}


bool __fastcall Shop17Menu__GetIsBulk(Shop17Menu_o *this, ShopBuyItemListViewItem_o *item, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x19
  int32_t limitNum; // w8
  bool v6; // w22
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x21
  int m_CancellationTokenSource_high; // w20

  if ( (byte_4B277AD & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    this = (Shop17Menu_o *)sub_1BCE82C(&NetworkManager_TypeInfo);
    byte_4B277AD = 1;
  }
  if ( !item )
    goto LABEL_22;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_22;
  if ( ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0LL)
    || !ShopEntity__IsEnable(Shop_k__BackingField, 0LL, 0LL) )
  {
    return 0;
  }
  limitNum = Shop_k__BackingField->fields.limitNum;
  if ( limitNum )
    v6 = limitNum - item->fields._TotalNum_k__BackingField > 1;
  else
    v6 = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B26937 )
  {
    sub_1BCE82C(&NetworkManager_TypeInfo);
    byte_4B26937 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  userIdNumber = v9->static_fields->userIdNumber;
  this = (Shop17Menu_o *)ShopEntity__GetItemID(Shop_k__BackingField, 0LL);
  if ( !Master_object
    || (this = (Shop17Menu_o *)UserItemMaster__GetEntityDefinitely(
                                 (UserItemMaster_o *)Master_object,
                                 userIdNumber,
                                 (int32_t)this,
                                 0LL)) == 0LL )
  {
LABEL_22:
    sub_1BCEA88(this, item);
  }
  m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
  return (v6 & (m_CancellationTokenSource_high >= 2 * ShopEntity__GetPrice(Shop_k__BackingField, 0LL))) != 0;
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
  UnityEngine_GameObject_o *svtCoinFolderContainer; // x20
  const MethodInfo *v7; // x1

  Shop17Menu__SetDispCurrencyInfo(this, 0, v2);
  svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.svtCoinFolderListScrollBar;
  if ( !svtCoinFolderListScrollBar )
    goto LABEL_9;
  UIProgressBar__set_value(svtCoinFolderListScrollBar, 0.0, 0LL);
  svtCoinFolderContainer = this->fields.svtCoinFolderContainer;
  if ( !byte_4B26501 )
  {
    sub_1BCE82C(&UnityEngine_Vector3_TypeInfo);
    byte_4B26501 = 1;
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
    sub_1BCEA88(svtCoinFolderListScrollBar, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtCoinFolderListScrollBar, 0, 0LL);
  Shop17Menu__InitFolderList(this, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall Shop17Menu__InitFolderList(Shop17Menu_o *this, const MethodInfo *method)
{
  Shop17Menu_o *v2; // x19
  struct Shop17FolderControl_array *svtCoinFolderList; // x20
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_4B277B2 & 1) == 0 )
  {
    this = (Shop17Menu_o *)sub_1BCE82C(&UnityEngine_Object_TypeInfo);
    byte_4B277B2 = 1;
  }
  svtCoinFolderList = v2->fields.svtCoinFolderList;
  if ( svtCoinFolderList )
  {
    v4 = *(_QWORD *)&svtCoinFolderList->max_length;
    if ( (int)v4 >= 1 )
    {
      v5 = 0LL;
      do
      {
        if ( v5 >= (unsigned int)v4 )
          sub_1BCEA90(this, method);
        v6 = (UnityEngine_Object_o *)svtCoinFolderList->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (Shop17Menu_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v6 )
            sub_1BCEA88(this, method);
          Shop17FolderControl__InitFolder((Shop17FolderControl_o *)v6, method);
        }
        LODWORD(v4) = svtCoinFolderList->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)v4 );
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
  System_String_o *BulkNameText; // x21
  Il2CppObject *v9; // x21
  Il2CppObject *NumberFormat; // x19
  System_String_o *v11; // x0

  if ( (byte_4B277AE & 1) == 0 )
  {
    sub_1BCE82C(&LocalizationManager_TypeInfo);
    this = (Shop17Menu_o *)sub_1BCE82C(&StringLiteral_5860/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/);
    byte_4B277AE = 1;
  }
  if ( !item )
    goto LABEL_8;
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(item, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (Shop17Menu_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0LL);
  if ( !entity )
LABEL_8:
    sub_1BCEA88(this, item);
  v9 = (Il2CppObject *)this;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * num, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5860/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/, 0LL);
  return System_String__Format_62498036(v11, v9, NumberFormat, 0LL);
}


void __fastcall Shop17Menu__OnAlertDecide(Shop17Menu_o *this, const MethodInfo *method)
{
  void *buyItemListViewManager; // x0
  ShopEntity_o *v4; // x22
  Shop17ConfirmDialog_o *confirmDialog; // x20
  int32_t buyCount; // w21
  System_Action_o *v7; // x23
  System_Action_o *v8; // x24
  const MethodInfo *v9; // x5

  if ( (byte_4B277A9 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu_OnConfirmCancel__);
    sub_1BCE82C(&Method_Shop17Menu_OnConfirmDecide__);
    byte_4B277A9 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_7;
  buyItemListViewManager = ShopBuyItemListViewManager__GetItem(
                             (ShopBuyItemListViewManager_o *)buyItemListViewManager,
                             this->fields.selectedItemIndex,
                             0LL);
  if ( !buyItemListViewManager
    || (v4 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14),
        confirmDialog = this->fields.confirmDialog,
        buyCount = this->fields.buyCount,
        v7 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmDecide__, 0LL),
        v8 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmCancel__, 0LL),
        !confirmDialog) )
  {
LABEL_7:
    sub_1BCEA88(buyItemListViewManager, method);
  }
  Shop17ConfirmDialog__Open(confirmDialog, buyCount, v4, v7, v8, v9);
}


void __fastcall Shop17Menu__OnClickFolder(Shop17Menu_o *this, int32_t svtCoinType, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B277A1 & 1) == 0 )
  {
    sub_1BCE82C(&Method_Shop17Menu_OnClickFolder__);
    sub_1BCE82C(&StringLiteral_13264/*"SvtCoinType"*/);
    sub_1BCE82C(&StringLiteral_3598/*"CLICK_SHOP17_LIST"*/);
    byte_4B277A1 = 1;
  }
  v5 = Method_Shop17Menu_OnClickFolder__;
  if ( (*((_BYTE *)Method_Shop17Menu_OnClickFolder__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCE844(Method_Shop17Menu_OnClickFolder__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCE810(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (myRoomFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(myRoomFsm, 0LL)) == 0LL
    || (myRoomFsm = (PlayMakerFSM_o *)myRoomFsm[1].fields.m_CancellationTokenSource) == 0LL
    || (myRoomFsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)myRoomFsm,
                                        (System_String_o *)StringLiteral_13264/*"SvtCoinType"*/,
                                        0LL)) == 0LL
    || (LODWORD(myRoomFsm->fields.addEventHandlers) = svtCoinType, (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCEA88(myRoomFsm, v7);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3598/*"CLICK_SHOP17_LIST"*/, 0LL);
}


void __fastcall Shop17Menu__OnConfirmCancel(Shop17Menu_o *this, const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x20
  System_Action_int__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  ShopBuyItemConfirmMenu_o *selectMenu; // x20
  System_Action_int__o *v8; // x21

  if ( (byte_4B277AA & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_int__TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu_OnPreConfirm__);
    byte_4B277AA = 1;
  }
  if ( this->fields.isBulkSelect )
  {
    bulkSelectMenu = this->fields.bulkSelectMenu;
    v4 = (System_Action_int__o *)sub_1BCEA78(System_Action_int__TypeInfo);
    System_Action_int____ctor(v4, (Il2CppObject *)this, Method_Shop17Menu_OnPreConfirm__, 0LL);
    if ( bulkSelectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Modify(bulkSelectMenu, v4, 0LL);
      return;
    }
LABEL_8:
    sub_1BCEA88(v5, v6);
  }
  selectMenu = this->fields.selectMenu;
  v8 = (System_Action_int__o *)sub_1BCEA78(System_Action_int__TypeInfo);
  System_Action_int____ctor(v8, (Il2CppObject *)this, Method_Shop17Menu_OnPreConfirm__, 0LL);
  if ( !selectMenu )
    goto LABEL_8;
  ShopBuyItemConfirmMenu__SetInput(selectMenu, v8, 0LL);
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
  void *buyItemListViewManager; // x0
  int32_t buyCount; // w20
  int32_t needCount; // w21
  Shop17SliderAlertDialog_o *sliderAlertDialog; // x23
  ShopEntity_o *v9; // x22
  System_Action_o *v10; // x24
  System_Action_o *v11; // x25
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x1
  Shop17ConfirmDialog_o *confirmDialog; // x22
  ShopEntity_o *v15; // x21
  System_Action_o *v16; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x5

  if ( (byte_4B277A8 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu_OnAlertDecide__);
    sub_1BCE82C(&Method_Shop17Menu_OnConfirmCancel__);
    sub_1BCE82C(&Method_Shop17Menu_OnConfirmDecide__);
    byte_4B277A8 = 1;
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
        v9 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14);
        v10 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_Shop17Menu_OnAlertDecide__, 0LL);
        v11 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo);
        System_Action___ctor(v11, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmCancel__, 0LL);
        if ( sliderAlertDialog )
        {
          Shop17SliderAlertDialog__Open(sliderAlertDialog, buyCount, needCount, v9, v10, v11, v12);
          return;
        }
      }
LABEL_13:
      sub_1BCEA88(buyItemListViewManager, *(_QWORD *)&cnt);
    }
    if ( !buyItemListViewManager )
      goto LABEL_13;
    confirmDialog = this->fields.confirmDialog;
    v15 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14);
    v16 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmDecide__, 0LL);
    v17 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_Shop17Menu_OnConfirmCancel__, 0LL);
    if ( !confirmDialog )
      goto LABEL_13;
    Shop17ConfirmDialog__Open(confirmDialog, buyCount, v15, v16, v17, v18);
  }
  else
  {
    Shop17Menu__CloseSelectMenu(this, 0LL, method);
    Shop17Menu__RefreshInfo(this, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17Menu__OnResultDecide(Shop17Menu_o *this, bool isOk, const MethodInfo *method)
{
  RequestResultDialog_o *requestResultDialog; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *Master_object; // x21
  unsigned __int64 i; // x23
  __int64 v8; // x8
  BalanceConfig_c *v9; // x8
  int64_t v10; // x22
  struct System_Int32_array *Shop17ConsumeItemIds; // x8
  System_String_o *v12; // x20
  Il2CppObject *Instance; // x22
  System_String_o *Empty; // x21
  System_Action_o *v15; // x23

  if ( (byte_4B277AB & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_TypeInfo);
    sub_1BCE82C(&BalanceConfig_TypeInfo);
    sub_1BCE82C(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&LocalizationManager_TypeInfo);
    sub_1BCE82C(&NetworkManager_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu__OnResultDecide_b__42_0__);
    sub_1BCE82C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1BCE82C(&string_TypeInfo);
    sub_1BCE82C(&StringLiteral_5840/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/);
    byte_4B277AB = 1;
  }
  requestResultDialog = this->fields.requestResultDialog;
  if ( !requestResultDialog )
    goto LABEL_29;
  RequestResultDialog__Close(requestResultDialog, 0LL);
  Shop17Menu__RefreshInfo(this, v5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0LL; ; ++i )
  {
    requestResultDialog = (RequestResultDialog_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      requestResultDialog = (RequestResultDialog_o *)BalanceConfig_TypeInfo;
    }
    v8 = *(_QWORD *)&requestResultDialog->fields.userItemNum2Label->fields.mEffectColor.fields.b;
    if ( !v8 )
      goto LABEL_29;
    if ( (__int64)i >= *(int *)(v8 + 24) )
      break;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B26937 )
    {
      sub_1BCE82C(&NetworkManager_TypeInfo);
      byte_4B26937 = 1;
    }
    requestResultDialog = (RequestResultDialog_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      requestResultDialog = (RequestResultDialog_o *)NetworkManager_TypeInfo;
    }
    v9 = BalanceConfig_TypeInfo;
    v10 = *(_QWORD *)&requestResultDialog->fields.userItemNum2Label->fields.updateAnchors;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    Shop17ConsumeItemIds = v9->static_fields->Shop17ConsumeItemIds;
    if ( !Shop17ConsumeItemIds )
      goto LABEL_29;
    if ( i >= Shop17ConsumeItemIds->max_length )
      sub_1BCEA90(requestResultDialog, isOk);
    if ( !Master_object )
      goto LABEL_29;
    requestResultDialog = (RequestResultDialog_o *)UserItemMaster__GetEntityDefinitely(
                                                     (UserItemMaster_o *)Master_object,
                                                     v10,
                                                     Shop17ConsumeItemIds->m_Items[i + 1],
                                                     0LL);
    if ( !requestResultDialog )
      goto LABEL_29;
    if ( SHIDWORD(requestResultDialog->fields.m_CancellationTokenSource) > 0 )
      return;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5840/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37F2D20 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  Empty = string_TypeInfo->static_fields->Empty;
  v15 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_Shop17Menu__OnResultDecide_b__42_0__, 0LL);
  if ( !Instance )
LABEL_29:
    sub_1BCEA88(requestResultDialog, isOk);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, Empty, v12, v15, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, -2.0, 0LL);
}


void __fastcall Shop17Menu__OnSelectBuyItem(Shop17Menu_o *this, int32_t selectItemNum, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x19

  if ( (byte_4B277A6 & 1) == 0 )
  {
    sub_1BCE82C(&Method_NetworkManager_getRequest_UserPresentListRequest___);
    sub_1BCE82C(&NetworkManager_TypeInfo);
    sub_1BCE82C(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu_OnSelectBuyItem__);
    sub_1BCE82C(&Method_Shop17Menu___c__DisplayClass36_0__OnSelectBuyItem_b__0__);
    sub_1BCE82C(&Shop17Menu___c__DisplayClass36_0_TypeInfo);
    byte_4B277A6 = 1;
  }
  v5 = sub_1BCEA78(Shop17Menu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1BCE7D0(v5 + 16);
  *(_DWORD *)(v5 + 24) = selectItemNum;
  v8 = Method_Shop17Menu_OnSelectBuyItem__;
  if ( (*((_BYTE *)Method_Shop17Menu_OnSelectBuyItem__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCE844(Method_Shop17Menu_OnSelectBuyItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCE810(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCEA78(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_Shop17Menu___c__DisplayClass36_0__OnSelectBuyItem_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_2FAA654 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
LABEL_10:
    sub_1BCEA88(Request_object, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall Shop17Menu__Open(Shop17Menu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *filterButton; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *currencyTitleLabel; // x20
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *currencyTitleLabel2; // x20
  UILabel_o *v8; // x20
  UILabel_o *v9; // x20
  System_Action_o *v10; // x20
  UnityEngine_Object_o *baseWindow; // x20
  Il2CppObject *Component_object; // x19

  if ( (byte_4B277A0 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_TypeInfo);
    sub_1BCE82C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1BCE82C(&LocalizationManager_TypeInfo);
    sub_1BCE82C(&UnityEngine_Object_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu__Open_b__30_0__);
    sub_1BCE82C(&StringLiteral_5844/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/);
    sub_1BCE82C(&StringLiteral_5845/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/);
    byte_4B277A0 = 1;
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
  Shop17Menu__CreateFolderList(this, v4);
  currencyTitleLabel = (UnityEngine_Object_o *)this->fields.currencyTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currencyTitleLabel, 0LL, 0LL) )
  {
    currencyTitleLabel2 = (UnityEngine_Object_o *)this->fields.currencyTitleLabel2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currencyTitleLabel2, 0LL, 0LL) )
    {
      v8 = this->fields.currencyTitleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5845/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/, 0LL);
      if ( !v8 )
        goto LABEL_27;
      UILabel__set_text(v8, (System_String_o *)filterButton, 0LL);
      v9 = this->fields.currencyTitleLabel2;
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5844/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/, 0LL);
      if ( !v9 )
        goto LABEL_27;
      UILabel__set_text(v9, (System_String_o *)filterButton, 0LL);
    }
  }
  Shop17Menu__SetCurrencyInfo(this, v6);
  v10 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_Shop17Menu__Open_b__30_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v10, 0LL);
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) )
  {
    filterButton = this->fields.baseWindow;
    if ( !filterButton )
      goto LABEL_27;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         filterButton,
                         (const MethodInfo_2F7677C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1BCEA88(filterButton, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17Menu__OpenFolder(Shop17Menu_o *this, int32_t svtCoinType, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21

  if ( (byte_4B277A2 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu__OpenFolder_b__32_0__);
    byte_4B277A2 = 1;
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
        v6 = this->fields.buyItemListViewManager,
        v7 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_Shop17Menu__OpenFolder_b__32_0__, 0LL),
        !v6) )
  {
LABEL_9:
    sub_1BCEA88(buyItemListViewManager, *(_QWORD *)&svtCoinType);
  }
  ShopBuyItemListViewManager__SetMode_33497124(v6, 1, v7, 0.1, 0LL);
}


void __fastcall Shop17Menu__OpenRequestResultDialog(Shop17Menu_o *this, const MethodInfo *method)
{
  void *buyItemListViewManager; // x0
  const MethodInfo *v4; // x4
  ShopEntity_o *v5; // x21
  System_String_o *ResultDialogMessage; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x22
  Il2CppObject *Entity; // x23
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  System_String_o *v10; // x21
  RequestResultDialog_o *requestResultDialog; // x23
  System_Action_bool__o *v12; // x24

  if ( (byte_4B277AF & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_bool__TypeInfo);
    sub_1BCE82C(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1BCE82C(&Method_Shop17Menu_OnResultDecide__);
    byte_4B277AF = 1;
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
  v5 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14);
  ResultDialogMessage = Shop17Menu__MakeResultDialogMessage(
                          (Shop17Menu_o *)buyItemListViewManager,
                          (ShopBuyItemListViewItem_o *)buyItemListViewManager,
                          v5,
                          this->fields.buyCount,
                          v4);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  buyItemListViewManager = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v5 )
    goto LABEL_13;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)buyItemListViewManager;
  buyItemListViewManager = (void *)ShopEntity__get_TargetId(v5, 0LL);
  if ( !v7 )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v7,
             (int32_t)buyItemListViewManager,
             (const MethodInfo_31C6FC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v5,
                                           (ItemEntity_o *)Entity,
                                           this->fields.buyCount,
                                           0LL);
  buyItemListViewManager = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                             v5,
                             (ItemEntity_o *)Entity,
                             0LL);
  if ( !this->fields.requestResultDialog
    || (v10 = (System_String_o *)buyItemListViewManager,
        (buyItemListViewManager = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.requestResultDialog,
                                    0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 1, 0LL),
        requestResultDialog = this->fields.requestResultDialog,
        v12 = (System_Action_bool__o *)sub_1BCEA78(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v12, (Il2CppObject *)this, Method_Shop17Menu_OnResultDecide__, 0LL),
        !requestResultDialog) )
  {
LABEL_13:
    sub_1BCEA88(buyItemListViewManager, method);
  }
  RequestResultDialog__Open(
    requestResultDialog,
    ResultDialogMessage,
    v10,
    RequestResultDialogItemMessageNormal,
    v12,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17Menu__OpenSelectMenu(Shop17Menu_o *this, int32_t selectItemNum, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *v6; // x20
  int32_t TargetId; // w0
  const MethodInfo *v8; // x1
  int v9; // w0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x8
  Il2CppObject *v15; // x21
  System_String_o *v16; // x0
  Shop17Menu_o *v17; // x21
  const MethodInfo *v18; // x2
  bool IsBulk; // w0
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x21
  ShopEntity_o *Shop_k__BackingField; // x22
  System_Action_int__o *v22; // x23
  ShopBuyItemConfirmMenu_o *selectMenu; // x21
  ShopEntity_o *v24; // x22
  int32_t ShopKind_k__BackingField; // w20
  System_Action_int__o *v26; // x23
  int v27; // [xsp+8h] [xbp-38h] BYREF
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B277A7 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_int__TypeInfo);
    sub_1BCE82C(&int_TypeInfo);
    sub_1BCE82C(&LocalizationManager_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu_OnPreConfirm__);
    sub_1BCE82C(&StringLiteral_25254/*"{0}"*/);
    sub_1BCE82C(&StringLiteral_16111/*"[FFFF00]{0}"*/);
    sub_1BCE82C(&StringLiteral_5859/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/);
    byte_4B277A7 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetItem(
                                                             buyItemListViewManager,
                                                             selectItemNum,
                                                             0LL);
  this->fields.selectedItemIndex = selectItemNum;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  v6 = (ShopBuyItemListViewItem_o *)buyItemListViewManager;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)buyItemListViewManager->fields.clipRange;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  TargetId = ShopEntity__get_TargetId((ShopEntity_o *)buyItemListViewManager, 0LL);
  v9 = Shop17NeedCountCalculator__Calculate(TargetId, v8);
  this->fields.needCount = v9;
  if ( v9 <= 0 )
  {
    v28 = v9;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v10, v11, v12);
    v14 = (System_String_o *)StringLiteral_16111/*"[FFFF00]{0}"*/;
  }
  else
  {
    v27 = v9;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v10, v11, v12);
    v14 = (System_String_o *)StringLiteral_25254/*"{0}"*/;
  }
  v15 = (Il2CppObject *)System_String__Format(v14, v13, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5859/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/, 0LL);
  v17 = (Shop17Menu_o *)System_String__Format(v16, v15, 0LL);
  IsBulk = Shop17Menu__GetIsBulk(v17, v6, v18);
  this->fields.isBulkSelect = IsBulk;
  if ( IsBulk )
  {
    buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.bulkSelectMenuNoticeLabel;
    if ( buyItemListViewManager )
    {
      UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v17, 0LL);
      bulkSelectMenu = this->fields.bulkSelectMenu;
      Shop_k__BackingField = v6->fields._Shop_k__BackingField;
      v22 = (System_Action_int__o *)sub_1BCEA78(System_Action_int__TypeInfo);
      System_Action_int____ctor(v22, (Il2CppObject *)this, Method_Shop17Menu_OnPreConfirm__, 0LL);
      if ( bulkSelectMenu )
      {
        ShopBuyBulkItemConfirmMenu__Open(bulkSelectMenu, Shop_k__BackingField, v6, v22, 0, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1BCEA88(buyItemListViewManager, *(_QWORD *)&selectItemNum);
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.selectMenuNoticeLabel;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v17, 0LL);
  selectMenu = this->fields.selectMenu;
  v24 = v6->fields._Shop_k__BackingField;
  ShopKind_k__BackingField = v6->fields._ShopKind_k__BackingField;
  v26 = (System_Action_int__o *)sub_1BCEA78(System_Action_int__TypeInfo);
  System_Action_int____ctor(v26, (Il2CppObject *)this, Method_Shop17Menu_OnPreConfirm__, 0LL);
  if ( !selectMenu )
    goto LABEL_19;
  ShopBuyItemConfirmMenu__Open(selectMenu, v24, ShopKind_k__BackingField, v26, 0, 0, 0LL, 0, 0LL);
}


void __fastcall Shop17Menu__RefreshInfo(Shop17Menu_o *this, const MethodInfo *method)
{
  void *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v4; // x20
  System_Action_int__o *v5; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4B277A5 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_int__TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu_OnSelectBuyItem__);
    byte_4B277A5 = 1;
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
    || (ShopBuyItemListViewManager__SetMode_33495852((ShopBuyItemListViewManager_o *)buyItemListViewManager, 5, 0LL),
        v4 = this->fields.buyItemListViewManager,
        v5 = (System_Action_int__o *)sub_1BCEA78(System_Action_int__TypeInfo),
        System_Action_int____ctor(v5, (Il2CppObject *)this, (intptr_t)Method_Shop17Menu_OnSelectBuyItem__, 0LL),
        !v4) )
  {
    sub_1BCEA88(buyItemListViewManager, method);
  }
  ShopBuyItemListViewManager__SetMode(v4, 2, v5, 0LL);
  Shop17Menu__SetCurrencyInfo(this, v6);
}


void __fastcall Shop17Menu__RequestShop(Shop17Menu_o *this, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v5; // x1
  ShopBuyItemListViewItem_o *v6; // x20
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_4B277B0 & 1) == 0 )
  {
    sub_1BCE82C(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1BCE82C(&NetworkManager_TypeInfo);
    sub_1BCE82C(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu_EndRequestShop__);
    byte_4B277B0 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_12;
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
  if ( Item )
  {
    v6 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCEA78(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_Shop17Menu_EndRequestShop__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      buyItemListViewManager = (ShopBuyItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v7,
                                                                 (const MethodInfo_2FAA654 *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v6->fields._Shop_k__BackingField;
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
      sub_1BCEA88(buyItemListViewManager, method);
    }
  }
  Shop17Menu__RefreshInfo(this, v5);
}


void __fastcall Shop17Menu__SetCurrencyInfo(Shop17Menu_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  __int64 v4; // x1
  Il2CppObject *v5; // x22
  il2cpp_array_size_t i; // w28
  void *EntityDefinitely; // x0
  struct System_Int32_array *Shop17ConsumeItemIds; // x8
  struct Shop17Menu_CurrencyInfo_array *currencyInfoList; // x9
  il2cpp_array_size_t max_length; // w10
  struct Shop17Menu_CurrencyInfo_array *v11; // x9
  int32_t v12; // w23
  Shop17Menu_CurrencyInfo_o *v13; // x29
  UISprite_o *currencySprite; // x24
  int32_t monitor; // w25
  UILabel_o *currencyLabel; // x23
  int32_t v17; // w24
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B277AC & 1) == 0 )
  {
    sub_1BCE82C(&AtlasManager_TypeInfo);
    sub_1BCE82C(&BalanceConfig_TypeInfo);
    sub_1BCE82C(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1BCE82C(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1BCE82C(&LocalizationManager_TypeInfo);
    sub_1BCE82C(&NetworkManager_TypeInfo);
    byte_4B277AC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_ItemMaster___);
  v5 = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0; ; ++i )
  {
    EntityDefinitely = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = BalanceConfig_TypeInfo;
    }
    Shop17ConsumeItemIds = *(struct System_Int32_array **)(*((_QWORD *)EntityDefinitely + 23) + 456LL);
    if ( !Shop17ConsumeItemIds )
LABEL_39:
      sub_1BCEA88(EntityDefinitely, v4);
    if ( (signed int)i >= (signed int)Shop17ConsumeItemIds->max_length )
      break;
    currencyInfoList = this->fields.currencyInfoList;
    if ( !currencyInfoList )
      break;
    max_length = currencyInfoList->max_length;
    if ( (int)i >= (int)max_length )
      break;
    if ( i >= max_length )
      goto LABEL_40;
    if ( !currencyInfoList->m_Items[i] )
      break;
    if ( !*((_DWORD *)EntityDefinitely + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityDefinitely);
      Shop17ConsumeItemIds = BalanceConfig_TypeInfo->static_fields->Shop17ConsumeItemIds;
      if ( !Shop17ConsumeItemIds )
        goto LABEL_39;
    }
    if ( i >= Shop17ConsumeItemIds->max_length )
      goto LABEL_40;
    v11 = this->fields.currencyInfoList;
    if ( !v11 )
      goto LABEL_39;
    if ( i >= v11->max_length )
LABEL_40:
      sub_1BCEA90(EntityDefinitely, v4);
    if ( !Master_object )
      goto LABEL_39;
    v12 = Shop17ConsumeItemIds->m_Items[i + 1];
    v13 = v11->m_Items[i];
    EntityDefinitely = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 &entity,
                                 v12,
                                 (const MethodInfo_31C701C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
    {
      if ( !v13 || !entity )
        goto LABEL_39;
      currencySprite = v13->fields.currencySprite;
      monitor = (int32_t)entity[2].monitor;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(currencySprite, monitor, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B26937 )
      {
        sub_1BCE82C(&NetworkManager_TypeInfo);
        byte_4B26937 = 1;
      }
      EntityDefinitely = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        EntityDefinitely = NetworkManager_TypeInfo;
      }
      if ( !v5 )
        goto LABEL_39;
      EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                           (UserItemMaster_o *)v5,
                           *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL),
                           v12,
                           0LL);
      if ( !EntityDefinitely )
        goto LABEL_39;
      currencyLabel = v13->fields.currencyLabel;
      v17 = *((_DWORD *)EntityDefinitely + 7);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      EntityDefinitely = LocalizationManager__GetNumberFormat(v17, 0LL);
      if ( !currencyLabel )
        goto LABEL_39;
      UILabel__set_text(currencyLabel, (System_String_o *)EntityDefinitely, 0LL);
    }
  }
}


void __fastcall Shop17Menu__SetDispCurrencyInfo(Shop17Menu_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *currencyInfoPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B277A4 & 1) == 0 )
  {
    sub_1BCE82C(&UnityEngine_Object_TypeInfo);
    byte_4B277A4 = 1;
  }
  currencyInfoPanel = (UnityEngine_Object_o *)this->fields.currencyInfoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currencyInfoPanel, 0LL, 0LL) )
  {
    v7 = this->fields.currencyInfoPanel;
    if ( !v7 )
      sub_1BCEA88(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


void __fastcall Shop17Menu___CloseFolder_b__33_0(Shop17Menu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0

  if ( (byte_4B277B6 & 1) == 0 )
  {
    sub_1BCE82C(&StringLiteral_7069/*"GO_NEXT"*/);
    byte_4B277B6 = 1;
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
    sub_1BCEA88(buyItemListViewManager, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)buyItemListViewManager, (System_String_o *)StringLiteral_7069/*"GO_NEXT"*/, 0LL);
}


void __fastcall Shop17Menu___OnResultDecide_b__42_0(Shop17Menu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B277B7 & 1) == 0 )
  {
    sub_1BCE82C(&StringLiteral_5097/*"DESTROY_SHOP17"*/);
    byte_4B277B7 = 1;
  }
  Shop17Menu__SetDispCurrencyInfo(this, 0, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCEA88(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_5097/*"DESTROY_SHOP17"*/, 0LL);
}


void __fastcall Shop17Menu___OpenFolder_b__32_0(Shop17Menu_o *this, const MethodInfo *method)
{
  MyRoomControl_o *myRoomCtrl; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_4B277B5 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_int__TypeInfo);
    sub_1BCE82C(&Method_Shop17Menu_OnSelectBuyItem__);
    sub_1BCE82C(&StringLiteral_13264/*"SvtCoinType"*/);
    byte_4B277B5 = 1;
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
  v5 = (System_Action_int__o *)sub_1BCEA78(System_Action_int__TypeInfo);
  System_Action_int____ctor(v5, (Il2CppObject *)this, (intptr_t)Method_Shop17Menu_OnSelectBuyItem__, 0LL);
  if ( !buyItemListViewManager
    || (ShopBuyItemListViewManager__SetMode(buyItemListViewManager, 2, v5, 0LL),
        (myRoomCtrl = (MyRoomControl_o *)this->fields.myRoomFsm) == 0LL)
    || (myRoomCtrl = (MyRoomControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)myRoomCtrl, 0LL)) == 0LL
    || (myRoomCtrl = (MyRoomControl_o *)myRoomCtrl->fields.optionComp) == 0LL
    || (myRoomCtrl = (MyRoomControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                          (HutongGames_PlayMaker_FsmVariables_o *)myRoomCtrl,
                                          (System_String_o *)StringLiteral_13264/*"SvtCoinType"*/,
                                          0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCEA88(myRoomCtrl, method);
  }
  LODWORD(myRoomCtrl->fields.myRoomListCtr) = 0;
}


void __fastcall Shop17Menu___Open_b__30_0(Shop17Menu_o *this, const MethodInfo *method)
{
  MyRoomControl_o *myRoomCtrl; // x0

  myRoomCtrl = this->fields.myRoomCtrl;
  if ( !myRoomCtrl )
    sub_1BCEA88(0LL, method);
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
    sub_1BCEA88(buyItemListViewManager, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)buyItemListViewManager, 0LL);
}


void __fastcall Shop17Menu_CurrencyInfo___ctor(Shop17Menu_CurrencyInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall Shop17Menu___c__DisplayClass36_0___ctor(
        Shop17Menu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall Shop17Menu___c__DisplayClass36_0___OnSelectBuyItem_b__0(
        Shop17Menu___c__DisplayClass36_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1BCEA88(this, _);
  Shop17Menu__OpenSelectMenu(this->fields.__4__this, this->fields.selectItemNum, method);
}