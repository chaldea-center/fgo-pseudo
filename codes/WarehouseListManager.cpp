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
  int32_t *p_sendServantSum; // x23
  int32_t *p_sendEquipSumNF; // x2
  int32_t v14; // w9
  int32_t baseEquipSum; // w8
  int32_t sendEquipSumNF; // w10
  int32_t v17; // w12
  int32_t sendServantKeep; // w11
  bool v19; // vf
  int v20; // w10
  int v21; // w11
  int32_t v22; // w9
  int32_t v23; // w23
  int32_t *p_sendMax; // x22
  BalanceConfig_c *v25; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v27; // w8
  UILabel_o *servantTabLabel; // x22
  System_String_o *v29; // x23
  Il2CppObject *v30; // x24
  Il2CppObject *v31; // x0
  UILabel_o *servantEquipTabLabel; // x22
  System_String_o *v33; // x23
  Il2CppObject *v34; // x24
  Il2CppObject *v35; // x0
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x1
  int32_t baseEquipKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t baseEquipSumNF; // [xsp+Ch] [xbp-54h] BYREF
  int32_t baseServantKeep; // [xsp+18h] [xbp-48h] BYREF
  int32_t baseServantSum; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4D2E730 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12573/*"SUM_INFO"*/);
    byte_4D2E730 = 1;
  }
  this->fields.kind = kind;
  SelfUserGame = (int32x2_t *)UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( SelfUserGame )
    {
      *(int32x2_t *)&this->fields.baseServantKeep = vadd_s32(
                                                      SelfUserGame[21],
                                                      *(int32x2_t *)(*(_QWORD *)(Instance + 184) + 68LL));
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
          p_sendServantSum = &this->fields.sendServantSum;
          UserServantMaster__getCount(
            (UserServantMaster_o *)MasterData_object,
            &this->fields.sendServantSum,
            &this->fields.sendEquipSum,
            0,
            0);
          p_sendEquipSumNF = &this->fields.sendEquipSumNF;
          goto LABEL_20;
        }
      }
    }
LABEL_44:
    sub_1C93D2C(Instance, v9);
  }
  if ( !SelfUserGame )
    goto LABEL_44;
  *(int32x2_t *)&this->fields.baseServantKeep = SelfUserGame[20];
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
  p_sendServantSum = &this->fields.baseServantSum;
  UserServantMaster__getCount(
    (UserServantMaster_o *)MasterData_object,
    &this->fields.baseServantSum,
    &this->fields.baseEquipSum,
    0,
    0);
  p_sendEquipSumNF = &this->fields.baseEquipSumNF;
LABEL_20:
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, p_sendServantSum, p_sendEquipSumNF, 1, 0);
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
    baseEquipSum = this->fields.baseServantSum;
  if ( baseEquipSum >= v22 )
    v23 = v22;
  else
    v23 = baseEquipSum;
  this->fields.sendMax = v23;
  p_sendMax = &this->fields.sendMax;
  v25 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  static_fields = v25->static_fields;
  if ( v23 > static_fields->ServantWarehouseSelectMax )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_sendMax = &static_fields->ServantWarehouseSelectMax;
  }
  v27 = *p_sendMax;
  servantTabLabel = this->fields.servantTabLabel;
  this->fields.sendMax = v27;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SUM_INFO"*/, 0);
  baseServantSum = this->fields.baseServantSum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantSum);
  baseServantKeep = this->fields.baseServantKeep;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantKeep);
  Instance = (__int64)System_String__Format_64467032(v29, v30, v31, 0);
  if ( !servantTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SUM_INFO"*/, 0);
  baseEquipSumNF = this->fields.baseEquipSumNF;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipSumNF);
  baseEquipKeep = this->fields.baseEquipKeep;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipKeep);
  Instance = (__int64)System_String__Format_64467032(v33, v34, v35, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  WarehouseListViewManager__CreateList((WarehouseListViewManager_o *)Instance, kind, setupInfo, v36);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  WarehouseListManager__RefrashListDisp(this, v37);
}


void WarehouseListManager__DestroyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0
  WarehouseListViewManager_o *v3; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, method);
  ListViewManager__DestroyList(baseListViewManager, 0);
  WarehouseListViewManager__SaveSortInfo(v3, v4);
}


void WarehouseListManager__EndCloseSelectFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  ;
}


void WarehouseListManager__EndSelectFilterKind(WarehouseListManager_o *this, bool isDecide, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, isDecide);
  WarehouseListViewManager__EndSelectFilterKind(baseListViewManager, isDecide, method);
}


void WarehouseListManager__FilterButtonState(
        WarehouseListManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_1C93D2C(0, state);
  ((void (__fastcall *)(struct UICommonButton_o *, int32_t, bool, const MethodInfo *))filterButton->klass->vtable._14_SetState.methodPtr)(
    filterButton,
    state,
    animation,
    filterButton->klass->vtable._14_SetState.method);
}


int64_t WarehouseListManager__GetAmountSortValue(WarehouseListManager_o *this, int32_t svtId, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, svtId);
  return WarehouseListViewManager__GetAmountSortValue(baseListViewManager, svtId, method);
}


WarehouseListViewItem_o *WarehouseListManager__GetItem(
        WarehouseListManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, index);
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
    sub_1C93D2C(0, method);
  return WarehouseListViewManager__GetScaleButtonSpriteName(baseListViewManager, method);
}


void WarehouseListManager__GetSelectItemNum(
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
    sub_1C93D2C(0, normalSum);
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
    sub_1C93D2C(0, choiceList);
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
    sub_1C93D2C(0, lockList);
  return WarehouseListViewManager__GetSwapLockList(baseListViewManager, lockList, unlockList, method);
}


void WarehouseListManager__ModifyItem(WarehouseListManager_o *this, int64_t userSvtId, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, userSvtId);
  WarehouseListViewManager__ModifyItem(baseListViewManager, userSvtId, method);
}


void WarehouseListManager__ModifyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, method);
  WarehouseListViewManager__Modify(baseListViewManager, method);
}


void WarehouseListManager__NumberAdjustment(WarehouseListManager_o *this, int32_t selectNum, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, selectNum);
  WarehouseListViewManager__DecrementNumber(baseListViewManager, selectNum, method);
}


void WarehouseListManager__OnClickDecide(WarehouseListManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // x21
  System_Collections_Generic_List_long__o *v10; // x20
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int64_array *v14; // x0

  if ( (byte_4D2E734 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    byte_4D2E734 = 1;
  }
  if ( this->fields.totalSum >= 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
      v10 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v10,
        (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
      baseListViewManager = this->fields.baseListViewManager;
      if ( !baseListViewManager || (WarehouseListViewManager__GetSelectList(baseListViewManager, v10, v12), !v10) )
        sub_1C93D2C(baseListViewManager, v11);
      v14 = System_Collections_Generic_List_long___ToArray(
              v10,
              (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
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
    sub_1C93D2C(0, method);
  WarehouseListViewManager__OnClickFilterKind(baseListViewManager, method);
}


void WarehouseListManager__OnClickReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t totalSum; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D2E735 & 1) == 0 )
  {
    sub_1C93AD4(&Method_WarehouseListManager_OnClickReleaseAll__);
    byte_4D2E735 = 1;
  }
  v3 = Method_WarehouseListManager_OnClickReleaseAll__;
  totalSum = this->fields.totalSum;
  if ( (*((_BYTE *)Method_WarehouseListManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarehouseListManager_OnClickReleaseAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  if ( totalSum < 1 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    WarehouseListManager__ReleaseAll(this, v6);
  }
}


void WarehouseListManager__OnClickScaleChange(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, method);
  WarehouseListViewManager__ChangeIconScale(baseListViewManager, method);
}


void WarehouseListManager__OnClickSortAscendingOrder(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, method);
  WarehouseListViewManager__OnClickSortAscendingOrder(baseListViewManager, method);
}


void WarehouseListManager__OnClickSortKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, method);
  WarehouseListViewManager__OnClickSortKind(baseListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListManager__OnSelectServant(
        WarehouseListManager_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  WarehouseListViewManager_o *UserSvtId; // x0
  int32_t modeKind; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x20
  struct WarehouseListManager_CallbackFunc_o *v16; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  System_Collections_Generic_List_long__o *v18; // x20
  struct System_Int64_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  GrandQuestFolderBoardItem_o *v22; // x20
  struct WarehouseListManager_CallbackFunc_o *v23; // x21
  struct WarehouseListManager_CallbackFunc_o *v24; // t1
  System_Collections_Generic_List_long__o *v25; // x20
  struct System_Int64_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  System_Int64_array *v29; // x0
  void (__fastcall *invoke_impl)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t); // x5
  intptr_t method_code; // x8
  intptr_t v32; // x4
  __int64 v33; // x1
  __int64 index; // x3

  if ( (byte_4D2E736 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&Method_WarehouseListManager_OnSelectServant__);
    byte_4D2E736 = 1;
  }
  if ( resultKind == 2 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) < 3 )
      {
        v13 = Method_WarehouseListManager_OnSelectServant__;
        if ( (*((_BYTE *)Method_WarehouseListManager_OnSelectServant__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1C93AEC(Method_WarehouseListManager_OnSelectServant__);
        v14 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0);
      }
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
      v16 = callbackFunc;
      if ( callbackFunc )
      {
        p_callbackFunc->klass = 0;
        sub_1C93A78(p_callbackFunc, 0, (int32_t)item, (int32_t)method, v4, v5, v6, v7);
        v18 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v18,
          (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item
          || (UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                          item,
                                                          *(const MethodInfo **)&resultKind),
              !v18)
          || (items = v18->fields._items,
              v20 = Method_System_Collections_Generic_List_long__Add__,
              ++v18->fields._version,
              !items) )
        {
LABEL_35:
          sub_1C93D2C(UserSvtId, *(_QWORD *)&resultKind);
        }
        size = v18->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v18,
            (int64_t)UserSvtId,
            *(const MethodInfo_38619D0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size] = (int64_t)UserSvtId;
        }
        v29 = System_Collections_Generic_List_long___ToArray(
                v18,
                (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t))v16->fields.invoke_impl;
        method_code = v16->fields.method_code;
        v32 = v16->fields.method;
        v33 = 2;
        index = 0xFFFFFFFFLL;
        goto LABEL_34;
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
          goto LABEL_35;
        WarehouseListViewManager__SelectListView(UserSvtId, item, (const MethodInfo *)item);
        return;
      case 1:
        UserSvtId = this->fields.baseListViewManager;
        if ( !UserSvtId )
          goto LABEL_35;
        WarehouseListViewManager__SelectListViewLock(UserSvtId, item, (const MethodInfo *)item);
        return;
      case 2:
        UserSvtId = this->fields.baseListViewManager;
        if ( !UserSvtId )
          goto LABEL_35;
        WarehouseListViewManager__SelectListViewChoice(UserSvtId, item, (const MethodInfo *)item);
        return;
      case 3:
        v24 = this->fields.callbackFunc;
        v22 = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
        v23 = v24;
        if ( !v24 )
          return;
        v22->klass = 0;
        sub_1C93A78(v22, 0, (int32_t)item, (int32_t)method, v4, v5, v6, v7);
        v25 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v25,
          (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item )
          goto LABEL_35;
        UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                    item,
                                                    *(const MethodInfo **)&resultKind);
        if ( !v25 )
          goto LABEL_35;
        v26 = v25->fields._items;
        v27 = Method_System_Collections_Generic_List_long__Add__;
        ++v25->fields._version;
        if ( !v26 )
          goto LABEL_35;
        v28 = v25->fields._size;
        if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v25,
            (int64_t)UserSvtId,
            *(const MethodInfo_38619D0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = v28 + 1;
          v26->m_Items[v28] = (int64_t)UserSvtId;
        }
        v29 = System_Collections_Generic_List_long___ToArray(
                v25,
                (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
        index = (unsigned int)item->fields.index;
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t))v23->fields.invoke_impl;
        method_code = v23->fields.method_code;
        v32 = v23->fields.method;
        v33 = 3;
        break;
      default:
        return;
    }
LABEL_34:
    invoke_impl(method_code, v33, v29, index, v32);
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
  UILabel_o *sendDataLabel; // x20
  System_String_o *v13; // x21
  System_String_o *v14; // x21
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x0
  int32_t sendKeep; // [xsp+0h] [xbp-40h] BYREF
  int32_t v18; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2E731 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12574/*"SUM_OVER_INFO"*/);
    sub_1C93AD4(&StringLiteral_12573/*"SUM_INFO"*/);
    byte_4D2E731 = 1;
  }
  *(_QWORD *)friendShipSum = 0;
  allReleaseButton = (System_String_o *)this->fields.allReleaseButton;
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
    v8 = (System_String_o **)&StringLiteral_12573/*"SUM_INFO"*/;
  }
  else
  {
    v8 = (System_String_o **)&StringLiteral_12573/*"SUM_INFO"*/;
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
        v8 = (System_String_o **)&StringLiteral_12574/*"SUM_OVER_INFO"*/;
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
  v13 = *v8;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get(v13, 0);
  v18 = this->fields.sendSpace;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  sendKeep = this->fields.sendKeep;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendKeep);
  allReleaseButton = System_String__Format_64467032(v14, v15, v16, 0);
  if ( !sendDataLabel )
LABEL_22:
    sub_1C93D2C(allReleaseButton, method);
  UILabel__set_text(sendDataLabel, allReleaseButton, 0);
}


void WarehouseListManager__ReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = this->fields.baseListViewManager;
  this->fields.totalSum = 0;
  if ( !baseListViewManager )
    sub_1C93D2C(0, method);
  WarehouseListViewManager__ReleaseAll(baseListViewManager, method);
  WarehouseListManager__RefrashListDisp(this, v4);
}


void WarehouseListManager__SaveSortInfo(WarehouseListManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.baseListViewManager )
    sub_1C93D2C(this, method);
  WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
}


void WarehouseListManager__SetMode(
        WarehouseListManager_o *this,
        int32_t mode,
        WarehouseListManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListManager__SetMode_39056348(this, mode, v10);
}


bool WarehouseListManager__SetModeKind(WarehouseListManager_o *this, int32_t modeKind, const MethodInfo *method)
{
  int32_t v3; // w8

  v3 = this->fields.modeKind;
  if ( v3 != modeKind )
    this->fields.modeKind = modeKind;
  return v3 != modeKind;
}


void WarehouseListManager__SetMode_39056348(WarehouseListManager_o *this, int32_t mode, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x21
  WarehouseListViewManager_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4D2E733 & 1) == 0 )
  {
    sub_1C93AD4(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_WarehouseListManager_OnSelectServant__);
    byte_4D2E733 = 1;
  }
  baseListViewManager = this->fields.baseListViewManager;
  v6 = (WarehouseListViewManager_CallbackFunc_o *)sub_1C93D20(WarehouseListViewManager_CallbackFunc_TypeInfo);
  WarehouseListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListManager_OnSelectServant__,
    0);
  if ( !baseListViewManager )
    sub_1C93D2C(v7, v8);
  baseListViewManager->fields.callbackFunc = v6;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&baseListViewManager->fields.callbackFunc,
    (int32_t)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListViewManager__SetMode_39099180(baseListViewManager, mode, v15);
}


void WarehouseListManager__SetServant(WarehouseListManager_o *this, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x8

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(this, method);
  this->fields.totalSum = baseListViewManager->fields.selectSum;
}


void WarehouseListManager__SortItem(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, method);
  ListViewManager__SortItem(baseListViewManager, -1, 0, -1, 0);
}


void WarehouseListManager__UpdateItemState(WarehouseListManager_o *this, bool isPushMode, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C93D2C(0, isPushMode);
  WarehouseListViewManager__UpdateItemState(baseListViewManager, isPushMode, method);
}


void WarehouseListManager__UpdateSelectDoneLabel(WarehouseListManager_o *this, const MethodInfo *method)
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
  int32_t sendMax; // [xsp+8h] [xbp-48h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D2E732 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12574/*"SUM_OVER_INFO"*/);
    sub_1C93AD4(&StringLiteral_12573/*"SUM_INFO"*/);
    byte_4D2E732 = 1;
  }
  *(_QWORD *)friendShipSum = 0;
  totalSum = this->fields.totalSum;
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
  v7 = this->fields.selectDoneLabel;
  if ( this->fields.totalSum - friendShipSum[0] <= this->fields.sendMax )
    v8 = (System_String_o **)&StringLiteral_12573/*"SUM_INFO"*/;
  else
    v8 = (System_String_o **)&StringLiteral_12574/*"SUM_OVER_INFO"*/;
  v9 = *v8;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v9, 0);
  v14 = this->fields.totalSum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  sendMax = this->fields.sendMax;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
  selectDoneLabel = (UILabel_o *)System_String__Format_64467032(v10, v11, v12, 0);
  if ( !v7 )
LABEL_18:
    sub_1C93D2C(selectDoneLabel, method);
  UILabel__set_text(v7, (System_String_o *)selectDoneLabel, 0);
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
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListManager_o *v11; // x0
  WarehouseListManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2E72E & 1) == 0 )
  {
    sub_1C93AD4(&WarehouseListManager_CallbackFunc_TypeInfo);
    byte_4D2E72E = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  WarehouseListManager__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2E72F & 1) == 0 )
  {
    sub_1C93AD4(&WarehouseListManager_CallbackFunc_TypeInfo);
    byte_4D2E72F = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  WarehouseListManager__SetServant(v11, v12);
}


void WarehouseListManager_CallbackFunc___ctor(
        WarehouseListManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC6FF4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC6F94;
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
  _QWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v13; // [xsp+10h] [xbp-60h]
  int32_t v14; // [xsp+28h] [xbp-48h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF

  v14 = n;
  v15 = kind;
  if ( (byte_4D2E737 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&WarehouseListManager_ResultKind_TypeInfo);
    byte_4D2E737 = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(WarehouseListManager_ResultKind_TypeInfo, &v15);
  v12[1] = list;
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return sub_1C93A88(this, v12, callback, object);
}


void WarehouseListManager_CallbackFunc__EndInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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