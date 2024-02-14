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
  DataManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserServantStorageMaster_o *v16; // x23
  int32_t *p_sendServantSum; // x23
  int32_t *p_sendEquipSumNF; // x2
  int32_t v19; // w9
  int32_t baseEquipSum; // w8
  int32_t sendEquipSumNF; // w10
  int32_t v22; // w11
  int32_t sendServantKeep; // w11
  bool v24; // vf
  int v25; // w10
  int v26; // w11
  int32_t v27; // w9
  int32_t *p_sendMax; // x22
  int32_t baseServantSum; // w24
  BalanceConfig_c *v30; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UILabel_o *servantTabLabel; // x22
  System_String_o *v33; // x23
  Il2CppObject *v34; // x24
  Il2CppObject *v35; // x0
  UILabel_o *servantEquipTabLabel; // x22
  System_String_o *v37; // x23
  Il2CppObject *v38; // x24
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x1
  int32_t baseEquipKeep; // [xsp+0h] [xbp-50h] BYREF
  int32_t baseEquipSumNF; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t baseServantKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42156B6 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v12);
    byte_42156B6 = 1;
  }
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  v16 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (DataManager_o *)this->fields.allReleaseButton;
  this->fields.totalSum = 0;
  if ( !Instance )
    goto LABEL_52;
  ((void (__fastcall *)(DataManager_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
    Instance,
    3LL,
    0LL,
    Instance->klass[1]._1.interfaceOffsets);
  Instance = (DataManager_o *)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
                                Instance,
                                3LL,
                                0LL,
                                Instance->klass[1]._1.interfaceOffsets);
  if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( SelfUserGame )
    {
      this->fields.baseServantKeep = SelfUserGame->fields.svtStorageAdjust
                                   + LODWORD(Instance[1].fields.saveNameList[1].fields._items);
      this->fields.baseEquipKeep = SelfUserGame->fields.svtEquipStorageAdjust
                                 + HIDWORD(Instance[1].fields.saveNameList[1].fields._items);
      this->fields.sendServantKeep = SelfUserGame->fields.svtKeep;
      this->fields.sendEquipKeep = SelfUserGame->fields.svtEquipKeep;
      if ( v16 )
      {
        UserServantStorageMaster__getCount(v16, &this->fields.baseServantSum, &this->fields.baseEquipSum, 0, 0LL);
        Instance = (DataManager_o *)UserServantStorageMaster__getCount(
                                      v16,
                                      &this->fields.baseServantSum,
                                      &this->fields.baseEquipSumNF,
                                      1,
                                      0LL);
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
    sub_B0D97C(Instance);
  }
  if ( !SelfUserGame )
    goto LABEL_52;
  this->fields.baseServantKeep = SelfUserGame->fields.svtKeep;
  this->fields.baseEquipKeep = SelfUserGame->fields.svtEquipKeep;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  }
  this->fields.sendServantKeep = SelfUserGame->fields.svtStorageAdjust
                               + LODWORD(Instance[1].fields.saveNameList[1].fields._items);
  this->fields.sendEquipKeep = SelfUserGame->fields.svtEquipStorageAdjust
                             + HIDWORD(Instance[1].fields.saveNameList[1].fields._items);
  if ( !v16 )
    goto LABEL_52;
  UserServantStorageMaster__getCount(v16, &this->fields.sendServantSum, &this->fields.sendEquipSum, 0, 0LL);
  Instance = (DataManager_o *)UserServantStorageMaster__getCount(
                                v16,
                                &this->fields.sendServantSum,
                                &this->fields.sendEquipSumNF,
                                1,
                                0LL);
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
  v19 = this->fields.kind;
  baseEquipSum = this->fields.baseEquipSum;
  sendEquipSumNF = this->fields.sendEquipSumNF;
  v22 = this->fields.sendEquipSum - sendEquipSumNF;
  this->fields.baseSvtEqFriendShipNum = baseEquipSum - this->fields.baseEquipSumNF;
  this->fields.sendSvtEqFriendShipNum = v22;
  if ( (v19 | 2) == 2 )
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
  v24 = __OFSUB__(sendServantKeep, sendEquipSumNF);
  v25 = sendServantKeep - sendEquipSumNF;
  v26 = v19 | 2;
  if ( (v25 < 0) ^ v24 | (v25 == 0) )
    v27 = 0;
  else
    v27 = v25;
  this->fields.sendSpace = v27;
  if ( v26 == 2 )
  {
    p_sendMax = &this->fields.sendMax;
    if ( this->fields.baseServantSum >= v27 )
      baseServantSum = v27;
    else
      baseServantSum = this->fields.baseServantSum;
    this->fields.sendMax = baseServantSum;
  }
  else
  {
    if ( baseEquipSum >= v27 )
      baseServantSum = v27;
    else
      baseServantSum = baseEquipSum;
    this->fields.sendMax = baseServantSum;
    p_sendMax = &this->fields.sendMax;
  }
  v30 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  static_fields = v30->static_fields;
  if ( baseServantSum > static_fields->ServantWarehouseSelectMax )
  {
    p_sendMax = &static_fields->ServantWarehouseSelectMax;
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
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
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
  v45 = this->fields.baseServantSum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  baseServantKeep = this->fields.baseServantKeep;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantKeep);
  Instance = (DataManager_o *)System_String__Format_43845440(v33, v34, v35, 0LL);
  if ( !servantTabLabel )
    goto LABEL_52;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
  baseEquipSumNF = this->fields.baseEquipSumNF;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipSumNF);
  baseEquipKeep = this->fields.baseEquipKeep;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipKeep);
  Instance = (DataManager_o *)System_String__Format_43845440(v37, v38, v39, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_52;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_52;
  WarehouseListViewManager__CreateList((WarehouseListViewManager_o *)Instance, kind, setupInfo, v40);
  Instance = (DataManager_o *)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_52;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    Instance->klass[1]._1.byval_arg.data);
  WarehouseListManager__RefrashListDisp(this, v41);
}


void __fastcall WarehouseListManager__DestroyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0
  WarehouseListViewManager_o *v3; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  WarehouseListViewManager__ModifyItem(baseListViewManager, userSvtId, method);
}


void __fastcall WarehouseListManager__ModifyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  System_Collections_Generic_List_long__o *v14; // x21
  const MethodInfo *v15; // x2
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int64_array *v17; // x2

  if ( (byte_42156BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v10);
    byte_42156BA = 1;
  }
  if ( this->fields.totalSum >= 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
      v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v12,
                                                         v13);
      System_Collections_Generic_List_long____ctor(
        v14,
        (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
      baseListViewManager = this->fields.baseListViewManager;
      if ( !baseListViewManager || (WarehouseListViewManager__GetSelectList(baseListViewManager, v14, v15), !v14) )
        sub_B0D97C(baseListViewManager);
      v17 = System_Collections_Generic_List_long___ToArray(
              v14,
              (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
      WarehouseListManager_CallbackFunc__Invoke(callbackFunc, 1, v17, -1, 0LL);
    }
  }
}


void __fastcall WarehouseListManager__OnClickFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B0D97C(0LL);
  WarehouseListViewManager__OnClickFilterKind(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42156BB & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42156BB = 1;
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
    sub_B0D97C(0LL);
  WarehouseListViewManager__ChangeIconScale(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortAscendingOrder(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B0D97C(0LL);
  WarehouseListViewManager__OnClickSortAscendingOrder(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B0D97C(0LL);
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
  WarehouseListViewManager_o *UserSvtId; // x0
  int32_t modeKind; // w8
  BattleServantConfConponent_o *p_callbackFunc; // x20
  WarehouseListManager_CallbackFunc_o *v18; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_long__o *v22; // x20
  const MethodInfo *v23; // x1
  System_Int64_array *v24; // x0
  int32_t v25; // w1
  int32_t index; // w3
  BattleServantConfConponent_o *v27; // x20
  struct WarehouseListManager_CallbackFunc_o *v28; // t1
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_long__o *v31; // x20
  const MethodInfo *v32; // x1

  if ( (byte_42156BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&resultKind);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B0D8A4(&SoundManager_TypeInfo, v14);
    byte_42156BC = 1;
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
        sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)item, (System_String_array **)method, v4, v5, v6, v7);
        v22 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                           System_Collections_Generic_List_long__TypeInfo,
                                                           v20,
                                                           v21);
        System_Collections_Generic_List_long____ctor(
          v22,
          (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item || (UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(item, v23), !v22) )
LABEL_28:
          sub_B0D97C(UserSvtId);
        System_Collections_Generic_List_long___Add(
          v22,
          (int64_t)UserSvtId,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
        v24 = System_Collections_Generic_List_long___ToArray(
                v22,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        v25 = 2;
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
        UserSvtId = this->fields.baseListViewManager;
        if ( !UserSvtId )
          goto LABEL_28;
        WarehouseListViewManager__SelectListView(UserSvtId, item, (const MethodInfo *)item);
        return;
      case 1:
        UserSvtId = this->fields.baseListViewManager;
        if ( !UserSvtId )
          goto LABEL_28;
        WarehouseListViewManager__SelectListViewLock(UserSvtId, item, (const MethodInfo *)item);
        return;
      case 2:
        UserSvtId = this->fields.baseListViewManager;
        if ( !UserSvtId )
          goto LABEL_28;
        WarehouseListViewManager__SelectListViewChoice(UserSvtId, item, (const MethodInfo *)item);
        return;
      case 3:
        v28 = this->fields.callbackFunc;
        v27 = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
        v18 = v28;
        if ( !v28 )
          return;
        v27->klass = 0LL;
        sub_B0D840(v27, 0LL, (System_String_array **)item, (System_String_array **)method, v4, v5, v6, v7);
        v31 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                           System_Collections_Generic_List_long__TypeInfo,
                                                           v29,
                                                           v30);
        System_Collections_Generic_List_long____ctor(
          v31,
          (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item )
          goto LABEL_28;
        UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(item, v32);
        if ( !v31 )
          goto LABEL_28;
        System_Collections_Generic_List_long___Add(
          v31,
          (int64_t)UserSvtId,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
        v24 = System_Collections_Generic_List_long___ToArray(
                v31,
                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        index = item->fields.index;
        v25 = 3;
        break;
      default:
        return;
    }
LABEL_24:
    WarehouseListManager_CallbackFunc__Invoke(v18, v25, v24, index, 0LL);
  }
}


void __fastcall WarehouseListManager__RefrashListDisp(WarehouseListManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *allReleaseButton; // x0
  unsigned int v7; // w20
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int32_t totalSum; // w8
  int32_t sendSpace; // w10
  int v12; // w8
  _BOOL4 v13; // w21
  const MethodInfo *v14; // x1
  UILabel_o *sendDataLabel; // x20
  System_String_o **v16; // x8
  System_String_o *v17; // x21
  System_String_o *v18; // x21
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  int32_t sendKeep; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42156B7 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_12508/*"SUM_OVER_INFO"*/, v4);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v5);
    byte_42156B7 = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  allReleaseButton = (System_String_o *)this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  v7 = 3;
  v8 = this->fields.totalSum <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    allReleaseButton,
    v8,
    1LL,
    allReleaseButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
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
  allReleaseButton = (System_String_o *)this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  ((void (__fastcall *)(System_String_o *, _QWORD, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    allReleaseButton,
    v7,
    1LL,
    allReleaseButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  WarehouseListManager__UpdateSelectDoneLabel(this, v14);
  sendDataLabel = this->fields.sendDataLabel;
  v16 = (System_String_o **)&StringLiteral_12508/*"SUM_OVER_INFO"*/;
  if ( !v13 )
    v16 = (System_String_o **)&StringLiteral_12507/*"SUM_INFO"*/;
  v17 = *v16;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get(v17, 0LL);
  v22 = this->fields.sendSpace;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  sendKeep = this->fields.sendKeep;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendKeep);
  allReleaseButton = System_String__Format_43845440(v18, v19, v20, 0LL);
  if ( !sendDataLabel )
LABEL_22:
    sub_B0D97C(allReleaseButton);
  UILabel__set_text(sendDataLabel, allReleaseButton, 0LL);
}


void __fastcall WarehouseListManager__ReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = this->fields.baseListViewManager;
  this->fields.totalSum = 0;
  if ( !baseListViewManager )
    sub_B0D97C(0LL);
  WarehouseListViewManager__ReleaseAll(baseListViewManager, method);
  WarehouseListManager__RefrashListDisp(this, v4);
}


void __fastcall WarehouseListManager__SaveSortInfo(WarehouseListManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.baseListViewManager )
    sub_B0D97C(this);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListManager__SetMode_26298276(this, mode, v10);
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
void __fastcall WarehouseListManager__SetMode_26298276(
        WarehouseListManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct WarehouseListViewManager_o *baseListViewManager; // x20
  WarehouseListViewManager_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_42156B9 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_WarehouseListManager_OnSelectServant__, v5);
    byte_42156B9 = 1;
  }
  baseListViewManager = this->fields.baseListViewManager;
  v7 = (WarehouseListViewManager_CallbackFunc_o *)sub_B0D974(
                                                    WarehouseListViewManager_CallbackFunc_TypeInfo,
                                                    *(_QWORD *)&mode,
                                                    method);
  WarehouseListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_WarehouseListManager_OnSelectServant__,
    0LL);
  if ( !baseListViewManager )
    sub_B0D97C(v8);
  baseListViewManager->fields.callbackFunc = v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&baseListViewManager->fields.callbackFunc,
    (System_Int32_array **)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListViewManager__SetMode_26337716(baseListViewManager, mode, v15);
}


void __fastcall WarehouseListManager__SetServant(WarehouseListManager_o *this, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x8

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B0D97C(this);
  this->fields.totalSum = baseListViewManager->fields.selectSum;
}


void __fastcall WarehouseListManager__SortItem(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  WarehouseListViewManager__UpdateItemState(baseListViewManager, isPushMode, method);
}


void __fastcall WarehouseListManager__UpdateSelectDoneLabel(WarehouseListManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t totalSum; // w8
  UILabel_o *selectDoneLabel; // x0
  int32_t mWidth; // w1
  const MethodInfo *v9; // x3
  UILabel_o *v10; // x20
  System_String_o **v11; // x8
  System_String_o *v12; // x21
  System_String_o *v13; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42156B8 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_12508/*"SUM_OVER_INFO"*/, v4);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v5);
    byte_42156B8 = 1;
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
    v11 = (System_String_o **)&StringLiteral_12507/*"SUM_INFO"*/;
  else
    v11 = (System_String_o **)&StringLiteral_12508/*"SUM_OVER_INFO"*/;
  v12 = *v11;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  v17 = this->fields.totalSum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  sendMax = this->fields.sendMax;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
  selectDoneLabel = (UILabel_o *)System_String__Format_43845440(v13, v14, v15, 0LL);
  if ( !v10 )
LABEL_19:
    sub_B0D97C(selectDoneLabel);
  UILabel__set_text(v10, (System_String_o *)selectDoneLabel, 0LL);
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

  if ( (byte_42156B4 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, value);
    byte_42156B4 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListManager_o *)sub_B0DC70(v8);
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

  if ( (byte_42156B5 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, value);
    byte_42156B5 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListManager_o *)sub_B0DC70(v8);
  WarehouseListManager__SetServant(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager_CallbackFunc___ctor(
        WarehouseListManager_CallbackFunc_o *this,
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4211F2F & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&WarehouseListManager_ResultKind_TypeInfo, v11);
    byte_4211F2F = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(WarehouseListManager_ResultKind_TypeInfo, &v15);
  v13[1] = (__int64)list;
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B0D848(this, v13, callback, object);
}


void __fastcall WarehouseListManager_CallbackFunc__EndInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&kind, list, *(_QWORD *)&n);
      if ( (sub_B0D8D4(v24) & 1) == 0 )
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
      v26 = sub_B0D8CC(v24);
      v27 = sub_B0DCD0(v24);
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
            v20 = sub_AA67A0(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD))sub_B0D954(v19, v24);
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
            v18 = sub_AA67A0(v23, class_0, v12);
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