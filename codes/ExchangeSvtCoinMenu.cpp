void ExchangeSvtCoinMenu___ctor(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseMenu_c *v4; // x0

  if ( (byte_596B475 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596B475 = 1;
  }
  v4 = BaseMenu_TypeInfo;
  this->fields.buyCount = 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
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

  if ( (byte_596B464 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu__CloseFolder_b__33_0__);
    byte_596B464 = 1;
  }
  filterButton = this->fields.filterButton;
  if ( !filterButton
    || (UnityEngine_GameObject__SetActive(filterButton, 0, 0),
        ExchangeSvtCoinMenu__CreateFolderList(this, v4),
        buyItemListViewManager = this->fields.buyItemListViewManager,
        v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__CloseFolder_b__33_0__, 0),
        !buyItemListViewManager) )
  {
    sub_2213CDC(filterButton, method);
  }
  ShopBuyItemListViewManager__SetMode_41958800(buyItemListViewManager, 4, v6, 0.1, 0);
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
    ShopBuyItemConfirmMenu__Close_41910940(selectMenu, callback, 0);
  }
  selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
  if ( !selectMenu )
LABEL_10:
    sub_2213CDC(selectMenu, callback);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)selectMenu, 0) )
  {
    selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
    if ( selectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Close_52334680((ShopBuyBulkItemConfirmMenu_o *)selectMenu, callback, 0);
      goto LABEL_9;
    }
    goto LABEL_10;
  }
LABEL_9:
  this->fields.isBulkSelect = 0;
}


void ExchangeSvtCoinMenu__CreateFolderList(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  UIProgressBar_o *EntityDefinitely; // x0
  intptr_t m_CachedPtr; // x24
  __int64 v10; // x8
  int v11; // w25
  unsigned __int64 v12; // x26
  struct ExchangeSvtCoinFolderControl_array *svtCoinFolderList; // x8
  int max_length; // w9
  int32_t v15; // w22
  UnityEngine_Object_o *v16; // x23
  struct ExchangeSvtCoinFolderControl_array *v17; // x8
  ExchangeSvtCoinFolderControl_o *v18; // x22
  System_Action_int__o *v19; // x23
  const MethodInfo *v20; // x3
  float v21; // s8
  struct ExchangeSvtCoinFolderControl_array *v22; // x21
  il2cpp_array_size_t v23; // x8
  unsigned __int64 v24; // x22
  UnityEngine_Object_o *v25; // x20

  if ( (byte_596B474 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnClickFolder__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B474 = 1;
  }
  if ( this->fields.svtCoinFolderList )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
    ExchangeSvtCoinMenu__InitFolderList(this, v5);
    EntityDefinitely = (UIProgressBar_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v7);
      EntityDefinitely = (UIProgressBar_o *)BalanceConfig_TypeInfo;
    }
    m_CachedPtr = EntityDefinitely[1].fields.mTrans[19].fields.m_CachedPtr;
    if ( !m_CachedPtr )
      goto LABEL_48;
    v10 = *(_QWORD *)(m_CachedPtr + 24);
    if ( (int)v10 < 1 )
    {
      v21 = -0.0;
    }
    else
    {
      v11 = 0;
      v12 = 0;
      do
      {
        if ( v12 >= (unsigned int)v10 )
          goto LABEL_47;
        svtCoinFolderList = this->fields.svtCoinFolderList;
        if ( !svtCoinFolderList )
          goto LABEL_48;
        max_length = svtCoinFolderList->max_length;
        if ( v11 < max_length )
        {
          if ( v11 >= (unsigned int)max_length )
            goto LABEL_47;
          v15 = *(_DWORD *)(m_CachedPtr + 32 + 4 * v12);
          v16 = (UnityEngine_Object_o *)svtCoinFolderList->m_Items[v11];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
          EntityDefinitely = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
          if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            EntityDefinitely = (UIProgressBar_o *)NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
              EntityDefinitely = (UIProgressBar_o *)NetworkManager_TypeInfo;
            }
            if ( !Master_object )
              goto LABEL_48;
            EntityDefinitely = (UIProgressBar_o *)UserItemMaster__GetEntityDefinitely(
                                                    (UserItemMaster_o *)Master_object,
                                                    EntityDefinitely[1].fields.mTrans[2].fields.m_CachedPtr,
                                                    v15,
                                                    0);
            if ( !EntityDefinitely )
              goto LABEL_48;
            if ( SHIDWORD(EntityDefinitely->fields.m_CancellationTokenSource) >= 1 )
            {
              v17 = this->fields.svtCoinFolderList;
              if ( !v17 )
                goto LABEL_48;
              if ( (unsigned int)v11 >= LODWORD(v17->max_length) )
                goto LABEL_47;
              v18 = v17->m_Items[v11];
              v19 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v19,
                (Il2CppObject *)this,
                (intptr_t)Method_ExchangeSvtCoinMenu_OnClickFolder__,
                0);
              if ( !v18 )
                goto LABEL_48;
              ExchangeSvtCoinFolderControl__SetFolder(v18, v12 + 1, v19, v20);
              ++v11;
            }
          }
        }
        LODWORD(v10) = *(_DWORD *)(m_CachedPtr + 24);
        ++v12;
      }
      while ( (__int64)v12 < (int)v10 );
      v21 = (float)v11 * -120.0;
    }
    v22 = this->fields.svtCoinFolderList;
    if ( !v22 )
      goto LABEL_48;
    v23 = v22->max_length;
    if ( (int)v23 >= 1 )
    {
      v24 = 0;
      while ( v24 < (unsigned int)v23 )
      {
        v25 = (UnityEngine_Object_o *)v22->m_Items[v24];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
        EntityDefinitely = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v25, 0, 0);
        if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_48;
          ExchangeSvtCoinFolderControl__SetActive((ExchangeSvtCoinFolderControl_o *)v25, v6);
        }
        LODWORD(v23) = v22->max_length;
        if ( (__int64)++v24 >= (int)v23 )
          goto LABEL_45;
      }
LABEL_47:
      sub_2213CE4(EntityDefinitely);
    }
LABEL_45:
    GameObjectExtensions__SetLocalPositionY(this->fields.dummyFolderObject, v21, 0);
    EntityDefinitely = (UIProgressBar_o *)this->fields.svtCoinFolderListScrollBar;
    if ( !EntityDefinitely )
LABEL_48:
      sub_2213CDC(EntityDefinitely, v6);
    UIProgressBar__set_value(EntityDefinitely, 0.0, 0);
  }
}


void ExchangeSvtCoinMenu__EndRequestShop(
        ExchangeSvtCoinMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_596B472 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596B472 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
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
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t limitNum; // w8
  char v8; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v13; // x0
  int64_t userIdNumber; // x21
  int m_CancellationTokenSource_high; // w20

  if ( (byte_596B46E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    this = (ExchangeSvtCoinMenu_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B46E = 1;
  }
  if ( !item )
    goto LABEL_24;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_24;
  if ( ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0) || !ShopEntity__IsEnable(Shop_k__BackingField, 0, 0) )
    return 0;
  limitNum = Shop_k__BackingField->fields.limitNum;
  if ( limitNum )
    v8 = limitNum - item->fields._TotalNum_k__BackingField > 1;
  else
    v8 = 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
    v13 = NetworkManager_TypeInfo;
  }
  userIdNumber = v13->static_fields->userIdNumber;
  this = (ExchangeSvtCoinMenu_o *)ShopEntity__GetItemID(Shop_k__BackingField, 0);
  if ( !Master_object
    || (this = (ExchangeSvtCoinMenu_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)Master_object,
                                          userIdNumber,
                                          (int32_t)this,
                                          0)) == 0 )
  {
LABEL_24:
    sub_2213CDC(this, item);
  }
  m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
  if ( m_CancellationTokenSource_high >= 2 * ShopEntity__GetPrice(Shop_k__BackingField, 0) )
    return v8;
  else
    return 0;
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
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
    sub_2213CDC(svtCoinFolderListScrollBar, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtCoinFolderListScrollBar, 0, 0);
  ExchangeSvtCoinMenu__InitFolderList(this, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void ExchangeSvtCoinMenu__InitFolderList(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ExchangeSvtCoinMenu_o *v3; // x19
  struct ExchangeSvtCoinFolderControl_array *svtCoinFolderList; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19

  v3 = this;
  if ( (byte_596B473 & 1) == 0 )
  {
    this = (ExchangeSvtCoinMenu_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B473 = 1;
  }
  svtCoinFolderList = v3->fields.svtCoinFolderList;
  if ( svtCoinFolderList )
  {
    max_length = svtCoinFolderList->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_2213CE4(this);
        v7 = (UnityEngine_Object_o *)svtCoinFolderList->m_Items[v6];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        this = (ExchangeSvtCoinMenu_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v7 )
            sub_2213CDC(this, method);
          ExchangeSvtCoinFolderControl__InitFolder((ExchangeSvtCoinFolderControl_o *)v7, method);
        }
        LODWORD(max_length) = svtCoinFolderList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *BulkNameText; // x21
  Il2CppObject *v11; // x21
  Il2CppObject *NumberFormat; // x19
  System_String_o *v13; // x0

  if ( (byte_596B46F & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ExchangeSvtCoinMenu_o *)sub_2213A60(&StringLiteral_6006/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/);
    byte_596B46F = 1;
  }
  if ( !item )
    goto LABEL_8;
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(item, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  this = (ExchangeSvtCoinMenu_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0);
  if ( !entity )
LABEL_8:
    sub_2213CDC(this, item);
  v11 = (Il2CppObject *)this;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * num, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_6006/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/, 0);
  return System_String__Format_75697880(v13, v11, NumberFormat, 0);
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

  if ( (byte_596B46A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnConfirmCancel__);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnConfirmDecide__);
    byte_596B46A = 1;
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
        v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmDecide__, 0),
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmCancel__, 0),
        !confirmDialog) )
  {
LABEL_7:
    sub_2213CDC(buyItemListViewManager, method);
  }
  ExchangeSvtCoinConfirmDialog__Open(confirmDialog, buyCount, dragParentObject, v7, v8, v9);
}


void ExchangeSvtCoinMenu__OnClickFolder(ExchangeSvtCoinMenu_o *this, int32_t svtCoinType, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  PlayMakerFSM_o *v9; // x8

  if ( (byte_596B462 & 1) == 0 )
  {
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnClickFolder__);
    sub_2213A60(&StringLiteral_13744/*"SvtCoinType"*/);
    sub_2213A60(&StringLiteral_3596/*"CLICK_EXCHANGE_SVT_COIN_LIST"*/);
    byte_596B462 = 1;
  }
  v5 = Method_ExchangeSvtCoinMenu_OnClickFolder__;
  if ( (*((_BYTE *)Method_ExchangeSvtCoinMenu_OnClickFolder__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_ExchangeSvtCoinMenu_OnClickFolder__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (myRoomFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(myRoomFsm, 0)) == 0
    || (myRoomFsm = (PlayMakerFSM_o *)myRoomFsm[1].fields.m_CancellationTokenSource) == 0
    || (myRoomFsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)myRoomFsm,
                                        (System_String_o *)StringLiteral_13744/*"SvtCoinType"*/,
                                        0)) == 0
    || (v9 = myRoomFsm,
        myRoomFsm = this->fields.myRoomFsm,
        LODWORD(v9->fields.addEventHandlers) = svtCoinType,
        !myRoomFsm) )
  {
    sub_2213CDC(myRoomFsm, v7);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3596/*"CLICK_EXCHANGE_SVT_COIN_LIST"*/, 0);
}


void ExchangeSvtCoinMenu__OnConfirmCancel(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x20
  System_Action_int__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  ShopBuyItemConfirmMenu_o *selectMenu; // x20
  System_Action_int__o *v8; // x21

  if ( (byte_596B46B & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnPreConfirm__);
    byte_596B46B = 1;
  }
  if ( this->fields.isBulkSelect )
  {
    bulkSelectMenu = this->fields.bulkSelectMenu;
    v4 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v4, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0);
    if ( bulkSelectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Modify(bulkSelectMenu, v4, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(v5, v6);
  }
  selectMenu = this->fields.selectMenu;
  v8 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
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
  ShopEntity_o *dragParentObject; // x22
  ExchangeSvtCoinSliderAlertDialog_o *sliderAlertDialog; // x23
  System_Action_o *v10; // x24
  System_Action_o *v11; // x25
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x1
  ShopEntity_o *v14; // x21
  ExchangeSvtCoinConfirmDialog_o *confirmDialog; // x22
  System_Action_o *v16; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x5

  if ( (byte_596B469 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnAlertDecide__);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnConfirmCancel__);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnConfirmDecide__);
    byte_596B469 = 1;
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
        dragParentObject = (ShopEntity_o *)buyItemListViewManager->fields.dragParentObject;
        sliderAlertDialog = this->fields.sliderAlertDialog;
        v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnAlertDecide__, 0);
        v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
      sub_2213CDC(buyItemListViewManager, *(_QWORD *)&cnt);
    }
    if ( !buyItemListViewManager )
      goto LABEL_13;
    v14 = (ShopEntity_o *)buyItemListViewManager->fields.dragParentObject;
    confirmDialog = this->fields.confirmDialog;
    v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmDecide__, 0);
    v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmCancel__, 0);
    if ( !confirmDialog )
      goto LABEL_13;
    ExchangeSvtCoinConfirmDialog__Open(confirmDialog, buyCount, v14, v16, v17, v18);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x2
  Il2CppObject *Master_object; // x21
  unsigned __int64 i; // x29
  __int64 v11; // x8
  BalanceConfig_c *v12; // x8
  int64_t v13; // x22
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v15; // x20
  Il2CppObject *Instance; // x22
  System_String_o *v17; // x21
  System_Action_o *v18; // x23

  if ( (byte_596B46C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu__OnResultDecide_b__42_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_5986/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/);
    byte_596B46C = 1;
  }
  requestResultDialog = this->fields.requestResultDialog;
  if ( !requestResultDialog )
    goto LABEL_29;
  RequestResultDialog__Close(requestResultDialog, 0);
  ExchangeSvtCoinMenu__RefreshInfo(this, v5);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0; ; ++i )
  {
    requestResultDialog = (RequestResultDialog_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isOk, v8);
      requestResultDialog = (RequestResultDialog_o *)BalanceConfig_TypeInfo;
    }
    v11 = *(_QWORD *)&requestResultDialog->fields.numMessage2Label->fields.mEffectDistance.fields.y;
    if ( !v11 )
      goto LABEL_29;
    if ( (__int64)i >= *(int *)(v11 + 24) )
      break;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isOk, v8);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    requestResultDialog = (RequestResultDialog_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isOk, v8);
      requestResultDialog = (RequestResultDialog_o *)NetworkManager_TypeInfo;
    }
    v12 = BalanceConfig_TypeInfo;
    v13 = *(_QWORD *)&requestResultDialog->fields.numMessage2Label->fields.updateAnchors;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isOk, v8);
      v12 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v12->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_29;
    if ( i >= LODWORD(ExchangeSvtCoinItemIds->max_length) )
      sub_2213CE4(requestResultDialog);
    if ( !Master_object )
      goto LABEL_29;
    requestResultDialog = (RequestResultDialog_o *)UserItemMaster__GetEntityDefinitely(
                                                     (UserItemMaster_o *)Master_object,
                                                     v13,
                                                     ExchangeSvtCoinItemIds->m_Items[i],
                                                     0);
    if ( !requestResultDialog )
      goto LABEL_29;
    if ( SHIDWORD(requestResultDialog->fields.m_CancellationTokenSource) > 0 )
      return;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isOk, v8);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5986/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = **(System_String_o ***)(qword_5984390 + 184);
  v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__OnResultDecide_b__42_0__, 0);
  if ( !Instance )
LABEL_29:
    sub_2213CDC(requestResultDialog, isOk);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v17, v15, v18, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2.0, 0, 0);
}


void ExchangeSvtCoinMenu__OnSelectBuyItem(ExchangeSvtCoinMenu_o *this, int32_t selectItemNum, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  _BYTE *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  NetworkManager_ResultCallbackFunc_o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2

  if ( (byte_596B467 & 1) == 0 )
  {
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnSelectBuyItem__);
    sub_2213A60(&Method_NetworkManager_getRequest_UserPresentListRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu___c__DisplayClass36_0__OnSelectBuyItem_b__0__);
    sub_2213A60(&ExchangeSvtCoinMenu___c__DisplayClass36_0_TypeInfo);
    byte_596B467 = 1;
  }
  v5 = sub_2213CCC(ExchangeSvtCoinMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = Method_ExchangeSvtCoinMenu_OnSelectBuyItem__;
  *(_DWORD *)(v5 + 24) = selectItemNum;
  if ( (v14[83] & 2) != 0 )
    v14 = (_BYTE *)sub_2213A78(v14);
  v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, *((_QWORD *)v14 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_ExchangeSvtCoinMenu___c__DisplayClass36_0__OnSelectBuyItem_b__0__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v18);
  Request_object = NetworkManager__getRequest_object_(
                     v16,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
LABEL_10:
    sub_2213CDC(Request_object, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void ExchangeSvtCoinMenu__Open(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *filterButton; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *currencyTitleLabel; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *currencyTitleLabel2; // x20
  __int64 v11; // x2
  UILabel_o *v12; // x20
  UILabel_o *v13; // x20
  System_Action_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *baseWindow; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Component_object; // x19

  if ( (byte_596B461 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu__Open_b__30_0__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5990/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/);
    sub_2213A60(&StringLiteral_5991/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/);
    byte_596B461 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(currencyTitleLabel, 0, 0) )
  {
    currencyTitleLabel2 = (UnityEngine_Object_o *)this->fields.currencyTitleLabel2;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Inequality(currencyTitleLabel2, 0, 0) )
    {
      v12 = this->fields.currencyTitleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v11);
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5991/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/, 0);
      if ( !v12 )
        goto LABEL_27;
      UILabel__set_text(v12, (System_String_o *)filterButton, 0);
      v13 = this->fields.currencyTitleLabel2;
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5990/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/, 0);
      if ( !v13 )
        goto LABEL_27;
      UILabel__set_text(v13, (System_String_o *)filterButton, 0);
    }
  }
  ExchangeSvtCoinMenu__SetCurrencyInfo(this, v8);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__Open_b__30_0__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v14, 0);
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
  {
    filterButton = this->fields.baseWindow;
    if ( !filterButton )
      goto LABEL_27;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         filterButton,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    filterButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)filterButton & 1) != 0 )
    {
      if ( Component_object )
      {
        LODWORD(Component_object[2].klass) = 2;
        LODWORD(Component_object[3].monitor) = 1045220557;
        return;
      }
LABEL_27:
      sub_2213CDC(filterButton, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ExchangeSvtCoinMenu__OpenFolder(ExchangeSvtCoinMenu_o *this, int32_t svtCoinType, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21

  if ( (byte_596B463 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu__OpenFolder_b__32_0__);
    byte_596B463 = 1;
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
        v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__OpenFolder_b__32_0__, 0),
        !v6) )
  {
LABEL_9:
    sub_2213CDC(buyItemListViewManager, *(_QWORD *)&svtCoinType);
  }
  ShopBuyItemListViewManager__SetMode_41958800(v6, 1, v7, 0.1, 0);
}


void ExchangeSvtCoinMenu__OpenRequestResultDialog(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  const MethodInfo *v4; // x4
  ShopEntity_o *dragParentObject; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *ResultDialogMessage; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  Il2CppObject *Entity; // x23
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  System_String_o *v12; // x21
  RequestResultDialog_o *requestResultDialog; // x23
  System_Action_bool__o *v14; // x24

  if ( (byte_596B470 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnResultDecide__);
    byte_596B470 = 1;
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !dragParentObject )
    goto LABEL_13;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)buyItemListViewManager;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopEntity__get_TargetId(dragParentObject, 0);
  if ( !v9 )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v9,
             (int32_t)buyItemListViewManager,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    || (v12 = (System_String_o *)buyItemListViewManager,
        (buyItemListViewManager = (ShopBuyItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this->fields.requestResultDialog,
                                                                    0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 1, 0),
        requestResultDialog = this->fields.requestResultDialog,
        v14 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v14, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnResultDecide__, 0),
        !requestResultDialog) )
  {
LABEL_13:
    sub_2213CDC(buyItemListViewManager, method);
  }
  RequestResultDialog__Open(requestResultDialog, ResultDialogMessage, v12, RequestResultDialogItemMessageNormal, v14, 0);
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
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *v14; // x21
  System_String_o *v15; // x0
  ExchangeSvtCoinMenu_o *v16; // x21
  const MethodInfo *v17; // x2
  bool IsBulk; // w0
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x21
  ShopEntity_o *Shop_k__BackingField; // x22
  System_Action_int__o *v21; // x23
  ShopBuyItemConfirmMenu_o *selectMenu; // x21
  ShopEntity_o *v23; // x22
  int32_t ShopKind_k__BackingField; // w20
  System_Action_int__o *v25; // x23
  int v26; // [xsp+8h] [xbp-38h] BYREF
  int v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596B468 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnPreConfirm__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    sub_2213A60(&StringLiteral_16549/*"[FFFF00]{0}"*/);
    sub_2213A60(&StringLiteral_6005/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/);
    byte_596B468 = 1;
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
    v27 = v9;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v27);
    v11 = (System_String_o *)StringLiteral_16549/*"[FFFF00]{0}"*/;
  }
  else
  {
    v26 = v9;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v26);
    v11 = (System_String_o *)StringLiteral_26484/*"{0}"*/;
  }
  v14 = (Il2CppObject *)System_String__Format(v11, v10, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6005/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/, 0);
  v16 = (ExchangeSvtCoinMenu_o *)System_String__Format(v15, v14, 0);
  IsBulk = ExchangeSvtCoinMenu__GetIsBulk(v16, v6, v17);
  this->fields.isBulkSelect = IsBulk;
  if ( IsBulk )
  {
    buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.bulkSelectMenuNoticeLabel;
    if ( buyItemListViewManager )
    {
      UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v16, 0);
      bulkSelectMenu = this->fields.bulkSelectMenu;
      Shop_k__BackingField = v6->fields._Shop_k__BackingField;
      v21 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v21, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0);
      if ( bulkSelectMenu )
      {
        ShopBuyBulkItemConfirmMenu__Open(bulkSelectMenu, Shop_k__BackingField, v6, v21, 0, 0);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(buyItemListViewManager, *(_QWORD *)&selectItemNum);
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.selectMenuNoticeLabel;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v16, 0);
  selectMenu = this->fields.selectMenu;
  v23 = v6->fields._Shop_k__BackingField;
  ShopKind_k__BackingField = v6->fields._ShopKind_k__BackingField;
  v25 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v25, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0);
  if ( !selectMenu )
    goto LABEL_19;
  ShopBuyItemConfirmMenu__Open(selectMenu, v23, ShopKind_k__BackingField, v25, 0, 0, 0, 0, 0);
}


void ExchangeSvtCoinMenu__RefreshInfo(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  void *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v4; // x20
  System_Action_int__o *v5; // x21
  const MethodInfo *v6; // x1

  if ( (byte_596B466 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnSelectBuyItem__);
    byte_596B466 = 1;
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
    || (ShopBuyItemListViewManager__SetMode_41957520((ShopBuyItemListViewManager_o *)buyItemListViewManager, 5, 0),
        v4 = this->fields.buyItemListViewManager,
        v5 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ExchangeSvtCoinMenu_OnSelectBuyItem__, 0),
        !v4) )
  {
    sub_2213CDC(buyItemListViewManager, method);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_596B471 & 1) == 0 )
  {
    sub_2213A60(&Method_ExchangeSvtCoinMenu_EndRequestShop__);
    sub_2213A60(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596B471 = 1;
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
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_EndRequestShop__, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
      buyItemListViewManager = (ShopBuyItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v7,
                                                                 (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v6->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField && buyItemListViewManager )
      {
        PurchaseRequest__beginRequest(
          (PurchaseRequest_o *)buyItemListViewManager,
          Shop_k__BackingField->fields.id,
          this->fields.buyCount,
          0,
          0,
          0,
          0,
          0);
        return;
      }
LABEL_12:
      sub_2213CDC(buyItemListViewManager, method);
    }
  }
  ExchangeSvtCoinMenu__RefreshInfo(this, v5);
}


void ExchangeSvtCoinMenu__SetCurrencyInfo(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x22
  unsigned int i; // w28
  void *EntityDefinitely; // x0
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  struct ExchangeSvtCoinMenu_CurrencyInfo_array *currencyInfoList; // x9
  unsigned int max_length; // w10
  struct ExchangeSvtCoinMenu_CurrencyInfo_array *v14; // x9
  int32_t v15; // w23
  ExchangeSvtCoinMenu_CurrencyInfo_o *v16; // x29
  UISprite_o *currencySprite; // x24
  int32_t monitor; // w25
  __int64 v19; // x2
  __int64 v20; // x2
  UILabel_o *currencyLabel; // x23
  int32_t v22; // w24
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596B46D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B46D = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0; ; ++i )
  {
    EntityDefinitely = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v7);
      EntityDefinitely = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = *(struct System_Int32_array **)(*((_QWORD *)EntityDefinitely + 23) + 472LL);
    if ( !ExchangeSvtCoinItemIds )
LABEL_39:
      sub_2213CDC(EntityDefinitely, v6);
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
    if ( !*((_DWORD *)EntityDefinitely + 57) )
    {
      j_il2cpp_runtime_class_init_0(EntityDefinitely, v6, v7);
      ExchangeSvtCoinItemIds = BalanceConfig_TypeInfo->static_fields->ExchangeSvtCoinItemIds;
      if ( !ExchangeSvtCoinItemIds )
        goto LABEL_39;
    }
    if ( i >= LODWORD(ExchangeSvtCoinItemIds->max_length) )
      goto LABEL_40;
    v14 = this->fields.currencyInfoList;
    if ( !v14 )
      goto LABEL_39;
    if ( i >= LODWORD(v14->max_length) )
LABEL_40:
      sub_2213CE4(EntityDefinitely);
    if ( !Master_object )
      goto LABEL_39;
    v15 = ExchangeSvtCoinItemIds->m_Items[i];
    v16 = v14->m_Items[i];
    EntityDefinitely = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 &entity,
                                 v15,
                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
    {
      if ( !v16 || !entity )
        goto LABEL_39;
      currencySprite = v16->fields.currencySprite;
      monitor = (int32_t)entity[2].monitor;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
      AtlasManager__SetItem(currencySprite, monitor, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v19);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      EntityDefinitely = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v19);
        EntityDefinitely = NetworkManager_TypeInfo;
      }
      if ( !v8 )
        goto LABEL_39;
      EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                           (UserItemMaster_o *)v8,
                           *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL),
                           v15,
                           0);
      if ( !EntityDefinitely )
        goto LABEL_39;
      currencyLabel = v16->fields.currencyLabel;
      v22 = *((_DWORD *)EntityDefinitely + 7);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v20);
      EntityDefinitely = LocalizationManager__GetNumberFormat(v22, 0);
      if ( !currencyLabel )
        goto LABEL_39;
      UILabel__set_text(currencyLabel, (System_String_o *)EntityDefinitely, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ExchangeSvtCoinMenu__SetDispCurrencyInfo(ExchangeSvtCoinMenu_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *currencyInfoPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596B465 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B465 = 1;
  }
  currencyInfoPanel = (UnityEngine_Object_o *)this->fields.currencyInfoPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, method);
  if ( UnityEngine_Object__op_Inequality(currencyInfoPanel, 0, 0) )
  {
    v7 = this->fields.currencyInfoPanel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0);
  }
}


void ExchangeSvtCoinMenu___CloseFolder_b__33_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0

  if ( (byte_596B477 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596B477 = 1;
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
    sub_2213CDC(buyItemListViewManager, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)buyItemListViewManager, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0);
}


void ExchangeSvtCoinMenu___OnResultDecide_b__42_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596B478 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5173/*"DESTROY_EXCHANGE_SVT_COIN"*/);
    byte_596B478 = 1;
  }
  ExchangeSvtCoinMenu__SetDispCurrencyInfo(this, 0, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_2213CDC(0, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_5173/*"DESTROY_EXCHANGE_SVT_COIN"*/, 0);
}


void ExchangeSvtCoinMenu___OpenFolder_b__32_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  MyRoomControl_o *myRoomCtrl; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_596B476 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ExchangeSvtCoinMenu_OnSelectBuyItem__);
    sub_2213A60(&StringLiteral_13744/*"SvtCoinType"*/);
    byte_596B476 = 1;
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
  v5 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ExchangeSvtCoinMenu_OnSelectBuyItem__, 0);
  if ( !buyItemListViewManager
    || (ShopBuyItemListViewManager__SetMode(buyItemListViewManager, 2, v5, 0),
        (myRoomCtrl = (MyRoomControl_o *)this->fields.myRoomFsm) == 0)
    || (myRoomCtrl = (MyRoomControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)myRoomCtrl, 0)) == 0
    || (myRoomCtrl = (MyRoomControl_o *)myRoomCtrl->fields.optionComp) == 0
    || (myRoomCtrl = (MyRoomControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                          (HutongGames_PlayMaker_FsmVariables_o *)myRoomCtrl,
                                          (System_String_o *)StringLiteral_13744/*"SvtCoinType"*/,
                                          0)) == 0 )
  {
LABEL_11:
    sub_2213CDC(myRoomCtrl, method);
  }
  LODWORD(myRoomCtrl->fields.myRoomListCtr) = 0;
}


void ExchangeSvtCoinMenu___Open_b__30_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  MyRoomControl_o *myRoomCtrl; // x0

  myRoomCtrl = this->fields.myRoomCtrl;
  if ( !myRoomCtrl )
    sub_2213CDC(0, method);
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
    sub_2213CDC(buyItemListViewManager, method);
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
    sub_2213CDC(this, _);
  ExchangeSvtCoinMenu__OpenSelectMenu(this->fields.__4__this, this->fields.selectItemNum, method);
}