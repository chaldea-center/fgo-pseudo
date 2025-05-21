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
  int32x2_t *SelfUserGame; // x24
  __int64 Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v17; // x23
  int32_t *p_sendServantSum; // x23
  int32_t *p_sendEquipSumNF; // x2
  int32_t v20; // w9
  int32_t baseEquipSum; // w8
  int32_t sendEquipSumNF; // w10
  int32_t v23; // w12
  int32_t sendServantKeep; // w11
  bool v25; // vf
  int v26; // w10
  int v27; // w11
  int32_t v28; // w9
  int32_t v29; // w23
  int32_t *p_sendMax; // x22
  BalanceConfig_c *v31; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v33; // w8
  UILabel_o *servantTabLabel; // x22
  System_String_o *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x24
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  UILabel_o *servantEquipTabLabel; // x22
  System_String_o *v45; // x23
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x24
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x1
  int32_t baseEquipKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t baseEquipSumNF; // [xsp+Ch] [xbp-54h] BYREF
  int32_t baseServantKeep; // [xsp+18h] [xbp-48h] BYREF
  int32_t baseServantSum; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B428C4 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8);
    sub_1BDB878(&int_TypeInfo, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BDB878(&StringLiteral_12442/*"SUM_INFO"*/, v12);
    byte_4B428C4 = 1;
  }
  this->fields.kind = kind;
  SelfUserGame = (int32x2_t *)UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  Instance = (__int64)this->fields.allReleaseButton;
  this->fields.totalSum = 0;
  if ( !Instance )
    goto LABEL_44;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    3LL,
    0LL,
    *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  Instance = (__int64)this->fields.decideButton;
  if ( !Instance )
    goto LABEL_44;
  Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               3LL,
               0LL,
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
      if ( v17 )
      {
        UserServantStorageMaster__getCount(
          (UserServantStorageMaster_o *)v17,
          &this->fields.baseServantSum,
          &this->fields.baseEquipSum,
          0,
          0LL);
        Instance = UserServantStorageMaster__getCount(
                     (UserServantStorageMaster_o *)v17,
                     &this->fields.baseServantSum,
                     &this->fields.baseEquipSumNF,
                     1,
                     0LL);
        if ( MasterData_object )
        {
          p_sendServantSum = &this->fields.sendServantSum;
          UserServantMaster__getCount(
            (UserServantMaster_o *)MasterData_object,
            &this->fields.sendServantSum,
            &this->fields.sendEquipSum,
            0,
            0LL);
          p_sendEquipSumNF = &this->fields.sendEquipSumNF;
          goto LABEL_20;
        }
      }
    }
LABEL_44:
    sub_1BDBAD4(Instance, v15);
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
  if ( !v17 )
    goto LABEL_44;
  UserServantStorageMaster__getCount(
    (UserServantStorageMaster_o *)v17,
    &this->fields.sendServantSum,
    &this->fields.sendEquipSum,
    0,
    0LL);
  Instance = UserServantStorageMaster__getCount(
               (UserServantStorageMaster_o *)v17,
               &this->fields.sendServantSum,
               &this->fields.sendEquipSumNF,
               1,
               0LL);
  if ( !MasterData_object )
    goto LABEL_44;
  p_sendServantSum = &this->fields.baseServantSum;
  UserServantMaster__getCount(
    (UserServantMaster_o *)MasterData_object,
    &this->fields.baseServantSum,
    &this->fields.baseEquipSum,
    0,
    0LL);
  p_sendEquipSumNF = &this->fields.baseEquipSumNF;
LABEL_20:
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, p_sendServantSum, p_sendEquipSumNF, 1, 0LL);
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
    baseEquipSum = this->fields.baseServantSum;
  if ( baseEquipSum >= v28 )
    v29 = v28;
  else
    v29 = baseEquipSum;
  this->fields.sendMax = v29;
  p_sendMax = &this->fields.sendMax;
  v31 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  static_fields = v31->static_fields;
  if ( v29 > static_fields->ServantWarehouseSelectMax )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_sendMax = &static_fields->ServantWarehouseSelectMax;
  }
  v33 = *p_sendMax;
  servantTabLabel = this->fields.servantTabLabel;
  this->fields.sendMax = v33;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUM_INFO"*/, 0LL);
  baseServantSum = this->fields.baseServantSum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantSum, v36, v37, v38);
  baseServantKeep = this->fields.baseServantKeep;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantKeep, v40, v41, v42);
  Instance = (__int64)System_String__Format_62613552(v35, v39, v43, 0LL);
  if ( !servantTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUM_INFO"*/, 0LL);
  baseEquipSumNF = this->fields.baseEquipSumNF;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipSumNF, v46, v47, v48);
  baseEquipKeep = this->fields.baseEquipKeep;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipKeep, v50, v51, v52);
  Instance = (__int64)System_String__Format_62613552(v45, v49, v53, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  WarehouseListViewManager__CreateList((WarehouseListViewManager_o *)Instance, kind, setupInfo, v54);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  WarehouseListManager__RefrashListDisp(this, v55);
}


void __fastcall WarehouseListManager__DestroyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0
  WarehouseListViewManager_o *v3; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, isDecide);
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
    sub_1BDBAD4(0LL, state);
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
    sub_1BDBAD4(0LL, svtId);
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
    sub_1BDBAD4(0LL, index);
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
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, normalSum);
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
    sub_1BDBAD4(0LL, choiceList);
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
    sub_1BDBAD4(0LL, lockList);
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
    sub_1BDBAD4(0LL, userSvtId);
  WarehouseListViewManager__ModifyItem(baseListViewManager, userSvtId, method);
}


void __fastcall WarehouseListManager__ModifyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, selectNum);
  WarehouseListViewManager__DecrementNumber(baseListViewManager, selectNum, method);
}


void __fastcall WarehouseListManager__OnClickDecide(WarehouseListManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // x21
  System_Collections_Generic_List_long__o *v8; // x20
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int64_array *v12; // x0

  if ( (byte_4B428C8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v6);
    byte_4B428C8 = 1;
  }
  if ( this->fields.totalSum >= 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
      v8 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v8,
        (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
      baseListViewManager = this->fields.baseListViewManager;
      if ( !baseListViewManager || (WarehouseListViewManager__GetSelectList(baseListViewManager, v8, v10), !v8) )
        sub_1BDBAD4(baseListViewManager, v9);
      v12 = System_Collections_Generic_List_long___ToArray(
              v8,
              (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, System_Int64_array *, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        v12,
        0xFFFFFFFFLL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall WarehouseListManager__OnClickFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BDBAD4(0LL, method);
  WarehouseListViewManager__OnClickFilterKind(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t totalSum; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B428C9 & 1) == 0 )
  {
    sub_1BDB878(&Method_WarehouseListManager_OnClickReleaseAll__, method);
    byte_4B428C9 = 1;
  }
  v3 = Method_WarehouseListManager_OnClickReleaseAll__;
  totalSum = this->fields.totalSum;
  if ( (*((_BYTE *)Method_WarehouseListManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_WarehouseListManager_OnClickReleaseAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  if ( totalSum < 1 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    WarehouseListManager__ReleaseAll(this, v6);
  }
}


void __fastcall WarehouseListManager__OnClickScaleChange(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BDBAD4(0LL, method);
  WarehouseListViewManager__ChangeIconScale(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortAscendingOrder(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BDBAD4(0LL, method);
  WarehouseListViewManager__OnClickSortAscendingOrder(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BDBAD4(0LL, method);
  WarehouseListViewManager__OnClickSortKind(baseListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__OnSelectServant(
        WarehouseListManager_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarehouseListViewManager_o *UserSvtId; // x0
  int32_t modeKind; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x20
  struct WarehouseListManager_CallbackFunc_o *v16; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  System_Collections_Generic_List_long__o *v18; // x20
  struct System_Int64_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v22; // x20
  struct WarehouseListManager_CallbackFunc_o *v23; // x21
  struct WarehouseListManager_CallbackFunc_o *v24; // t1
  System_Collections_Generic_List_long__o *v25; // x20
  struct System_Int64_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  System_Int64_array *v29; // x0
  Il2CppObject *m_target; // x5
  struct System_Reflection_MethodInfo_o *original_method_info; // x8
  __int64 v32; // x4
  __int64 v33; // x1
  __int64 index; // x3

  if ( (byte_4B428CA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&resultKind);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_1BDB878(&Method_WarehouseListManager_OnSelectServant__, v10);
    byte_4B428CA = 1;
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
          v13 = (_QWORD *)sub_1BDB890(Method_WarehouseListManager_OnSelectServant__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0LL);
      }
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
      v16 = callbackFunc;
      if ( callbackFunc )
      {
        p_callbackFunc->klass = 0LL;
        sub_1BDB81C(p_callbackFunc, 0, (int32_t)item, method);
        v18 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v18,
          (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
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
          sub_1BDBAD4(UserSvtId, *(_QWORD *)&resultKind);
        }
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v18,
            (int64_t)UserSvtId,
            *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size] = (int64_t)UserSvtId;
        }
        v29 = System_Collections_Generic_List_long___ToArray(
                v18,
                (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
        m_target = v16->fields.m_target;
        original_method_info = v16->fields.original_method_info;
        v32 = *(_QWORD *)&v16->fields.extra_arg;
        v33 = 2LL;
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
        v22 = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
        v23 = v24;
        if ( !v24 )
          return;
        v22->klass = 0LL;
        sub_1BDB81C(v22, 0, (int32_t)item, method);
        v25 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v25,
          (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
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
        if ( (unsigned int)v28 >= v26->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v25,
            (int64_t)UserSvtId,
            *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = v28 + 1;
          v26->m_Items[v28] = (int64_t)UserSvtId;
        }
        v29 = System_Collections_Generic_List_long___ToArray(
                v25,
                (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
        index = (unsigned int)item->fields.index;
        m_target = v23->fields.m_target;
        original_method_info = v23->fields.original_method_info;
        v32 = *(_QWORD *)&v23->fields.extra_arg;
        v33 = 3LL;
        break;
      default:
        return;
    }
LABEL_34:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, System_Int64_array *, __int64, __int64))m_target)(
      original_method_info,
      v33,
      v29,
      index,
      v32);
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
  System_String_o **v11; // x21
  int32_t sendSpace; // w10
  int v13; // w8
  const MethodInfo *v14; // x1
  UILabel_o *sendDataLabel; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  int32_t sendKeep; // [xsp+0h] [xbp-40h] BYREF
  int32_t v27; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B428C5 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_12443/*"SUM_OVER_INFO"*/, v4);
    sub_1BDB878(&StringLiteral_12442/*"SUM_INFO"*/, v5);
    byte_4B428C5 = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  allReleaseButton = (System_String_o *)this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  v7 = 3;
  v8 = this->fields.totalSum <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    allReleaseButton,
    v8,
    1LL,
    allReleaseButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  totalSum = this->fields.totalSum;
  if ( totalSum < 1 )
  {
    v11 = (System_String_o **)&StringLiteral_12442/*"SUM_INFO"*/;
  }
  else
  {
    v11 = (System_String_o **)&StringLiteral_12442/*"SUM_INFO"*/;
    if ( totalSum <= this->fields.sendSpace )
    {
      v7 = 0;
    }
    else
    {
      WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v9);
      sendSpace = this->fields.sendSpace;
      v13 = this->fields.totalSum - friendShipSum[0];
      if ( v13 <= sendSpace )
        v7 = 0;
      else
        v7 = 3;
      if ( v13 > sendSpace )
        v11 = (System_String_o **)&StringLiteral_12443/*"SUM_OVER_INFO"*/;
    }
  }
  allReleaseButton = (System_String_o *)this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  ((void (__fastcall *)(System_String_o *, _QWORD, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    allReleaseButton,
    v7,
    1LL,
    allReleaseButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  WarehouseListManager__UpdateSelectDoneLabel(this, v14);
  sendDataLabel = this->fields.sendDataLabel;
  v16 = *v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get(v16, 0LL);
  v27 = this->fields.sendSpace;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v18, v19, v20);
  sendKeep = this->fields.sendKeep;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendKeep, v22, v23, v24);
  allReleaseButton = System_String__Format_62613552(v17, v21, v25, 0LL);
  if ( !sendDataLabel )
LABEL_22:
    sub_1BDBAD4(allReleaseButton, method);
  UILabel__set_text(sendDataLabel, allReleaseButton, 0LL);
}


void __fastcall WarehouseListManager__ReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = this->fields.baseListViewManager;
  this->fields.totalSum = 0;
  if ( !baseListViewManager )
    sub_1BDBAD4(0LL, method);
  WarehouseListViewManager__ReleaseAll(baseListViewManager, method);
  WarehouseListManager__RefrashListDisp(this, v4);
}


void __fastcall WarehouseListManager__SaveSortInfo(WarehouseListManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.baseListViewManager )
    sub_1BDBAD4(this, method);
  WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
}


void __fastcall WarehouseListManager__SetMode(
        WarehouseListManager_o *this,
        int32_t mode,
        WarehouseListManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  WarehouseListManager__SetMode_37431476(this, mode, v6);
}


bool __fastcall WarehouseListManager__SetModeKind(
        WarehouseListManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  int32_t v3; // w8

  v3 = this->fields.modeKind;
  if ( v3 != modeKind )
    this->fields.modeKind = modeKind;
  return v3 != modeKind;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__SetMode_37431476(
        WarehouseListManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct WarehouseListViewManager_o *baseListViewManager; // x21
  WarehouseListViewManager_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4B428C7 & 1) == 0 )
  {
    sub_1BDB878(&WarehouseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_WarehouseListManager_OnSelectServant__, v5);
    byte_4B428C7 = 1;
  }
  baseListViewManager = this->fields.baseListViewManager;
  v7 = (WarehouseListViewManager_CallbackFunc_o *)sub_1BDBAC4(WarehouseListViewManager_CallbackFunc_TypeInfo);
  WarehouseListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListManager_OnSelectServant__,
    0LL);
  if ( !baseListViewManager )
    sub_1BDBAD4(v8, v9);
  baseListViewManager->fields.callbackFunc = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&baseListViewManager->fields.callbackFunc, (int32_t)v7, v10, v11);
  WarehouseListViewManager__SetMode_37474360(baseListViewManager, mode, v12);
}


void __fastcall WarehouseListManager__SetServant(WarehouseListManager_o *this, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x8

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BDBAD4(this, method);
  this->fields.totalSum = baseListViewManager->fields.selectSum;
}


void __fastcall WarehouseListManager__SortItem(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BDBAD4(0LL, method);
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
    sub_1BDBAD4(0LL, isPushMode);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  int32_t sendMax; // [xsp+8h] [xbp-48h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-44h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B428C6 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_12443/*"SUM_OVER_INFO"*/, v4);
    sub_1BDB878(&StringLiteral_12442/*"SUM_INFO"*/, v5);
    byte_4B428C6 = 1;
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
  UILabel__SetCondensedScale(selectDoneLabel, mWidth, 0, 0LL);
  WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v9);
  v10 = this->fields.selectDoneLabel;
  if ( this->fields.totalSum - friendShipSum[0] <= this->fields.sendMax )
    v11 = (System_String_o **)&StringLiteral_12442/*"SUM_INFO"*/;
  else
    v11 = (System_String_o **)&StringLiteral_12443/*"SUM_OVER_INFO"*/;
  v12 = *v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get(v12, 0LL);
  v23 = this->fields.totalSum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v14, v15, v16);
  sendMax = this->fields.sendMax;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax, v18, v19, v20);
  selectDoneLabel = (UILabel_o *)System_String__Format_62613552(v13, v17, v21, 0LL);
  if ( !v10 )
LABEL_18:
    sub_1BDBAD4(selectDoneLabel, method);
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

  if ( (byte_4B428C2 & 1) == 0 )
  {
    sub_1BDB878(&WarehouseListManager_CallbackFunc_TypeInfo, value);
    byte_4B428C2 = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BDBD94(v8);
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

  if ( (byte_4B428C3 & 1) == 0 )
  {
    sub_1BDB878(&WarehouseListManager_CallbackFunc_TypeInfo, value);
    byte_4B428C3 = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BDBD94(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A236F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A23698;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  _QWORD v16[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v17; // [xsp+10h] [xbp-60h]
  int32_t v18; // [xsp+28h] [xbp-48h] BYREF
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF

  v18 = n;
  v19 = kind;
  if ( (byte_4B428CB & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&WarehouseListManager_ResultKind_TypeInfo, v11);
    byte_4B428CB = 1;
  }
  v17 = 0u;
  v16[0] = j_il2cpp_value_box_0(WarehouseListManager_ResultKind_TypeInfo, &v19, list, *(_QWORD *)&n, callback);
  v16[1] = list;
  *(_QWORD *)&v17 = j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v16, callback, object);
}


void __fastcall WarehouseListManager_CallbackFunc__EndInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall WarehouseListManager_CallbackFunc__Invoke(
        WarehouseListManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int64_array *list,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, System_Int64_array *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    list,
    n,
    *(_QWORD *)&this->fields.extra_arg);
}