void __fastcall ServantOperationManager___ctor(ServantOperationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__CallOnSelect(
        ServantOperationManager_o *this,
        int32_t actionKind,
        System_Int64_array *servants,
        System_Int64_array *commandCodes,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onSelect; // x22
  System_Action_ServantSellMenu_ResultKind__long____long____o *v13; // x23
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect; // t1

  if ( (byte_40FD763 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__,
      *(_QWORD *)&actionKind);
    byte_40FD763 = 1;
  }
  onSelect = this->fields.onSelect;
  p_onSelect = (BattleServantConfConponent_o *)&this->fields.onSelect;
  v13 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0LL;
    sub_B16F98(
      p_onSelect,
      0LL,
      (System_String_array **)servants,
      (System_String_array **)commandCodes,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    System_Action_ServantSellMenu_ResultKind__long____long_____Invoke(
      v13,
      actionKind,
      servants,
      commandCodes,
      (const MethodInfo_24C6454 *)Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ChangeList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  ServantOperationManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v10; // x9
  ServantOperationListViewManager_o *v11; // x21
  System_Action_bool__o *v12; // x22
  const MethodInfo *v13; // x2
  __int64 v14; // x20
  __int64 v15; // x9
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x10
  ServantOperationListViewManager_o *v19; // x0
  struct ServantOperationListViewManager_array *v20; // x8
  __int64 v21; // x9
  ServantOperationListViewManager_o *v22; // x0

  v6 = this;
  if ( (byte_40FD756 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, *(_QWORD *)&kind);
    sub_B16FFC(&System_Action_bool__TypeInfo, v7);
    this = (ServantOperationManager_o *)sub_B16FFC(&Method_ServantOperationListViewManager_EndClickTabStatus__, v8);
    byte_40FD756 = 1;
  }
  servantOperationListViewManager = v6->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_16;
  v10 = v6->fields.kind;
  if ( (unsigned int)v10 >= servantOperationListViewManager->max_length )
    goto LABEL_23;
  v11 = servantOperationListViewManager->m_Items[v10];
  if ( !v11 )
    goto LABEL_16;
  if ( v11->fields.modeKind )
  {
    v12 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, *(_QWORD *)&kind, method, v3, v4);
    System_Action_bool____ctor(
      v12,
      (Il2CppObject *)v11,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(v11, v12, v13);
    servantOperationListViewManager = v6->fields.servantOperationListViewManager;
    v6->fields.kind = kind;
    if ( !servantOperationListViewManager )
      goto LABEL_16;
  }
  else
  {
    v6->fields.kind = kind;
  }
  v14 = 0LL;
  while ( 1 )
  {
    v15 = *(_QWORD *)&servantOperationListViewManager->max_length;
    if ( (int)v14 >= (int)v15 )
      break;
    if ( (unsigned int)v14 >= (unsigned int)v15 )
      goto LABEL_23;
    v16 = (UnityEngine_Component_o *)servantOperationListViewManager->m_Items[v14];
    if ( v16 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, (_DWORD)v14 == v6->fields.kind, 0LL);
        servantOperationListViewManager = v6->fields.servantOperationListViewManager;
        ++v14;
        if ( servantOperationListViewManager )
          continue;
      }
    }
    goto LABEL_16;
  }
  v18 = v6->fields.kind;
  if ( (unsigned int)v18 >= (unsigned int)v15 )
  {
LABEL_23:
    sub_B17100(this, *(_QWORD *)&kind, method);
    sub_B170A0();
  }
  v19 = servantOperationListViewManager->m_Items[v18];
  if ( !v19
    || (this = (ServantOperationManager_o *)((__int64 (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))v19->klass->vtable._5_SetSortButtonImage.method)(
                                              v19,
                                              v19->klass->vtable._6_GetDragRoot.methodPtr),
        (v20 = v6->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  v21 = v6->fields.kind;
  if ( (unsigned int)v21 >= v20->max_length )
    goto LABEL_23;
  v22 = v20->m_Items[v21];
  if ( !v22 )
    goto LABEL_16;
  ServantOperationListViewManager__SetFilterButtonImage(v22, *(const MethodInfo **)&kind);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ConfirmServantCheckEquipDialog(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  ServantCheckEquipDialog_ClickDelegate_o *v9; // x21

  if ( (byte_40FD75B & 1) == 0 )
  {
    sub_B16FFC(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantOperationManager_EndServantCheckEquip__, v7);
    byte_40FD75B = 1;
  }
  servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v9 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B170CC(
                                                      ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                      isDecide,
                                                      method,
                                                      v3,
                                                      v4);
    ServantCheckEquipDialog_ClickDelegate___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantOperationManager_EndServantCheckEquip__,
      0LL);
    if ( servantCheckEquipDialog )
    {
      ServantCheckEquipDialog__OpenShopLastCheck(servantCheckEquipDialog, v9, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  if ( !servantCheckEquipDialog )
    goto LABEL_8;
  ServantCheckEquipDialog__Close(this->fields.servantCheckEquipDialog, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__CreateList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *qpDataLabel; // x21
  int32_t totalQP; // w22
  System_String_o *NumberFormat; // x0
  UILabel_o *mpDataLabel; // x21
  System_String_o *v15; // x0
  UILabel_o *rpDataLabel; // x21
  System_String_o *v17; // x0
  WebViewManager_o *Instance; // x0
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t Count; // w21
  WebViewManager_o *v21; // x0
  UserServantMaster_o *v22; // x0
  BalanceConfig_c *v23; // x0
  int ServantSellSelectMax; // w21
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v26; // x22
  Il2CppObject *v27; // x23
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v36; // x3
  struct ServantOperationListViewManager_array *v37; // x8
  ServantOperationListViewManager_o *v38; // x0
  struct ServantOperationListViewManager_array *v39; // x8
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  const MethodInfo *v42; // x3
  struct ServantOperationListViewManager_array *v43; // x8
  ServantOperationListViewManager_o *v44; // x0
  struct ServantOperationListViewManager_array *v45; // x8
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x3
  struct ServantOperationListViewManager_array *v49; // x8
  ServantOperationListViewManager_o *v50; // x0
  const MethodInfo *v51; // x2
  int32_t SelectMax_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD755 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_12413, v10);
    byte_40FD755 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  ServantOperationManager__Init(this, *(const MethodInfo **)&kind);
  qpDataLabel = this->fields.qpDataLabel;
  totalQP = this->fields.totalQP;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(totalQP, 0LL);
  if ( !qpDataLabel )
    goto LABEL_47;
  UILabel__set_text(qpDataLabel, NumberFormat, 0LL);
  mpDataLabel = this->fields.mpDataLabel;
  v15 = LocalizationManager__GetNumberFormat(this->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_47;
  UILabel__set_text(mpDataLabel, v15, 0LL);
  rpDataLabel = this->fields.rpDataLabel;
  v17 = LocalizationManager__GetNumberFormat(this->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_47;
  UILabel__set_text(rpDataLabel, v17, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_47;
  Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21 )
    goto LABEL_47;
  v22 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v21,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v22 )
    goto LABEL_47;
  UserServantMaster__getCount(v22, &servantEquipSum[1], servantEquipSum, 0, 0LL);
  v23 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v23->static_fields->ServantSellSelectMax )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ServantSellSelectMax = v23->static_fields->ServantSellSelectMax;
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
      }
    }
    else
    {
      ServantSellSelectMax = v23->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  v29 = System_String__Format_43739268(v26, v27, v28, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_47;
  UILabel__set_text(selectDoneLabel, v29, 0LL);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_47;
  if ( !servantOperationListViewManager->max_length )
    goto LABEL_48;
  v34 = (UnityEngine_Component_o *)servantOperationListViewManager->m_Items[0];
  if ( !v34 )
    goto LABEL_47;
  gameObject = UnityEngine_Component__get_gameObject(v34, 0LL);
  if ( !gameObject )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v37 = this->fields.servantOperationListViewManager;
  if ( !v37 )
    goto LABEL_47;
  if ( !v37->max_length )
    goto LABEL_48;
  v38 = v37->m_Items[0];
  if ( !v38 )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList(v38, 0, 0, v36);
  v39 = this->fields.servantOperationListViewManager;
  if ( !v39 )
    goto LABEL_47;
  if ( v39->max_length <= 1 )
    goto LABEL_48;
  v40 = (UnityEngine_Component_o *)v39->m_Items[1];
  if ( !v40 )
    goto LABEL_47;
  v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
  if ( !v41 )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(v41, 1, 0LL);
  v43 = this->fields.servantOperationListViewManager;
  if ( !v43 )
    goto LABEL_47;
  if ( v43->max_length <= 1 )
    goto LABEL_48;
  v44 = v43->m_Items[1];
  if ( !v44 )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList(v44, 1, 0, v42);
  v45 = this->fields.servantOperationListViewManager;
  if ( !v45 )
    goto LABEL_47;
  if ( v45->max_length <= 2 )
    goto LABEL_48;
  v46 = (UnityEngine_Component_o *)v45->m_Items[2];
  if ( !v46
    || (v47 = UnityEngine_Component__get_gameObject(v46, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v47, 1, 0LL), (v49 = this->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_47:
    sub_B170D4();
  }
  if ( v49->max_length <= 2 )
  {
LABEL_48:
    sub_B17100(v30, v31, v32);
    sub_B170A0();
  }
  v50 = v49->m_Items[2];
  if ( !v50 )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList(v50, 2, 0, v48);
  ServantOperationManager__ChangeList(this, kind, v51);
}


void __fastcall ServantOperationManager__DestroyList(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x19
  int max_length; // w8
  unsigned int v5; // w20
  ServantOperationListViewManager_o *v6; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_9;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v6 = servantOperationListViewManager->m_Items[v5];
      if ( !v6 )
        break;
      ServantOperationListViewManager__DestroyList(v6, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall ServantOperationManager__EndCloseSelectFilterKind(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__EndSelectFilterKind(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, isDecide, method);
    sub_B170A0();
  }
  v5 = servantOperationListViewManager->m_Items[kind];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  ServantOperationListViewManager__EndSelectFilterKind(v5, isDecide, method);
}


void __fastcall ServantOperationManager__EndServantCheckEquip(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x0
  const MethodInfo *v6; // x1

  servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
  if ( !servantCheckEquipDialog )
    sub_B170D4();
  ServantCheckEquipDialog__Close(servantCheckEquipDialog, 0LL);
  if ( isDecide )
    ServantOperationManager__SellCombineWarning(this, v6);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantOperationManager__GetAmountSortValue(
        ServantOperationManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, *(_QWORD *)&svtId, method);
    sub_B170A0();
  }
  v5 = servantOperationListViewManager->m_Items[kind];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  return ServantOperationListViewManager__GetAmountSortValue(v5, svtId, method);
}


System_Collections_Generic_List_int__o *__fastcall ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t size; // w22
  System_Collections_Generic_List_int__o *v23; // x28
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *AllList; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_int__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_Dictionary_int__int__o *v36; // x22
  int32_t v37; // w8
  int32_t i; // w20
  ServantOperationListViewItem_o *v39; // x26
  int32_t v40; // w8
  int32_t SvtId_k__BackingField; // w24
  __int64 v42; // x28
  int32_t v43; // w25
  ServantOperationListViewItem_o *v44; // x8
  int32_t v45; // w9
  bool v46; // zf
  WebViewManager_o *v47; // x0
  WarQuestSelectionMaster_o *IsServant; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x24
  unsigned int v53; // w28
  UserServantEntity_o *v54; // x25
  __int64 v55; // x26
  __int64 v56; // x27
  int32_t v57; // w0
  ServantEntity_o *Entity; // x0
  __int64 v59; // x25
  __int64 v60; // x26
  int32_t v61; // w0
  int32_t v62; // w8
  unsigned int v63; // w20
  ServantOperationListViewItem_o *v64; // x9
  signed __int64 v65; // x8
  int32_t v66; // w23
  int v67; // w26
  unsigned __int64 v68; // x27
  int32_t v69; // w9
  System_Collections_Generic_List_int__o *v71; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_40FD75A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40FD75A = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_66;
  size = selectEquipedCommandCodeServantList->fields._size;
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    selectEquipedCommandCodeServantList,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_66;
    MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_66;
    AllList = UserServantMaster__getAllList(MasterData_WarQuestSelectionMaster, 0LL);
    v31 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v27,
                                                      v28,
                                                      v29,
                                                      v30);
    System_Collections_Generic_List_int____ctor(
      v31,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    v36 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v32,
                                                                 v33,
                                                                 v34,
                                                                 v35);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v36,
      (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v37 = selectEquipedCommandCodeServantList->fields._size;
    v71 = v23;
    if ( v37 >= 1 )
    {
      for ( i = 0; i < v37; ++i )
      {
        if ( v37 <= (unsigned int)i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v39 = selectEquipedCommandCodeServantList->fields._items->m_Items[i];
        if ( !v39 || !v36 )
          goto LABEL_66;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v36,
                v39->fields._SvtId_k__BackingField,
                (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          v40 = selectEquipedCommandCodeServantList->fields._size;
          SvtId_k__BackingField = v39->fields._SvtId_k__BackingField;
          if ( v40 >= 1 )
          {
            v42 = 0LL;
            v43 = 0;
            while ( 1 )
            {
              if ( v40 <= (unsigned int)v42 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v44 = selectEquipedCommandCodeServantList->fields._items->m_Items[v42];
              if ( !v44 )
                break;
              v45 = v44->fields._SvtId_k__BackingField;
              v40 = selectEquipedCommandCodeServantList->fields._size;
              ++v42;
              v46 = SvtId_k__BackingField == v45;
              SvtId_k__BackingField = v39->fields._SvtId_k__BackingField;
              if ( v46 )
                ++v43;
              if ( (int)v42 >= v40 )
                goto LABEL_24;
            }
LABEL_66:
            sub_B170D4();
          }
          v43 = 0;
LABEL_24:
          System_Collections_Generic_Dictionary_int__int___Add(
            v36,
            SvtId_k__BackingField,
            v43,
            (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v37 = selectEquipedCommandCodeServantList->fields._size;
      }
    }
    v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v47 )
      goto LABEL_66;
    IsServant = DataManager__GetMasterData_WarQuestSelectionMaster_(
                  (DataManager_o *)v47,
                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_66;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsServant;
      v53 = 0;
      do
      {
        if ( v53 >= max_length )
        {
          sub_B17100(IsServant, v49, v50);
          sub_B170A0();
        }
        v54 = AllList->m_Items[v53];
        if ( !v54 )
          goto LABEL_66;
        v56 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
        v55 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v72.fields.currentCryptoKey = v56;
        *(_QWORD *)&v72.fields.fakeValue = v55;
        v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v72, 0LL);
        if ( !v52 )
          goto LABEL_66;
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v52,
                                      v57,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_66;
        IsServant = (WarQuestSelectionMaster_o *)ServantEntity__get_IsServant(Entity, 0LL);
        if ( ((unsigned __int8)IsServant & 1) != 0 )
        {
          IsServant = (WarQuestSelectionMaster_o *)UserServantEntity__IsEventJoin(v54, 0LL);
          if ( ((unsigned __int8)IsServant & 1) == 0 )
          {
            v60 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
            v59 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v73.fields.currentCryptoKey = v60;
            *(_QWORD *)&v73.fields.fakeValue = v59;
            v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
            if ( !v31 )
              goto LABEL_66;
            System_Collections_Generic_List_int___Add(
              v31,
              v61,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v53 < max_length );
    }
    v62 = selectEquipedCommandCodeServantList->fields._size;
    v23 = v71;
    if ( v62 >= 1 )
    {
      v63 = 0;
      while ( 1 )
      {
        if ( v62 <= v63 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v64 = selectEquipedCommandCodeServantList->fields._items->m_Items[v63];
        if ( !v64 || !v31 )
          goto LABEL_66;
        LODWORD(v65) = v31->fields._size;
        v66 = v64->fields._SvtId_k__BackingField;
        if ( (int)v65 < 1 )
        {
          v67 = 0;
          if ( !v36 )
            goto LABEL_66;
        }
        else
        {
          v67 = 0;
          v68 = 0LL;
          do
          {
            if ( v68 >= (unsigned int)v65 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v69 = v31->fields._items->m_Items[v68 + 1];
            v65 = v31->fields._size;
            ++v68;
            if ( v66 == v69 )
              ++v67;
          }
          while ( (__int64)v68 < v65 );
          if ( !v36 )
            goto LABEL_66;
        }
        if ( System_Collections_Generic_Dictionary_int__int___get_Item(
               v36,
               v66,
               (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v67 )
        {
          if ( !v71 )
            goto LABEL_66;
          System_Collections_Generic_List_int___Add(
            v71,
            v66,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v62 = selectEquipedCommandCodeServantList->fields._size;
        if ( (int)++v63 >= v62 )
          return v23;
      }
    }
  }
  return v23;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationManager__GetSelectedEquipeCmdCardServantList(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  ServantOperationListViewManager_o *v4; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( !servantOperationListViewManager->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v4 = servantOperationListViewManager->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_B170D4();
  return ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(v4, method);
}


int32_t __fastcall ServantOperationManager__GetSelectedOrderByCommandCodeId(
        ServantOperationManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  ServantOperationListViewManager_o *v4; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( servantOperationListViewManager->max_length <= 2 )
  {
    sub_B17100(this, id, method);
    sub_B170A0();
  }
  v4 = servantOperationListViewManager->m_Items[2];
  if ( !v4 )
LABEL_5:
    sub_B170D4();
  return ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(v4, id, method);
}


int32_t __fastcall ServantOperationManager__GetSelectedOrderByServantId(
        ServantOperationManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v6; // w21

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_12;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        sub_B17100(this, id, method);
        sub_B170A0();
      }
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      if ( HIDWORD(this[2].fields.servantCheckEquipDialog) != 2 )
      {
        this = (ServantOperationManager_o *)ServantOperationListViewManager__GetSelectedOrderByUserServantId(
                                              (ServantOperationListViewManager_o *)this,
                                              id,
                                              method);
        if ( (int)this > 0 )
          return (int)this;
      }
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_9;
    }
LABEL_12:
    sub_B170D4();
  }
LABEL_9:
  LODWORD(this) = -1;
  return (int)this;
}


void __fastcall ServantOperationManager__Init(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0
  struct UICommonButton_o *decideButton; // x0

  allReleaseButton = this->fields.allReleaseButton;
  this->fields._TotalSum_k__BackingField = 0;
  *(_QWORD *)&this->fields.totalQP = 0LL;
  this->fields.totalRarePri = 0;
  if ( !allReleaseButton
    || (((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
          allReleaseButton,
          3LL,
          0LL,
          allReleaseButton->klass->vtable._15_OnPress.methodPtr),
        (decideButton = this->fields.decideButton) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    3LL,
    0LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall ServantOperationManager__InitBackListView(ServantOperationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  Il2CppClass **v5; // x8
  ServantOperationListViewManager_o *v6; // x19
  const MethodInfo *v7; // x2

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = &servantOperationListViewManager->obj.klass + kind;
  v6 = (ServantOperationListViewManager_o *)v5[4];
  if ( !v6 )
LABEL_5:
    sub_B170D4();
  ServantOperationListViewManager__StatusRequest((ServantOperationListViewManager_o *)v5[4], 0LL, v2);
  ServantOperationListViewManager__SetStatusKind(v6, 0, v7);
}


void __fastcall ServantOperationManager__ModifyItem(
        ServantOperationManager_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, selectedId, method);
    sub_B170A0();
  }
  v5 = servantOperationListViewManager->m_Items[kind];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  ServantOperationListViewManager__ModifyItem(v5, selectedId, method);
}


void __fastcall ServantOperationManager__ModifyListItem(
        ServantOperationManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v6; // w21
  ServantOperationListViewManager_o *v7; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_9;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        sub_B17100(this, userSvtId, method);
        sub_B170A0();
      }
      v7 = servantOperationListViewManager->m_Items[v6];
      if ( !v7 )
        break;
      ServantOperationListViewManager__ModifyItem(v7, userSvtId, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Collections_Generic_List_long__o *v46; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Collections_Generic_List_long__o *v58; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_Generic_List_ServantOperationListViewItem__o *SelectEquipedCommandCodeServantList; // x0
  const MethodInfo *v66; // x1
  __int64 v67; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  ServantOperationListViewManager_o *v69; // x0
  System_Collections_Generic_List_long__o *v70; // x23
  System_Collections_Generic_IEnumerable_T__o *SelectedServantIdList; // x0
  struct ServantOperationListViewManager_array *v72; // x8
  ServantOperationListViewManager_o *v73; // x0
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  System_Collections_Generic_IEnumerable_T__o *v75; // x0
  struct ServantOperationListViewManager_array *v76; // x8
  ServantOperationListViewManager_o *v77; // x0
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  System_Collections_Generic_IEnumerable_T__o *SelectedCommandCodeIdList; // x0
  struct ServantOperationListViewManager_array *v80; // x8
  ServantOperationListViewManager_o *v81; // x0
  struct ServantOperationListViewManager_array *v82; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v83; // x24
  ServantOperationListViewManager_o *v84; // x0
  System_Int32_array **EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v86; // x23
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  ServantOperationManager_o *v93; // x0
  const MethodInfo *v94; // x2
  System_Collections_Generic_List_int__o *EquipedCommandCodeSellLastSvtList; // x0
  int32_t size; // w8
  System_Collections_Generic_List_long__o *v97; // x0
  int v98; // w25
  Il2CppObject *current; // x24
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  Il2CppObject *v103; // x21
  System_String_o *v104; // x19
  EventCampaignMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCombineExpCampaign; // x0
  EventCampaignEntity_o *v107; // x8
  System_String_o *v108; // x0
  System_String_o *v109; // x21
  CommonUI_o *v110; // x22
  System_String_o *v111; // x23
  System_String_o *v112; // x24
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  CommonConfirmDialog_ClickDelegate_o *v117; // x25
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v119; // x21
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  ServantCheckEquipDialog_ClickDelegate_o *v124; // x22
  int32_t v125; // w0
  const MethodInfo *v126; // x1
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v128; // [xsp+30h] [xbp-90h] BYREF
  int v129; // [xsp+4Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v130; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FD759 & 1) == 0 )
  {
    sub_B16FFC(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCampaignMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__AddRange__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v21);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26);
    sub_B16FFC(&SoundManager_TypeInfo, v27);
    sub_B16FFC(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__, v28);
    sub_B16FFC(&ServantOperationManager___c__DisplayClass44_0_TypeInfo, v29);
    sub_B16FFC(&StringLiteral_5739, v30);
    sub_B16FFC(&StringLiteral_3255, v31);
    sub_B16FFC(&StringLiteral_3258, v32);
    sub_B16FFC(&StringLiteral_5737, v33);
    sub_B16FFC(&StringLiteral_1, v34);
    byte_40FD759 = 1;
  }
  memset(&v130, 0, sizeof(v130));
  v129 = 0;
  v35 = sub_B170CC(ServantOperationManager___c__DisplayClass44_0_TypeInfo, method, v2, v3, v4);
  ServantOperationManager___c__DisplayClass44_0___ctor((ServantOperationManager___c__DisplayClass44_0_o *)v35, 0LL);
  if ( !v35 )
    goto LABEL_75;
  *(_QWORD *)(v35 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v35 + 24), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v46 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44,
                                                       v45);
    System_Collections_Generic_List_long____ctor(
      v46,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v46;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.selectUserServantIdList,
      (System_Int32_array **)v46,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v58 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v54,
                                                       v55,
                                                       v56,
                                                       v57);
    System_Collections_Generic_List_long____ctor(
      v58,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v58;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.selectUserCommandCodeIdList,
      (System_Int32_array **)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_75;
    if ( !servantOperationListViewManager->max_length )
      goto LABEL_76;
    v69 = servantOperationListViewManager->m_Items[0];
    if ( !v69 )
      goto LABEL_75;
    v70 = *p_selectUserServantIdList;
    SelectedServantIdList = (System_Collections_Generic_IEnumerable_T__o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                             v69,
                                                                             v66);
    if ( !v70 )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      v70,
      SelectedServantIdList,
      (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
    v72 = this->fields.servantOperationListViewManager;
    if ( !v72 )
      goto LABEL_75;
    if ( v72->max_length <= 1 )
      goto LABEL_76;
    v73 = v72->m_Items[1];
    if ( !v73 )
      goto LABEL_75;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    v75 = (System_Collections_Generic_IEnumerable_T__o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                           v73,
                                                           v66);
    if ( !selectUserServantIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      v75,
      (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
    v76 = this->fields.servantOperationListViewManager;
    if ( !v76 )
      goto LABEL_75;
    if ( v76->max_length <= 2 )
      goto LABEL_76;
    v77 = v76->m_Items[2];
    if ( !v77 )
      goto LABEL_75;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                                 v77,
                                                                                 v66);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      SelectedCommandCodeIdList,
      (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
    v80 = this->fields.servantOperationListViewManager;
    if ( !v80 )
      goto LABEL_75;
    if ( !v80->max_length )
      goto LABEL_76;
    v81 = v80->m_Items[0];
    if ( !v81 )
      goto LABEL_75;
    SelectEquipedCommandCodeServantList = ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                            v81,
                                            v66);
    v82 = this->fields.servantOperationListViewManager;
    if ( !v82 )
      goto LABEL_75;
    if ( v82->max_length <= 1 )
    {
LABEL_76:
      sub_B17100(SelectEquipedCommandCodeServantList, v66, v67);
      sub_B170A0();
    }
    v83 = SelectEquipedCommandCodeServantList;
    v84 = v82->m_Items[1];
    if ( !v84 )
      goto LABEL_75;
    EquipMaterialList = (System_Int32_array **)ServantOperationListViewManager__GetEquipMaterialList(v84, v66);
    *(_QWORD *)(v35 + 16) = EquipMaterialList;
    v86 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v35 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v35 + 16), EquipMaterialList, v87, v88, v89, v90, v91, v92);
    EquipedCommandCodeSellLastSvtList = ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(v93, v83, v94);
    if ( !EquipedCommandCodeSellLastSvtList )
      goto LABEL_75;
    size = EquipedCommandCodeSellLastSvtList->fields._size;
    v97 = this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = size > 0;
    if ( !v97 )
      goto LABEL_75;
    System_Collections_Generic_List_long___GetEnumerator(
      &v128,
      v97,
      (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v130 = v128;
    v98 = 0;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v130,
              (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v130.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B170D4();
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)current,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_B170D4();
      v98 |= UserServantEntity__IsExchangeSvt(Entity, 0LL);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v130,
      (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v98 & 1) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v103 = (Il2CppObject *)StringLiteral_1;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_5737, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        ExchangeSvtCombineExpCampaign = EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                          Master_WarQuestSelectionMaster,
                                          0LL);
        if ( ExchangeSvtCombineExpCampaign )
        {
          if ( ExchangeSvtCombineExpCampaign->fields._size >= 1 )
          {
            v107 = ExchangeSvtCombineExpCampaign->fields._items->m_Items[0];
            if ( v107 )
            {
              v129 = v107->fields.value / 1000;
              v103 = (Il2CppObject *)System_Int32__ToString((int32_t)&v129, 0LL);
            }
          }
        }
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v108 = LocalizationManager__Get((System_String_o *)StringLiteral_5739, 0LL);
        v109 = System_String__Format_43739268(v108, v103, v103, 0LL);
        v110 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v111 = LocalizationManager__Get((System_String_o *)StringLiteral_3258, 0LL);
        v112 = LocalizationManager__Get((System_String_o *)StringLiteral_3255, 0LL);
        v117 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                        v113,
                                                        v114,
                                                        v115,
                                                        v116);
        CommonConfirmDialog_ClickDelegate___ctor(
          v117,
          (Il2CppObject *)v35,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0LL);
        if ( v110 )
        {
          CommonUI__OpenConfirmDecideDlg(v110, v104, v109, v111, v112, v117, 24, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
          return;
        }
      }
LABEL_75:
      sub_B170D4();
    }
    if ( !*v86 )
      goto LABEL_75;
    if ( (*v86)->fields._size < 1 )
    {
      if ( !*p_selectUserServantIdList )
        goto LABEL_75;
      if ( (*p_selectUserServantIdList)->fields._size > 0 )
        goto LABEL_79;
      if ( !*p_selectUserCommandCodeIdList )
        goto LABEL_75;
      if ( (*p_selectUserCommandCodeIdList)->fields._size < 1 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v125 = 2;
      }
      else
      {
LABEL_79:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v125 = 0;
      }
      SoundManager__playSystemSe(v125, 0LL);
      ServantOperationManager__SellCombineWarning(this, v126);
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
      v119 = *v86;
      v124 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B170CC(
                                                          ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                          v120,
                                                          v121,
                                                          v122,
                                                          v123);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v124,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( !servantCheckEquipDialog )
        goto LABEL_75;
      ServantCheckEquipDialog__Open_23854092(servantCheckEquipDialog, v119, v124, 0LL);
    }
  }
}


void __fastcall ServantOperationManager__OnClickFilter2Kind(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = servantOperationListViewManager->m_Items[kind];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  ServantOperationListViewManager__OnClickFilter2Kind(v5, method);
}


void __fastcall ServantOperationManager__OnClickFilterKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = servantOperationListViewManager->m_Items[kind];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  ServantOperationListViewManager__OnClickFilterKind(v5, method);
}


void __fastcall ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FD760 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD760 = 1;
  }
  if ( this->fields._TotalSum_k__BackingField <= 0 )
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
    ServantOperationManager__ReleaseAll(this, v3);
  }
}


void __fastcall ServantOperationManager__OnClickSortAscendingOrder(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = servantOperationListViewManager->m_Items[kind];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  ServantOperationListViewManager__OnClickSortAscendingOrder(v5, method);
}


void __fastcall ServantOperationManager__OnClickSortKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = servantOperationListViewManager->m_Items[kind];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  ServantOperationListViewManager__OnClickSortKind(v5, method);
}


void __fastcall ServantOperationManager__OnSelectServant(
        ServantOperationManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_long__o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_long__o *v15; // x20
  __int64 v16; // x0
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v21; // x8
  int64_t UserCommandCodeId; // x0
  System_Int64_array *v23; // x0
  int64_t UserSvtId; // x0
  System_Int64_array *v25; // x21
  System_Int64_array *v26; // x3
  const MethodInfo *v27; // x4

  if ( (byte_40FD762 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, selectItem);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v9);
    byte_40FD762 = 1;
  }
  v10 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectItem,
                                                     method,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v11,
                                                     v12,
                                                     v13,
                                                     v14);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(v16, v17, v18);
    sub_B170A0();
  }
  v21 = servantOperationListViewManager->m_Items[kind];
  if ( !v21 || !selectItem )
    goto LABEL_14;
  if ( v21->fields.kind == 2 )
  {
    UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, v17);
    if ( v15 )
    {
      System_Collections_Generic_List_long___Add(
        v15,
        UserCommandCodeId,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v10 )
      {
        v23 = System_Collections_Generic_List_long___ToArray(
                v10,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_B170D4();
  }
  UserSvtId = ServantOperationListViewItem__get_UserSvtId(selectItem, v17);
  if ( !v10 )
    goto LABEL_14;
  System_Collections_Generic_List_long___Add(
    v10,
    UserSvtId,
    (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
  v23 = System_Collections_Generic_List_long___ToArray(
          v10,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v15 )
    goto LABEL_14;
LABEL_13:
  v25 = v23;
  v26 = System_Collections_Generic_List_long___ToArray(
          v15,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v25, v26, v27);
}


void __fastcall ServantOperationManager__OpenSellConfirmDialog(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v4; // x0
  System_Int64_array *v5; // x20
  System_Int64_array *v6; // x3
  const MethodInfo *v7; // x4

  if ( (byte_40FD75F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, method);
    byte_40FD75F = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (v4 = System_Collections_Generic_List_long___ToArray(
               selectUserServantIdList,
               (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_B170D4();
  }
  v5 = v4;
  v6 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 1, v5, v6, v7);
}


void __fastcall ServantOperationManager__RefrashListDisp(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  ServantOperationManager_o *v4; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x21
  int max_length; // w8
  int v7; // w22
  ServantOperationListViewManager_o *v8; // x0
  int32_t v9; // w20
  int v10; // w8
  UILabel_o *qpDataLabel; // x21
  System_String_o *NumberFormat; // x0
  UILabel_o *mpDataLabel; // x20
  System_String_o *v14; // x0
  UILabel_o *rpDataLabel; // x20
  System_String_o *v16; // x0
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v18; // x1
  struct UICommonButton_o *decideButton; // x0
  __int64 v20; // x1
  int32_t rarePri; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t mana[2]; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_40FD757 & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FD757 = 1;
  }
  *(_QWORD *)mana = 0LL;
  rarePri = 0;
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  *(_QWORD *)&v4->fields.totalQP = 0LL;
  v4->fields.totalRarePri = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_26;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = servantOperationListViewManager->m_Items[v7];
      if ( !v8 )
        goto LABEL_26;
      ServantOperationListViewManager__SumItems(v8, &mana[1], mana, &rarePri, v3);
      ++v7;
      v9 = mana[1] + v4->fields.totalQP;
      v10 = mana[0] + v4->fields.totalMana;
      v4->fields.totalQP = v9;
      v4->fields.totalMana = v10;
      v4->fields.totalRarePri += rarePri;
      max_length = servantOperationListViewManager->max_length;
      if ( v7 >= max_length )
        goto LABEL_11;
    }
  }
  v9 = 0;
LABEL_11:
  qpDataLabel = v4->fields.qpDataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(v9, 0LL);
  if ( !qpDataLabel )
    goto LABEL_26;
  UILabel__set_text(qpDataLabel, NumberFormat, 0LL);
  mpDataLabel = v4->fields.mpDataLabel;
  v14 = LocalizationManager__GetNumberFormat(v4->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_26;
  UILabel__set_text(mpDataLabel, v14, 0LL);
  rpDataLabel = v4->fields.rpDataLabel;
  v16 = LocalizationManager__GetNumberFormat(v4->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_26;
  UILabel__set_text(rpDataLabel, v16, 0LL);
  allReleaseButton = v4->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_26;
  v18 = v4->fields._TotalSum_k__BackingField <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    v18,
    1LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
  decideButton = v4->fields.decideButton;
  if ( !decideButton )
LABEL_26:
    sub_B170D4();
  if ( v4->fields._TotalSum_k__BackingField <= 0 )
    v20 = 3LL;
  else
    v20 = 0LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    v20,
    1LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall ServantOperationManager__ReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantOperationManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v8; // w21
  ServantOperationListViewManager_o *v9; // x0
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v11; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_40FD761 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    this = (ServantOperationManager_o *)sub_B16FFC(&StringLiteral_12413, v5);
    byte_40FD761 = 1;
  }
  servantOperationListViewManager = v3->fields.servantOperationListViewManager;
  v3->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_15;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v9 = servantOperationListViewManager->m_Items[v8];
      if ( !v9 )
        break;
      ServantOperationListViewManager__ReleaseAll(v9, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_9;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_9:
  selectDoneLabel = v3->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  TotalSum_k__BackingField = v3->fields._TotalSum_k__BackingField;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = v3->fields._SelectMax_k__BackingField;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  v14 = System_String__Format_43739268(v11, v12, v13, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_15;
  UILabel__set_text(selectDoneLabel, v14, 0LL);
  ServantOperationManager__RefrashListDisp(v3, v15);
}


void __fastcall ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v37; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_long__o *v45; // x0
  Il2CppObject *current; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x1
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x22
  ServantOperationManager___c_c *v55; // x0
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x23
  Il2CppObject *v58; // x24
  struct ServantOperationManager___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x1
  const MethodInfo *v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v71; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v72; // x22
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FD75C & 1) == 0 )
  {
    sub_B16FFC(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750744, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v15);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_B16FFC(&Method_System_Predicate_UserServantEntity___ctor__, v17);
    sub_B16FFC(&System_Predicate_UserServantEntity__TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, v20);
    sub_B16FFC(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__, v21);
    sub_B16FFC(&ServantOperationManager___c__DisplayClass51_0_TypeInfo, v22);
    sub_B16FFC(&ServantOperationManager___c_TypeInfo, v23);
    byte_40FD75C = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v24 = sub_B170CC(ServantOperationManager___c__DisplayClass51_0_TypeInfo, method, v2, v3, v4);
  ServantOperationManager___c__DisplayClass51_0___ctor((ServantOperationManager___c__DisplayClass51_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_29;
  *(_QWORD *)(v24 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_29;
  size = selectUserServantIdList->fields._size;
  v37 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B170CC(
                                                                           System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                           v31,
                                                                           v32,
                                                                           v33,
                                                                           v34);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v37,
    size,
    (const MethodInfo_2F250E4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750744);
  *(_QWORD *)(v24 + 24) = v37;
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v24 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)v37, v39, v40, v41, v42, v43, v44);
  v45 = this->fields.selectUserServantIdList;
  if ( !v45 )
    goto LABEL_29;
  System_Collections_Generic_List_long___GetEnumerator(
    &v73,
    v45,
    (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v74 = v73;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v74,
            (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v74.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !*v38 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *v38,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v74,
    (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v54 = *v38;
  v55 = ServantOperationManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v55 = ServantOperationManager___c_TypeInfo;
  }
  static_fields = v55->static_fields;
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_UserServantEntity__TypeInfo,
                                                                          v50,
                                                                          v51,
                                                                          v52,
                                                                          v53);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v58,
      Method_ServantOperationManager___c__SellCombineWarning_b__51_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_UserServantEntity___ctor__);
    v59 = ServantOperationManager___c_TypeInfo->static_fields;
    v59->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)_9__51_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v59->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  if ( !v54 )
    goto LABEL_29;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v54,
         (System_Predicate_T__o *)_9__51_0,
         (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v71 = *(System_Collections_Generic_List_UserServantEntity__o **)(v24 + 24);
    v72 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B170CC(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v66,
                                                         v67,
                                                         v68,
                                                         v69);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v72,
      (Il2CppObject *)v24,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v71, v72, 0LL);
      return;
    }
LABEL_29:
    sub_B170D4();
  }
  ServantOperationManager__SellSSRareWarning(this, (System_Collections_Generic_List_UserServantEntity__o *)*v38, v67);
}


void __fastcall ServantOperationManager__SellMaterialTdWarning(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_long__o *v28; // x0
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x21
  WebViewManager_o *v34; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x22
  void *monitor; // x23
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  int32_t v38; // w1
  WarEntity_o *v39; // x22
  WebViewManager_o *v40; // x0
  UserServantCollectionMaster_o *v41; // x23
  int64_t UserId; // x0
  int64_t v43; // x24
  int32_t v44; // w0
  UserServantCollectionEntity_o *v45; // x0
  UserServantCollectionEntity_o *v46; // x22
  WebViewManager_o *v47; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x0
  WarEntity_o *v49; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v55; // x22
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v56; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+10h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_40FD75E & 1) == 0 )
  {
    sub_B16FFC(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750744, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v20);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B16FFC(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_40FD75E = 1;
  }
  memset(&v59, 0, sizeof(v59));
  tdInfo = 0LL;
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_49;
  size = selectUserServantIdList->fields._size;
  v56 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B170CC(
                                                                           System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v56,
    size,
    (const MethodInfo_2F250E4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750744);
  v28 = this->fields.selectUserServantIdList;
  if ( !v28 )
    goto LABEL_49;
  System_Collections_Generic_List_long___GetEnumerator(
    &v57,
    v28,
    (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v59 = v57;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v59,
            (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v59.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entity;
    if ( !Entity )
      sub_B170D4();
    if ( UserServantEntity__IsMaterialTd(Entity, 0LL) )
    {
      v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v34 )
        sub_B170D4();
      v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v34,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v33[2].klass;
      monitor = v33[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v60.fields.currentCryptoKey = klass;
      *(_QWORD *)&v60.fields.fakeValue = monitor;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL);
      if ( !v35 )
        sub_B170D4();
      v39 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v35,
              v38,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v40 )
        sub_B170D4();
      v41 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v40,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v39 )
        sub_B170D4();
      v43 = UserId;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v39->fields.name,
              0LL);
      if ( !v41 )
        sub_B170D4();
      v45 = UserServantCollectionMaster__GetEntity(v41, v43, v44, 0LL);
      v46 = v45;
      if ( v45 && UserServantCollectionEntity__IsGet(v45, 0LL) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v46, &tdInfo, -1, -1, 0LL);
        v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v47 )
          sub_B170D4();
        v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v47,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_B170D4();
        if ( !v48 )
          sub_B170D4();
        v49 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v48,
                tdInfo->fields.id,
                (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v49 )
          sub_B170D4();
        if ( v46->fields.treasureDeviceLv1 != v49->fields.bannerId )
        {
          if ( !v56 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v56,
            v33,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v59,
    (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v56 )
    goto LABEL_49;
  if ( v56->fields._size >= 1 )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v55 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B170CC(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v50,
                                                         v51,
                                                         v52,
                                                         v53);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v55,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        servantCheckWarningDialog,
        (System_Collections_Generic_List_UserServantEntity__o *)v56,
        v55,
        0LL);
      return;
    }
LABEL_49:
    sub_B170D4();
  }
  ServantOperationManager__OpenSellConfirmDialog(this, v50);
}


void __fastcall ServantOperationManager__SellSSRareWarning(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ServantOperationManager___c_c *v13; // x0
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_0; // x21
  Il2CppObject *v16; // x22
  struct ServantOperationManager___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v29; // x22

  if ( (byte_40FD75D & 1) == 0 )
  {
    sub_B16FFC(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, userSvtEntityList);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v7);
    sub_B16FFC(&Method_System_Predicate_UserServantEntity___ctor__, v8);
    sub_B16FFC(&System_Predicate_UserServantEntity__TypeInfo, v9);
    sub_B16FFC(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__, v10);
    sub_B16FFC(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, v11);
    sub_B16FFC(&ServantOperationManager___c_TypeInfo, v12);
    byte_40FD75D = 1;
  }
  v13 = ServantOperationManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v13 = ServantOperationManager___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_UserServantEntity__TypeInfo,
                                                                          userSvtEntityList,
                                                                          method,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v16,
      Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_UserServantEntity___ctor__);
    v17 = ServantOperationManager___c_TypeInfo->static_fields;
    v17->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v17->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !userSvtEntityList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)userSvtEntityList,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v29 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B170CC(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v24,
                                                         v25,
                                                         v26,
                                                         v27);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(servantCheckWarningDialog, userSvtEntityList, v29, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
  ServantOperationManager__SellMaterialTdWarning(this, v24);
}


void __fastcall ServantOperationManager__SetFilter2Text(
        ServantOperationManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *filter2Label; // x0

  filter2Label = this->fields.filter2Label;
  if ( !filter2Label )
    sub_B170D4();
  UILabel__set_text(filter2Label, text, 0LL);
}


void __fastcall ServantOperationManager__SetMode(
        ServantOperationManager_o *this,
        int32_t mode,
        System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onSelect = onSelect;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onSelect,
    (System_Int32_array **)onSelect,
    (System_String_array **)onSelect,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationManager__SetMode_31646184(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__SetMode_31646184(
        ServantOperationManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  ServantOperationManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v11; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

  v6 = this;
  if ( (byte_40FD758 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantOperationListViewItem___ctor__, *(_QWORD *)&mode);
    sub_B16FFC(&System_Action_ServantOperationListViewItem__TypeInfo, v7);
    this = (ServantOperationManager_o *)sub_B16FFC(&Method_ServantOperationManager_OnSelectServant__, v8);
    byte_40FD758 = 1;
  }
  servantOperationListViewManager = v6->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v6->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, *(_QWORD *)&mode, method);
    sub_B170A0();
  }
  v11 = servantOperationListViewManager->m_Items[kind];
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_ServantOperationListViewItem__TypeInfo,
                                                                               *(_QWORD *)&mode,
                                                                               method,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_ServantOperationManager_OnSelectServant__,
    (const MethodInfo_24B7310 *)Method_System_Action_ServantOperationListViewItem___ctor__);
  if ( !v11 )
LABEL_7:
    sub_B170D4();
  v11->fields.onSelectServant = (struct System_Action_ServantOperationListViewItem__o *)v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v11->fields.onSelectServant,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ServantOperationListViewManager__SetMode_31622628(v11, mode, v19);
}


void __fastcall ServantOperationManager__SortItem(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ListViewManager_o *v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = (ListViewManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  ListViewManager__SortItem(v5, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager___SellMaterialTdWarning_b__53_0(
        ServantOperationManager_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
    ServantOperationManager__OpenSellConfirmDialog(this, (const MethodInfo *)decide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager___SellSSRareWarning_b__52_1(
        ServantOperationManager_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
    ServantOperationManager__SellMaterialTdWarning(this, (const MethodInfo *)decide);
}


void __fastcall ServantOperationManager__filterButtonState(
        ServantOperationManager_o *this,
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


bool __fastcall ServantOperationManager__get_IsSellEquipedCmdCodeLastServant(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}


int32_t __fastcall ServantOperationManager__get_SelectMax(ServantOperationManager_o *this, const MethodInfo *method)
{
  return this->fields._SelectMax_k__BackingField;
}


int32_t __fastcall ServantOperationManager__get_TotalSum(ServantOperationManager_o *this, const MethodInfo *method)
{
  return this->fields._TotalSum_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__numberAdjustment(
        ServantOperationManager_o *this,
        int32_t selectNum,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v6; // w21
  ServantOperationListViewManager_o *v7; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_9;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        sub_B17100(this, *(_QWORD *)&selectNum, method);
        sub_B170A0();
      }
      v7 = servantOperationListViewManager->m_Items[v6];
      if ( !v7 )
        break;
      ServantOperationListViewManager__decrementNumber(v7, selectNum, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall ServantOperationManager__setServant(
        ServantOperationManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  int v3; // w9

  if ( flag )
    v3 = 1;
  else
    v3 = -1;
  this->fields._TotalSum_k__BackingField += v3;
}


void __fastcall ServantOperationManager__set_IsSellEquipedCmdCodeLastServant(
        ServantOperationManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = value;
}


void __fastcall ServantOperationManager__set_SelectMax(
        ServantOperationManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectMax_k__BackingField = value;
}


void __fastcall ServantOperationManager__set_TotalSum(
        ServantOperationManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TotalSum_k__BackingField = value;
}


void __fastcall ServantOperationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F763C & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationManager___c_TypeInfo, v1);
    byte_40F763C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantOperationManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantOperationManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantOperationManager___c___ctor(ServantOperationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantOperationManager___c___SellCombineWarning_b__51_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_23749848(x, 0LL);
}


bool __fastcall ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40F763D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, x);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F763D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_13;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v11 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
  if ( !v9
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v9,
                                      v12,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  return ServantEntity__get_IsServant(Entity, 0LL) && UserServantEntity__getRarity(x, 0LL) == 5;
}


void __fastcall ServantOperationManager___c__DisplayClass44_0___ctor(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager___c__DisplayClass44_0___OnClickDecide_b__0(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CommonUI_o *Instance; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x20

  if ( (byte_40F763E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flag);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__, v8);
    sub_B16FFC(&ServantOperationManager___c__DisplayClass44_1_TypeInfo, v9);
    byte_40F763E = 1;
  }
  v10 = sub_B170CC(ServantOperationManager___c__DisplayClass44_1_TypeInfo, flag, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 24) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v10 + 24),
          (System_Int32_array **)this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        *(_BYTE *)(v10 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v10,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseConfirmDialog_18237824(Instance, v22, 0LL);
}


void __fastcall ServantOperationManager___c__DisplayClass44_1___ctor(
        ServantOperationManager___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantOperationManager___c__DisplayClass44_1___OnClickDecide_b__1(
        ServantOperationManager___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantOperationManager___c__DisplayClass44_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *equipedMaterialList; // x19
  struct ServantOperationManager_o *_4__this; // x20
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x21
  __int64 v12; // x22
  __int64 v13; // x9
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F763F & 1) == 0 )
  {
    sub_B16FFC(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__, v7);
    byte_40F763F = 1;
  }
  if ( this->fields.flag )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_12;
    equipedMaterialList = CS___8__locals1->fields.equipedMaterialList;
    if ( !equipedMaterialList )
      goto LABEL_12;
    _4__this = CS___8__locals1->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
    if ( equipedMaterialList->fields._size >= 1 )
    {
      servantCheckEquipDialog = _4__this->fields.servantCheckEquipDialog;
      v12 = sub_B170CC(ServantCheckEquipDialog_ClickDelegate_TypeInfo, method, v2, v3, v4);
      v13 = *(_QWORD *)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v12 + 40) = Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v12 + 16) = v13;
      *(_QWORD *)(v12 + 32) = _4__this;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v12 + 32),
        (System_Int32_array **)_4__this,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      if ( servantCheckEquipDialog )
      {
        ServantCheckEquipDialog__Open_23854092(
          servantCheckEquipDialog,
          equipedMaterialList,
          (ServantCheckEquipDialog_ClickDelegate_o *)v12,
          0LL);
        return;
      }
LABEL_12:
      sub_B170D4();
    }
    ServantOperationManager__SellCombineWarning(CS___8__locals1->fields.__4__this, 0LL);
  }
}


void __fastcall ServantOperationManager___c__DisplayClass51_0___ctor(
        ServantOperationManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantOperationManager___c__DisplayClass51_0___SellCombineWarning_b__1(
        ServantOperationManager___c__DisplayClass51_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
  {
    if ( !this->fields.__4__this )
      sub_B170D4();
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, 0LL);
  }
}