void __fastcall ExchangeSvtCoinMenu___ctor(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B32543 & 1) == 0 )
  {
    sub_1BD3458(&BaseMenu_TypeInfo, method);
    byte_4B32543 = 1;
  }
  this->fields.buyCount = 1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinMenu__Awake(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ExchangeSvtCoinMenu__CloseFolder(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *filterButton; // x0
  const MethodInfo *v5; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x20
  System_Action_o *v7; // x21

  if ( (byte_4B32532 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu__CloseFolder_b__33_0__, v3);
    byte_4B32532 = 1;
  }
  filterButton = this->fields.filterButton;
  if ( !filterButton
    || (UnityEngine_GameObject__SetActive(filterButton, 0, 0LL),
        ExchangeSvtCoinMenu__CreateFolderList(this, v5),
        buyItemListViewManager = this->fields.buyItemListViewManager,
        v7 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__CloseFolder_b__33_0__, 0LL),
        !buyItemListViewManager) )
  {
    sub_1BD36B4(filterButton, method);
  }
  ShopBuyItemListViewManager__SetMode_33518312(buyItemListViewManager, 4, v7, 0.1, 0LL);
}


void __fastcall ExchangeSvtCoinMenu__CloseSelectMenu(
        ExchangeSvtCoinMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
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
    ShopBuyItemConfirmMenu__Close_33479452(selectMenu, callback, 0LL);
  }
  selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
  if ( !selectMenu )
LABEL_10:
    sub_1BD36B4(selectMenu, callback);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)selectMenu, 0LL) )
  {
    selectMenu = (ShopBuyItemConfirmMenu_o *)this->fields.bulkSelectMenu;
    if ( selectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Close_43016552((ShopBuyBulkItemConfirmMenu_o *)selectMenu, callback, 0LL);
      goto LABEL_9;
    }
    goto LABEL_10;
  }
LABEL_9:
  this->fields.isBulkSelect = 0;
}


void __fastcall ExchangeSvtCoinMenu__CreateFolderList(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UIProgressBar_o *EntityDefinitely; // x0
  UnityEngine_Transform_c *klass; // x25
  const char *namespaze; // x8
  int v15; // w24
  unsigned __int64 v16; // x26
  struct ExchangeSvtCoinFolderControl_array *svtCoinFolderList; // x8
  int max_length; // w9
  int32_t v19; // w22
  UnityEngine_Object_o *v20; // x23
  struct ExchangeSvtCoinFolderControl_array *v21; // x8
  ExchangeSvtCoinFolderControl_o *v22; // x22
  System_Action_int__o *v23; // x23
  const MethodInfo *v24; // x3
  struct ExchangeSvtCoinFolderControl_array *v25; // x21
  __int64 v26; // x8
  unsigned __int64 v27; // x22
  UnityEngine_Object_o *v28; // x20

  if ( (byte_4B32542 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__TypeInfo, method);
    sub_1BD3458(&BalanceConfig_TypeInfo, v3);
    sub_1BD3458(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1BD3458(&DataManager_TypeInfo, v5);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnClickFolder__, v6);
    sub_1BD3458(&NetworkManager_TypeInfo, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    byte_4B32542 = 1;
  }
  if ( this->fields.svtCoinFolderList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserItemMaster___);
    ExchangeSvtCoinMenu__InitFolderList(this, v10);
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
      v15 = 0;
      v16 = 0LL;
      while ( v16 < (unsigned int)namespaze )
      {
        svtCoinFolderList = this->fields.svtCoinFolderList;
        if ( !svtCoinFolderList )
          goto LABEL_48;
        max_length = svtCoinFolderList->max_length;
        if ( v15 < max_length )
        {
          if ( v15 >= (unsigned int)max_length )
            break;
          v19 = *((_DWORD *)&klass->_1.byval_arg.data + v16);
          v20 = (UnityEngine_Object_o *)svtCoinFolderList->m_Items[v15];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          EntityDefinitely = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
          if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B31D77 )
            {
              sub_1BD3458(&NetworkManager_TypeInfo, v11);
              byte_4B31D77 = 1;
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
                                                    v19,
                                                    0LL);
            if ( !EntityDefinitely )
              goto LABEL_48;
            if ( SHIDWORD(EntityDefinitely->fields.m_CancellationTokenSource) >= 1 )
            {
              v21 = this->fields.svtCoinFolderList;
              if ( !v21 )
                goto LABEL_48;
              if ( v15 >= v21->max_length )
                break;
              v22 = v21->m_Items[v15];
              v23 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v23,
                (Il2CppObject *)this,
                (intptr_t)Method_ExchangeSvtCoinMenu_OnClickFolder__,
                0LL);
              if ( !v22 )
                goto LABEL_48;
              ExchangeSvtCoinFolderControl__SetFolder(v22, v16 + 1, v23, v24);
              ++v15;
            }
          }
        }
        LODWORD(namespaze) = klass->_1.namespaze;
        if ( (__int64)++v16 >= (int)namespaze )
          goto LABEL_35;
      }
LABEL_47:
      sub_1BD36BC(EntityDefinitely, v11);
    }
    v15 = 0;
LABEL_35:
    v25 = this->fields.svtCoinFolderList;
    if ( !v25 )
      goto LABEL_48;
    v26 = *(_QWORD *)&v25->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( v27 < (unsigned int)v26 )
      {
        v28 = (UnityEngine_Object_o *)v25->m_Items[v27];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        EntityDefinitely = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
        if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_48;
          ExchangeSvtCoinFolderControl__SetActive((ExchangeSvtCoinFolderControl_o *)v28, v11);
        }
        LODWORD(v26) = v25->max_length;
        if ( (__int64)++v27 >= (int)v26 )
          goto LABEL_45;
      }
      goto LABEL_47;
    }
LABEL_45:
    GameObjectExtensions__SetLocalPositionY(this->fields.dummyFolderObject, (float)v15 * -120.0, 0LL);
    EntityDefinitely = (UIProgressBar_o *)this->fields.svtCoinFolderListScrollBar;
    if ( !EntityDefinitely )
LABEL_48:
      sub_1BD36B4(EntityDefinitely, v11);
    UIProgressBar__set_value(EntityDefinitely, 0.0, 0LL);
  }
}


void __fastcall ExchangeSvtCoinMenu__EndRequestShop(
        ExchangeSvtCoinMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4B32540 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_22325/*"ng"*/, result);
    byte_4B32540 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22325/*"ng"*/, 0LL) )
    ExchangeSvtCoinMenu__RefreshInfo(this, v5);
  else
    ExchangeSvtCoinMenu__OpenRequestResultDialog(this, v5);
}


bool __fastcall ExchangeSvtCoinMenu__GetIsBulk(
        ExchangeSvtCoinMenu_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x19
  int32_t limitNum; // w8
  bool v8; // w22
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v12; // x0
  int64_t userIdNumber; // x21
  int m_CancellationTokenSource_high; // w20

  if ( (byte_4B3253C & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_UserItemMaster___, item);
    sub_1BD3458(&DataManager_TypeInfo, v4);
    this = (ExchangeSvtCoinMenu_o *)sub_1BD3458(&NetworkManager_TypeInfo, v5);
    byte_4B3253C = 1;
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
    v8 = limitNum - item->fields._TotalNum_k__BackingField > 1;
  else
    v8 = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    byte_4B31D77 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  userIdNumber = v12->static_fields->userIdNumber;
  this = (ExchangeSvtCoinMenu_o *)ShopEntity__GetItemID(Shop_k__BackingField, 0LL);
  if ( !Master_object
    || (this = (ExchangeSvtCoinMenu_o *)UserItemMaster__GetEntityDefinitely(
                                          (UserItemMaster_o *)Master_object,
                                          userIdNumber,
                                          (int32_t)this,
                                          0LL)) == 0LL )
  {
LABEL_22:
    sub_1BD36B4(this, item);
  }
  m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
  return (v8 & (m_CancellationTokenSource_high >= 2 * ShopEntity__GetPrice(Shop_k__BackingField, 0LL))) != 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ExchangeSvtCoinMenu__GetNeedCount(
        ExchangeSvtCoinMenu_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  return ExchangeSvtCoinNeedCountCalculator__Calculate(itemId, *(const MethodInfo **)&itemId);
}


void __fastcall ExchangeSvtCoinMenu__Init(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UIProgressBar_o *svtCoinFolderListScrollBar; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *svtCoinFolderContainer; // x20
  const MethodInfo *v8; // x1

  ExchangeSvtCoinMenu__SetDispCurrencyInfo(this, 0, v2);
  svtCoinFolderListScrollBar = (UIProgressBar_o *)this->fields.svtCoinFolderListScrollBar;
  if ( !svtCoinFolderListScrollBar )
    goto LABEL_9;
  UIProgressBar__set_value(svtCoinFolderListScrollBar, 0.0, 0LL);
  svtCoinFolderContainer = this->fields.svtCoinFolderContainer;
  if ( !byte_4B31941 )
  {
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4B31941 = 1;
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
    sub_1BD36B4(svtCoinFolderListScrollBar, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtCoinFolderListScrollBar, 0, 0LL);
  ExchangeSvtCoinMenu__InitFolderList(this, v8);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ExchangeSvtCoinMenu__InitFolderList(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinMenu_o *v2; // x19
  struct ExchangeSvtCoinFolderControl_array *svtCoinFolderList; // x20
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_4B32541 & 1) == 0 )
  {
    this = (ExchangeSvtCoinMenu_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B32541 = 1;
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
          sub_1BD36BC(this, method);
        v6 = (UnityEngine_Object_o *)svtCoinFolderList->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ExchangeSvtCoinMenu_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v6 )
            sub_1BD36B4(this, method);
          ExchangeSvtCoinFolderControl__InitFolder((ExchangeSvtCoinFolderControl_o *)v6, method);
        }
        LODWORD(v4) = svtCoinFolderList->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)v4 );
    }
  }
}


System_String_o *__fastcall ExchangeSvtCoinMenu__MakeResultDialogMessage(
        ExchangeSvtCoinMenu_o *this,
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v8; // x1
  System_String_o *BulkNameText; // x21
  Il2CppObject *v10; // x21
  Il2CppObject *NumberFormat; // x19
  System_String_o *v12; // x0

  if ( (byte_4B3253D & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, item);
    this = (ExchangeSvtCoinMenu_o *)sub_1BD3458(&StringLiteral_5863/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/, v8);
    byte_4B3253D = 1;
  }
  if ( !item )
    goto LABEL_8;
  BulkNameText = ShopBuyItemListViewItem__get_BulkNameText(item, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ExchangeSvtCoinMenu_o *)LocalizationManager__ReplaceCommonTag(BulkNameText, 0, 0LL);
  if ( !entity )
LABEL_8:
    sub_1BD36B4(this, item);
  v10 = (Il2CppObject *)this;
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(entity->fields.setNum * num, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5863/*"EXCHANGE_SVT_COIN_RESULT_DIALOG_MSG"*/, 0LL);
  return System_String__Format_62539620(v12, v10, NumberFormat, 0LL);
}


void __fastcall ExchangeSvtCoinMenu__OnAlertDecide(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *buyItemListViewManager; // x0
  ShopEntity_o *v6; // x22
  ExchangeSvtCoinConfirmDialog_o *confirmDialog; // x20
  int32_t buyCount; // w21
  System_Action_o *v9; // x23
  System_Action_o *v10; // x24
  const MethodInfo *v11; // x5

  if ( (byte_4B32538 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnConfirmCancel__, v3);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnConfirmDecide__, v4);
    byte_4B32538 = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_7;
  buyItemListViewManager = ShopBuyItemListViewManager__GetItem(
                             (ShopBuyItemListViewManager_o *)buyItemListViewManager,
                             this->fields.selectedItemIndex,
                             0LL);
  if ( !buyItemListViewManager
    || (v6 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14),
        confirmDialog = this->fields.confirmDialog,
        buyCount = this->fields.buyCount,
        v9 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmDecide__, 0LL),
        v10 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmCancel__, 0LL),
        !confirmDialog) )
  {
LABEL_7:
    sub_1BD36B4(buyItemListViewManager, method);
  }
  ExchangeSvtCoinConfirmDialog__Open(confirmDialog, buyCount, v6, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinMenu__OnClickFolder(
        ExchangeSvtCoinMenu_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B32530 & 1) == 0 )
  {
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnClickFolder__, *(_QWORD *)&svtCoinType);
    sub_1BD3458(&StringLiteral_13275/*"SvtCoinType"*/, v5);
    sub_1BD3458(&StringLiteral_3579/*"CLICK_EXCHANGE_SVT_COIN_LIST"*/, v6);
    byte_4B32530 = 1;
  }
  v7 = Method_ExchangeSvtCoinMenu_OnClickFolder__;
  if ( (*((_BYTE *)Method_ExchangeSvtCoinMenu_OnClickFolder__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_ExchangeSvtCoinMenu_OnClickFolder__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (myRoomFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(myRoomFsm, 0LL)) == 0LL
    || (myRoomFsm = (PlayMakerFSM_o *)myRoomFsm[1].fields.m_CancellationTokenSource) == 0LL
    || (myRoomFsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                        (HutongGames_PlayMaker_FsmVariables_o *)myRoomFsm,
                                        (System_String_o *)StringLiteral_13275/*"SvtCoinType"*/,
                                        0LL)) == 0LL
    || (LODWORD(myRoomFsm->fields.addEventHandlers) = svtCoinType, (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BD36B4(myRoomFsm, v9);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3579/*"CLICK_EXCHANGE_SVT_COIN_LIST"*/, 0LL);
}


void __fastcall ExchangeSvtCoinMenu__OnConfirmCancel(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x20
  System_Action_int__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  ShopBuyItemConfirmMenu_o *selectMenu; // x20
  System_Action_int__o *v9; // x21

  if ( (byte_4B32539 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__TypeInfo, method);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnPreConfirm__, v3);
    byte_4B32539 = 1;
  }
  if ( this->fields.isBulkSelect )
  {
    bulkSelectMenu = this->fields.bulkSelectMenu;
    v5 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
    System_Action_int____ctor(v5, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0LL);
    if ( bulkSelectMenu )
    {
      ShopBuyBulkItemConfirmMenu__Modify(bulkSelectMenu, v5, 0LL);
      return;
    }
LABEL_8:
    sub_1BD36B4(v6, v7);
  }
  selectMenu = this->fields.selectMenu;
  v9 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v9, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0LL);
  if ( !selectMenu )
    goto LABEL_8;
  ShopBuyItemConfirmMenu__SetInput(selectMenu, v9, 0LL);
}


void __fastcall ExchangeSvtCoinMenu__OnConfirmDecide(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  ExchangeSvtCoinMenu__CloseSelectMenu(this, 0LL, v2);
  ExchangeSvtCoinMenu__RequestShop(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinMenu__OnPreConfirm(ExchangeSvtCoinMenu_o *this, int32_t cnt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *buyItemListViewManager; // x0
  int32_t buyCount; // w20
  int32_t needCount; // w21
  ExchangeSvtCoinSliderAlertDialog_o *sliderAlertDialog; // x23
  ShopEntity_o *v12; // x22
  System_Action_o *v13; // x24
  System_Action_o *v14; // x25
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x1
  ExchangeSvtCoinConfirmDialog_o *confirmDialog; // x22
  ShopEntity_o *v18; // x21
  System_Action_o *v19; // x23
  System_Action_o *v20; // x24
  const MethodInfo *v21; // x5

  if ( (byte_4B32537 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&cnt);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnAlertDecide__, v5);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnConfirmCancel__, v6);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnConfirmDecide__, v7);
    byte_4B32537 = 1;
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
        v12 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14);
        v13 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnAlertDecide__, 0LL);
        v14 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmCancel__, 0LL);
        if ( sliderAlertDialog )
        {
          ExchangeSvtCoinSliderAlertDialog__Open(sliderAlertDialog, buyCount, needCount, v12, v13, v14, v15);
          return;
        }
      }
LABEL_13:
      sub_1BD36B4(buyItemListViewManager, *(_QWORD *)&cnt);
    }
    if ( !buyItemListViewManager )
      goto LABEL_13;
    confirmDialog = this->fields.confirmDialog;
    v18 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14);
    v19 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmDecide__, 0LL);
    v20 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnConfirmCancel__, 0LL);
    if ( !confirmDialog )
      goto LABEL_13;
    ExchangeSvtCoinConfirmDialog__Open(confirmDialog, buyCount, v18, v19, v20, v21);
  }
  else
  {
    ExchangeSvtCoinMenu__CloseSelectMenu(this, 0LL, method);
    ExchangeSvtCoinMenu__RefreshInfo(this, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinMenu__OnResultDecide(ExchangeSvtCoinMenu_o *this, bool isOk, const MethodInfo *method)
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
  RequestResultDialog_o *requestResultDialog; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *Master_object; // x21
  unsigned __int64 i; // x23
  __int64 v17; // x8
  BalanceConfig_c *v18; // x8
  int64_t v19; // x22
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  System_String_o *v21; // x20
  Il2CppObject *Instance; // x22
  System_String_o *Empty; // x21
  System_Action_o *v24; // x23

  if ( (byte_4B3253A & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, isOk);
    sub_1BD3458(&BalanceConfig_TypeInfo, v4);
    sub_1BD3458(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1BD3458(&DataManager_TypeInfo, v6);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu__OnResultDecide_b__42_0__, v7);
    sub_1BD3458(&LocalizationManager_TypeInfo, v8);
    sub_1BD3458(&NetworkManager_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BD3458(&string_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_5843/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/, v12);
    byte_4B3253A = 1;
  }
  requestResultDialog = this->fields.requestResultDialog;
  if ( !requestResultDialog )
    goto LABEL_29;
  RequestResultDialog__Close(requestResultDialog, 0LL);
  ExchangeSvtCoinMenu__RefreshInfo(this, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0LL; ; ++i )
  {
    requestResultDialog = (RequestResultDialog_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      requestResultDialog = (RequestResultDialog_o *)BalanceConfig_TypeInfo;
    }
    v17 = *(_QWORD *)&requestResultDialog->fields.userItemNum2Label->fields.mEffectColor.fields.b;
    if ( !v17 )
      goto LABEL_29;
    if ( (__int64)i >= *(int *)(v17 + 24) )
      break;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B31D77 )
    {
      sub_1BD3458(&NetworkManager_TypeInfo, isOk);
      byte_4B31D77 = 1;
    }
    requestResultDialog = (RequestResultDialog_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      requestResultDialog = (RequestResultDialog_o *)NetworkManager_TypeInfo;
    }
    v18 = BalanceConfig_TypeInfo;
    v19 = *(_QWORD *)&requestResultDialog->fields.userItemNum2Label->fields.updateAnchors;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = v18->static_fields->ExchangeSvtCoinItemIds;
    if ( !ExchangeSvtCoinItemIds )
      goto LABEL_29;
    if ( i >= ExchangeSvtCoinItemIds->max_length )
      sub_1BD36BC(requestResultDialog, isOk);
    if ( !Master_object )
      goto LABEL_29;
    requestResultDialog = (RequestResultDialog_o *)UserItemMaster__GetEntityDefinitely(
                                                     (UserItemMaster_o *)Master_object,
                                                     v19,
                                                     ExchangeSvtCoinItemIds->m_Items[i + 1],
                                                     0LL);
    if ( !requestResultDialog )
      goto LABEL_29;
    if ( SHIDWORD(requestResultDialog->fields.m_CancellationTokenSource) > 0 )
      return;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5843/*"EXCHANGE_SVT_COIN_COMPLETE_DIALOG_MSG"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  Empty = string_TypeInfo->static_fields->Empty;
  v24 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__OnResultDecide_b__42_0__, 0LL);
  if ( !Instance )
LABEL_29:
    sub_1BD36B4(requestResultDialog, isOk);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, Empty, v21, v24, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, -2.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinMenu__OnSelectBuyItem(
        ExchangeSvtCoinMenu_o *this,
        int32_t selectItemNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  NetworkManager_ResultCallbackFunc_o *v15; // x19

  if ( (byte_4B32535 & 1) == 0 )
  {
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnSelectBuyItem__, *(_QWORD *)&selectItemNum);
    sub_1BD3458(&Method_NetworkManager_getRequest_UserPresentListRequest___, v5);
    sub_1BD3458(&NetworkManager_TypeInfo, v6);
    sub_1BD3458(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu___c__DisplayClass36_0__OnSelectBuyItem_b__0__, v8);
    sub_1BD3458(&ExchangeSvtCoinMenu___c__DisplayClass36_0_TypeInfo, v9);
    byte_4B32535 = 1;
  }
  v10 = sub_1BD36A4(ExchangeSvtCoinMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BD33FC(v10 + 16);
  *(_DWORD *)(v10 + 24) = selectItemNum;
  v13 = Method_ExchangeSvtCoinMenu_OnSelectBuyItem__;
  if ( (*((_BYTE *)Method_ExchangeSvtCoinMenu_OnSelectBuyItem__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BD3470(Method_ExchangeSvtCoinMenu_OnSelectBuyItem__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BD343C(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1BD36A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_ExchangeSvtCoinMenu___c__DisplayClass36_0__OnSelectBuyItem_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v15,
                     (const MethodInfo_2FB5954 *)Method_NetworkManager_getRequest_UserPresentListRequest___);
  if ( !Request_object )
LABEL_10:
    sub_1BD36B4(Request_object, v12);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall ExchangeSvtCoinMenu__Open(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *filterButton; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *currencyTitleLabel; // x20
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *currencyTitleLabel2; // x20
  UILabel_o *v14; // x20
  UILabel_o *v15; // x20
  System_Action_o *v16; // x20
  UnityEngine_Object_o *baseWindow; // x20
  Il2CppObject *Component_object; // x19

  if ( (byte_4B3252F & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu__Open_b__30_0__, v3);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v4);
    sub_1BD3458(&LocalizationManager_TypeInfo, v5);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v6);
    sub_1BD3458(&StringLiteral_5847/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/, v7);
    sub_1BD3458(&StringLiteral_5848/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/, v8);
    byte_4B3252F = 1;
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
  ExchangeSvtCoinMenu__CreateFolderList(this, v10);
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
      v14 = this->fields.currencyTitleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5848/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SSR"*/, 0LL);
      if ( !v14 )
        goto LABEL_27;
      UILabel__set_text(v14, (System_String_o *)filterButton, 0LL);
      v15 = this->fields.currencyTitleLabel2;
      filterButton = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5847/*"EXCHANGE_SVT_COIN_CURRENCY_TITLE_SR"*/, 0LL);
      if ( !v15 )
        goto LABEL_27;
      UILabel__set_text(v15, (System_String_o *)filterButton, 0LL);
    }
  }
  ExchangeSvtCoinMenu__SetCurrencyInfo(this, v12);
  v16 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__Open_b__30_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v16, 0LL);
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
                         (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      sub_1BD36B4(filterButton, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinMenu__OpenFolder(
        ExchangeSvtCoinMenu_o *this,
        int32_t svtCoinType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_4B32531 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&svtCoinType);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu__OpenFolder_b__32_0__, v5);
    byte_4B32531 = 1;
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
        v7 = this->fields.buyItemListViewManager,
        v8 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu__OpenFolder_b__32_0__, 0LL),
        !v7) )
  {
LABEL_9:
    sub_1BD36B4(buyItemListViewManager, *(_QWORD *)&svtCoinType);
  }
  ShopBuyItemListViewManager__SetMode_33518312(v7, 1, v8, 0.1, 0LL);
}


void __fastcall ExchangeSvtCoinMenu__OpenRequestResultDialog(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *buyItemListViewManager; // x0
  const MethodInfo *v8; // x4
  ShopEntity_o *v9; // x21
  System_String_o *ResultDialogMessage; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  Il2CppObject *Entity; // x23
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  System_String_o *v14; // x21
  RequestResultDialog_o *requestResultDialog; // x23
  System_Action_bool__o *v16; // x24

  if ( (byte_4B3253E & 1) == 0 )
  {
    sub_1BD3458(&System_Action_bool__TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v3);
    sub_1BD3458(&DataManager_TypeInfo, v4);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnResultDecide__, v6);
    byte_4B3253E = 1;
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
  v9 = (ShopEntity_o *)*((_QWORD *)buyItemListViewManager + 14);
  ResultDialogMessage = ExchangeSvtCoinMenu__MakeResultDialogMessage(
                          (ExchangeSvtCoinMenu_o *)buyItemListViewManager,
                          (ShopBuyItemListViewItem_o *)buyItemListViewManager,
                          v9,
                          this->fields.buyCount,
                          v8);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  buyItemListViewManager = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v9 )
    goto LABEL_13;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)buyItemListViewManager;
  buyItemListViewManager = (void *)ShopEntity__get_TargetId(v9, 0LL);
  if ( !v11 )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v11,
             (int32_t)buyItemListViewManager,
             (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v9,
                                           (ItemEntity_o *)Entity,
                                           this->fields.buyCount,
                                           0LL);
  buyItemListViewManager = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                             v9,
                             (ItemEntity_o *)Entity,
                             0LL);
  if ( !this->fields.requestResultDialog
    || (v14 = (System_String_o *)buyItemListViewManager,
        (buyItemListViewManager = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.requestResultDialog,
                                    0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buyItemListViewManager, 1, 0LL),
        requestResultDialog = this->fields.requestResultDialog,
        v16 = (System_Action_bool__o *)sub_1BD36A4(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v16, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnResultDecide__, 0LL),
        !requestResultDialog) )
  {
LABEL_13:
    sub_1BD36B4(buyItemListViewManager, method);
  }
  RequestResultDialog__Open(
    requestResultDialog,
    ResultDialogMessage,
    v14,
    RequestResultDialogItemMessageNormal,
    v16,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinMenu__OpenSelectMenu(
        ExchangeSvtCoinMenu_o *this,
        int32_t selectItemNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *v12; // x20
  int32_t TargetId; // w0
  const MethodInfo *v14; // x1
  int v15; // w0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x8
  Il2CppObject *v21; // x21
  System_String_o *v22; // x0
  ExchangeSvtCoinMenu_o *v23; // x21
  const MethodInfo *v24; // x2
  bool IsBulk; // w0
  ShopBuyBulkItemConfirmMenu_o *bulkSelectMenu; // x21
  ShopEntity_o *Shop_k__BackingField; // x22
  System_Action_int__o *v28; // x23
  ShopBuyItemConfirmMenu_o *selectMenu; // x21
  ShopEntity_o *v30; // x22
  int32_t ShopKind_k__BackingField; // w20
  System_Action_int__o *v32; // x23
  int v33; // [xsp+8h] [xbp-38h] BYREF
  int v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B32536 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__TypeInfo, *(_QWORD *)&selectItemNum);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnPreConfirm__, v5);
    sub_1BD3458(&int_TypeInfo, v6);
    sub_1BD3458(&LocalizationManager_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_25273/*"{0}"*/, v8);
    sub_1BD3458(&StringLiteral_16122/*"[FFFF00]{0}"*/, v9);
    sub_1BD3458(&StringLiteral_5862/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/, v10);
    byte_4B32536 = 1;
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
  v12 = (ShopBuyItemListViewItem_o *)buyItemListViewManager;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)buyItemListViewManager->fields.clipRange;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  TargetId = ShopEntity__get_TargetId((ShopEntity_o *)buyItemListViewManager, 0LL);
  v15 = ExchangeSvtCoinNeedCountCalculator__Calculate(TargetId, v14);
  this->fields.needCount = v15;
  if ( v15 <= 0 )
  {
    v34 = v15;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v16, v17, v18);
    v20 = (System_String_o *)StringLiteral_16122/*"[FFFF00]{0}"*/;
  }
  else
  {
    v33 = v15;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v16, v17, v18);
    v20 = (System_String_o *)StringLiteral_25273/*"{0}"*/;
  }
  v21 = (Il2CppObject *)System_String__Format(v20, v19, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5862/*"EXCHANGE_SVT_COIN_NOTICE_TEXT"*/, 0LL);
  v23 = (ExchangeSvtCoinMenu_o *)System_String__Format(v22, v21, 0LL);
  IsBulk = ExchangeSvtCoinMenu__GetIsBulk(v23, v12, v24);
  this->fields.isBulkSelect = IsBulk;
  if ( IsBulk )
  {
    buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.bulkSelectMenuNoticeLabel;
    if ( buyItemListViewManager )
    {
      UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v23, 0LL);
      bulkSelectMenu = this->fields.bulkSelectMenu;
      Shop_k__BackingField = v12->fields._Shop_k__BackingField;
      v28 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
      System_Action_int____ctor(v28, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0LL);
      if ( bulkSelectMenu )
      {
        ShopBuyBulkItemConfirmMenu__Open(bulkSelectMenu, Shop_k__BackingField, v12, v28, 0, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1BD36B4(buyItemListViewManager, *(_QWORD *)&selectItemNum);
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)this->fields.selectMenuNoticeLabel;
  if ( !buyItemListViewManager )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)buyItemListViewManager, (System_String_o *)v23, 0LL);
  selectMenu = this->fields.selectMenu;
  v30 = v12->fields._Shop_k__BackingField;
  ShopKind_k__BackingField = v12->fields._ShopKind_k__BackingField;
  v32 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v32, (Il2CppObject *)this, Method_ExchangeSvtCoinMenu_OnPreConfirm__, 0LL);
  if ( !selectMenu )
    goto LABEL_19;
  ShopBuyItemConfirmMenu__Open(selectMenu, v30, ShopKind_k__BackingField, v32, 0, 0, 0LL, 0, 0LL);
}


void __fastcall ExchangeSvtCoinMenu__RefreshInfo(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *buyItemListViewManager; // x0
  ShopBuyItemListViewManager_o *v5; // x20
  System_Action_int__o *v6; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4B32534 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__TypeInfo, method);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnSelectBuyItem__, v3);
    byte_4B32534 = 1;
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
    || (ShopBuyItemListViewManager__SetMode_33517040((ShopBuyItemListViewManager_o *)buyItemListViewManager, 5, 0LL),
        v5 = this->fields.buyItemListViewManager,
        v6 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo),
        System_Action_int____ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ExchangeSvtCoinMenu_OnSelectBuyItem__, 0LL),
        !v5) )
  {
    sub_1BD36B4(buyItemListViewManager, method);
  }
  ShopBuyItemListViewManager__SetMode(v5, 2, v6, 0LL);
  ExchangeSvtCoinMenu__SetCurrencyInfo(this, v7);
}


void __fastcall ExchangeSvtCoinMenu__RequestShop(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  ShopBuyItemListViewItem_o *v9; // x20
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_4B3253F & 1) == 0 )
  {
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_EndRequestShop__, method);
    sub_1BD3458(&Method_NetworkManager_getRequest_PurchaseRequest___, v3);
    sub_1BD3458(&NetworkManager_TypeInfo, v4);
    sub_1BD3458(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4B3253F = 1;
  }
  buyItemListViewManager = this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_12;
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
  if ( Item )
  {
    v9 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BD36A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_ExchangeSvtCoinMenu_EndRequestShop__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      buyItemListViewManager = (ShopBuyItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v10,
                                                                 (const MethodInfo_2FB5954 *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v9->fields._Shop_k__BackingField;
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
      sub_1BD36B4(buyItemListViewManager, method);
    }
  }
  ExchangeSvtCoinMenu__RefreshInfo(this, v8);
}


void __fastcall ExchangeSvtCoinMenu__SetCurrencyInfo(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  __int64 v11; // x1
  Il2CppObject *v12; // x22
  il2cpp_array_size_t i; // w28
  void *EntityDefinitely; // x0
  struct System_Int32_array *ExchangeSvtCoinItemIds; // x8
  struct ExchangeSvtCoinMenu_CurrencyInfo_array *currencyInfoList; // x9
  il2cpp_array_size_t max_length; // w10
  struct ExchangeSvtCoinMenu_CurrencyInfo_array *v18; // x9
  int32_t v19; // w23
  ExchangeSvtCoinMenu_CurrencyInfo_o *v20; // x29
  UISprite_o *currencySprite; // x24
  int32_t monitor; // w25
  UILabel_o *currencyLabel; // x23
  int32_t v24; // w24
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B3253B & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&BalanceConfig_TypeInfo, v3);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v4);
    sub_1BD3458(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1BD3458(&DataManager_TypeInfo, v6);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1BD3458(&LocalizationManager_TypeInfo, v8);
    sub_1BD3458(&NetworkManager_TypeInfo, v9);
    byte_4B3253B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserItemMaster___);
  for ( i = 0; ; ++i )
  {
    EntityDefinitely = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      EntityDefinitely = BalanceConfig_TypeInfo;
    }
    ExchangeSvtCoinItemIds = *(struct System_Int32_array **)(*((_QWORD *)EntityDefinitely + 23) + 456LL);
    if ( !ExchangeSvtCoinItemIds )
LABEL_39:
      sub_1BD36B4(EntityDefinitely, v11);
    if ( (signed int)i >= (signed int)ExchangeSvtCoinItemIds->max_length )
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
    if ( i >= ExchangeSvtCoinItemIds->max_length )
      goto LABEL_40;
    v18 = this->fields.currencyInfoList;
    if ( !v18 )
      goto LABEL_39;
    if ( i >= v18->max_length )
LABEL_40:
      sub_1BD36BC(EntityDefinitely, v11);
    if ( !Master_object )
      goto LABEL_39;
    v19 = ExchangeSvtCoinItemIds->m_Items[i + 1];
    v20 = v18->m_Items[i];
    EntityDefinitely = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 &entity,
                                 v19,
                                 (const MethodInfo_31D1F44 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)EntityDefinitely & 1) != 0 )
    {
      if ( !v20 || !entity )
        goto LABEL_39;
      currencySprite = v20->fields.currencySprite;
      monitor = (int32_t)entity[2].monitor;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(currencySprite, monitor, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v11);
        byte_4B31D77 = 1;
      }
      EntityDefinitely = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        EntityDefinitely = NetworkManager_TypeInfo;
      }
      if ( !v12 )
        goto LABEL_39;
      EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                           (UserItemMaster_o *)v12,
                           *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL),
                           v19,
                           0LL);
      if ( !EntityDefinitely )
        goto LABEL_39;
      currencyLabel = v20->fields.currencyLabel;
      v24 = *((_DWORD *)EntityDefinitely + 7);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      EntityDefinitely = LocalizationManager__GetNumberFormat(v24, 0LL);
      if ( !currencyLabel )
        goto LABEL_39;
      UILabel__set_text(currencyLabel, (System_String_o *)EntityDefinitely, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeSvtCoinMenu__SetDispCurrencyInfo(
        ExchangeSvtCoinMenu_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currencyInfoPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B32533 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4B32533 = 1;
  }
  currencyInfoPanel = (UnityEngine_Object_o *)this->fields.currencyInfoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currencyInfoPanel, 0LL, 0LL) )
  {
    v7 = this->fields.currencyInfoPanel;
    if ( !v7 )
      sub_1BD36B4(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


void __fastcall ExchangeSvtCoinMenu___CloseFolder_b__33_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0

  if ( (byte_4B32545 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_7075/*"GO_NEXT"*/, method);
    byte_4B32545 = 1;
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
    sub_1BD36B4(buyItemListViewManager, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)buyItemListViewManager, (System_String_o *)StringLiteral_7075/*"GO_NEXT"*/, 0LL);
}


void __fastcall ExchangeSvtCoinMenu___OnResultDecide_b__42_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B32546 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5099/*"DESTROY_EXCHANGE_SVT_COIN"*/, method);
    byte_4B32546 = 1;
  }
  ExchangeSvtCoinMenu__SetDispCurrencyInfo(this, 0, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BD36B4(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_5099/*"DESTROY_EXCHANGE_SVT_COIN"*/, 0LL);
}


void __fastcall ExchangeSvtCoinMenu___OpenFolder_b__32_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomControl_o *myRoomCtrl; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x20
  System_Action_int__o *v7; // x21

  if ( (byte_4B32544 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__TypeInfo, method);
    sub_1BD3458(&Method_ExchangeSvtCoinMenu_OnSelectBuyItem__, v3);
    sub_1BD3458(&StringLiteral_13275/*"SvtCoinType"*/, v4);
    byte_4B32544 = 1;
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
  v7 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v7, (Il2CppObject *)this, (intptr_t)Method_ExchangeSvtCoinMenu_OnSelectBuyItem__, 0LL);
  if ( !buyItemListViewManager
    || (ShopBuyItemListViewManager__SetMode(buyItemListViewManager, 2, v7, 0LL),
        (myRoomCtrl = (MyRoomControl_o *)this->fields.myRoomFsm) == 0LL)
    || (myRoomCtrl = (MyRoomControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)myRoomCtrl, 0LL)) == 0LL
    || (myRoomCtrl = (MyRoomControl_o *)myRoomCtrl->fields.optionComp) == 0LL
    || (myRoomCtrl = (MyRoomControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                          (HutongGames_PlayMaker_FsmVariables_o *)myRoomCtrl,
                                          (System_String_o *)StringLiteral_13275/*"SvtCoinType"*/,
                                          0LL)) == 0LL )
  {
LABEL_11:
    sub_1BD36B4(myRoomCtrl, method);
  }
  LODWORD(myRoomCtrl->fields.myRoomListCtr) = 0;
}


void __fastcall ExchangeSvtCoinMenu___Open_b__30_0(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  MyRoomControl_o *myRoomCtrl; // x0

  myRoomCtrl = this->fields.myRoomCtrl;
  if ( !myRoomCtrl )
    sub_1BD36B4(0LL, method);
  MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
}


bool __fastcall ExchangeSvtCoinMenu__get_IsActiveSvtCoinList(ExchangeSvtCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *buyItemListViewManager; // x0

  buyItemListViewManager = (UnityEngine_Component_o *)this->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (buyItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              buyItemListViewManager,
                                                              0LL)) == 0LL )
  {
    sub_1BD36B4(buyItemListViewManager, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)buyItemListViewManager, 0LL);
}


void __fastcall ExchangeSvtCoinMenu_CurrencyInfo___ctor(
        ExchangeSvtCoinMenu_CurrencyInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExchangeSvtCoinMenu___c__DisplayClass36_0___ctor(
        ExchangeSvtCoinMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExchangeSvtCoinMenu___c__DisplayClass36_0___OnSelectBuyItem_b__0(
        ExchangeSvtCoinMenu___c__DisplayClass36_0_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1BD36B4(this, _);
  ExchangeSvtCoinMenu__OpenSelectMenu(this->fields.__4__this, this->fields.selectItemNum, method);
}