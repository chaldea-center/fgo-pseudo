void __fastcall WarehouseListManager___ctor(WarehouseListManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__CreateList(
        WarehouseListManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UserGameEntity_o *SelfUserGame; // x24
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v16; // x0
  UserServantStorageMaster_o *v17; // x23
  struct UICommonButton_o *allReleaseButton; // x0
  struct UICommonButton_o *decideButton; // x0
  BalanceConfig_c *v20; // x0
  int32_t *p_sendServantSum; // x23
  int32_t *p_sendEquipSumNF; // x2
  BalanceConfig_c *v23; // x0
  int32_t v24; // w9
  int32_t baseEquipSum; // w8
  int32_t sendEquipSumNF; // w10
  int32_t v27; // w11
  int32_t sendServantKeep; // w11
  bool v29; // vf
  int v30; // w10
  int v31; // w11
  int32_t v32; // w9
  int32_t *p_sendMax; // x22
  int32_t baseServantSum; // w24
  BalanceConfig_c *v35; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UILabel_o *servantTabLabel; // x22
  System_String_o *v38; // x23
  Il2CppObject *v39; // x24
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  UILabel_o *servantEquipTabLabel; // x22
  System_String_o *v43; // x23
  Il2CppObject *v44; // x24
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  const MethodInfo *v47; // x3
  WarehouseListViewManager_o *baseListViewManager; // x0
  struct WarehouseListViewManager_o *v49; // x0
  const MethodInfo *v50; // x1
  int32_t baseEquipKeep; // [xsp+0h] [xbp-50h] BYREF
  int32_t baseEquipSumNF; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t baseServantKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FA96D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_12413/*"SUM_INFO"*/, v12);
    byte_40FA96D = 1;
  }
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v16 )
    goto LABEL_52;
  v17 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v16,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  allReleaseButton = this->fields.allReleaseButton;
  this->fields.totalSum = 0;
  if ( !allReleaseButton )
    goto LABEL_52;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    3LL,
    0LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_52;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    3LL,
    0LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
  if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    if ( SelfUserGame )
    {
      this->fields.baseServantKeep = SelfUserGame->fields.svtStorageAdjust + v20->static_fields->UserServantStorageMax;
      this->fields.baseEquipKeep = SelfUserGame->fields.svtEquipStorageAdjust
                                 + v20->static_fields->UserServantEquipStorageMax;
      this->fields.sendServantKeep = SelfUserGame->fields.svtKeep;
      this->fields.sendEquipKeep = SelfUserGame->fields.svtEquipKeep;
      if ( v17 )
      {
        UserServantStorageMaster__getCount(v17, &this->fields.baseServantSum, &this->fields.baseEquipSum, 0, 0LL);
        UserServantStorageMaster__getCount(v17, &this->fields.baseServantSum, &this->fields.baseEquipSumNF, 1, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          p_sendServantSum = &this->fields.sendServantSum;
          UserServantMaster__getCount(
            MasterData_WarQuestSelectionMaster,
            &this->fields.sendServantSum,
            &this->fields.sendEquipSum,
            0,
            0LL);
          p_sendEquipSumNF = &this->fields.sendEquipSumNF;
          goto LABEL_22;
        }
      }
    }
LABEL_52:
    sub_B170D4();
  }
  if ( !SelfUserGame )
    goto LABEL_52;
  this->fields.baseServantKeep = SelfUserGame->fields.svtKeep;
  this->fields.baseEquipKeep = SelfUserGame->fields.svtEquipKeep;
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  this->fields.sendServantKeep = SelfUserGame->fields.svtStorageAdjust + v23->static_fields->UserServantStorageMax;
  this->fields.sendEquipKeep = SelfUserGame->fields.svtEquipStorageAdjust
                             + v23->static_fields->UserServantEquipStorageMax;
  if ( !v17 )
    goto LABEL_52;
  UserServantStorageMaster__getCount(v17, &this->fields.sendServantSum, &this->fields.sendEquipSum, 0, 0LL);
  UserServantStorageMaster__getCount(v17, &this->fields.sendServantSum, &this->fields.sendEquipSumNF, 1, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_52;
  p_sendServantSum = &this->fields.baseServantSum;
  UserServantMaster__getCount(
    MasterData_WarQuestSelectionMaster,
    &this->fields.baseServantSum,
    &this->fields.baseEquipSum,
    0,
    0LL);
  p_sendEquipSumNF = &this->fields.baseEquipSumNF;
LABEL_22:
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, p_sendServantSum, p_sendEquipSumNF, 1, 0LL);
  v24 = this->fields.kind;
  baseEquipSum = this->fields.baseEquipSum;
  sendEquipSumNF = this->fields.sendEquipSumNF;
  v27 = this->fields.sendEquipSum - sendEquipSumNF;
  this->fields.baseSvtEqFriendShipNum = baseEquipSum - this->fields.baseEquipSumNF;
  this->fields.sendSvtEqFriendShipNum = v27;
  if ( (v24 | 2) == 2 )
  {
    sendServantKeep = this->fields.sendServantKeep;
    sendEquipSumNF = this->fields.sendServantSum;
  }
  else
  {
    sendServantKeep = this->fields.sendEquipKeep;
  }
  this->fields.sendKeep = sendServantKeep;
  this->fields.sendSum = sendEquipSumNF;
  v29 = __OFSUB__(sendServantKeep, sendEquipSumNF);
  v30 = sendServantKeep - sendEquipSumNF;
  v31 = v24 | 2;
  if ( (v30 < 0) ^ v29 | (v30 == 0) )
    v32 = 0;
  else
    v32 = v30;
  this->fields.sendSpace = v32;
  if ( v31 == 2 )
  {
    p_sendMax = &this->fields.sendMax;
    if ( this->fields.baseServantSum >= v32 )
      baseServantSum = v32;
    else
      baseServantSum = this->fields.baseServantSum;
    this->fields.sendMax = baseServantSum;
  }
  else
  {
    if ( baseEquipSum >= v32 )
      baseServantSum = v32;
    else
      baseServantSum = baseEquipSum;
    this->fields.sendMax = baseServantSum;
    p_sendMax = &this->fields.sendMax;
  }
  v35 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  static_fields = v35->static_fields;
  if ( baseServantSum > static_fields->ServantWarehouseSelectMax )
  {
    p_sendMax = &static_fields->ServantWarehouseSelectMax;
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      p_sendMax = &BalanceConfig_TypeInfo->static_fields->ServantWarehouseSelectMax;
    }
  }
  this->fields.sendMax = *p_sendMax;
  servantTabLabel = this->fields.servantTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUM_INFO"*/, 0LL);
  v54 = this->fields.baseServantSum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  baseServantKeep = this->fields.baseServantKeep;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantKeep);
  v41 = System_String__Format_43739268(v38, v39, v40, 0LL);
  if ( !servantTabLabel )
    goto LABEL_52;
  UILabel__set_text(servantTabLabel, v41, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUM_INFO"*/, 0LL);
  baseEquipSumNF = this->fields.baseEquipSumNF;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipSumNF);
  baseEquipKeep = this->fields.baseEquipKeep;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipKeep);
  v46 = System_String__Format_43739268(v43, v44, v45, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_52;
  UILabel__set_text(servantEquipTabLabel, v46, 0LL);
  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    goto LABEL_52;
  WarehouseListViewManager__CreateList(baseListViewManager, kind, setupInfo, v47);
  v49 = this->fields.baseListViewManager;
  if ( !v49 )
    goto LABEL_52;
  ((void (__fastcall *)(struct WarehouseListViewManager_o *, Il2CppMethodPointer))v49->klass->vtable._5_SetSortButtonImage.method)(
    v49,
    v49->klass->vtable._6_GetDragRoot.methodPtr);
  WarehouseListManager__RefrashListDisp(this, v50);
}


void __fastcall WarehouseListManager__DestroyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0
  WarehouseListViewManager_o *v3; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  ListViewManager__DestroyList(baseListViewManager, 0LL);
  WarehouseListViewManager__SaveSortInfo(v3, v4);
}


void __fastcall WarehouseListManager__EndCloseSelectFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WarehouseListManager__EndSelectFilterKind(
        WarehouseListManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__EndSelectFilterKind(baseListViewManager, isDecide, method);
}


void __fastcall WarehouseListManager__FilterButtonState(
        WarehouseListManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_B170D4();
  ((void (__fastcall *)(struct UICommonButton_o *, int32_t, bool, Il2CppMethodPointer))filterButton->klass->vtable._14_SetState.method)(
    filterButton,
    state,
    animation,
    filterButton->klass->vtable._15_OnPress.methodPtr);
}


int64_t __fastcall WarehouseListManager__GetAmountSortValue(
        WarehouseListManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  return WarehouseListViewManager__GetAmountSortValue(baseListViewManager, svtId, method);
}


WarehouseListViewItem_o *__fastcall WarehouseListManager__GetItem(
        WarehouseListManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  return WarehouseListViewManager__GetItem(baseListViewManager, index, method);
}


int32_t __fastcall WarehouseListManager__GetModeKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_String_o *__fastcall WarehouseListManager__GetScaleButtonSpriteName(
        WarehouseListManager_o *this,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  return WarehouseListViewManager__GetScaleButtonSpriteName(baseListViewManager, method);
}


void __fastcall WarehouseListManager__GetSelectItemNum(
        WarehouseListManager_o *this,
        int32_t *normalSum,
        int32_t *friendShipSum,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  *normalSum = 0;
  *friendShipSum = 0;
  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__GetSelectItemNum(baseListViewManager, normalSum, friendShipSum, method);
}


bool __fastcall WarehouseListManager__GetSwapChoiceList(
        WarehouseListManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  return WarehouseListViewManager__GetSwapChoiceList(baseListViewManager, choiceList, unchoiceList, method);
}


bool __fastcall WarehouseListManager__GetSwapLockList(
        WarehouseListManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  return WarehouseListViewManager__GetSwapLockList(baseListViewManager, lockList, unlockList, method);
}


void __fastcall WarehouseListManager__ModifyItem(
        WarehouseListManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__ModifyItem(baseListViewManager, userSvtId, method);
}


void __fastcall WarehouseListManager__ModifyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__Modify(baseListViewManager, method);
}


void __fastcall WarehouseListManager__NumberAdjustment(
        WarehouseListManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__DecrementNumber(baseListViewManager, selectNum, method);
}


void __fastcall WarehouseListManager__OnClickDecide(WarehouseListManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  WarehouseListManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_long__o *v16; // x21
  const MethodInfo *v17; // x2
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int64_array *v19; // x2

  if ( (byte_40FA971 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v10);
    byte_40FA971 = 1;
  }
  if ( this->fields.totalSum >= 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
      v16 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v12,
                                                         v13,
                                                         v14,
                                                         v15);
      System_Collections_Generic_List_long____ctor(
        v16,
        (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
      baseListViewManager = this->fields.baseListViewManager;
      if ( !baseListViewManager || (WarehouseListViewManager__GetSelectList(baseListViewManager, v16, v17), !v16) )
        sub_B170D4();
      v19 = System_Collections_Generic_List_long___ToArray(
              v16,
              (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
      WarehouseListManager_CallbackFunc__Invoke(callbackFunc, 1, v19, -1, 0LL);
    }
  }
}


void __fastcall WarehouseListManager__OnClickFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__OnClickFilterKind(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FA972 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA972 = 1;
  }
  if ( this->fields.totalSum < 1 )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    WarehouseListManager__ReleaseAll(this, v3);
  }
}


void __fastcall WarehouseListManager__OnClickScaleChange(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__ChangeIconScale(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortAscendingOrder(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__OnClickSortAscendingOrder(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__OnClickSortKind(baseListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__OnSelectServant(
        WarehouseListManager_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarehouseListViewManager_o *baseListViewManager; // x0
  int32_t modeKind; // w8
  BattleServantConfConponent_o *p_callbackFunc; // x20
  WarehouseListManager_CallbackFunc_o *v18; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_long__o *v24; // x20
  const MethodInfo *v25; // x1
  int64_t UserSvtId; // x0
  System_Int64_array *v27; // x0
  int32_t v28; // w1
  int32_t index; // w3
  WarehouseListViewManager_o *v30; // x0
  BattleServantConfConponent_o *v31; // x20
  struct WarehouseListManager_CallbackFunc_o *v32; // t1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_List_long__o *v37; // x20
  const MethodInfo *v38; // x1
  int64_t v39; // x0
  WarehouseListViewManager_o *v40; // x0

  if ( (byte_40FA973 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&resultKind);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&SoundManager_TypeInfo, v14);
    byte_40FA973 = 1;
  }
  if ( resultKind == 2 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) < 3 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
      }
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
      v18 = callbackFunc;
      if ( callbackFunc )
      {
        p_callbackFunc->klass = 0LL;
        sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)item, (System_String_array **)method, v4, v5, v6, v7);
        v24 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                           System_Collections_Generic_List_long__TypeInfo,
                                                           v20,
                                                           v21,
                                                           v22,
                                                           v23);
        System_Collections_Generic_List_long____ctor(
          v24,
          (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item || (UserSvtId = WarehouseListViewItem__get_UserSvtId(item, v25), !v24) )
LABEL_28:
          sub_B170D4();
        System_Collections_Generic_List_long___Add(
          v24,
          UserSvtId,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        v27 = System_Collections_Generic_List_long___ToArray(
                v24,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        v28 = 2;
        index = -1;
        goto LABEL_24;
      }
    }
  }
  else if ( resultKind == 1 )
  {
    switch ( this->fields.modeKind )
    {
      case 0:
        baseListViewManager = this->fields.baseListViewManager;
        if ( !baseListViewManager )
          goto LABEL_28;
        WarehouseListViewManager__SelectListView(baseListViewManager, item, (const MethodInfo *)item);
        return;
      case 1:
        v40 = this->fields.baseListViewManager;
        if ( !v40 )
          goto LABEL_28;
        WarehouseListViewManager__SelectListViewLock(v40, item, (const MethodInfo *)item);
        return;
      case 2:
        v30 = this->fields.baseListViewManager;
        if ( !v30 )
          goto LABEL_28;
        WarehouseListViewManager__SelectListViewChoice(v30, item, (const MethodInfo *)item);
        return;
      case 3:
        v32 = this->fields.callbackFunc;
        v31 = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
        v18 = v32;
        if ( !v32 )
          return;
        v31->klass = 0LL;
        sub_B16F98(v31, 0LL, (System_String_array **)item, (System_String_array **)method, v4, v5, v6, v7);
        v37 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                           System_Collections_Generic_List_long__TypeInfo,
                                                           v33,
                                                           v34,
                                                           v35,
                                                           v36);
        System_Collections_Generic_List_long____ctor(
          v37,
          (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item )
          goto LABEL_28;
        v39 = WarehouseListViewItem__get_UserSvtId(item, v38);
        if ( !v37 )
          goto LABEL_28;
        System_Collections_Generic_List_long___Add(
          v37,
          v39,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        v27 = System_Collections_Generic_List_long___ToArray(
                v37,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        index = item->fields.index;
        v28 = 3;
        break;
      default:
        return;
    }
LABEL_24:
    WarehouseListManager_CallbackFunc__Invoke(v18, v28, v27, index, 0LL);
  }
}


void __fastcall WarehouseListManager__RefrashListDisp(WarehouseListManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UICommonButton_o *allReleaseButton; // x0
  unsigned int v7; // w20
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int32_t totalSum; // w8
  int32_t sendSpace; // w10
  int v12; // w8
  _BOOL4 v13; // w21
  struct UICommonButton_o *decideButton; // x0
  const MethodInfo *v15; // x1
  UILabel_o *sendDataLabel; // x20
  System_String_o **v17; // x8
  System_String_o *v18; // x21
  System_String_o *v19; // x21
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  int32_t sendKeep; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FA96E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_12414/*"SUM_OVER_INFO"*/, v4);
    sub_B16FFC(&StringLiteral_12413/*"SUM_INFO"*/, v5);
    byte_40FA96E = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  v7 = 3;
  v8 = this->fields.totalSum <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    v8,
    1LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
  totalSum = this->fields.totalSum;
  if ( totalSum < 1 )
  {
    v13 = 0;
  }
  else if ( totalSum <= this->fields.sendSpace )
  {
    v13 = 0;
    v7 = 0;
  }
  else
  {
    WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v9);
    sendSpace = this->fields.sendSpace;
    v12 = this->fields.totalSum - friendShipSum[0];
    v13 = v12 > sendSpace;
    v7 = v12 <= sendSpace ? 0 : 3;
  }
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_22;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    v7,
    1LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
  WarehouseListManager__UpdateSelectDoneLabel(this, v15);
  sendDataLabel = this->fields.sendDataLabel;
  v17 = (System_String_o **)&StringLiteral_12414/*"SUM_OVER_INFO"*/;
  if ( !v13 )
    v17 = (System_String_o **)&StringLiteral_12413/*"SUM_INFO"*/;
  v18 = *v17;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get(v18, 0LL);
  v24 = this->fields.sendSpace;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  sendKeep = this->fields.sendKeep;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendKeep);
  v22 = System_String__Format_43739268(v19, v20, v21, 0LL);
  if ( !sendDataLabel )
LABEL_22:
    sub_B170D4();
  UILabel__set_text(sendDataLabel, v22, 0LL);
}


void __fastcall WarehouseListManager__ReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = this->fields.baseListViewManager;
  this->fields.totalSum = 0;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__ReleaseAll(baseListViewManager, method);
  WarehouseListManager__RefrashListDisp(this, v4);
}


void __fastcall WarehouseListManager__SaveSortInfo(WarehouseListManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
}


void __fastcall WarehouseListManager__SetMode(
        WarehouseListManager_o *this,
        int32_t mode,
        WarehouseListManager_CallbackFunc_o *callback,
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
  WarehouseListManager__SetMode_26415604(this, mode, v10);
}


bool __fastcall WarehouseListManager__SetModeKind(
        WarehouseListManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  if ( this->fields.modeKind == modeKind )
    return 0;
  this->fields.modeKind = modeKind;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__SetMode_26415604(
        WarehouseListManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  struct WarehouseListViewManager_o *baseListViewManager; // x20
  WarehouseListViewManager_CallbackFunc_o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_40FA970 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_WarehouseListManager_OnSelectServant__, v7);
    byte_40FA970 = 1;
  }
  baseListViewManager = this->fields.baseListViewManager;
  v9 = (WarehouseListViewManager_CallbackFunc_o *)sub_B170CC(
                                                    WarehouseListViewManager_CallbackFunc_TypeInfo,
                                                    *(_QWORD *)&mode,
                                                    method,
                                                    v3,
                                                    v4);
  WarehouseListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_WarehouseListManager_OnSelectServant__,
    0LL);
  if ( !baseListViewManager )
    sub_B170D4();
  baseListViewManager->fields.callbackFunc = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&baseListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  WarehouseListViewManager__SetMode_26454636(baseListViewManager, mode, v16);
}


void __fastcall WarehouseListManager__SetServant(WarehouseListManager_o *this, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x8

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  this->fields.totalSum = baseListViewManager->fields.selectSum;
}


void __fastcall WarehouseListManager__SortItem(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  ListViewManager__SortItem(baseListViewManager, -1, 0, -1, 0LL);
}


void __fastcall WarehouseListManager__UpdateItemState(
        WarehouseListManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B170D4();
  WarehouseListViewManager__UpdateItemState(baseListViewManager, isPushMode, method);
}


void __fastcall WarehouseListManager__UpdateSelectDoneLabel(WarehouseListManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t totalSum; // w8
  struct UILabel_o *selectDoneLabel; // x0
  int32_t mWidth; // w1
  const MethodInfo *v9; // x3
  UILabel_o *v10; // x20
  System_String_o **v11; // x8
  System_String_o *v12; // x21
  System_String_o *v13; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FA96F & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_12414/*"SUM_OVER_INFO"*/, v4);
    sub_B16FFC(&StringLiteral_12413/*"SUM_INFO"*/, v5);
    byte_40FA96F = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  totalSum = this->fields.totalSum;
  if ( totalSum >= 100 )
  {
    if ( this->fields.sendMax > 9 )
    {
LABEL_6:
      selectDoneLabel = this->fields.selectDoneLabel;
      if ( !selectDoneLabel )
        goto LABEL_19;
      mWidth = 75;
      goto LABEL_11;
    }
  }
  else if ( totalSum >= 10 && this->fields.sendMax >= 100 )
  {
    goto LABEL_6;
  }
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !selectDoneLabel )
    goto LABEL_19;
  mWidth = selectDoneLabel->fields.mWidth;
LABEL_11:
  UILabel__SetCondensedScale(selectDoneLabel, mWidth, 0LL);
  WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v9);
  v10 = this->fields.selectDoneLabel;
  if ( this->fields.totalSum - friendShipSum[0] <= this->fields.sendMax )
    v11 = (System_String_o **)&StringLiteral_12413/*"SUM_INFO"*/;
  else
    v11 = (System_String_o **)&StringLiteral_12414/*"SUM_OVER_INFO"*/;
  v12 = *v11;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  v18 = this->fields.totalSum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  sendMax = this->fields.sendMax;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
  v16 = System_String__Format_43739268(v13, v14, v15, 0LL);
  if ( !v10 )
LABEL_19:
    sub_B170D4();
  UILabel__set_text(v10, v16, 0LL);
}


void __fastcall WarehouseListManager__add_callbackFunc(
        WarehouseListManager_o *this,
        WarehouseListManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WarehouseListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListManager_o *v11; // x0
  WarehouseListManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FA96B & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, value);
    byte_40FA96B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WarehouseListManager_CallbackFunc_c *)v8->klass != WarehouseListManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListManager_o *)sub_B173C8(v8);
  WarehouseListManager__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall WarehouseListManager__get_DeficientNumber(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.totalSum - this->fields.sendMax;
}


bool __fastcall WarehouseListManager__get_IsOver(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.totalSum > this->fields.sendMax;
}


int32_t __fastcall WarehouseListManager__get_OverSum(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.sendSum + this->fields.totalSum;
}


int32_t __fastcall WarehouseListManager__get_SendKeep(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.sendKeep;
}


int32_t __fastcall WarehouseListManager__get_SendMax(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.sendMax;
}


int32_t __fastcall WarehouseListManager__get_TotalSum(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.totalSum;
}


void __fastcall WarehouseListManager__remove_callbackFunc(
        WarehouseListManager_o *this,
        WarehouseListManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WarehouseListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FA96C & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, value);
    byte_40FA96C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WarehouseListManager_CallbackFunc_c *)v8->klass != WarehouseListManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListManager_o *)sub_B173C8(v8);
  WarehouseListManager__SetServant(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager_CallbackFunc___ctor(
        WarehouseListManager_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall WarehouseListManager_CallbackFunc__BeginInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int64_array *list,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = kind;
  v14 = n;
  if ( (byte_40F7892 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&WarehouseListManager_ResultKind_TypeInfo, v11);
    byte_40F7892 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(WarehouseListManager_ResultKind_TypeInfo, &v15);
  v13[1] = (__int64)list;
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v13, callback, object);
}


void __fastcall WarehouseListManager_CallbackFunc__EndInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager_CallbackFunc__Invoke(
        WarehouseListManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int64_array *list,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  WarehouseListManager_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD); // x0
  WarehouseListManager_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, System_Int64_array *, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  WarehouseListManager_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = kind;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (WarehouseListManager_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, System_Int64_array *, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&kind, list);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, list, (unsigned int)n, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, list, (unsigned int)n, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, v28, list, (unsigned int)n, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD))v18)(
            v23,
            v15,
            list,
            (unsigned int)n,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD))(*v23
                                                                                          + 16LL
                                                                                          * *(unsigned __int16 *)(v24 + 72)
                                                                                          + 312))(
            v23,
            v34,
            list,
            (unsigned int)n,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, System_Int64_array *, _QWORD, __int64))v25)(
      v23,
      v34,
      list,
      (unsigned int)n,
      v24);
    goto LABEL_38;
  }
}