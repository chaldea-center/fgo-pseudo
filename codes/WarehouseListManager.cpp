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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32x2_t *SelfUserGame; // x24
  __int64 Instance; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v23; // x23
  int32_t *p_sendServantSum; // x23
  int32_t *p_sendEquipSumNF; // x2
  __int64 v26; // x1
  int32_t v27; // w9
  int32_t baseEquipSum; // w8
  int32_t sendEquipSumNF; // w10
  int32_t v30; // w12
  int32_t sendServantKeep; // w11
  bool v32; // vf
  int v33; // w10
  int v34; // w11
  int32_t v35; // w9
  int32_t v36; // w23
  int32_t *p_sendMax; // x22
  BalanceConfig_c *v38; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v40; // w8
  UILabel_o *servantTabLabel; // x22
  System_String_o *v42; // x23
  Il2CppObject *v43; // x24
  Il2CppObject *v44; // x0
  UILabel_o *servantEquipTabLabel; // x22
  System_String_o *v46; // x23
  Il2CppObject *v47; // x24
  Il2CppObject *v48; // x0
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x1
  int32_t baseEquipKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t baseEquipSumNF; // [xsp+Ch] [xbp-54h] BYREF
  int32_t baseServantKeep; // [xsp+18h] [xbp-48h] BYREF
  int32_t baseServantSum; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B14179 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, setupInfo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v17, v18);
    byte_4B14179 = 1;
  }
  this->fields.kind = kind;
  SelfUserGame = (int32x2_t *)UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v23 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( SelfUserGame )
    {
      *(int32x2_t *)&this->fields.baseServantKeep = vadd_s32(
                                                      SelfUserGame[20],
                                                      *(int32x2_t *)(*(_QWORD *)(Instance + 184) + 56LL));
      *(int32x2_t *)&this->fields.sendServantKeep = SelfUserGame[19];
      if ( v23 )
      {
        UserServantStorageMaster__getCount(
          (UserServantStorageMaster_o *)v23,
          &this->fields.baseServantSum,
          &this->fields.baseEquipSum,
          0,
          0LL);
        Instance = UserServantStorageMaster__getCount(
                     (UserServantStorageMaster_o *)v23,
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
    sub_1BCAA3C(Instance, v21);
  }
  if ( !SelfUserGame )
    goto LABEL_44;
  *(int32x2_t *)&this->fields.baseServantKeep = SelfUserGame[19];
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21);
    Instance = (__int64)BalanceConfig_TypeInfo;
  }
  *(int32x2_t *)&this->fields.sendServantKeep = vadd_s32(
                                                  SelfUserGame[20],
                                                  *(int32x2_t *)(*(_QWORD *)(Instance + 184) + 56LL));
  if ( !v23 )
    goto LABEL_44;
  UserServantStorageMaster__getCount(
    (UserServantStorageMaster_o *)v23,
    &this->fields.sendServantSum,
    &this->fields.sendEquipSum,
    0,
    0LL);
  Instance = UserServantStorageMaster__getCount(
               (UserServantStorageMaster_o *)v23,
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
  v27 = this->fields.kind;
  baseEquipSum = this->fields.baseEquipSum;
  sendEquipSumNF = this->fields.sendEquipSumNF;
  v30 = this->fields.sendEquipSum - sendEquipSumNF;
  this->fields.baseSvtEqFriendShipNum = baseEquipSum - this->fields.baseEquipSumNF;
  this->fields.sendSvtEqFriendShipNum = v30;
  if ( (v27 | 2) == 2 )
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
  v32 = __OFSUB__(sendServantKeep, sendEquipSumNF);
  v33 = sendServantKeep - sendEquipSumNF;
  v34 = v27 | 2;
  if ( (v33 < 0) ^ v32 | (v33 == 0) )
    v35 = 0;
  else
    v35 = v33;
  this->fields.sendSpace = v35;
  if ( v34 == 2 )
    baseEquipSum = this->fields.baseServantSum;
  if ( baseEquipSum >= v35 )
    v36 = v35;
  else
    v36 = baseEquipSum;
  this->fields.sendMax = v36;
  p_sendMax = &this->fields.sendMax;
  v38 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
    v38 = BalanceConfig_TypeInfo;
  }
  static_fields = v38->static_fields;
  if ( v36 > static_fields->ServantWarehouseSelectMax )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38, v26);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_sendMax = &static_fields->ServantWarehouseSelectMax;
  }
  v40 = *p_sendMax;
  servantTabLabel = this->fields.servantTabLabel;
  this->fields.sendMax = v40;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  baseServantSum = this->fields.baseServantSum;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantSum);
  baseServantKeep = this->fields.baseServantKeep;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseServantKeep);
  Instance = (__int64)System_String__Format_62415592(v42, v43, v44, 0LL);
  if ( !servantTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  baseEquipSumNF = this->fields.baseEquipSumNF;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipSumNF);
  baseEquipKeep = this->fields.baseEquipKeep;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseEquipKeep);
  Instance = (__int64)System_String__Format_62415592(v46, v47, v48, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_44;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  WarehouseListViewManager__CreateList((WarehouseListViewManager_o *)Instance, kind, setupInfo, v49);
  Instance = (__int64)this->fields.baseListViewManager;
  if ( !Instance )
    goto LABEL_44;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  WarehouseListManager__RefrashListDisp(this, v50);
}


void __fastcall WarehouseListManager__DestroyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0
  WarehouseListViewManager_o *v3; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, method);
  ListViewManager__DestroyList(baseListViewManager, 0LL);
  WarehouseListViewManager__SaveSortInfo(v3, v4);
}


void __fastcall WarehouseListManager__EndCloseSelectFilterKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__EndSelectFilterKind(
        WarehouseListManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, isDecide);
  WarehouseListViewManager__EndSelectFilterKind(baseListViewManager, isDecide, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__FilterButtonState(
        WarehouseListManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  ((void (__fastcall *)(struct UICommonButton_o *, int32_t, bool, Il2CppMethodPointer))filterButton->klass->vtable._14_SetState.method)(
    filterButton,
    state,
    animation,
    filterButton->klass->vtable._15_OnPress.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarehouseListManager__GetAmountSortValue(
        WarehouseListManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&svtId);
  return WarehouseListViewManager__GetAmountSortValue(baseListViewManager, svtId, method);
}


// local variable allocation has failed, the output may be wrong!
WarehouseListViewItem_o *__fastcall WarehouseListManager__GetItem(
        WarehouseListManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, normalSum);
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
    sub_1BCAA3C(0LL, choiceList);
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
    sub_1BCAA3C(0LL, lockList);
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
    sub_1BCAA3C(0LL, userSvtId);
  WarehouseListViewManager__ModifyItem(baseListViewManager, userSvtId, method);
}


void __fastcall WarehouseListManager__ModifyList(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, method);
  WarehouseListViewManager__Modify(baseListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__NumberAdjustment(
        WarehouseListManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&selectNum);
  WarehouseListViewManager__DecrementNumber(baseListViewManager, selectNum, method);
}


void __fastcall WarehouseListManager__OnClickDecide(WarehouseListManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_long__o *v17; // x20
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int64_array *v21; // x0

  if ( (byte_4B1417D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v11, v12);
    byte_4B1417D = 1;
  }
  if ( this->fields.totalSum >= 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
      v17 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v14,
                                                         v15,
                                                         v16);
      System_Collections_Generic_List_long____ctor(
        v17,
        (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
      baseListViewManager = this->fields.baseListViewManager;
      if ( !baseListViewManager || (WarehouseListViewManager__GetSelectList(baseListViewManager, v17, v19), !v17) )
        sub_1BCAA3C(baseListViewManager, v18);
      v21 = System_Collections_Generic_List_long___ToArray(
              v17,
              (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, System_Int64_array *, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        v21,
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
    sub_1BCAA3C(0LL, method);
  WarehouseListViewManager__OnClickFilterKind(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  int32_t totalSum; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B1417E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WarehouseListManager_OnClickReleaseAll__, method, v2);
    byte_4B1417E = 1;
  }
  v4 = Method_WarehouseListManager_OnClickReleaseAll__;
  totalSum = this->fields.totalSum;
  if ( (*((_BYTE *)Method_WarehouseListManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListManager_OnClickReleaseAll__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  if ( totalSum < 1 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    WarehouseListManager__ReleaseAll(this, v7);
  }
}


void __fastcall WarehouseListManager__OnClickScaleChange(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, method);
  WarehouseListViewManager__ChangeIconScale(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortAscendingOrder(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, method);
  WarehouseListViewManager__OnClickSortAscendingOrder(baseListViewManager, method);
}


void __fastcall WarehouseListManager__OnClickSortKind(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, method);
  WarehouseListViewManager__OnClickSortKind(baseListViewManager, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__OnSelectServant(
        WarehouseListManager_o *this,
        int32_t resultKind,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  WarehouseListViewManager_o *UserSvtId; // x0
  int32_t modeKind; // w8
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  PartyOrganizationUtility_o *p_callbackFunc; // x20
  struct WarehouseListManager_CallbackFunc_o *v24; // x21
  struct WarehouseListManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_long__o *v29; // x20
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  PartyOrganizationUtility_o *v33; // x20
  struct WarehouseListManager_CallbackFunc_o *v34; // x21
  struct WarehouseListManager_CallbackFunc_o *v35; // t1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_long__o *v39; // x20
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  System_Int64_array *v43; // x0
  Il2CppObject *m_target; // x5
  struct System_Reflection_MethodInfo_o *original_method_info; // x8
  __int64 v46; // x4
  __int64 v47; // x1
  __int64 index; // x3

  if ( (byte_4B1417F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, *(_QWORD *)&resultKind, item);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarehouseListManager_OnSelectServant__, v17, v18);
    byte_4B1417F = 1;
  }
  if ( resultKind == 2 )
  {
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( (unsigned int)(modeKind - 1) < 3 )
      {
        v21 = Method_WarehouseListManager_OnSelectServant__;
        if ( (*((_BYTE *)Method_WarehouseListManager_OnSelectServant__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListManager_OnSelectServant__);
        v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
      }
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
      v24 = callbackFunc;
      if ( callbackFunc )
      {
        p_callbackFunc->klass = 0LL;
        sub_1BCA784(p_callbackFunc, 0LL, (int64_t)item, (int32_t)method, v4, v5, v6, v7);
        v29 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_long__TypeInfo,
                                                           v26,
                                                           v27,
                                                           v28);
        System_Collections_Generic_List_long____ctor(
          v29,
          (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item
          || (UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                          item,
                                                          *(const MethodInfo **)&resultKind),
              !v29)
          || (items = v29->fields._items,
              v31 = Method_System_Collections_Generic_List_long__Add__,
              ++v29->fields._version,
              !items) )
        {
LABEL_35:
          sub_1BCAA3C(UserSvtId, *(_QWORD *)&resultKind);
        }
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v29,
            (int64_t)UserSvtId,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size] = (int64_t)UserSvtId;
        }
        v43 = System_Collections_Generic_List_long___ToArray(
                v29,
                (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
        m_target = v24->fields.m_target;
        original_method_info = v24->fields.original_method_info;
        v46 = *(_QWORD *)&v24->fields.extra_arg;
        v47 = 2LL;
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
        v35 = this->fields.callbackFunc;
        v33 = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
        v34 = v35;
        if ( !v35 )
          return;
        v33->klass = 0LL;
        sub_1BCA784(v33, 0LL, (int64_t)item, (int32_t)method, v4, v5, v6, v7);
        v39 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_long__TypeInfo,
                                                           v36,
                                                           v37,
                                                           v38);
        System_Collections_Generic_List_long____ctor(
          v39,
          (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
        if ( !item )
          goto LABEL_35;
        UserSvtId = (WarehouseListViewManager_o *)WarehouseListViewItem__get_UserSvtId(
                                                    item,
                                                    *(const MethodInfo **)&resultKind);
        if ( !v39 )
          goto LABEL_35;
        v40 = v39->fields._items;
        v41 = Method_System_Collections_Generic_List_long__Add__;
        ++v39->fields._version;
        if ( !v40 )
          goto LABEL_35;
        v42 = v39->fields._size;
        if ( (unsigned int)v42 >= v40->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v39,
            (int64_t)UserSvtId,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v39->fields._size = v42 + 1;
          v40->m_Items[v42] = (int64_t)UserSvtId;
        }
        v43 = System_Collections_Generic_List_long___ToArray(
                v39,
                (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
        index = (unsigned int)item->fields.index;
        m_target = v34->fields.m_target;
        original_method_info = v34->fields.original_method_info;
        v46 = *(_QWORD *)&v34->fields.extra_arg;
        v47 = 3LL;
        break;
      default:
        return;
    }
LABEL_34:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, System_Int64_array *, __int64, __int64))m_target)(
      original_method_info,
      v47,
      v43,
      index,
      v46);
  }
}


void __fastcall WarehouseListManager__RefrashListDisp(WarehouseListManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *allReleaseButton; // x0
  unsigned int v11; // w20
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int32_t totalSum; // w8
  System_String_o **v15; // x21
  int32_t sendSpace; // w10
  int v17; // w8
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  UILabel_o *sendDataLabel; // x20
  System_String_o *v21; // x21
  System_String_o *v22; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  int32_t sendKeep; // [xsp+0h] [xbp-40h] BYREF
  int32_t v26; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1417A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12533/*"SUM_OVER_INFO"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v8, v9);
    byte_4B1417A = 1;
  }
  *(_QWORD *)friendShipSum = 0LL;
  allReleaseButton = (System_String_o *)this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  v11 = 3;
  v12 = this->fields.totalSum <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    allReleaseButton,
    v12,
    1LL,
    allReleaseButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  totalSum = this->fields.totalSum;
  if ( totalSum < 1 )
  {
    v15 = (System_String_o **)&StringLiteral_12532/*"SUM_INFO"*/;
  }
  else
  {
    v15 = (System_String_o **)&StringLiteral_12532/*"SUM_INFO"*/;
    if ( totalSum <= this->fields.sendSpace )
    {
      v11 = 0;
    }
    else
    {
      WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v13);
      sendSpace = this->fields.sendSpace;
      v17 = this->fields.totalSum - friendShipSum[0];
      if ( v17 <= sendSpace )
        v11 = 0;
      else
        v11 = 3;
      if ( v17 > sendSpace )
        v15 = (System_String_o **)&StringLiteral_12533/*"SUM_OVER_INFO"*/;
    }
  }
  allReleaseButton = (System_String_o *)this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_22;
  ((void (__fastcall *)(System_String_o *, _QWORD, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    allReleaseButton,
    v11,
    1LL,
    allReleaseButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  WarehouseListManager__UpdateSelectDoneLabel(this, v18);
  sendDataLabel = this->fields.sendDataLabel;
  v21 = *v15;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v22 = LocalizationManager__Get(v21, 0LL);
  v26 = this->fields.sendSpace;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  sendKeep = this->fields.sendKeep;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendKeep);
  allReleaseButton = System_String__Format_62415592(v22, v23, v24, 0LL);
  if ( !sendDataLabel )
LABEL_22:
    sub_1BCAA3C(allReleaseButton, method);
  UILabel__set_text(sendDataLabel, allReleaseButton, 0LL);
}


void __fastcall WarehouseListManager__ReleaseAll(WarehouseListManager_o *this, const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v4; // x1

  baseListViewManager = this->fields.baseListViewManager;
  this->fields.totalSum = 0;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, method);
  WarehouseListViewManager__ReleaseAll(baseListViewManager, method);
  WarehouseListManager__RefrashListDisp(this, v4);
}


void __fastcall WarehouseListManager__SaveSortInfo(WarehouseListManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.baseListViewManager )
    sub_1BCAA3C(this, method);
  WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
}


void __fastcall WarehouseListManager__SetMode(
        WarehouseListManager_o *this,
        int32_t mode,
        WarehouseListManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  WarehouseListManager__SetMode_36480924(this, mode, v10);
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
void __fastcall WarehouseListManager__SetMode_36480924(
        WarehouseListManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarehouseListViewManager_o *baseListViewManager; // x21
  WarehouseListViewManager_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B1417C & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_WarehouseListManager_OnSelectServant__, v6, v7);
    byte_4B1417C = 1;
  }
  baseListViewManager = this->fields.baseListViewManager;
  v9 = (WarehouseListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                    WarehouseListViewManager_CallbackFunc_TypeInfo,
                                                    *(_QWORD *)&mode,
                                                    method,
                                                    v3);
  WarehouseListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListManager_OnSelectServant__,
    0LL);
  if ( !baseListViewManager )
    sub_1BCAA3C(v10, v11);
  baseListViewManager->fields.callbackFunc = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&baseListViewManager->fields.callbackFunc,
    (int64_t)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarehouseListViewManager__SetMode_36523224(baseListViewManager, mode, v18);
}


void __fastcall WarehouseListManager__SetServant(WarehouseListManager_o *this, const MethodInfo *method)
{
  struct WarehouseListViewManager_o *baseListViewManager; // x8

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(this, method);
  this->fields.totalSum = baseListViewManager->fields.selectSum;
}


void __fastcall WarehouseListManager__SortItem(WarehouseListManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *baseListViewManager; // x0

  baseListViewManager = (ListViewManager_o *)this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, method);
  ListViewManager__SortItem(baseListViewManager, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager__UpdateItemState(
        WarehouseListManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  WarehouseListViewManager_o *baseListViewManager; // x0

  baseListViewManager = this->fields.baseListViewManager;
  if ( !baseListViewManager )
    sub_1BCAA3C(0LL, isPushMode);
  WarehouseListViewManager__UpdateItemState(baseListViewManager, isPushMode, method);
}


void __fastcall WarehouseListManager__UpdateSelectDoneLabel(WarehouseListManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t totalSum; // w8
  UILabel_o *selectDoneLabel; // x0
  int32_t mWidth; // w1
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  UILabel_o *v15; // x20
  System_String_o **v16; // x8
  System_String_o *v17; // x21
  System_String_o *v18; // x21
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  int32_t sendMax; // [xsp+8h] [xbp-48h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-44h] BYREF
  int32_t friendShipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1417B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12533/*"SUM_OVER_INFO"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v8, v9);
    byte_4B1417B = 1;
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
  UILabel__SetCondensedScale(selectDoneLabel, mWidth, 0LL);
  WarehouseListManager__GetSelectItemNum(this, &friendShipSum[1], friendShipSum, v13);
  v15 = this->fields.selectDoneLabel;
  if ( this->fields.totalSum - friendShipSum[0] <= this->fields.sendMax )
    v16 = (System_String_o **)&StringLiteral_12532/*"SUM_INFO"*/;
  else
    v16 = (System_String_o **)&StringLiteral_12533/*"SUM_OVER_INFO"*/;
  v17 = *v16;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  v18 = LocalizationManager__Get(v17, 0LL);
  v22 = this->fields.totalSum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  sendMax = this->fields.sendMax;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sendMax);
  selectDoneLabel = (UILabel_o *)System_String__Format_62415592(v18, v19, v20, 0LL);
  if ( !v15 )
LABEL_18:
    sub_1BCAA3C(selectDoneLabel, method);
  UILabel__set_text(v15, (System_String_o *)selectDoneLabel, 0LL);
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

  if ( (byte_4B14177 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, value, method);
    byte_4B14177 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B14178 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, value, method);
    byte_4B14178 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  WarehouseListManager__SetServant(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListManager_CallbackFunc___ctor(
        WarehouseListManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0B3F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0B398;
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
  _QWORD v14[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v15; // [xsp+10h] [xbp-60h]
  int32_t v16; // [xsp+28h] [xbp-48h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-44h] BYREF

  v16 = n;
  v17 = kind;
  if ( (byte_4B14180 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, list);
    sub_1BCA7E0(&WarehouseListManager_ResultKind_TypeInfo, v11, v12);
    byte_4B14180 = 1;
  }
  v15 = 0u;
  v14[0] = j_il2cpp_value_box_0(WarehouseListManager_ResultKind_TypeInfo, &v17);
  v14[1] = list;
  *(_QWORD *)&v15 = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v14, callback, object);
}


void __fastcall WarehouseListManager_CallbackFunc__EndInvoke(
        WarehouseListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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