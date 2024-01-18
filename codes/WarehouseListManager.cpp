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
  __int64 v15; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserServantStorageMaster_o *v17; // x23
  int32_t *p_sendServantSum; // x23
  int32_t *p_sendEquipSumNF; // x2
  int32_t v20; // w9
  int32_t baseEquipSum; // w8
  int32_t sendEquipSumNF; // w10
  int32_t v23; // w11
  int32_t sendServantKeep; // w11
  bool v25; // vf
  int v26; // w10
  int v27; // w11
  int32_t v28; // w9
  int32_t *p_sendMax; // x22
  int32_t baseServantSum; // w24
  BalanceConfig_c *v31; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UILabel_o *servantTabLabel; // x22
  System_String_o *v34; // x23
  Il2CppObject *v35; // x24
  Il2CppObject *v36; // x0
  UILabel_o *servantEquipTabLabel; // x22
  System_String_o *v38; // x23
  Il2CppObject *v39; // x24
  Il2CppObject *v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1
  int32_t baseEquipKeep; // [xsp+0h] [xbp-50h] BYREF
  int32_t baseEquipSumNF; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t baseServantKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418894B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v12);
    byte_418894B = 1;
  }
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  v17 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
      if ( v17 )
      {
        UserServantStorageMaster__getCount(v17, &this->fields.baseServantSum, &this->fields.baseEquipSum, 0, 0LL);
        Instance = (DataManager_o *)UserServantStorageMaster__getCount(
                                      v17,
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
    sub_B2C434(Instance, v15);
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
  if ( !v17 )
    goto LABEL_52;
  UserServantStorageMaster__getCount(v17, &this->fields.sendServantSum, &this->fields.sendEquipSum, 0, 0LL);
  Instance = (DataManager_o *)UserServantStorageMaster__getCount(
                                v17,
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
  v20 = this->fields.kind;
  baseEquipSum = this->fields.baseEquipSum;
  sendEquipSumNF = this->fields.sendEquipSumNF;
  v23 = this->fields.sendEquipSum - sendEquipSumNF;
  this->fields.baseSvtEqFriendShipNum = baseEquipSum - this->fields.baseEquipSumNF;
  this->fields.sendSvtEqFriendShipNum = v23;
  if ( (v20 | 2) == 2 )
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
  v25 = __OFSUB__(sendServantKeep, sendEquipSumNF);
  v26 = sendServantKeep - sendEquipSumNF;
  v27 = v20 | 2;
  if ( (v26 < 0) ^ v25 | (v26 == 0) )
    v28 = 0;
  else
    v28 = v26;
  this->fields.sendSpace = v28;
  if ( v27 == 2 )
  {
    p_sendMax = &this->fields.sendMax;
    if ( this->fields.baseServantSum >= v28 )
      baseServantSum = v28;
    else
      baseServantSum = this->fields.baseServantSum;
    this->fields.sendMax = baseServantSum;
  }
  else
  {
    if ( baseEquipSum >= v28 )
      baseServantSum = v28;
    else
      baseServantSum = baseEquipSum;
    this->fields.sendMax = baseServantSum;
    p_sendMax = &this->fields.sendMax;
  }
  v31 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  static_fields = v31->static_fields;
  if ( baseServantSum > static_fields->ServantWarehouseSelectMax )
  {
    p_sendMax = &static_fields->ServantWarehouseSelectMax;
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
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
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  v46 = this->fields.baseServantSum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  baseServantKeep = this->fields.baseServantKeep;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantKeep);
  Instance = (DataManager_o *)System_String__Format_44301068(v34, v35, v36, 0LL);
  if ( !servantTabLabel )
    goto LABEL_52;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  baseEquipSumNF = this->fields.baseEquipSumNF;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipSumNF);
  baseEquipKeep = this->fields.baseEquipKeep;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipKeep);
  Instance = (DataManager_o *)System_String__Format_44301068(v38, v39, v40, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_52;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_52;
  WarehouseListViewManager__CreateList((WarehouseListViewManager_o *)Instance, kind, setupInfo, v41);
  Instance = (DataManager_o *)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_52;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    Instance->klass[1]._1.byval_arg.data);
  WarehouseListManager__RefrashListDisp(this, v42);
}


void __fastcall WarehouseListManager__DestroyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0
  WarehouseListViewManager_o *v3; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, isDecide);
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
    sub_B2C434(0LL, state);
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
    sub_B2C434(0LL, svtId);
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
    sub_B2C434(0LL, index);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, normalSum);
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
    sub_B2C434(0LL, choiceList);
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
    sub_B2C434(0LL, lockList);
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
    sub_B2C434(0LL, userSvtId);
  WarehouseListViewManager__ModifyItem(baseListViewManager, userSvtId, method);
}


void __fastcall WarehouseListManager__ModifyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, selectNum);
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
  System_Collections_Generic_List_long__o *v12; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int64_array *v16; // x2

  if ( (byte_418894F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v10);
    byte_418894F = 1;
  }
  if ( this->fields.totalSum >= 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
      v12 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v12,
        (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
      baseListViewManager = this->fields.baseListViewManager;
      if ( !baseListViewManager || (WarehouseListViewManager__GetSelectList(baseListViewManager, v12, v14), !v12) )
        sub_B2C434(baseListViewManager, v13);
      v16 = System_Collections_Generic_List_long___ToArray(
              v12,
              (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
      WarehouseListManager_CallbackFunc__Invoke(callbackFunc, 1, v16, -1, 0LL);
    }
  }
}


void __fastcall WarehouseListManager__OnClickFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B2C434(0LL, method);
  WarehouseListViewManager__OnClickFilterKind(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4188950 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188950 = 1;
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
    sub_B2C434(0LL, method);
  WarehouseListViewManager__ChangeIconScale(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortAscendingOrder(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B2C434(0LL, method);
  WarehouseListViewManager__OnClickSortAscendingOrder(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B2C434(0LL, method);
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
  System_Collections_Generic_List_long__o *v20; // x20
  System_Int64_array *v21; // x0
  int32_t v22; // w1
  int32_t index; // w3
  BattleServantConfConponent_o *v24; // x20
  struct WarehouseListManager_CallbackFunc_o *v25; // t1
  System_Collections_Generic_List_long__o *v26; // x20

  if ( (byte_4188951 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&resultKind);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B2C35C(&SoundManager_TypeInfo, v14);
    byte_4188951 = 1;
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
        sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)item, (System_String_array **)method, v4, v5, v6, v7);
        v20 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v20,
          (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item
          || (UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                          item,
                                                          *(const MethodInfo **)&resultKind),
              !v20) )
        {
LABEL_28:
          sub_B2C434(UserSvtId, *(_QWORD *)&resultKind);
        }
        System_Collections_Generic_List_long___Add(
          v20,
          (int64_t)UserSvtId,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        v21 = System_Collections_Generic_List_long___ToArray(
                v20,
                (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        v22 = 2;
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
        v25 = this->fields.callbackFunc;
        v24 = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
        v18 = v25;
        if ( !v25 )
          return;
        v24->klass = 0LL;
        sub_B2C2F8(v24, 0LL, (System_String_array **)item, (System_String_array **)method, v4, v5, v6, v7);
        v26 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v26,
          (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item )
          goto LABEL_28;
        UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                    item,
                                                    *(const MethodInfo **)&resultKind);
        if ( !v26 )
          goto LABEL_28;
        System_Collections_Generic_List_long___Add(
          v26,
          (int64_t)UserSvtId,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        v21 = System_Collections_Generic_List_long___ToArray(
                v26,
                (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        index = item->fields.index;
        v22 = 3;
        break;
      default:
        return;
    }
LABEL_24:
    WarehouseListManager_CallbackFunc__Invoke(v18, v22, v21, index, 0LL);
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

  if ( (byte_418894C & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_12470/*"SUM_OVER_INFO"*/, v4);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v5);
    byte_418894C = 1;
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
  v16 = (System_String_o **)&StringLiteral_12470/*"SUM_OVER_INFO"*/;
  if ( !v13 )
    v16 = (System_String_o **)&StringLiteral_12469/*"SUM_INFO"*/;
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
  allReleaseButton = System_String__Format_44301068(v18, v19, v20, 0LL);
  if ( !sendDataLabel )
LABEL_22:
    sub_B2C434(allReleaseButton, method);
  UILabel__set_text(sendDataLabel, allReleaseButton, 0LL);
}


void __fastcall WarehouseListManager__ReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = this->fields.baseListViewManager;
  this->fields.totalSum = 0;
  if ( !baseListViewManager )
    sub_B2C434(0LL, method);
  WarehouseListViewManager__ReleaseAll(baseListViewManager, method);
  WarehouseListManager__RefrashListDisp(this, v4);
}


void __fastcall WarehouseListManager__SaveSortInfo(WarehouseListManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.baseListViewManager )
    sub_B2C434(this, method);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListManager__SetMode_26852712(this, mode, v10);
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
void __fastcall WarehouseListManager__SetMode_26852712(
        WarehouseListManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct WarehouseListViewManager_o *baseListViewManager; // x20
  WarehouseListViewManager_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_418894E & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_WarehouseListManager_OnSelectServant__, v5);
    byte_418894E = 1;
  }
  baseListViewManager = this->fields.baseListViewManager;
  v7 = (WarehouseListViewManager_CallbackFunc_o *)sub_B2C42C(WarehouseListViewManager_CallbackFunc_TypeInfo);
  WarehouseListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_WarehouseListManager_OnSelectServant__,
    0LL);
  if ( !baseListViewManager )
    sub_B2C434(v8, v9);
  baseListViewManager->fields.callbackFunc = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&baseListViewManager->fields.callbackFunc,
    (System_Int32_array **)v7,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  WarehouseListViewManager__SetMode_26891744(baseListViewManager, mode, v16);
}


void __fastcall WarehouseListManager__SetServant(WarehouseListManager_o *this, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x8

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B2C434(this, method);
  this->fields.totalSum = baseListViewManager->fields.selectSum;
}


void __fastcall WarehouseListManager__SortItem(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, isPushMode);
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

  if ( (byte_418894D & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_12470/*"SUM_OVER_INFO"*/, v4);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v5);
    byte_418894D = 1;
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
    v11 = (System_String_o **)&StringLiteral_12469/*"SUM_INFO"*/;
  else
    v11 = (System_String_o **)&StringLiteral_12470/*"SUM_OVER_INFO"*/;
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
  selectDoneLabel = (UILabel_o *)System_String__Format_44301068(v13, v14, v15, 0LL);
  if ( !v10 )
LABEL_19:
    sub_B2C434(selectDoneLabel, method);
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

  if ( (byte_4188949 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, value);
    byte_4188949 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListManager_o *)sub_B2C728(v8);
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

  if ( (byte_418894A & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, value);
    byte_418894A = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListManager_o *)sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185558 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&WarehouseListManager_ResultKind_TypeInfo, v11);
    byte_4185558 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(WarehouseListManager_ResultKind_TypeInfo, &v15);
  v13[1] = (__int64)list;
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B2C300(this, v13, callback, object);
}


void __fastcall WarehouseListManager_CallbackFunc__EndInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD); // x0
  WarehouseListManager_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, System_Int64_array *, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  WarehouseListManager_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = kind;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
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
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, System_Int64_array *, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&kind, list, *(_QWORD *)&n);
      if ( (sub_B2C38C(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, list, (unsigned int)n, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, list, (unsigned int)n, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD))sub_B2C40C(v20, v25);
        (*v22)(v24, v30, list, (unsigned int)n, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AC5258(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD))v19)(
            v24,
            v16,
            list,
            (unsigned int)n,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD))(*v24
                                                                                          + 16LL
                                                                                          * *(unsigned __int16 *)(v25 + 72)
                                                                                          + 312))(
            v24,
            v36,
            list,
            (unsigned int)n,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, System_Int64_array *, _QWORD, __int64))v26)(
      v24,
      v36,
      list,
      (unsigned int)n,
      v25);
    goto LABEL_38;
  }
}