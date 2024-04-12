void __fastcall WarehouseListManager___ctor(WarehouseListManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarehouseListManager__CreateList(
        WarehouseListManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x24
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserServantStorageMaster_o *v11; // x23
  int32_t *p_sendServantSum; // x23
  int32_t *p_sendEquipSumNF; // x2
  int32_t v14; // w9
  int32_t baseEquipSum; // w8
  int32_t sendEquipSumNF; // w10
  int32_t v17; // w11
  int32_t sendServantKeep; // w11
  bool v19; // vf
  int v20; // w10
  int v21; // w11
  int32_t v22; // w9
  int32_t *p_sendMax; // x22
  int32_t baseServantSum; // w24
  BalanceConfig_c *v25; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UILabel_o *servantTabLabel; // x22
  System_String_o *v28; // x23
  Il2CppObject *v29; // x24
  Il2CppObject *v30; // x0
  UILabel_o *servantEquipTabLabel; // x22
  System_String_o *v32; // x23
  Il2CppObject *v33; // x24
  Il2CppObject *v34; // x0
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x1
  int32_t baseEquipKeep; // [xsp+0h] [xbp-50h] BYREF
  int32_t baseEquipSumNF; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t baseServantKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42B0C48 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42B0C48 = 1;
  }
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  v11 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
      if ( v11 )
      {
        UserServantStorageMaster__getCount(v11, &this->fields.baseServantSum, &this->fields.baseEquipSum, 0, 0LL);
        Instance = (DataManager_o *)UserServantStorageMaster__getCount(
                                      v11,
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
    sub_B52A5C(Instance, v9);
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
  if ( !v11 )
    goto LABEL_52;
  UserServantStorageMaster__getCount(v11, &this->fields.sendServantSum, &this->fields.sendEquipSum, 0, 0LL);
  Instance = (DataManager_o *)UserServantStorageMaster__getCount(
                                v11,
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
  v14 = this->fields.kind;
  baseEquipSum = this->fields.baseEquipSum;
  sendEquipSumNF = this->fields.sendEquipSumNF;
  v17 = this->fields.sendEquipSum - sendEquipSumNF;
  this->fields.baseSvtEqFriendShipNum = baseEquipSum - this->fields.baseEquipSumNF;
  this->fields.sendSvtEqFriendShipNum = v17;
  if ( (v14 | 2) == 2 )
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
  v19 = __OFSUB__(sendServantKeep, sendEquipSumNF);
  v20 = sendServantKeep - sendEquipSumNF;
  v21 = v14 | 2;
  if ( (v20 < 0) ^ v19 | (v20 == 0) )
    v22 = 0;
  else
    v22 = v20;
  this->fields.sendSpace = v22;
  if ( v21 == 2 )
  {
    p_sendMax = &this->fields.sendMax;
    if ( this->fields.baseServantSum >= v22 )
      baseServantSum = v22;
    else
      baseServantSum = this->fields.baseServantSum;
    this->fields.sendMax = baseServantSum;
  }
  else
  {
    if ( baseEquipSum >= v22 )
      baseServantSum = v22;
    else
      baseServantSum = baseEquipSum;
    this->fields.sendMax = baseServantSum;
    p_sendMax = &this->fields.sendMax;
  }
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  static_fields = v25->static_fields;
  if ( baseServantSum > static_fields->ServantWarehouseSelectMax )
  {
    p_sendMax = &static_fields->ServantWarehouseSelectMax;
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
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
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
  v40 = this->fields.baseServantSum;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  baseServantKeep = this->fields.baseServantKeep;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantKeep);
  Instance = (DataManager_o *)System_String__Format_44563852(v28, v29, v30, 0LL);
  if ( !servantTabLabel )
    goto LABEL_52;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
  baseEquipSumNF = this->fields.baseEquipSumNF;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipSumNF);
  baseEquipKeep = this->fields.baseEquipKeep;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipKeep);
  Instance = (DataManager_o *)System_String__Format_44563852(v32, v33, v34, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_52;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_52;
  WarehouseListViewManager__CreateList((WarehouseListViewManager_o *)Instance, kind, setupInfo, v35);
  Instance = (DataManager_o *)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_52;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    Instance->klass[1]._1.byval_arg.data);
  WarehouseListManager__RefrashListDisp(this, v36);
}


void __fastcall WarehouseListManager__DestroyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0
  WarehouseListViewManager_o *v3; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, isDecide);
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
    sub_B52A5C(0LL, state);
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
    sub_B52A5C(0LL, svtId);
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
    sub_B52A5C(0LL, index);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, normalSum);
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
    sub_B52A5C(0LL, choiceList);
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
    sub_B52A5C(0LL, lockList);
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
    sub_B52A5C(0LL, userSvtId);
  WarehouseListViewManager__ModifyItem(baseListViewManager, userSvtId, method);
}


void __fastcall WarehouseListManager__ModifyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, selectNum);
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
  WarehouseListManager_CallbackFunc_o *callbackFunc; // x19
  System_Collections_Generic_List_long__o *v10; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int64_array *v14; // x2

  if ( (byte_42B0C4C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    byte_42B0C4C = 1;
  }
  if ( this->fields.totalSum >= 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
      v10 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v10,
        (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
      baseListViewManager = this->fields.baseListViewManager;
      if ( !baseListViewManager || (WarehouseListViewManager__GetSelectList(baseListViewManager, v10, v12), !v10) )
        sub_B52A5C(baseListViewManager, v11);
      v14 = System_Collections_Generic_List_long___ToArray(
              v10,
              (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
      WarehouseListManager_CallbackFunc__Invoke(callbackFunc, 1, v14, -1, 0LL);
    }
  }
}


void __fastcall WarehouseListManager__OnClickFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B52A5C(0LL, method);
  WarehouseListViewManager__OnClickFilterKind(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42B0C4D & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0C4D = 1;
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
    sub_B52A5C(0LL, method);
  WarehouseListViewManager__ChangeIconScale(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortAscendingOrder(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B52A5C(0LL, method);
  WarehouseListViewManager__OnClickSortAscendingOrder(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B52A5C(0LL, method);
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
  WarehouseListViewManager_o *UserSvtId; // x0
  int32_t modeKind; // w8
  BattleServantConfConponent_o *p_callbackFunc; // x20
  WarehouseListManager_CallbackFunc_o *v14; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  System_Collections_Generic_List_long__o *v16; // x20
  System_Int64_array *v17; // x0
  int32_t v18; // w1
  int32_t index; // w3
  BattleServantConfConponent_o *v20; // x20
  struct WarehouseListManager_CallbackFunc_o *v21; // t1
  System_Collections_Generic_List_long__o *v22; // x20

  if ( (byte_42B0C4E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0C4E = 1;
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
      v14 = callbackFunc;
      if ( callbackFunc )
      {
        p_callbackFunc->klass = 0LL;
        sub_B52920(p_callbackFunc, 0LL, (System_String_array **)item, (System_String_array **)method, v4, v5, v6, v7);
        v16 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v16,
          (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item
          || (UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                          item,
                                                          *(const MethodInfo **)&resultKind),
              !v16) )
        {
LABEL_28:
          sub_B52A5C(UserSvtId, *(_QWORD *)&resultKind);
        }
        System_Collections_Generic_List_long___Add(
          v16,
          (int64_t)UserSvtId,
          (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
        v17 = System_Collections_Generic_List_long___ToArray(
                v16,
                (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
        v18 = 2;
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
        v21 = this->fields.callbackFunc;
        v20 = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
        v14 = v21;
        if ( !v21 )
          return;
        v20->klass = 0LL;
        sub_B52920(v20, 0LL, (System_String_array **)item, (System_String_array **)method, v4, v5, v6, v7);
        v22 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v22,
          (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item )
          goto LABEL_28;
        UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                    item,
                                                    *(const MethodInfo **)&resultKind);
        if ( !v22 )
          goto LABEL_28;
        System_Collections_Generic_List_long___Add(
          v22,
          (int64_t)UserSvtId,
          (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
        v17 = System_Collections_Generic_List_long___ToArray(
                v22,
                (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
        index = item->fields.index;
        v18 = 3;
        break;
      default:
        return;
    }
LABEL_24:
    WarehouseListManager_CallbackFunc__Invoke(v14, v18, v17, index, 0LL);
  }
}


void __fastcall WarehouseListManager__RefrashListDisp(WarehouseListManager_o *this, const MethodInfo *method)
{
  System_String_o *allReleaseButton; // x0
  unsigned int v4; // w20
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  int32_t totalSum; // w8
  int32_t sendSpace; // w10
  int v9; // w8
  _BOOL4 v10; // w21
  const MethodInfo *v11; // x1
  UILabel_o *sendDataLabel; // x20
  System_String_o **v13; // x8
  System_String_o *v14; // x21
  System_String_o *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  int32_t sendKeep; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42B0C49 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12559/*"SUM_OVER_INFO"*/);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42B0C49 = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  allReleaseButton = (System_String_o *)this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  v4 = 3;
  v5 = this->fields.totalSum <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    allReleaseButton,
    v5,
    1LL,
    allReleaseButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  totalSum = this->fields.totalSum;
  if ( totalSum < 1 )
  {
    v10 = 0;
  }
  else if ( totalSum <= this->fields.sendSpace )
  {
    v10 = 0;
    v4 = 0;
  }
  else
  {
    WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v6);
    sendSpace = this->fields.sendSpace;
    v9 = this->fields.totalSum - friendShipSum[0];
    v10 = v9 > sendSpace;
    v4 = v9 <= sendSpace ? 0 : 3;
  }
  allReleaseButton = (System_String_o *)this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  ((void (__fastcall *)(System_String_o *, _QWORD, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    allReleaseButton,
    v4,
    1LL,
    allReleaseButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  WarehouseListManager__UpdateSelectDoneLabel(this, v11);
  sendDataLabel = this->fields.sendDataLabel;
  v13 = (System_String_o **)&StringLiteral_12559/*"SUM_OVER_INFO"*/;
  if ( !v10 )
    v13 = (System_String_o **)&StringLiteral_12558/*"SUM_INFO"*/;
  v14 = *v13;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get(v14, 0LL);
  v19 = this->fields.sendSpace;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  sendKeep = this->fields.sendKeep;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendKeep);
  allReleaseButton = System_String__Format_44563852(v15, v16, v17, 0LL);
  if ( !sendDataLabel )
LABEL_22:
    sub_B52A5C(allReleaseButton, method);
  UILabel__set_text(sendDataLabel, allReleaseButton, 0LL);
}


void __fastcall WarehouseListManager__ReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = this->fields.baseListViewManager;
  this->fields.totalSum = 0;
  if ( !baseListViewManager )
    sub_B52A5C(0LL, method);
  WarehouseListViewManager__ReleaseAll(baseListViewManager, method);
  WarehouseListManager__RefrashListDisp(this, v4);
}


void __fastcall WarehouseListManager__SaveSortInfo(WarehouseListManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.baseListViewManager )
    sub_B52A5C(this, method);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListManager__SetMode_26421712(this, mode, v10);
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


void __fastcall WarehouseListManager__SetMode_26421712(
        WarehouseListManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x20
  WarehouseListViewManager_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_42B0C4B & 1) == 0 )
  {
    sub_B52984(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_WarehouseListManager_OnSelectServant__);
    byte_42B0C4B = 1;
  }
  baseListViewManager = this->fields.baseListViewManager;
  v6 = (WarehouseListViewManager_CallbackFunc_o *)sub_B52A54(WarehouseListViewManager_CallbackFunc_TypeInfo);
  WarehouseListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_WarehouseListManager_OnSelectServant__,
    0LL);
  if ( !baseListViewManager )
    sub_B52A5C(v7, v8);
  baseListViewManager->fields.callbackFunc = v6;
  sub_B52920(
    (BattleServantConfConponent_o *)&baseListViewManager->fields.callbackFunc,
    (System_Int32_array **)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListViewManager__SetMode_26461152(baseListViewManager, mode, v15);
}


void __fastcall WarehouseListManager__SetServant(WarehouseListManager_o *this, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x8

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B52A5C(this, method);
  this->fields.totalSum = baseListViewManager->fields.selectSum;
}


void __fastcall WarehouseListManager__SortItem(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, isPushMode);
  WarehouseListViewManager__UpdateItemState(baseListViewManager, isPushMode, method);
}


void __fastcall WarehouseListManager__UpdateSelectDoneLabel(WarehouseListManager_o *this, const MethodInfo *method)
{
  int32_t totalSum; // w8
  UILabel_o *selectDoneLabel; // x0
  int32_t mWidth; // w1
  const MethodInfo *v6; // x3
  UILabel_o *v7; // x20
  System_String_o **v8; // x8
  System_String_o *v9; // x21
  System_String_o *v10; // x21
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  int32_t sendMax; // [xsp+8h] [xbp-38h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42B0C4A & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12559/*"SUM_OVER_INFO"*/);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42B0C4A = 1;
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
  WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v6);
  v7 = this->fields.selectDoneLabel;
  if ( this->fields.totalSum - friendShipSum[0] <= this->fields.sendMax )
    v8 = (System_String_o **)&StringLiteral_12558/*"SUM_INFO"*/;
  else
    v8 = (System_String_o **)&StringLiteral_12559/*"SUM_OVER_INFO"*/;
  v9 = *v8;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get(v9, 0LL);
  v14 = this->fields.totalSum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  sendMax = this->fields.sendMax;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
  selectDoneLabel = (UILabel_o *)System_String__Format_44563852(v10, v11, v12, 0LL);
  if ( !v7 )
LABEL_19:
    sub_B52A5C(selectDoneLabel, method);
  UILabel__set_text(v7, (System_String_o *)selectDoneLabel, 0LL);
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

  if ( (byte_42B0C46 & 1) == 0 )
  {
    sub_B52984(&WarehouseListManager_CallbackFunc_TypeInfo);
    byte_42B0C46 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListManager_o *)sub_B52D50(v8);
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

  if ( (byte_42B0C47 & 1) == 0 )
  {
    sub_B52984(&WarehouseListManager_CallbackFunc_TypeInfo);
    byte_42B0C47 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListManager_o *)sub_B52D50(v8);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall WarehouseListManager_CallbackFunc__BeginInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int64_array *list,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+28h] [xbp-28h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-24h] BYREF

  v14 = kind;
  v13 = n;
  if ( (byte_42AD775 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&WarehouseListManager_ResultKind_TypeInfo);
    byte_42AD775 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(WarehouseListManager_ResultKind_TypeInfo, &v14);
  v12[1] = (__int64)list;
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B52928(this, v12, callback, object);
}


void __fastcall WarehouseListManager_CallbackFunc__EndInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&kind, list, *(_QWORD *)&n);
      if ( (sub_B529B4(v25) & 1) == 0 )
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
      v27 = sub_B529AC(v25);
      v28 = sub_B52DB0(v25);
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
            v21 = sub_AEB880(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, System_Int64_array *, _QWORD, _QWORD))sub_B52A34(v20, v25);
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
            v19 = sub_AEB880(v24, class_0, v12, v14);
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