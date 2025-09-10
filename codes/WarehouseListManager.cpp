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
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x24
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  UILabel_o *servantEquipTabLabel; // x22
  System_String_o *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x24
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x1
  int32_t baseEquipKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t baseEquipSumNF; // [xsp+Ch] [xbp-54h] BYREF
  int32_t baseServantKeep; // [xsp+18h] [xbp-48h] BYREF
  int32_t baseServantSum; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C2507E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C2507E = 1;
  }
  this->fields.kind = kind;
  SelfUserGame = (int32x2_t *)UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
    sub_1C2D6EC(Instance, v9);
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
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  baseServantSum = this->fields.baseServantSum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantSum, v30, v31, v32);
  baseServantKeep = this->fields.baseServantKeep;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantKeep, v34, v35, v36);
  Instance = (__int64)System_String__Format_63499156(v29, v33, v37, 0);
  if ( !servantTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  baseEquipSumNF = this->fields.baseEquipSumNF;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipSumNF, v40, v41, v42);
  baseEquipKeep = this->fields.baseEquipKeep;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipKeep, v44, v45, v46);
  Instance = (__int64)System_String__Format_63499156(v39, v43, v47, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  WarehouseListViewManager__CreateList((WarehouseListViewManager_o *)Instance, kind, setupInfo, v48);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  WarehouseListManager__RefrashListDisp(this, v49);
}


void WarehouseListManager__DestroyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0
  WarehouseListViewManager_o *v3; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, isDecide);
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
    sub_1C2D6EC(0, state);
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
    sub_1C2D6EC(0, svtId);
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
    sub_1C2D6EC(0, index);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, normalSum);
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
    sub_1C2D6EC(0, choiceList);
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
    sub_1C2D6EC(0, lockList);
  return WarehouseListViewManager__GetSwapLockList(baseListViewManager, lockList, unlockList, method);
}


void WarehouseListManager__ModifyItem(WarehouseListManager_o *this, int64_t userSvtId, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C2D6EC(0, userSvtId);
  WarehouseListViewManager__ModifyItem(baseListViewManager, userSvtId, method);
}


void WarehouseListManager__ModifyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C2D6EC(0, method);
  WarehouseListViewManager__Modify(baseListViewManager, method);
}


void WarehouseListManager__NumberAdjustment(WarehouseListManager_o *this, int32_t selectNum, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C2D6EC(0, selectNum);
  WarehouseListViewManager__DecrementNumber(baseListViewManager, selectNum, method);
}


void WarehouseListManager__OnClickDecide(WarehouseListManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // x21
  System_Collections_Generic_List_long__o *v6; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int64_array *v10; // x0

  if ( (byte_4C25082 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C25082 = 1;
  }
  if ( this->fields.totalSum >= 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
      v6 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v6,
        (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
      baseListViewManager = this->fields.baseListViewManager;
      if ( !baseListViewManager || (WarehouseListViewManager__GetSelectList(baseListViewManager, v6, v8), !v6) )
        sub_1C2D6EC(baseListViewManager, v7);
      v10 = System_Collections_Generic_List_long___ToArray(
              v6,
              (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
      ((void (__fastcall *)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        1,
        v10,
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
    sub_1C2D6EC(0, method);
  WarehouseListViewManager__OnClickFilterKind(baseListViewManager, method);
}


void WarehouseListManager__OnClickReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t totalSum; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C25083 & 1) == 0 )
  {
    sub_1C2D490(&Method_WarehouseListManager_OnClickReleaseAll__);
    byte_4C25083 = 1;
  }
  v3 = Method_WarehouseListManager_OnClickReleaseAll__;
  totalSum = this->fields.totalSum;
  if ( (*((_BYTE *)Method_WarehouseListManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarehouseListManager_OnClickReleaseAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
    sub_1C2D6EC(0, method);
  WarehouseListViewManager__ChangeIconScale(baseListViewManager, method);
}


void WarehouseListManager__OnClickSortAscendingOrder(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C2D6EC(0, method);
  WarehouseListViewManager__OnClickSortAscendingOrder(baseListViewManager, method);
}


void WarehouseListManager__OnClickSortKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C2D6EC(0, method);
  WarehouseListViewManager__OnClickSortKind(baseListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListManager__OnSelectServant(
        WarehouseListManager_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *UserSvtId; // x0
  int32_t modeKind; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x20
  struct WarehouseListManager_CallbackFunc_o *v12; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  System_Collections_Generic_List_long__o *v14; // x20
  struct System_Int64_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v18; // x20
  struct WarehouseListManager_CallbackFunc_o *v19; // x21
  struct WarehouseListManager_CallbackFunc_o *v20; // t1
  System_Collections_Generic_List_long__o *v21; // x20
  struct System_Int64_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  System_Int64_array *v25; // x0
  void (__fastcall *invoke_impl)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t); // x5
  intptr_t method_code; // x8
  intptr_t v28; // x4
  __int64 v29; // x1
  __int64 index; // x3

  if ( (byte_4C25084 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&Method_WarehouseListManager_OnSelectServant__);
    byte_4C25084 = 1;
  }
  if ( resultKind == 2 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) < 3 )
      {
        v9 = Method_WarehouseListManager_OnSelectServant__;
        if ( (*((_BYTE *)Method_WarehouseListManager_OnSelectServant__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1C2D4A8(Method_WarehouseListManager_OnSelectServant__);
        v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
      }
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
      v12 = callbackFunc;
      if ( callbackFunc )
      {
        p_callbackFunc->klass = 0;
        sub_1C2D434(p_callbackFunc, 0, (int32_t)item, method);
        v14 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v14,
          (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item
          || (UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                          item,
                                                          *(const MethodInfo **)&resultKind),
              !v14)
          || (items = v14->fields._items,
              v16 = Method_System_Collections_Generic_List_long__Add__,
              ++v14->fields._version,
              !items) )
        {
LABEL_35:
          sub_1C2D6EC(UserSvtId, *(_QWORD *)&resultKind);
        }
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v14,
            (int64_t)UserSvtId,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v14->fields._size = size + 1;
          items->m_Items[size] = (int64_t)UserSvtId;
        }
        v25 = System_Collections_Generic_List_long___ToArray(
                v14,
                (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t))v12->fields.invoke_impl;
        method_code = v12->fields.method_code;
        v28 = v12->fields.method;
        v29 = 2;
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
        v20 = this->fields.callbackFunc;
        v18 = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
        v19 = v20;
        if ( !v20 )
          return;
        v18->klass = 0;
        sub_1C2D434(v18, 0, (int32_t)item, method);
        v21 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v21,
          (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item )
          goto LABEL_35;
        UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                    item,
                                                    *(const MethodInfo **)&resultKind);
        if ( !v21 )
          goto LABEL_35;
        v22 = v21->fields._items;
        v23 = Method_System_Collections_Generic_List_long__Add__;
        ++v21->fields._version;
        if ( !v22 )
          goto LABEL_35;
        v24 = v21->fields._size;
        if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v21,
            (int64_t)UserSvtId,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v21->fields._size = v24 + 1;
          v22->m_Items[v24] = (int64_t)UserSvtId;
        }
        v25 = System_Collections_Generic_List_long___ToArray(
                v21,
                (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
        index = (unsigned int)item->fields.index;
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, System_Int64_array *, __int64, intptr_t))v19->fields.invoke_impl;
        method_code = v19->fields.method_code;
        v28 = v19->fields.method;
        v29 = 3;
        break;
      default:
        return;
    }
LABEL_34:
    invoke_impl(method_code, v29, v25, index, v28);
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  int32_t sendKeep; // [xsp+0h] [xbp-40h] BYREF
  int32_t v24; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2507F & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12475/*"SUM_OVER_INFO"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C2507F = 1;
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
    v8 = (System_String_o **)&StringLiteral_12474/*"SUM_INFO"*/;
  }
  else
  {
    v8 = (System_String_o **)&StringLiteral_12474/*"SUM_INFO"*/;
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
        v8 = (System_String_o **)&StringLiteral_12475/*"SUM_OVER_INFO"*/;
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
  v24 = this->fields.sendSpace;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v15, v16, v17);
  sendKeep = this->fields.sendKeep;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendKeep, v19, v20, v21);
  allReleaseButton = System_String__Format_63499156(v14, v18, v22, 0);
  if ( !sendDataLabel )
LABEL_22:
    sub_1C2D6EC(allReleaseButton, method);
  UILabel__set_text(sendDataLabel, allReleaseButton, 0);
}


void WarehouseListManager__ReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = this->fields.baseListViewManager;
  this->fields.totalSum = 0;
  if ( !baseListViewManager )
    sub_1C2D6EC(0, method);
  WarehouseListViewManager__ReleaseAll(baseListViewManager, method);
  WarehouseListManager__RefrashListDisp(this, v4);
}


void WarehouseListManager__SaveSortInfo(WarehouseListManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.baseListViewManager )
    sub_1C2D6EC(this, method);
  WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
}


void WarehouseListManager__SetMode(
        WarehouseListManager_o *this,
        int32_t mode,
        WarehouseListManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  WarehouseListManager__SetMode_38155736(this, mode, v6);
}


bool WarehouseListManager__SetModeKind(WarehouseListManager_o *this, int32_t modeKind, const MethodInfo *method)
{
  int32_t v3; // w8

  v3 = this->fields.modeKind;
  if ( v3 != modeKind )
    this->fields.modeKind = modeKind;
  return v3 != modeKind;
}


void WarehouseListManager__SetMode_38155736(WarehouseListManager_o *this, int32_t mode, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x21
  WarehouseListViewManager_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C25081 & 1) == 0 )
  {
    sub_1C2D490(&WarehouseListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_WarehouseListManager_OnSelectServant__);
    byte_4C25081 = 1;
  }
  baseListViewManager = this->fields.baseListViewManager;
  v6 = (WarehouseListViewManager_CallbackFunc_o *)sub_1C2D6DC(WarehouseListViewManager_CallbackFunc_TypeInfo);
  WarehouseListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListManager_OnSelectServant__,
    0);
  if ( !baseListViewManager )
    sub_1C2D6EC(v7, v8);
  baseListViewManager->fields.callbackFunc = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&baseListViewManager->fields.callbackFunc, (int32_t)v6, v9, v10);
  WarehouseListViewManager__SetMode_38198816(baseListViewManager, mode, v11);
}


void WarehouseListManager__SetServant(WarehouseListManager_o *this, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x8

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C2D6EC(this, method);
  this->fields.totalSum = baseListViewManager->fields.selectSum;
}


void WarehouseListManager__SortItem(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C2D6EC(0, method);
  ListViewManager__SortItem(baseListViewManager, -1, 0, -1, 0);
}


void WarehouseListManager__UpdateItemState(WarehouseListManager_o *this, bool isPushMode, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1C2D6EC(0, isPushMode);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  int32_t sendMax; // [xsp+8h] [xbp-48h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C25080 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12475/*"SUM_OVER_INFO"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C25080 = 1;
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
    v8 = (System_String_o **)&StringLiteral_12474/*"SUM_INFO"*/;
  else
    v8 = (System_String_o **)&StringLiteral_12475/*"SUM_OVER_INFO"*/;
  v9 = *v8;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v9, 0);
  v20 = this->fields.totalSum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v11, v12, v13);
  sendMax = this->fields.sendMax;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v15, v16, v17);
  selectDoneLabel = (UILabel_o *)System_String__Format_63499156(v10, v14, v18, 0);
  if ( !v7 )
LABEL_18:
    sub_1C2D6EC(selectDoneLabel, method);
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

  if ( (byte_4C2507C & 1) == 0 )
  {
    sub_1C2D490(&WarehouseListManager_CallbackFunc_TypeInfo);
    byte_4C2507C = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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

  if ( (byte_4C2507D & 1) == 0 )
  {
    sub_1C2D490(&WarehouseListManager_CallbackFunc_TypeInfo);
    byte_4C2507D = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  WarehouseListManager__SetServant(v11, v12);
}


void WarehouseListManager_CallbackFunc___ctor(
        WarehouseListManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7036C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7030C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *WarehouseListManager_CallbackFunc__BeginInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int64_array *list,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  _QWORD v15[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v16; // [xsp+10h] [xbp-60h]
  int32_t v17; // [xsp+28h] [xbp-48h] BYREF
  int32_t v18; // [xsp+2Ch] [xbp-44h] BYREF

  v17 = n;
  v18 = kind;
  if ( (byte_4C25085 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&WarehouseListManager_ResultKind_TypeInfo);
    byte_4C25085 = 1;
  }
  v16 = 0u;
  v15[0] = j_il2cpp_value_box_0(WarehouseListManager_ResultKind_TypeInfo, &v18, list, *(_QWORD *)&n, callback);
  v15[1] = list;
  *(_QWORD *)&v16 = j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v15, callback, object);
}


void WarehouseListManager_CallbackFunc__EndInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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