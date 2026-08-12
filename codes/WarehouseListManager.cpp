void WarehouseListManager___ctor(WarehouseListManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarehouseListManager__CreateList(
        WarehouseListManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32x2_t *SelfUserGame; // x24
  __int64 Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v11; // x23
  __int64 v12; // x2
  int32_t *p_sendServantSum; // x1
  int32_t *p_sendEquipSumNF; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t v17; // w9
  int32_t baseEquipSum; // w8
  int32_t sendEquipSumNF; // w10
  int32_t v20; // w12
  int32_t sendServantKeep; // w11
  bool v22; // vf
  int v23; // w11
  int v24; // w12
  int32_t v25; // w9
  BalanceConfig_c *v26; // x0
  int32_t v27; // w24
  int v28; // w10
  int32_t *p_sendMax; // x22
  struct BalanceConfig_StaticFields *static_fields; // x8
  LocalizationManager_c *v31; // x0
  int32_t v32; // w8
  int v33; // w9
  UILabel_o *servantTabLabel; // x22
  System_String_o *v35; // x23
  Il2CppObject *v36; // x24
  Il2CppObject *v37; // x0
  UILabel_o *servantEquipTabLabel; // x22
  System_String_o *v39; // x23
  Il2CppObject *v40; // x24
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x1
  int32_t baseEquipKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t baseEquipSumNF; // [xsp+Ch] [xbp-54h] BYREF
  int32_t baseServantKeep; // [xsp+18h] [xbp-48h] BYREF
  int32_t baseServantSum; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_596E4A4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596E4A4 = 1;
  }
  this->fields.kind = kind;
  SelfUserGame = (int32x2_t *)UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (__int64)this->fields.allReleaseButton;
  this->fields.totalSum = 0;
  if ( !Instance )
    goto LABEL_44;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    3,
    0,
    *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  Instance = (__int64)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_44;
  Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               3,
               0,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  if ( (this->fields.kind & 0xFFFFFFFE) == 2 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v12);
    if ( SelfUserGame )
    {
      *(int32x2_t *)&this->fields.baseServantKeep = vadd_s32(
                                                      SelfUserGame[21],
                                                      *(int32x2_t *)&BalanceConfig_TypeInfo->static_fields->UserServantStorageMax);
      *(int32x2_t *)&this->fields.sendServantKeep = SelfUserGame[20];
      if ( v11 )
      {
        UserServantStorageMaster__getCount(
          (UserServantStorageMaster_o *)v11,
          &this->fields.baseServantSum,
          &this->fields.baseEquipSum,
          0,
          0);
        Instance = UserServantStorageMaster__getCount(
                     (UserServantStorageMaster_o *)v11,
                     &this->fields.baseServantSum,
                     &this->fields.baseEquipSumNF,
                     1,
                     0);
        if ( MasterData_object )
        {
          UserServantMaster__getCount(
            (UserServantMaster_o *)MasterData_object,
            &this->fields.sendServantSum,
            &this->fields.sendEquipSum,
            0,
            0);
          p_sendServantSum = &this->fields.sendServantSum;
          p_sendEquipSumNF = &this->fields.sendEquipSumNF;
          goto LABEL_20;
        }
      }
    }
LABEL_44:
    sub_2213CDC(Instance, v9);
  }
  if ( !SelfUserGame )
    goto LABEL_44;
  Instance = (__int64)BalanceConfig_TypeInfo;
  *(int32x2_t *)&this->fields.baseServantKeep = SelfUserGame[20];
  if ( !*(_DWORD *)(Instance + 228) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v9, v12);
    Instance = (__int64)BalanceConfig_TypeInfo;
  }
  *(int32x2_t *)&this->fields.sendServantKeep = vadd_s32(
                                                  SelfUserGame[21],
                                                  *(int32x2_t *)(*(_QWORD *)(Instance + 184) + 68LL));
  if ( !v11 )
    goto LABEL_44;
  UserServantStorageMaster__getCount(
    (UserServantStorageMaster_o *)v11,
    &this->fields.sendServantSum,
    &this->fields.sendEquipSum,
    0,
    0);
  Instance = UserServantStorageMaster__getCount(
               (UserServantStorageMaster_o *)v11,
               &this->fields.sendServantSum,
               &this->fields.sendEquipSumNF,
               1,
               0);
  if ( !MasterData_object )
    goto LABEL_44;
  UserServantMaster__getCount(
    (UserServantMaster_o *)MasterData_object,
    &this->fields.baseServantSum,
    &this->fields.baseEquipSum,
    0,
    0);
  p_sendServantSum = &this->fields.baseServantSum;
  p_sendEquipSumNF = &this->fields.baseEquipSumNF;
LABEL_20:
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, p_sendServantSum, p_sendEquipSumNF, 1, 0);
  v17 = this->fields.kind;
  baseEquipSum = this->fields.baseEquipSum;
  sendEquipSumNF = this->fields.sendEquipSumNF;
  v20 = this->fields.sendEquipSum - sendEquipSumNF;
  this->fields.baseSvtEqFriendShipNum = baseEquipSum - this->fields.baseEquipSumNF;
  this->fields.sendSvtEqFriendShipNum = v20;
  if ( (v17 | 2) == 2 )
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
  v22 = __OFSUB__(sendServantKeep, sendEquipSumNF);
  v23 = sendServantKeep - sendEquipSumNF;
  v24 = v17 | 2;
  if ( (v23 < 0) ^ v22 | (v23 == 0) )
    v25 = 0;
  else
    v25 = v23;
  this->fields.sendSpace = v25;
  if ( v24 == 2 )
    baseEquipSum = this->fields.baseServantSum;
  v26 = BalanceConfig_TypeInfo;
  if ( baseEquipSum >= v25 )
    v27 = v25;
  else
    v27 = baseEquipSum;
  v28 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  this->fields.sendMax = v27;
  p_sendMax = &this->fields.sendMax;
  if ( !v28 )
  {
    j_il2cpp_runtime_class_init_0(v26, v15, v16);
    v26 = BalanceConfig_TypeInfo;
  }
  static_fields = v26->static_fields;
  if ( v27 > static_fields->ServantWarehouseSelectMax )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v15, v16);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_sendMax = &static_fields->ServantWarehouseSelectMax;
  }
  v31 = LocalizationManager_TypeInfo;
  v32 = *p_sendMax;
  v33 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  servantTabLabel = this->fields.servantTabLabel;
  this->fields.sendMax = v32;
  if ( !v33 )
    j_il2cpp_runtime_class_init_0(v31, v15, v16);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
  baseServantSum = this->fields.baseServantSum;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &baseServantSum);
  baseServantKeep = this->fields.baseServantKeep;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &baseServantKeep);
  Instance = (__int64)System_String__Format_75697880(v35, v36, v37, 0);
  if ( !servantTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
  baseEquipSumNF = this->fields.baseEquipSumNF;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &baseEquipSumNF);
  baseEquipKeep = this->fields.baseEquipKeep;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &baseEquipKeep);
  Instance = (__int64)System_String__Format_75697880(v39, v40, v41, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  WarehouseListViewManager__CreateList((WarehouseListViewManager_o *)Instance, kind, setupInfo, v42);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  WarehouseListManager__RefrashListDisp(this, v43);
}


void WarehouseListManager__DestroyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0
  WarehouseListViewManager_o *v3; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, method);
  ListViewManager__DestroyList(baseListViewManager, 0);
  WarehouseListViewManager__SaveSortInfo(v3, v4);
}


void WarehouseListManager__EndCloseSelectFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListManager__EndSelectFilterKind(WarehouseListManager_o *this, bool isDecide, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, isDecide);
  WarehouseListViewManager__EndSelectFilterKind(baseListViewManager, isDecide, method);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListManager__FilterButtonState(
        WarehouseListManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_2213CDC(0, *(_QWORD *)&state);
  ((void (__fastcall *)(struct UICommonButton_o *, int32_t, bool, const MethodInfo *))filterButton->klass->vtable._14_SetState.methodPtr)(
    filterButton,
    state,
    animation,
    filterButton->klass->vtable._14_SetState.method);
}


// local variable allocation has failed, the output may be wrong!
int64_t WarehouseListManager__GetAmountSortValue(WarehouseListManager_o *this, int32_t svtId, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  return WarehouseListViewManager__GetAmountSortValue(baseListViewManager, svtId, method);
}


// local variable allocation has failed, the output may be wrong!
WarehouseListViewItem_o *WarehouseListManager__GetItem(
        WarehouseListManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, *(_QWORD *)&index);
  return WarehouseListViewManager__GetItem(baseListViewManager, index, method);
}


int32_t WarehouseListManager__GetModeKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_String_o *WarehouseListManager__GetScaleButtonSpriteName(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, method);
  return WarehouseListViewManager__GetScaleButtonSpriteName(baseListViewManager, method);
}


void WarehouseListManager__GetSelectItemNum(
        WarehouseListManager_o *this,
        int32_t *normalSum,
        int32_t *friendShipSum,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  *normalSum = 0;
  *friendShipSum = 0;
  if ( !baseListViewManager )
    sub_2213CDC(0, normalSum);
  WarehouseListViewManager__GetSelectItemNum(baseListViewManager, normalSum, friendShipSum, method);
}


bool WarehouseListManager__GetSwapChoiceList(
        WarehouseListManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, choiceList);
  return WarehouseListViewManager__GetSwapChoiceList(baseListViewManager, choiceList, unchoiceList, method);
}


bool WarehouseListManager__GetSwapLockList(
        WarehouseListManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, lockList);
  return WarehouseListViewManager__GetSwapLockList(baseListViewManager, lockList, unlockList, method);
}


void WarehouseListManager__ModifyItem(WarehouseListManager_o *this, int64_t userSvtId, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, userSvtId);
  WarehouseListViewManager__ModifyItem(baseListViewManager, userSvtId, method);
}


void WarehouseListManager__ModifyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, method);
  WarehouseListViewManager__Modify(baseListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListManager__NumberAdjustment(WarehouseListManager_o *this, int32_t selectNum, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, *(_QWORD *)&selectNum);
  WarehouseListViewManager__DecrementNumber(baseListViewManager, selectNum, method);
}


void WarehouseListManager__OnClickDecide(WarehouseListManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // x21
  System_Collections_Generic_List_long__o *v10; // x20
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int64_array *v14; // x2

  if ( (byte_596E4A8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_596E4A8 = 1;
  }
  if ( this->fields.totalSum >= 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
      v10 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v10,
        (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
      baseListViewManager = this->fields.baseListViewManager;
      if ( !baseListViewManager || (WarehouseListViewManager__GetSelectList(baseListViewManager, v10, v12), !v10) )
        sub_2213CDC(baseListViewManager, v11);
      v14 = System_Collections_Generic_List_long___ToArray(
              v10,
              (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
      ((void (__fastcall *)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        1,
        v14,
        0xFFFFFFFFLL,
        callbackFunc->fields.method);
    }
  }
}


void WarehouseListManager__OnClickFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, method);
  WarehouseListViewManager__OnClickFilterKind(baseListViewManager, method);
}


void WarehouseListManager__OnClickReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_596E4A9 & 1) == 0 )
  {
    sub_2213A60(&Method_WarehouseListManager_OnClickReleaseAll__);
    byte_596E4A9 = 1;
  }
  v3 = Method_WarehouseListManager_OnClickReleaseAll__;
  if ( this->fields.totalSum < 1 )
  {
    if ( (*((_BYTE *)Method_WarehouseListManager_OnClickReleaseAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListManager_OnClickReleaseAll__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_WarehouseListManager_OnClickReleaseAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListManager_OnClickReleaseAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    WarehouseListManager__ReleaseAll(this, v5);
  }
}


void WarehouseListManager__OnClickScaleChange(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, method);
  WarehouseListViewManager__ChangeIconScale(baseListViewManager, method);
}


void WarehouseListManager__OnClickSortAscendingOrder(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, method);
  WarehouseListViewManager__OnClickSortAscendingOrder(baseListViewManager, method);
}


void WarehouseListManager__OnClickSortKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, method);
  WarehouseListViewManager__OnClickSortKind(baseListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListManager__OnSelectServant(
        WarehouseListManager_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v11; // w8
  WarehouseListViewManager_o *UserSvtId; // x0
  unsigned int modeKind; // w8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  MissionNaviTransitionBoardItem_o *v16; // x20
  struct WarehouseListManager_CallbackFunc_o *v17; // x21
  struct WarehouseListManager_CallbackFunc_o *v18; // t1
  System_Collections_Generic_List_long__o *v19; // x20
  struct System_Int64_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x20
  struct WarehouseListManager_CallbackFunc_o *v24; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  System_Collections_Generic_List_long__o *v26; // x20
  struct System_Int64_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  System_Int64_array *v30; // x2
  intptr_t method_code; // x0
  intptr_t v32; // x4
  void (__fastcall *invoke_impl)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t); // x5
  __int64 v34; // x1
  __int64 index; // x3

  if ( (byte_596E4AA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&Method_WarehouseListManager_OnSelectServant__);
    byte_596E4AA = 1;
  }
  if ( resultKind == 2 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind < 4 )
      {
        v14 = Method_WarehouseListManager_OnSelectServant__;
        if ( (*((_BYTE *)Method_WarehouseListManager_OnSelectServant__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_2213A78(Method_WarehouseListManager_OnSelectServant__);
        v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
      }
      return;
    }
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v24 = callbackFunc;
    if ( !callbackFunc )
      return;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)item, (System_String_o *)method, v4, v5, v6, v7);
    v26 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v26,
      (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( !item )
      goto LABEL_39;
    UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                item,
                                                *(const MethodInfo **)&resultKind);
    if ( !v26 )
      goto LABEL_39;
    items = v26->fields._items;
    v28 = Method_System_Collections_Generic_List_long__Add__;
    ++v26->fields._version;
    if ( !items )
      goto LABEL_39;
    size = v26->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v26,
        (int64_t)UserSvtId,
        *(const MethodInfo_446C29C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v26->fields._size = size + 1;
      items->m_Items[size] = (int64_t)UserSvtId;
    }
    v30 = System_Collections_Generic_List_long___ToArray(
            v26,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    method_code = v24->fields.method_code;
    v32 = v24->fields.method;
    invoke_impl = (void (__fastcall *)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t))v24->fields.invoke_impl;
    v34 = 2;
    index = 0xFFFFFFFFLL;
    goto LABEL_38;
  }
  if ( resultKind != 1 )
    return;
  v11 = this->fields.modeKind;
  if ( v11 > 1 )
  {
    if ( v11 == 2 )
    {
      UserSvtId = this->fields.baseListViewManager;
      if ( !UserSvtId )
        goto LABEL_39;
      WarehouseListViewManager__SelectListViewChoice(UserSvtId, item, (const MethodInfo *)item);
      return;
    }
    if ( v11 != 3 )
      return;
    v18 = this->fields.callbackFunc;
    v16 = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v17 = v18;
    if ( !v18 )
      return;
    v16->klass = 0;
    sub_2213A04(v16, 0, (System_String_o *)item, (System_String_o *)method, v4, v5, v6, v7);
    v19 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v19,
      (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( !item )
      goto LABEL_39;
    UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                item,
                                                *(const MethodInfo **)&resultKind);
    if ( !v19 )
      goto LABEL_39;
    v20 = v19->fields._items;
    v21 = Method_System_Collections_Generic_List_long__Add__;
    ++v19->fields._version;
    if ( !v20 )
      goto LABEL_39;
    v22 = v19->fields._size;
    if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v19,
        (int64_t)UserSvtId,
        *(const MethodInfo_446C29C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v19->fields._size = v22 + 1;
      v20->m_Items[v22] = (int64_t)UserSvtId;
    }
    v30 = System_Collections_Generic_List_long___ToArray(
            v19,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    method_code = v17->fields.method_code;
    index = (unsigned int)item->fields.index;
    v32 = v17->fields.method;
    invoke_impl = (void (__fastcall *)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t))v17->fields.invoke_impl;
    v34 = 3;
LABEL_38:
    invoke_impl(method_code, v34, v30, index, v32);
    return;
  }
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      UserSvtId = this->fields.baseListViewManager;
      if ( UserSvtId )
      {
        WarehouseListViewManager__SelectListViewLock(UserSvtId, item, (const MethodInfo *)item);
        return;
      }
LABEL_39:
      sub_2213CDC(UserSvtId, *(_QWORD *)&resultKind);
    }
  }
  else
  {
    UserSvtId = this->fields.baseListViewManager;
    if ( !UserSvtId )
      goto LABEL_39;
    WarehouseListViewManager__SelectListView(UserSvtId, item, (const MethodInfo *)item);
  }
}


void WarehouseListManager__RefrashListDisp(WarehouseListManager_o *this, const MethodInfo *method)
{
  System_String_o *allReleaseButton; // x0
  unsigned int v4; // w20
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  int32_t totalSum; // w8
  System_String_o **v8; // x21
  int32_t sendSpace; // w10
  int v10; // w8
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *sendDataLabel; // x20
  System_String_o *v15; // x21
  System_String_o *v16; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x0
  int32_t sendKeep; // [xsp+0h] [xbp-40h] BYREF
  int32_t v20; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596E4A5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_13006/*"SUM_OVER_INFO"*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596E4A5 = 1;
  }
  allReleaseButton = (System_String_o *)this->fields.allReleaseButton;
  *(_QWORD *)friendShipSum = 0;
  if ( !allReleaseButton )
    goto LABEL_22;
  v4 = 3;
  v5 = this->fields.totalSum <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *))allReleaseButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    allReleaseButton,
    v5,
    1,
    allReleaseButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  totalSum = this->fields.totalSum;
  if ( totalSum < 1 )
  {
    v8 = (System_String_o **)&StringLiteral_13005/*"SUM_INFO"*/;
  }
  else
  {
    v8 = (System_String_o **)&StringLiteral_13005/*"SUM_INFO"*/;
    if ( totalSum <= this->fields.sendSpace )
    {
      v4 = 0;
    }
    else
    {
      WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v6);
      sendSpace = this->fields.sendSpace;
      v10 = this->fields.totalSum - friendShipSum[0];
      if ( v10 <= sendSpace )
        v4 = 0;
      else
        v4 = 3;
      if ( v10 > sendSpace )
        v8 = (System_String_o **)&StringLiteral_13006/*"SUM_OVER_INFO"*/;
    }
  }
  allReleaseButton = (System_String_o *)this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  ((void (__fastcall *)(System_String_o *, _QWORD, __int64, const MethodInfo *))allReleaseButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    allReleaseButton,
    v4,
    1,
    allReleaseButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  WarehouseListManager__UpdateSelectDoneLabel(this, v11);
  sendDataLabel = this->fields.sendDataLabel;
  v15 = *v8;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  v16 = LocalizationManager__Get(v15, 0);
  v20 = this->fields.sendSpace;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
  sendKeep = this->fields.sendKeep;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &sendKeep);
  allReleaseButton = System_String__Format_75697880(v16, v17, v18, 0);
  if ( !sendDataLabel )
LABEL_22:
    sub_2213CDC(allReleaseButton, method);
  UILabel__set_text(sendDataLabel, allReleaseButton, 0);
}


void WarehouseListManager__ReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = this->fields.baseListViewManager;
  this->fields.totalSum = 0;
  if ( !baseListViewManager )
    sub_2213CDC(0, method);
  WarehouseListViewManager__ReleaseAll(baseListViewManager, method);
  WarehouseListManager__RefrashListDisp(this, v4);
}


void WarehouseListManager__SaveSortInfo(WarehouseListManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.baseListViewManager )
    sub_2213CDC(this, method);
  WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
}


void WarehouseListManager__SetMode(
        WarehouseListManager_o *this,
        int32_t mode,
        WarehouseListManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListManager__SetMode_45270940(this, mode, v10);
}


bool WarehouseListManager__SetModeKind(WarehouseListManager_o *this, int32_t modeKind, const MethodInfo *method)
{
  int32_t v3; // w8

  v3 = this->fields.modeKind;
  if ( v3 != modeKind )
    this->fields.modeKind = modeKind;
  return v3 != modeKind;
}


void WarehouseListManager__SetMode_45270940(WarehouseListManager_o *this, int32_t mode, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x21
  WarehouseListViewManager_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596E4A7 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListManager_OnSelectServant__);
    byte_596E4A7 = 1;
  }
  baseListViewManager = this->fields.baseListViewManager;
  v6 = (WarehouseListViewManager_CallbackFunc_o *)sub_2213CCC(WarehouseListViewManager_CallbackFunc_TypeInfo);
  WarehouseListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListManager_OnSelectServant__,
    0);
  if ( !baseListViewManager )
    sub_2213CDC(v7, v8);
  baseListViewManager->fields.callbackFunc = v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&baseListViewManager->fields.callbackFunc,
    (int32_t)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListViewManager__SetMode_45313256(baseListViewManager, mode, v15);
}


void WarehouseListManager__SetServant(WarehouseListManager_o *this, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x8

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(this, method);
  this->fields.totalSum = baseListViewManager->fields.selectSum;
}


void WarehouseListManager__SortItem(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, method);
  ListViewManager__SortItem(baseListViewManager, -1, 0, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListManager__UpdateItemState(WarehouseListManager_o *this, bool isPushMode, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_2213CDC(0, isPushMode);
  WarehouseListViewManager__UpdateItemState(baseListViewManager, isPushMode, method);
}


void WarehouseListManager__UpdateSelectDoneLabel(WarehouseListManager_o *this, const MethodInfo *method)
{
  int32_t totalSum; // w8
  UILabel_o *selectDoneLabel; // x0
  int32_t mWidth; // w1
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o **v9; // x8
  UILabel_o *v10; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  int32_t sendMax; // [xsp+0h] [xbp-40h] BYREF
  int32_t v16; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596E4A6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_13006/*"SUM_OVER_INFO"*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596E4A6 = 1;
  }
  totalSum = this->fields.totalSum;
  *(_QWORD *)friendShipSum = 0;
  if ( totalSum >= 100 )
  {
    if ( this->fields.sendMax > 9 )
    {
LABEL_6:
      selectDoneLabel = this->fields.selectDoneLabel;
      if ( !selectDoneLabel )
        goto LABEL_18;
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
    goto LABEL_18;
  mWidth = selectDoneLabel->fields.mWidth;
LABEL_11:
  UILabel__SetCondensedScale(selectDoneLabel, mWidth, 0, 0);
  WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v6);
  if ( this->fields.totalSum - friendShipSum[0] <= this->fields.sendMax )
    v9 = (System_String_o **)&StringLiteral_13005/*"SUM_INFO"*/;
  else
    v9 = (System_String_o **)&StringLiteral_13006/*"SUM_OVER_INFO"*/;
  v10 = this->fields.selectDoneLabel;
  v11 = *v9;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v12 = LocalizationManager__Get(v11, 0);
  v16 = this->fields.totalSum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
  sendMax = this->fields.sendMax;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &sendMax);
  selectDoneLabel = (UILabel_o *)System_String__Format_75697880(v12, v13, v14, 0);
  if ( !v10 )
LABEL_18:
    sub_2213CDC(selectDoneLabel, method);
  UILabel__set_text(v10, (System_String_o *)selectDoneLabel, 0);
}


void WarehouseListManager__add_callbackFunc(
        WarehouseListManager_o *this,
        WarehouseListManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WarehouseListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WarehouseListManager_o *v13; // x0
  WarehouseListManager_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596E4A2 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    byte_596E4A2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WarehouseListManager_CallbackFunc_c *)v8->klass != WarehouseListManager_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, WarehouseListManager_CallbackFunc_TypeInfo, v9, v10);
  WarehouseListManager__remove_callbackFunc(v13, v14, v15);
}


int32_t WarehouseListManager__get_DeficientNumber(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.totalSum - this->fields.sendMax;
}


bool WarehouseListManager__get_IsOver(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.totalSum > this->fields.sendMax;
}


int32_t WarehouseListManager__get_OverSum(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.sendSum + this->fields.totalSum;
}


int32_t WarehouseListManager__get_SendKeep(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.sendKeep;
}


int32_t WarehouseListManager__get_SendMax(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.sendMax;
}


int32_t WarehouseListManager__get_TotalSum(WarehouseListManager_o *this, const MethodInfo *method)
{
  return this->fields.totalSum;
}


void WarehouseListManager__remove_callbackFunc(
        WarehouseListManager_o *this,
        WarehouseListManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WarehouseListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WarehouseListManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596E4A3 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    byte_596E4A3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WarehouseListManager_CallbackFunc_c *)v8->klass != WarehouseListManager_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, WarehouseListManager_CallbackFunc_TypeInfo, v9, v10);
  WarehouseListManager__SetServant(v13, v14);
}


void WarehouseListManager_CallbackFunc___ctor(
        WarehouseListManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200A3F4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200A394;
}


System_IAsyncResult_o *WarehouseListManager_CallbackFunc__BeginInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int64_array *list,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v12[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v13; // [xsp+10h] [xbp-50h]
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = kind;
  v14 = n;
  if ( (byte_596E4AB & 1) == 0 )
  {
    sub_2213A60(&WarehouseListManager_ResultKind_TypeInfo);
    byte_596E4AB = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(WarehouseListManager_ResultKind_TypeInfo, &v15);
  v12[1] = list;
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(qword_5984348, &v14);
  return sub_2213A14(this, v12, callback, object);
}


void WarehouseListManager_CallbackFunc__EndInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void WarehouseListManager_CallbackFunc__Invoke(
        WarehouseListManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int64_array *list,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, System_Int64_array *, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    list,
    n,
    this->fields.method);
}