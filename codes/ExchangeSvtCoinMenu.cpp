void ExchangeSvtCoinMenu___ctor(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CB11A5 & 1) == 0 )
  {
    sub_1C6BA08(&BaseMenu_TypeInfo);
    byte_4CB11A5 = 1;
  }
  this->fields.buyCount = 1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void ExchangeSvtCoinMenu__Awake(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ;
}


void ExchangeSvtCoinMenu__CloseFolder(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *filterButton; // x0
  const MethodInfo *v4; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x20
  System_Action_o *v6; // x21

  if ( (byte_4CB1194 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu__CloseFolder_b__33_0__);
    byte_4CB1194 = 1;
  }
  filterButton = this->fields.filterButton;
  if ( !filterButton
    || (UnityEngine_GameObject__SetActive(filterButton, 0, 0),
        ExchangeSvtCoinMenu__CreateFolderList(this, v4),
        buyItemListViewManager = this->fields.buyItemListViewManager,
        v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__CloseFolder_b__33_0__, 0),
        !buyItemListViewManager) )
  {
    sub_1C6BC60(filterButton, method);
  }
  ShopBuyItemListViewManager__SetMode_35424144(buyItemListViewManager, 4, v6, 0.1, 0);
}


void ExchangeSvtCoinMenu__CloseSelectMenu(
        ExchangeSvtCoinMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *selectMenu; // x0

  selectMenu = this->fields.selectMenu;
  if ( !selectMenu )
    goto LABEL_10;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)selectMenu, 0) )
  {
    selectMenu = this->fields.selectMenu;
    if ( !selectMenu )
      goto LABEL_10;
    ShopBuyItemConfirmMenu__Close_35376916(selectMenu, callback, 0);
  }
  selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
  if ( !selectMenu )
LABEL_10:
    sub_1C6BC60(selectMenu, callback);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)selectMenu, 0) )
  {
    selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
    if ( selectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Close_45541868((ShopBuyBulkItemConfirmMenu_o *)selectMenu, callback, 0);
      goto LABEL_9;
    }
    goto LABEL_10;
  }
LABEL_9:
  this->fields.isBulkSelect = 0;
}


void ExchangeSvtCoinMenu__CreateFolderList(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UIProgressBar_o *EntityDefinitely; // x0
  UnityEngine_Transform_c *klass; // x25
  const char *namespaze; // x8
  int v9; // w24
  unsigned __int64 v10; // x26
  struct ExchangeSvtCoinFolderControl_array *svtCoinFolderList; // x8
  int max_length; // w9
  int32_t v13; // w22
  UnityEngine_Object_o *v14; // x23
  struct ExchangeSvtCoinFolderControl_array *v15; // x8
  ExchangeSvtCoinFolderControl_o *v16; // x22
  System_Action_int__o *v17; // x23
  const MethodInfo *v18; // x3
  struct ExchangeSvtCoinFolderControl_array *v19; // x21
  il2cpp_array_size_t v20; // x8
  unsigned __int64 v21; // x22
  UnityEngine_Object_o *v22; // x20

  if ( (byte_4CB11A4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnClickFolder__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB11A4 = 1;
  }
  if ( this->fields.svtCoinFolderList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
    ExchangeSvtCoinMenu__InitFolderList(this, v4);
    EntityDefinitely = (UIProgressBar_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = (UIProgressBar_o *)BalanceConfig_TypeInfo;
    }
    klass = EntityDefinitely[1].fields.mTrans[20].klass;
    if ( !klass )
      goto LABEL_48;
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v9 = 0;
      v10 = 0;
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
          EntityDefinitely = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
          if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4CB002A )
            {
              sub_1C6BA08(&NetworkManager_TypeInfo);
              byte_4CB002A = 1;
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
                                                    EntityDefinitely[1].fields.mTrans[2].fields.m_CachedPtr,
                                                    v13,
                                                    0);
            if ( !EntityDefinitely )
              goto LABEL_48;
            if ( SHIDWORD(EntityDefinitely->fields.m_CancellationTokenSource) >= 1 )
            {
              v15 = this->fields.svtCoinFolderList;
              if ( !v15 )
                goto LABEL_48;
              if ( (unsigned int)v9 >= LODWORD(v15->max_length) )
                break;
              v16 = v15->m_Items[v9];
              v17 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v17,
                (Il2CppObject *)this,
                (intptr_t)Method_ExchangeSvtCoinMenu_OnClickFolder__,
                0);
              if ( !v16 )
                goto LABEL_48;
              ExchangeSvtCoinFolderControl__SetFolder(v16, v10 + 1, v17, v18);
              ++v9;
            }
          }
        }
        LODWORD(namespaze) = klass->_1.namespaze;
        if ( (__int64)++v10 >= (int)namespaze )
          goto LABEL_35;
      }
LABEL_47:
      sub_1C6BC68(EntityDefinitely);
    }
    v9 = 0;
LABEL_35:
    v19 = this->fields.svtCoinFolderList;
    if ( !v19 )
      goto LABEL_48;
    v20 = v19->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = 0;
      while ( v21 < (unsigned int)v20 )
      {
        v22 = (UnityEngine_Object_o *)v19->m_Items[v21];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        EntityDefinitely = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v22, 0, 0);
        if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_48;
          ExchangeSvtCoinFolderControl__SetActive((ExchangeSvtCoinFolderControl_o *)v22, v5);
        }
        LODWORD(v20) = v19->max_length;
        if ( (__int64)++v21 >= (int)v20 )
          goto LABEL_45;
      }
      goto LABEL_47;
    }
LABEL_45:
    GameObjectExtensions__SetLocalPositionY(this->fields.dummyFolderObject, (float)v9 * -120.0, 0);
    EntityDefinitely = (UIProgressBar_o *)this->fields.svtCoinFolderListScrollBar;
    if ( !EntityDefinitely )
LABEL_48:
      sub_1C6BC60(EntityDefinitely, v5);
    UIProgressBar__set_value(EntityDefinitely, 0.0, 0);
  }
}


void ExchangeSvtCoinMenu__EndRequestShop(
        ExchangeSvtCoinMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4CB11A2 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB11A2 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
    ExchangeSvtCoinMenu__RefreshInfo(this, v5);
  else
    ExchangeSvtCoinMenu__OpenRequestResultDialog(this, v5);
}


bool ExchangeSvtCoinMenu__GetIsBulk(
        ExchangeSvtCoinMenu_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x19
  int32_t limitNum; // w8
  bool v6; // w22
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x21
  int m_CancellationTokenSource_high; // w20

  if ( (byte_4CB119E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    this = (ExchangeSvtCoinMenu_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB119E = 1;
  }
  if ( !item )
    goto LABEL_22;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_22;
  if ( ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0) || !ShopEntity__IsEnable(Shop_k__BackingField, 0, 0) )
    return 0;
  limitNum = Shop_k__BackingField->fields.limitNum;
  if ( limitNum )
    v6 = limitNum - item->fields._TotalNum_k__BackingField > 1;
  else
    v6 = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  userIdNumber = v9->static_fields->userIdNumber;
  this = (ExchangeSvtCoinMenu_o *)ShopEntity__GetItemID(Shop_k__BackingField, 0);
  if ( !Master_object
    || (this = (ExchangeSvtCoinMenu_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)Master_object,
                                          userIdNumber,
                                          (int32_t)this,
                                          0)) == 0 )
  {
LABEL_22:
    sub_1C6BC60(this, item);
  }
  m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
  return (v6 & (m_CancellationTokenSource_high >= 2 * ShopEntity__GetPrice(Shop_k__BackingField, 0))) != 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t ExchangeSvtCoinMenu__GetNeedCount(ExchangeSvtCoinMenu_o *this, int32_t itemId, const MethodInfo *method)
{
  return ExchangeSvtCoinNeedCountCalculator__Calculate(itemId, *(const MethodInfo **)&itemId);
}


void ExchangeSvtCoinMenu__Init(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UIProgressBar_o *svtCoinFolderListScrollBar; // x0
  UnityEngine_GameObject_o *svtCoinFolderContainer; // x20
  const MethodInfo *v7; // x1

  ExchangeSvtCoinMenu__SetDispCurrencyInfo(this, 0, v2);
  svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.svtCoinFolderListScrollBar;
  if ( !svtCoinFolderListScrollBar )
    goto LABEL_9;
  UIProgressBar__set_value(svtCoinFolderListScrollBar, 0.0, 0);
  svtCoinFolderContainer = this->fields.svtCoinFolderContainer;
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  GameObjectExtensions__SetLocalPosition(
    svtCoinFolderContainer,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.buyItemListViewManager;
  if ( !svtCoinFolderListScrollBar
    || (ListViewManager__DestroyList((ListViewManager_o *)svtCoinFolderListScrollBar, 0),
        (svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.buyItemListViewManager) == 0)
    || (svtCoinFolderListScrollBar = (UIProgressBar_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)svtCoinFolderListScrollBar,
                                                          0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtCoinFolderListScrollBar, 0, 0),
        (svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.filterButton) == 0) )
  {
LABEL_9:
    sub_1C6BC60(svtCoinFolderListScrollBar, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtCoinFolderListScrollBar, 0, 0);
  ExchangeSvtCoinMenu__InitFolderList(this, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void ExchangeSvtCoinMenu__InitFolderList(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinMenu_o *v2; // x19
  struct ExchangeSvtCoinFolderControl_array *svtCoinFolderList; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  const MethodInfo *v7; // x1

  v2 = this;
  if ( (byte_4CB11A3 & 1) == 0 )
  {
    this = (ExchangeSvtCoinMenu_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB11A3 = 1;
  }
  svtCoinFolderList = v2->fields.svtCoinFolderList;
  if ( svtCoinFolderList )
  {
    max_length = svtCoinFolderList->max_length;
    if ( (int)max_length >= 1 )
    {
      v5 = 0;
      do
      {
        if ( v5 >= (unsigned int)max_length )
          sub_1C6BC68(this);
        v6 = (UnityEngine_Object_o *)svtCoinFolderList->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ExchangeSvtCoinMenu_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v6 )
            sub_1C6BC60(this, v7);
          ExchangeSvtCoinFolderControl__InitFolder((ExchangeSvtCoinFolderControl_o *)v6, v7);
        }
        LODWORD(max_length) = svtCoinFolderList->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)max_length );
    }
  }
}


System_String_o *ExchangeSvtCoinMenu__MakeResultDialogMessage(
        ExchangeSvtCoinMenu_o *this,
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *BulkNameText; // x21
  Il2CppObject *v9; // x21
  Il2CppObject *NumberFormat; // x19
  System_String_o *v11; // x0

  if ( (byte_4CB119F & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    this = (ExchangeSvtCoinMenu_o *)sub_1C6BA08(&StringLiteral_5765/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/);
    byte_4CB119F = 1;
  }
  if ( !item )
    goto LABEL_8;
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(item, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ExchangeSvtCoinMenu_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0);
  if ( !entity )
LABEL_8:
    sub_1C6BC60(this, item);
  v9 = (Il2CppObject *)this;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * num, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/, 0);
  return System_String__Format_64008100(v11, v9, NumberFormat, 0);
}


void ExchangeSvtCoinMenu__OnAlertDecide(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopEntity_o *dragParentObject; // x22
  ExchangeSvtCoinConfirmDialog_o *confirmDialog; // x20
  int32_t buyCount; // w21
  System_Action_o *v7; // x23
  System_Action_o *v8; // x24
  const MethodInfo *v9; // x5

  if ( (byte_4CB119A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnConfirmCancel__);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnConfirmDecide__);
    byte_4CB119A = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_7;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetItem(
                                                             buyItemListViewManager,
                                                             this->fields.selectedItemIndex,
                                                             0);
  if ( !buyItemListViewManager
    || (dragParentObject = (ShopEntity_o *)buyItemListViewManager->fields.dragParentObject,
        confirmDialog = this->fields.confirmDialog,
        buyCount = this->fields.buyCount,
        v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmDecide__, 0),
        v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmCancel__, 0),
        !confirmDialog) )
  {
LABEL_7:
    sub_1C6BC60(buyItemListViewManager, method);
  }
  ExchangeSvtCoinConfirmDialog__Open(confirmDialog, buyCount, dragParentObject, v7, v8, v9);
}


void ExchangeSvtCoinMenu__OnClickFolder(ExchangeSvtCoinMenu_o *this, int32_t svtCoinType, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4CB1192 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnClickFolder__);
    sub_1C6BA08(&StringLiteral_13191/*"SvtCoinType"*/);
    sub_1C6BA08(&StringLiteral_3448/*"CLICK_EXCHANGE_SVT_COIN_LIST"*/);
    byte_4CB1192 = 1;
  }
  v5 = Method_ExchangeSvtCoinMenu_OnClickFolder__;
  if ( (*((_BYTE *)Method_ExchangeSvtCoinMenu_OnClickFolder__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_ExchangeSvtCoinMenu_OnClickFolder__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (myRoomFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(myRoomFsm, 0)) == 0
    || (myRoomFsm = (PlayMakerFSM_o *)myRoomFsm[1].fields.m_CancellationTokenSource) == 0
    || (myRoomFsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)myRoomFsm,
                                        (System_String_o *)StringLiteral_13191/*"SvtCoinType"*/,
                                        0)) == 0
    || (LODWORD(myRoomFsm->fields.addEventHandlers) = svtCoinType, (myRoomFsm = this->fields.myRoomFsm) == 0) )
  {
    sub_1C6BC60(myRoomFsm, v7);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3448/*"CLICK_EXCHANGE_SVT_COIN_LIST"*/, 0);
}


void ExchangeSvtCoinMenu__OnConfirmCancel(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x20
  System_Action_int__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  ShopBuyItemConfirmMenu_o *selectMenu; // x20
  System_Action_int__o *v8; // x21

  if ( (byte_4CB119B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnPreConfirm__);
    byte_4CB119B = 1;
  }
  if ( this->fields.isBulkSelect )
  {
    bulkSelectMenu = this->fields.bulkSelectMenu;
    v4 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
    System_Action_int____ctor(v4, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0);
    if ( bulkSelectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Modify(bulkSelectMenu, v4, 0);
      return;
    }
LABEL_8:
    sub_1C6BC60(v5, v6);
  }
  selectMenu = this->fields.selectMenu;
  v8 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
  System_Action_int____ctor(v8, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0);
  if ( !selectMenu )
    goto LABEL_8;
  ShopBuyItemConfirmMenu__SetInput(selectMenu, v8, 0);
}


void ExchangeSvtCoinMenu__OnConfirmDecide(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  ExchangeSvtCoinMenu__CloseSelectMenu(this, 0, v2);
  ExchangeSvtCoinMenu__RequestShop(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void ExchangeSvtCoinMenu__OnPreConfirm(ExchangeSvtCoinMenu_o *this, int32_t cnt, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  int32_t buyCount; // w20
  int32_t needCount; // w21
  ExchangeSvtCoinSliderAlertDialog_o *sliderAlertDialog; // x23
  ShopEntity_o *dragParentObject; // x22
  System_Action_o *v10; // x24
  System_Action_o *v11; // x25
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x1
  ExchangeSvtCoinConfirmDialog_o *confirmDialog; // x22
  ShopEntity_o *v15; // x21
  System_Action_o *v16; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x5

  if ( (byte_4CB1199 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnAlertDecide__);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnConfirmCancel__);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnConfirmDecide__);
    byte_4CB1199 = 1;
  }
  this->fields.buyCount = cnt;
  if ( cnt )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_13;
    buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetItem(
                                                               buyItemListViewManager,
                                                               this->fields.selectedItemIndex,
                                                               0);
    buyCount = this->fields.buyCount;
    needCount = this->fields.needCount;
    if ( buyCount > needCount )
    {
      if ( buyItemListViewManager )
      {
        sliderAlertDialog = this->fields.sliderAlertDialog;
        dragParentObject = (ShopEntity_o *)buyItemListViewManager->fields.dragParentObject;
        v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnAlertDecide__, 0);
        v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(v11, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmCancel__, 0);
        if ( sliderAlertDialog )
        {
          ExchangeSvtCoinSliderAlertDialog__Open(
            sliderAlertDialog,
            buyCount,
            needCount,
            dragParentObject,
            v10,
            v11,
            v12);
          return;
        }
      }
LABEL_13:
      sub_1C6BC60(buyItemListViewManager, *(_QWORD *)&cnt);
    }
    if ( !buyItemListViewManager )
      goto LABEL_13;
    confirmDialog = this->fields.confirmDialog;
    v15 = (ShopEntity_o *)buyItemListViewManager->fields.dragParentObject;
    v16 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmDecide__, 0);
    v17 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmCancel__, 0);
    if ( !confirmDialog )
      goto LABEL_13;
    ExchangeSvtCoinConfirmDialog__Open(confirmDialog, buyCount, v15, v16, v17, v18);
  }
  else
  {
    ExchangeSvtCoinMenu__CloseSelectMenu(this, 0, method);
    ExchangeSvtCoinMenu__RefreshInfo(this, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void ExchangeSvtCoinMenu__OnResultDecide(ExchangeSvtCoinMenu_o *this, bool isOk, const MethodInfo *method)
{
  RequestResultDialog_o *requestResultDialog; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *Master_object; // x21
  unsigned __int64 i; // x23
  struct UnityEngine_Material_o *mMaterial; // x8
  BalanceConfig_c *v9; // x8
  int64_t v10; // x22
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v12; // x20
  Il2CppObject *Instance; // x22
  System_String_o *Empty; // x21
  System_Action_o *v15; // x23

  if ( (byte_4CB119C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu__OnResultDecide_b__42_0__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_5745/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/);
    byte_4CB119C = 1;
  }
  requestResultDialog = this->fields.requestResultDialog;
  if ( !requestResultDialog )
    goto LABEL_29;
  RequestResultDialog__Close(requestResultDialog, 0);
  ExchangeSvtCoinMenu__RefreshInfo(this, v5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0; ; ++i )
  {
    requestResultDialog = (RequestResultDialog_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      requestResultDialog = (RequestResultDialog_o *)BalanceConfig_TypeInfo;
    }
    mMaterial = requestResultDialog->fields.numMessage2Label->fields.mMaterial;
    if ( !mMaterial )
      goto LABEL_29;
    if ( (__int64)i >= SLODWORD(mMaterial[1].klass) )
      break;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    requestResultDialog = (RequestResultDialog_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      requestResultDialog = (RequestResultDialog_o *)NetworkManager_TypeInfo;
    }
    v9 = BalanceConfig_TypeInfo;
    v10 = *(_QWORD *)&requestResultDialog->fields.numMessage2Label->fields.updateAnchors;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v9->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_29;
    if ( i >= LODWORD(ExchangeSvtCoinItemIds->max_length) )
      sub_1C6BC68(requestResultDialog);
    if ( !Master_object )
      goto LABEL_29;
    requestResultDialog = (RequestResultDialog_o *)UserItemMaster__GetEntityDefinitely(
                                                     (UserItemMaster_o *)Master_object,
                                                     v10,
                                                     ExchangeSvtCoinItemIds->m_Items[i],
                                                     0);
    if ( !requestResultDialog )
      goto LABEL_29;
    if ( SHIDWORD(requestResultDialog->fields.m_CancellationTokenSource) > 0 )
      return;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5745/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  Empty = string_TypeInfo->static_fields->Empty;
  v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__OnResultDecide_b__42_0__, 0);
  if ( !Instance )
LABEL_29:
    sub_1C6BC60(requestResultDialog, isOk);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, Empty, v12, v15, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2.0, 0, 0);
}


void ExchangeSvtCoinMenu__OnSelectBuyItem(ExchangeSvtCoinMenu_o *this, int32_t selectItemNum, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x19

  if ( (byte_4CB1197 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnSelectBuyItem__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_UserPresentListRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu___c__DisplayClass36_0__OnSelectBuyItem_b__0__);
    sub_1C6BA08(&ExchangeSvtCoinMenu___c__DisplayClass36_0_TypeInfo);
    byte_4CB1197 = 1;
  }
  v5 = sub_1C6BC54(ExchangeSvtCoinMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC(v5 + 16, this);
  *(_DWORD *)(v5 + 24) = selectItemNum;
  v8 = Method_ExchangeSvtCoinMenu_OnSelectBuyItem__;
  if ( (*((_BYTE *)Method_ExchangeSvtCoinMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C6BA20(Method_ExchangeSvtCoinMenu_OnSelectBuyItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ExchangeSvtCoinMenu___c__DisplayClass36_0__OnSelectBuyItem_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
LABEL_10:
    sub_1C6BC60(Request_object, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void ExchangeSvtCoinMenu__Open(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4CB1191 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu__Open_b__30_0__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5749/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/);
    sub_1C6BA08(&StringLiteral_5750/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/);
    byte_4CB1191 = 1;
  }
  filterButton = this->fields.filterButton;
  if ( !filterButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(filterButton, 0, 0);
  filterButton = (UnityEngine_GameObject_o *)this->fields.buyItemListViewManager;
  if ( !filterButton )
    goto LABEL_27;
  filterButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)filterButton, 0);
  if ( !filterButton )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(filterButton, 0, 0);
  ExchangeSvtCoinMenu__CreateFolderList(this, v4);
  currencyTitleLabel = (UnityEngine_Object_o *)this->fields.currencyTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currencyTitleLabel, 0, 0) )
  {
    currencyTitleLabel2 = (UnityEngine_Object_o *)this->fields.currencyTitleLabel2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currencyTitleLabel2, 0, 0) )
    {
      v8 = this->fields.currencyTitleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5750/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/, 0);
      if ( !v8 )
        goto LABEL_27;
      UILabel__set_text(v8, (System_String_o *)filterButton, 0);
      v9 = this->fields.currencyTitleLabel2;
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/, 0);
      if ( !v9 )
        goto LABEL_27;
      UILabel__set_text(v9, (System_String_o *)filterButton, 0);
    }
  }
  ExchangeSvtCoinMenu__SetCurrencyInfo(this, v6);
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__Open_b__30_0__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v10, 0);
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
  {
    filterButton = this->fields.baseWindow;
    if ( !filterButton )
      goto LABEL_27;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         filterButton,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    filterButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)filterButton & 1) != 0 )
    {
      if ( Component_object )
      {
        LODWORD(Component_object[3].monitor) = 1045220557;
        LODWORD(Component_object[2].klass) = 2;
        return;
      }
LABEL_27:
      sub_1C6BC60(filterButton, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ExchangeSvtCoinMenu__OpenFolder(ExchangeSvtCoinMenu_o *this, int32_t svtCoinType, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21

  if ( (byte_4CB1193 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu__OpenFolder_b__32_0__);
    byte_4CB1193 = 1;
  }
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_9;
  buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buyItemListViewManager, 0);
  if ( !buyItemListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 1, 0);
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (ShopBuyItemListViewManager__CreateExchangeSvtCoinList(
          (ShopBuyItemListViewManager_o *)buyItemListViewManager,
          svtCoinType,
          0),
        (buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager) == 0)
    || (ShopBuyItemListViewManager__FocusTopItem((ShopBuyItemListViewManager_o *)buyItemListViewManager, 0, 0),
        v6 = this->fields.buyItemListViewManager,
        v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__OpenFolder_b__32_0__, 0),
        !v6) )
  {
LABEL_9:
    sub_1C6BC60(buyItemListViewManager, *(_QWORD *)&svtCoinType);
  }
  ShopBuyItemListViewManager__SetMode_35424144(v6, 1, v7, 0.1, 0);
}


void ExchangeSvtCoinMenu__OpenRequestResultDialog(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  const MethodInfo *v4; // x4
  ShopEntity_o *dragParentObject; // x21
  System_String_o *ResultDialogMessage; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x22
  Il2CppObject *Entity; // x23
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  System_String_o *v10; // x21
  RequestResultDialog_o *requestResultDialog; // x23
  System_Action_bool__o *v12; // x24

  if ( (byte_4CB11A0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnResultDecide__);
    byte_4CB11A0 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_13;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetItem(
                                                             buyItemListViewManager,
                                                             this->fields.selectedItemIndex,
                                                             0);
  if ( !buyItemListViewManager )
    goto LABEL_13;
  dragParentObject = (ShopEntity_o *)buyItemListViewManager->fields.dragParentObject;
  ResultDialogMessage = ExchangeSvtCoinMenu__MakeResultDialogMessage(
                          (ExchangeSvtCoinMenu_o *)buyItemListViewManager,
                          (ShopBuyItemListViewItem_o *)buyItemListViewManager,
                          dragParentObject,
                          this->fields.buyCount,
                          v4);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !dragParentObject )
    goto LABEL_13;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)buyItemListViewManager;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopEntity__get_TargetId(dragParentObject, 0);
  if ( !v7 )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v7,
             (int32_t)buyItemListViewManager,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           dragParentObject,
                                           (ItemEntity_o *)Entity,
                                           this->fields.buyCount,
                                           0);
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                                             dragParentObject,
                                                             (ItemEntity_o *)Entity,
                                                             0);
  if ( !this->fields.requestResultDialog
    || (v10 = (System_String_o *)buyItemListViewManager,
        (buyItemListViewManager = (ShopBuyItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this->fields.requestResultDialog,
                                                                    0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 1, 0),
        requestResultDialog = this->fields.requestResultDialog,
        v12 = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v12, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnResultDecide__, 0),
        !requestResultDialog) )
  {
LABEL_13:
    sub_1C6BC60(buyItemListViewManager, method);
  }
  RequestResultDialog__Open(requestResultDialog, ResultDialogMessage, v10, RequestResultDialogItemMessageNormal, v12, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExchangeSvtCoinMenu__OpenSelectMenu(ExchangeSvtCoinMenu_o *this, int32_t selectItemNum, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *v6; // x20
  int32_t TargetId; // w0
  const MethodInfo *v8; // x1
  int v9; // w0
  Il2CppObject *v10; // x0
  System_String_o *v11; // x8
  Il2CppObject *v12; // x21
  System_String_o *v13; // x0
  ExchangeSvtCoinMenu_o *v14; // x21
  const MethodInfo *v15; // x2
  bool IsBulk; // w0
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x21
  ShopEntity_o *Shop_k__BackingField; // x22
  System_Action_int__o *v19; // x23
  ShopBuyItemConfirmMenu_o *selectMenu; // x21
  ShopEntity_o *v21; // x22
  int32_t ShopKind_k__BackingField; // w20
  System_Action_int__o *v23; // x23
  int v24; // [xsp+8h] [xbp-38h] BYREF
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB1198 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnPreConfirm__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_25211/*"{0}"*/);
    sub_1C6BA08(&StringLiteral_15920/*"[FFFF00]{0}"*/);
    sub_1C6BA08(&StringLiteral_5764/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/);
    byte_4CB1198 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetItem(
                                                             buyItemListViewManager,
                                                             selectItemNum,
                                                             0);
  this->fields.selectedItemIndex = selectItemNum;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  v6 = (ShopBuyItemListViewItem_o *)buyItemListViewManager;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)buyItemListViewManager->fields.dragParentObject;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  TargetId = ShopEntity__get_TargetId((ShopEntity_o *)buyItemListViewManager, 0);
  v9 = ExchangeSvtCoinNeedCountCalculator__Calculate(TargetId, v8);
  this->fields.needCount = v9;
  if ( v9 <= 0 )
  {
    v25 = v9;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    v11 = (System_String_o *)StringLiteral_15920/*"[FFFF00]{0}"*/;
  }
  else
  {
    v24 = v9;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v11 = (System_String_o *)StringLiteral_25211/*"{0}"*/;
  }
  v12 = (Il2CppObject *)System_String__Format(v11, v10, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/, 0);
  v14 = (ExchangeSvtCoinMenu_o *)System_String__Format(v13, v12, 0);
  IsBulk = ExchangeSvtCoinMenu__GetIsBulk(v14, v6, v15);
  this->fields.isBulkSelect = IsBulk;
  if ( IsBulk )
  {
    buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.bulkSelectMenuNoticeLabel;
    if ( buyItemListViewManager )
    {
      UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v14, 0);
      bulkSelectMenu = this->fields.bulkSelectMenu;
      Shop_k__BackingField = v6->fields._Shop_k__BackingField;
      v19 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
      System_Action_int____ctor(v19, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0);
      if ( bulkSelectMenu )
      {
        ShopBuyBulkItemConfirmMenu__Open(bulkSelectMenu, Shop_k__BackingField, v6, v19, 0, 0);
        return;
      }
    }
LABEL_19:
    sub_1C6BC60(buyItemListViewManager, *(_QWORD *)&selectItemNum);
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.selectMenuNoticeLabel;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v14, 0);
  selectMenu = this->fields.selectMenu;
  v21 = v6->fields._Shop_k__BackingField;
  ShopKind_k__BackingField = v6->fields._ShopKind_k__BackingField;
  v23 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
  System_Action_int____ctor(v23, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0);
  if ( !selectMenu )
    goto LABEL_19;
  ShopBuyItemConfirmMenu__Open(selectMenu, v21, ShopKind_k__BackingField, v23, 0, 0, 0, 0, 0);
}


void ExchangeSvtCoinMenu__RefreshInfo(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  void *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v4; // x20
  System_Action_int__o *v5; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4CB1196 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnSelectBuyItem__);
    byte_4CB1196 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (buyItemListViewManager = ShopBuyItemListViewManager__GetItem(
                                   (ShopBuyItemListViewManager_o *)buyItemListViewManager,
                                   this->fields.selectedItemIndex,
                                   0)) == 0
    || (ShopBuyItemListViewItem__Modify(
          (ShopBuyItemListViewItem_o *)buyItemListViewManager,
          *((ShopEntity_o **)buyItemListViewManager + 15),
          0),
        (buyItemListViewManager = this->fields.buyItemListViewManager) == 0)
    || (ShopBuyItemListViewManager__SetMode_35422864((ShopBuyItemListViewManager_o *)buyItemListViewManager, 5, 0),
        v4 = this->fields.buyItemListViewManager,
        v5 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo),
        System_Action_int____ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ExchangeSvtCoinMenu_OnSelectBuyItem__, 0),
        !v4) )
  {
    sub_1C6BC60(buyItemListViewManager, method);
  }
  ShopBuyItemListViewManager__SetMode(v4, 2, v5, 0);
  ExchangeSvtCoinMenu__SetCurrencyInfo(this, v6);
}


void ExchangeSvtCoinMenu__RequestShop(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v5; // x1
  ShopBuyItemListViewItem_o *v6; // x20
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_4CB11A1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_EndRequestShop__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB11A1 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_12;
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0);
  if ( Item )
  {
    v6 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_EndRequestShop__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      buyItemListViewManager = (ShopBuyItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v7,
                                                                 (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v6->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField && buyItemListViewManager )
      {
        PurchaseRequest__beginRequest(
          (PurchaseRequest_o *)buyItemListViewManager,
          Shop_k__BackingField->fields.id,
          this->fields.buyCount,
          0,
          0,
          0);
        return;
      }
LABEL_12:
      sub_1C6BC60(buyItemListViewManager, method);
    }
  }
  ExchangeSvtCoinMenu__RefreshInfo(this, v5);
}


void ExchangeSvtCoinMenu__SetCurrencyInfo(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  __int64 v4; // x1
  Il2CppObject *v5; // x22
  unsigned int i; // w28
  void *EntityDefinitely; // x0
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  struct ExchangeSvtCoinMenu_CurrencyInfo_array *currencyInfoList; // x9
  unsigned int max_length; // w10
  struct ExchangeSvtCoinMenu_CurrencyInfo_array *v11; // x9
  int32_t v12; // w23
  ExchangeSvtCoinMenu_CurrencyInfo_o *v13; // x29
  UISprite_o *currencySprite; // x24
  int32_t monitor; // w25
  UILabel_o *currencyLabel; // x23
  int32_t v17; // w24
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB119D & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB119D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
  v5 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0; ; ++i )
  {
    EntityDefinitely = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = *(struct System_Int32_array **)(*((_QWORD *)EntityDefinitely + 23) + 480LL);
    if ( !ExchangeSvtCoinItemIds )
LABEL_39:
      sub_1C6BC60(EntityDefinitely, v4);
    if ( (signed int)i >= SLODWORD(ExchangeSvtCoinItemIds->max_length) )
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
      ExchangeSvtCoinItemIds = BalanceConfig_TypeInfo->static_fields->ExchangeSvtCoinItemIds;
      if ( !ExchangeSvtCoinItemIds )
        goto LABEL_39;
    }
    if ( i >= LODWORD(ExchangeSvtCoinItemIds->max_length) )
      goto LABEL_40;
    v11 = this->fields.currencyInfoList;
    if ( !v11 )
      goto LABEL_39;
    if ( i >= LODWORD(v11->max_length) )
LABEL_40:
      sub_1C6BC68(EntityDefinitely);
    if ( !Master_object )
      goto LABEL_39;
    v12 = ExchangeSvtCoinItemIds->m_Items[i];
    v13 = v11->m_Items[i];
    EntityDefinitely = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 &entity,
                                 v12,
                                 (const MethodInfo_33F9128 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
    {
      if ( !v13 || !entity )
        goto LABEL_39;
      currencySprite = v13->fields.currencySprite;
      monitor = (int32_t)entity[2].monitor;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(currencySprite, monitor, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
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
                           0);
      if ( !EntityDefinitely )
        goto LABEL_39;
      currencyLabel = v13->fields.currencyLabel;
      v17 = *((_DWORD *)EntityDefinitely + 7);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      EntityDefinitely = LocalizationManager__GetNumberFormat(v17, 0);
      if ( !currencyLabel )
        goto LABEL_39;
      UILabel__set_text(currencyLabel, (System_String_o *)EntityDefinitely, 0);
    }
  }
}


void ExchangeSvtCoinMenu__SetDispCurrencyInfo(ExchangeSvtCoinMenu_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *currencyInfoPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CB1195 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1195 = 1;
  }
  currencyInfoPanel = (UnityEngine_Object_o *)this->fields.currencyInfoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currencyInfoPanel, 0, 0) )
  {
    v7 = this->fields.currencyInfoPanel;
    if ( !v7 )
      sub_1C6BC60(0, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0);
  }
}


void ExchangeSvtCoinMenu___CloseFolder_b__33_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0

  if ( (byte_4CB11A7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6972/*"GO_NEXT"*/);
    byte_4CB11A7 = 1;
  }
  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              buyItemListViewManager,
                                                              0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 0, 0),
        (buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager) == 0)
    || (ListViewManager__DestroyList((ListViewManager_o *)buyItemListViewManager, 0),
        (buyItemListViewManager = (UnityEngine_Component_o *)this->fields.myRoomFsm) == 0) )
  {
    sub_1C6BC60(buyItemListViewManager, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)buyItemListViewManager, (System_String_o *)StringLiteral_6972/*"GO_NEXT"*/, 0);
}


void ExchangeSvtCoinMenu___OnResultDecide_b__42_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4CB11A8 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4974/*"DESTROY_EXCHANGE_SVT_COIN"*/);
    byte_4CB11A8 = 1;
  }
  ExchangeSvtCoinMenu__SetDispCurrencyInfo(this, 0, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C6BC60(0, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_4974/*"DESTROY_EXCHANGE_SVT_COIN"*/, 0);
}


void ExchangeSvtCoinMenu___OpenFolder_b__32_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  MyRoomControl_o *myRoomCtrl; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_4CB11A6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__TypeInfo);
    sub_1C6BA08(&Method_ExchangeSvtCoinMenu_OnSelectBuyItem__);
    sub_1C6BA08(&StringLiteral_13191/*"SvtCoinType"*/);
    byte_4CB11A6 = 1;
  }
  myRoomCtrl = this->fields.myRoomCtrl;
  if ( !myRoomCtrl )
    goto LABEL_11;
  MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0);
  myRoomCtrl = (MyRoomControl_o *)this->fields.filterButton;
  if ( !myRoomCtrl )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomCtrl, 1, 0);
  buyItemListViewManager = this->fields.buyItemListViewManager;
  v5 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
  System_Action_int____ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ExchangeSvtCoinMenu_OnSelectBuyItem__, 0);
  if ( !buyItemListViewManager
    || (ShopBuyItemListViewManager__SetMode(buyItemListViewManager, 2, v5, 0),
        (myRoomCtrl = (MyRoomControl_o *)this->fields.myRoomFsm) == 0)
    || (myRoomCtrl = (MyRoomControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)myRoomCtrl, 0)) == 0
    || (myRoomCtrl = (MyRoomControl_o *)myRoomCtrl->fields.optionComp) == 0
    || (myRoomCtrl = (MyRoomControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                          (HutongGames_PlayMaker_FsmVariables_o *)myRoomCtrl,
                                          (System_String_o *)StringLiteral_13191/*"SvtCoinType"*/,
                                          0)) == 0 )
  {
LABEL_11:
    sub_1C6BC60(myRoomCtrl, method);
  }
  LODWORD(myRoomCtrl->fields.myRoomListCtr) = 0;
}


void ExchangeSvtCoinMenu___Open_b__30_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  MyRoomControl_o *myRoomCtrl; // x0

  myRoomCtrl = this->fields.myRoomCtrl;
  if ( !myRoomCtrl )
    sub_1C6BC60(0, method);
  MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0);
}


bool ExchangeSvtCoinMenu__get_IsActiveSvtCoinList(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0

  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              buyItemListViewManager,
                                                              0)) == 0 )
  {
    sub_1C6BC60(buyItemListViewManager, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)buyItemListViewManager, 0);
}


void ExchangeSvtCoinMenu_CurrencyInfo___ctor(ExchangeSvtCoinMenu_CurrencyInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExchangeSvtCoinMenu___c__DisplayClass36_0___ctor(
        ExchangeSvtCoinMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExchangeSvtCoinMenu___c__DisplayClass36_0___OnSelectBuyItem_b__0(
        ExchangeSvtCoinMenu___c__DisplayClass36_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1C6BC60(this, _);
  ExchangeSvtCoinMenu__OpenSelectMenu(this->fields.__4__this, this->fields.selectItemNum, method);
}